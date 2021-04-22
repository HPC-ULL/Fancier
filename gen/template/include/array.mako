#ifndef _FANCIER_ARRAY_H_
#define _FANCIER_ARRAY_H_

#include <fancier/platform.h>

// clang-format off
/// Current possible memory locations for the updated array data.
typedef enum {
  FC_ARRAY_LOCATION_NONE,
  FC_ARRAY_LOCATION_NATIVE,
  FC_ARRAY_LOCATION_OPENCL,
} fcArrayLocation;
// clang-format on

// Global Java References

% for type in types:
extern jclass fc${type|c}Array_class;
extern jmethodID fc${type|c}Array_constructor;

% endfor

// Native Definitions

% for type in types:
/// Native representation of an array of elements of type `${type|l}`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  fcInt ref_count;

  /// Number of elements in the array.
  fcInt len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fc${type|c}* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fc${type|c}Array;

% endfor

// Native Interface

FANCIER_API jint fcArray_initJNI(JNIEnv* env);
FANCIER_API void fcArray_releaseJNI(JNIEnv* env);

% for type in types:
FANCIER_API fc${type|c}Array* fc${type|c}Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API fcError fc${type|c}Array_createRef(fc${type|c}Array* array);
FANCIER_API fcError fc${type|c}Array_releaseRef(fc${type|c}Array* array);

FANCIER_API fcError fc${type|c}Array_init(fc${type|c}Array* self);
FANCIER_API fcError fc${type|c}Array_initSize(fc${type|c}Array* self, fcInt n);
FANCIER_API fcError fc${type|c}Array_initArray(fc${type|c}Array* self, fcInt len, const fc${type|c}* v);
FANCIER_API fcError fc${type|c}Array_initCopy(fc${type|c}Array* self, const fc${type|c}Array* array);
FANCIER_API fcError fc${type|c}Array_release(fc${type|c}Array* self);

FANCIER_API fc${type|c} fc${type|c}Array_get(fc${type|c}Array* self, fcInt i, fcError* err);
FANCIER_API fcError fc${type|c}Array_set(fc${type|c}Array* self, fcInt i, fc${type|c} x);

FANCIER_API fcError fc${type|c}Array_setArray(fc${type|c}Array* self, fcInt len, const fc${type|c}* v);
FANCIER_API fcError fc${type|c}Array_setCopy(fc${type|c}Array* self, const fc${type|c}Array* array);
FANCIER_API fcError fc${type|c}Array_setBuffer(fc${type|c}Array* self, fcLong len, const void* v);

FANCIER_API fcError fc${type|c}Array_syncToNative(fc${type|c}Array* self);
FANCIER_API fcError fc${type|c}Array_syncToOCL(fc${type|c}Array* self);
FANCIER_API fcBool fc${type|c}Array_valid(const fc${type|c}Array* self);

% endfor
#endif  // _FANCIER_ARRAY_H_
