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

/**
 * @file
 * This file contains macro definitions used to log messages
 * from native JNI code, using the platform's preferred method.
 */

#ifndef _FANCIER_LOG_H_
#define _FANCIER_LOG_H_


#include <fancier/platform.h>

#ifdef __ANDROID__
#include <android/log.h>
#endif


#ifndef FC_LOG_TAG
/// The tag used to identify what module the exception comes from in the logs.
/// It can be redefined in other compilation units before including this file
/// or it will default to "fancier"
#define FC_LOG_TAG "fancier"
#endif  // FC_LOG_TAG

// clang-format off
typedef enum {
#ifdef __ANDROID__
  FC_LOG_VERBOSE = ANDROID_LOG_VERBOSE,
  FC_LOG_DEBUG = ANDROID_LOG_DEBUG,
  FC_LOG_INFO = ANDROID_LOG_INFO,
  FC_LOG_WARN = ANDROID_LOG_WARN,
  FC_LOG_ERROR = ANDROID_LOG_ERROR,
  FC_LOG_FATAL = ANDROID_LOG_FATAL
#else
  FC_LOG_VERBOSE = 1,
  FC_LOG_DEBUG,
  FC_LOG_INFO,
  FC_LOG_WARN,
  FC_LOG_ERROR,
  FC_LOG_FATAL
#endif // __ANDROID__
} fcLogLevels;
// clang-format on

FANCIER_API void __fcinternal_log_fmt(fcLogLevels log_level, const char* log_tag,
                                      const char* format, ...);
FANCIER_API void __fcinternal_log(fcLogLevels log_level, const char* log_tag, const char* message);


/**
 * @name Logging macros
 * @{
 */

/// Logs a printf-like formatted string and parameters with priority \c VERBOSE.
#define FC_LOGVERBOSE_FMT(_fmt, ...) \
  __fcinternal_log_fmt(FC_LOG_VERBOSE, FC_LOG_TAG, _fmt, __VA_ARGS__)

// Logs a printf-like formatted string and parameters with priority \c DEBUG.
#define FC_LOGDEBUG_FMT(_fmt, ...) \
  __fcinternal_log_fmt(FC_LOG_DEBUG, FC_LOG_TAG, _fmt, __VA_ARGS__)

// Logs a printf-like formatted string and parameters with priority \c INFO.
#define FC_LOGINFO_FMT(_fmt, ...) \
  __fcinternal_log_fmt(FC_LOG_INFO, FC_LOG_TAG, _fmt, __VA_ARGS__)

// Logs a printf-like formatted string and parameters with priority \c WARN.
#define FC_LOGWARN_FMT(_fmt, ...) \
  __fcinternal_log_fmt(FC_LOG_WARN, FC_LOG_TAG, _fmt, __VA_ARGS__)

// Logs a printf-like formatted string and parameters with priority \c ERROR.
#define FC_LOGERROR_FMT(_fmt, ...) \
  __fcinternal_log_fmt(FC_LOG_ERROR, FC_LOG_TAG, _fmt, __VA_ARGS__)

// Logs a printf-like formatted string and parameters with priority \c FATAL.
#define FC_LOGFATAL_FMT(_fmt, ...) \
  __fcinternal_log_fmt(FC_LOG_FATAL, FC_LOG_TAG, _fmt, __VA_ARGS__)

/// Logs a string \a _str with priority \c VERBOSE.
#define FC_LOGVERBOSE(_str) __fcinternal_log(FC_LOG_VERBOSE, FC_LOG_TAG, _str)

/// Logs a string \a _str with priority \c DEBUG.
#define FC_LOGDEBUG(_str) __fcinternal_log(FC_LOG_DEBUG, FC_LOG_TAG, _str)

/// Logs a string \a _str with priority \c INFO.
#define FC_LOGINFO(_str) __fcinternal_log(FC_LOG_INFO, FC_LOG_TAG, _str)

/// Logs a string \a _str with priority \c WARN.
#define FC_LOGWARN(_str) __fcinternal_log(FC_LOG_WARN, FC_LOG_TAG, _str)

/// Logs a string \a _str with priority \c ERROR.
#define FC_LOGERROR(_str) __fcinternal_log(FC_LOG_ERROR, FC_LOG_TAG, _str)

/// Logs a string \a _str with priority \c FATAL.
#define FC_LOGFATAL(_str) __fcinternal_log(FC_LOG_FATAL, FC_LOG_TAG, _str)

/**
 * @}
 */

#endif  // _FANCIER_LOG_H_
