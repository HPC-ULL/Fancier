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
 * This file contains macro definitions used to create and throw Java
 * exceptions from JNI code.
 */

#ifndef _FANCIER_EXCEPTION_H_
#define _FANCIER_EXCEPTION_H_

#include <fancier/platform.h>


/// This tag can be used as return expression in many macros, resulting in a
/// valid empty return statement.
#define FC_VOID_EXPR

/// A global reference to the \c NativeException class used to report errors to
/// the Java application.
extern jclass fcException_NativeException_class;

/// A global reference to the \c OpenCLException class used to report errors to
/// the Java application.
extern jclass fcException_OpenCLException_class;

/// The method identifier of the constructor for the \c NativeException class
/// that contains a message.
extern jmethodID fcException_NativeException_constructor_s;

/// The method identifier of the constructor for the \c NativeException class
/// that contains a message and wraps a previous exception.
extern jmethodID fcException_NativeException_constructor_st;

/// The method identifier of the constructor for the \c OpenCLException class
/// that contains an OpenCL error code and a message.
extern jmethodID fcException_OpenCLException_constructor_is;

// clang-format off
/// Native exception codes
typedef enum {
  FC_EXCEPTION_SUCCESS = 0,

  // Generic exceptions
  FC_EXCEPTION_INVALID_THIS,
  FC_EXCEPTION_BAD_PARAMETER,
  FC_EXCEPTION_INVALID_STATE,
  FC_EXCEPTION_FAILED_COPY,

  // OS exceptions
  FC_EXCEPTION_DIR_ERROR,
  FC_EXCEPTION_FILE_ERROR,

  // JNI exceptions
  FC_EXCEPTION_CLASS_NOT_FOUND,
  FC_EXCEPTION_METHOD_NOT_FOUND,
  FC_EXCEPTION_FIELD_NOT_FOUND,
  FC_EXCEPTION_OUT_OF_MEMORY,
  FC_EXCEPTION_ARRAY_GET_ELEMENTS,
  FC_EXCEPTION_ARRAY_BAD_LENGTH,

  // Bitmap exceptions
  FC_EXCEPTION_BITMAP_INFO,
  FC_EXCEPTION_BITMAP_UNSUPPORTED_FORMAT,
  FC_EXCEPTION_BITMAP_LOCK_PIXELS,
  FC_EXCEPTION_BITMAP_UNLOCK_PIXELS,
  FC_EXCEPTION_BITMAP_BAD_DIMENSIONS,

  // BufferedImage exceptions
  FC_EXCEPTION_BUFFEREDIMAGE_INFO,
  FC_EXCEPTION_BUFFEREDIMAGE_UNSOPPORTED_FORMAT,
  FC_EXCEPTION_BUFFEREDIMAGE_BAD_DIMENSIONS,

  FC_EXCEPTION_OTHER
} fcNativeExceptionCode;
// clang-format on


FANCIER_API jint fcException_initJNI(JNIEnv* env);
FANCIER_API void fcException_releaseJNI(JNIEnv* env);

FANCIER_API jstring fcException_createString(JNIEnv* env, const char* file, int line,
                                             const char* function, const char* message);
FANCIER_API void fcException_throwWrappedNative(JNIEnv* env, const char* file, int line,
                                                const char* function, jthrowable cause);
FANCIER_API void fcException_throwNative(JNIEnv* env, const char* file, int line,
                                         const char* function, fcError error);
FANCIER_API void fcException_throwOpenCL(JNIEnv* env, const char* file, int line,
                                         const char* function, fcError clerror);
FANCIER_API void fcException_throwOpenCLBuild(JNIEnv* env, const char* file, int line,
                                              const char* function, cl_program program);
FANCIER_API void fcException_logNative(const char* file, int line, const char* function,
                                       fcError error);
FANCIER_API void fcException_logOpenCL(const char* file, int line, const char* function,
                                       fcError clerror);


#define FC_EXCEPTION_HANDLE_PENDING(_env, _pred, _func, _ret)             \
  if ((_pred) || FC_JNI_CALL(_env, ExceptionCheck)) {                     \
    fcException_throwWrappedNative(_env, __FILE__, __LINE__, _func,       \
                                   FC_JNI_CALL(_env, ExceptionOccurred)); \
    return _ret;                                                          \
  }                                                                       \
  else                                                                    \
    ((void) 0)

#define FC_EXCEPTION_HANDLE_NULL(_env, _var, _err, _func, _ret)     \
  if ((_var) == NULL) {                                             \
    fcException_throwNative(_env, __FILE__, __LINE__, _func, _err); \
    return _ret;                                                    \
  }                                                                 \
  else                                                              \
    ((void) 0)

#define FC_EXCEPTION_HANDLE_ERROR(_env, _err, _func, _ret)          \
  if (_err > 0) {                                                   \
    fcException_throwNative(_env, __FILE__, __LINE__, _func, _err); \
    return _ret;                                                    \
  }                                                                 \
  else if (_err < 0) {                                              \
    fcException_throwOpenCL(_env, __FILE__, __LINE__, _func, _err); \
    return _ret;                                                    \
  }                                                                 \
  else                                                              \
    ((void) 0)

#define FC_EXCEPTION_HANDLE_BUILD(_env, _err, _func, _prog, _ret)         \
  if (_err == CL_BUILD_PROGRAM_FAILURE) {                                 \
    fcException_throwOpenCLBuild(_env, __FILE__, __LINE__, _func, _prog); \
    return _ret;                                                          \
  }                                                                       \
  else                                                                    \
    FC_EXCEPTION_HANDLE_ERROR(_env, _err, _func, _ret)

#define FC_EXCEPTION_HANDLE_NULL_LOG(_var, _err, _func)     \
  if ((_var) == NULL) {                                     \
    fcException_logNative(__FILE__, __LINE__, _func, _err); \
  }                                                         \
  else                                                      \
    ((void) 0)

#define FC_EXCEPTION_HANDLE_ERROR_LOG(_err, _func)          \
  if (_err > 0) {                                           \
    fcException_logNative(__FILE__, __LINE__, _func, _err); \
  }                                                         \
  else if (_err < 0) {                                      \
    fcException_logOpenCL(__FILE__, __LINE__, _func, _err); \
  }                                                         \
  else                                                      \
    ((void) 0)


#endif  // _FANCIER_EXCEPTION_H_
