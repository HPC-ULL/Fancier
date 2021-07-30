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

#include <fancier/plugin/tiling/data_entry.h>
#include <fancier/utils.h>

#include <sys/types.h>

#include <unistd.h>

#define IO_BUFFER_SZ (4 * 1024)  // 4K


int fcPluginTiling_writeEntry(int fd, size_t idx, bool isNewEntry, const void* entry,
                              size_t entrySz) {
  // If sizeof(fcpDataHeader) + (idx * entrySz) exceeds the size of the file, the new data is
  // appended If not, it is replaced at the right spot isNewEntry is used when inserting at the
  // middle of the file. It ensures that no data is replaced
  off_t fileSize = lseek(fd, 0, SEEK_END);
  off_t entryPos = lseek(fd, sizeof(fcpDataHeader) + idx * entrySz, SEEK_SET);

  if (fileSize < 0 || entryPos < 0)
    return -1;

  char buffer[IO_BUFFER_SZ];

  if (isNewEntry && fileSize > entryPos) {
    // Move all following entries towards the end of the file before inserting the new one
    off_t currentEntryOffset = lseek(fd, -entrySz, SEEK_END);

    while (currentEntryOffset >= entryPos) {
      if (fcUtils_readFileData(fd, (char*) buffer, entrySz) < 0)
        return -1;

      if (fcUtils_writeFileData(fd, (char*) buffer, entrySz) < 0)
        return -1;

      currentEntryOffset = lseek(fd, -3 * entrySz, SEEK_CUR);
    }

    if (currentEntryOffset < 0)
      return -1;

    // Resposition to the place where the new entry has to be written
    if (lseek(fd, entryPos, SEEK_SET) < 0)
      return -1;
  }

  // Insert the new entry at its position
  if (fcUtils_writeFileData(fd, (char*) entry, entrySz) < 0)
    return -1;

  return fdatasync(fd);
}
