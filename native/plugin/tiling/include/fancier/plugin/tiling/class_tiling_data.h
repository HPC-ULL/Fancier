#ifndef _CLASS_TILING_DATA_H_
#define _CLASS_TILING_DATA_H_

#include <memory>
#include <set>
#include <string>

#include <fancier/plugin/tiling/data_entry_set.h>
#include <fancier/plugin/tiling/unique_ptr_content_comp.h>


struct fcpClassTilingData {
  std::string pkgClassName;
  std::set< std::unique_ptr<fcpDataEntrySet>, UniquePtrContentComp<fcpDataEntrySet> > entrySets;

  fcpClassTilingData (std::string pkgClassName): pkgClassName(pkgClassName) {}

  template <uint8_t N>
  DimDataEntrySet<N>* fcPluginTiling_getDataEntrySet (const char* kernelName) {
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

      DataHeader header;
      header.numDims = newEntrySet->dims;

      if (fcUtils_writeFileData(fd, (char*) &header, sizeof(DataHeader)) < 0 || close(fd) < 0)
        return NULL;

      // Insert the new entry set
      iter = entrySets.insert(std::move(newEntrySet)).first;
    }

    return static_cast<DimDataEntrySet<N>*>(iter->get());
  }
};

#endif // _CLASS_TILING_DATA_H_
