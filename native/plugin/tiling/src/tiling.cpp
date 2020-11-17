#include <cstring>
#include <memory>
#include <string>

#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <fancier/utils.h>
#include <fancier/plugin/tiling.h>

#include <fancier/plugin/tiling/class_tiling_data.h>


jint loadFancierPlugin (JNIEnv* env) {
  DIR* dir = fcUtils_createOpenDir(FC_CACHE_BASE_PATH);

  if (dir)
    closedir(dir);
  else
    return -1;

  std::string baseTilingPath = FC_CACHE_BASE_PATH;
  baseTilingPath.append(FC_PLUGIN_TILING_SUBDIR_NAME "/");

  dir = fcUtils_createOpenDir(baseTilingPath.c_str());

  if (!dir)
    return -1;

  closedir(dir);
  return 0;
}

jint unloadFancierPlugin (JNIEnv* env) {
  // Do nothing
  return FC_EXCEPTION_SUCCESS;
}

fcpClassTilingData* fcPluginTiling_readClassTilingData (const char* pkgClassName, bool reset) {
  std::string baseTilingPath = FC_CACHE_BASE_PATH;
  baseTilingPath.append(FC_PLUGIN_TILING_SUBDIR_NAME "/");

  DIR* dir = opendir(baseTilingPath.c_str());
  if (dir) {
    std::unique_ptr<fcpClassTilingData> tilingData(new fcpClassTilingData(pkgClassName));

    // Traverse tiling base directory
    dirent* dirInfo;
    while ((dirInfo = readdir(dir)) != NULL) {
      char* subStr;

      // Only process the files of the specified package and class
      if (dirInfo->d_type == DT_REG && (subStr = strstr(dirInfo->d_name, pkgClassName))) {
        std::string fileName = baseTilingPath + dirInfo->d_name;

        if (reset) {
          // Delete files instead of reading them if the code has been updated
          if (unlink(fileName.c_str()) < 0) {
            closedir(dir);
            return NULL;
          }
        }
        else {
          int fd = fcUtils_createOpenFile(fileName.c_str(), O_RDONLY);
          if (fd < 0) {
            closedir(dir);
            return NULL;
          }

          // Read the header of the file so we know which structure to create for it
          fcpDataHeader header;
          if (fcUtils_readFileData(fd, (char*) &header, sizeof(fcpDataHeader)) < 0 || lseek(fd, 0, SEEK_SET) < 0) {
            close(fd);
            closedir(dir);
            return NULL;
          }

          std::unique_ptr<fcpDataEntrySet> entrySet;
          switch (header.numDims) {
            case 1:
              entrySet.reset(new DimDataEntrySet<1>);
              break;
            case 2:
              entrySet.reset(new DimDataEntrySet<2>);
              break;
            case 3:
              entrySet.reset(new DimDataEntrySet<3>);
              break;
          }

          // Read the file
          if (entrySet && entrySet->readEntries(fd) == 0) {
            entrySet->fullKernelName = dirInfo->d_name;
            tilingData->entrySets.insert(std::move(entrySet));
          }
          else {
            close(fd);
            closedir(dir);
            return NULL;
          }
        }
      }
    }

    closedir(dir);
    return tilingData.release();
  }

  return NULL;
}

void fcPluginTiling_freeClassTilingData (fcpClassTilingData* tilingData) {
  if (tilingData)
    delete tilingData;
}

fcpDataEntrySet* fcPluginTiling_getDataEntrySet (fcpClassTilingData* tilingData, const char* kernelName, uint8_t numDims) {
  switch (numDims) {
    case 1:
      return tilingData->fcPluginTiling_getDataEntrySet<1>(kernelName);
    case 2:
      return tilingData->fcPluginTiling_getDataEntrySet<2>(kernelName);
    case 3:
      return tilingData->fcPluginTiling_getDataEntrySet<3>(kernelName);
    default:
      return NULL;
  }
}

fcpDataEntry* fcPluginTiling_getDataEntry (fcpDataEntrySet* entries, size_t* idx, ...) {
  va_list args;
  va_start(args, idx);
  fcpDataEntry* entry = entries->getDataEntry(idx, args);
  va_end(args);
  return entry;
}

void fcPluginTiling_getDataEntryBestTile (fcpDataEntry* entry, uint8_t numDims, size_t* tiles) {
  if (tiles) {
    const uint8_t* bestTiles = entry->bestTiles();

    for (uint8_t i = 0; i < numDims; ++i)
      tiles[i] = TILE_SIZE(bestTiles[i]);
  }
}

int8_t fcPluginTiling_exploreNextTiles (fcpDataEntry* entry, uint8_t numDims, size_t* tiles) {
  int8_t dir = entry->explore();

  if (tiles) {
    const uint8_t* bestTiles = entry->bestTiles();

    for (uint8_t i = 0; i < numDims; ++i)
      tiles[i] = TILE_SIZE(bestTiles[i]);

    // Don't change the tile size if this is the first iteration or exploration stopped
    if (entry->bestTimeUs < UINT32_MAX && dir != 0) {
      int dim = DIR_DIM(dir);
      tiles[dim] = TILE_SIZE(bestTiles[dim] + DIR_SIGN(dir));
    }
  }

  return dir;
}

int fcPluginTiling_updateDataEntry (fcpDataEntrySet* entries, fcpDataEntry* entry, size_t entryIdx,
                                    int8_t dir, uint32_t newTimeUs) {
  entry->update(dir, newTimeUs);

  size_t entrySz = 0;
  switch (entries->dims) {
    case 1:
      entrySz = sizeof(fcpDimDataEntry<1>);
      break;
    case 2:
      entrySz = sizeof(fcpDimDataEntry<2>);
      break;
    case 3:
      entrySz = sizeof(fcpDimDataEntry<3>);
      break;
  }

  if (entrySz > 0 && dir != 0) {
    std::string fileName = FC_CACHE_BASE_PATH;
    fileName.append(FC_PLUGIN_TILING_SUBDIR_NAME "/").append(entries->fullKernelName);

    int fd = fcUtils_createOpenFile(fileName.c_str(), O_RDWR);
    if (fd < 0 || fcPluginTiling_writeEntry(fd, entryIdx, false, entry, entrySz) < 0 || close(fd) < 0) {
      close(fd);
      return -1;
    }
  }

  return 0;
}
