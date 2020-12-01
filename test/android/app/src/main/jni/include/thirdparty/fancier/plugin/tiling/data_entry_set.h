#ifndef _DATA_ENTRY_SET_H_
#define _DATA_ENTRY_SET_H_

#include <fancier/plugin/tiling.h>
#include <fancier/plugin/tiling/data_entry.h>
#include <fancier/utils.h>

#include <cstdarg>
#include <set>
#include <string>

#include <unistd.h>


struct fcpDataEntrySet {
  const uint8_t dims;
  std::string fullKernelName;

  fcpDataEntrySet(uint8_t dims): dims(dims) {}
  virtual ~fcpDataEntrySet() = default;

  bool operator<(const fcpDataEntrySet& other) const {
    return fullKernelName < other.fullKernelName;
  }

  virtual fcpDataEntry* getDataEntry(size_t* idx, va_list args) {
    return NULL;
  }

  virtual int readEntries(int fd) {
    return -1;
  }
};


template<uint8_t N>
struct DimDataEntrySet: public fcpDataEntrySet {
  std::set<fcpDimDataEntry<N>> entries;

  DimDataEntrySet(): fcpDataEntrySet(N) {}
  virtual ~DimDataEntrySet() = default;

  virtual fcpDataEntry* getDataEntry(size_t* idx, va_list args) {
    fcpDimDataEntry<N> elem;
    size_t localIdx;
    bool entryExists = false;

    for (uint8_t i = 0; i < N; ++i)
      elem.inputDim[i] = va_arg(args, size_t);

    // Find the specified data entry or the most similar, if it doesn't exist
    auto iter = entries.lower_bound(elem);
    if (iter == entries.end()) {
      // Point to the last entry
      if (!entries.empty())
        --iter;
    }
    else {
      if (elem == *iter) {
        entryExists = true;
      }
      else if (iter != entries.begin()) {
        // Decrement if the previous entry is closer
        size_t diff = iter->getTotalInputDim() - elem.getTotalInputDim();
        --iter;
        if (elem.getTotalInputDim() - iter->getTotalInputDim() > diff)
          ++iter;
      }
    }

    // Create a new entry
    if (!entryExists) {
      elem.bestTimeUs = UINT32_MAX;
      elem.incDirection = DIR_POS(0);
      elem.flags = FLAG_EXPL_IMPROVED;

      // This is the first data entry
      if (iter == entries.end()) {
        for (uint8_t i = 0; i < N; ++i)
          elem.bestTile[i] = MIN_TILE_SIZE;
      }
      // There are other data entries that can be used to populate this one
      else {
        // Signal that smaller values have to be explored
        elem.flags |= FLAG_EXPL_NEG;

        // Use the tile size values of the closest entry found
        for (uint8_t i = 0; i < N; ++i)
          elem.bestTile[i] = iter->bestTile[i];
      }

      // Insert the new data entry and point iter to it
      iter = entries.insert(elem).first;
    }

    // Calculate the index of the specified data entry if needed
    if (idx || !entryExists) {
      auto auxIter = entries.begin();
      localIdx = 0;
      while (auxIter != iter) {
        ++auxIter;
        ++localIdx;
      }
    }

    if (!entryExists) {
      // Open the file and add the entry
      std::string fileName = FC_CACHE_BASE_PATH;
      fileName.append(FC_PLUGIN_TILING_SUBDIR_NAME "/").append(fullKernelName);

      int fd = fcUtils_createOpenFile(fileName.c_str(), O_RDWR);
      if (fd < 0 ||
          fcPluginTiling_writeEntry(fd, localIdx, true, &elem, sizeof(fcpDimDataEntry<N>)) < 0 ||
          close(fd) < 0) {
        // Close fd in case the call to fcPluginTiling_writeEntry is the one that failed
        close(fd);

        // Erase the recently created entry so that the file contents are still consistent with the
        // memory representation
        entries.erase(iter);
        return NULL;
      }
    }

    if (idx)
      *idx = localIdx;

    // The inputDim member cannot be modified, or else the order will be lost
    return const_cast<fcpDimDataEntry<N>*>(&(*iter));
  }

  virtual int readEntries(int fd) {
    entries.clear();

    // Check in the file header if the data is compatible with this class
    fcpDataHeader header;
    if (fcUtils_readFileData(fd, (char*) &header, sizeof(fcpDataHeader)) < 0)
      return -1;

    if (header.numDims != N)
      return -2;

    // Calculate the number of entries contained in the file
    off_t fileSize = lseek(fd, 0, SEEK_END) - sizeof(fcpDataHeader);
    size_t numEntries = fileSize / sizeof(fcpDimDataEntry<N>);

    lseek(fd, sizeof(fcpDataHeader), SEEK_SET);

    // Read and insert entries in the set efficiently, taking advantage of the fact that entries
    // must be ordered in the file
    fcpDimDataEntry<N> entry;
    auto lastInsert = entries.begin();

    for (size_t i = 0; i < numEntries; ++i) {
      if (fcUtils_readFileData(fd, (char*) &entry, sizeof(fcpDimDataEntry<N>)) < 0)
        return -1;

      lastInsert = entries.insert(lastInsert, entry);
    }

    return 0;
  }
};

#endif  // _DATA_ENTRY_SET_H_
