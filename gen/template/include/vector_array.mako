## Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
## Copyright (C) 2021 Universidad de La Laguna.
##
## Fancier is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## Fancier is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
##
<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
#ifndef _FANCIER_VECTOR_ARRAY_H_
#define _FANCIER_VECTOR_ARRAY_H_

#include <fancier/array.h>
#include <fancier/platform.h>
#include <fancier/vector.h>


// Global Java References

% for type in types:
% for vlen in vlens:
extern jclass fc${type|c}${vlen}Array_class;
extern jmethodID fc${type|c}${vlen}Array_constructor;
% endfor

% endfor

// Native Definitions

% for type in types:
% for vlen in vlens:
/// Native representation of an array of elements of vector type `fc${type|c}${vlen}`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  fcInt ref_count;

  /// Number of elements in the array.
  fcInt len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fc${type|c}${vlen}* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fc${type|c}${vlen}Array;

% endfor
% endfor

// Native Interface

FANCIER_API jint fcVectorArray_initJNI(JNIEnv* env);
FANCIER_API void fcVectorArray_releaseJNI(JNIEnv* env);

% for type in types:
% for vlen in vlens:
FANCIER_API fc${type|c}${vlen}Array* fc${type|c}${vlen}Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API fcError fc${type|c}${vlen}Array_createRef(fc${type|c}${vlen}Array* array);
FANCIER_API fcError fc${type|c}${vlen}Array_releaseRef(fc${type|c}${vlen}Array* array);

FANCIER_API fcError fc${type|c}${vlen}Array_init(fc${type|c}${vlen}Array* self);
FANCIER_API fcError fc${type|c}${vlen}Array_initSize(fc${type|c}${vlen}Array* self, fcInt n);
FANCIER_API fcError fc${type|c}${vlen}Array_initArray(fc${type|c}${vlen}Array* self, fcInt len, const fc${type|c}* v);
FANCIER_API fcError fc${type|c}${vlen}Array_initCopy(fc${type|c}${vlen}Array* self, const fc${type|c}${vlen}Array* array);
FANCIER_API fcError fc${type|c}${vlen}Array_release(fc${type|c}${vlen}Array* self);

FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}Array_get(fc${type|c}${vlen}Array* self, fcInt i, fcError* err);
FANCIER_API fcError fc${type|c}${vlen}Array_set(fc${type|c}${vlen}Array* self, fcInt i, fc${type|c}${vlen} x);

FANCIER_API fcError fc${type|c}${vlen}Array_setArray(fc${type|c}${vlen}Array* self, fcInt len, const fc${type|c}* v);
FANCIER_API fcError fc${type|c}${vlen}Array_setCopy(fc${type|c}${vlen}Array* self, const fc${type|c}${vlen}Array* array);
FANCIER_API fcError fc${type|c}${vlen}Array_setBuffer(fc${type|c}${vlen}Array* self, fcLong len, const void* v);

FANCIER_API fcError fc${type|c}${vlen}Array_syncToHost(fc${type|c}${vlen}Array* self);
FANCIER_API fcError fc${type|c}${vlen}Array_syncToDevice(fc${type|c}${vlen}Array* self);
FANCIER_API fcBool fc${type|c}${vlen}Array_valid(const fc${type|c}${vlen}Array* self);

% endfor
% endfor
#endif  // _FANCIER_VECTOR_ARRAY_H_
