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
#include <fancier/vector_array.h>

#include <fancier/exception.h>
#include <fancier/java.h>
#include <fancier/ocl.h>

#include <string.h>

#include <fancier/internal/snippets.inc>


//
// Global Java References
//

% for type in types:
% for vlen in vlens:
jclass fc${type|c}${vlen}Array_class = NULL;
jmethodID fc${type|c}${vlen}Array_constructor = NULL;
% endfor
% endfor

//
// Global Java Initialization / Destruction
//

jint fcVectorArray_initJNI(JNIEnv* env) {
% for type in types:
% for vlen in vlens:
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/${type|c}${vlen}Array", fc${type|c}${vlen}Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fc${type|c}${vlen}Array_constructor, fc${type|c}${vlen}Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
% endfor

% endfor
  return FC_EXCEPTION_SUCCESS;
}

void fcVectorArray_releaseJNI(JNIEnv* env) {
% for type in types:
% for vlen in vlens:
  FC_FREE_CLASS_REF(env, fc${type|c}${vlen}Array_class);
  fc${type|c}${vlen}Array_constructor = NULL;
% endfor

% endfor
}

## TODO Suport non-unified memory architectures [fcOpenCL_info.unifiedMemory]

% for type in types:
% for vlen in vlens:
//
// fc${type|c}${vlen}Array
//

FC_JAVA_INSTANCE_HANDLERS(fc${type|c}${vlen}Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fc${type|c}${vlen}Array* self = (fc${type|c}${vlen}Array*) nativePtr;
  jint err = fc${type|c}${vlen}Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fc${type|c}${vlen}Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fc${type|c}${vlen}Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_initNative___3${signatures[type.lower()]}(JNIEnv* env, jobject obj, j${type|l}Array v) {
  // Allocate instance
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_initNative__[${signatures[type.lower()]}:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  j${type|l}* __tmp_elems_v = FC_JNI_CALL(env, Get${type|c}ArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}${vlen}Array_initNative__[${signatures[type.lower()]}:v", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, Release${type|c}ArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array;:array", FC_VOID_EXPR);

  // Initialize array
  fc${type|c}${vlen}Array* __tmp_array = fc${type|c}${vlen}Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_getJava:array", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_releaseNative(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fc${type|c}${vlen}Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_release", FC_VOID_EXPR);

  fc${type|c}${vlen}Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fc${type|c}${vlen}Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_releaseRef", FC_VOID_EXPR);

  fc${type|c}${vlen}Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", NULL);

  jint err;
  fc${type|c}${vlen} __tmp_ret = fc${type|c}${vlen}Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_get", NULL);

  return fc${type|c}${vlen}_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_set__ILes_ull_pcg_hpc_fancier_vector_${type|c}${vlen}_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_set__ILes_ull_pcg_hpc_fancier_vector_fc${type|c}${vlen};:x", FC_VOID_EXPR);

  jint err;
  fc${type|c}${vlen} __tmp_x = fc${type|c}${vlen}_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}_unwrap", FC_VOID_EXPR);

  err = fc${type|c}${vlen}Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_length(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", 0L);

  if (!fc${type|c}${vlen}Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fc${type|c}${vlen}Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT j${type|l}Array JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_getArray(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fc${type|c}${vlen}Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_syncToHost", NULL);

  // Create Java array and populate it
  j${type|l}Array __tmp_ret = FC_JNI_CALL(env, New${type|c}Array, self->len * ${vlen});
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fc${type|c}${vlen}Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  j${type|l}* __tmp_elems = FC_JNI_CALL(env, Get${type|c}ArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}${vlen}Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * ${vlen}], self->c[i].s, sizeof(fc${type|c}) * ${vlen})) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, Release${type|c}ArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_setArray(JNIEnv* env, jobject obj, j${type|l}Array v) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  j${type|l}* __tmp_elems_v = FC_JNI_CALL(env, Get${type|c}ArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}${vlen}Array_setArray:v", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, Release${type|c}ArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fc${type|c}${vlen}Array* __tmp_array = fc${type|c}${vlen}Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}${vlen}Array_setCopy:array", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fc${type|c}${vlen}Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fc${type|c}${vlen}));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fc${type|c}${vlen}Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fc${type|c}${vlen}Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_syncToHost(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_${type|c}${vlen}Array_syncToDevice(JNIEnv* env, jobject obj) {
  fc${type|c}${vlen}Array* self = fc${type|c}${vlen}Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fc${type|c}${vlen}Array_getJava", FC_VOID_EXPR);

  jint err = fc${type|c}${vlen}Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fc${type|c}${vlen}Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fc${type|c}${vlen}Array_createRef(fc${type|c}${vlen}Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_releaseRef(fc${type|c}${vlen}Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fc${type|c}${vlen}Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_init(fc${type|c}${vlen}Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_initSize(fc${type|c}${vlen}Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fc${type|c}${vlen}Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fc${type|c}${vlen}), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_initArray(fc${type|c}${vlen}Array* self, fcInt len, const fc${type|c}* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % ${vlen} != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fc${type|c}${vlen}Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / ${vlen};

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fc${type|c}${vlen}), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fc${type|c}${vlen}Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_initCopy(fc${type|c}${vlen}Array* self, const fc${type|c}${vlen}Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fc${type|c}${vlen}Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fc${type|c}${vlen}Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fc${type|c}${vlen}), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fc${type|c}${vlen}Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fc${type|c}${vlen}Array_release(fc${type|c}${vlen}Array* self) {
  --self->ref_count;

  // If it has already been released, only decrease the reference count
  if (self->location != FC_ARRAY_LOCATION_NONE) {
    fcError err = 0;

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

fc${type|c}${vlen} fc${type|c}${vlen}Array_get(fc${type|c}${vlen}Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fc${type|c}${vlen} __tmp_ret = {.s = {${defaults[type]}}};
  if (!fc${type|c}${vlen}Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fc${type|c}${vlen}Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fc${type|c}${vlen}Array_set(fc${type|c}${vlen}Array* self, fcInt i, fc${type|c}${vlen} x) {
  if (!fc${type|c}${vlen}Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fc${type|c}${vlen}Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_setArray(fc${type|c}${vlen}Array* self, fcInt len, const fc${type|c}* v) {
  fcError err;

  // Check parameters
  if (len % ${vlen} != 0 || len / ${vlen} != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fc${type|c}${vlen}Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * ${vlen}], sizeof(fc${type|c}) * ${vlen}))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fc${type|c}${vlen}Array_setCopy(fc${type|c}${vlen}Array* self, const fc${type|c}${vlen}Array* array) {
  if (!fc${type|c}${vlen}Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fc${type|c}${vlen}Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fc${type|c}${vlen});

  if (self->location == FC_ARRAY_LOCATION_OPENCL) {
    if (array->location == FC_ARRAY_LOCATION_OPENCL)
      err = clEnqueueCopyBuffer(fcOpenCL_rt.queue, array->ocl, self->ocl, 0, 0, size, 0, NULL, NULL);
    else /* array:FC_ARRAY_LOCATION_NATIVE */
      err = clEnqueueWriteBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, 0, size, array->c, 0, NULL, NULL);
  } else /* self:FC_ARRAY_LOCATION_NATIVE */ {
    if (array->location == FC_ARRAY_LOCATION_OPENCL)
      err = clEnqueueReadBuffer(fcOpenCL_rt.queue, array->ocl, CL_TRUE, 0, size, self->c, 0, NULL, NULL);
    else /* array:FC_ARRAY_LOCATION_NATIVE */
      err = memcpy(self->c, array->c, size) != NULL? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
  }

  return err;
}

fcError fc${type|c}${vlen}Array_setBuffer(fc${type|c}${vlen}Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fc${type|c}${vlen}) != 0 || len / sizeof(fc${type|c}${vlen}) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fc${type|c}${vlen}Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fc${type|c}${vlen}Array_syncToHost(fc${type|c}${vlen}Array* self) {
  if (!fc${type|c}${vlen}Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fc${type|c}${vlen}), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fc${type|c}${vlen}Array_syncToDevice(fc${type|c}${vlen}Array* self) {
  if (!fc${type|c}${vlen}Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fc${type|c}${vlen}Array_valid(const fc${type|c}${vlen}Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

% endfor
% endfor
