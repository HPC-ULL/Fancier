#ifndef _FANCIER_VECTOR_ARRAY_H_
#define _FANCIER_VECTOR_ARRAY_H_

#include <fancier/array.h>
#include <fancier/platform.h>
#include <fancier/vector.h>


// Global Java References

extern jclass fcByte2Array_class;
extern jmethodID fcByte2Array_constructor;
extern jclass fcByte3Array_class;
extern jmethodID fcByte3Array_constructor;
extern jclass fcByte4Array_class;
extern jmethodID fcByte4Array_constructor;
extern jclass fcByte8Array_class;
extern jmethodID fcByte8Array_constructor;

extern jclass fcShort2Array_class;
extern jmethodID fcShort2Array_constructor;
extern jclass fcShort3Array_class;
extern jmethodID fcShort3Array_constructor;
extern jclass fcShort4Array_class;
extern jmethodID fcShort4Array_constructor;
extern jclass fcShort8Array_class;
extern jmethodID fcShort8Array_constructor;

extern jclass fcInt2Array_class;
extern jmethodID fcInt2Array_constructor;
extern jclass fcInt3Array_class;
extern jmethodID fcInt3Array_constructor;
extern jclass fcInt4Array_class;
extern jmethodID fcInt4Array_constructor;
extern jclass fcInt8Array_class;
extern jmethodID fcInt8Array_constructor;

extern jclass fcLong2Array_class;
extern jmethodID fcLong2Array_constructor;
extern jclass fcLong3Array_class;
extern jmethodID fcLong3Array_constructor;
extern jclass fcLong4Array_class;
extern jmethodID fcLong4Array_constructor;
extern jclass fcLong8Array_class;
extern jmethodID fcLong8Array_constructor;

extern jclass fcFloat2Array_class;
extern jmethodID fcFloat2Array_constructor;
extern jclass fcFloat3Array_class;
extern jmethodID fcFloat3Array_constructor;
extern jclass fcFloat4Array_class;
extern jmethodID fcFloat4Array_constructor;
extern jclass fcFloat8Array_class;
extern jmethodID fcFloat8Array_constructor;

extern jclass fcDouble2Array_class;
extern jmethodID fcDouble2Array_constructor;
extern jclass fcDouble3Array_class;
extern jmethodID fcDouble3Array_constructor;
extern jclass fcDouble4Array_class;
extern jmethodID fcDouble4Array_constructor;
extern jclass fcDouble8Array_class;
extern jmethodID fcDouble8Array_constructor;


// Native Definitions

/// Native representation of an array of elements of vector type `fcByte2`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcByte2* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcByte2Array;

/// Native representation of an array of elements of vector type `fcByte3`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcByte3* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcByte3Array;

/// Native representation of an array of elements of vector type `fcByte4`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcByte4* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcByte4Array;

/// Native representation of an array of elements of vector type `fcByte8`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcByte8* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcByte8Array;

/// Native representation of an array of elements of vector type `fcShort2`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcShort2* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcShort2Array;

/// Native representation of an array of elements of vector type `fcShort3`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcShort3* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcShort3Array;

/// Native representation of an array of elements of vector type `fcShort4`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcShort4* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcShort4Array;

/// Native representation of an array of elements of vector type `fcShort8`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcShort8* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcShort8Array;

/// Native representation of an array of elements of vector type `fcInt2`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcInt2* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcInt2Array;

/// Native representation of an array of elements of vector type `fcInt3`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcInt3* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcInt3Array;

/// Native representation of an array of elements of vector type `fcInt4`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcInt4* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcInt4Array;

/// Native representation of an array of elements of vector type `fcInt8`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcInt8* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcInt8Array;

/// Native representation of an array of elements of vector type `fcLong2`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcLong2* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcLong2Array;

/// Native representation of an array of elements of vector type `fcLong3`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcLong3* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcLong3Array;

/// Native representation of an array of elements of vector type `fcLong4`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcLong4* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcLong4Array;

/// Native representation of an array of elements of vector type `fcLong8`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcLong8* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcLong8Array;

/// Native representation of an array of elements of vector type `fcFloat2`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcFloat2* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcFloat2Array;

/// Native representation of an array of elements of vector type `fcFloat3`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcFloat3* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcFloat3Array;

/// Native representation of an array of elements of vector type `fcFloat4`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcFloat4* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcFloat4Array;

/// Native representation of an array of elements of vector type `fcFloat8`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcFloat8* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcFloat8Array;

/// Native representation of an array of elements of vector type `fcDouble2`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcDouble2* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcDouble2Array;

/// Native representation of an array of elements of vector type `fcDouble3`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcDouble3* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcDouble3Array;

/// Native representation of an array of elements of vector type `fcDouble4`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcDouble4* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcDouble4Array;

/// Native representation of an array of elements of vector type `fcDouble8`.
typedef struct {
  /// Reference counter for the buffer inside.
  ///
  /// Multiple pointers to the same object can be created, and a reference counter must be
  /// created in order to only free the contents when there are no more references to it.
  int ref_count;

  /// Number of elements in the array.
  size_t len;

  /// Pointer to native elements. Only valid when `location = FC_ARRAY_LOCATION_NATIVE`.
  fcDouble8* c;

  /// OpenCL buffer to array elements. Only valid when `location = FC_ARRAY_LOCATION_OPENCL`.
  cl_mem ocl;

  /// Current location of the array data.
  int location;
} fcDouble8Array;


// Native Interface

FANCIER_API jint fcVectorArray_initJNI(JNIEnv* env);
FANCIER_API void fcVectorArray_releaseJNI(JNIEnv* env);

FANCIER_API fcByte2Array* fcByte2Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcByte2Array_createRef(fcByte2Array* array);
FANCIER_API int fcByte2Array_releaseRef(fcByte2Array* array);

FANCIER_API int fcByte2Array_init(fcByte2Array* self);
FANCIER_API int fcByte2Array_initSize(fcByte2Array* self, int n);
FANCIER_API int fcByte2Array_initArray(fcByte2Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte2Array_initCopy(fcByte2Array* self, const fcByte2Array* array);
FANCIER_API int fcByte2Array_release(fcByte2Array* self);

FANCIER_API fcByte2 fcByte2Array_get(fcByte2Array* self, int i, int* err);
FANCIER_API int fcByte2Array_set(fcByte2Array* self, int i, fcByte2 x);

FANCIER_API int fcByte2Array_setArray(fcByte2Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte2Array_setCopy(fcByte2Array* self, const fcByte2Array* array);
FANCIER_API int fcByte2Array_setBuffer(fcByte2Array* self, jlong len, const void* v);

FANCIER_API int fcByte2Array_syncToNative(fcByte2Array* self);
FANCIER_API int fcByte2Array_syncToOCL(fcByte2Array* self);
FANCIER_API jboolean fcByte2Array_valid(const fcByte2Array* self);

FANCIER_API fcByte3Array* fcByte3Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcByte3Array_createRef(fcByte3Array* array);
FANCIER_API int fcByte3Array_releaseRef(fcByte3Array* array);

FANCIER_API int fcByte3Array_init(fcByte3Array* self);
FANCIER_API int fcByte3Array_initSize(fcByte3Array* self, int n);
FANCIER_API int fcByte3Array_initArray(fcByte3Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte3Array_initCopy(fcByte3Array* self, const fcByte3Array* array);
FANCIER_API int fcByte3Array_release(fcByte3Array* self);

FANCIER_API fcByte3 fcByte3Array_get(fcByte3Array* self, int i, int* err);
FANCIER_API int fcByte3Array_set(fcByte3Array* self, int i, fcByte3 x);

FANCIER_API int fcByte3Array_setArray(fcByte3Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte3Array_setCopy(fcByte3Array* self, const fcByte3Array* array);
FANCIER_API int fcByte3Array_setBuffer(fcByte3Array* self, jlong len, const void* v);

FANCIER_API int fcByte3Array_syncToNative(fcByte3Array* self);
FANCIER_API int fcByte3Array_syncToOCL(fcByte3Array* self);
FANCIER_API jboolean fcByte3Array_valid(const fcByte3Array* self);

FANCIER_API fcByte4Array* fcByte4Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcByte4Array_createRef(fcByte4Array* array);
FANCIER_API int fcByte4Array_releaseRef(fcByte4Array* array);

FANCIER_API int fcByte4Array_init(fcByte4Array* self);
FANCIER_API int fcByte4Array_initSize(fcByte4Array* self, int n);
FANCIER_API int fcByte4Array_initArray(fcByte4Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte4Array_initCopy(fcByte4Array* self, const fcByte4Array* array);
FANCIER_API int fcByte4Array_release(fcByte4Array* self);

FANCIER_API fcByte4 fcByte4Array_get(fcByte4Array* self, int i, int* err);
FANCIER_API int fcByte4Array_set(fcByte4Array* self, int i, fcByte4 x);

FANCIER_API int fcByte4Array_setArray(fcByte4Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte4Array_setCopy(fcByte4Array* self, const fcByte4Array* array);
FANCIER_API int fcByte4Array_setBuffer(fcByte4Array* self, jlong len, const void* v);

FANCIER_API int fcByte4Array_syncToNative(fcByte4Array* self);
FANCIER_API int fcByte4Array_syncToOCL(fcByte4Array* self);
FANCIER_API jboolean fcByte4Array_valid(const fcByte4Array* self);

FANCIER_API fcByte8Array* fcByte8Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcByte8Array_createRef(fcByte8Array* array);
FANCIER_API int fcByte8Array_releaseRef(fcByte8Array* array);

FANCIER_API int fcByte8Array_init(fcByte8Array* self);
FANCIER_API int fcByte8Array_initSize(fcByte8Array* self, int n);
FANCIER_API int fcByte8Array_initArray(fcByte8Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte8Array_initCopy(fcByte8Array* self, const fcByte8Array* array);
FANCIER_API int fcByte8Array_release(fcByte8Array* self);

FANCIER_API fcByte8 fcByte8Array_get(fcByte8Array* self, int i, int* err);
FANCIER_API int fcByte8Array_set(fcByte8Array* self, int i, fcByte8 x);

FANCIER_API int fcByte8Array_setArray(fcByte8Array* self, jsize len, const jbyte* v);
FANCIER_API int fcByte8Array_setCopy(fcByte8Array* self, const fcByte8Array* array);
FANCIER_API int fcByte8Array_setBuffer(fcByte8Array* self, jlong len, const void* v);

FANCIER_API int fcByte8Array_syncToNative(fcByte8Array* self);
FANCIER_API int fcByte8Array_syncToOCL(fcByte8Array* self);
FANCIER_API jboolean fcByte8Array_valid(const fcByte8Array* self);

FANCIER_API fcShort2Array* fcShort2Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcShort2Array_createRef(fcShort2Array* array);
FANCIER_API int fcShort2Array_releaseRef(fcShort2Array* array);

FANCIER_API int fcShort2Array_init(fcShort2Array* self);
FANCIER_API int fcShort2Array_initSize(fcShort2Array* self, int n);
FANCIER_API int fcShort2Array_initArray(fcShort2Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort2Array_initCopy(fcShort2Array* self, const fcShort2Array* array);
FANCIER_API int fcShort2Array_release(fcShort2Array* self);

FANCIER_API fcShort2 fcShort2Array_get(fcShort2Array* self, int i, int* err);
FANCIER_API int fcShort2Array_set(fcShort2Array* self, int i, fcShort2 x);

FANCIER_API int fcShort2Array_setArray(fcShort2Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort2Array_setCopy(fcShort2Array* self, const fcShort2Array* array);
FANCIER_API int fcShort2Array_setBuffer(fcShort2Array* self, jlong len, const void* v);

FANCIER_API int fcShort2Array_syncToNative(fcShort2Array* self);
FANCIER_API int fcShort2Array_syncToOCL(fcShort2Array* self);
FANCIER_API jboolean fcShort2Array_valid(const fcShort2Array* self);

FANCIER_API fcShort3Array* fcShort3Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcShort3Array_createRef(fcShort3Array* array);
FANCIER_API int fcShort3Array_releaseRef(fcShort3Array* array);

FANCIER_API int fcShort3Array_init(fcShort3Array* self);
FANCIER_API int fcShort3Array_initSize(fcShort3Array* self, int n);
FANCIER_API int fcShort3Array_initArray(fcShort3Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort3Array_initCopy(fcShort3Array* self, const fcShort3Array* array);
FANCIER_API int fcShort3Array_release(fcShort3Array* self);

FANCIER_API fcShort3 fcShort3Array_get(fcShort3Array* self, int i, int* err);
FANCIER_API int fcShort3Array_set(fcShort3Array* self, int i, fcShort3 x);

FANCIER_API int fcShort3Array_setArray(fcShort3Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort3Array_setCopy(fcShort3Array* self, const fcShort3Array* array);
FANCIER_API int fcShort3Array_setBuffer(fcShort3Array* self, jlong len, const void* v);

FANCIER_API int fcShort3Array_syncToNative(fcShort3Array* self);
FANCIER_API int fcShort3Array_syncToOCL(fcShort3Array* self);
FANCIER_API jboolean fcShort3Array_valid(const fcShort3Array* self);

FANCIER_API fcShort4Array* fcShort4Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcShort4Array_createRef(fcShort4Array* array);
FANCIER_API int fcShort4Array_releaseRef(fcShort4Array* array);

FANCIER_API int fcShort4Array_init(fcShort4Array* self);
FANCIER_API int fcShort4Array_initSize(fcShort4Array* self, int n);
FANCIER_API int fcShort4Array_initArray(fcShort4Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort4Array_initCopy(fcShort4Array* self, const fcShort4Array* array);
FANCIER_API int fcShort4Array_release(fcShort4Array* self);

FANCIER_API fcShort4 fcShort4Array_get(fcShort4Array* self, int i, int* err);
FANCIER_API int fcShort4Array_set(fcShort4Array* self, int i, fcShort4 x);

FANCIER_API int fcShort4Array_setArray(fcShort4Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort4Array_setCopy(fcShort4Array* self, const fcShort4Array* array);
FANCIER_API int fcShort4Array_setBuffer(fcShort4Array* self, jlong len, const void* v);

FANCIER_API int fcShort4Array_syncToNative(fcShort4Array* self);
FANCIER_API int fcShort4Array_syncToOCL(fcShort4Array* self);
FANCIER_API jboolean fcShort4Array_valid(const fcShort4Array* self);

FANCIER_API fcShort8Array* fcShort8Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcShort8Array_createRef(fcShort8Array* array);
FANCIER_API int fcShort8Array_releaseRef(fcShort8Array* array);

FANCIER_API int fcShort8Array_init(fcShort8Array* self);
FANCIER_API int fcShort8Array_initSize(fcShort8Array* self, int n);
FANCIER_API int fcShort8Array_initArray(fcShort8Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort8Array_initCopy(fcShort8Array* self, const fcShort8Array* array);
FANCIER_API int fcShort8Array_release(fcShort8Array* self);

FANCIER_API fcShort8 fcShort8Array_get(fcShort8Array* self, int i, int* err);
FANCIER_API int fcShort8Array_set(fcShort8Array* self, int i, fcShort8 x);

FANCIER_API int fcShort8Array_setArray(fcShort8Array* self, jsize len, const jshort* v);
FANCIER_API int fcShort8Array_setCopy(fcShort8Array* self, const fcShort8Array* array);
FANCIER_API int fcShort8Array_setBuffer(fcShort8Array* self, jlong len, const void* v);

FANCIER_API int fcShort8Array_syncToNative(fcShort8Array* self);
FANCIER_API int fcShort8Array_syncToOCL(fcShort8Array* self);
FANCIER_API jboolean fcShort8Array_valid(const fcShort8Array* self);

FANCIER_API fcInt2Array* fcInt2Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcInt2Array_createRef(fcInt2Array* array);
FANCIER_API int fcInt2Array_releaseRef(fcInt2Array* array);

FANCIER_API int fcInt2Array_init(fcInt2Array* self);
FANCIER_API int fcInt2Array_initSize(fcInt2Array* self, int n);
FANCIER_API int fcInt2Array_initArray(fcInt2Array* self, jsize len, const jint* v);
FANCIER_API int fcInt2Array_initCopy(fcInt2Array* self, const fcInt2Array* array);
FANCIER_API int fcInt2Array_release(fcInt2Array* self);

FANCIER_API fcInt2 fcInt2Array_get(fcInt2Array* self, int i, int* err);
FANCIER_API int fcInt2Array_set(fcInt2Array* self, int i, fcInt2 x);

FANCIER_API int fcInt2Array_setArray(fcInt2Array* self, jsize len, const jint* v);
FANCIER_API int fcInt2Array_setCopy(fcInt2Array* self, const fcInt2Array* array);
FANCIER_API int fcInt2Array_setBuffer(fcInt2Array* self, jlong len, const void* v);

FANCIER_API int fcInt2Array_syncToNative(fcInt2Array* self);
FANCIER_API int fcInt2Array_syncToOCL(fcInt2Array* self);
FANCIER_API jboolean fcInt2Array_valid(const fcInt2Array* self);

FANCIER_API fcInt3Array* fcInt3Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcInt3Array_createRef(fcInt3Array* array);
FANCIER_API int fcInt3Array_releaseRef(fcInt3Array* array);

FANCIER_API int fcInt3Array_init(fcInt3Array* self);
FANCIER_API int fcInt3Array_initSize(fcInt3Array* self, int n);
FANCIER_API int fcInt3Array_initArray(fcInt3Array* self, jsize len, const jint* v);
FANCIER_API int fcInt3Array_initCopy(fcInt3Array* self, const fcInt3Array* array);
FANCIER_API int fcInt3Array_release(fcInt3Array* self);

FANCIER_API fcInt3 fcInt3Array_get(fcInt3Array* self, int i, int* err);
FANCIER_API int fcInt3Array_set(fcInt3Array* self, int i, fcInt3 x);

FANCIER_API int fcInt3Array_setArray(fcInt3Array* self, jsize len, const jint* v);
FANCIER_API int fcInt3Array_setCopy(fcInt3Array* self, const fcInt3Array* array);
FANCIER_API int fcInt3Array_setBuffer(fcInt3Array* self, jlong len, const void* v);

FANCIER_API int fcInt3Array_syncToNative(fcInt3Array* self);
FANCIER_API int fcInt3Array_syncToOCL(fcInt3Array* self);
FANCIER_API jboolean fcInt3Array_valid(const fcInt3Array* self);

FANCIER_API fcInt4Array* fcInt4Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcInt4Array_createRef(fcInt4Array* array);
FANCIER_API int fcInt4Array_releaseRef(fcInt4Array* array);

FANCIER_API int fcInt4Array_init(fcInt4Array* self);
FANCIER_API int fcInt4Array_initSize(fcInt4Array* self, int n);
FANCIER_API int fcInt4Array_initArray(fcInt4Array* self, jsize len, const jint* v);
FANCIER_API int fcInt4Array_initCopy(fcInt4Array* self, const fcInt4Array* array);
FANCIER_API int fcInt4Array_release(fcInt4Array* self);

FANCIER_API fcInt4 fcInt4Array_get(fcInt4Array* self, int i, int* err);
FANCIER_API int fcInt4Array_set(fcInt4Array* self, int i, fcInt4 x);

FANCIER_API int fcInt4Array_setArray(fcInt4Array* self, jsize len, const jint* v);
FANCIER_API int fcInt4Array_setCopy(fcInt4Array* self, const fcInt4Array* array);
FANCIER_API int fcInt4Array_setBuffer(fcInt4Array* self, jlong len, const void* v);

FANCIER_API int fcInt4Array_syncToNative(fcInt4Array* self);
FANCIER_API int fcInt4Array_syncToOCL(fcInt4Array* self);
FANCIER_API jboolean fcInt4Array_valid(const fcInt4Array* self);

FANCIER_API fcInt8Array* fcInt8Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcInt8Array_createRef(fcInt8Array* array);
FANCIER_API int fcInt8Array_releaseRef(fcInt8Array* array);

FANCIER_API int fcInt8Array_init(fcInt8Array* self);
FANCIER_API int fcInt8Array_initSize(fcInt8Array* self, int n);
FANCIER_API int fcInt8Array_initArray(fcInt8Array* self, jsize len, const jint* v);
FANCIER_API int fcInt8Array_initCopy(fcInt8Array* self, const fcInt8Array* array);
FANCIER_API int fcInt8Array_release(fcInt8Array* self);

FANCIER_API fcInt8 fcInt8Array_get(fcInt8Array* self, int i, int* err);
FANCIER_API int fcInt8Array_set(fcInt8Array* self, int i, fcInt8 x);

FANCIER_API int fcInt8Array_setArray(fcInt8Array* self, jsize len, const jint* v);
FANCIER_API int fcInt8Array_setCopy(fcInt8Array* self, const fcInt8Array* array);
FANCIER_API int fcInt8Array_setBuffer(fcInt8Array* self, jlong len, const void* v);

FANCIER_API int fcInt8Array_syncToNative(fcInt8Array* self);
FANCIER_API int fcInt8Array_syncToOCL(fcInt8Array* self);
FANCIER_API jboolean fcInt8Array_valid(const fcInt8Array* self);

FANCIER_API fcLong2Array* fcLong2Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcLong2Array_createRef(fcLong2Array* array);
FANCIER_API int fcLong2Array_releaseRef(fcLong2Array* array);

FANCIER_API int fcLong2Array_init(fcLong2Array* self);
FANCIER_API int fcLong2Array_initSize(fcLong2Array* self, int n);
FANCIER_API int fcLong2Array_initArray(fcLong2Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong2Array_initCopy(fcLong2Array* self, const fcLong2Array* array);
FANCIER_API int fcLong2Array_release(fcLong2Array* self);

FANCIER_API fcLong2 fcLong2Array_get(fcLong2Array* self, int i, int* err);
FANCIER_API int fcLong2Array_set(fcLong2Array* self, int i, fcLong2 x);

FANCIER_API int fcLong2Array_setArray(fcLong2Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong2Array_setCopy(fcLong2Array* self, const fcLong2Array* array);
FANCIER_API int fcLong2Array_setBuffer(fcLong2Array* self, jlong len, const void* v);

FANCIER_API int fcLong2Array_syncToNative(fcLong2Array* self);
FANCIER_API int fcLong2Array_syncToOCL(fcLong2Array* self);
FANCIER_API jboolean fcLong2Array_valid(const fcLong2Array* self);

FANCIER_API fcLong3Array* fcLong3Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcLong3Array_createRef(fcLong3Array* array);
FANCIER_API int fcLong3Array_releaseRef(fcLong3Array* array);

FANCIER_API int fcLong3Array_init(fcLong3Array* self);
FANCIER_API int fcLong3Array_initSize(fcLong3Array* self, int n);
FANCIER_API int fcLong3Array_initArray(fcLong3Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong3Array_initCopy(fcLong3Array* self, const fcLong3Array* array);
FANCIER_API int fcLong3Array_release(fcLong3Array* self);

FANCIER_API fcLong3 fcLong3Array_get(fcLong3Array* self, int i, int* err);
FANCIER_API int fcLong3Array_set(fcLong3Array* self, int i, fcLong3 x);

FANCIER_API int fcLong3Array_setArray(fcLong3Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong3Array_setCopy(fcLong3Array* self, const fcLong3Array* array);
FANCIER_API int fcLong3Array_setBuffer(fcLong3Array* self, jlong len, const void* v);

FANCIER_API int fcLong3Array_syncToNative(fcLong3Array* self);
FANCIER_API int fcLong3Array_syncToOCL(fcLong3Array* self);
FANCIER_API jboolean fcLong3Array_valid(const fcLong3Array* self);

FANCIER_API fcLong4Array* fcLong4Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcLong4Array_createRef(fcLong4Array* array);
FANCIER_API int fcLong4Array_releaseRef(fcLong4Array* array);

FANCIER_API int fcLong4Array_init(fcLong4Array* self);
FANCIER_API int fcLong4Array_initSize(fcLong4Array* self, int n);
FANCIER_API int fcLong4Array_initArray(fcLong4Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong4Array_initCopy(fcLong4Array* self, const fcLong4Array* array);
FANCIER_API int fcLong4Array_release(fcLong4Array* self);

FANCIER_API fcLong4 fcLong4Array_get(fcLong4Array* self, int i, int* err);
FANCIER_API int fcLong4Array_set(fcLong4Array* self, int i, fcLong4 x);

FANCIER_API int fcLong4Array_setArray(fcLong4Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong4Array_setCopy(fcLong4Array* self, const fcLong4Array* array);
FANCIER_API int fcLong4Array_setBuffer(fcLong4Array* self, jlong len, const void* v);

FANCIER_API int fcLong4Array_syncToNative(fcLong4Array* self);
FANCIER_API int fcLong4Array_syncToOCL(fcLong4Array* self);
FANCIER_API jboolean fcLong4Array_valid(const fcLong4Array* self);

FANCIER_API fcLong8Array* fcLong8Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcLong8Array_createRef(fcLong8Array* array);
FANCIER_API int fcLong8Array_releaseRef(fcLong8Array* array);

FANCIER_API int fcLong8Array_init(fcLong8Array* self);
FANCIER_API int fcLong8Array_initSize(fcLong8Array* self, int n);
FANCIER_API int fcLong8Array_initArray(fcLong8Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong8Array_initCopy(fcLong8Array* self, const fcLong8Array* array);
FANCIER_API int fcLong8Array_release(fcLong8Array* self);

FANCIER_API fcLong8 fcLong8Array_get(fcLong8Array* self, int i, int* err);
FANCIER_API int fcLong8Array_set(fcLong8Array* self, int i, fcLong8 x);

FANCIER_API int fcLong8Array_setArray(fcLong8Array* self, jsize len, const jlong* v);
FANCIER_API int fcLong8Array_setCopy(fcLong8Array* self, const fcLong8Array* array);
FANCIER_API int fcLong8Array_setBuffer(fcLong8Array* self, jlong len, const void* v);

FANCIER_API int fcLong8Array_syncToNative(fcLong8Array* self);
FANCIER_API int fcLong8Array_syncToOCL(fcLong8Array* self);
FANCIER_API jboolean fcLong8Array_valid(const fcLong8Array* self);

FANCIER_API fcFloat2Array* fcFloat2Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcFloat2Array_createRef(fcFloat2Array* array);
FANCIER_API int fcFloat2Array_releaseRef(fcFloat2Array* array);

FANCIER_API int fcFloat2Array_init(fcFloat2Array* self);
FANCIER_API int fcFloat2Array_initSize(fcFloat2Array* self, int n);
FANCIER_API int fcFloat2Array_initArray(fcFloat2Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat2Array_initCopy(fcFloat2Array* self, const fcFloat2Array* array);
FANCIER_API int fcFloat2Array_release(fcFloat2Array* self);

FANCIER_API fcFloat2 fcFloat2Array_get(fcFloat2Array* self, int i, int* err);
FANCIER_API int fcFloat2Array_set(fcFloat2Array* self, int i, fcFloat2 x);

FANCIER_API int fcFloat2Array_setArray(fcFloat2Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat2Array_setCopy(fcFloat2Array* self, const fcFloat2Array* array);
FANCIER_API int fcFloat2Array_setBuffer(fcFloat2Array* self, jlong len, const void* v);

FANCIER_API int fcFloat2Array_syncToNative(fcFloat2Array* self);
FANCIER_API int fcFloat2Array_syncToOCL(fcFloat2Array* self);
FANCIER_API jboolean fcFloat2Array_valid(const fcFloat2Array* self);

FANCIER_API fcFloat3Array* fcFloat3Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcFloat3Array_createRef(fcFloat3Array* array);
FANCIER_API int fcFloat3Array_releaseRef(fcFloat3Array* array);

FANCIER_API int fcFloat3Array_init(fcFloat3Array* self);
FANCIER_API int fcFloat3Array_initSize(fcFloat3Array* self, int n);
FANCIER_API int fcFloat3Array_initArray(fcFloat3Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat3Array_initCopy(fcFloat3Array* self, const fcFloat3Array* array);
FANCIER_API int fcFloat3Array_release(fcFloat3Array* self);

FANCIER_API fcFloat3 fcFloat3Array_get(fcFloat3Array* self, int i, int* err);
FANCIER_API int fcFloat3Array_set(fcFloat3Array* self, int i, fcFloat3 x);

FANCIER_API int fcFloat3Array_setArray(fcFloat3Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat3Array_setCopy(fcFloat3Array* self, const fcFloat3Array* array);
FANCIER_API int fcFloat3Array_setBuffer(fcFloat3Array* self, jlong len, const void* v);

FANCIER_API int fcFloat3Array_syncToNative(fcFloat3Array* self);
FANCIER_API int fcFloat3Array_syncToOCL(fcFloat3Array* self);
FANCIER_API jboolean fcFloat3Array_valid(const fcFloat3Array* self);

FANCIER_API fcFloat4Array* fcFloat4Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcFloat4Array_createRef(fcFloat4Array* array);
FANCIER_API int fcFloat4Array_releaseRef(fcFloat4Array* array);

FANCIER_API int fcFloat4Array_init(fcFloat4Array* self);
FANCIER_API int fcFloat4Array_initSize(fcFloat4Array* self, int n);
FANCIER_API int fcFloat4Array_initArray(fcFloat4Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat4Array_initCopy(fcFloat4Array* self, const fcFloat4Array* array);
FANCIER_API int fcFloat4Array_release(fcFloat4Array* self);

FANCIER_API fcFloat4 fcFloat4Array_get(fcFloat4Array* self, int i, int* err);
FANCIER_API int fcFloat4Array_set(fcFloat4Array* self, int i, fcFloat4 x);

FANCIER_API int fcFloat4Array_setArray(fcFloat4Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat4Array_setCopy(fcFloat4Array* self, const fcFloat4Array* array);
FANCIER_API int fcFloat4Array_setBuffer(fcFloat4Array* self, jlong len, const void* v);

FANCIER_API int fcFloat4Array_syncToNative(fcFloat4Array* self);
FANCIER_API int fcFloat4Array_syncToOCL(fcFloat4Array* self);
FANCIER_API jboolean fcFloat4Array_valid(const fcFloat4Array* self);

FANCIER_API fcFloat8Array* fcFloat8Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcFloat8Array_createRef(fcFloat8Array* array);
FANCIER_API int fcFloat8Array_releaseRef(fcFloat8Array* array);

FANCIER_API int fcFloat8Array_init(fcFloat8Array* self);
FANCIER_API int fcFloat8Array_initSize(fcFloat8Array* self, int n);
FANCIER_API int fcFloat8Array_initArray(fcFloat8Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat8Array_initCopy(fcFloat8Array* self, const fcFloat8Array* array);
FANCIER_API int fcFloat8Array_release(fcFloat8Array* self);

FANCIER_API fcFloat8 fcFloat8Array_get(fcFloat8Array* self, int i, int* err);
FANCIER_API int fcFloat8Array_set(fcFloat8Array* self, int i, fcFloat8 x);

FANCIER_API int fcFloat8Array_setArray(fcFloat8Array* self, jsize len, const jfloat* v);
FANCIER_API int fcFloat8Array_setCopy(fcFloat8Array* self, const fcFloat8Array* array);
FANCIER_API int fcFloat8Array_setBuffer(fcFloat8Array* self, jlong len, const void* v);

FANCIER_API int fcFloat8Array_syncToNative(fcFloat8Array* self);
FANCIER_API int fcFloat8Array_syncToOCL(fcFloat8Array* self);
FANCIER_API jboolean fcFloat8Array_valid(const fcFloat8Array* self);

FANCIER_API fcDouble2Array* fcDouble2Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcDouble2Array_createRef(fcDouble2Array* array);
FANCIER_API int fcDouble2Array_releaseRef(fcDouble2Array* array);

FANCIER_API int fcDouble2Array_init(fcDouble2Array* self);
FANCIER_API int fcDouble2Array_initSize(fcDouble2Array* self, int n);
FANCIER_API int fcDouble2Array_initArray(fcDouble2Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble2Array_initCopy(fcDouble2Array* self, const fcDouble2Array* array);
FANCIER_API int fcDouble2Array_release(fcDouble2Array* self);

FANCIER_API fcDouble2 fcDouble2Array_get(fcDouble2Array* self, int i, int* err);
FANCIER_API int fcDouble2Array_set(fcDouble2Array* self, int i, fcDouble2 x);

FANCIER_API int fcDouble2Array_setArray(fcDouble2Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble2Array_setCopy(fcDouble2Array* self, const fcDouble2Array* array);
FANCIER_API int fcDouble2Array_setBuffer(fcDouble2Array* self, jlong len, const void* v);

FANCIER_API int fcDouble2Array_syncToNative(fcDouble2Array* self);
FANCIER_API int fcDouble2Array_syncToOCL(fcDouble2Array* self);
FANCIER_API jboolean fcDouble2Array_valid(const fcDouble2Array* self);

FANCIER_API fcDouble3Array* fcDouble3Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcDouble3Array_createRef(fcDouble3Array* array);
FANCIER_API int fcDouble3Array_releaseRef(fcDouble3Array* array);

FANCIER_API int fcDouble3Array_init(fcDouble3Array* self);
FANCIER_API int fcDouble3Array_initSize(fcDouble3Array* self, int n);
FANCIER_API int fcDouble3Array_initArray(fcDouble3Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble3Array_initCopy(fcDouble3Array* self, const fcDouble3Array* array);
FANCIER_API int fcDouble3Array_release(fcDouble3Array* self);

FANCIER_API fcDouble3 fcDouble3Array_get(fcDouble3Array* self, int i, int* err);
FANCIER_API int fcDouble3Array_set(fcDouble3Array* self, int i, fcDouble3 x);

FANCIER_API int fcDouble3Array_setArray(fcDouble3Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble3Array_setCopy(fcDouble3Array* self, const fcDouble3Array* array);
FANCIER_API int fcDouble3Array_setBuffer(fcDouble3Array* self, jlong len, const void* v);

FANCIER_API int fcDouble3Array_syncToNative(fcDouble3Array* self);
FANCIER_API int fcDouble3Array_syncToOCL(fcDouble3Array* self);
FANCIER_API jboolean fcDouble3Array_valid(const fcDouble3Array* self);

FANCIER_API fcDouble4Array* fcDouble4Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcDouble4Array_createRef(fcDouble4Array* array);
FANCIER_API int fcDouble4Array_releaseRef(fcDouble4Array* array);

FANCIER_API int fcDouble4Array_init(fcDouble4Array* self);
FANCIER_API int fcDouble4Array_initSize(fcDouble4Array* self, int n);
FANCIER_API int fcDouble4Array_initArray(fcDouble4Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble4Array_initCopy(fcDouble4Array* self, const fcDouble4Array* array);
FANCIER_API int fcDouble4Array_release(fcDouble4Array* self);

FANCIER_API fcDouble4 fcDouble4Array_get(fcDouble4Array* self, int i, int* err);
FANCIER_API int fcDouble4Array_set(fcDouble4Array* self, int i, fcDouble4 x);

FANCIER_API int fcDouble4Array_setArray(fcDouble4Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble4Array_setCopy(fcDouble4Array* self, const fcDouble4Array* array);
FANCIER_API int fcDouble4Array_setBuffer(fcDouble4Array* self, jlong len, const void* v);

FANCIER_API int fcDouble4Array_syncToNative(fcDouble4Array* self);
FANCIER_API int fcDouble4Array_syncToOCL(fcDouble4Array* self);
FANCIER_API jboolean fcDouble4Array_valid(const fcDouble4Array* self);

FANCIER_API fcDouble8Array* fcDouble8Array_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcDouble8Array_createRef(fcDouble8Array* array);
FANCIER_API int fcDouble8Array_releaseRef(fcDouble8Array* array);

FANCIER_API int fcDouble8Array_init(fcDouble8Array* self);
FANCIER_API int fcDouble8Array_initSize(fcDouble8Array* self, int n);
FANCIER_API int fcDouble8Array_initArray(fcDouble8Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble8Array_initCopy(fcDouble8Array* self, const fcDouble8Array* array);
FANCIER_API int fcDouble8Array_release(fcDouble8Array* self);

FANCIER_API fcDouble8 fcDouble8Array_get(fcDouble8Array* self, int i, int* err);
FANCIER_API int fcDouble8Array_set(fcDouble8Array* self, int i, fcDouble8 x);

FANCIER_API int fcDouble8Array_setArray(fcDouble8Array* self, jsize len, const jdouble* v);
FANCIER_API int fcDouble8Array_setCopy(fcDouble8Array* self, const fcDouble8Array* array);
FANCIER_API int fcDouble8Array_setBuffer(fcDouble8Array* self, jlong len, const void* v);

FANCIER_API int fcDouble8Array_syncToNative(fcDouble8Array* self);
FANCIER_API int fcDouble8Array_syncToOCL(fcDouble8Array* self);
FANCIER_API jboolean fcDouble8Array_valid(const fcDouble8Array* self);

#endif  // _FANCIER_VECTOR_ARRAY_H_
