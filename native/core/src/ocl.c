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

#include <fancier/exception.h>
#define FC_LOG_TAG "ocl"
#include <fancier/log.h>
#include <fancier/ocl.h>
#include <fancier/utils.h>

#include <inttypes.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIZE   1024 * 8  // 8K buffer
#define MATH_LIB_NAME "math_lib.cl"


// Public global variables

fcOpenCLInfo fcOpenCL_info = {0};
fcOpenCLRT fcOpenCL_rt = {0};


// Private helper functions

static cl_platform_id* getPlatformIDs(cl_uint* numPlatforms, cl_int* err) {
  cl_int __tmp_err;
  if (!err)
    err = &__tmp_err;

  cl_platform_id* platforms = NULL;
  *numPlatforms = 0;

  *err = clGetPlatformIDs(0, NULL, numPlatforms);

  if (*err == CL_SUCCESS) {
    platforms = calloc(*numPlatforms, sizeof(cl_platform_id));
    *err = clGetPlatformIDs(*numPlatforms, platforms, NULL);
  }

  return platforms;
}

static cl_device_id* getDeviceIDs(cl_platform_id platformId, cl_uint* numDevices, cl_int* err) {
  cl_int __tmp_err;
  if (!err)
    err = &__tmp_err;

  cl_device_id* devices = NULL;
  *numDevices = 0;

  *err = clGetDeviceIDs(platformId, CL_DEVICE_TYPE_ALL, 0, NULL, numDevices);

  if (*err == CL_SUCCESS) {
    devices = calloc(*numDevices, sizeof(cl_device_id));
    *err = clGetDeviceIDs(platformId, CL_DEVICE_TYPE_ALL, *numDevices, devices, NULL);
  }

  return devices;
}

static void fillfcOpenCLInfo() {
  cl_int err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_TYPE, sizeof(cl_device_type),
                               &fcOpenCL_info.deviceType, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_TYPE");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_GLOBAL_MEM_CACHE_SIZE, sizeof(cl_ulong),
                        &fcOpenCL_info.globalCache, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_GLOBAL_MEM_CACHE_SIZE");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_GLOBAL_MEM_SIZE, sizeof(cl_ulong),
                        &fcOpenCL_info.globalMemory, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_GLOBAL_MEM_SIZE");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_HOST_UNIFIED_MEMORY, sizeof(cl_bool),
                        &fcOpenCL_info.unifiedMemory, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_HOST_UNIFIED_MEMORY");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_LOCAL_MEM_SIZE, sizeof(cl_ulong),
                        &fcOpenCL_info.localMemory, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_LOCAL_MEM_SIZE");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_MAX_COMPUTE_UNITS, sizeof(cl_uint),
                        &fcOpenCL_info.computeUnits, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_MAX_COMPUTE_UNITS");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_MAX_WORK_GROUP_SIZE, sizeof(size_t),
                        &fcOpenCL_info.workgroupSize, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_MAX_WORK_GROUP_SIZE");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR, sizeof(cl_uint),
                        &fcOpenCL_info.preferredCharVectorWidth, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR, sizeof(cl_uint),
                        &fcOpenCL_info.nativeCharVectorWidth, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT, sizeof(cl_uint),
                        &fcOpenCL_info.preferredFloatVectorWidth, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT");

  err = clGetDeviceInfo(fcOpenCL_rt.device, CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT, sizeof(cl_uint),
                        &fcOpenCL_info.nativeFloatVectorWidth, NULL);
  FC_EXCEPTION_HANDLE_ERROR_LOG(err, "fillfcOpenCLInfo:CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT");
}

static void logOpenCLDeviceInfo(cl_device_id deviceId) {
  union {
    char t[BUFFER_SIZE];
    cl_uint ui;
    cl_ulong ul;
    size_t s;
    cl_bool b;
    cl_device_type dt;
  } buffer;

  clGetDeviceInfo(deviceId, CL_DEVICE_NAME, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("    - Device: %s", buffer.t);

  clGetDeviceInfo(deviceId, CL_DEVICE_VERSION, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Version: %s", buffer.t);

  clGetDeviceInfo(deviceId, CL_DEVICE_PROFILE, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Profile: %s", buffer.t);

  clGetDeviceInfo(deviceId, CL_DEVICE_EXTENSIONS, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Extensions: %s", buffer.t);

  clGetDeviceInfo(deviceId, CL_DEVICE_VENDOR, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Vendor: %s", buffer.t);

  clGetDeviceInfo(deviceId, CL_DEVICE_TYPE, BUFFER_SIZE, buffer.t, NULL);
  cl_device_type deviceType = buffer.dt;

  buffer.t[0] = '\0';
  if (deviceType & CL_DEVICE_TYPE_CPU)
    strcat(buffer.t, " CPU");
  if (deviceType & CL_DEVICE_TYPE_GPU)
    strcat(buffer.t, " GPU");
  if (deviceType & CL_DEVICE_TYPE_ACCELERATOR)
    strcat(buffer.t, " ACCELERATOR");
  if (deviceType & CL_DEVICE_TYPE_DEFAULT)
    strcat(buffer.t, " DEFAULT");

  FC_LOGINFO_FMT("      - Device type:%s", buffer.t);

  clGetDeviceInfo(deviceId, CL_DEVICE_MAX_COMPUTE_UNITS, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Compute units: %u", buffer.ui);

  clGetDeviceInfo(deviceId, CL_DEVICE_MAX_WORK_GROUP_SIZE, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Max work group size: %zu", buffer.s);

  clGetDeviceInfo(deviceId, CL_DEVICE_HOST_UNIFIED_MEMORY, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Unified memory: %s", (buffer.b ? "YES" : "NO"));

  clGetDeviceInfo(deviceId, CL_DEVICE_GLOBAL_MEM_SIZE, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Global memory size: %" PRIu64 " KB", buffer.ul / 1024UL);

  clGetDeviceInfo(deviceId, CL_DEVICE_LOCAL_MEM_SIZE, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Local memory size: %" PRIu64 " KB", buffer.ul / 1024UL);

  clGetDeviceInfo(deviceId, CL_DEVICE_GLOBAL_MEM_CACHE_SIZE, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Cache memory size: %" PRIu64 " KB", buffer.ul / 1024UL);

  clGetDeviceInfo(deviceId, CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Preferred char vector width: %u", buffer.ui);

  clGetDeviceInfo(deviceId, CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Native char vector width: %u", buffer.ui);

  clGetDeviceInfo(deviceId, CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Preferred float vector width: %u", buffer.ui);

  clGetDeviceInfo(deviceId, CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT, BUFFER_SIZE, buffer.t, NULL);
  FC_LOGINFO_FMT("      - Native float vector width: %u", buffer.ui);
}

static void logOpenCLPlatformInfo(cl_platform_id platformId) {
  cl_uint numDevices, i;
  cl_device_id* devices = getDeviceIDs(fcOpenCL_rt.platform, &numDevices, NULL);

  char buffer[BUFFER_SIZE];

  clGetPlatformInfo(platformId, CL_PLATFORM_NAME, BUFFER_SIZE, buffer, NULL);
  FC_LOGINFO_FMT("- Platform: %s", buffer);

  clGetPlatformInfo(platformId, CL_PLATFORM_VERSION, BUFFER_SIZE, buffer, NULL);
  FC_LOGINFO_FMT("  - Version: %s", buffer);

  clGetPlatformInfo(platformId, CL_PLATFORM_PROFILE, BUFFER_SIZE, buffer, NULL);
  FC_LOGINFO_FMT("  - Profile: %s", buffer);

  clGetPlatformInfo(platformId, CL_PLATFORM_EXTENSIONS, BUFFER_SIZE, buffer, NULL);
  FC_LOGINFO_FMT("  - Extensions: %s", buffer);

  clGetPlatformInfo(platformId, CL_PLATFORM_VENDOR, BUFFER_SIZE, buffer, NULL);
  FC_LOGINFO_FMT("  - Vendor: %s", buffer);

  FC_LOGINFO_FMT("  - Number of devices: %u", numDevices);
//  for (i = 0; i < numDevices; ++i)
//    logOpenCLDeviceInfo(devices[i]);

  if (devices)
    free(devices);
}


// Public API implementation

jint fcOpenCL_initJNI(JNIEnv* env) {
  cl_int err;

  // Platform select
  cl_uint numPlatforms;
  cl_platform_id* platforms = getPlatformIDs(&numPlatforms, &err);

  if (platforms) {
    // TODO Maybe do something more intelligent?
    
    // cambiado por paula (para probar) [vuelto al original]
    fcOpenCL_rt.platform = platforms[0];
    //fcOpenCL_rt.platform = platforms[1];
    free(platforms);
  }

  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcOpenCL_initJNI", FC_EXCEPTION_OTHER);

  // Device select
  cl_uint numDevices;
  cl_device_id* devices = getDeviceIDs(fcOpenCL_rt.platform, &numDevices, &err);

  if (devices) {
    // TODO Maybe do something more intelligent?
    fcOpenCL_rt.device = devices[0];
    free(devices);
  }

  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcOpenCL_initJNI", FC_EXCEPTION_OTHER);

  fillfcOpenCLInfo();
  fcOpenCL_logInfo();

  fcOpenCL_rt.context = clCreateContext(NULL, 1, &fcOpenCL_rt.device, NULL, NULL, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcOpenCL_initJNI", FC_EXCEPTION_OTHER);  

  fcOpenCL_rt.queue = clCreateCommandQueue(fcOpenCL_rt.context, fcOpenCL_rt.device,
                                           CL_QUEUE_PROFILING_ENABLE, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcOpenCL_initJNI", FC_EXCEPTION_OTHER);

  return FC_EXCEPTION_SUCCESS;
}

void fcOpenCL_releaseJNI(JNIEnv* env) {
  if (fcOpenCL_rt.queue)
    clReleaseCommandQueue(fcOpenCL_rt.queue);

  if (fcOpenCL_rt.context)
    clReleaseContext(fcOpenCL_rt.context);

  fcOpenCL_rt.platform = NULL;
  fcOpenCL_rt.device = NULL;
  fcOpenCL_rt.context = NULL;
  fcOpenCL_rt.queue = NULL;
}

void fcOpenCL_logInfo() {
  cl_uint numPlatforms, i;
  cl_platform_id* platforms = getPlatformIDs(&numPlatforms, NULL);
  
  FC_LOGINFO_FMT("- Number of platforms: %u", numPlatforms);
  for (i = 0; i < numPlatforms; ++i)
    logOpenCLPlatformInfo(platforms[i]);
  
  if (platforms)
    free(platforms);
}

cl_program fcOpenCL_compileKernel(int count, const char** src, cl_int* err) {
  cl_int __tmp_err;
  if (err == NULL)
    err = &__tmp_err;

  cl_program program = clCreateProgramWithSource(fcOpenCL_rt.context, count, src, NULL, err);
  if (*err)
    return NULL;

  *err = clBuildProgram(program, 1, &fcOpenCL_rt.device, "-cl-fast-relaxed-math", NULL, NULL);
  return program;
}

cl_program fcOpenCL_compileKernelFile(const char* kernel_dir, const char* file_name, cl_int* err) {
  cl_int __tmp_err;
  if (err == NULL)
    err = &__tmp_err;

  size_t lengths[2];
  char* src[2];

  // Read Fancier OpenCL library
  *err = fcUtils_readFile(kernel_dir, MATH_LIB_NAME, &lengths[0], &src[0]);
  if (*err)
    return NULL;

  // Read program
  *err = fcUtils_readFile(kernel_dir, file_name, &lengths[1], &src[1]);
  if (*err) {
    free(src[0]);
    return NULL;
  }

  // Compile and return program
  cl_program program = fcOpenCL_compileKernel(2, (const char**) src, err);
  free(src[0]);
  free(src[1]);
  return program;
}

#ifdef __ANDROID__

cl_program fcOpenCL_compileKernelAsset(JNIEnv* env, jobject asset_manager, const char* kernel_dir,
                                       const char* file_name, cl_int* err) {
  cl_int __tmp_err;
  if (err == NULL)
    err = &__tmp_err;

  size_t lengths[2];
  char* src[2];

  // Read Fancier OpenCL library
  *err = fcUtils_readAsset(env, asset_manager, kernel_dir, MATH_LIB_NAME, &lengths[0], &src[0]);
  if (*err)
    return NULL;

  // Read program
  *err = fcUtils_readAsset(env, asset_manager, kernel_dir, file_name, &lengths[1], &src[1]);
  if (*err) {
    free(src[0]);
    return NULL;
  }

  // Compile and return program
  cl_program program = fcOpenCL_compileKernel(2, (const char**) src, err);
  free(src[0]);
  free(src[1]);
  return program;
}

#endif  // __ANDROID__
