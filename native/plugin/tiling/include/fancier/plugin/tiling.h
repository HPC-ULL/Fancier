/**
 * @file
 * This file contains functions and data structures used to implement dynamic tiling in native code.
 * @note Concurrent access to these functions exported is not thread-safe.
 */

#ifndef _FANCIER_TILING_H_
#define _FANCIER_TILING_H_

#include <stddef.h>
#include <stdint.h>

#include <fancier.h>


/// It contains the data representing all dynamic tiling information for a single Java class.
typedef struct fcpClassTilingData fcpClassTilingData;

/// It represents the set of data entries related to a single kernel.
typedef struct fcpDataEntrySet fcpDataEntrySet;

/// It contains information about the exploration status of a single input size, for a single kernel
/// in a single class.
typedef struct fcpDataEntry fcpDataEntry;


/// The name of the directory where dynamic tiling data for each class is stored
#define FC_PLUGIN_TILING_SUBDIR_NAME "es.ull.pcg.hpc.fancier.tiling"


/**
 * @name Application scope functions
 * @{
 */

/**
 * Create the directories that will hold all the dynamic tiling information.
 * @return \c 0 if the operation ended successfully or \c -1 if it failed.
 */
FANCIER_API jint loadFancierPlugin (JNIEnv* env);

FANCIER_API jint unloadFancierPlugin (JNIEnv* env);

/**
 * @}
 */

/**
 * @name Class scope functions
 * @{
 */

/**
 * Read all the stored dynamic tiling information for a specific class.
 * @param pkgClassName The fully qualified Java package and class name.
 * @return The existing dynamic tiling data for the selected class or \c NULL if the base tiling
 *         directory could not be opened.
 * @note The returned object must be released by a call to \c fcPluginTiling_freeClassTilingData to avoid memory
 *       leaks.
 */
FANCIER_API fcpClassTilingData* fcPluginTiling_readClassTilingData (const char* pkgClassName,
                                                                    bool reset);

/**
 * Free the memory allocated for dynamic tiling data.
 * @param tilingData The memory object to deallocate.
 */
FANCIER_API void fcPluginTiling_freeClassTilingData (fcpClassTilingData* tilingData);

/**
 * Retrieves a data entry set, or the set of tiling data entries for a single kernel. If it does
 * not exist, a new empty entry and a new file to hold its data are created.
 * @param tilingData The structure holding all the tiling data for the class.
 * @param kernelName A unique name for the kernel.
 * @param numDims The number of dimensions used for tiling.
 * @return The data entry set corresponding to the selected class and kernel.
 */
FANCIER_API fcpDataEntrySet* fcPluginTiling_getDataEntrySet (fcpClassTilingData* tilingData,
                                                             const char* kernelName,
                                                             uint8_t numDims);

/**
 * @}
 */

/**
 * @name Kernel scope functions
 * @{
 */

/**
 * Obtain the data entry corresponding to a specific kernel and input size.
 * If it does not exist, the data for the entry with the most similar size for that same kernel will
 * be used to populate a new entry, which will be returned. If a new entry is created, it is added
 * to the corresponding file as well.
 * @param entries The set of data entries for a single kernel.
 * @param idx Used to return the index of the entry ordered by size inside the set.
 * @param ... The input dimensions, of type \c size_t.
 * @return The data entry of the specified kernel and input size.
 */
FANCIER_API fcpDataEntry* getDataEntry (fcpDataEntrySet* entries, size_t* idx, ...);

/**
 * @}
 */

/**
 * @name Data entry scope functions
 * @{
 */

/**
 * Retrieve the best tile size encountered so far from the specified data entry.
 * @param entry The data entry to query.
 * @param numDims The number of tiling dimensions.
 * @param tiles The output buffer where the sizes will be copied.
 */
FANCIER_API void getDataEntryBestTile (fcpDataEntry* entry, uint8_t numDims, size_t* tiles);

/**
 * Obtain the next tile size to use in the dynamic adaptation process.
 * @param entry The data entry to modify.
 * @param numDims The number of tiling dimensions.
 * @param tiles The output buffer where the next tile size will be stored.
 * @return The direction in which the tile size has been modified.
 */
FANCIER_API int8_t exploreNextTiles (fcpDataEntry* entry, uint8_t numDims, size_t* tiles);

/**
 * Update a data entry with the results of the last execution, in order to continue exploration.
 * If the exploration had not stopped in the previous call to this function
 * @param entries The set of data entries for the kernel.
 * @param entry The data entry to update.
 * @param entryIdx The index of the selected data entry, obtained by calling \c getDataEntry.
 *        This index can be invalidated by further calls to \c getDataEntry, because new previous
 *        entries might be added.
 * @param dir The direction returned by the latest call to \c exploreNextTiles.
 * @param newTimeUs The latest execution time of the kernel with the input size defined by the
 *        specified entry, using the tile size returned by the latest call to \c exploreNextTiles.
 * @return \c 0 if the update can be performed and stored in disk or \c -1 otherwise.
 */
FANCIER_API int updateDataEntry (fcpDataEntrySet* entries, fcpDataEntry* entry, size_t entryIdx, int8_t dir, uint32_t newTimeUs);

/**
 * @}
 */

#endif
