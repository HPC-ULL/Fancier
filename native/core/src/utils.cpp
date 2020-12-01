#include <fancier/utils.h>

#include <sys/stat.h>

#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <unistd.h>


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
