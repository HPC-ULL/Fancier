/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

#define FC_LOG_TAG "libfancier"

#include <fancier.h>
#include <fancier/utils.h>

#include <string>
#include <sys/stat.h>
#include <sys/types.h>

#include <dlfcn.h>
#include <fcntl.h>
#include <unistd.h>


/// The name of the directory where the last update time of each generated
/// class is stored, allowing the detection of outdated cached data
#define UPDATE_SUBDIR_NAME "es.ull.pcg.fancier.update"


typedef jint (*SetupFunc)(JNIEnv* env);

//
// Global variables
//

const char* FC_CACHE_BASE_PATH = NULL;
std::string FC_CACHE_BASE_PATH_STR;

static fcInt initCount = 0;


//
// Private helper functions
//

static jint runSetupFunction(SetupFunc setup, JNIEnv* env) {
  return (!setup) ? FC_EXCEPTION_INVALID_STATE : setup(env);
}

static jint runSharedSetupFunction(void* libHandle, const char* funcName, JNIEnv* env) {
  jint retValue = 0;

  if (libHandle) {
    retValue = runSetupFunction((SetupFunc) dlsym(libHandle, funcName), env);
    dlclose(libHandle);
  }

  return retValue;
}

static std::string pluginLibraryName(JNIEnv* env, jstring pluginName) {
  const char* plugin = FC_JNI_CALL(env, GetStringUTFChars, pluginName, NULL);

  std::string library = "lib";
  library.append(plugin).append(".so");

  FC_JNI_CALL(env, ReleaseStringUTFChars, pluginName, plugin);
  return library;
}

/**
 * Makes sure the necessary directories required in order to store data that
 * prevents unnecessary repetition of work between executions of the generated
 * programs exist.
 * @return A negative value if the directory creation was not possible or zero if
 *         these directories were created or they already existed.
 */
bool setupPrivateFancierDirs() {
  DIR* dir = fcUtils_createOpenDir(FC_CACHE_BASE_PATH);

  if (dir)
    closedir(dir);
  else
    return true;

  std::string baseUpdatePath = FC_CACHE_BASE_PATH;
  baseUpdatePath.append(UPDATE_SUBDIR_NAME "/");

  dir = fcUtils_createOpenDir(baseUpdatePath.c_str());

  if (!dir)
    return true;

  closedir(dir);
  return false;
}


//
// Java Interface Implementation
//

FANCIER_API JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_Fancier_initNative__Ljava_lang_String_2(JNIEnv* env, jclass cls,
                                                                    jstring basePath) {
  FC_CACHE_BASE_PATH = env->GetStringUTFChars(basePath, NULL);
  FC_CACHE_BASE_PATH_STR = FC_CACHE_BASE_PATH;
  env->ReleaseStringUTFChars(basePath, FC_CACHE_BASE_PATH);

  FC_CACHE_BASE_PATH_STR += "/";
  FC_CACHE_BASE_PATH = FC_CACHE_BASE_PATH_STR.c_str();

  jint err = fcFancier_initJNI(env);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFancier_initJNI", JNI_TRUE);

  return JNI_FALSE;
}

FANCIER_API JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_Fancier_releaseNative(JNIEnv* env,
                                                                                     jclass cls) {
  fcFancier_releaseJNI(env);
}

FANCIER_API JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_Fancier_loadPluginNative__Ljava_lang_String_2(JNIEnv* env, jclass cls,
                                                                          jstring pluginName) {
  std::string library = pluginLibraryName(env, pluginName);
  void* handle = dlopen(library.c_str(), RTLD_LAZY);

  jint err = runSharedSetupFunction(handle, "loadFancierPlugin", env);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "Fancier_loadPluginNative", JNI_TRUE);

  return JNI_FALSE;
}

FANCIER_API JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_Fancier_unloadPluginNative__Ljava_lang_String_2(JNIEnv* env, jclass cls,
                                                                            jstring pluginName) {
  // FIXME We call dlopen() twice and never dlclose()
  std::string library = pluginLibraryName(env, pluginName);
  void* handle = dlopen(library.c_str(), RTLD_LAZY);

  jint err = runSharedSetupFunction(handle, "unloadFancierPlugin", env);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "Fancier_unloadPluginNative", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

// TODO Separate into its own source and header
bool fcCache_updateStoredClassData(const char* className, uint64_t lastCodeUpdateTime) {
  bool newUpdate = false;

  // Open file
  std::string fileName = FC_CACHE_BASE_PATH;
  fileName.append(UPDATE_SUBDIR_NAME "/").append(className);

  int fd = fcUtils_createOpenFile(fileName.c_str(), O_RDWR);

  if (fd < 0)
    return true;

  // Read previous data, if it exists
  uint64_t prevUpdateTime;
  if (fcUtils_readFileData(fd, (char*) &prevUpdateTime, sizeof(uint64_t)) < 0 ||
      prevUpdateTime != lastCodeUpdateTime) {
    newUpdate = true;

    // Write lastCodeUpdateTime
    lseek(fd, 0, SEEK_SET);
    fcUtils_writeFileData(fd, (char*) &lastCodeUpdateTime, sizeof(uint64_t));
  }

  close(fd);
  return newUpdate;
}

jint fcFancier_initJNI(JNIEnv* env) {
  if (setupPrivateFancierDirs())
    return FC_EXCEPTION_DIR_ERROR;

  jint err = FC_EXCEPTION_SUCCESS;

  if (++initCount == 1) {
    if ((err = fcException_initJNI(env)))
      return err;

    if ((err = fcVector_initJNI(env)))
      return err;

    if ((err = fcArray_initJNI(env)))
      return err;

    if ((err = fcVectorArray_initJNI(env)))
      return err;

    if ((err = fcImage_initJNI(env)))
      return err;

    if ((err = fcOpenCL_initJNI(env)))
      return err;
  }

  return err;
}

void fcFancier_releaseJNI(JNIEnv* env) {
  if (initCount == 1) {
    fcOpenCL_releaseJNI(env);
    fcImage_releaseJNI(env);
    fcVectorArray_releaseJNI(env);
    fcArray_releaseJNI(env);
    fcVector_releaseJNI(env);
    fcException_releaseJNI(env);
  }

  if (--initCount < 0)
    initCount = 0;
}
