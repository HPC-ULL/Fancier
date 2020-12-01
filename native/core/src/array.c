#include <fancier/array.h>

#include <fancier/exception.h>
#include <fancier/java.h>
#include <fancier/ocl.h>

#include <string.h>

#include <fancier/internal/snippets.inc>


//
// Global Java References
//

jclass fcByteArray_class = NULL;
jmethodID fcByteArray_constructor = NULL;
jclass fcShortArray_class = NULL;
jmethodID fcShortArray_constructor = NULL;
jclass fcIntArray_class = NULL;
jmethodID fcIntArray_constructor = NULL;
jclass fcLongArray_class = NULL;
jmethodID fcLongArray_constructor = NULL;
jclass fcFloatArray_class = NULL;
jmethodID fcFloatArray_constructor = NULL;
jclass fcDoubleArray_class = NULL;
jmethodID fcDoubleArray_constructor = NULL;

//
// Global Java Initialization / Destruction
//

jint fcArray_initJNI(JNIEnv* env) {
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/ByteArray", fcByteArray_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByteArray_constructor, fcByteArray_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/ShortArray", fcShortArray_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShortArray_constructor, fcShortArray_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/IntArray", fcIntArray_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcIntArray_constructor, fcIntArray_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/LongArray", fcLongArray_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLongArray_constructor, fcLongArray_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/FloatArray", fcFloatArray_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloatArray_constructor, fcFloatArray_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/DoubleArray", fcDoubleArray_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDoubleArray_constructor, fcDoubleArray_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);

  return FC_EXCEPTION_SUCCESS;
}

void fcArray_releaseJNI(JNIEnv* env) {
  FC_FREE_CLASS_REF(env, fcByteArray_class);
  fcByteArray_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShortArray_class);
  fcShortArray_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcIntArray_class);
  fcIntArray_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLongArray_class);
  fcLongArray_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloatArray_class);
  fcFloatArray_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDoubleArray_class);
  fcDoubleArray_constructor = NULL;
}


//
// fcByteArray
//

FC_JAVA_INSTANCE_HANDLERS(fcByteArray);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcByteArray* self = (fcByteArray*) nativePtr;
  jint err = fcByteArray_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcByteArray_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcByteArray* self = fcByteArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcByteArray_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_initNative___3B(JNIEnv* env, jobject obj, jbyteArray v) {
  // Allocate instance
  fcByteArray* self = fcByteArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByteArray_initNative__[B:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByteArray_initNative__[B:v", FC_VOID_EXPR);

  jint err = fcByteArray_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_initNative__Les_ull_pcg_hpc_fancier_array_fcByteArray_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcByteArray* self = fcByteArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByteArray_initNative__Les_ull_pcg_hpc_fancier_vector_array_fcByteArray;:array", FC_VOID_EXPR);

  // Initialize array
  fcByteArray* __tmp_array = fcByteArray_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcByteArray_getJava:array", FC_VOID_EXPR);

  jint err = fcByteArray_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_releaseNative(JNIEnv* env, jobject obj) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcByteArray_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_release", FC_VOID_EXPR);

  fcByteArray_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcByteArray_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_releaseRef", FC_VOID_EXPR);

  fcByteArray_setJava(env, obj, 0L);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_get__I(JNIEnv* env, jobject obj, jint i) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", '\0');

  jint err;
  jbyte __tmp_ret = fcByteArray_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_get", '\0');

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_set__IB(JNIEnv* env, jobject obj, jint i, jbyte x) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", FC_VOID_EXPR);

  jint err = fcByteArray_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_length(JNIEnv* env, jobject obj) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", 0L);

  if (!fcByteArray_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcByteArray_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jbyteArray JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_getContents(JNIEnv* env, jobject obj) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByteArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_syncToNative", NULL);

  // Create Java array and populate it
  jbyteArray __tmp_ret = FC_JNI_CALL(env, NewByteArray, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcByteArray_getContents", NULL);

  FC_JNI_CALL(env, SetByteArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fcByteArray_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_setContents(JNIEnv* env, jobject obj, jbyteArray v) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByteArray_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByteArray_setContents:v", FC_VOID_EXPR);

  jint err = fcByteArray_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_syncToNative(JNIEnv* env, jobject obj) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", FC_VOID_EXPR);

  jint err = fcByteArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ByteArray_syncToOCL(JNIEnv* env, jobject obj) {
  fcByteArray* self = fcByteArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByteArray_getJava", FC_VOID_EXPR);

  jint err = fcByteArray_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByteArray_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fcByteArray_createRef(fcByteArray* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_releaseRef(fcByteArray* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcByteArray_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_init(fcByteArray* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_initSize(fcByteArray* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcByteArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_byte), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_initArray(fcByteArray* self, int len, jbyte* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByteArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_byte), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByteArray_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_initCopy(fcByteArray* self, const fcByteArray* array) {
  int err;

  // Check parameters
  if (array == NULL || !fcByteArray_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByteArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_byte), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_byte), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_byte), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_release(fcByteArray* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    int err = 0;

    if (self->c != NULL) {
      if (self->location != FC_ARRAY_LOCATION_OPENCL) {
        if (self->ocl == NULL) {
          ++self->ref_count;
          return FC_EXCEPTION_INVALID_STATE;
        }
        err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);
      }

      self->c = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    if (self->ocl != NULL) {
      err = clReleaseMemObject(self->ocl);

      self->ocl = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    // Mark the object as deleted
    self->location = FC_ARRAY_LOCATION_NONE;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

jbyte fcByteArray_get(fcByteArray* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  jbyte __tmp_ret = '\0';
  if (!fcByteArray_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcByteArray_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fcByteArray_set(fcByteArray* self, int i, jbyte x) {
  if (!fcByteArray_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fcByteArray_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_setContents(fcByteArray* self, int len, jbyte* v) {
  int err;

  if (!fcByteArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_byte), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(jbyte)) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcByteArray_syncToNative(fcByteArray* self) {
  if (!fcByteArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_byte), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fcByteArray_syncToOCL(fcByteArray* self) {
  if (!fcByteArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fcByteArray_valid(const fcByteArray* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


//
// fcShortArray
//

FC_JAVA_INSTANCE_HANDLERS(fcShortArray);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcShortArray* self = (fcShortArray*) nativePtr;
  jint err = fcShortArray_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcShortArray_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcShortArray* self = fcShortArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcShortArray_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_initNative___3S(JNIEnv* env, jobject obj, jshortArray v) {
  // Allocate instance
  fcShortArray* self = fcShortArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShortArray_initNative__[S:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShortArray_initNative__[S:v", FC_VOID_EXPR);

  jint err = fcShortArray_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_initNative__Les_ull_pcg_hpc_fancier_array_fcShortArray_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcShortArray* self = fcShortArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShortArray_initNative__Les_ull_pcg_hpc_fancier_vector_array_fcShortArray;:array", FC_VOID_EXPR);

  // Initialize array
  fcShortArray* __tmp_array = fcShortArray_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcShortArray_getJava:array", FC_VOID_EXPR);

  jint err = fcShortArray_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_releaseNative(JNIEnv* env, jobject obj) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcShortArray_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_release", FC_VOID_EXPR);

  fcShortArray_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcShortArray_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_releaseRef", FC_VOID_EXPR);

  fcShortArray_setJava(env, obj, 0L);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_get__I(JNIEnv* env, jobject obj, jint i) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", 0);

  jint err;
  jshort __tmp_ret = fcShortArray_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_get", 0);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_set__IS(JNIEnv* env, jobject obj, jint i, jshort x) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", FC_VOID_EXPR);

  jint err = fcShortArray_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_length(JNIEnv* env, jobject obj) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", 0L);

  if (!fcShortArray_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcShortArray_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jshortArray JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_getContents(JNIEnv* env, jobject obj) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShortArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToNative", NULL);

  // Create Java array and populate it
  jshortArray __tmp_ret = FC_JNI_CALL(env, NewShortArray, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcShortArray_getContents", NULL);

  FC_JNI_CALL(env, SetShortArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fcShortArray_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_setContents(JNIEnv* env, jobject obj, jshortArray v) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShortArray_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShortArray_setContents:v", FC_VOID_EXPR);

  jint err = fcShortArray_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_syncToNative(JNIEnv* env, jobject obj) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", FC_VOID_EXPR);

  jint err = fcShortArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_ShortArray_syncToOCL(JNIEnv* env, jobject obj) {
  fcShortArray* self = fcShortArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShortArray_getJava", FC_VOID_EXPR);

  jint err = fcShortArray_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fcShortArray_createRef(fcShortArray* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_releaseRef(fcShortArray* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcShortArray_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_init(fcShortArray* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_initSize(fcShortArray* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcShortArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_short), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_initArray(fcShortArray* self, int len, jshort* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShortArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_short), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShortArray_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_initCopy(fcShortArray* self, const fcShortArray* array) {
  int err;

  // Check parameters
  if (array == NULL || !fcShortArray_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShortArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_short), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_short), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_short), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_release(fcShortArray* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    int err = 0;

    if (self->c != NULL) {
      if (self->location != FC_ARRAY_LOCATION_OPENCL) {
        if (self->ocl == NULL) {
          ++self->ref_count;
          return FC_EXCEPTION_INVALID_STATE;
        }
        err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);
      }

      self->c = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    if (self->ocl != NULL) {
      err = clReleaseMemObject(self->ocl);

      self->ocl = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    // Mark the object as deleted
    self->location = FC_ARRAY_LOCATION_NONE;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

jshort fcShortArray_get(fcShortArray* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  jshort __tmp_ret = 0;
  if (!fcShortArray_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcShortArray_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fcShortArray_set(fcShortArray* self, int i, jshort x) {
  if (!fcShortArray_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fcShortArray_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_setContents(fcShortArray* self, int len, jshort* v) {
  int err;

  if (!fcShortArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_short), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(jshort)) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcShortArray_syncToNative(fcShortArray* self) {
  if (!fcShortArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_short), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fcShortArray_syncToOCL(fcShortArray* self) {
  if (!fcShortArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fcShortArray_valid(const fcShortArray* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


//
// fcIntArray
//

FC_JAVA_INSTANCE_HANDLERS(fcIntArray);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcIntArray* self = (fcIntArray*) nativePtr;
  jint err = fcIntArray_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcIntArray_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcIntArray* self = fcIntArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcIntArray_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_initNative___3I(JNIEnv* env, jobject obj, jintArray v) {
  // Allocate instance
  fcIntArray* self = fcIntArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcIntArray_initNative__[I:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcIntArray_initNative__[I:v", FC_VOID_EXPR);

  jint err = fcIntArray_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_initNative__Les_ull_pcg_hpc_fancier_array_fcIntArray_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcIntArray* self = fcIntArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcIntArray_initNative__Les_ull_pcg_hpc_fancier_vector_array_fcIntArray;:array", FC_VOID_EXPR);

  // Initialize array
  fcIntArray* __tmp_array = fcIntArray_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcIntArray_getJava:array", FC_VOID_EXPR);

  jint err = fcIntArray_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_releaseNative(JNIEnv* env, jobject obj) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcIntArray_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_release", FC_VOID_EXPR);

  fcIntArray_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcIntArray_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_releaseRef", FC_VOID_EXPR);

  fcIntArray_setJava(env, obj, 0L);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_get__I(JNIEnv* env, jobject obj, jint i) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", 0);

  jint err;
  jint __tmp_ret = fcIntArray_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_get", 0);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_set__II(JNIEnv* env, jobject obj, jint i, jint x) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", FC_VOID_EXPR);

  jint err = fcIntArray_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_length(JNIEnv* env, jobject obj) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", 0L);

  if (!fcIntArray_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcIntArray_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jintArray JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_getContents(JNIEnv* env, jobject obj) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", NULL);

  // Ensure native array is synced
  jint err = fcIntArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_syncToNative", NULL);

  // Create Java array and populate it
  jintArray __tmp_ret = FC_JNI_CALL(env, NewIntArray, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcIntArray_getContents", NULL);

  FC_JNI_CALL(env, SetIntArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fcIntArray_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_setContents(JNIEnv* env, jobject obj, jintArray v) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcIntArray_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcIntArray_setContents:v", FC_VOID_EXPR);

  jint err = fcIntArray_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_syncToNative(JNIEnv* env, jobject obj) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", FC_VOID_EXPR);

  jint err = fcIntArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_IntArray_syncToOCL(JNIEnv* env, jobject obj) {
  fcIntArray* self = fcIntArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcIntArray_getJava", FC_VOID_EXPR);

  jint err = fcIntArray_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcIntArray_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fcIntArray_createRef(fcIntArray* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_releaseRef(fcIntArray* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcIntArray_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_init(fcIntArray* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_initSize(fcIntArray* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcIntArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_int), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_initArray(fcIntArray* self, int len, jint* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcIntArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_int), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcIntArray_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_initCopy(fcIntArray* self, const fcIntArray* array) {
  int err;

  // Check parameters
  if (array == NULL || !fcIntArray_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcIntArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_int), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_int), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_int), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_release(fcIntArray* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    int err = 0;

    if (self->c != NULL) {
      if (self->location != FC_ARRAY_LOCATION_OPENCL) {
        if (self->ocl == NULL) {
          ++self->ref_count;
          return FC_EXCEPTION_INVALID_STATE;
        }
        err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);
      }

      self->c = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    if (self->ocl != NULL) {
      err = clReleaseMemObject(self->ocl);

      self->ocl = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    // Mark the object as deleted
    self->location = FC_ARRAY_LOCATION_NONE;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

jint fcIntArray_get(fcIntArray* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  jint __tmp_ret = 0;
  if (!fcIntArray_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcIntArray_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fcIntArray_set(fcIntArray* self, int i, jint x) {
  if (!fcIntArray_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fcIntArray_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_setContents(fcIntArray* self, int len, jint* v) {
  int err;

  if (!fcIntArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_int), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(jint)) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcIntArray_syncToNative(fcIntArray* self) {
  if (!fcIntArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_int), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fcIntArray_syncToOCL(fcIntArray* self) {
  if (!fcIntArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fcIntArray_valid(const fcIntArray* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


//
// fcLongArray
//

FC_JAVA_INSTANCE_HANDLERS(fcLongArray);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcLongArray* self = (fcLongArray*) nativePtr;
  jint err = fcLongArray_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcLongArray_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcLongArray* self = fcLongArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcLongArray_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_initNative___3J(JNIEnv* env, jobject obj, jlongArray v) {
  // Allocate instance
  fcLongArray* self = fcLongArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLongArray_initNative__[J:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLongArray_initNative__[J:v", FC_VOID_EXPR);

  jint err = fcLongArray_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_initNative__Les_ull_pcg_hpc_fancier_array_fcLongArray_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcLongArray* self = fcLongArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLongArray_initNative__Les_ull_pcg_hpc_fancier_vector_array_fcLongArray;:array", FC_VOID_EXPR);

  // Initialize array
  fcLongArray* __tmp_array = fcLongArray_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcLongArray_getJava:array", FC_VOID_EXPR);

  jint err = fcLongArray_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_releaseNative(JNIEnv* env, jobject obj) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcLongArray_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_release", FC_VOID_EXPR);

  fcLongArray_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcLongArray_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_releaseRef", FC_VOID_EXPR);

  fcLongArray_setJava(env, obj, 0L);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_get__I(JNIEnv* env, jobject obj, jint i) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", 0L);

  jint err;
  jlong __tmp_ret = fcLongArray_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_get", 0L);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_set__IJ(JNIEnv* env, jobject obj, jint i, jlong x) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", FC_VOID_EXPR);

  jint err = fcLongArray_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_length(JNIEnv* env, jobject obj) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", 0L);

  if (!fcLongArray_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcLongArray_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jlongArray JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_getContents(JNIEnv* env, jobject obj) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLongArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_syncToNative", NULL);

  // Create Java array and populate it
  jlongArray __tmp_ret = FC_JNI_CALL(env, NewLongArray, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcLongArray_getContents", NULL);

  FC_JNI_CALL(env, SetLongArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fcLongArray_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_setContents(JNIEnv* env, jobject obj, jlongArray v) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLongArray_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLongArray_setContents:v", FC_VOID_EXPR);

  jint err = fcLongArray_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_syncToNative(JNIEnv* env, jobject obj) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", FC_VOID_EXPR);

  jint err = fcLongArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_LongArray_syncToOCL(JNIEnv* env, jobject obj) {
  fcLongArray* self = fcLongArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLongArray_getJava", FC_VOID_EXPR);

  jint err = fcLongArray_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLongArray_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fcLongArray_createRef(fcLongArray* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_releaseRef(fcLongArray* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcLongArray_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_init(fcLongArray* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_initSize(fcLongArray* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcLongArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_long), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_initArray(fcLongArray* self, int len, jlong* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLongArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_long), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLongArray_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_initCopy(fcLongArray* self, const fcLongArray* array) {
  int err;

  // Check parameters
  if (array == NULL || !fcLongArray_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLongArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_long), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_long), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_long), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_release(fcLongArray* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    int err = 0;

    if (self->c != NULL) {
      if (self->location != FC_ARRAY_LOCATION_OPENCL) {
        if (self->ocl == NULL) {
          ++self->ref_count;
          return FC_EXCEPTION_INVALID_STATE;
        }
        err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);
      }

      self->c = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    if (self->ocl != NULL) {
      err = clReleaseMemObject(self->ocl);

      self->ocl = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    // Mark the object as deleted
    self->location = FC_ARRAY_LOCATION_NONE;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

jlong fcLongArray_get(fcLongArray* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  jlong __tmp_ret = 0L;
  if (!fcLongArray_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcLongArray_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fcLongArray_set(fcLongArray* self, int i, jlong x) {
  if (!fcLongArray_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fcLongArray_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_setContents(fcLongArray* self, int len, jlong* v) {
  int err;

  if (!fcLongArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_long), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(jlong)) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcLongArray_syncToNative(fcLongArray* self) {
  if (!fcLongArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_long), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fcLongArray_syncToOCL(fcLongArray* self) {
  if (!fcLongArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fcLongArray_valid(const fcLongArray* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


//
// fcFloatArray
//

FC_JAVA_INSTANCE_HANDLERS(fcFloatArray);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcFloatArray* self = (fcFloatArray*) nativePtr;
  jint err = fcFloatArray_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcFloatArray_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcFloatArray* self = fcFloatArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcFloatArray_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_initNative___3F(JNIEnv* env, jobject obj, jfloatArray v) {
  // Allocate instance
  fcFloatArray* self = fcFloatArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloatArray_initNative__[F:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloatArray_initNative__[F:v", FC_VOID_EXPR);

  jint err = fcFloatArray_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_initNative__Les_ull_pcg_hpc_fancier_array_fcFloatArray_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcFloatArray* self = fcFloatArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloatArray_initNative__Les_ull_pcg_hpc_fancier_vector_array_fcFloatArray;:array", FC_VOID_EXPR);

  // Initialize array
  fcFloatArray* __tmp_array = fcFloatArray_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcFloatArray_getJava:array", FC_VOID_EXPR);

  jint err = fcFloatArray_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_releaseNative(JNIEnv* env, jobject obj) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcFloatArray_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_release", FC_VOID_EXPR);

  fcFloatArray_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcFloatArray_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_releaseRef", FC_VOID_EXPR);

  fcFloatArray_setJava(env, obj, 0L);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_get__I(JNIEnv* env, jobject obj, jint i) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", 0.0f);

  jint err;
  jfloat __tmp_ret = fcFloatArray_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_get", 0.0f);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_set__IF(JNIEnv* env, jobject obj, jint i, jfloat x) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", FC_VOID_EXPR);

  jint err = fcFloatArray_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_length(JNIEnv* env, jobject obj) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", 0L);

  if (!fcFloatArray_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcFloatArray_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jfloatArray JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_getContents(JNIEnv* env, jobject obj) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloatArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_syncToNative", NULL);

  // Create Java array and populate it
  jfloatArray __tmp_ret = FC_JNI_CALL(env, NewFloatArray, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcFloatArray_getContents", NULL);

  FC_JNI_CALL(env, SetFloatArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fcFloatArray_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_setContents(JNIEnv* env, jobject obj, jfloatArray v) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloatArray_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloatArray_setContents:v", FC_VOID_EXPR);

  jint err = fcFloatArray_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_syncToNative(JNIEnv* env, jobject obj) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", FC_VOID_EXPR);

  jint err = fcFloatArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_FloatArray_syncToOCL(JNIEnv* env, jobject obj) {
  fcFloatArray* self = fcFloatArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloatArray_getJava", FC_VOID_EXPR);

  jint err = fcFloatArray_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloatArray_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fcFloatArray_createRef(fcFloatArray* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_releaseRef(fcFloatArray* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcFloatArray_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_init(fcFloatArray* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_initSize(fcFloatArray* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcFloatArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_float), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_initArray(fcFloatArray* self, int len, jfloat* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloatArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_float), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloatArray_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_initCopy(fcFloatArray* self, const fcFloatArray* array) {
  int err;

  // Check parameters
  if (array == NULL || !fcFloatArray_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloatArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_float), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_float), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_float), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_release(fcFloatArray* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    int err = 0;

    if (self->c != NULL) {
      if (self->location != FC_ARRAY_LOCATION_OPENCL) {
        if (self->ocl == NULL) {
          ++self->ref_count;
          return FC_EXCEPTION_INVALID_STATE;
        }
        err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);
      }

      self->c = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    if (self->ocl != NULL) {
      err = clReleaseMemObject(self->ocl);

      self->ocl = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    // Mark the object as deleted
    self->location = FC_ARRAY_LOCATION_NONE;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

jfloat fcFloatArray_get(fcFloatArray* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  jfloat __tmp_ret = 0.0f;
  if (!fcFloatArray_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcFloatArray_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fcFloatArray_set(fcFloatArray* self, int i, jfloat x) {
  if (!fcFloatArray_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fcFloatArray_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_setContents(fcFloatArray* self, int len, jfloat* v) {
  int err;

  if (!fcFloatArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_float), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(jfloat)) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcFloatArray_syncToNative(fcFloatArray* self) {
  if (!fcFloatArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_float), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fcFloatArray_syncToOCL(fcFloatArray* self) {
  if (!fcFloatArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fcFloatArray_valid(const fcFloatArray* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


//
// fcDoubleArray
//

FC_JAVA_INSTANCE_HANDLERS(fcDoubleArray);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcDoubleArray* self = (fcDoubleArray*) nativePtr;
  jint err = fcDoubleArray_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcDoubleArray_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcDoubleArray* self = fcDoubleArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcDoubleArray_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_initNative___3D(JNIEnv* env, jobject obj, jdoubleArray v) {
  // Allocate instance
  fcDoubleArray* self = fcDoubleArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDoubleArray_initNative__[D:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDoubleArray_initNative__[D:v", FC_VOID_EXPR);

  jint err = fcDoubleArray_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_initNative__Les_ull_pcg_hpc_fancier_array_fcDoubleArray_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcDoubleArray* self = fcDoubleArray_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDoubleArray_initNative__Les_ull_pcg_hpc_fancier_vector_array_fcDoubleArray;:array", FC_VOID_EXPR);

  // Initialize array
  fcDoubleArray* __tmp_array = fcDoubleArray_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcDoubleArray_getJava:array", FC_VOID_EXPR);

  jint err = fcDoubleArray_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_releaseNative(JNIEnv* env, jobject obj) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcDoubleArray_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_release", FC_VOID_EXPR);

  fcDoubleArray_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcDoubleArray_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_releaseRef", FC_VOID_EXPR);

  fcDoubleArray_setJava(env, obj, 0L);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_get__I(JNIEnv* env, jobject obj, jint i) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", 0.0);

  jint err;
  jdouble __tmp_ret = fcDoubleArray_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_get", 0.0);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_set__ID(JNIEnv* env, jobject obj, jint i, jdouble x) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", FC_VOID_EXPR);

  jint err = fcDoubleArray_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_length(JNIEnv* env, jobject obj) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", 0L);

  if (!fcDoubleArray_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcDoubleArray_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jdoubleArray JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_getContents(JNIEnv* env, jobject obj) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDoubleArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToNative", NULL);

  // Create Java array and populate it
  jdoubleArray __tmp_ret = FC_JNI_CALL(env, NewDoubleArray, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcDoubleArray_getContents", NULL);

  FC_JNI_CALL(env, SetDoubleArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fcDoubleArray_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_setContents(JNIEnv* env, jobject obj, jdoubleArray v) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDoubleArray_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDoubleArray_setContents:v", FC_VOID_EXPR);

  jint err = fcDoubleArray_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_syncToNative(JNIEnv* env, jobject obj) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", FC_VOID_EXPR);

  jint err = fcDoubleArray_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_DoubleArray_syncToOCL(JNIEnv* env, jobject obj) {
  fcDoubleArray* self = fcDoubleArray_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDoubleArray_getJava", FC_VOID_EXPR);

  jint err = fcDoubleArray_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fcDoubleArray_createRef(fcDoubleArray* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_releaseRef(fcDoubleArray* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcDoubleArray_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_init(fcDoubleArray* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_initSize(fcDoubleArray* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcDoubleArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_double), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_initArray(fcDoubleArray* self, int len, jdouble* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDoubleArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_double), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDoubleArray_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_initCopy(fcDoubleArray* self, const fcDoubleArray* array) {
  int err;

  // Check parameters
  if (array == NULL || !fcDoubleArray_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDoubleArray_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_double), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_double), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_double), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_release(fcDoubleArray* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    int err = 0;

    if (self->c != NULL) {
      if (self->location != FC_ARRAY_LOCATION_OPENCL) {
        if (self->ocl == NULL) {
          ++self->ref_count;
          return FC_EXCEPTION_INVALID_STATE;
        }
        err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);
      }

      self->c = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    if (self->ocl != NULL) {
      err = clReleaseMemObject(self->ocl);

      self->ocl = NULL;
      if (err) {
        ++self->ref_count; // Release did not succeed, so restore the ref count
        return err;
      }
    }

    // Mark the object as deleted
    self->location = FC_ARRAY_LOCATION_NONE;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

jdouble fcDoubleArray_get(fcDoubleArray* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  jdouble __tmp_ret = 0.0;
  if (!fcDoubleArray_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcDoubleArray_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fcDoubleArray_set(fcDoubleArray* self, int i, jdouble x) {
  if (!fcDoubleArray_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fcDoubleArray_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_setContents(fcDoubleArray* self, int len, jdouble* v) {
  int err;

  if (!fcDoubleArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_double), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(jdouble)) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcDoubleArray_syncToNative(fcDoubleArray* self) {
  if (!fcDoubleArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_double), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fcDoubleArray_syncToOCL(fcDoubleArray* self) {
  if (!fcDoubleArray_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fcDoubleArray_valid(const fcDoubleArray* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


