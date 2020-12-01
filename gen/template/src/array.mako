#include <fancier/array.h>

#include <fancier/exception.h>
#include <fancier/java.h>
#include <fancier/ocl.h>

#include <string.h>

#include <fancier/internal/snippets.inc>


//
// Global Java References
//

% for type in types:
jclass fc${type|c}Array_class = NULL;
jmethodID fc${type|c}Array_constructor = NULL;
% endfor

//
// Global Java Initialization / Destruction
//

jint fcArray_initJNI(JNIEnv* env) {
% for type in types:
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/array/${type|c}Array", fc${type|c}Array_class,
                    "fcArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fc${type|c}Array_constructor, fc${type|c}Array_class, "J", "fcArray_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);
% endfor

  return FC_EXCEPTION_SUCCESS;
}

void fcArray_releaseJNI(JNIEnv* env) {
% for type in types:
  FC_FREE_CLASS_REF(env, fc${type|c}Array_class);
  fc${type|c}Array_constructor = NULL;
% endfor
}

## TODO Suport non-unified memory architectures [fcOpenCL_info.unifiedMemory]

% for type in types:
//
// fc${type|c}Array
//

FC_JAVA_INSTANCE_HANDLERS(fc${type|c}Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_initNative__L(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fc${type|c}Array* self = (fc${type|c}Array*) nativePtr;
  jint err = fc${type|c}Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fc${type|c}Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fc${type|c}Array* self = fc${type|c}Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fc${type|c}Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_initNative___3${signatures[type.lower()]}(JNIEnv* env, jobject obj, j${type|l}Array v) {
  // Allocate instance
  fc${type|c}Array* self = fc${type|c}Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}Array_initNative__[${signatures[type.lower()]}:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  j${type|l}* __tmp_elems_v = FC_JNI_CALL(env, Get${type|c}ArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}Array_initNative__[${signatures[type.lower()]}:v", FC_VOID_EXPR);

  jint err = fc${type|c}Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, Release${type|c}ArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_initNative__Les_ull_pcg_hpc_fancier_array_fc${type|c}Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fc${type|c}Array* self = fc${type|c}Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_fc${type|c}Array;:array", FC_VOID_EXPR);

  // Initialize array
  fc${type|c}Array* __tmp_array = fc${type|c}Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}Array_getJava:array", FC_VOID_EXPR);

  jint err = fc${type|c}Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_releaseNative(JNIEnv* env, jobject obj) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fc${type|c}Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_release", FC_VOID_EXPR);

  fc${type|c}Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fc${type|c}Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_releaseRef", FC_VOID_EXPR);

  fc${type|c}Array_setJava(env, obj, 0L);
}

JNIEXPORT j${type|l} JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", ${defaults[type.lower()]});

  jint err;
  j${type|l} __tmp_ret = fc${type|c}Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_get", ${defaults[type.lower()]});

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_set__I${signatures[type.lower()]}(JNIEnv* env, jobject obj, jint i, j${type|l} x) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", FC_VOID_EXPR);

  jint err = fc${type|c}Array_set(self, i, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_length(JNIEnv* env, jobject obj) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", 0L);

  if (!fc${type|c}Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fc${type|c}Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT j${type|l}Array JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_getContents(JNIEnv* env, jobject obj) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fc${type|c}Array_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_syncToNative", NULL);

  // Create Java array and populate it
  j${type|l}Array __tmp_ret = FC_JNI_CALL(env, New${type|c}Array, self->len);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fc${type|c}Array_getContents", NULL);

  FC_JNI_CALL(env, Set${type|c}ArrayRegion, __tmp_ret, 0, self->len, self->c);
  FC_EXCEPTION_HANDLE_PENDING(env, JNI_FALSE, "fc${type|c}Array_getContents", __tmp_ret);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_setContents(JNIEnv* env, jobject obj, j${type|l}Array v) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}Array_setContents:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  j${type|l}* __tmp_elems_v = FC_JNI_CALL(env, Get${type|c}ArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}Array_setContents:v", FC_VOID_EXPR);

  jint err = fc${type|c}Array_setContents(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, Release${type|c}ArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_syncToNative(JNIEnv* env, jobject obj) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", FC_VOID_EXPR);

  jint err = fc${type|c}Array_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_array_${type|c}Array_syncToOCL(JNIEnv* env, jobject obj) {
  fc${type|c}Array* self = fc${type|c}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}Array_getJava", FC_VOID_EXPR);

  jint err = fc${type|c}Array_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}Array_syncToOCL", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

int fc${type|c}Array_createRef(fc${type|c}Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_releaseRef(fc${type|c}Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fc${type|c}Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_init(fc${type|c}Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_initSize(fc${type|c}Array* self, int n) {
  int err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fc${type|c}Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_${type|l}), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_initArray(fc${type|c}Array* self, int len, j${type|l}* v) {
  int err;

  // Check parameters
  if (len <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fc${type|c}Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_${type|l}), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fc${type|c}Array_setContents(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_initCopy(fc${type|c}Array* self, const fc${type|c}Array* array) {
  int err;

  // Check parameters
  if (array == NULL || !fc${type|c}Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fc${type|c}Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(cl_${type|l}), NULL, &err);
  if (err) return err;

  // Copy array data
  if (array->location == FC_ARRAY_LOCATION_OPENCL)
    err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, self->len * sizeof(cl_${type|l}), 0, NULL, NULL);
  else /* FC_ARRAY_LOCATION_NATIVE */
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_${type|l}), array->c, 0, NULL, NULL);

  if (err) {
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_release(fc${type|c}Array* self) {
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

j${type|l} fc${type|c}Array_get(fc${type|c}Array* self, int i, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  j${type|l} __tmp_ret = ${defaults[type.lower()]};
  if (!fc${type|c}Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fc${type|c}Array_syncToNative(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

int fc${type|c}Array_set(fc${type|c}Array* self, int i, j${type|l} x) {
  if (!fc${type|c}Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  int err = fc${type|c}Array_syncToNative(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_setContents(fc${type|c}Array* self, int len, j${type|l}* v) {
  int err;

  if (!fc${type|c}Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (len <= 0 || len != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Initialize array
  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, self->len * sizeof(cl_${type|l}), v, 0, NULL, NULL);
    if (err) return err;
  }
  else /* self->location == FC_ARRAY_LOCATION_NATIVE */ {
    err = (memcpy(self->c, v, self->len * sizeof(j${type|l})) != NULL?
        FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY);
    if (err) return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fc${type|c}Array_syncToNative(fc${type|c}Array* self) {
  if (!fc${type|c}Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(cl_${type|l}), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

int fc${type|c}Array_syncToOCL(fc${type|c}Array* self) {
  if (!fc${type|c}Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  int err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

jboolean fc${type|c}Array_valid(const fc${type|c}Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}


% endfor
