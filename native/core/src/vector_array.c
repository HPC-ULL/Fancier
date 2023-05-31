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

/*
 * DO NOT MANUALLY EDIT THIS FILE!
 * This file has been automatically generated, any modifications will be lost
 * when generating the Fancier library. Any modifications to this file must be
 * done via the corresponding template.
 */

#include <fancier/vector_array.h>

#include <fancier/exception.h>
#include <fancier/java.h>
#include <fancier/ocl.h>

#include <string.h>

#include <fancier/internal/snippets.inc>


//
// Global Java References
//

jclass fcByte2Array_class = NULL;
jmethodID fcByte2Array_constructor = NULL;
jclass fcByte3Array_class = NULL;
jmethodID fcByte3Array_constructor = NULL;
jclass fcByte4Array_class = NULL;
jmethodID fcByte4Array_constructor = NULL;
jclass fcByte8Array_class = NULL;
jmethodID fcByte8Array_constructor = NULL;
jclass fcShort2Array_class = NULL;
jmethodID fcShort2Array_constructor = NULL;
jclass fcShort3Array_class = NULL;
jmethodID fcShort3Array_constructor = NULL;
jclass fcShort4Array_class = NULL;
jmethodID fcShort4Array_constructor = NULL;
jclass fcShort8Array_class = NULL;
jmethodID fcShort8Array_constructor = NULL;
jclass fcInt2Array_class = NULL;
jmethodID fcInt2Array_constructor = NULL;
jclass fcInt3Array_class = NULL;
jmethodID fcInt3Array_constructor = NULL;
jclass fcInt4Array_class = NULL;
jmethodID fcInt4Array_constructor = NULL;
jclass fcInt8Array_class = NULL;
jmethodID fcInt8Array_constructor = NULL;
jclass fcLong2Array_class = NULL;
jmethodID fcLong2Array_constructor = NULL;
jclass fcLong3Array_class = NULL;
jmethodID fcLong3Array_constructor = NULL;
jclass fcLong4Array_class = NULL;
jmethodID fcLong4Array_constructor = NULL;
jclass fcLong8Array_class = NULL;
jmethodID fcLong8Array_constructor = NULL;
jclass fcFloat2Array_class = NULL;
jmethodID fcFloat2Array_constructor = NULL;
jclass fcFloat3Array_class = NULL;
jmethodID fcFloat3Array_constructor = NULL;
jclass fcFloat4Array_class = NULL;
jmethodID fcFloat4Array_constructor = NULL;
jclass fcFloat8Array_class = NULL;
jmethodID fcFloat8Array_constructor = NULL;
jclass fcDouble2Array_class = NULL;
jmethodID fcDouble2Array_constructor = NULL;
jclass fcDouble3Array_class = NULL;
jmethodID fcDouble3Array_constructor = NULL;
jclass fcDouble4Array_class = NULL;
jmethodID fcDouble4Array_constructor = NULL;
jclass fcDouble8Array_class = NULL;
jmethodID fcDouble8Array_constructor = NULL;

//
// Global Java Initialization / Destruction
//

jint fcVectorArray_initJNI(JNIEnv* env) {
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Byte2Array", fcByte2Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte2Array_constructor, fcByte2Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Byte3Array", fcByte3Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte3Array_constructor, fcByte3Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Byte4Array", fcByte4Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte4Array_constructor, fcByte4Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Byte8Array", fcByte8Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte8Array_constructor, fcByte8Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Short2Array", fcShort2Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort2Array_constructor, fcShort2Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Short3Array", fcShort3Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort3Array_constructor, fcShort3Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Short4Array", fcShort4Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort4Array_constructor, fcShort4Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Short8Array", fcShort8Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort8Array_constructor, fcShort8Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Int2Array", fcInt2Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt2Array_constructor, fcInt2Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Int3Array", fcInt3Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt3Array_constructor, fcInt3Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Int4Array", fcInt4Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt4Array_constructor, fcInt4Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Int8Array", fcInt8Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt8Array_constructor, fcInt8Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Long2Array", fcLong2Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong2Array_constructor, fcLong2Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Long3Array", fcLong3Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong3Array_constructor, fcLong3Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Long4Array", fcLong4Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong4Array_constructor, fcLong4Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Long8Array", fcLong8Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong8Array_constructor, fcLong8Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Float2Array", fcFloat2Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat2Array_constructor, fcFloat2Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Float3Array", fcFloat3Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat3Array_constructor, fcFloat3Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Float4Array", fcFloat4Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat4Array_constructor, fcFloat4Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Float8Array", fcFloat8Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat8Array_constructor, fcFloat8Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Double2Array", fcDouble2Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble2Array_constructor, fcDouble2Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Double3Array", fcDouble3Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble3Array_constructor, fcDouble3Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Double4Array", fcDouble4Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble4Array_constructor, fcDouble4Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/array/Double8Array", fcDouble8Array_class,
                    "fcVectorArray_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble8Array_constructor, fcDouble8Array_class, "J",
                      "fcVectorArray_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  return FC_EXCEPTION_SUCCESS;
}

void fcVectorArray_releaseJNI(JNIEnv* env) {
  FC_FREE_CLASS_REF(env, fcByte2Array_class);
  fcByte2Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcByte3Array_class);
  fcByte3Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcByte4Array_class);
  fcByte4Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcByte8Array_class);
  fcByte8Array_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcShort2Array_class);
  fcShort2Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShort3Array_class);
  fcShort3Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShort4Array_class);
  fcShort4Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShort8Array_class);
  fcShort8Array_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcInt2Array_class);
  fcInt2Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcInt3Array_class);
  fcInt3Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcInt4Array_class);
  fcInt4Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcInt8Array_class);
  fcInt8Array_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcLong2Array_class);
  fcLong2Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLong3Array_class);
  fcLong3Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLong4Array_class);
  fcLong4Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLong8Array_class);
  fcLong8Array_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcFloat2Array_class);
  fcFloat2Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloat3Array_class);
  fcFloat3Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloat4Array_class);
  fcFloat4Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloat8Array_class);
  fcFloat8Array_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcDouble2Array_class);
  fcDouble2Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDouble3Array_class);
  fcDouble3Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDouble4Array_class);
  fcDouble4Array_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDouble8Array_class);
  fcDouble8Array_constructor = NULL;

}


//
// fcByte2Array
//

FC_JAVA_INSTANCE_HANDLERS(fcByte2Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcByte2Array* self = (fcByte2Array*) nativePtr;
  jint err = fcByte2Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcByte2Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcByte2Array* self = fcByte2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcByte2Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_initNative___3B(JNIEnv* env, jobject obj, jbyteArray v) {
  // Allocate instance
  fcByte2Array* self = fcByte2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_initNative__[B:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte2Array_initNative__[B:v", FC_VOID_EXPR);

  jint err = fcByte2Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte2Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcByte2Array* self = fcByte2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte2Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcByte2Array* __tmp_array = fcByte2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_getJava:array", FC_VOID_EXPR);

  jint err = fcByte2Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_releaseNative(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcByte2Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_release", FC_VOID_EXPR);

  fcByte2Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcByte2Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_releaseRef", FC_VOID_EXPR);

  fcByte2Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", NULL);

  jint err;
  fcByte2 __tmp_ret = fcByte2Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_get", NULL);

  return fcByte2_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_set__ILes_ull_pcg_hpc_fancier_vector_Byte2_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_set__ILes_ull_pcg_hpc_fancier_vector_fcByte2;:x", FC_VOID_EXPR);

  jint err;
  fcByte2 __tmp_x = fcByte2_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2_unwrap", FC_VOID_EXPR);

  err = fcByte2Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_length(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", 0L);

  if (!fcByte2Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcByte2Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jbyteArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_getArray(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_syncToHost", NULL);

  // Create Java array and populate it
  jbyteArray __tmp_ret = FC_JNI_CALL(env, NewByteArray, self->len * 2);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcByte2Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jbyte* __tmp_elems = FC_JNI_CALL(env, GetByteArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte2Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 2], self->c[i].s, sizeof(fcByte) * 2)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseByteArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_setArray(JNIEnv* env, jobject obj, jbyteArray v) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte2Array_setArray:v", FC_VOID_EXPR);

  jint err = fcByte2Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcByte2Array* __tmp_array = fcByte2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte2Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcByte2Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcByte2));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte2Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte2Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcByte2Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_syncToHost(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  jint err = fcByte2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte2Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcByte2Array* self = fcByte2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte2Array_getJava", FC_VOID_EXPR);

  jint err = fcByte2Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte2Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcByte2Array_createRef(fcByte2Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_releaseRef(fcByte2Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcByte2Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_init(fcByte2Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_initSize(fcByte2Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcByte2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte2), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_initArray(fcByte2Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 2 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte2Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 2;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte2), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte2Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_initCopy(fcByte2Array* self, const fcByte2Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcByte2Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte2), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte2Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcByte2Array_release(fcByte2Array* self) {
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

fcByte2 fcByte2Array_get(fcByte2Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcByte2 __tmp_ret = {.s = {'\0'}};
  if (!fcByte2Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcByte2Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcByte2Array_set(fcByte2Array* self, fcInt i, fcByte2 x) {
  if (!fcByte2Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcByte2Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_setArray(fcByte2Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len % 2 != 0 || len / 2 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcByte2Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 2], sizeof(fcByte) * 2))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte2Array_setCopy(fcByte2Array* self, const fcByte2Array* array) {
  if (!fcByte2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcByte2Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcByte2);

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

fcError fcByte2Array_setBuffer(fcByte2Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcByte2) != 0 || len / sizeof(fcByte2) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcByte2Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcByte2Array_syncToHost(fcByte2Array* self) {
  if (!fcByte2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcByte2), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcByte2Array_syncToDevice(fcByte2Array* self) {
  if (!fcByte2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcByte2Array_valid(const fcByte2Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcByte3Array
//

FC_JAVA_INSTANCE_HANDLERS(fcByte3Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcByte3Array* self = (fcByte3Array*) nativePtr;
  jint err = fcByte3Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcByte3Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcByte3Array* self = fcByte3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcByte3Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_initNative___3B(JNIEnv* env, jobject obj, jbyteArray v) {
  // Allocate instance
  fcByte3Array* self = fcByte3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_initNative__[B:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte3Array_initNative__[B:v", FC_VOID_EXPR);

  jint err = fcByte3Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte3Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcByte3Array* self = fcByte3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte3Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcByte3Array* __tmp_array = fcByte3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_getJava:array", FC_VOID_EXPR);

  jint err = fcByte3Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_releaseNative(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcByte3Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_release", FC_VOID_EXPR);

  fcByte3Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcByte3Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_releaseRef", FC_VOID_EXPR);

  fcByte3Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", NULL);

  jint err;
  fcByte3 __tmp_ret = fcByte3Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_get", NULL);

  return fcByte3_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_set__ILes_ull_pcg_hpc_fancier_vector_Byte3_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_set__ILes_ull_pcg_hpc_fancier_vector_fcByte3;:x", FC_VOID_EXPR);

  jint err;
  fcByte3 __tmp_x = fcByte3_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3_unwrap", FC_VOID_EXPR);

  err = fcByte3Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_length(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", 0L);

  if (!fcByte3Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcByte3Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jbyteArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_getArray(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_syncToHost", NULL);

  // Create Java array and populate it
  jbyteArray __tmp_ret = FC_JNI_CALL(env, NewByteArray, self->len * 3);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcByte3Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jbyte* __tmp_elems = FC_JNI_CALL(env, GetByteArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte3Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 3], self->c[i].s, sizeof(fcByte) * 3)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseByteArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_setArray(JNIEnv* env, jobject obj, jbyteArray v) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte3Array_setArray:v", FC_VOID_EXPR);

  jint err = fcByte3Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcByte3Array* __tmp_array = fcByte3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte3Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcByte3Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcByte3));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte3Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte3Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcByte3Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_syncToHost(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  jint err = fcByte3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte3Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcByte3Array* self = fcByte3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte3Array_getJava", FC_VOID_EXPR);

  jint err = fcByte3Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte3Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcByte3Array_createRef(fcByte3Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_releaseRef(fcByte3Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcByte3Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_init(fcByte3Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_initSize(fcByte3Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcByte3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte3), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_initArray(fcByte3Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 3 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte3Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 3;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte3), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte3Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_initCopy(fcByte3Array* self, const fcByte3Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcByte3Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte3), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte3Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcByte3Array_release(fcByte3Array* self) {
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

fcByte3 fcByte3Array_get(fcByte3Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcByte3 __tmp_ret = {.s = {'\0'}};
  if (!fcByte3Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcByte3Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcByte3Array_set(fcByte3Array* self, fcInt i, fcByte3 x) {
  if (!fcByte3Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcByte3Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_setArray(fcByte3Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len % 3 != 0 || len / 3 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcByte3Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 3], sizeof(fcByte) * 3))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte3Array_setCopy(fcByte3Array* self, const fcByte3Array* array) {
  if (!fcByte3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcByte3Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcByte3);

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

fcError fcByte3Array_setBuffer(fcByte3Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcByte3) != 0 || len / sizeof(fcByte3) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcByte3Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcByte3Array_syncToHost(fcByte3Array* self) {
  if (!fcByte3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcByte3), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcByte3Array_syncToDevice(fcByte3Array* self) {
  if (!fcByte3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcByte3Array_valid(const fcByte3Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcByte4Array
//

FC_JAVA_INSTANCE_HANDLERS(fcByte4Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcByte4Array* self = (fcByte4Array*) nativePtr;
  jint err = fcByte4Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcByte4Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcByte4Array* self = fcByte4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcByte4Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_initNative___3B(JNIEnv* env, jobject obj, jbyteArray v) {
  // Allocate instance
  fcByte4Array* self = fcByte4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_initNative__[B:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte4Array_initNative__[B:v", FC_VOID_EXPR);

  jint err = fcByte4Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte4Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcByte4Array* self = fcByte4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte4Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcByte4Array* __tmp_array = fcByte4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_getJava:array", FC_VOID_EXPR);

  jint err = fcByte4Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_releaseNative(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcByte4Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_release", FC_VOID_EXPR);

  fcByte4Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcByte4Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_releaseRef", FC_VOID_EXPR);

  fcByte4Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", NULL);

  jint err;
  fcByte4 __tmp_ret = fcByte4Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_get", NULL);

  return fcByte4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_set__ILes_ull_pcg_hpc_fancier_vector_Byte4_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_set__ILes_ull_pcg_hpc_fancier_vector_fcByte4;:x", FC_VOID_EXPR);

  jint err;
  fcByte4 __tmp_x = fcByte4_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4_unwrap", FC_VOID_EXPR);

  err = fcByte4Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_length(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", 0L);

  if (!fcByte4Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcByte4Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jbyteArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_getArray(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost", NULL);

  // Create Java array and populate it
  jbyteArray __tmp_ret = FC_JNI_CALL(env, NewByteArray, self->len * 4);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcByte4Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jbyte* __tmp_elems = FC_JNI_CALL(env, GetByteArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte4Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 4], self->c[i].s, sizeof(fcByte) * 4)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseByteArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_setArray(JNIEnv* env, jobject obj, jbyteArray v) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte4Array_setArray:v", FC_VOID_EXPR);

  jint err = fcByte4Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcByte4Array* __tmp_array = fcByte4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte4Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcByte4Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcByte4));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte4Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte4Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcByte4Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_syncToHost(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  jint err = fcByte4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte4Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcByte4Array* self = fcByte4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte4Array_getJava", FC_VOID_EXPR);

  jint err = fcByte4Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcByte4Array_createRef(fcByte4Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_releaseRef(fcByte4Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcByte4Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_init(fcByte4Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_initSize(fcByte4Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcByte4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte4), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_initArray(fcByte4Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 4 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte4Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 4;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte4), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte4Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_initCopy(fcByte4Array* self, const fcByte4Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcByte4Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte4), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte4Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcByte4Array_release(fcByte4Array* self) {
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

fcByte4 fcByte4Array_get(fcByte4Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcByte4 __tmp_ret = {.s = {'\0'}};
  if (!fcByte4Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcByte4Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcByte4Array_set(fcByte4Array* self, fcInt i, fcByte4 x) {
  if (!fcByte4Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcByte4Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_setArray(fcByte4Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len % 4 != 0 || len / 4 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcByte4Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 4], sizeof(fcByte) * 4))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte4Array_setCopy(fcByte4Array* self, const fcByte4Array* array) {
  if (!fcByte4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcByte4Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcByte4);

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

fcError fcByte4Array_setBuffer(fcByte4Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcByte4) != 0 || len / sizeof(fcByte4) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcByte4Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcByte4Array_syncToHost(fcByte4Array* self) {
  if (!fcByte4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcByte4), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcByte4Array_syncToDevice(fcByte4Array* self) {
  if (!fcByte4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcByte4Array_valid(const fcByte4Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcByte8Array
//

FC_JAVA_INSTANCE_HANDLERS(fcByte8Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcByte8Array* self = (fcByte8Array*) nativePtr;
  jint err = fcByte8Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcByte8Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcByte8Array* self = fcByte8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcByte8Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_initNative___3B(JNIEnv* env, jobject obj, jbyteArray v) {
  // Allocate instance
  fcByte8Array* self = fcByte8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_initNative__[B:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte8Array_initNative__[B:v", FC_VOID_EXPR);

  jint err = fcByte8Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte8Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcByte8Array* self = fcByte8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Byte8Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcByte8Array* __tmp_array = fcByte8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_getJava:array", FC_VOID_EXPR);

  jint err = fcByte8Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_releaseNative(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcByte8Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_release", FC_VOID_EXPR);

  fcByte8Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcByte8Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_releaseRef", FC_VOID_EXPR);

  fcByte8Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", NULL);

  jint err;
  fcByte8 __tmp_ret = fcByte8Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_get", NULL);

  return fcByte8_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_set__ILes_ull_pcg_hpc_fancier_vector_Byte8_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_set__ILes_ull_pcg_hpc_fancier_vector_fcByte8;:x", FC_VOID_EXPR);

  jint err;
  fcByte8 __tmp_x = fcByte8_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8_unwrap", FC_VOID_EXPR);

  err = fcByte8Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_length(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", 0L);

  if (!fcByte8Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcByte8Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jbyteArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_getArray(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_syncToHost", NULL);

  // Create Java array and populate it
  jbyteArray __tmp_ret = FC_JNI_CALL(env, NewByteArray, self->len * 8);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcByte8Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jbyte* __tmp_elems = FC_JNI_CALL(env, GetByteArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte8Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 8], self->c[i].s, sizeof(fcByte) * 8)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseByteArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_setArray(JNIEnv* env, jobject obj, jbyteArray v) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jbyte* __tmp_elems_v = FC_JNI_CALL(env, GetByteArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte8Array_setArray:v", FC_VOID_EXPR);

  jint err = fcByte8Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseByteArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcByte8Array* __tmp_array = fcByte8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte8Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcByte8Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcByte8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcByte8));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcByte8Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcByte8Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcByte8Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_syncToHost(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  jint err = fcByte8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Byte8Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcByte8Array* self = fcByte8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcByte8Array_getJava", FC_VOID_EXPR);

  jint err = fcByte8Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte8Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcByte8Array_createRef(fcByte8Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_releaseRef(fcByte8Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcByte8Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_init(fcByte8Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_initSize(fcByte8Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcByte8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte8), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_initArray(fcByte8Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 8 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte8Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 8;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte8), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte8Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_initCopy(fcByte8Array* self, const fcByte8Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcByte8Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcByte8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcByte8), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcByte8Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcByte8Array_release(fcByte8Array* self) {
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

fcByte8 fcByte8Array_get(fcByte8Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcByte8 __tmp_ret = {.s = {'\0'}};
  if (!fcByte8Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcByte8Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcByte8Array_set(fcByte8Array* self, fcInt i, fcByte8 x) {
  if (!fcByte8Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcByte8Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_setArray(fcByte8Array* self, fcInt len, const fcByte* v) {
  fcError err;

  // Check parameters
  if (len % 8 != 0 || len / 8 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcByte8Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 8], sizeof(fcByte) * 8))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcByte8Array_setCopy(fcByte8Array* self, const fcByte8Array* array) {
  if (!fcByte8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcByte8Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcByte8);

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

fcError fcByte8Array_setBuffer(fcByte8Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcByte8) != 0 || len / sizeof(fcByte8) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcByte8Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcByte8Array_syncToHost(fcByte8Array* self) {
  if (!fcByte8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcByte8), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcByte8Array_syncToDevice(fcByte8Array* self) {
  if (!fcByte8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcByte8Array_valid(const fcByte8Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcShort2Array
//

FC_JAVA_INSTANCE_HANDLERS(fcShort2Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcShort2Array* self = (fcShort2Array*) nativePtr;
  jint err = fcShort2Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcShort2Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcShort2Array* self = fcShort2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcShort2Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_initNative___3S(JNIEnv* env, jobject obj, jshortArray v) {
  // Allocate instance
  fcShort2Array* self = fcShort2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_initNative__[S:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort2Array_initNative__[S:v", FC_VOID_EXPR);

  jint err = fcShort2Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short2Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcShort2Array* self = fcShort2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short2Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcShort2Array* __tmp_array = fcShort2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_getJava:array", FC_VOID_EXPR);

  jint err = fcShort2Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_releaseNative(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcShort2Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_release", FC_VOID_EXPR);

  fcShort2Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcShort2Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_releaseRef", FC_VOID_EXPR);

  fcShort2Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", NULL);

  jint err;
  fcShort2 __tmp_ret = fcShort2Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_get", NULL);

  return fcShort2_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_set__ILes_ull_pcg_hpc_fancier_vector_Short2_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_set__ILes_ull_pcg_hpc_fancier_vector_fcShort2;:x", FC_VOID_EXPR);

  jint err;
  fcShort2 __tmp_x = fcShort2_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2_unwrap", FC_VOID_EXPR);

  err = fcShort2Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_length(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", 0L);

  if (!fcShort2Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcShort2Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jshortArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_getArray(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_syncToHost", NULL);

  // Create Java array and populate it
  jshortArray __tmp_ret = FC_JNI_CALL(env, NewShortArray, self->len * 2);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcShort2Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jshort* __tmp_elems = FC_JNI_CALL(env, GetShortArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort2Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 2], self->c[i].s, sizeof(fcShort) * 2)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseShortArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_setArray(JNIEnv* env, jobject obj, jshortArray v) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort2Array_setArray:v", FC_VOID_EXPR);

  jint err = fcShort2Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcShort2Array* __tmp_array = fcShort2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort2Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcShort2Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcShort2));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort2Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort2Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcShort2Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_syncToHost(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  jint err = fcShort2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short2Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcShort2Array* self = fcShort2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort2Array_getJava", FC_VOID_EXPR);

  jint err = fcShort2Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort2Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcShort2Array_createRef(fcShort2Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_releaseRef(fcShort2Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcShort2Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_init(fcShort2Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_initSize(fcShort2Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcShort2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort2), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_initArray(fcShort2Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 2 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort2Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 2;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort2), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort2Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_initCopy(fcShort2Array* self, const fcShort2Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcShort2Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort2), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort2Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcShort2Array_release(fcShort2Array* self) {
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

fcShort2 fcShort2Array_get(fcShort2Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcShort2 __tmp_ret = {.s = {0}};
  if (!fcShort2Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcShort2Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcShort2Array_set(fcShort2Array* self, fcInt i, fcShort2 x) {
  if (!fcShort2Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcShort2Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_setArray(fcShort2Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len % 2 != 0 || len / 2 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcShort2Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 2], sizeof(fcShort) * 2))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort2Array_setCopy(fcShort2Array* self, const fcShort2Array* array) {
  if (!fcShort2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcShort2Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcShort2);

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

fcError fcShort2Array_setBuffer(fcShort2Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcShort2) != 0 || len / sizeof(fcShort2) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcShort2Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcShort2Array_syncToHost(fcShort2Array* self) {
  if (!fcShort2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcShort2), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcShort2Array_syncToDevice(fcShort2Array* self) {
  if (!fcShort2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcShort2Array_valid(const fcShort2Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcShort3Array
//

FC_JAVA_INSTANCE_HANDLERS(fcShort3Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcShort3Array* self = (fcShort3Array*) nativePtr;
  jint err = fcShort3Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcShort3Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcShort3Array* self = fcShort3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcShort3Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_initNative___3S(JNIEnv* env, jobject obj, jshortArray v) {
  // Allocate instance
  fcShort3Array* self = fcShort3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_initNative__[S:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort3Array_initNative__[S:v", FC_VOID_EXPR);

  jint err = fcShort3Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short3Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcShort3Array* self = fcShort3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short3Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcShort3Array* __tmp_array = fcShort3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_getJava:array", FC_VOID_EXPR);

  jint err = fcShort3Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_releaseNative(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcShort3Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_release", FC_VOID_EXPR);

  fcShort3Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcShort3Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_releaseRef", FC_VOID_EXPR);

  fcShort3Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", NULL);

  jint err;
  fcShort3 __tmp_ret = fcShort3Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_get", NULL);

  return fcShort3_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_set__ILes_ull_pcg_hpc_fancier_vector_Short3_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_set__ILes_ull_pcg_hpc_fancier_vector_fcShort3;:x", FC_VOID_EXPR);

  jint err;
  fcShort3 __tmp_x = fcShort3_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3_unwrap", FC_VOID_EXPR);

  err = fcShort3Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_length(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", 0L);

  if (!fcShort3Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcShort3Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jshortArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_getArray(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_syncToHost", NULL);

  // Create Java array and populate it
  jshortArray __tmp_ret = FC_JNI_CALL(env, NewShortArray, self->len * 3);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcShort3Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jshort* __tmp_elems = FC_JNI_CALL(env, GetShortArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort3Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 3], self->c[i].s, sizeof(fcShort) * 3)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseShortArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_setArray(JNIEnv* env, jobject obj, jshortArray v) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort3Array_setArray:v", FC_VOID_EXPR);

  jint err = fcShort3Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcShort3Array* __tmp_array = fcShort3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort3Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcShort3Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcShort3));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort3Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort3Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcShort3Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_syncToHost(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  jint err = fcShort3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short3Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcShort3Array* self = fcShort3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort3Array_getJava", FC_VOID_EXPR);

  jint err = fcShort3Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort3Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcShort3Array_createRef(fcShort3Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_releaseRef(fcShort3Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcShort3Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_init(fcShort3Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_initSize(fcShort3Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcShort3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort3), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_initArray(fcShort3Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 3 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort3Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 3;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort3), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort3Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_initCopy(fcShort3Array* self, const fcShort3Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcShort3Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort3), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort3Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcShort3Array_release(fcShort3Array* self) {
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

fcShort3 fcShort3Array_get(fcShort3Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcShort3 __tmp_ret = {.s = {0}};
  if (!fcShort3Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcShort3Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcShort3Array_set(fcShort3Array* self, fcInt i, fcShort3 x) {
  if (!fcShort3Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcShort3Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_setArray(fcShort3Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len % 3 != 0 || len / 3 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcShort3Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 3], sizeof(fcShort) * 3))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort3Array_setCopy(fcShort3Array* self, const fcShort3Array* array) {
  if (!fcShort3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcShort3Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcShort3);

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

fcError fcShort3Array_setBuffer(fcShort3Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcShort3) != 0 || len / sizeof(fcShort3) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcShort3Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcShort3Array_syncToHost(fcShort3Array* self) {
  if (!fcShort3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcShort3), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcShort3Array_syncToDevice(fcShort3Array* self) {
  if (!fcShort3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcShort3Array_valid(const fcShort3Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcShort4Array
//

FC_JAVA_INSTANCE_HANDLERS(fcShort4Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcShort4Array* self = (fcShort4Array*) nativePtr;
  jint err = fcShort4Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcShort4Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcShort4Array* self = fcShort4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcShort4Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_initNative___3S(JNIEnv* env, jobject obj, jshortArray v) {
  // Allocate instance
  fcShort4Array* self = fcShort4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_initNative__[S:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort4Array_initNative__[S:v", FC_VOID_EXPR);

  jint err = fcShort4Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short4Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcShort4Array* self = fcShort4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short4Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcShort4Array* __tmp_array = fcShort4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_getJava:array", FC_VOID_EXPR);

  jint err = fcShort4Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_releaseNative(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcShort4Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_release", FC_VOID_EXPR);

  fcShort4Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcShort4Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_releaseRef", FC_VOID_EXPR);

  fcShort4Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", NULL);

  jint err;
  fcShort4 __tmp_ret = fcShort4Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_get", NULL);

  return fcShort4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_set__ILes_ull_pcg_hpc_fancier_vector_Short4_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_set__ILes_ull_pcg_hpc_fancier_vector_fcShort4;:x", FC_VOID_EXPR);

  jint err;
  fcShort4 __tmp_x = fcShort4_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4_unwrap", FC_VOID_EXPR);

  err = fcShort4Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_length(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", 0L);

  if (!fcShort4Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcShort4Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jshortArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_getArray(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_syncToHost", NULL);

  // Create Java array and populate it
  jshortArray __tmp_ret = FC_JNI_CALL(env, NewShortArray, self->len * 4);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcShort4Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jshort* __tmp_elems = FC_JNI_CALL(env, GetShortArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort4Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 4], self->c[i].s, sizeof(fcShort) * 4)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseShortArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_setArray(JNIEnv* env, jobject obj, jshortArray v) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort4Array_setArray:v", FC_VOID_EXPR);

  jint err = fcShort4Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcShort4Array* __tmp_array = fcShort4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort4Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcShort4Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcShort4));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort4Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort4Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcShort4Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_syncToHost(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  jint err = fcShort4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short4Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcShort4Array* self = fcShort4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort4Array_getJava", FC_VOID_EXPR);

  jint err = fcShort4Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort4Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcShort4Array_createRef(fcShort4Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_releaseRef(fcShort4Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcShort4Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_init(fcShort4Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_initSize(fcShort4Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcShort4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort4), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_initArray(fcShort4Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 4 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort4Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 4;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort4), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort4Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_initCopy(fcShort4Array* self, const fcShort4Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcShort4Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort4), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort4Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcShort4Array_release(fcShort4Array* self) {
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

fcShort4 fcShort4Array_get(fcShort4Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcShort4 __tmp_ret = {.s = {0}};
  if (!fcShort4Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcShort4Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcShort4Array_set(fcShort4Array* self, fcInt i, fcShort4 x) {
  if (!fcShort4Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcShort4Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_setArray(fcShort4Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len % 4 != 0 || len / 4 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcShort4Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 4], sizeof(fcShort) * 4))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort4Array_setCopy(fcShort4Array* self, const fcShort4Array* array) {
  if (!fcShort4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcShort4Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcShort4);

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

fcError fcShort4Array_setBuffer(fcShort4Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcShort4) != 0 || len / sizeof(fcShort4) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcShort4Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcShort4Array_syncToHost(fcShort4Array* self) {
  if (!fcShort4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcShort4), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcShort4Array_syncToDevice(fcShort4Array* self) {
  if (!fcShort4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcShort4Array_valid(const fcShort4Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcShort8Array
//

FC_JAVA_INSTANCE_HANDLERS(fcShort8Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcShort8Array* self = (fcShort8Array*) nativePtr;
  jint err = fcShort8Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcShort8Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcShort8Array* self = fcShort8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcShort8Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_initNative___3S(JNIEnv* env, jobject obj, jshortArray v) {
  // Allocate instance
  fcShort8Array* self = fcShort8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_initNative__[S:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort8Array_initNative__[S:v", FC_VOID_EXPR);

  jint err = fcShort8Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short8Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcShort8Array* self = fcShort8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Short8Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcShort8Array* __tmp_array = fcShort8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_getJava:array", FC_VOID_EXPR);

  jint err = fcShort8Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_releaseNative(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcShort8Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_release", FC_VOID_EXPR);

  fcShort8Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcShort8Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_releaseRef", FC_VOID_EXPR);

  fcShort8Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", NULL);

  jint err;
  fcShort8 __tmp_ret = fcShort8Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_get", NULL);

  return fcShort8_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_set__ILes_ull_pcg_hpc_fancier_vector_Short8_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_set__ILes_ull_pcg_hpc_fancier_vector_fcShort8;:x", FC_VOID_EXPR);

  jint err;
  fcShort8 __tmp_x = fcShort8_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8_unwrap", FC_VOID_EXPR);

  err = fcShort8Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_length(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", 0L);

  if (!fcShort8Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcShort8Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jshortArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_getArray(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_syncToHost", NULL);

  // Create Java array and populate it
  jshortArray __tmp_ret = FC_JNI_CALL(env, NewShortArray, self->len * 8);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcShort8Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jshort* __tmp_elems = FC_JNI_CALL(env, GetShortArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort8Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 8], self->c[i].s, sizeof(fcShort) * 8)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseShortArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_setArray(JNIEnv* env, jobject obj, jshortArray v) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jshort* __tmp_elems_v = FC_JNI_CALL(env, GetShortArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort8Array_setArray:v", FC_VOID_EXPR);

  jint err = fcShort8Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseShortArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcShort8Array* __tmp_array = fcShort8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort8Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcShort8Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcShort8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcShort8));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcShort8Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcShort8Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcShort8Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_syncToHost(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  jint err = fcShort8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Short8Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcShort8Array* self = fcShort8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcShort8Array_getJava", FC_VOID_EXPR);

  jint err = fcShort8Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShort8Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcShort8Array_createRef(fcShort8Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_releaseRef(fcShort8Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcShort8Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_init(fcShort8Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_initSize(fcShort8Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcShort8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort8), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_initArray(fcShort8Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 8 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort8Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 8;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort8), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort8Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_initCopy(fcShort8Array* self, const fcShort8Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcShort8Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcShort8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcShort8), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcShort8Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcShort8Array_release(fcShort8Array* self) {
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

fcShort8 fcShort8Array_get(fcShort8Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcShort8 __tmp_ret = {.s = {0}};
  if (!fcShort8Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcShort8Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcShort8Array_set(fcShort8Array* self, fcInt i, fcShort8 x) {
  if (!fcShort8Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcShort8Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_setArray(fcShort8Array* self, fcInt len, const fcShort* v) {
  fcError err;

  // Check parameters
  if (len % 8 != 0 || len / 8 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcShort8Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 8], sizeof(fcShort) * 8))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcShort8Array_setCopy(fcShort8Array* self, const fcShort8Array* array) {
  if (!fcShort8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcShort8Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcShort8);

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

fcError fcShort8Array_setBuffer(fcShort8Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcShort8) != 0 || len / sizeof(fcShort8) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcShort8Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcShort8Array_syncToHost(fcShort8Array* self) {
  if (!fcShort8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcShort8), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcShort8Array_syncToDevice(fcShort8Array* self) {
  if (!fcShort8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcShort8Array_valid(const fcShort8Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcInt2Array
//

FC_JAVA_INSTANCE_HANDLERS(fcInt2Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcInt2Array* self = (fcInt2Array*) nativePtr;
  jint err = fcInt2Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcInt2Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcInt2Array* self = fcInt2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcInt2Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_initNative___3I(JNIEnv* env, jobject obj, jintArray v) {
  // Allocate instance
  fcInt2Array* self = fcInt2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_initNative__[I:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt2Array_initNative__[I:v", FC_VOID_EXPR);

  jint err = fcInt2Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int2Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcInt2Array* self = fcInt2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int2Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcInt2Array* __tmp_array = fcInt2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_getJava:array", FC_VOID_EXPR);

  jint err = fcInt2Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_releaseNative(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcInt2Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_release", FC_VOID_EXPR);

  fcInt2Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcInt2Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_releaseRef", FC_VOID_EXPR);

  fcInt2Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", NULL);

  jint err;
  fcInt2 __tmp_ret = fcInt2Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_get", NULL);

  return fcInt2_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_set__ILes_ull_pcg_hpc_fancier_vector_Int2_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_set__ILes_ull_pcg_hpc_fancier_vector_fcInt2;:x", FC_VOID_EXPR);

  jint err;
  fcInt2 __tmp_x = fcInt2_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2_unwrap", FC_VOID_EXPR);

  err = fcInt2Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_length(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", 0L);

  if (!fcInt2Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcInt2Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jintArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_getArray(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_syncToHost", NULL);

  // Create Java array and populate it
  jintArray __tmp_ret = FC_JNI_CALL(env, NewIntArray, self->len * 2);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcInt2Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jint* __tmp_elems = FC_JNI_CALL(env, GetIntArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt2Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 2], self->c[i].s, sizeof(fcInt) * 2)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseIntArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_setArray(JNIEnv* env, jobject obj, jintArray v) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt2Array_setArray:v", FC_VOID_EXPR);

  jint err = fcInt2Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcInt2Array* __tmp_array = fcInt2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt2Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcInt2Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcInt2));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt2Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt2Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcInt2Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_syncToHost(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  jint err = fcInt2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int2Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcInt2Array* self = fcInt2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt2Array_getJava", FC_VOID_EXPR);

  jint err = fcInt2Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt2Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcInt2Array_createRef(fcInt2Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_releaseRef(fcInt2Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcInt2Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_init(fcInt2Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_initSize(fcInt2Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcInt2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt2), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_initArray(fcInt2Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 2 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt2Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 2;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt2), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt2Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_initCopy(fcInt2Array* self, const fcInt2Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcInt2Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt2), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt2Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcInt2Array_release(fcInt2Array* self) {
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

fcInt2 fcInt2Array_get(fcInt2Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcInt2 __tmp_ret = {.s = {0}};
  if (!fcInt2Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcInt2Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcInt2Array_set(fcInt2Array* self, fcInt i, fcInt2 x) {
  if (!fcInt2Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcInt2Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_setArray(fcInt2Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len % 2 != 0 || len / 2 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcInt2Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 2], sizeof(fcInt) * 2))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt2Array_setCopy(fcInt2Array* self, const fcInt2Array* array) {
  if (!fcInt2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcInt2Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcInt2);

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

fcError fcInt2Array_setBuffer(fcInt2Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcInt2) != 0 || len / sizeof(fcInt2) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcInt2Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcInt2Array_syncToHost(fcInt2Array* self) {
  if (!fcInt2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcInt2), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcInt2Array_syncToDevice(fcInt2Array* self) {
  if (!fcInt2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcInt2Array_valid(const fcInt2Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcInt3Array
//

FC_JAVA_INSTANCE_HANDLERS(fcInt3Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcInt3Array* self = (fcInt3Array*) nativePtr;
  jint err = fcInt3Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcInt3Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcInt3Array* self = fcInt3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcInt3Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_initNative___3I(JNIEnv* env, jobject obj, jintArray v) {
  // Allocate instance
  fcInt3Array* self = fcInt3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_initNative__[I:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt3Array_initNative__[I:v", FC_VOID_EXPR);

  jint err = fcInt3Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int3Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcInt3Array* self = fcInt3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int3Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcInt3Array* __tmp_array = fcInt3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_getJava:array", FC_VOID_EXPR);

  jint err = fcInt3Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_releaseNative(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcInt3Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_release", FC_VOID_EXPR);

  fcInt3Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcInt3Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_releaseRef", FC_VOID_EXPR);

  fcInt3Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", NULL);

  jint err;
  fcInt3 __tmp_ret = fcInt3Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_get", NULL);

  return fcInt3_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_set__ILes_ull_pcg_hpc_fancier_vector_Int3_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_set__ILes_ull_pcg_hpc_fancier_vector_fcInt3;:x", FC_VOID_EXPR);

  jint err;
  fcInt3 __tmp_x = fcInt3_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3_unwrap", FC_VOID_EXPR);

  err = fcInt3Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_length(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", 0L);

  if (!fcInt3Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcInt3Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jintArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_getArray(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_syncToHost", NULL);

  // Create Java array and populate it
  jintArray __tmp_ret = FC_JNI_CALL(env, NewIntArray, self->len * 3);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcInt3Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jint* __tmp_elems = FC_JNI_CALL(env, GetIntArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt3Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 3], self->c[i].s, sizeof(fcInt) * 3)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseIntArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_setArray(JNIEnv* env, jobject obj, jintArray v) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt3Array_setArray:v", FC_VOID_EXPR);

  jint err = fcInt3Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcInt3Array* __tmp_array = fcInt3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt3Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcInt3Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcInt3));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt3Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt3Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcInt3Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_syncToHost(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  jint err = fcInt3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int3Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcInt3Array* self = fcInt3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt3Array_getJava", FC_VOID_EXPR);

  jint err = fcInt3Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt3Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcInt3Array_createRef(fcInt3Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_releaseRef(fcInt3Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcInt3Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_init(fcInt3Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_initSize(fcInt3Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcInt3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt3), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_initArray(fcInt3Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 3 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt3Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 3;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt3), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt3Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_initCopy(fcInt3Array* self, const fcInt3Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcInt3Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt3), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt3Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcInt3Array_release(fcInt3Array* self) {
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

fcInt3 fcInt3Array_get(fcInt3Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcInt3 __tmp_ret = {.s = {0}};
  if (!fcInt3Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcInt3Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcInt3Array_set(fcInt3Array* self, fcInt i, fcInt3 x) {
  if (!fcInt3Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcInt3Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_setArray(fcInt3Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len % 3 != 0 || len / 3 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcInt3Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 3], sizeof(fcInt) * 3))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt3Array_setCopy(fcInt3Array* self, const fcInt3Array* array) {
  if (!fcInt3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcInt3Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcInt3);

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

fcError fcInt3Array_setBuffer(fcInt3Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcInt3) != 0 || len / sizeof(fcInt3) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcInt3Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcInt3Array_syncToHost(fcInt3Array* self) {
  if (!fcInt3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcInt3), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcInt3Array_syncToDevice(fcInt3Array* self) {
  if (!fcInt3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcInt3Array_valid(const fcInt3Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcInt4Array
//

FC_JAVA_INSTANCE_HANDLERS(fcInt4Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcInt4Array* self = (fcInt4Array*) nativePtr;
  jint err = fcInt4Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcInt4Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcInt4Array* self = fcInt4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcInt4Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_initNative___3I(JNIEnv* env, jobject obj, jintArray v) {
  // Allocate instance
  fcInt4Array* self = fcInt4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_initNative__[I:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt4Array_initNative__[I:v", FC_VOID_EXPR);

  jint err = fcInt4Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int4Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcInt4Array* self = fcInt4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int4Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcInt4Array* __tmp_array = fcInt4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_getJava:array", FC_VOID_EXPR);

  jint err = fcInt4Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_releaseNative(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcInt4Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_release", FC_VOID_EXPR);

  fcInt4Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcInt4Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_releaseRef", FC_VOID_EXPR);

  fcInt4Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", NULL);

  jint err;
  fcInt4 __tmp_ret = fcInt4Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_get", NULL);

  return fcInt4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_set__ILes_ull_pcg_hpc_fancier_vector_Int4_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_set__ILes_ull_pcg_hpc_fancier_vector_fcInt4;:x", FC_VOID_EXPR);

  jint err;
  fcInt4 __tmp_x = fcInt4_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4_unwrap", FC_VOID_EXPR);

  err = fcInt4Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_length(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", 0L);

  if (!fcInt4Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcInt4Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jintArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_getArray(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_syncToHost", NULL);

  // Create Java array and populate it
  jintArray __tmp_ret = FC_JNI_CALL(env, NewIntArray, self->len * 4);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcInt4Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jint* __tmp_elems = FC_JNI_CALL(env, GetIntArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt4Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 4], self->c[i].s, sizeof(fcInt) * 4)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseIntArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_setArray(JNIEnv* env, jobject obj, jintArray v) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt4Array_setArray:v", FC_VOID_EXPR);

  jint err = fcInt4Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcInt4Array* __tmp_array = fcInt4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt4Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcInt4Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcInt4));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt4Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt4Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcInt4Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_syncToHost(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  jint err = fcInt4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int4Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcInt4Array* self = fcInt4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt4Array_getJava", FC_VOID_EXPR);

  jint err = fcInt4Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt4Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcInt4Array_createRef(fcInt4Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_releaseRef(fcInt4Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcInt4Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_init(fcInt4Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_initSize(fcInt4Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcInt4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt4), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_initArray(fcInt4Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 4 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt4Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 4;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt4), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt4Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_initCopy(fcInt4Array* self, const fcInt4Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcInt4Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt4), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt4Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcInt4Array_release(fcInt4Array* self) {
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

fcInt4 fcInt4Array_get(fcInt4Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcInt4 __tmp_ret = {.s = {0}};
  if (!fcInt4Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcInt4Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcInt4Array_set(fcInt4Array* self, fcInt i, fcInt4 x) {
  if (!fcInt4Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcInt4Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_setArray(fcInt4Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len % 4 != 0 || len / 4 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcInt4Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 4], sizeof(fcInt) * 4))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt4Array_setCopy(fcInt4Array* self, const fcInt4Array* array) {
  if (!fcInt4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcInt4Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcInt4);

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

fcError fcInt4Array_setBuffer(fcInt4Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcInt4) != 0 || len / sizeof(fcInt4) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcInt4Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcInt4Array_syncToHost(fcInt4Array* self) {
  if (!fcInt4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcInt4), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcInt4Array_syncToDevice(fcInt4Array* self) {
  if (!fcInt4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcInt4Array_valid(const fcInt4Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcInt8Array
//

FC_JAVA_INSTANCE_HANDLERS(fcInt8Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcInt8Array* self = (fcInt8Array*) nativePtr;
  jint err = fcInt8Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcInt8Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcInt8Array* self = fcInt8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcInt8Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_initNative___3I(JNIEnv* env, jobject obj, jintArray v) {
  // Allocate instance
  fcInt8Array* self = fcInt8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_initNative__[I:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt8Array_initNative__[I:v", FC_VOID_EXPR);

  jint err = fcInt8Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int8Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcInt8Array* self = fcInt8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Int8Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcInt8Array* __tmp_array = fcInt8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_getJava:array", FC_VOID_EXPR);

  jint err = fcInt8Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_releaseNative(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcInt8Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_release", FC_VOID_EXPR);

  fcInt8Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcInt8Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_releaseRef", FC_VOID_EXPR);

  fcInt8Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", NULL);

  jint err;
  fcInt8 __tmp_ret = fcInt8Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_get", NULL);

  return fcInt8_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_set__ILes_ull_pcg_hpc_fancier_vector_Int8_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_set__ILes_ull_pcg_hpc_fancier_vector_fcInt8;:x", FC_VOID_EXPR);

  jint err;
  fcInt8 __tmp_x = fcInt8_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8_unwrap", FC_VOID_EXPR);

  err = fcInt8Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_length(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", 0L);

  if (!fcInt8Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcInt8Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jintArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_getArray(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_syncToHost", NULL);

  // Create Java array and populate it
  jintArray __tmp_ret = FC_JNI_CALL(env, NewIntArray, self->len * 8);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcInt8Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jint* __tmp_elems = FC_JNI_CALL(env, GetIntArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt8Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 8], self->c[i].s, sizeof(fcInt) * 8)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseIntArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_setArray(JNIEnv* env, jobject obj, jintArray v) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jint* __tmp_elems_v = FC_JNI_CALL(env, GetIntArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt8Array_setArray:v", FC_VOID_EXPR);

  jint err = fcInt8Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcInt8Array* __tmp_array = fcInt8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt8Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcInt8Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcInt8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcInt8));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcInt8Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcInt8Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcInt8Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_syncToHost(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  jint err = fcInt8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Int8Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcInt8Array* self = fcInt8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcInt8Array_getJava", FC_VOID_EXPR);

  jint err = fcInt8Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcInt8Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcInt8Array_createRef(fcInt8Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_releaseRef(fcInt8Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcInt8Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_init(fcInt8Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_initSize(fcInt8Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcInt8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt8), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_initArray(fcInt8Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 8 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt8Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 8;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt8), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt8Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_initCopy(fcInt8Array* self, const fcInt8Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcInt8Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcInt8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcInt8), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcInt8Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcInt8Array_release(fcInt8Array* self) {
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

fcInt8 fcInt8Array_get(fcInt8Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcInt8 __tmp_ret = {.s = {0}};
  if (!fcInt8Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcInt8Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcInt8Array_set(fcInt8Array* self, fcInt i, fcInt8 x) {
  if (!fcInt8Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcInt8Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_setArray(fcInt8Array* self, fcInt len, const fcInt* v) {
  fcError err;

  // Check parameters
  if (len % 8 != 0 || len / 8 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcInt8Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 8], sizeof(fcInt) * 8))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcInt8Array_setCopy(fcInt8Array* self, const fcInt8Array* array) {
  if (!fcInt8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcInt8Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcInt8);

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

fcError fcInt8Array_setBuffer(fcInt8Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcInt8) != 0 || len / sizeof(fcInt8) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcInt8Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcInt8Array_syncToHost(fcInt8Array* self) {
  if (!fcInt8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcInt8), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcInt8Array_syncToDevice(fcInt8Array* self) {
  if (!fcInt8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcInt8Array_valid(const fcInt8Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcLong2Array
//

FC_JAVA_INSTANCE_HANDLERS(fcLong2Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcLong2Array* self = (fcLong2Array*) nativePtr;
  jint err = fcLong2Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcLong2Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcLong2Array* self = fcLong2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcLong2Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_initNative___3J(JNIEnv* env, jobject obj, jlongArray v) {
  // Allocate instance
  fcLong2Array* self = fcLong2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_initNative__[J:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong2Array_initNative__[J:v", FC_VOID_EXPR);

  jint err = fcLong2Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long2Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcLong2Array* self = fcLong2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long2Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcLong2Array* __tmp_array = fcLong2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_getJava:array", FC_VOID_EXPR);

  jint err = fcLong2Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_releaseNative(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcLong2Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_release", FC_VOID_EXPR);

  fcLong2Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcLong2Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_releaseRef", FC_VOID_EXPR);

  fcLong2Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", NULL);

  jint err;
  fcLong2 __tmp_ret = fcLong2Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_get", NULL);

  return fcLong2_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_set__ILes_ull_pcg_hpc_fancier_vector_Long2_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_set__ILes_ull_pcg_hpc_fancier_vector_fcLong2;:x", FC_VOID_EXPR);

  jint err;
  fcLong2 __tmp_x = fcLong2_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2_unwrap", FC_VOID_EXPR);

  err = fcLong2Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_length(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", 0L);

  if (!fcLong2Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcLong2Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jlongArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_getArray(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_syncToHost", NULL);

  // Create Java array and populate it
  jlongArray __tmp_ret = FC_JNI_CALL(env, NewLongArray, self->len * 2);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcLong2Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jlong* __tmp_elems = FC_JNI_CALL(env, GetLongArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong2Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 2], self->c[i].s, sizeof(fcLong) * 2)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseLongArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_setArray(JNIEnv* env, jobject obj, jlongArray v) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong2Array_setArray:v", FC_VOID_EXPR);

  jint err = fcLong2Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcLong2Array* __tmp_array = fcLong2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong2Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcLong2Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcLong2));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong2Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong2Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcLong2Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_syncToHost(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  jint err = fcLong2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long2Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcLong2Array* self = fcLong2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong2Array_getJava", FC_VOID_EXPR);

  jint err = fcLong2Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong2Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcLong2Array_createRef(fcLong2Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_releaseRef(fcLong2Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcLong2Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_init(fcLong2Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_initSize(fcLong2Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcLong2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong2), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_initArray(fcLong2Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 2 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong2Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 2;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong2), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong2Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_initCopy(fcLong2Array* self, const fcLong2Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcLong2Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong2), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong2Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcLong2Array_release(fcLong2Array* self) {
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

fcLong2 fcLong2Array_get(fcLong2Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcLong2 __tmp_ret = {.s = {0L}};
  if (!fcLong2Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcLong2Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcLong2Array_set(fcLong2Array* self, fcInt i, fcLong2 x) {
  if (!fcLong2Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcLong2Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_setArray(fcLong2Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len % 2 != 0 || len / 2 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcLong2Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 2], sizeof(fcLong) * 2))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong2Array_setCopy(fcLong2Array* self, const fcLong2Array* array) {
  if (!fcLong2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcLong2Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcLong2);

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

fcError fcLong2Array_setBuffer(fcLong2Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcLong2) != 0 || len / sizeof(fcLong2) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcLong2Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcLong2Array_syncToHost(fcLong2Array* self) {
  if (!fcLong2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcLong2), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcLong2Array_syncToDevice(fcLong2Array* self) {
  if (!fcLong2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcLong2Array_valid(const fcLong2Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcLong3Array
//

FC_JAVA_INSTANCE_HANDLERS(fcLong3Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcLong3Array* self = (fcLong3Array*) nativePtr;
  jint err = fcLong3Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcLong3Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcLong3Array* self = fcLong3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcLong3Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_initNative___3J(JNIEnv* env, jobject obj, jlongArray v) {
  // Allocate instance
  fcLong3Array* self = fcLong3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_initNative__[J:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong3Array_initNative__[J:v", FC_VOID_EXPR);

  jint err = fcLong3Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long3Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcLong3Array* self = fcLong3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long3Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcLong3Array* __tmp_array = fcLong3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_getJava:array", FC_VOID_EXPR);

  jint err = fcLong3Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_releaseNative(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcLong3Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_release", FC_VOID_EXPR);

  fcLong3Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcLong3Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_releaseRef", FC_VOID_EXPR);

  fcLong3Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", NULL);

  jint err;
  fcLong3 __tmp_ret = fcLong3Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_get", NULL);

  return fcLong3_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_set__ILes_ull_pcg_hpc_fancier_vector_Long3_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_set__ILes_ull_pcg_hpc_fancier_vector_fcLong3;:x", FC_VOID_EXPR);

  jint err;
  fcLong3 __tmp_x = fcLong3_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3_unwrap", FC_VOID_EXPR);

  err = fcLong3Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_length(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", 0L);

  if (!fcLong3Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcLong3Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jlongArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_getArray(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_syncToHost", NULL);

  // Create Java array and populate it
  jlongArray __tmp_ret = FC_JNI_CALL(env, NewLongArray, self->len * 3);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcLong3Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jlong* __tmp_elems = FC_JNI_CALL(env, GetLongArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong3Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 3], self->c[i].s, sizeof(fcLong) * 3)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseLongArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_setArray(JNIEnv* env, jobject obj, jlongArray v) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong3Array_setArray:v", FC_VOID_EXPR);

  jint err = fcLong3Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcLong3Array* __tmp_array = fcLong3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong3Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcLong3Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcLong3));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong3Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong3Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcLong3Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_syncToHost(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  jint err = fcLong3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long3Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcLong3Array* self = fcLong3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong3Array_getJava", FC_VOID_EXPR);

  jint err = fcLong3Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong3Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcLong3Array_createRef(fcLong3Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_releaseRef(fcLong3Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcLong3Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_init(fcLong3Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_initSize(fcLong3Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcLong3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong3), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_initArray(fcLong3Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 3 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong3Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 3;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong3), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong3Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_initCopy(fcLong3Array* self, const fcLong3Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcLong3Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong3), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong3Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcLong3Array_release(fcLong3Array* self) {
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

fcLong3 fcLong3Array_get(fcLong3Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcLong3 __tmp_ret = {.s = {0L}};
  if (!fcLong3Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcLong3Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcLong3Array_set(fcLong3Array* self, fcInt i, fcLong3 x) {
  if (!fcLong3Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcLong3Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_setArray(fcLong3Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len % 3 != 0 || len / 3 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcLong3Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 3], sizeof(fcLong) * 3))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong3Array_setCopy(fcLong3Array* self, const fcLong3Array* array) {
  if (!fcLong3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcLong3Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcLong3);

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

fcError fcLong3Array_setBuffer(fcLong3Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcLong3) != 0 || len / sizeof(fcLong3) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcLong3Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcLong3Array_syncToHost(fcLong3Array* self) {
  if (!fcLong3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcLong3), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcLong3Array_syncToDevice(fcLong3Array* self) {
  if (!fcLong3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcLong3Array_valid(const fcLong3Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcLong4Array
//

FC_JAVA_INSTANCE_HANDLERS(fcLong4Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcLong4Array* self = (fcLong4Array*) nativePtr;
  jint err = fcLong4Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcLong4Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcLong4Array* self = fcLong4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcLong4Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_initNative___3J(JNIEnv* env, jobject obj, jlongArray v) {
  // Allocate instance
  fcLong4Array* self = fcLong4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_initNative__[J:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong4Array_initNative__[J:v", FC_VOID_EXPR);

  jint err = fcLong4Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long4Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcLong4Array* self = fcLong4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long4Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcLong4Array* __tmp_array = fcLong4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_getJava:array", FC_VOID_EXPR);

  jint err = fcLong4Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_releaseNative(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcLong4Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_release", FC_VOID_EXPR);

  fcLong4Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcLong4Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_releaseRef", FC_VOID_EXPR);

  fcLong4Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", NULL);

  jint err;
  fcLong4 __tmp_ret = fcLong4Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_get", NULL);

  return fcLong4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_set__ILes_ull_pcg_hpc_fancier_vector_Long4_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_set__ILes_ull_pcg_hpc_fancier_vector_fcLong4;:x", FC_VOID_EXPR);

  jint err;
  fcLong4 __tmp_x = fcLong4_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4_unwrap", FC_VOID_EXPR);

  err = fcLong4Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_length(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", 0L);

  if (!fcLong4Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcLong4Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jlongArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_getArray(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_syncToHost", NULL);

  // Create Java array and populate it
  jlongArray __tmp_ret = FC_JNI_CALL(env, NewLongArray, self->len * 4);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcLong4Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jlong* __tmp_elems = FC_JNI_CALL(env, GetLongArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong4Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 4], self->c[i].s, sizeof(fcLong) * 4)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseLongArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_setArray(JNIEnv* env, jobject obj, jlongArray v) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong4Array_setArray:v", FC_VOID_EXPR);

  jint err = fcLong4Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcLong4Array* __tmp_array = fcLong4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong4Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcLong4Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcLong4));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong4Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong4Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcLong4Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_syncToHost(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  jint err = fcLong4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long4Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcLong4Array* self = fcLong4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong4Array_getJava", FC_VOID_EXPR);

  jint err = fcLong4Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong4Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcLong4Array_createRef(fcLong4Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_releaseRef(fcLong4Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcLong4Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_init(fcLong4Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_initSize(fcLong4Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcLong4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong4), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_initArray(fcLong4Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 4 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong4Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 4;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong4), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong4Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_initCopy(fcLong4Array* self, const fcLong4Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcLong4Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong4), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong4Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcLong4Array_release(fcLong4Array* self) {
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

fcLong4 fcLong4Array_get(fcLong4Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcLong4 __tmp_ret = {.s = {0L}};
  if (!fcLong4Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcLong4Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcLong4Array_set(fcLong4Array* self, fcInt i, fcLong4 x) {
  if (!fcLong4Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcLong4Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_setArray(fcLong4Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len % 4 != 0 || len / 4 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcLong4Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 4], sizeof(fcLong) * 4))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong4Array_setCopy(fcLong4Array* self, const fcLong4Array* array) {
  if (!fcLong4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcLong4Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcLong4);

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

fcError fcLong4Array_setBuffer(fcLong4Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcLong4) != 0 || len / sizeof(fcLong4) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcLong4Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcLong4Array_syncToHost(fcLong4Array* self) {
  if (!fcLong4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcLong4), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcLong4Array_syncToDevice(fcLong4Array* self) {
  if (!fcLong4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcLong4Array_valid(const fcLong4Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcLong8Array
//

FC_JAVA_INSTANCE_HANDLERS(fcLong8Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcLong8Array* self = (fcLong8Array*) nativePtr;
  jint err = fcLong8Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcLong8Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcLong8Array* self = fcLong8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcLong8Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_initNative___3J(JNIEnv* env, jobject obj, jlongArray v) {
  // Allocate instance
  fcLong8Array* self = fcLong8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_initNative__[J:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong8Array_initNative__[J:v", FC_VOID_EXPR);

  jint err = fcLong8Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long8Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcLong8Array* self = fcLong8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Long8Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcLong8Array* __tmp_array = fcLong8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_getJava:array", FC_VOID_EXPR);

  jint err = fcLong8Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_releaseNative(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcLong8Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_release", FC_VOID_EXPR);

  fcLong8Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcLong8Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_releaseRef", FC_VOID_EXPR);

  fcLong8Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", NULL);

  jint err;
  fcLong8 __tmp_ret = fcLong8Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_get", NULL);

  return fcLong8_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_set__ILes_ull_pcg_hpc_fancier_vector_Long8_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_set__ILes_ull_pcg_hpc_fancier_vector_fcLong8;:x", FC_VOID_EXPR);

  jint err;
  fcLong8 __tmp_x = fcLong8_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8_unwrap", FC_VOID_EXPR);

  err = fcLong8Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_length(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", 0L);

  if (!fcLong8Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcLong8Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jlongArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_getArray(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_syncToHost", NULL);

  // Create Java array and populate it
  jlongArray __tmp_ret = FC_JNI_CALL(env, NewLongArray, self->len * 8);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcLong8Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jlong* __tmp_elems = FC_JNI_CALL(env, GetLongArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong8Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 8], self->c[i].s, sizeof(fcLong) * 8)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseLongArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_setArray(JNIEnv* env, jobject obj, jlongArray v) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jlong* __tmp_elems_v = FC_JNI_CALL(env, GetLongArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong8Array_setArray:v", FC_VOID_EXPR);

  jint err = fcLong8Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseLongArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcLong8Array* __tmp_array = fcLong8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong8Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcLong8Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcLong8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcLong8));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcLong8Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcLong8Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcLong8Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_syncToHost(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  jint err = fcLong8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Long8Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcLong8Array* self = fcLong8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcLong8Array_getJava", FC_VOID_EXPR);

  jint err = fcLong8Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcLong8Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcLong8Array_createRef(fcLong8Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_releaseRef(fcLong8Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcLong8Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_init(fcLong8Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_initSize(fcLong8Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcLong8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong8), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_initArray(fcLong8Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 8 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong8Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 8;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong8), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong8Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_initCopy(fcLong8Array* self, const fcLong8Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcLong8Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcLong8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcLong8), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcLong8Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcLong8Array_release(fcLong8Array* self) {
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

fcLong8 fcLong8Array_get(fcLong8Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcLong8 __tmp_ret = {.s = {0L}};
  if (!fcLong8Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcLong8Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcLong8Array_set(fcLong8Array* self, fcInt i, fcLong8 x) {
  if (!fcLong8Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcLong8Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_setArray(fcLong8Array* self, fcInt len, const fcLong* v) {
  fcError err;

  // Check parameters
  if (len % 8 != 0 || len / 8 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcLong8Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 8], sizeof(fcLong) * 8))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcLong8Array_setCopy(fcLong8Array* self, const fcLong8Array* array) {
  if (!fcLong8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcLong8Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcLong8);

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

fcError fcLong8Array_setBuffer(fcLong8Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcLong8) != 0 || len / sizeof(fcLong8) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcLong8Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcLong8Array_syncToHost(fcLong8Array* self) {
  if (!fcLong8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcLong8), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcLong8Array_syncToDevice(fcLong8Array* self) {
  if (!fcLong8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcLong8Array_valid(const fcLong8Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcFloat2Array
//

FC_JAVA_INSTANCE_HANDLERS(fcFloat2Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcFloat2Array* self = (fcFloat2Array*) nativePtr;
  jint err = fcFloat2Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcFloat2Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcFloat2Array* self = fcFloat2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcFloat2Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_initNative___3F(JNIEnv* env, jobject obj, jfloatArray v) {
  // Allocate instance
  fcFloat2Array* self = fcFloat2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_initNative__[F:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat2Array_initNative__[F:v", FC_VOID_EXPR);

  jint err = fcFloat2Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float2Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcFloat2Array* self = fcFloat2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float2Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcFloat2Array* __tmp_array = fcFloat2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_getJava:array", FC_VOID_EXPR);

  jint err = fcFloat2Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_releaseNative(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcFloat2Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_release", FC_VOID_EXPR);

  fcFloat2Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcFloat2Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_releaseRef", FC_VOID_EXPR);

  fcFloat2Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", NULL);

  jint err;
  fcFloat2 __tmp_ret = fcFloat2Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_get", NULL);

  return fcFloat2_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_set__ILes_ull_pcg_hpc_fancier_vector_Float2_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_set__ILes_ull_pcg_hpc_fancier_vector_fcFloat2;:x", FC_VOID_EXPR);

  jint err;
  fcFloat2 __tmp_x = fcFloat2_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2_unwrap", FC_VOID_EXPR);

  err = fcFloat2Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_length(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", 0L);

  if (!fcFloat2Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcFloat2Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jfloatArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_getArray(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_syncToHost", NULL);

  // Create Java array and populate it
  jfloatArray __tmp_ret = FC_JNI_CALL(env, NewFloatArray, self->len * 2);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcFloat2Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jfloat* __tmp_elems = FC_JNI_CALL(env, GetFloatArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat2Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 2], self->c[i].s, sizeof(fcFloat) * 2)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseFloatArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_setArray(JNIEnv* env, jobject obj, jfloatArray v) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat2Array_setArray:v", FC_VOID_EXPR);

  jint err = fcFloat2Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcFloat2Array* __tmp_array = fcFloat2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat2Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcFloat2Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcFloat2));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat2Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat2Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcFloat2Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_syncToHost(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float2Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcFloat2Array* self = fcFloat2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat2Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat2Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat2Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcFloat2Array_createRef(fcFloat2Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_releaseRef(fcFloat2Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcFloat2Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_init(fcFloat2Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_initSize(fcFloat2Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcFloat2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat2), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_initArray(fcFloat2Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 2 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat2Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 2;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat2), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat2Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_initCopy(fcFloat2Array* self, const fcFloat2Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcFloat2Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat2), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat2Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcFloat2Array_release(fcFloat2Array* self) {
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

fcFloat2 fcFloat2Array_get(fcFloat2Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcFloat2 __tmp_ret = {.s = {0.0f}};
  if (!fcFloat2Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcFloat2Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcFloat2Array_set(fcFloat2Array* self, fcInt i, fcFloat2 x) {
  if (!fcFloat2Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcFloat2Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_setArray(fcFloat2Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len % 2 != 0 || len / 2 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcFloat2Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 2], sizeof(fcFloat) * 2))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat2Array_setCopy(fcFloat2Array* self, const fcFloat2Array* array) {
  if (!fcFloat2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcFloat2Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcFloat2);

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

fcError fcFloat2Array_setBuffer(fcFloat2Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcFloat2) != 0 || len / sizeof(fcFloat2) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcFloat2Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcFloat2Array_syncToHost(fcFloat2Array* self) {
  if (!fcFloat2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcFloat2), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcFloat2Array_syncToDevice(fcFloat2Array* self) {
  if (!fcFloat2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcFloat2Array_valid(const fcFloat2Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcFloat3Array
//

FC_JAVA_INSTANCE_HANDLERS(fcFloat3Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcFloat3Array* self = (fcFloat3Array*) nativePtr;
  jint err = fcFloat3Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcFloat3Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcFloat3Array* self = fcFloat3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcFloat3Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_initNative___3F(JNIEnv* env, jobject obj, jfloatArray v) {
  // Allocate instance
  fcFloat3Array* self = fcFloat3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_initNative__[F:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat3Array_initNative__[F:v", FC_VOID_EXPR);

  jint err = fcFloat3Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float3Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcFloat3Array* self = fcFloat3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float3Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcFloat3Array* __tmp_array = fcFloat3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_getJava:array", FC_VOID_EXPR);

  jint err = fcFloat3Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_releaseNative(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcFloat3Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_release", FC_VOID_EXPR);

  fcFloat3Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcFloat3Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_releaseRef", FC_VOID_EXPR);

  fcFloat3Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", NULL);

  jint err;
  fcFloat3 __tmp_ret = fcFloat3Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_get", NULL);

  return fcFloat3_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_set__ILes_ull_pcg_hpc_fancier_vector_Float3_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_set__ILes_ull_pcg_hpc_fancier_vector_fcFloat3;:x", FC_VOID_EXPR);

  jint err;
  fcFloat3 __tmp_x = fcFloat3_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3_unwrap", FC_VOID_EXPR);

  err = fcFloat3Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_length(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", 0L);

  if (!fcFloat3Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcFloat3Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jfloatArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_getArray(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToHost", NULL);

  // Create Java array and populate it
  jfloatArray __tmp_ret = FC_JNI_CALL(env, NewFloatArray, self->len * 3);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcFloat3Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jfloat* __tmp_elems = FC_JNI_CALL(env, GetFloatArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat3Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 3], self->c[i].s, sizeof(fcFloat) * 3)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseFloatArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_setArray(JNIEnv* env, jobject obj, jfloatArray v) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat3Array_setArray:v", FC_VOID_EXPR);

  jint err = fcFloat3Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcFloat3Array* __tmp_array = fcFloat3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat3Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcFloat3Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcFloat3));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat3Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat3Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcFloat3Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_syncToHost(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float3Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcFloat3Array* self = fcFloat3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat3Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat3Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcFloat3Array_createRef(fcFloat3Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_releaseRef(fcFloat3Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcFloat3Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_init(fcFloat3Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_initSize(fcFloat3Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcFloat3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat3), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_initArray(fcFloat3Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 3 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat3Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 3;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat3), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat3Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_initCopy(fcFloat3Array* self, const fcFloat3Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcFloat3Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat3), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat3Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcFloat3Array_release(fcFloat3Array* self) {
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

fcFloat3 fcFloat3Array_get(fcFloat3Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcFloat3 __tmp_ret = {.s = {0.0f}};
  if (!fcFloat3Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcFloat3Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcFloat3Array_set(fcFloat3Array* self, fcInt i, fcFloat3 x) {
  if (!fcFloat3Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcFloat3Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_setArray(fcFloat3Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len % 3 != 0 || len / 3 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcFloat3Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 3], sizeof(fcFloat) * 3))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat3Array_setCopy(fcFloat3Array* self, const fcFloat3Array* array) {
  if (!fcFloat3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcFloat3Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcFloat3);

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

fcError fcFloat3Array_setBuffer(fcFloat3Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcFloat3) != 0 || len / sizeof(fcFloat3) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcFloat3Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcFloat3Array_syncToHost(fcFloat3Array* self) {
  if (!fcFloat3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcFloat3), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcFloat3Array_syncToDevice(fcFloat3Array* self) {
  if (!fcFloat3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcFloat3Array_valid(const fcFloat3Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcFloat4Array
//

FC_JAVA_INSTANCE_HANDLERS(fcFloat4Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcFloat4Array* self = (fcFloat4Array*) nativePtr;
  jint err = fcFloat4Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcFloat4Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcFloat4Array* self = fcFloat4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcFloat4Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_initNative___3F(JNIEnv* env, jobject obj, jfloatArray v) {
  // Allocate instance
  fcFloat4Array* self = fcFloat4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_initNative__[F:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat4Array_initNative__[F:v", FC_VOID_EXPR);

  jint err = fcFloat4Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float4Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcFloat4Array* self = fcFloat4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float4Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcFloat4Array* __tmp_array = fcFloat4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_getJava:array", FC_VOID_EXPR);

  jint err = fcFloat4Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_releaseNative(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcFloat4Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_release", FC_VOID_EXPR);

  fcFloat4Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcFloat4Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_releaseRef", FC_VOID_EXPR);

  fcFloat4Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", NULL);

  jint err;
  fcFloat4 __tmp_ret = fcFloat4Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_get", NULL);

  return fcFloat4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_set__ILes_ull_pcg_hpc_fancier_vector_Float4_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_set__ILes_ull_pcg_hpc_fancier_vector_fcFloat4;:x", FC_VOID_EXPR);

  jint err;
  fcFloat4 __tmp_x = fcFloat4_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4_unwrap", FC_VOID_EXPR);

  err = fcFloat4Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_length(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", 0L);

  if (!fcFloat4Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcFloat4Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jfloatArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_getArray(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_syncToHost", NULL);

  // Create Java array and populate it
  jfloatArray __tmp_ret = FC_JNI_CALL(env, NewFloatArray, self->len * 4);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcFloat4Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jfloat* __tmp_elems = FC_JNI_CALL(env, GetFloatArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat4Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 4], self->c[i].s, sizeof(fcFloat) * 4)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseFloatArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_setArray(JNIEnv* env, jobject obj, jfloatArray v) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat4Array_setArray:v", FC_VOID_EXPR);

  jint err = fcFloat4Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcFloat4Array* __tmp_array = fcFloat4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat4Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcFloat4Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcFloat4));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat4Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat4Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcFloat4Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_syncToHost(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float4Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcFloat4Array* self = fcFloat4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat4Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat4Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat4Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcFloat4Array_createRef(fcFloat4Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_releaseRef(fcFloat4Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcFloat4Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_init(fcFloat4Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_initSize(fcFloat4Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcFloat4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat4), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_initArray(fcFloat4Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 4 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat4Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 4;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat4), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat4Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_initCopy(fcFloat4Array* self, const fcFloat4Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcFloat4Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat4), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat4Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcFloat4Array_release(fcFloat4Array* self) {
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

fcFloat4 fcFloat4Array_get(fcFloat4Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcFloat4 __tmp_ret = {.s = {0.0f}};
  if (!fcFloat4Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcFloat4Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcFloat4Array_set(fcFloat4Array* self, fcInt i, fcFloat4 x) {
  if (!fcFloat4Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcFloat4Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_setArray(fcFloat4Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len % 4 != 0 || len / 4 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcFloat4Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 4], sizeof(fcFloat) * 4))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat4Array_setCopy(fcFloat4Array* self, const fcFloat4Array* array) {
  if (!fcFloat4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcFloat4Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcFloat4);

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

fcError fcFloat4Array_setBuffer(fcFloat4Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcFloat4) != 0 || len / sizeof(fcFloat4) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcFloat4Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcFloat4Array_syncToHost(fcFloat4Array* self) {
  if (!fcFloat4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcFloat4), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcFloat4Array_syncToDevice(fcFloat4Array* self) {
  if (!fcFloat4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcFloat4Array_valid(const fcFloat4Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcFloat8Array
//

FC_JAVA_INSTANCE_HANDLERS(fcFloat8Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcFloat8Array* self = (fcFloat8Array*) nativePtr;
  jint err = fcFloat8Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcFloat8Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcFloat8Array* self = fcFloat8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcFloat8Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_initNative___3F(JNIEnv* env, jobject obj, jfloatArray v) {
  // Allocate instance
  fcFloat8Array* self = fcFloat8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_initNative__[F:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat8Array_initNative__[F:v", FC_VOID_EXPR);

  jint err = fcFloat8Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float8Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcFloat8Array* self = fcFloat8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Float8Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcFloat8Array* __tmp_array = fcFloat8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_getJava:array", FC_VOID_EXPR);

  jint err = fcFloat8Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_releaseNative(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcFloat8Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_release", FC_VOID_EXPR);

  fcFloat8Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcFloat8Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_releaseRef", FC_VOID_EXPR);

  fcFloat8Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", NULL);

  jint err;
  fcFloat8 __tmp_ret = fcFloat8Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_get", NULL);

  return fcFloat8_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_set__ILes_ull_pcg_hpc_fancier_vector_Float8_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_set__ILes_ull_pcg_hpc_fancier_vector_fcFloat8;:x", FC_VOID_EXPR);

  jint err;
  fcFloat8 __tmp_x = fcFloat8_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8_unwrap", FC_VOID_EXPR);

  err = fcFloat8Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_length(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", 0L);

  if (!fcFloat8Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcFloat8Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jfloatArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_getArray(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_syncToHost", NULL);

  // Create Java array and populate it
  jfloatArray __tmp_ret = FC_JNI_CALL(env, NewFloatArray, self->len * 8);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcFloat8Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jfloat* __tmp_elems = FC_JNI_CALL(env, GetFloatArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat8Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 8], self->c[i].s, sizeof(fcFloat) * 8)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseFloatArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_setArray(JNIEnv* env, jobject obj, jfloatArray v) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jfloat* __tmp_elems_v = FC_JNI_CALL(env, GetFloatArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat8Array_setArray:v", FC_VOID_EXPR);

  jint err = fcFloat8Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseFloatArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcFloat8Array* __tmp_array = fcFloat8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat8Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcFloat8Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcFloat8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcFloat8));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcFloat8Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcFloat8Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcFloat8Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_syncToHost(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Float8Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcFloat8Array* self = fcFloat8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcFloat8Array_getJava", FC_VOID_EXPR);

  jint err = fcFloat8Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat8Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcFloat8Array_createRef(fcFloat8Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_releaseRef(fcFloat8Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcFloat8Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_init(fcFloat8Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_initSize(fcFloat8Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcFloat8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat8), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_initArray(fcFloat8Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 8 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat8Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 8;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat8), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat8Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_initCopy(fcFloat8Array* self, const fcFloat8Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcFloat8Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcFloat8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcFloat8), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcFloat8Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcFloat8Array_release(fcFloat8Array* self) {
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

fcFloat8 fcFloat8Array_get(fcFloat8Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcFloat8 __tmp_ret = {.s = {0.0f}};
  if (!fcFloat8Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcFloat8Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcFloat8Array_set(fcFloat8Array* self, fcInt i, fcFloat8 x) {
  if (!fcFloat8Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcFloat8Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_setArray(fcFloat8Array* self, fcInt len, const fcFloat* v) {
  fcError err;

  // Check parameters
  if (len % 8 != 0 || len / 8 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcFloat8Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 8], sizeof(fcFloat) * 8))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcFloat8Array_setCopy(fcFloat8Array* self, const fcFloat8Array* array) {
  if (!fcFloat8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcFloat8Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcFloat8);

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

fcError fcFloat8Array_setBuffer(fcFloat8Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcFloat8) != 0 || len / sizeof(fcFloat8) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcFloat8Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcFloat8Array_syncToHost(fcFloat8Array* self) {
  if (!fcFloat8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcFloat8), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcFloat8Array_syncToDevice(fcFloat8Array* self) {
  if (!fcFloat8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcFloat8Array_valid(const fcFloat8Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcDouble2Array
//

FC_JAVA_INSTANCE_HANDLERS(fcDouble2Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcDouble2Array* self = (fcDouble2Array*) nativePtr;
  jint err = fcDouble2Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcDouble2Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcDouble2Array* self = fcDouble2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcDouble2Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_initNative___3D(JNIEnv* env, jobject obj, jdoubleArray v) {
  // Allocate instance
  fcDouble2Array* self = fcDouble2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_initNative__[D:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble2Array_initNative__[D:v", FC_VOID_EXPR);

  jint err = fcDouble2Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double2Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcDouble2Array* self = fcDouble2Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double2Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcDouble2Array* __tmp_array = fcDouble2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_getJava:array", FC_VOID_EXPR);

  jint err = fcDouble2Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_releaseNative(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcDouble2Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_release", FC_VOID_EXPR);

  fcDouble2Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcDouble2Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_releaseRef", FC_VOID_EXPR);

  fcDouble2Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", NULL);

  jint err;
  fcDouble2 __tmp_ret = fcDouble2Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_get", NULL);

  return fcDouble2_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_set__ILes_ull_pcg_hpc_fancier_vector_Double2_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_set__ILes_ull_pcg_hpc_fancier_vector_fcDouble2;:x", FC_VOID_EXPR);

  jint err;
  fcDouble2 __tmp_x = fcDouble2_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2_unwrap", FC_VOID_EXPR);

  err = fcDouble2Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_length(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", 0L);

  if (!fcDouble2Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcDouble2Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jdoubleArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_getArray(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_syncToHost", NULL);

  // Create Java array and populate it
  jdoubleArray __tmp_ret = FC_JNI_CALL(env, NewDoubleArray, self->len * 2);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcDouble2Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jdouble* __tmp_elems = FC_JNI_CALL(env, GetDoubleArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble2Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 2], self->c[i].s, sizeof(fcDouble) * 2)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseDoubleArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_setArray(JNIEnv* env, jobject obj, jdoubleArray v) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble2Array_setArray:v", FC_VOID_EXPR);

  jint err = fcDouble2Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcDouble2Array* __tmp_array = fcDouble2Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble2Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcDouble2Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcDouble2));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble2Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble2Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcDouble2Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_syncToHost(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble2Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double2Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcDouble2Array* self = fcDouble2Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble2Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble2Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble2Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcDouble2Array_createRef(fcDouble2Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_releaseRef(fcDouble2Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcDouble2Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_init(fcDouble2Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_initSize(fcDouble2Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcDouble2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble2), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_initArray(fcDouble2Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 2 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble2Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 2;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble2), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble2Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_initCopy(fcDouble2Array* self, const fcDouble2Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcDouble2Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble2Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble2), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble2Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcDouble2Array_release(fcDouble2Array* self) {
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

fcDouble2 fcDouble2Array_get(fcDouble2Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcDouble2 __tmp_ret = {.s = {0.0}};
  if (!fcDouble2Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcDouble2Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcDouble2Array_set(fcDouble2Array* self, fcInt i, fcDouble2 x) {
  if (!fcDouble2Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcDouble2Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_setArray(fcDouble2Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len % 2 != 0 || len / 2 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcDouble2Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 2], sizeof(fcDouble) * 2))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble2Array_setCopy(fcDouble2Array* self, const fcDouble2Array* array) {
  if (!fcDouble2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcDouble2Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcDouble2);

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

fcError fcDouble2Array_setBuffer(fcDouble2Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcDouble2) != 0 || len / sizeof(fcDouble2) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcDouble2Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcDouble2Array_syncToHost(fcDouble2Array* self) {
  if (!fcDouble2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcDouble2), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcDouble2Array_syncToDevice(fcDouble2Array* self) {
  if (!fcDouble2Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcDouble2Array_valid(const fcDouble2Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcDouble3Array
//

FC_JAVA_INSTANCE_HANDLERS(fcDouble3Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcDouble3Array* self = (fcDouble3Array*) nativePtr;
  jint err = fcDouble3Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcDouble3Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcDouble3Array* self = fcDouble3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcDouble3Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_initNative___3D(JNIEnv* env, jobject obj, jdoubleArray v) {
  // Allocate instance
  fcDouble3Array* self = fcDouble3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_initNative__[D:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble3Array_initNative__[D:v", FC_VOID_EXPR);

  jint err = fcDouble3Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double3Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcDouble3Array* self = fcDouble3Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double3Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcDouble3Array* __tmp_array = fcDouble3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_getJava:array", FC_VOID_EXPR);

  jint err = fcDouble3Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_releaseNative(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcDouble3Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_release", FC_VOID_EXPR);

  fcDouble3Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcDouble3Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_releaseRef", FC_VOID_EXPR);

  fcDouble3Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", NULL);

  jint err;
  fcDouble3 __tmp_ret = fcDouble3Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_get", NULL);

  return fcDouble3_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_set__ILes_ull_pcg_hpc_fancier_vector_Double3_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_set__ILes_ull_pcg_hpc_fancier_vector_fcDouble3;:x", FC_VOID_EXPR);

  jint err;
  fcDouble3 __tmp_x = fcDouble3_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3_unwrap", FC_VOID_EXPR);

  err = fcDouble3Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_length(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", 0L);

  if (!fcDouble3Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcDouble3Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jdoubleArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_getArray(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_syncToHost", NULL);

  // Create Java array and populate it
  jdoubleArray __tmp_ret = FC_JNI_CALL(env, NewDoubleArray, self->len * 3);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcDouble3Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jdouble* __tmp_elems = FC_JNI_CALL(env, GetDoubleArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble3Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 3], self->c[i].s, sizeof(fcDouble) * 3)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseDoubleArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_setArray(JNIEnv* env, jobject obj, jdoubleArray v) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble3Array_setArray:v", FC_VOID_EXPR);

  jint err = fcDouble3Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcDouble3Array* __tmp_array = fcDouble3Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble3Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcDouble3Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcDouble3));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble3Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble3Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcDouble3Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_syncToHost(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble3Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double3Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcDouble3Array* self = fcDouble3Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble3Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble3Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble3Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcDouble3Array_createRef(fcDouble3Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_releaseRef(fcDouble3Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcDouble3Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_init(fcDouble3Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_initSize(fcDouble3Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcDouble3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble3), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_initArray(fcDouble3Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 3 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble3Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 3;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble3), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble3Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_initCopy(fcDouble3Array* self, const fcDouble3Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcDouble3Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble3Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble3), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble3Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcDouble3Array_release(fcDouble3Array* self) {
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

fcDouble3 fcDouble3Array_get(fcDouble3Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcDouble3 __tmp_ret = {.s = {0.0}};
  if (!fcDouble3Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcDouble3Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcDouble3Array_set(fcDouble3Array* self, fcInt i, fcDouble3 x) {
  if (!fcDouble3Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcDouble3Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_setArray(fcDouble3Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len % 3 != 0 || len / 3 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcDouble3Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 3], sizeof(fcDouble) * 3))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble3Array_setCopy(fcDouble3Array* self, const fcDouble3Array* array) {
  if (!fcDouble3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcDouble3Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcDouble3);

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

fcError fcDouble3Array_setBuffer(fcDouble3Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcDouble3) != 0 || len / sizeof(fcDouble3) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcDouble3Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcDouble3Array_syncToHost(fcDouble3Array* self) {
  if (!fcDouble3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcDouble3), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcDouble3Array_syncToDevice(fcDouble3Array* self) {
  if (!fcDouble3Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcDouble3Array_valid(const fcDouble3Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcDouble4Array
//

FC_JAVA_INSTANCE_HANDLERS(fcDouble4Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcDouble4Array* self = (fcDouble4Array*) nativePtr;
  jint err = fcDouble4Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcDouble4Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcDouble4Array* self = fcDouble4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcDouble4Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_initNative___3D(JNIEnv* env, jobject obj, jdoubleArray v) {
  // Allocate instance
  fcDouble4Array* self = fcDouble4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_initNative__[D:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble4Array_initNative__[D:v", FC_VOID_EXPR);

  jint err = fcDouble4Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double4Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcDouble4Array* self = fcDouble4Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double4Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcDouble4Array* __tmp_array = fcDouble4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_getJava:array", FC_VOID_EXPR);

  jint err = fcDouble4Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_releaseNative(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcDouble4Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_release", FC_VOID_EXPR);

  fcDouble4Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcDouble4Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_releaseRef", FC_VOID_EXPR);

  fcDouble4Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", NULL);

  jint err;
  fcDouble4 __tmp_ret = fcDouble4Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_get", NULL);

  return fcDouble4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_set__ILes_ull_pcg_hpc_fancier_vector_Double4_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_set__ILes_ull_pcg_hpc_fancier_vector_fcDouble4;:x", FC_VOID_EXPR);

  jint err;
  fcDouble4 __tmp_x = fcDouble4_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4_unwrap", FC_VOID_EXPR);

  err = fcDouble4Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_length(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", 0L);

  if (!fcDouble4Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcDouble4Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jdoubleArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_getArray(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_syncToHost", NULL);

  // Create Java array and populate it
  jdoubleArray __tmp_ret = FC_JNI_CALL(env, NewDoubleArray, self->len * 4);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcDouble4Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jdouble* __tmp_elems = FC_JNI_CALL(env, GetDoubleArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble4Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 4], self->c[i].s, sizeof(fcDouble) * 4)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseDoubleArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_setArray(JNIEnv* env, jobject obj, jdoubleArray v) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble4Array_setArray:v", FC_VOID_EXPR);

  jint err = fcDouble4Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcDouble4Array* __tmp_array = fcDouble4Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble4Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcDouble4Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcDouble4));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble4Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble4Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcDouble4Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_syncToHost(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble4Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double4Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcDouble4Array* self = fcDouble4Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble4Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble4Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble4Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcDouble4Array_createRef(fcDouble4Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_releaseRef(fcDouble4Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcDouble4Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_init(fcDouble4Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_initSize(fcDouble4Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcDouble4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble4), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_initArray(fcDouble4Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 4 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble4Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 4;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble4), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble4Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_initCopy(fcDouble4Array* self, const fcDouble4Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcDouble4Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble4Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble4), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble4Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcDouble4Array_release(fcDouble4Array* self) {
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

fcDouble4 fcDouble4Array_get(fcDouble4Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcDouble4 __tmp_ret = {.s = {0.0}};
  if (!fcDouble4Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcDouble4Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcDouble4Array_set(fcDouble4Array* self, fcInt i, fcDouble4 x) {
  if (!fcDouble4Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcDouble4Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_setArray(fcDouble4Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len % 4 != 0 || len / 4 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcDouble4Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 4], sizeof(fcDouble) * 4))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble4Array_setCopy(fcDouble4Array* self, const fcDouble4Array* array) {
  if (!fcDouble4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcDouble4Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcDouble4);

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

fcError fcDouble4Array_setBuffer(fcDouble4Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcDouble4) != 0 || len / sizeof(fcDouble4) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcDouble4Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcDouble4Array_syncToHost(fcDouble4Array* self) {
  if (!fcDouble4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcDouble4), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcDouble4Array_syncToDevice(fcDouble4Array* self) {
  if (!fcDouble4Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcDouble4Array_valid(const fcDouble4Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

//
// fcDouble8Array
//

FC_JAVA_INSTANCE_HANDLERS(fcDouble8Array);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_initNative__J(JNIEnv* env, jobject obj, jlong nativePtr) {
  // Create reference
  fcDouble8Array* self = (fcDouble8Array*) nativePtr;
  jint err = fcDouble8Array_createRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_createRef", FC_VOID_EXPR);

  // Store native pointer on the Java object
  fcDouble8Array_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_initNative__I(JNIEnv* env, jobject obj, jint n) {
  // Allocate instance
  fcDouble8Array* self = fcDouble8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_allocJava", FC_VOID_EXPR);

  // Initialize array
  jint err = fcDouble8Array_initSize(self, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_initNative___3D(JNIEnv* env, jobject obj, jdoubleArray v) {
  // Allocate instance
  fcDouble8Array* self = fcDouble8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_initNative__[D:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble8Array_initNative__[D:v", FC_VOID_EXPR);

  jint err = fcDouble8Array_initArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double8Array_2(JNIEnv* env, jobject obj, jobject array) {
  // Allocate instance
  fcDouble8Array* self = fcDouble8Array_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_initNative__Les_ull_pcg_hpc_fancier_vector_array_Double8Array;:array", FC_VOID_EXPR);

  // Initialize array
  fcDouble8Array* __tmp_array = fcDouble8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_getJava:array", FC_VOID_EXPR);

  jint err = fcDouble8Array_initCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_releaseNative(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcDouble8Array_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_release", FC_VOID_EXPR);

  fcDouble8Array_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_releaseNativeRef(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcDouble8Array_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_releaseRef", FC_VOID_EXPR);

  fcDouble8Array_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_get__I(JNIEnv* env, jobject obj, jint i) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", NULL);

  jint err;
  fcDouble8 __tmp_ret = fcDouble8Array_get(self, i, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_get", NULL);

  return fcDouble8_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_set__ILes_ull_pcg_hpc_fancier_vector_Double8_2(JNIEnv* env, jobject obj, jint i, jobject x) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_set__ILes_ull_pcg_hpc_fancier_vector_fcDouble8;:x", FC_VOID_EXPR);

  jint err;
  fcDouble8 __tmp_x = fcDouble8_unwrap(env, x, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8_unwrap", FC_VOID_EXPR);

  err = fcDouble8Array_set(self, i, __tmp_x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_set", FC_VOID_EXPR);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_length(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", 0L);

  if (!fcDouble8Array_valid(self))
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_INVALID_STATE, "fcDouble8Array_length", 0L);

  return (jlong) self->len;
}

JNIEXPORT jdoubleArray JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_getArray(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_syncToHost", NULL);

  // Create Java array and populate it
  jdoubleArray __tmp_ret = FC_JNI_CALL(env, NewDoubleArray, self->len * 8);
  FC_EXCEPTION_HANDLE_PENDING(env, !__tmp_ret, "fcDouble8Array_getArray", NULL);

  // Cannot use JNI's SetArrayRegion directly because of the memory alignment of vector primitives
  jdouble* __tmp_elems = FC_JNI_CALL(env, GetDoubleArrayElements, __tmp_ret, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble8Array_getArray", NULL);

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&__tmp_elems[i * 8], self->c[i].s, sizeof(fcDouble) * 8)) {
      err = FC_EXCEPTION_FAILED_COPY;
      break;
    }
  }

  FC_JNI_CALL(env, ReleaseDoubleArrayElements, __tmp_ret, __tmp_elems, 0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_getArray", NULL);

  return __tmp_ret;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_setArray(JNIEnv* env, jobject obj, jdoubleArray v) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_setArray:v", FC_VOID_EXPR);

  // Initialize array
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, v);
  jdouble* __tmp_elems_v = FC_JNI_CALL(env, GetDoubleArrayElements, v, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble8Array_setArray:v", FC_VOID_EXPR);

  jint err = fcDouble8Array_setArray(self, __tmp_len, __tmp_elems_v);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseDoubleArrayElements, v, __tmp_elems_v, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_initArray", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_setCopy(JNIEnv* env, jobject obj, jobject array) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_setCopy:array", FC_VOID_EXPR);

  // Get array elements and length
  fcDouble8Array* __tmp_array = fcDouble8Array_getJava(env, array);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_array, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble8Array_setCopy:array", FC_VOID_EXPR);

  jint err = fcDouble8Array_setCopy(self, __tmp_array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_setCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_getBufferImpl(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", NULL);

  // Ensure native array is synced
  jint err = fcDouble8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_syncToHost", NULL);

  // Create and return direct byte buffer pointing to the native data
  return FC_JNI_CALL(env, NewDirectByteBuffer, self->c, self->len * sizeof(fcDouble8));
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_setBuffer(JNIEnv* env, jobject obj, jobject v) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, v, FC_EXCEPTION_BAD_PARAMETER, "fcDouble8Array_setBuffer:v", FC_VOID_EXPR);

  // Get buffer size and pointer
  jlong __tmp_len = FC_JNI_CALL(env, GetDirectBufferCapacity, v);
  void* __tmp_elems_v = FC_JNI_CALL(env, GetDirectBufferAddress, v);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_v, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "fcDouble8Array_setBuffer:v", FC_VOID_EXPR);

  jint err = fcDouble8Array_setBuffer(self, __tmp_len, __tmp_elems_v);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_setBuffer", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_syncToHost(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble8Array_syncToHost(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_syncToHost", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_vector_array_Double8Array_syncToDevice(JNIEnv* env, jobject obj) {
  fcDouble8Array* self = fcDouble8Array_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcDouble8Array_getJava", FC_VOID_EXPR);

  jint err = fcDouble8Array_syncToDevice(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDouble8Array_syncToDevice", FC_VOID_EXPR);
}

//
// Native Interface Implementation
//

fcError fcDouble8Array_createRef(fcDouble8Array* array) {
  if (array == NULL || array->location == FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_releaseRef(fcDouble8Array* array) {
  if (array == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (array->ref_count <= 1)
    return fcDouble8Array_release(array);

  --array->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_init(fcDouble8Array* self) {
  if (self->location != FC_ARRAY_LOCATION_NONE)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_initSize(fcDouble8Array* self, fcInt n) {
  fcError err;

  // Check parameters
  if (n <= 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  err = fcDouble8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = n;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble8), NULL, &err);
  if (err) return err;

  // Update location
  self->location = FC_ARRAY_LOCATION_OPENCL;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_initArray(fcDouble8Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len <= 0 || len % 8 != 0)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble8Array_init(self);
  if (err) return err;

  // Initialize number of elements according to vector length
  self->len = len / 8;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble8), NULL, &err);
  if (err) return err;

  // Initialize array
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble8Array_setArray(self, len, v);

  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_initCopy(fcDouble8Array* self, const fcDouble8Array* array) {
  fcError err;

  // Check parameters
  if (array == NULL || !fcDouble8Array_valid(array))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcDouble8Array_init(self);
  if (err) return err;

  // Initialize length
  self->len = array->len;

  // Allocate array
  self->ocl = clCreateBuffer(fcOpenCL_rt.context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, self->len * sizeof(fcDouble8), NULL, &err);
  if (err) return err;

  // Copy array data
  self->location = FC_ARRAY_LOCATION_OPENCL;
  err = fcDouble8Array_setCopy(self, array);
  if (err) {
    self->location = FC_ARRAY_LOCATION_NONE;
    clReleaseMemObject(self->ocl);
    self->ocl = NULL;
  }

  return err;
}

fcError fcDouble8Array_release(fcDouble8Array* self) {
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

fcDouble8 fcDouble8Array_get(fcDouble8Array* self, fcInt i, fcError* err) {
  fcError __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcDouble8 __tmp_ret = {.s = {0.0}};
  if (!fcDouble8Array_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (i < 0 || i >= self->len) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  // Set location to native in order to access the array data
  *err = fcDouble8Array_syncToHost(self);
  if (*err) return __tmp_ret;

  return self->c[i];
}

fcError fcDouble8Array_set(fcDouble8Array* self, fcInt i, fcDouble8 x) {
  if (!fcDouble8Array_valid(self)) return FC_EXCEPTION_INVALID_STATE;
  if (i < 0 || i >= self->len) return FC_EXCEPTION_BAD_PARAMETER;

  // Set location to native in order to access the array data
  fcError err = fcDouble8Array_syncToHost(self);
  if (err) return err;

  self->c[i] = x;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_setArray(fcDouble8Array* self, fcInt len, const fcDouble* v) {
  fcError err;

  // Check parameters
  if (len % 8 != 0 || len / 8 != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  err = fcDouble8Array_syncToHost(self);
  if (err) return err;

  for (fcLong i = 0; i < self->len; ++i) {
    if (!memcpy(&self->c[i].s, &v[i * 8], sizeof(fcDouble) * 8))
      return FC_EXCEPTION_FAILED_COPY;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcDouble8Array_setCopy(fcDouble8Array* self, const fcDouble8Array* array) {
  if (!fcDouble8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (array == NULL || !fcDouble8Array_valid(array) || self->len != array->len)
    return FC_EXCEPTION_BAD_PARAMETER;

  // Copy array data
  fcError err;
  fcLong size = self->len * sizeof(fcDouble8);

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

fcError fcDouble8Array_setBuffer(fcDouble8Array* self, fcLong len, const void* v) {
  // Check parameters
  if (len % sizeof(fcDouble8) != 0 || len / sizeof(fcDouble8) != self->len)
    return FC_EXCEPTION_ARRAY_BAD_LENGTH;

  if (v == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  // TODO If not unified memory, don't sync and just set native data and update location
  // Initialize array
  // Map to host, and write data considering alignment
  fcError err = fcDouble8Array_syncToHost(self);
  if (err) return err;

  return memcpy(self->c, v, len)? FC_EXCEPTION_SUCCESS : FC_EXCEPTION_FAILED_COPY;
}

fcError fcDouble8Array_syncToHost(fcDouble8Array* self) {
  if (!fcDouble8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_OPENCL)
    self->c = clEnqueueMapBuffer(fcOpenCL_rt.queue, self->ocl, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, self->len * sizeof(fcDouble8), 0, NULL, NULL, &err);

  if (!err)
    self->location = FC_ARRAY_LOCATION_NATIVE;

  return err;
}

fcError fcDouble8Array_syncToDevice(fcDouble8Array* self) {
  if (!fcDouble8Array_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  fcError err = FC_EXCEPTION_SUCCESS;

  if (self->location == FC_ARRAY_LOCATION_NATIVE)
    err = clEnqueueUnmapMemObject(fcOpenCL_rt.queue, self->ocl, self->c, 0, NULL, NULL);

  if (!err)
    self->location = FC_ARRAY_LOCATION_OPENCL;

  return FC_EXCEPTION_SUCCESS;
}

fcBool fcDouble8Array_valid(const fcDouble8Array* self) {
  return self->len > 0 &&
    ((self->location == FC_ARRAY_LOCATION_NATIVE && self->c != NULL) ||
     (self->location == FC_ARRAY_LOCATION_OPENCL && self->ocl != NULL));
}

