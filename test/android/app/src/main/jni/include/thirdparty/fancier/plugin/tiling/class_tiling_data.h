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

#ifndef _CLASS_TILING_DATA_H_
#define _CLASS_TILING_DATA_H_

#include <fancier/plugin/tiling/data_entry_set.h>
#include <fancier/plugin/tiling/unique_ptr_content_comp.h>

#include <memory>
#include <set>
#include <string>


struct fcpClassTilingData {
  std::string pkgClassName;
  std::set<std::unique_ptr<fcpDataEntrySet>, fcpUniquePtrContentComp<fcpDataEntrySet>> entrySets;

  fcpClassTilingData(std::string pkgClassName): pkgClassName(pkgClassName) {}

  template<uint8_t N>
  DimDataEntrySet<N>* fcPluginTiling_getDataEntrySet(const char* kernelName) {
    // Find in entrySets the fcpDataEntrySet with the specified name
    std::unique_ptr<fcpDataEntrySet> newEntrySet(new DimDataEntrySet<N>);
    newEntrySet->fullKernelName = pkgClassName + "." + kernelName;
    auto iter = entrySets.find(newEntrySet);

    // Create a new DimDataEntrySet<N> if it doesn't exist
    if (iter == entrySets.end()) {
      // Create file and write header
      std::string fileName = FC_CACHE_BASE_PATH;
      fileName.append(FC_PLUGIN_TILING_SUBDIR_NAME "/").append(newEntrySet->fullKernelName);

      int fd = fcUtils_createOpenFile(fileName.c_str(), O_RDWR);
      if (fd < 0)
        return NULL;

      fcpDataHeader header;
      header.numDims = newEntrySet->dims;

      if (fcUtils_writeFileData(fd, (char*) &header, sizeof(fcpDataHeader)) < 0 || close(fd) < 0)
        return NULL;

      // Insert the new entry set
      iter = entrySets.insert(std::move(newEntrySet)).first;
    }

    return static_cast<DimDataEntrySet<N>*>(iter->get());
  }
};

#endif  // _CLASS_TILING_DATA_H_
