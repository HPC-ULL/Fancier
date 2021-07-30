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
#include <fancier/math.h>
#include <fancier/utils.h>

#include <sys/stat.h>

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#ifdef __ANDROID__
#include <android/asset_manager_jni.h>

#define ASSET_BLOCK_SIZE 1024
#endif  // __ANDROID__


uint64_t fcUtils_getCurrentTimeNs() {
  struct timespec t;

  if (clock_gettime(CLOCK_MONOTONIC, &t) < 0)
    return UINT64_MAX;

  return ((uint64_t) t.tv_sec) * FC_NANOSECONDS_PER_SECOND + t.tv_nsec;
}

uint32_t fcUtils_getElapsedTimeUs(uint64_t prevTimeNs) {
  uint64_t curTimeNs = fcUtils_getCurrentTimeNs();

  return (curTimeNs == UINT64_MAX || prevTimeNs == UINT64_MAX) ?
             UINT32_MAX :
             (uint32_t)((curTimeNs - prevTimeNs) / FC_NANOSECONDS_PER_MICROSECOND);
}

DIR* fcUtils_createOpenDir(const char* path) {
  DIR* base_dir = opendir(path);

  if (!base_dir) {
    // Return if there was an error running opendir
    if (errno != ENOENT)
      return NULL;

    // Create dir and check error
    if (mkdir(path, S_IRWXU | S_IRWXG | S_IXOTH) < 0)
      return NULL;

    // Try to open it again
    base_dir = opendir(path);
  }

  return base_dir;
}

int fcUtils_createOpenFile(const char* fileName, int openMode) {
  return open(fileName, O_CREAT | openMode, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
}

int fcUtils_writeFileData(int fd, const char* data, size_t count) {
  size_t written = 0;

  while (written < count) {
    ssize_t last_write = write(fd, data + written, count - written);

    if (last_write <= 0)
      return -1;

    written += last_write;
  }

  return 0;
}

int fcUtils_readFileData(int fd, char* data, size_t count) {
  size_t read_bytes = 0;

  while (read_bytes < count) {
    ssize_t last_read = read(fd, data + read_bytes, count - read_bytes);

    if (last_read <= 0)
      return -1;

    read_bytes += last_read;
  }

  return 0;
}

int fcUtils_readFile(const char* dirName, const char* fileName, size_t* length, char** out) {
  if (length == NULL || out == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  *length = 0;
  *out = NULL;

  // Construct path
  size_t dir_name_len = strlen(dirName);
  size_t file_name_len = strlen(fileName);

  char* path = malloc(sizeof(char) * (dir_name_len + file_name_len + 2));
  sprintf(path, "%s/%s", dirName, fileName);

  // Open file
  struct stat file_info;
  int fd = fcUtils_createOpenFile(path, O_RDONLY);
  free(path);

  if (fd < 0)
    return FC_EXCEPTION_FILE_ERROR;

  if (fstat(fd, &file_info)) {
    close(fd);
    return FC_EXCEPTION_FILE_ERROR;
  }

  // Read file into memory
  *length = file_info.st_size;
  *out = malloc(*length + 1);
  if (fcUtils_readFileData(fd, *out, *length)) {
    close(fd);
    free(*out);
    *out = NULL;
    *length = 0;
    return FC_EXCEPTION_FILE_ERROR;
  }

  (*out)[*length] = '\0';
  close(fd);
  return FC_EXCEPTION_SUCCESS;
}

#ifdef __ANDROID__

fcError fcUtils_readAsset(JNIEnv* env, jobject asset_manager, const char* dir_name,
                          const char* file_name, size_t* length, char** out) {
  if (asset_manager == NULL || length == NULL || out == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  *length = 0;
  *out = NULL;

  AAssetManager* assets = AAssetManager_fromJava(env, asset_manager);
  if (!assets)
    return FC_EXCEPTION_BAD_PARAMETER;

  AAssetDir* asset_dir = AAssetManager_openDir(assets, dir_name);
  if (!asset_dir)
    return FC_EXCEPTION_DIR_ERROR;

  const char* asset_name;
  while ((asset_name = AAssetDir_getNextFileName(asset_dir)) != NULL) {
    // Find the selected asset
    if (strcmp(asset_name, file_name) == 0) {
      AAsset* asset = AAssetManager_open(assets, asset_name, AASSET_MODE_STREAMING);
      *length = AAsset_getLength64(asset);

      // Read the asset contents into a new buffer
      *out = malloc(*length + 1);
      off64_t remaining, offset = 0;
      while ((remaining = AAsset_getRemainingLength64(asset)) > 0) {
        size_t block_size = fcMath_min(ASSET_BLOCK_SIZE, remaining);

        // Abort in case of read error
        int bytes_read;
        if ((bytes_read = AAsset_read(asset, *out + offset, block_size)) < 0) {
          free(*out);
          *length = 0;
          *out = NULL;
          AAsset_close(asset);
          AAssetDir_close(asset_dir);
          return FC_EXCEPTION_FILE_ERROR;
        }

        offset += bytes_read;
      }

      (*out)[*length] = '\0';
      AAsset_close(asset);
      break;
    }
  }

  AAssetDir_close(asset_dir);
  return FC_EXCEPTION_SUCCESS;
}

#endif  // __ANDROID__
