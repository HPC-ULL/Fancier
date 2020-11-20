#ifndef _FANCIER_ARRAY_H_
#define _FANCIER_ARRAY_H_

#include <fancier/platform.h>


/// Current possible memory locations for the updated array data.
typedef enum {
  FC_ARRAY_LOCATION_NONE,
  FC_ARRAY_LOCATION_NATIVE,
  FC_ARRAY_LOCATION_OPENCL,
} fcArrayLocation;


// Global Java References

extern jclass fcByteArray_class;
extern jmethodID fcByteArray_constructor;

extern jclass fcShortArray_class;
extern jmethodID fcShortArray_constructor;

extern jclass fcIntArray_class;
extern jmethodID fcIntArray_constructor;

extern jclass fcLongArray_class;
extern jmethodID fcLongArray_constructor;

extern jclass fcFloatArray_class;
extern jmethodID fcFloatArray_constructor;

extern jclass fcDoubleArray_class;
extern jmethodID fcDoubleArray_constructor;


// Native Definitions

/// Native representation of an array of elements of type `byte`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  jbyte *c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcByteArray;

/// Native representation of an array of elements of type `short`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  jshort *c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcShortArray;

/// Native representation of an array of elements of type `int`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  jint *c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcIntArray;

/// Native representation of an array of elements of type `long`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  jlong *c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcLongArray;

/// Native representation of an array of elements of type `float`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  jfloat *c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcFloatArray;

/// Native representation of an array of elements of type `double`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  jdouble *c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcDoubleArray;


// Native Interface

FANCIER_API jint fcArray_initJNI(JNIEnv* env);
FANCIER_API void fcArray_releaseJNI(JNIEnv* env);

FANCIER_API fcByteArray* fcByteArray_getJava (JNIEnv* env, jobject obj);
FANCIER_API int fcByteArray_createRef (fcByteArray* array);
FANCIER_API int fcByteArray_releaseRef (fcByteArray* array);
FANCIER_API int fcByteArray_init (fcByteArray* self);
FANCIER_API int fcByteArray_initSize (fcByteArray* self, int n);
FANCIER_API int fcByteArray_initArray (fcByteArray* self, int len, jbyte* v);
FANCIER_API int fcByteArray_initCopy (fcByteArray* self, const fcByteArray* array);
FANCIER_API int fcByteArray_release (fcByteArray* self);
FANCIER_API jbyte fcByteArray_get (fcByteArray* self, int i, int* err);
FANCIER_API int fcByteArray_set (fcByteArray* self, int i, jbyte x);
FANCIER_API int fcByteArray_setContents (fcByteArray* self, int len, jbyte* v);
FANCIER_API int fcByteArray_syncToNative (fcByteArray* self);
FANCIER_API int fcByteArray_syncToOCL (fcByteArray* self);
FANCIER_API jboolean fcByteArray_valid (const fcByteArray* self);

FANCIER_API fcShortArray* fcShortArray_getJava (JNIEnv* env, jobject obj);
FANCIER_API int fcShortArray_createRef (fcShortArray* array);
FANCIER_API int fcShortArray_releaseRef (fcShortArray* array);
FANCIER_API int fcShortArray_init (fcShortArray* self);
FANCIER_API int fcShortArray_initSize (fcShortArray* self, int n);
FANCIER_API int fcShortArray_initArray (fcShortArray* self, int len, jshort* v);
FANCIER_API int fcShortArray_initCopy (fcShortArray* self, const fcShortArray* array);
FANCIER_API int fcShortArray_release (fcShortArray* self);
FANCIER_API jshort fcShortArray_get (fcShortArray* self, int i, int* err);
FANCIER_API int fcShortArray_set (fcShortArray* self, int i, jshort x);
FANCIER_API int fcShortArray_setContents (fcShortArray* self, int len, jshort* v);
FANCIER_API int fcShortArray_syncToNative (fcShortArray* self);
FANCIER_API int fcShortArray_syncToOCL (fcShortArray* self);
FANCIER_API jboolean fcShortArray_valid (const fcShortArray* self);

FANCIER_API fcIntArray* fcIntArray_getJava (JNIEnv* env, jobject obj);
FANCIER_API int fcIntArray_createRef (fcIntArray* array);
FANCIER_API int fcIntArray_releaseRef (fcIntArray* array);
FANCIER_API int fcIntArray_init (fcIntArray* self);
FANCIER_API int fcIntArray_initSize (fcIntArray* self, int n);
FANCIER_API int fcIntArray_initArray (fcIntArray* self, int len, jint* v);
FANCIER_API int fcIntArray_initCopy (fcIntArray* self, const fcIntArray* array);
FANCIER_API int fcIntArray_release (fcIntArray* self);
FANCIER_API jint fcIntArray_get (fcIntArray* self, int i, int* err);
FANCIER_API int fcIntArray_set (fcIntArray* self, int i, jint x);
FANCIER_API int fcIntArray_setContents (fcIntArray* self, int len, jint* v);
FANCIER_API int fcIntArray_syncToNative (fcIntArray* self);
FANCIER_API int fcIntArray_syncToOCL (fcIntArray* self);
FANCIER_API jboolean fcIntArray_valid (const fcIntArray* self);

FANCIER_API fcLongArray* fcLongArray_getJava (JNIEnv* env, jobject obj);
FANCIER_API int fcLongArray_createRef (fcLongArray* array);
FANCIER_API int fcLongArray_releaseRef (fcLongArray* array);
FANCIER_API int fcLongArray_init (fcLongArray* self);
FANCIER_API int fcLongArray_initSize (fcLongArray* self, int n);
FANCIER_API int fcLongArray_initArray (fcLongArray* self, int len, jlong* v);
FANCIER_API int fcLongArray_initCopy (fcLongArray* self, const fcLongArray* array);
FANCIER_API int fcLongArray_release (fcLongArray* self);
FANCIER_API jlong fcLongArray_get (fcLongArray* self, int i, int* err);
FANCIER_API int fcLongArray_set (fcLongArray* self, int i, jlong x);
FANCIER_API int fcLongArray_setContents (fcLongArray* self, int len, jlong* v);
FANCIER_API int fcLongArray_syncToNative (fcLongArray* self);
FANCIER_API int fcLongArray_syncToOCL (fcLongArray* self);
FANCIER_API jboolean fcLongArray_valid (const fcLongArray* self);

FANCIER_API fcFloatArray* fcFloatArray_getJava (JNIEnv* env, jobject obj);
FANCIER_API int fcFloatArray_createRef (fcFloatArray* array);
FANCIER_API int fcFloatArray_releaseRef (fcFloatArray* array);
FANCIER_API int fcFloatArray_init (fcFloatArray* self);
FANCIER_API int fcFloatArray_initSize (fcFloatArray* self, int n);
FANCIER_API int fcFloatArray_initArray (fcFloatArray* self, int len, jfloat* v);
FANCIER_API int fcFloatArray_initCopy (fcFloatArray* self, const fcFloatArray* array);
FANCIER_API int fcFloatArray_release (fcFloatArray* self);
FANCIER_API jfloat fcFloatArray_get (fcFloatArray* self, int i, int* err);
FANCIER_API int fcFloatArray_set (fcFloatArray* self, int i, jfloat x);
FANCIER_API int fcFloatArray_setContents (fcFloatArray* self, int len, jfloat* v);
FANCIER_API int fcFloatArray_syncToNative (fcFloatArray* self);
FANCIER_API int fcFloatArray_syncToOCL (fcFloatArray* self);
FANCIER_API jboolean fcFloatArray_valid (const fcFloatArray* self);

FANCIER_API fcDoubleArray* fcDoubleArray_getJava (JNIEnv* env, jobject obj);
FANCIER_API int fcDoubleArray_createRef (fcDoubleArray* array);
FANCIER_API int fcDoubleArray_releaseRef (fcDoubleArray* array);
FANCIER_API int fcDoubleArray_init (fcDoubleArray* self);
FANCIER_API int fcDoubleArray_initSize (fcDoubleArray* self, int n);
FANCIER_API int fcDoubleArray_initArray (fcDoubleArray* self, int len, jdouble* v);
FANCIER_API int fcDoubleArray_initCopy (fcDoubleArray* self, const fcDoubleArray* array);
FANCIER_API int fcDoubleArray_release (fcDoubleArray* self);
FANCIER_API jdouble fcDoubleArray_get (fcDoubleArray* self, int i, int* err);
FANCIER_API int fcDoubleArray_set (fcDoubleArray* self, int i, jdouble x);
FANCIER_API int fcDoubleArray_setContents (fcDoubleArray* self, int len, jdouble* v);
FANCIER_API int fcDoubleArray_syncToNative (fcDoubleArray* self);
FANCIER_API int fcDoubleArray_syncToOCL (fcDoubleArray* self);
FANCIER_API jboolean fcDoubleArray_valid (const fcDoubleArray* self);

#endif // _FANCIER_ARRAY_H_
