/**
 * @file
 * This file defines utility functions with various purposes.
 */

#ifndef _FANCIER_UTILS_H_
#define _FANCIER_UTILS_H_

#include <stddef.h>
#include <stdint.h>

#include <dirent.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <fancier/platform.h>


/// The amount of microseconds there are in a second
#define FC_MICROSECONDS_PER_SECOND (1000000UL)

/// The amount of nanoseconds there are in a microsecond
#define FC_NANOSECONDS_PER_MICROSECOND (1000UL)

/// The amount of nanoseconds there are in a second
#define FC_NANOSECONDS_PER_SECOND (FC_NANOSECONDS_PER_MICROSECOND * FC_MICROSECONDS_PER_SECOND)


/**
 * @name Time functions
 * @{
 */

/**
 * Get a time reference for measuring execution times.
 * @return A monotonic timestamp measured in nanoseconds.
 */
FANCIER_API uint64_t fcUtils_getCurrentTimeNs ();

/**
 * Get the elapsed time between a previous time reference and the calling time.
 * @param prevTimeNs Previous time in nanoseconds, as returned by \c fcUtils_getCurrentTimeNs().
 * @return The elapsed time in microseconds.
 */
FANCIER_API uint32_t fcUtils_getElapsedTimeUs (uint64_t prevTimeNs);

/**
 * @}
 */

/**
 * @name Directory manipulation functions
 * @{
 */

/**
 * Open a directory, or create it if it does not exist.
 * @note It will only be created if its parent directory exists.
 * @param path Relative or absolute path to the directory.
 * @return The pointer to a structure holding information of the opened directory or \c NULL if the
 *         operation failed.
 */
FANCIER_API DIR* fcUtils_createOpenDir (const char* path);

/**
 * @}
 */

/**
 * @name File manipulation functions
 * @{
 */

/**
 * Open a file, or create it if it does not exist.
 * @note The file can only be created if the parent directory exists, and the user has write
 *       permissions on it.
 * @param fileName Relative or absolute path to the file.
 * @param openMode The file open mode, which can be \c O_RDONLY, \c O_WRONLU or \c O_RDWR
 * @return The file descriptor of the opened file or \c -1 if the operation failed.
 */
FANCIER_API int fcUtils_createOpenFile (const char* fileName, int openMode);

/**
 * Write data into an open file.
 * @note The file must have been opened with a mode that allows writing.
 * @param fd The file descriptor of the file.
 * @param data A pointer to a buffer holding the data to write.
 * @param count The number of bytes to write in the file.
 * @return \c 0 if the operation ended successfully or \c -1 if it failed.
 */
FANCIER_API int fcUtils_writeFileData (int fd, const char* data, size_t count);

/**
 * Read data from an open file.
 * @note The file must have been opened with a mode that allows reading.
 * @param fd The file descriptor of the file.
 * @param data A pointer to a buffer holding the data to read.
 * @param count The number of bytes to read from the file.
 * @return \c 0 if the operation ended successfully or \c -1 if it failed.
 */
FANCIER_API int fcUtils_readFileData (int fd, char* data, size_t count);

/**
 * @}
 */

#endif
