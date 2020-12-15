#include <fancier/vector.h>

#include <fancier/exception.h>
#include <fancier/math.h>

#include <fancier/internal/snippets.inc>


#define INIT_FIELD(_env, _result, _cls, _field, _signature, _func, _ret)  if (!_result) {    _result = FC_JNI_CALL(_env, GetFieldID, _cls, #_field, _signature);    if (!_result || FC_JNI_CALL(_env, ExceptionCheck)) {      fcException_throwWrappedNative(_env, __FILE__, __LINE__, _func, FC_JNI_CALL(_env, ExceptionOccurred));      *err = _ret;      return result;    }  } else ((void) 0)


//
// Global Java References
//

jclass fcByte2_class = NULL;
jmethodID fcByte2_constructor = NULL;
jclass fcByte3_class = NULL;
jmethodID fcByte3_constructor = NULL;
jclass fcByte4_class = NULL;
jmethodID fcByte4_constructor = NULL;
jclass fcByte8_class = NULL;
jmethodID fcByte8_constructor = NULL;
jclass fcShort2_class = NULL;
jmethodID fcShort2_constructor = NULL;
jclass fcShort3_class = NULL;
jmethodID fcShort3_constructor = NULL;
jclass fcShort4_class = NULL;
jmethodID fcShort4_constructor = NULL;
jclass fcShort8_class = NULL;
jmethodID fcShort8_constructor = NULL;
jclass fcInt2_class = NULL;
jmethodID fcInt2_constructor = NULL;
jclass fcInt3_class = NULL;
jmethodID fcInt3_constructor = NULL;
jclass fcInt4_class = NULL;
jmethodID fcInt4_constructor = NULL;
jclass fcInt8_class = NULL;
jmethodID fcInt8_constructor = NULL;
jclass fcLong2_class = NULL;
jmethodID fcLong2_constructor = NULL;
jclass fcLong3_class = NULL;
jmethodID fcLong3_constructor = NULL;
jclass fcLong4_class = NULL;
jmethodID fcLong4_constructor = NULL;
jclass fcLong8_class = NULL;
jmethodID fcLong8_constructor = NULL;
jclass fcFloat2_class = NULL;
jmethodID fcFloat2_constructor = NULL;
jclass fcFloat3_class = NULL;
jmethodID fcFloat3_constructor = NULL;
jclass fcFloat4_class = NULL;
jmethodID fcFloat4_constructor = NULL;
jclass fcFloat8_class = NULL;
jmethodID fcFloat8_constructor = NULL;
jclass fcDouble2_class = NULL;
jmethodID fcDouble2_constructor = NULL;
jclass fcDouble3_class = NULL;
jmethodID fcDouble3_constructor = NULL;
jclass fcDouble4_class = NULL;
jmethodID fcDouble4_constructor = NULL;
jclass fcDouble8_class = NULL;
jmethodID fcDouble8_constructor = NULL;

//
// Global Java Initialization / Destruction
//

jint fcVector_initJNI(JNIEnv* env) {
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Byte2", fcByte2_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte2_constructor, fcByte2_class, "BB",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Byte3", fcByte3_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte3_constructor, fcByte3_class, "BBB",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Byte4", fcByte4_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte4_constructor, fcByte4_class, "BBBB",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Byte8", fcByte8_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcByte8_constructor, fcByte8_class, "BBBBBBBB",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Short2", fcShort2_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort2_constructor, fcShort2_class, "SS",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Short3", fcShort3_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort3_constructor, fcShort3_class, "SSS",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Short4", fcShort4_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort4_constructor, fcShort4_class, "SSSS",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Short8", fcShort8_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcShort8_constructor, fcShort8_class, "SSSSSSSS",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Int2", fcInt2_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt2_constructor, fcInt2_class, "II",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Int3", fcInt3_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt3_constructor, fcInt3_class, "III",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Int4", fcInt4_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt4_constructor, fcInt4_class, "IIII",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Int8", fcInt8_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcInt8_constructor, fcInt8_class, "IIIIIIII",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Long2", fcLong2_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong2_constructor, fcLong2_class, "JJ",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Long3", fcLong3_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong3_constructor, fcLong3_class, "JJJ",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Long4", fcLong4_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong4_constructor, fcLong4_class, "JJJJ",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Long8", fcLong8_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcLong8_constructor, fcLong8_class, "JJJJJJJJ",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Float2", fcFloat2_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat2_constructor, fcFloat2_class, "FF",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Float3", fcFloat3_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat3_constructor, fcFloat3_class, "FFF",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Float4", fcFloat4_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat4_constructor, fcFloat4_class, "FFFF",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Float8", fcFloat8_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcFloat8_constructor, fcFloat8_class, "FFFFFFFF",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Double2", fcDouble2_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble2_constructor, fcDouble2_class, "DD",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Double3", fcDouble3_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble3_constructor, fcDouble3_class, "DDD",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Double4", fcDouble4_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble4_constructor, fcDouble4_class, "DDDD",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/Double8", fcDouble8_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcDouble8_constructor, fcDouble8_class, "DDDDDDDD",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  return FC_EXCEPTION_SUCCESS;
}

void fcVector_releaseJNI(JNIEnv* env) {
  FC_FREE_CLASS_REF(env, fcByte2_class);
  fcByte2_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcByte3_class);
  fcByte3_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcByte4_class);
  fcByte4_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcByte8_class);
  fcByte8_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcShort2_class);
  fcShort2_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShort3_class);
  fcShort3_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShort4_class);
  fcShort4_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcShort8_class);
  fcShort8_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcInt2_class);
  fcInt2_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcInt3_class);
  fcInt3_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcInt4_class);
  fcInt4_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcInt8_class);
  fcInt8_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcLong2_class);
  fcLong2_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLong3_class);
  fcLong3_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLong4_class);
  fcLong4_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcLong8_class);
  fcLong8_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcFloat2_class);
  fcFloat2_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloat3_class);
  fcFloat3_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloat4_class);
  fcFloat4_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcFloat8_class);
  fcFloat8_constructor = NULL;

  FC_FREE_CLASS_REF(env, fcDouble2_class);
  fcDouble2_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDouble3_class);
  fcDouble3_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDouble4_class);
  fcDouble4_constructor = NULL;
  FC_FREE_CLASS_REF(env, fcDouble8_class);
  fcDouble8_constructor = NULL;

}

//
// Java Interface
//

//
// fcByte2
//

jobject fcByte2_wrap(JNIEnv* env, fcByte2 vec) {
  return FC_JNI_CALL(env, NewObject, fcByte2_class, fcByte2_constructor, vec.x, vec.y);
}

fcByte2 fcByte2_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcByte2 result = {.s = {'\0'}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcByte2_class, x, "B", "fcByte2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte x = FC_JNI_CALL(env, GetByteField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcByte2_class, y, "B", "fcByte2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte y = FC_JNI_CALL(env, GetByteField, vec, field_y);

  result.x = x;
  result.y = y;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcByte3
//

jobject fcByte3_wrap(JNIEnv* env, fcByte3 vec) {
  return FC_JNI_CALL(env, NewObject, fcByte3_class, fcByte3_constructor, vec.x, vec.y, vec.z);
}

fcByte3 fcByte3_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcByte3 result = {.s = {'\0'}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcByte3_class, x, "B", "fcByte3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte x = FC_JNI_CALL(env, GetByteField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcByte3_class, y, "B", "fcByte3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte y = FC_JNI_CALL(env, GetByteField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcByte3_class, z, "B", "fcByte3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte z = FC_JNI_CALL(env, GetByteField, vec, field_z);

  result.x = x;
  result.y = y;
  result.z = z;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcByte4
//

jobject fcByte4_wrap(JNIEnv* env, fcByte4 vec) {
  return FC_JNI_CALL(env, NewObject, fcByte4_class, fcByte4_constructor, vec.x, vec.y, vec.z, vec.w);
}

fcByte4 fcByte4_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcByte4 result = {.s = {'\0'}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcByte4_class, x, "B", "fcByte4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte x = FC_JNI_CALL(env, GetByteField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcByte4_class, y, "B", "fcByte4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte y = FC_JNI_CALL(env, GetByteField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcByte4_class, z, "B", "fcByte4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte z = FC_JNI_CALL(env, GetByteField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcByte4_class, w, "B", "fcByte4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte w = FC_JNI_CALL(env, GetByteField, vec, field_w);

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcByte8
//

jobject fcByte8_wrap(JNIEnv* env, fcByte8 vec) {
  return FC_JNI_CALL(env, NewObject, fcByte8_class, fcByte8_constructor, vec.x, vec.y, vec.z, vec.w, vec.s4, vec.s5, vec.s6, vec.s7);
}

fcByte8 fcByte8_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcByte8 result = {.s = {'\0'}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcByte8_class, x, "B", "fcByte8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte x = FC_JNI_CALL(env, GetByteField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcByte8_class, y, "B", "fcByte8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte y = FC_JNI_CALL(env, GetByteField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcByte8_class, z, "B", "fcByte8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte z = FC_JNI_CALL(env, GetByteField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcByte8_class, w, "B", "fcByte8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jbyte w = FC_JNI_CALL(env, GetByteField, vec, field_w);

  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fcByte8_class, s, "[B", "fcByte8_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  jbyteArray* s_arr = (jbyteArray*) &s_obj;
  jbyte* s = FC_JNI_CALL(env, GetByteArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s[0];
  result.s5 = s[1];
  result.s6 = s[2];
  result.s7 = s[3];

  FC_JNI_CALL(env, ReleaseByteArrayElements, *s_arr, s, JNI_ABORT);
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcShort2
//

jobject fcShort2_wrap(JNIEnv* env, fcShort2 vec) {
  return FC_JNI_CALL(env, NewObject, fcShort2_class, fcShort2_constructor, vec.x, vec.y);
}

fcShort2 fcShort2_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcShort2 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcShort2_class, x, "S", "fcShort2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort x = FC_JNI_CALL(env, GetShortField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcShort2_class, y, "S", "fcShort2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort y = FC_JNI_CALL(env, GetShortField, vec, field_y);

  result.x = x;
  result.y = y;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcShort3
//

jobject fcShort3_wrap(JNIEnv* env, fcShort3 vec) {
  return FC_JNI_CALL(env, NewObject, fcShort3_class, fcShort3_constructor, vec.x, vec.y, vec.z);
}

fcShort3 fcShort3_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcShort3 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcShort3_class, x, "S", "fcShort3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort x = FC_JNI_CALL(env, GetShortField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcShort3_class, y, "S", "fcShort3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort y = FC_JNI_CALL(env, GetShortField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcShort3_class, z, "S", "fcShort3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort z = FC_JNI_CALL(env, GetShortField, vec, field_z);

  result.x = x;
  result.y = y;
  result.z = z;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcShort4
//

jobject fcShort4_wrap(JNIEnv* env, fcShort4 vec) {
  return FC_JNI_CALL(env, NewObject, fcShort4_class, fcShort4_constructor, vec.x, vec.y, vec.z, vec.w);
}

fcShort4 fcShort4_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcShort4 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcShort4_class, x, "S", "fcShort4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort x = FC_JNI_CALL(env, GetShortField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcShort4_class, y, "S", "fcShort4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort y = FC_JNI_CALL(env, GetShortField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcShort4_class, z, "S", "fcShort4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort z = FC_JNI_CALL(env, GetShortField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcShort4_class, w, "S", "fcShort4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort w = FC_JNI_CALL(env, GetShortField, vec, field_w);

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcShort8
//

jobject fcShort8_wrap(JNIEnv* env, fcShort8 vec) {
  return FC_JNI_CALL(env, NewObject, fcShort8_class, fcShort8_constructor, vec.x, vec.y, vec.z, vec.w, vec.s4, vec.s5, vec.s6, vec.s7);
}

fcShort8 fcShort8_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcShort8 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcShort8_class, x, "S", "fcShort8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort x = FC_JNI_CALL(env, GetShortField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcShort8_class, y, "S", "fcShort8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort y = FC_JNI_CALL(env, GetShortField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcShort8_class, z, "S", "fcShort8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort z = FC_JNI_CALL(env, GetShortField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcShort8_class, w, "S", "fcShort8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jshort w = FC_JNI_CALL(env, GetShortField, vec, field_w);

  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fcShort8_class, s, "[S", "fcShort8_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  jshortArray* s_arr = (jshortArray*) &s_obj;
  jshort* s = FC_JNI_CALL(env, GetShortArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s[0];
  result.s5 = s[1];
  result.s6 = s[2];
  result.s7 = s[3];

  FC_JNI_CALL(env, ReleaseShortArrayElements, *s_arr, s, JNI_ABORT);
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcInt2
//

jobject fcInt2_wrap(JNIEnv* env, fcInt2 vec) {
  return FC_JNI_CALL(env, NewObject, fcInt2_class, fcInt2_constructor, vec.x, vec.y);
}

fcInt2 fcInt2_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcInt2 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcInt2_class, x, "I", "fcInt2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint x = FC_JNI_CALL(env, GetIntField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcInt2_class, y, "I", "fcInt2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint y = FC_JNI_CALL(env, GetIntField, vec, field_y);

  result.x = x;
  result.y = y;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcInt3
//

jobject fcInt3_wrap(JNIEnv* env, fcInt3 vec) {
  return FC_JNI_CALL(env, NewObject, fcInt3_class, fcInt3_constructor, vec.x, vec.y, vec.z);
}

fcInt3 fcInt3_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcInt3 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcInt3_class, x, "I", "fcInt3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint x = FC_JNI_CALL(env, GetIntField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcInt3_class, y, "I", "fcInt3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint y = FC_JNI_CALL(env, GetIntField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcInt3_class, z, "I", "fcInt3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint z = FC_JNI_CALL(env, GetIntField, vec, field_z);

  result.x = x;
  result.y = y;
  result.z = z;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcInt4
//

jobject fcInt4_wrap(JNIEnv* env, fcInt4 vec) {
  return FC_JNI_CALL(env, NewObject, fcInt4_class, fcInt4_constructor, vec.x, vec.y, vec.z, vec.w);
}

fcInt4 fcInt4_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcInt4 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcInt4_class, x, "I", "fcInt4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint x = FC_JNI_CALL(env, GetIntField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcInt4_class, y, "I", "fcInt4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint y = FC_JNI_CALL(env, GetIntField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcInt4_class, z, "I", "fcInt4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint z = FC_JNI_CALL(env, GetIntField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcInt4_class, w, "I", "fcInt4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint w = FC_JNI_CALL(env, GetIntField, vec, field_w);

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcInt8
//

jobject fcInt8_wrap(JNIEnv* env, fcInt8 vec) {
  return FC_JNI_CALL(env, NewObject, fcInt8_class, fcInt8_constructor, vec.x, vec.y, vec.z, vec.w, vec.s4, vec.s5, vec.s6, vec.s7);
}

fcInt8 fcInt8_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcInt8 result = {.s = {0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcInt8_class, x, "I", "fcInt8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint x = FC_JNI_CALL(env, GetIntField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcInt8_class, y, "I", "fcInt8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint y = FC_JNI_CALL(env, GetIntField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcInt8_class, z, "I", "fcInt8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint z = FC_JNI_CALL(env, GetIntField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcInt8_class, w, "I", "fcInt8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jint w = FC_JNI_CALL(env, GetIntField, vec, field_w);

  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fcInt8_class, s, "[I", "fcInt8_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  jintArray* s_arr = (jintArray*) &s_obj;
  jint* s = FC_JNI_CALL(env, GetIntArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s[0];
  result.s5 = s[1];
  result.s6 = s[2];
  result.s7 = s[3];

  FC_JNI_CALL(env, ReleaseIntArrayElements, *s_arr, s, JNI_ABORT);
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcLong2
//

jobject fcLong2_wrap(JNIEnv* env, fcLong2 vec) {
  return FC_JNI_CALL(env, NewObject, fcLong2_class, fcLong2_constructor, vec.x, vec.y);
}

fcLong2 fcLong2_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcLong2 result = {.s = {0L}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcLong2_class, x, "J", "fcLong2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong x = FC_JNI_CALL(env, GetLongField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcLong2_class, y, "J", "fcLong2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong y = FC_JNI_CALL(env, GetLongField, vec, field_y);

  result.x = x;
  result.y = y;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcLong3
//

jobject fcLong3_wrap(JNIEnv* env, fcLong3 vec) {
  return FC_JNI_CALL(env, NewObject, fcLong3_class, fcLong3_constructor, vec.x, vec.y, vec.z);
}

fcLong3 fcLong3_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcLong3 result = {.s = {0L}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcLong3_class, x, "J", "fcLong3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong x = FC_JNI_CALL(env, GetLongField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcLong3_class, y, "J", "fcLong3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong y = FC_JNI_CALL(env, GetLongField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcLong3_class, z, "J", "fcLong3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong z = FC_JNI_CALL(env, GetLongField, vec, field_z);

  result.x = x;
  result.y = y;
  result.z = z;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcLong4
//

jobject fcLong4_wrap(JNIEnv* env, fcLong4 vec) {
  return FC_JNI_CALL(env, NewObject, fcLong4_class, fcLong4_constructor, vec.x, vec.y, vec.z, vec.w);
}

fcLong4 fcLong4_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcLong4 result = {.s = {0L}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcLong4_class, x, "J", "fcLong4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong x = FC_JNI_CALL(env, GetLongField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcLong4_class, y, "J", "fcLong4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong y = FC_JNI_CALL(env, GetLongField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcLong4_class, z, "J", "fcLong4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong z = FC_JNI_CALL(env, GetLongField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcLong4_class, w, "J", "fcLong4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong w = FC_JNI_CALL(env, GetLongField, vec, field_w);

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcLong8
//

jobject fcLong8_wrap(JNIEnv* env, fcLong8 vec) {
  return FC_JNI_CALL(env, NewObject, fcLong8_class, fcLong8_constructor, vec.x, vec.y, vec.z, vec.w, vec.s4, vec.s5, vec.s6, vec.s7);
}

fcLong8 fcLong8_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcLong8 result = {.s = {0L}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcLong8_class, x, "J", "fcLong8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong x = FC_JNI_CALL(env, GetLongField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcLong8_class, y, "J", "fcLong8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong y = FC_JNI_CALL(env, GetLongField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcLong8_class, z, "J", "fcLong8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong z = FC_JNI_CALL(env, GetLongField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcLong8_class, w, "J", "fcLong8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jlong w = FC_JNI_CALL(env, GetLongField, vec, field_w);

  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fcLong8_class, s, "[J", "fcLong8_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  jlongArray* s_arr = (jlongArray*) &s_obj;
  jlong* s = FC_JNI_CALL(env, GetLongArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s[0];
  result.s5 = s[1];
  result.s6 = s[2];
  result.s7 = s[3];

  FC_JNI_CALL(env, ReleaseLongArrayElements, *s_arr, s, JNI_ABORT);
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcFloat2
//

jobject fcFloat2_wrap(JNIEnv* env, fcFloat2 vec) {
  return FC_JNI_CALL(env, NewObject, fcFloat2_class, fcFloat2_constructor, vec.x, vec.y);
}

fcFloat2 fcFloat2_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcFloat2 result = {.s = {0.0f}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcFloat2_class, x, "F", "fcFloat2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat x = FC_JNI_CALL(env, GetFloatField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcFloat2_class, y, "F", "fcFloat2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat y = FC_JNI_CALL(env, GetFloatField, vec, field_y);

  result.x = x;
  result.y = y;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcFloat3
//

jobject fcFloat3_wrap(JNIEnv* env, fcFloat3 vec) {
  return FC_JNI_CALL(env, NewObject, fcFloat3_class, fcFloat3_constructor, vec.x, vec.y, vec.z);
}

fcFloat3 fcFloat3_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcFloat3 result = {.s = {0.0f}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcFloat3_class, x, "F", "fcFloat3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat x = FC_JNI_CALL(env, GetFloatField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcFloat3_class, y, "F", "fcFloat3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat y = FC_JNI_CALL(env, GetFloatField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcFloat3_class, z, "F", "fcFloat3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat z = FC_JNI_CALL(env, GetFloatField, vec, field_z);

  result.x = x;
  result.y = y;
  result.z = z;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcFloat4
//

jobject fcFloat4_wrap(JNIEnv* env, fcFloat4 vec) {
  return FC_JNI_CALL(env, NewObject, fcFloat4_class, fcFloat4_constructor, vec.x, vec.y, vec.z, vec.w);
}

fcFloat4 fcFloat4_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcFloat4 result = {.s = {0.0f}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcFloat4_class, x, "F", "fcFloat4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat x = FC_JNI_CALL(env, GetFloatField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcFloat4_class, y, "F", "fcFloat4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat y = FC_JNI_CALL(env, GetFloatField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcFloat4_class, z, "F", "fcFloat4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat z = FC_JNI_CALL(env, GetFloatField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcFloat4_class, w, "F", "fcFloat4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat w = FC_JNI_CALL(env, GetFloatField, vec, field_w);

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcFloat8
//

jobject fcFloat8_wrap(JNIEnv* env, fcFloat8 vec) {
  return FC_JNI_CALL(env, NewObject, fcFloat8_class, fcFloat8_constructor, vec.x, vec.y, vec.z, vec.w, vec.s4, vec.s5, vec.s6, vec.s7);
}

fcFloat8 fcFloat8_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcFloat8 result = {.s = {0.0f}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcFloat8_class, x, "F", "fcFloat8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat x = FC_JNI_CALL(env, GetFloatField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcFloat8_class, y, "F", "fcFloat8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat y = FC_JNI_CALL(env, GetFloatField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcFloat8_class, z, "F", "fcFloat8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat z = FC_JNI_CALL(env, GetFloatField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcFloat8_class, w, "F", "fcFloat8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jfloat w = FC_JNI_CALL(env, GetFloatField, vec, field_w);

  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fcFloat8_class, s, "[F", "fcFloat8_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  jfloatArray* s_arr = (jfloatArray*) &s_obj;
  jfloat* s = FC_JNI_CALL(env, GetFloatArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s[0];
  result.s5 = s[1];
  result.s6 = s[2];
  result.s7 = s[3];

  FC_JNI_CALL(env, ReleaseFloatArrayElements, *s_arr, s, JNI_ABORT);
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcDouble2
//

jobject fcDouble2_wrap(JNIEnv* env, fcDouble2 vec) {
  return FC_JNI_CALL(env, NewObject, fcDouble2_class, fcDouble2_constructor, vec.x, vec.y);
}

fcDouble2 fcDouble2_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcDouble2 result = {.s = {0.0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcDouble2_class, x, "D", "fcDouble2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble x = FC_JNI_CALL(env, GetDoubleField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcDouble2_class, y, "D", "fcDouble2_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble y = FC_JNI_CALL(env, GetDoubleField, vec, field_y);

  result.x = x;
  result.y = y;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcDouble3
//

jobject fcDouble3_wrap(JNIEnv* env, fcDouble3 vec) {
  return FC_JNI_CALL(env, NewObject, fcDouble3_class, fcDouble3_constructor, vec.x, vec.y, vec.z);
}

fcDouble3 fcDouble3_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcDouble3 result = {.s = {0.0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcDouble3_class, x, "D", "fcDouble3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble x = FC_JNI_CALL(env, GetDoubleField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcDouble3_class, y, "D", "fcDouble3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble y = FC_JNI_CALL(env, GetDoubleField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcDouble3_class, z, "D", "fcDouble3_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble z = FC_JNI_CALL(env, GetDoubleField, vec, field_z);

  result.x = x;
  result.y = y;
  result.z = z;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcDouble4
//

jobject fcDouble4_wrap(JNIEnv* env, fcDouble4 vec) {
  return FC_JNI_CALL(env, NewObject, fcDouble4_class, fcDouble4_constructor, vec.x, vec.y, vec.z, vec.w);
}

fcDouble4 fcDouble4_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcDouble4 result = {.s = {0.0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcDouble4_class, x, "D", "fcDouble4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble x = FC_JNI_CALL(env, GetDoubleField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcDouble4_class, y, "D", "fcDouble4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble y = FC_JNI_CALL(env, GetDoubleField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcDouble4_class, z, "D", "fcDouble4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble z = FC_JNI_CALL(env, GetDoubleField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcDouble4_class, w, "D", "fcDouble4_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble w = FC_JNI_CALL(env, GetDoubleField, vec, field_w);

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;

  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

//
// fcDouble8
//

jobject fcDouble8_wrap(JNIEnv* env, fcDouble8 vec) {
  return FC_JNI_CALL(env, NewObject, fcDouble8_class, fcDouble8_constructor, vec.x, vec.y, vec.z, vec.w, vec.s4, vec.s5, vec.s6, vec.s7);
}

fcDouble8 fcDouble8_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fcDouble8 result = {.s = {0.0}};

  static jfieldID field_x = NULL;
  INIT_FIELD(env, field_x, fcDouble8_class, x, "D", "fcDouble8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble x = FC_JNI_CALL(env, GetDoubleField, vec, field_x);

  static jfieldID field_y = NULL;
  INIT_FIELD(env, field_y, fcDouble8_class, y, "D", "fcDouble8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble y = FC_JNI_CALL(env, GetDoubleField, vec, field_y);

  static jfieldID field_z = NULL;
  INIT_FIELD(env, field_z, fcDouble8_class, z, "D", "fcDouble8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble z = FC_JNI_CALL(env, GetDoubleField, vec, field_z);

  static jfieldID field_w = NULL;
  INIT_FIELD(env, field_w, fcDouble8_class, w, "D", "fcDouble8_unwrap", FC_EXCEPTION_INVALID_STATE);
  jdouble w = FC_JNI_CALL(env, GetDoubleField, vec, field_w);

  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fcDouble8_class, s, "[D", "fcDouble8_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  jdoubleArray* s_arr = (jdoubleArray*) &s_obj;
  jdouble* s = FC_JNI_CALL(env, GetDoubleArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s[0];
  result.s5 = s[1];
  result.s6 = s[2];
  result.s7 = s[3];

  FC_JNI_CALL(env, ReleaseDoubleArrayElements, *s_arr, s, JNI_ABORT);
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}


//
// Native Interface
//

//
// fcByte2
//

fcByte2 fcByte2_create() {
  fcByte2 result = {.s = {'\0'}};
  return result;
}

fcByte2 fcByte2_create1(cl_byte v) {
  return fcByte2_create11(v, v);
}

fcByte2 fcByte2_create11(cl_byte x, cl_byte y) {
  fcByte2 result;
  result.x = x;
  result.y = y;
  return result;
}

fcByte2 fcByte2_create2(fcByte2 vec1) {
  return fcByte2_create11(vec1.x, vec1.y);
}

fcShort2 fcByte2_convertShort2(fcByte2 a) {
  return fcShort2_create11((cl_short) a.x, (cl_short) a.y);
}

fcInt2 fcByte2_convertInt2(fcByte2 a) {
  return fcInt2_create11((cl_int) a.x, (cl_int) a.y);
}

fcLong2 fcByte2_convertLong2(fcByte2 a) {
  return fcLong2_create11((cl_long) a.x, (cl_long) a.y);
}

fcFloat2 fcByte2_convertFloat2(fcByte2 a) {
  return fcFloat2_create11((cl_float) a.x, (cl_float) a.y);
}

fcDouble2 fcByte2_convertDouble2(fcByte2 a) {
  return fcDouble2_create11((cl_double) a.x, (cl_double) a.y);
}

fcInt2 fcByte2_isEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
}

fcInt2 fcByte2_isNotEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
}

fcInt2 fcByte2_isGreater(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
}

fcInt2 fcByte2_isGreaterEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
}

fcInt2 fcByte2_isLess(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
}

fcInt2 fcByte2_isLessEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
}

fcByte2 fcByte2_select(fcByte2 a, fcByte2 b, fcInt2 c) {
  return fcByte2_create11(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y));
}

cl_int fcByte2_any(fcByte2 a) {
  return a.x != '\0' || a.y != '\0';
}

cl_int fcByte2_all(fcByte2 a) {
  return !(a.x == '\0' || a.y == '\0');
}

fcByte2 fcByte2_add(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x + b.x, a.y + b.y);
}

fcByte2 fcByte2_sub(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x - b.x, a.y - b.y);
}

fcByte2 fcByte2_mul(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x * b.x, a.y * b.y);
}

fcDouble2 fcByte2_muld(fcByte2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x * b.x), (cl_double)(a.y * b.y));
}

fcFloat2 fcByte2_mulf(fcByte2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x * b.x), (cl_float)(a.y * b.y));
}

fcByte2 fcByte2_mulk(fcByte2 a, cl_byte k) {
  return fcByte2_create11(a.x * k, a.y * k);
}

fcDouble2 fcByte2_mulkd(fcByte2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x * k), (cl_double)(a.y * k));
}

fcFloat2 fcByte2_mulkf(fcByte2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x * k), (cl_float)(a.y * k));
}

fcByte2 fcByte2_div(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x / b.x, a.y / b.y);
}

fcDouble2 fcByte2_divd(fcByte2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x / b.x), (cl_double)(a.y / b.y));
}

fcFloat2 fcByte2_divf(fcByte2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x / b.x), (cl_float)(a.y / b.y));
}

fcByte2 fcByte2_divk(fcByte2 a, cl_byte k) {
  return fcByte2_create11(a.x / k, a.y / k);
}

fcDouble2 fcByte2_divkd(fcByte2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x / k), (cl_double)(a.y / k));
}

fcFloat2 fcByte2_divkf(fcByte2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x / k), (cl_float)(a.y / k));
}

fcByte2 fcByte2_mod(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x % b.x, a.y % b.y);
}

fcByte2 fcByte2_modk(fcByte2 a, cl_byte k) {
  return fcByte2_create11(a.x % k, a.y % k);
}

fcByte2 fcByte2_bitAnd(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x & b.x, a.y & b.y);
}

fcByte2 fcByte2_bitOr(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x | b.x, a.y | b.y);
}

fcByte2 fcByte2_bitXor(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.x ^ b.x, a.y ^ b.y);
}

fcByte2 fcByte2_bitNot(fcByte2 a) {
  return fcByte2_create11(~a.x, ~a.y);
}

fcByte2 fcByte2_abs(fcByte2 a) {
  return fcByte2_create11(fcMath_abs(a.x), fcMath_abs(a.y));
}

fcByte2 fcByte2_clamp(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y));
}

fcByte2 fcByte2_max(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y));
}

fcByte2 fcByte2_maxMag(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y));
}

fcByte2 fcByte2_min(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y));
}

fcByte2 fcByte2_minMag(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y));
}

fcByte2 fcByte2_mix(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y));
}

fcByte2 fcByte2_clampk(fcByte2 v, cl_byte min, cl_byte max) {
  return fcByte2_create11(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max));
}

fcByte2 fcByte2_maxk(fcByte2 x, cl_byte y) {
  return fcByte2_create11(fcMath_max(x.x, y), fcMath_max(x.y, y));
}

fcByte2 fcByte2_mink(fcByte2 x, cl_byte y) {
  return fcByte2_create11(fcMath_min(x.x, y), fcMath_min(x.y, y));
}

fcByte2 fcByte2_mixk(fcByte2 x, fcByte2 y, cl_byte a) {
  return fcByte2_create11(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a));
}

fcByte2 fcByte2_absDiff(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y));
}

fcByte2 fcByte2_addSat(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_addSatc(a.x, b.x), fcMath_addSatc(a.y, b.y));
}

fcByte2 fcByte2_clz(fcByte2 a) {
  return fcByte2_create11(fcMath_clzc(a.x), fcMath_clzc(a.y));
}

fcByte2 fcByte2_hadd(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_haddc(a.x, b.x), fcMath_haddc(a.y, b.y));
}

fcByte2 fcByte2_madHi(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_madHic(a.x, b.x, c.x), fcMath_madHic(a.y, b.y, c.y));
}

fcByte2 fcByte2_madSat(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_madSatc(a.x, b.x, c.x), fcMath_madSatc(a.y, b.y, c.y));
}

fcByte2 fcByte2_mulHi(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_mulHic(a.x, b.x), fcMath_mulHic(a.y, b.y));
}

fcByte2 fcByte2_rhadd(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_rhaddc(a.x, b.x), fcMath_rhaddc(a.y, b.y));
}

fcByte2 fcByte2_rotate(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_rotatec(a.x, b.x), fcMath_rotatec(a.y, b.y));
}

fcByte2 fcByte2_subSat(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_subSatc(a.x, b.x), fcMath_subSatc(a.y, b.y));
}


//
// fcByte3
//

fcByte3 fcByte3_create() {
  fcByte3 result = {.s = {'\0'}};
  return result;
}

fcByte3 fcByte3_create1(cl_byte v) {
  return fcByte3_create111(v, v, v);
}

fcByte3 fcByte3_create111(cl_byte x, cl_byte y, cl_byte z) {
  fcByte3 result;
  result.x = x;
  result.y = y;
  result.z = z;
  return result;
}

fcByte3 fcByte3_create12(cl_byte x, fcByte2 vec1) {
  return fcByte3_create111(x, vec1.x, vec1.y);
}
fcByte3 fcByte3_create21(fcByte2 vec1, cl_byte z) {
  return fcByte3_create111(vec1.x, vec1.y, z);
}
fcByte3 fcByte3_create3(fcByte3 vec1) {
  return fcByte3_create111(vec1.x, vec1.y, vec1.z);
}

fcShort3 fcByte3_convertShort3(fcByte3 a) {
  return fcShort3_create111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z);
}

fcInt3 fcByte3_convertInt3(fcByte3 a) {
  return fcInt3_create111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z);
}

fcLong3 fcByte3_convertLong3(fcByte3 a) {
  return fcLong3_create111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z);
}

fcFloat3 fcByte3_convertFloat3(fcByte3 a) {
  return fcFloat3_create111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z);
}

fcDouble3 fcByte3_convertDouble3(fcByte3 a) {
  return fcDouble3_create111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z);
}

fcByte2 fcByte3_asByte2(fcByte3 a) {
  return fcByte2_create11(a.x, a.y);
}

fcInt3 fcByte3_isEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
}

fcInt3 fcByte3_isNotEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
}

fcInt3 fcByte3_isGreater(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
}

fcInt3 fcByte3_isGreaterEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
}

fcInt3 fcByte3_isLess(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
}

fcInt3 fcByte3_isLessEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
}

fcByte3 fcByte3_select(fcByte3 a, fcByte3 b, fcInt3 c) {
  return fcByte3_create111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z));
}

cl_int fcByte3_any(fcByte3 a) {
  return a.x != '\0' || a.y != '\0' || a.z != '\0';
}

cl_int fcByte3_all(fcByte3 a) {
  return !(a.x == '\0' || a.y == '\0' || a.z == '\0');
}

fcByte3 fcByte3_add(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x + b.x, a.y + b.y, a.z + b.z);
}

fcByte3 fcByte3_sub(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x - b.x, a.y - b.y, a.z - b.z);
}

fcByte3 fcByte3_mul(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x * b.x, a.y * b.y, a.z * b.z);
}

fcDouble3 fcByte3_muld(fcByte3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z));
}

fcFloat3 fcByte3_mulf(fcByte3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z));
}

fcByte3 fcByte3_mulk(fcByte3 a, cl_byte k) {
  return fcByte3_create111(a.x * k, a.y * k, a.z * k);
}

fcDouble3 fcByte3_mulkd(fcByte3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k));
}

fcFloat3 fcByte3_mulkf(fcByte3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k));
}

fcByte3 fcByte3_div(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x / b.x, a.y / b.y, a.z / b.z);
}

fcDouble3 fcByte3_divd(fcByte3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z));
}

fcFloat3 fcByte3_divf(fcByte3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z));
}

fcByte3 fcByte3_divk(fcByte3 a, cl_byte k) {
  return fcByte3_create111(a.x / k, a.y / k, a.z / k);
}

fcDouble3 fcByte3_divkd(fcByte3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k));
}

fcFloat3 fcByte3_divkf(fcByte3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k));
}

fcByte3 fcByte3_mod(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x % b.x, a.y % b.y, a.z % b.z);
}

fcByte3 fcByte3_modk(fcByte3 a, cl_byte k) {
  return fcByte3_create111(a.x % k, a.y % k, a.z % k);
}

fcByte3 fcByte3_bitAnd(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x & b.x, a.y & b.y, a.z & b.z);
}

fcByte3 fcByte3_bitOr(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x | b.x, a.y | b.y, a.z | b.z);
}

fcByte3 fcByte3_bitXor(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z);
}

fcByte3 fcByte3_bitNot(fcByte3 a) {
  return fcByte3_create111(~a.x, ~a.y, ~a.z);
}

fcByte3 fcByte3_abs(fcByte3 a) {
  return fcByte3_create111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z));
}

fcByte3 fcByte3_clamp(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z));
}

fcByte3 fcByte3_max(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z));
}

fcByte3 fcByte3_maxMag(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z));
}

fcByte3 fcByte3_min(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z));
}

fcByte3 fcByte3_minMag(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z));
}

fcByte3 fcByte3_mix(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z));
}

fcByte3 fcByte3_clampk(fcByte3 v, cl_byte min, cl_byte max) {
  return fcByte3_create111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max));
}

fcByte3 fcByte3_maxk(fcByte3 x, cl_byte y) {
  return fcByte3_create111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y));
}

fcByte3 fcByte3_mink(fcByte3 x, cl_byte y) {
  return fcByte3_create111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y));
}

fcByte3 fcByte3_mixk(fcByte3 x, fcByte3 y, cl_byte a) {
  return fcByte3_create111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a));
}

fcByte3 fcByte3_absDiff(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z));
}

fcByte3 fcByte3_addSat(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_addSatc(a.x, b.x), fcMath_addSatc(a.y, b.y), fcMath_addSatc(a.z, b.z));
}

fcByte3 fcByte3_clz(fcByte3 a) {
  return fcByte3_create111(fcMath_clzc(a.x), fcMath_clzc(a.y), fcMath_clzc(a.z));
}

fcByte3 fcByte3_hadd(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_haddc(a.x, b.x), fcMath_haddc(a.y, b.y), fcMath_haddc(a.z, b.z));
}

fcByte3 fcByte3_madHi(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_madHic(a.x, b.x, c.x), fcMath_madHic(a.y, b.y, c.y), fcMath_madHic(a.z, b.z, c.z));
}

fcByte3 fcByte3_madSat(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_madSatc(a.x, b.x, c.x), fcMath_madSatc(a.y, b.y, c.y), fcMath_madSatc(a.z, b.z, c.z));
}

fcByte3 fcByte3_mulHi(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_mulHic(a.x, b.x), fcMath_mulHic(a.y, b.y), fcMath_mulHic(a.z, b.z));
}

fcByte3 fcByte3_rhadd(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_rhaddc(a.x, b.x), fcMath_rhaddc(a.y, b.y), fcMath_rhaddc(a.z, b.z));
}

fcByte3 fcByte3_rotate(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_rotatec(a.x, b.x), fcMath_rotatec(a.y, b.y), fcMath_rotatec(a.z, b.z));
}

fcByte3 fcByte3_subSat(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_subSatc(a.x, b.x), fcMath_subSatc(a.y, b.y), fcMath_subSatc(a.z, b.z));
}


//
// fcByte4
//

fcByte4 fcByte4_create() {
  fcByte4 result = {.s = {'\0'}};
  return result;
}

fcByte4 fcByte4_create1(cl_byte v) {
  return fcByte4_create1111(v, v, v, v);
}

fcByte4 fcByte4_create1111(cl_byte x, cl_byte y, cl_byte z, cl_byte w) {
  fcByte4 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  return result;
}

fcByte4 fcByte4_create112(cl_byte x, cl_byte y, fcByte2 vec1) {
  return fcByte4_create1111(x, y, vec1.x, vec1.y);
}
fcByte4 fcByte4_create121(cl_byte x, fcByte2 vec1, cl_byte w) {
  return fcByte4_create1111(x, vec1.x, vec1.y, w);
}
fcByte4 fcByte4_create13(cl_byte x, fcByte3 vec1) {
  return fcByte4_create1111(x, vec1.x, vec1.y, vec1.z);
}
fcByte4 fcByte4_create211(fcByte2 vec1, cl_byte z, cl_byte w) {
  return fcByte4_create1111(vec1.x, vec1.y, z, w);
}
fcByte4 fcByte4_create22(fcByte2 vec1, fcByte2 vec2) {
  return fcByte4_create1111(vec1.x, vec1.y, vec2.x, vec2.y);
}
fcByte4 fcByte4_create31(fcByte3 vec1, cl_byte w) {
  return fcByte4_create1111(vec1.x, vec1.y, vec1.z, w);
}
fcByte4 fcByte4_create4(fcByte4 vec1) {
  return fcByte4_create1111(vec1.x, vec1.y, vec1.z, vec1.w);
}

fcByte2 fcByte4_odd(fcByte4 a) {
  return fcByte2_create11(a.y, a.w);
}

fcByte2 fcByte4_even(fcByte4 a) {
  return fcByte2_create11(a.x, a.z);
}

fcShort4 fcByte4_convertShort4(fcByte4 a) {
  return fcShort4_create1111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w);
}

fcInt4 fcByte4_convertInt4(fcByte4 a) {
  return fcInt4_create1111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w);
}

fcLong4 fcByte4_convertLong4(fcByte4 a) {
  return fcLong4_create1111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w);
}

fcFloat4 fcByte4_convertFloat4(fcByte4 a) {
  return fcFloat4_create1111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w);
}

fcDouble4 fcByte4_convertDouble4(fcByte4 a) {
  return fcDouble4_create1111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w);
}

fcByte2 fcByte4_asByte2(fcByte4 a) {
  return fcByte2_create11(a.x, a.y);
}

fcByte3 fcByte4_asByte3(fcByte4 a) {
  return fcByte3_create111(a.x, a.y, a.z);
}

fcInt4 fcByte4_isEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
}

fcInt4 fcByte4_isNotEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
}

fcInt4 fcByte4_isGreater(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
}

fcInt4 fcByte4_isGreaterEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
}

fcInt4 fcByte4_isLess(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
}

fcInt4 fcByte4_isLessEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
}

fcByte4 fcByte4_select(fcByte4 a, fcByte4 b, fcInt4 c) {
  return fcByte4_create1111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w));
}

cl_int fcByte4_any(fcByte4 a) {
  return a.x != '\0' || a.y != '\0' || a.z != '\0' || a.w != '\0';
}

cl_int fcByte4_all(fcByte4 a) {
  return !(a.x == '\0' || a.y == '\0' || a.z == '\0' || a.w == '\0');
}

fcByte4 fcByte4_add(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

fcByte4 fcByte4_sub(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

fcByte4 fcByte4_mul(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

fcDouble4 fcByte4_muld(fcByte4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w));
}

fcFloat4 fcByte4_mulf(fcByte4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w));
}

fcByte4 fcByte4_mulk(fcByte4 a, cl_byte k) {
  return fcByte4_create1111(a.x * k, a.y * k, a.z * k, a.w * k);
}

fcDouble4 fcByte4_mulkd(fcByte4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k));
}

fcFloat4 fcByte4_mulkf(fcByte4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k));
}

fcByte4 fcByte4_div(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

fcDouble4 fcByte4_divd(fcByte4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w));
}

fcFloat4 fcByte4_divf(fcByte4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w));
}

fcByte4 fcByte4_divk(fcByte4 a, cl_byte k) {
  return fcByte4_create1111(a.x / k, a.y / k, a.z / k, a.w / k);
}

fcDouble4 fcByte4_divkd(fcByte4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k));
}

fcFloat4 fcByte4_divkf(fcByte4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k));
}

fcByte4 fcByte4_mod(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
}

fcByte4 fcByte4_modk(fcByte4 a, cl_byte k) {
  return fcByte4_create1111(a.x % k, a.y % k, a.z % k, a.w % k);
}

fcByte4 fcByte4_bitAnd(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
}

fcByte4 fcByte4_bitOr(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
}

fcByte4 fcByte4_bitXor(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
}

fcByte4 fcByte4_bitNot(fcByte4 a) {
  return fcByte4_create1111(~a.x, ~a.y, ~a.z, ~a.w);
}

fcByte4 fcByte4_abs(fcByte4 a) {
  return fcByte4_create1111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w));
}

fcByte4 fcByte4_clamp(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w));
}

fcByte4 fcByte4_max(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w));
}

fcByte4 fcByte4_maxMag(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w));
}

fcByte4 fcByte4_min(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w));
}

fcByte4 fcByte4_minMag(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w));
}

fcByte4 fcByte4_mix(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w));
}

fcByte4 fcByte4_clampk(fcByte4 v, cl_byte min, cl_byte max) {
  return fcByte4_create1111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max));
}

fcByte4 fcByte4_maxk(fcByte4 x, cl_byte y) {
  return fcByte4_create1111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y));
}

fcByte4 fcByte4_mink(fcByte4 x, cl_byte y) {
  return fcByte4_create1111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y));
}

fcByte4 fcByte4_mixk(fcByte4 x, fcByte4 y, cl_byte a) {
  return fcByte4_create1111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a));
}

fcByte4 fcByte4_absDiff(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w));
}

fcByte4 fcByte4_addSat(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_addSatc(a.x, b.x), fcMath_addSatc(a.y, b.y), fcMath_addSatc(a.z, b.z), fcMath_addSatc(a.w, b.w));
}

fcByte4 fcByte4_clz(fcByte4 a) {
  return fcByte4_create1111(fcMath_clzc(a.x), fcMath_clzc(a.y), fcMath_clzc(a.z), fcMath_clzc(a.w));
}

fcByte4 fcByte4_hadd(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_haddc(a.x, b.x), fcMath_haddc(a.y, b.y), fcMath_haddc(a.z, b.z), fcMath_haddc(a.w, b.w));
}

fcByte4 fcByte4_madHi(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_madHic(a.x, b.x, c.x), fcMath_madHic(a.y, b.y, c.y), fcMath_madHic(a.z, b.z, c.z), fcMath_madHic(a.w, b.w, c.w));
}

fcByte4 fcByte4_madSat(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_madSatc(a.x, b.x, c.x), fcMath_madSatc(a.y, b.y, c.y), fcMath_madSatc(a.z, b.z, c.z), fcMath_madSatc(a.w, b.w, c.w));
}

fcByte4 fcByte4_mulHi(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_mulHic(a.x, b.x), fcMath_mulHic(a.y, b.y), fcMath_mulHic(a.z, b.z), fcMath_mulHic(a.w, b.w));
}

fcByte4 fcByte4_rhadd(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_rhaddc(a.x, b.x), fcMath_rhaddc(a.y, b.y), fcMath_rhaddc(a.z, b.z), fcMath_rhaddc(a.w, b.w));
}

fcByte4 fcByte4_rotate(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_rotatec(a.x, b.x), fcMath_rotatec(a.y, b.y), fcMath_rotatec(a.z, b.z), fcMath_rotatec(a.w, b.w));
}

fcByte4 fcByte4_subSat(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_subSatc(a.x, b.x), fcMath_subSatc(a.y, b.y), fcMath_subSatc(a.z, b.z), fcMath_subSatc(a.w, b.w));
}


//
// fcByte8
//

fcByte8 fcByte8_create() {
  fcByte8 result = {.s = {'\0'}};
  return result;
}

fcByte8 fcByte8_create1(cl_byte v) {
  return fcByte8_create11111111(v, v, v, v, v, v, v, v);
}

fcByte8 fcByte8_create11111111(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s4;
  result.s5 = s5;
  result.s6 = s6;
  result.s7 = s7;
  return result;
}

fcByte8 fcByte8_create1111112(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec1) {
  return fcByte8_create11111111(x, y, z, w, s4, s5, vec1.x, vec1.y);
}
fcByte8 fcByte8_create1111121(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec1, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, s7);
}
fcByte8 fcByte8_create111113(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec1) {
  return fcByte8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, vec1.z);
}
fcByte8 fcByte8_create1111211(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, w, vec1.x, vec1.y, s6, s7);
}
fcByte8 fcByte8_create111122(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
}
fcByte8 fcByte8_create111131(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte3 vec1, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, s7);
}
fcByte8 fcByte8_create11114(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte4 vec1) {
  return fcByte8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
}
fcByte8 fcByte8_create1112111(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, s5, s6, s7);
}
fcByte8 fcByte8_create111212(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create111221(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create11123(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte3 vec2) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create111311(cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, s6, s7);
}
fcByte8 fcByte8_create11132(cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
}
fcByte8 fcByte8_create11141(cl_byte x, cl_byte y, cl_byte z, fcByte4 vec1, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s7);
}
fcByte8 fcByte8_create1121111(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, s4, s5, s6, s7);
}
fcByte8 fcByte8_create112112(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, s4, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create112121(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create11213(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create112211(cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s6, s7);
}
fcByte8 fcByte8_create11222(cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcByte8 fcByte8_create11231(cl_byte x, cl_byte y, fcByte2 vec1, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s7);
}
fcByte8 fcByte8_create1124(cl_byte x, cl_byte y, fcByte2 vec1, fcByte4 vec2) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcByte8 fcByte8_create113111(cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, s6, s7);
}
fcByte8 fcByte8_create11312(cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create11321(cl_byte x, cl_byte y, fcByte3 vec1, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create1133(cl_byte x, cl_byte y, fcByte3 vec1, fcByte3 vec2) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create11411(cl_byte x, cl_byte y, fcByte4 vec1, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s6, s7);
}
fcByte8 fcByte8_create1142(cl_byte x, cl_byte y, fcByte4 vec1, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
}
fcByte8 fcByte8_create1211111(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, s4, s5, s6, s7);
}
fcByte8 fcByte8_create121112(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, s4, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create121121(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create12113(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create121211(cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s6, s7);
}
fcByte8 fcByte8_create12122(cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcByte8 fcByte8_create12131(cl_byte x, fcByte2 vec1, cl_byte w, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s7);
}
fcByte8 fcByte8_create1214(cl_byte x, fcByte2 vec1, cl_byte w, fcByte4 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcByte8 fcByte8_create122111(cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, s6, s7);
}
fcByte8 fcByte8_create12212(cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcByte8 fcByte8_create12221(cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcByte8 fcByte8_create1223(cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcByte8 fcByte8_create12311(cl_byte x, fcByte2 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcByte8 fcByte8_create1232(cl_byte x, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcByte8 fcByte8_create1241(cl_byte x, fcByte2 vec1, fcByte4 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcByte8 fcByte8_create131111(cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, s6, s7);
}
fcByte8 fcByte8_create13112(cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create13121(cl_byte x, fcByte3 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create1313(cl_byte x, fcByte3 vec1, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create13211(cl_byte x, fcByte3 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s6, s7);
}
fcByte8 fcByte8_create1322(cl_byte x, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcByte8 fcByte8_create1331(cl_byte x, fcByte3 vec1, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s7);
}
fcByte8 fcByte8_create134(cl_byte x, fcByte3 vec1, fcByte4 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcByte8 fcByte8_create14111(cl_byte x, fcByte4 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, s6, s7);
}
fcByte8 fcByte8_create1412(cl_byte x, fcByte4 vec1, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create1421(cl_byte x, fcByte4 vec1, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create143(cl_byte x, fcByte4 vec1, fcByte3 vec2) {
  return fcByte8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create2111111(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, s4, s5, s6, s7);
}
fcByte8 fcByte8_create211112(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, s4, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create211121(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create21113(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create211211(fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s6, s7);
}
fcByte8 fcByte8_create21122(fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcByte8 fcByte8_create21131(fcByte2 vec1, cl_byte z, cl_byte w, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcByte8 fcByte8_create2114(fcByte2 vec1, cl_byte z, cl_byte w, fcByte4 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcByte8 fcByte8_create212111(fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, s6, s7);
}
fcByte8 fcByte8_create21212(fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcByte8 fcByte8_create21221(fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcByte8 fcByte8_create2123(fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcByte8 fcByte8_create21311(fcByte2 vec1, cl_byte z, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcByte8 fcByte8_create2132(fcByte2 vec1, cl_byte z, fcByte3 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcByte8 fcByte8_create2141(fcByte2 vec1, cl_byte z, fcByte4 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcByte8 fcByte8_create221111(fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, s6, s7);
}
fcByte8 fcByte8_create22112(fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, vec3.x, vec3.y);
}
fcByte8 fcByte8_create22121(fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, s7);
}
fcByte8 fcByte8_create2213(fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, vec3.z);
}
fcByte8 fcByte8_create22211(fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s6, s7);
}
fcByte8 fcByte8_create2222(fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, fcByte2 vec4) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
}
fcByte8 fcByte8_create2231(fcByte2 vec1, fcByte2 vec2, fcByte3 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s7);
}
fcByte8 fcByte8_create224(fcByte2 vec1, fcByte2 vec2, fcByte4 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
}
fcByte8 fcByte8_create23111(fcByte2 vec1, fcByte3 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, s6, s7);
}
fcByte8 fcByte8_create2312(fcByte2 vec1, fcByte3 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, vec3.x, vec3.y);
}
fcByte8 fcByte8_create2321(fcByte2 vec1, fcByte3 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s7);
}
fcByte8 fcByte8_create233(fcByte2 vec1, fcByte3 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
}
fcByte8 fcByte8_create2411(fcByte2 vec1, fcByte4 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s6, s7);
}
fcByte8 fcByte8_create242(fcByte2 vec1, fcByte4 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
}
fcByte8 fcByte8_create311111(fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, s6, s7);
}
fcByte8 fcByte8_create31112(fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create31121(fcByte3 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create3113(fcByte3 vec1, cl_byte w, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create31211(fcByte3 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s6, s7);
}
fcByte8 fcByte8_create3122(fcByte3 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcByte8 fcByte8_create3131(fcByte3 vec1, cl_byte w, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcByte8 fcByte8_create314(fcByte3 vec1, cl_byte w, fcByte4 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcByte8 fcByte8_create32111(fcByte3 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, s6, s7);
}
fcByte8 fcByte8_create3212(fcByte3 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcByte8 fcByte8_create3221(fcByte3 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcByte8 fcByte8_create323(fcByte3 vec1, fcByte2 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcByte8 fcByte8_create3311(fcByte3 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcByte8 fcByte8_create332(fcByte3 vec1, fcByte3 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcByte8 fcByte8_create341(fcByte3 vec1, fcByte4 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcByte8 fcByte8_create41111(fcByte4 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, s6, s7);
}
fcByte8 fcByte8_create4112(fcByte4 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, vec2.x, vec2.y);
}
fcByte8 fcByte8_create4121(fcByte4 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, s7);
}
fcByte8 fcByte8_create413(fcByte4 vec1, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, vec2.z);
}
fcByte8 fcByte8_create4211(fcByte4 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s6, s7);
}
fcByte8 fcByte8_create422(fcByte4 vec1, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcByte8 fcByte8_create431(fcByte4 vec1, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s7);
}
fcByte8 fcByte8_create44(fcByte4 vec1, fcByte4 vec2) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcByte8 fcByte8_create8(fcByte8 vec1) {
  return fcByte8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s4, vec1.s5, vec1.s6, vec1.s7);
}

fcByte4 fcByte8_odd(fcByte8 a) {
  return fcByte4_create1111(a.y, a.w, a.s5, a.s7);
}

fcByte4 fcByte8_even(fcByte8 a) {
  return fcByte4_create1111(a.x, a.z, a.s4, a.s6);
}

fcShort8 fcByte8_convertShort8(fcByte8 a) {
  return fcShort8_create11111111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w, (cl_short) a.s4, (cl_short) a.s5, (cl_short) a.s6, (cl_short) a.s7);
}

fcInt8 fcByte8_convertInt8(fcByte8 a) {
  return fcInt8_create11111111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w, (cl_int) a.s4, (cl_int) a.s5, (cl_int) a.s6, (cl_int) a.s7);
}

fcLong8 fcByte8_convertLong8(fcByte8 a) {
  return fcLong8_create11111111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w, (cl_long) a.s4, (cl_long) a.s5, (cl_long) a.s6, (cl_long) a.s7);
}

fcFloat8 fcByte8_convertFloat8(fcByte8 a) {
  return fcFloat8_create11111111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w, (cl_float) a.s4, (cl_float) a.s5, (cl_float) a.s6, (cl_float) a.s7);
}

fcDouble8 fcByte8_convertDouble8(fcByte8 a) {
  return fcDouble8_create11111111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w, (cl_double) a.s4, (cl_double) a.s5, (cl_double) a.s6, (cl_double) a.s7);
}

fcByte2 fcByte8_asByte2(fcByte8 a) {
  return fcByte2_create11(a.x, a.y);
}

fcByte3 fcByte8_asByte3(fcByte8 a) {
  return fcByte3_create111(a.x, a.y, a.z);
}

fcByte4 fcByte8_asByte4(fcByte8 a) {
  return fcByte4_create1111(a.x, a.y, a.z, a.w);
}

fcInt8 fcByte8_isEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s4 == b.s4? 1 : 0, a.s5 == b.s5? 1 : 0, a.s6 == b.s6? 1 : 0, a.s7 == b.s7? 1 : 0);
}

fcInt8 fcByte8_isNotEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s4 != b.s4? 1 : 0, a.s5 != b.s5? 1 : 0, a.s6 != b.s6? 1 : 0, a.s7 != b.s7? 1 : 0);
}

fcInt8 fcByte8_isGreater(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s4 > b.s4? 1 : 0, a.s5 > b.s5? 1 : 0, a.s6 > b.s6? 1 : 0, a.s7 > b.s7? 1 : 0);
}

fcInt8 fcByte8_isGreaterEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s4 >= b.s4? 1 : 0, a.s5 >= b.s5? 1 : 0, a.s6 >= b.s6? 1 : 0, a.s7 >= b.s7? 1 : 0);
}

fcInt8 fcByte8_isLess(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s4 < b.s4? 1 : 0, a.s5 < b.s5? 1 : 0, a.s6 < b.s6? 1 : 0, a.s7 < b.s7? 1 : 0);
}

fcInt8 fcByte8_isLessEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s4 <= b.s4? 1 : 0, a.s5 <= b.s5? 1 : 0, a.s6 <= b.s6? 1 : 0, a.s7 <= b.s7? 1 : 0);
}

fcByte8 fcByte8_select(fcByte8 a, fcByte8 b, fcInt8 c) {
  return fcByte8_create11111111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w), fcMath_select(a.s4, b.s4, c.s4), fcMath_select(a.s5, b.s5, c.s5), fcMath_select(a.s6, b.s6, c.s6), fcMath_select(a.s7, b.s7, c.s7));
}

cl_int fcByte8_any(fcByte8 a) {
  return a.x != '\0' || a.y != '\0' || a.z != '\0' || a.w != '\0' || a.s4 != '\0' || a.s5 != '\0' || a.s6 != '\0' || a.s7 != '\0';
}

cl_int fcByte8_all(fcByte8 a) {
  return !(a.x == '\0' || a.y == '\0' || a.z == '\0' || a.w == '\0' || a.s4 == '\0' || a.s5 == '\0' || a.s6 == '\0' || a.s7 == '\0');
}

fcByte8 fcByte8_add(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w, a.s4 + b.s4, a.s5 + b.s5, a.s6 + b.s6, a.s7 + b.s7);
}

fcByte8 fcByte8_sub(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w, a.s4 - b.s4, a.s5 - b.s5, a.s6 - b.s6, a.s7 - b.s7);
}

fcByte8 fcByte8_mul(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w, a.s4 * b.s4, a.s5 * b.s5, a.s6 * b.s6, a.s7 * b.s7);
}

fcDouble8 fcByte8_muld(fcByte8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w), (cl_double)(a.s4 * b.s4), (cl_double)(a.s5 * b.s5), (cl_double)(a.s6 * b.s6), (cl_double)(a.s7 * b.s7));
}

fcFloat8 fcByte8_mulf(fcByte8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w), (cl_float)(a.s4 * b.s4), (cl_float)(a.s5 * b.s5), (cl_float)(a.s6 * b.s6), (cl_float)(a.s7 * b.s7));
}

fcByte8 fcByte8_mulk(fcByte8 a, cl_byte k) {
  return fcByte8_create11111111(a.x * k, a.y * k, a.z * k, a.w * k, a.s4 * k, a.s5 * k, a.s6 * k, a.s7 * k);
}

fcDouble8 fcByte8_mulkd(fcByte8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k), (cl_double)(a.s4 * k), (cl_double)(a.s5 * k), (cl_double)(a.s6 * k), (cl_double)(a.s7 * k));
}

fcFloat8 fcByte8_mulkf(fcByte8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k), (cl_float)(a.s4 * k), (cl_float)(a.s5 * k), (cl_float)(a.s6 * k), (cl_float)(a.s7 * k));
}

fcByte8 fcByte8_div(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w, a.s4 / b.s4, a.s5 / b.s5, a.s6 / b.s6, a.s7 / b.s7);
}

fcDouble8 fcByte8_divd(fcByte8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w), (cl_double)(a.s4 / b.s4), (cl_double)(a.s5 / b.s5), (cl_double)(a.s6 / b.s6), (cl_double)(a.s7 / b.s7));
}

fcFloat8 fcByte8_divf(fcByte8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w), (cl_float)(a.s4 / b.s4), (cl_float)(a.s5 / b.s5), (cl_float)(a.s6 / b.s6), (cl_float)(a.s7 / b.s7));
}

fcByte8 fcByte8_divk(fcByte8 a, cl_byte k) {
  return fcByte8_create11111111(a.x / k, a.y / k, a.z / k, a.w / k, a.s4 / k, a.s5 / k, a.s6 / k, a.s7 / k);
}

fcDouble8 fcByte8_divkd(fcByte8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k), (cl_double)(a.s4 / k), (cl_double)(a.s5 / k), (cl_double)(a.s6 / k), (cl_double)(a.s7 / k));
}

fcFloat8 fcByte8_divkf(fcByte8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k), (cl_float)(a.s4 / k), (cl_float)(a.s5 / k), (cl_float)(a.s6 / k), (cl_float)(a.s7 / k));
}

fcByte8 fcByte8_mod(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w, a.s4 % b.s4, a.s5 % b.s5, a.s6 % b.s6, a.s7 % b.s7);
}

fcByte8 fcByte8_modk(fcByte8 a, cl_byte k) {
  return fcByte8_create11111111(a.x % k, a.y % k, a.z % k, a.w % k, a.s4 % k, a.s5 % k, a.s6 % k, a.s7 % k);
}

fcByte8 fcByte8_bitAnd(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w, a.s4 & b.s4, a.s5 & b.s5, a.s6 & b.s6, a.s7 & b.s7);
}

fcByte8 fcByte8_bitOr(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w, a.s4 | b.s4, a.s5 | b.s5, a.s6 | b.s6, a.s7 | b.s7);
}

fcByte8 fcByte8_bitXor(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w, a.s4 ^ b.s4, a.s5 ^ b.s5, a.s6 ^ b.s6, a.s7 ^ b.s7);
}

fcByte8 fcByte8_bitNot(fcByte8 a) {
  return fcByte8_create11111111(~a.x, ~a.y, ~a.z, ~a.w, ~a.s4, ~a.s5, ~a.s6, ~a.s7);
}

fcByte8 fcByte8_abs(fcByte8 a) {
  return fcByte8_create11111111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w), fcMath_abs(a.s4), fcMath_abs(a.s5), fcMath_abs(a.s6), fcMath_abs(a.s7));
}

fcByte8 fcByte8_clamp(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w), fcMath_clamp(a.s4, b.s4, c.s4), fcMath_clamp(a.s5, b.s5, c.s5), fcMath_clamp(a.s6, b.s6, c.s6), fcMath_clamp(a.s7, b.s7, c.s7));
}

fcByte8 fcByte8_max(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w), fcMath_max(a.s4, b.s4), fcMath_max(a.s5, b.s5), fcMath_max(a.s6, b.s6), fcMath_max(a.s7, b.s7));
}

fcByte8 fcByte8_maxMag(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w), fcMath_maxMag(a.s4, b.s4), fcMath_maxMag(a.s5, b.s5), fcMath_maxMag(a.s6, b.s6), fcMath_maxMag(a.s7, b.s7));
}

fcByte8 fcByte8_min(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w), fcMath_min(a.s4, b.s4), fcMath_min(a.s5, b.s5), fcMath_min(a.s6, b.s6), fcMath_min(a.s7, b.s7));
}

fcByte8 fcByte8_minMag(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w), fcMath_minMag(a.s4, b.s4), fcMath_minMag(a.s5, b.s5), fcMath_minMag(a.s6, b.s6), fcMath_minMag(a.s7, b.s7));
}

fcByte8 fcByte8_mix(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w), fcMath_mix(a.s4, b.s4, c.s4), fcMath_mix(a.s5, b.s5, c.s5), fcMath_mix(a.s6, b.s6, c.s6), fcMath_mix(a.s7, b.s7, c.s7));
}

fcByte8 fcByte8_clampk(fcByte8 v, cl_byte min, cl_byte max) {
  return fcByte8_create11111111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max), fcMath_clamp(v.s4, min, max), fcMath_clamp(v.s5, min, max), fcMath_clamp(v.s6, min, max), fcMath_clamp(v.s7, min, max));
}

fcByte8 fcByte8_maxk(fcByte8 x, cl_byte y) {
  return fcByte8_create11111111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y), fcMath_max(x.s4, y), fcMath_max(x.s5, y), fcMath_max(x.s6, y), fcMath_max(x.s7, y));
}

fcByte8 fcByte8_mink(fcByte8 x, cl_byte y) {
  return fcByte8_create11111111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y), fcMath_min(x.s4, y), fcMath_min(x.s5, y), fcMath_min(x.s6, y), fcMath_min(x.s7, y));
}

fcByte8 fcByte8_mixk(fcByte8 x, fcByte8 y, cl_byte a) {
  return fcByte8_create11111111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a), fcMath_mix(x.s4, y.s4, a), fcMath_mix(x.s5, y.s5, a), fcMath_mix(x.s6, y.s6, a), fcMath_mix(x.s7, y.s7, a));
}

fcByte8 fcByte8_absDiff(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w), fcMath_absDiff(a.s4, b.s4), fcMath_absDiff(a.s5, b.s5), fcMath_absDiff(a.s6, b.s6), fcMath_absDiff(a.s7, b.s7));
}

fcByte8 fcByte8_addSat(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_addSatc(a.x, b.x), fcMath_addSatc(a.y, b.y), fcMath_addSatc(a.z, b.z), fcMath_addSatc(a.w, b.w), fcMath_addSatc(a.s4, b.s4), fcMath_addSatc(a.s5, b.s5), fcMath_addSatc(a.s6, b.s6), fcMath_addSatc(a.s7, b.s7));
}

fcByte8 fcByte8_clz(fcByte8 a) {
  return fcByte8_create11111111(fcMath_clzc(a.x), fcMath_clzc(a.y), fcMath_clzc(a.z), fcMath_clzc(a.w), fcMath_clzc(a.s4), fcMath_clzc(a.s5), fcMath_clzc(a.s6), fcMath_clzc(a.s7));
}

fcByte8 fcByte8_hadd(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_haddc(a.x, b.x), fcMath_haddc(a.y, b.y), fcMath_haddc(a.z, b.z), fcMath_haddc(a.w, b.w), fcMath_haddc(a.s4, b.s4), fcMath_haddc(a.s5, b.s5), fcMath_haddc(a.s6, b.s6), fcMath_haddc(a.s7, b.s7));
}

fcByte8 fcByte8_madHi(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_madHic(a.x, b.x, c.x), fcMath_madHic(a.y, b.y, c.y), fcMath_madHic(a.z, b.z, c.z), fcMath_madHic(a.w, b.w, c.w), fcMath_madHic(a.s4, b.s4, c.s4), fcMath_madHic(a.s5, b.s5, c.s5), fcMath_madHic(a.s6, b.s6, c.s6), fcMath_madHic(a.s7, b.s7, c.s7));
}

fcByte8 fcByte8_madSat(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_madSatc(a.x, b.x, c.x), fcMath_madSatc(a.y, b.y, c.y), fcMath_madSatc(a.z, b.z, c.z), fcMath_madSatc(a.w, b.w, c.w), fcMath_madSatc(a.s4, b.s4, c.s4), fcMath_madSatc(a.s5, b.s5, c.s5), fcMath_madSatc(a.s6, b.s6, c.s6), fcMath_madSatc(a.s7, b.s7, c.s7));
}

fcByte8 fcByte8_mulHi(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_mulHic(a.x, b.x), fcMath_mulHic(a.y, b.y), fcMath_mulHic(a.z, b.z), fcMath_mulHic(a.w, b.w), fcMath_mulHic(a.s4, b.s4), fcMath_mulHic(a.s5, b.s5), fcMath_mulHic(a.s6, b.s6), fcMath_mulHic(a.s7, b.s7));
}

fcByte8 fcByte8_rhadd(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_rhaddc(a.x, b.x), fcMath_rhaddc(a.y, b.y), fcMath_rhaddc(a.z, b.z), fcMath_rhaddc(a.w, b.w), fcMath_rhaddc(a.s4, b.s4), fcMath_rhaddc(a.s5, b.s5), fcMath_rhaddc(a.s6, b.s6), fcMath_rhaddc(a.s7, b.s7));
}

fcByte8 fcByte8_rotate(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_rotatec(a.x, b.x), fcMath_rotatec(a.y, b.y), fcMath_rotatec(a.z, b.z), fcMath_rotatec(a.w, b.w), fcMath_rotatec(a.s4, b.s4), fcMath_rotatec(a.s5, b.s5), fcMath_rotatec(a.s6, b.s6), fcMath_rotatec(a.s7, b.s7));
}

fcByte8 fcByte8_subSat(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_subSatc(a.x, b.x), fcMath_subSatc(a.y, b.y), fcMath_subSatc(a.z, b.z), fcMath_subSatc(a.w, b.w), fcMath_subSatc(a.s4, b.s4), fcMath_subSatc(a.s5, b.s5), fcMath_subSatc(a.s6, b.s6), fcMath_subSatc(a.s7, b.s7));
}


//
// fcShort2
//

fcShort2 fcShort2_create() {
  fcShort2 result = {.s = {0}};
  return result;
}

fcShort2 fcShort2_create1(cl_short v) {
  return fcShort2_create11(v, v);
}

fcShort2 fcShort2_create11(cl_short x, cl_short y) {
  fcShort2 result;
  result.x = x;
  result.y = y;
  return result;
}

fcShort2 fcShort2_create2(fcShort2 vec1) {
  return fcShort2_create11(vec1.x, vec1.y);
}

fcByte2 fcShort2_convertByte2(fcShort2 a) {
  return fcByte2_create11((cl_byte) a.x, (cl_byte) a.y);
}

fcInt2 fcShort2_convertInt2(fcShort2 a) {
  return fcInt2_create11((cl_int) a.x, (cl_int) a.y);
}

fcLong2 fcShort2_convertLong2(fcShort2 a) {
  return fcLong2_create11((cl_long) a.x, (cl_long) a.y);
}

fcFloat2 fcShort2_convertFloat2(fcShort2 a) {
  return fcFloat2_create11((cl_float) a.x, (cl_float) a.y);
}

fcDouble2 fcShort2_convertDouble2(fcShort2 a) {
  return fcDouble2_create11((cl_double) a.x, (cl_double) a.y);
}

fcInt2 fcShort2_isEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
}

fcInt2 fcShort2_isNotEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
}

fcInt2 fcShort2_isGreater(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
}

fcInt2 fcShort2_isGreaterEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
}

fcInt2 fcShort2_isLess(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
}

fcInt2 fcShort2_isLessEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
}

fcShort2 fcShort2_select(fcShort2 a, fcShort2 b, fcInt2 c) {
  return fcShort2_create11(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y));
}

cl_int fcShort2_any(fcShort2 a) {
  return a.x != 0 || a.y != 0;
}

cl_int fcShort2_all(fcShort2 a) {
  return !(a.x == 0 || a.y == 0);
}

fcShort2 fcShort2_add(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x + b.x, a.y + b.y);
}

fcShort2 fcShort2_sub(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x - b.x, a.y - b.y);
}

fcShort2 fcShort2_mul(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x * b.x, a.y * b.y);
}

fcDouble2 fcShort2_muld(fcShort2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x * b.x), (cl_double)(a.y * b.y));
}

fcFloat2 fcShort2_mulf(fcShort2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x * b.x), (cl_float)(a.y * b.y));
}

fcShort2 fcShort2_mulk(fcShort2 a, cl_short k) {
  return fcShort2_create11(a.x * k, a.y * k);
}

fcDouble2 fcShort2_mulkd(fcShort2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x * k), (cl_double)(a.y * k));
}

fcFloat2 fcShort2_mulkf(fcShort2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x * k), (cl_float)(a.y * k));
}

fcShort2 fcShort2_div(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x / b.x, a.y / b.y);
}

fcDouble2 fcShort2_divd(fcShort2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x / b.x), (cl_double)(a.y / b.y));
}

fcFloat2 fcShort2_divf(fcShort2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x / b.x), (cl_float)(a.y / b.y));
}

fcShort2 fcShort2_divk(fcShort2 a, cl_short k) {
  return fcShort2_create11(a.x / k, a.y / k);
}

fcDouble2 fcShort2_divkd(fcShort2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x / k), (cl_double)(a.y / k));
}

fcFloat2 fcShort2_divkf(fcShort2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x / k), (cl_float)(a.y / k));
}

fcShort2 fcShort2_mod(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x % b.x, a.y % b.y);
}

fcShort2 fcShort2_modk(fcShort2 a, cl_short k) {
  return fcShort2_create11(a.x % k, a.y % k);
}

fcShort2 fcShort2_bitAnd(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x & b.x, a.y & b.y);
}

fcShort2 fcShort2_bitOr(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x | b.x, a.y | b.y);
}

fcShort2 fcShort2_bitXor(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.x ^ b.x, a.y ^ b.y);
}

fcShort2 fcShort2_bitNot(fcShort2 a) {
  return fcShort2_create11(~a.x, ~a.y);
}

fcShort2 fcShort2_abs(fcShort2 a) {
  return fcShort2_create11(fcMath_abs(a.x), fcMath_abs(a.y));
}

fcShort2 fcShort2_clamp(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y));
}

fcShort2 fcShort2_max(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y));
}

fcShort2 fcShort2_maxMag(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y));
}

fcShort2 fcShort2_min(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y));
}

fcShort2 fcShort2_minMag(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y));
}

fcShort2 fcShort2_mix(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y));
}

fcShort2 fcShort2_clampk(fcShort2 v, cl_short min, cl_short max) {
  return fcShort2_create11(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max));
}

fcShort2 fcShort2_maxk(fcShort2 x, cl_short y) {
  return fcShort2_create11(fcMath_max(x.x, y), fcMath_max(x.y, y));
}

fcShort2 fcShort2_mink(fcShort2 x, cl_short y) {
  return fcShort2_create11(fcMath_min(x.x, y), fcMath_min(x.y, y));
}

fcShort2 fcShort2_mixk(fcShort2 x, fcShort2 y, cl_short a) {
  return fcShort2_create11(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a));
}

fcShort2 fcShort2_absDiff(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y));
}

fcShort2 fcShort2_addSat(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_addSats(a.x, b.x), fcMath_addSats(a.y, b.y));
}

fcShort2 fcShort2_clz(fcShort2 a) {
  return fcShort2_create11(fcMath_clzs(a.x), fcMath_clzs(a.y));
}

fcShort2 fcShort2_hadd(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_hadds(a.x, b.x), fcMath_hadds(a.y, b.y));
}

fcShort2 fcShort2_madHi(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_madHis(a.x, b.x, c.x), fcMath_madHis(a.y, b.y, c.y));
}

fcShort2 fcShort2_madSat(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_madSats(a.x, b.x, c.x), fcMath_madSats(a.y, b.y, c.y));
}

fcShort2 fcShort2_mulHi(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_mulHis(a.x, b.x), fcMath_mulHis(a.y, b.y));
}

fcShort2 fcShort2_rhadd(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_rhadds(a.x, b.x), fcMath_rhadds(a.y, b.y));
}

fcShort2 fcShort2_rotate(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_rotates(a.x, b.x), fcMath_rotates(a.y, b.y));
}

fcShort2 fcShort2_subSat(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_subSats(a.x, b.x), fcMath_subSats(a.y, b.y));
}


//
// fcShort3
//

fcShort3 fcShort3_create() {
  fcShort3 result = {.s = {0}};
  return result;
}

fcShort3 fcShort3_create1(cl_short v) {
  return fcShort3_create111(v, v, v);
}

fcShort3 fcShort3_create111(cl_short x, cl_short y, cl_short z) {
  fcShort3 result;
  result.x = x;
  result.y = y;
  result.z = z;
  return result;
}

fcShort3 fcShort3_create12(cl_short x, fcShort2 vec1) {
  return fcShort3_create111(x, vec1.x, vec1.y);
}
fcShort3 fcShort3_create21(fcShort2 vec1, cl_short z) {
  return fcShort3_create111(vec1.x, vec1.y, z);
}
fcShort3 fcShort3_create3(fcShort3 vec1) {
  return fcShort3_create111(vec1.x, vec1.y, vec1.z);
}

fcByte3 fcShort3_convertByte3(fcShort3 a) {
  return fcByte3_create111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z);
}

fcInt3 fcShort3_convertInt3(fcShort3 a) {
  return fcInt3_create111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z);
}

fcLong3 fcShort3_convertLong3(fcShort3 a) {
  return fcLong3_create111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z);
}

fcFloat3 fcShort3_convertFloat3(fcShort3 a) {
  return fcFloat3_create111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z);
}

fcDouble3 fcShort3_convertDouble3(fcShort3 a) {
  return fcDouble3_create111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z);
}

fcShort2 fcShort3_asShort2(fcShort3 a) {
  return fcShort2_create11(a.x, a.y);
}

fcInt3 fcShort3_isEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
}

fcInt3 fcShort3_isNotEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
}

fcInt3 fcShort3_isGreater(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
}

fcInt3 fcShort3_isGreaterEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
}

fcInt3 fcShort3_isLess(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
}

fcInt3 fcShort3_isLessEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
}

fcShort3 fcShort3_select(fcShort3 a, fcShort3 b, fcInt3 c) {
  return fcShort3_create111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z));
}

cl_int fcShort3_any(fcShort3 a) {
  return a.x != 0 || a.y != 0 || a.z != 0;
}

cl_int fcShort3_all(fcShort3 a) {
  return !(a.x == 0 || a.y == 0 || a.z == 0);
}

fcShort3 fcShort3_add(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x + b.x, a.y + b.y, a.z + b.z);
}

fcShort3 fcShort3_sub(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x - b.x, a.y - b.y, a.z - b.z);
}

fcShort3 fcShort3_mul(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x * b.x, a.y * b.y, a.z * b.z);
}

fcDouble3 fcShort3_muld(fcShort3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z));
}

fcFloat3 fcShort3_mulf(fcShort3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z));
}

fcShort3 fcShort3_mulk(fcShort3 a, cl_short k) {
  return fcShort3_create111(a.x * k, a.y * k, a.z * k);
}

fcDouble3 fcShort3_mulkd(fcShort3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k));
}

fcFloat3 fcShort3_mulkf(fcShort3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k));
}

fcShort3 fcShort3_div(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x / b.x, a.y / b.y, a.z / b.z);
}

fcDouble3 fcShort3_divd(fcShort3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z));
}

fcFloat3 fcShort3_divf(fcShort3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z));
}

fcShort3 fcShort3_divk(fcShort3 a, cl_short k) {
  return fcShort3_create111(a.x / k, a.y / k, a.z / k);
}

fcDouble3 fcShort3_divkd(fcShort3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k));
}

fcFloat3 fcShort3_divkf(fcShort3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k));
}

fcShort3 fcShort3_mod(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x % b.x, a.y % b.y, a.z % b.z);
}

fcShort3 fcShort3_modk(fcShort3 a, cl_short k) {
  return fcShort3_create111(a.x % k, a.y % k, a.z % k);
}

fcShort3 fcShort3_bitAnd(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x & b.x, a.y & b.y, a.z & b.z);
}

fcShort3 fcShort3_bitOr(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x | b.x, a.y | b.y, a.z | b.z);
}

fcShort3 fcShort3_bitXor(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z);
}

fcShort3 fcShort3_bitNot(fcShort3 a) {
  return fcShort3_create111(~a.x, ~a.y, ~a.z);
}

fcShort3 fcShort3_abs(fcShort3 a) {
  return fcShort3_create111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z));
}

fcShort3 fcShort3_clamp(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z));
}

fcShort3 fcShort3_max(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z));
}

fcShort3 fcShort3_maxMag(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z));
}

fcShort3 fcShort3_min(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z));
}

fcShort3 fcShort3_minMag(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z));
}

fcShort3 fcShort3_mix(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z));
}

fcShort3 fcShort3_clampk(fcShort3 v, cl_short min, cl_short max) {
  return fcShort3_create111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max));
}

fcShort3 fcShort3_maxk(fcShort3 x, cl_short y) {
  return fcShort3_create111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y));
}

fcShort3 fcShort3_mink(fcShort3 x, cl_short y) {
  return fcShort3_create111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y));
}

fcShort3 fcShort3_mixk(fcShort3 x, fcShort3 y, cl_short a) {
  return fcShort3_create111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a));
}

fcShort3 fcShort3_absDiff(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z));
}

fcShort3 fcShort3_addSat(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_addSats(a.x, b.x), fcMath_addSats(a.y, b.y), fcMath_addSats(a.z, b.z));
}

fcShort3 fcShort3_clz(fcShort3 a) {
  return fcShort3_create111(fcMath_clzs(a.x), fcMath_clzs(a.y), fcMath_clzs(a.z));
}

fcShort3 fcShort3_hadd(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_hadds(a.x, b.x), fcMath_hadds(a.y, b.y), fcMath_hadds(a.z, b.z));
}

fcShort3 fcShort3_madHi(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_madHis(a.x, b.x, c.x), fcMath_madHis(a.y, b.y, c.y), fcMath_madHis(a.z, b.z, c.z));
}

fcShort3 fcShort3_madSat(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_madSats(a.x, b.x, c.x), fcMath_madSats(a.y, b.y, c.y), fcMath_madSats(a.z, b.z, c.z));
}

fcShort3 fcShort3_mulHi(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_mulHis(a.x, b.x), fcMath_mulHis(a.y, b.y), fcMath_mulHis(a.z, b.z));
}

fcShort3 fcShort3_rhadd(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_rhadds(a.x, b.x), fcMath_rhadds(a.y, b.y), fcMath_rhadds(a.z, b.z));
}

fcShort3 fcShort3_rotate(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_rotates(a.x, b.x), fcMath_rotates(a.y, b.y), fcMath_rotates(a.z, b.z));
}

fcShort3 fcShort3_subSat(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_subSats(a.x, b.x), fcMath_subSats(a.y, b.y), fcMath_subSats(a.z, b.z));
}


//
// fcShort4
//

fcShort4 fcShort4_create() {
  fcShort4 result = {.s = {0}};
  return result;
}

fcShort4 fcShort4_create1(cl_short v) {
  return fcShort4_create1111(v, v, v, v);
}

fcShort4 fcShort4_create1111(cl_short x, cl_short y, cl_short z, cl_short w) {
  fcShort4 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  return result;
}

fcShort4 fcShort4_create112(cl_short x, cl_short y, fcShort2 vec1) {
  return fcShort4_create1111(x, y, vec1.x, vec1.y);
}
fcShort4 fcShort4_create121(cl_short x, fcShort2 vec1, cl_short w) {
  return fcShort4_create1111(x, vec1.x, vec1.y, w);
}
fcShort4 fcShort4_create13(cl_short x, fcShort3 vec1) {
  return fcShort4_create1111(x, vec1.x, vec1.y, vec1.z);
}
fcShort4 fcShort4_create211(fcShort2 vec1, cl_short z, cl_short w) {
  return fcShort4_create1111(vec1.x, vec1.y, z, w);
}
fcShort4 fcShort4_create22(fcShort2 vec1, fcShort2 vec2) {
  return fcShort4_create1111(vec1.x, vec1.y, vec2.x, vec2.y);
}
fcShort4 fcShort4_create31(fcShort3 vec1, cl_short w) {
  return fcShort4_create1111(vec1.x, vec1.y, vec1.z, w);
}
fcShort4 fcShort4_create4(fcShort4 vec1) {
  return fcShort4_create1111(vec1.x, vec1.y, vec1.z, vec1.w);
}

fcShort2 fcShort4_odd(fcShort4 a) {
  return fcShort2_create11(a.y, a.w);
}

fcShort2 fcShort4_even(fcShort4 a) {
  return fcShort2_create11(a.x, a.z);
}

fcByte4 fcShort4_convertByte4(fcShort4 a) {
  return fcByte4_create1111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w);
}

fcInt4 fcShort4_convertInt4(fcShort4 a) {
  return fcInt4_create1111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w);
}

fcLong4 fcShort4_convertLong4(fcShort4 a) {
  return fcLong4_create1111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w);
}

fcFloat4 fcShort4_convertFloat4(fcShort4 a) {
  return fcFloat4_create1111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w);
}

fcDouble4 fcShort4_convertDouble4(fcShort4 a) {
  return fcDouble4_create1111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w);
}

fcShort2 fcShort4_asShort2(fcShort4 a) {
  return fcShort2_create11(a.x, a.y);
}

fcShort3 fcShort4_asShort3(fcShort4 a) {
  return fcShort3_create111(a.x, a.y, a.z);
}

fcInt4 fcShort4_isEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
}

fcInt4 fcShort4_isNotEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
}

fcInt4 fcShort4_isGreater(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
}

fcInt4 fcShort4_isGreaterEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
}

fcInt4 fcShort4_isLess(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
}

fcInt4 fcShort4_isLessEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
}

fcShort4 fcShort4_select(fcShort4 a, fcShort4 b, fcInt4 c) {
  return fcShort4_create1111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w));
}

cl_int fcShort4_any(fcShort4 a) {
  return a.x != 0 || a.y != 0 || a.z != 0 || a.w != 0;
}

cl_int fcShort4_all(fcShort4 a) {
  return !(a.x == 0 || a.y == 0 || a.z == 0 || a.w == 0);
}

fcShort4 fcShort4_add(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

fcShort4 fcShort4_sub(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

fcShort4 fcShort4_mul(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

fcDouble4 fcShort4_muld(fcShort4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w));
}

fcFloat4 fcShort4_mulf(fcShort4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w));
}

fcShort4 fcShort4_mulk(fcShort4 a, cl_short k) {
  return fcShort4_create1111(a.x * k, a.y * k, a.z * k, a.w * k);
}

fcDouble4 fcShort4_mulkd(fcShort4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k));
}

fcFloat4 fcShort4_mulkf(fcShort4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k));
}

fcShort4 fcShort4_div(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

fcDouble4 fcShort4_divd(fcShort4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w));
}

fcFloat4 fcShort4_divf(fcShort4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w));
}

fcShort4 fcShort4_divk(fcShort4 a, cl_short k) {
  return fcShort4_create1111(a.x / k, a.y / k, a.z / k, a.w / k);
}

fcDouble4 fcShort4_divkd(fcShort4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k));
}

fcFloat4 fcShort4_divkf(fcShort4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k));
}

fcShort4 fcShort4_mod(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
}

fcShort4 fcShort4_modk(fcShort4 a, cl_short k) {
  return fcShort4_create1111(a.x % k, a.y % k, a.z % k, a.w % k);
}

fcShort4 fcShort4_bitAnd(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
}

fcShort4 fcShort4_bitOr(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
}

fcShort4 fcShort4_bitXor(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
}

fcShort4 fcShort4_bitNot(fcShort4 a) {
  return fcShort4_create1111(~a.x, ~a.y, ~a.z, ~a.w);
}

fcShort4 fcShort4_abs(fcShort4 a) {
  return fcShort4_create1111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w));
}

fcShort4 fcShort4_clamp(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w));
}

fcShort4 fcShort4_max(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w));
}

fcShort4 fcShort4_maxMag(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w));
}

fcShort4 fcShort4_min(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w));
}

fcShort4 fcShort4_minMag(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w));
}

fcShort4 fcShort4_mix(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w));
}

fcShort4 fcShort4_clampk(fcShort4 v, cl_short min, cl_short max) {
  return fcShort4_create1111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max));
}

fcShort4 fcShort4_maxk(fcShort4 x, cl_short y) {
  return fcShort4_create1111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y));
}

fcShort4 fcShort4_mink(fcShort4 x, cl_short y) {
  return fcShort4_create1111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y));
}

fcShort4 fcShort4_mixk(fcShort4 x, fcShort4 y, cl_short a) {
  return fcShort4_create1111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a));
}

fcShort4 fcShort4_absDiff(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w));
}

fcShort4 fcShort4_addSat(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_addSats(a.x, b.x), fcMath_addSats(a.y, b.y), fcMath_addSats(a.z, b.z), fcMath_addSats(a.w, b.w));
}

fcShort4 fcShort4_clz(fcShort4 a) {
  return fcShort4_create1111(fcMath_clzs(a.x), fcMath_clzs(a.y), fcMath_clzs(a.z), fcMath_clzs(a.w));
}

fcShort4 fcShort4_hadd(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_hadds(a.x, b.x), fcMath_hadds(a.y, b.y), fcMath_hadds(a.z, b.z), fcMath_hadds(a.w, b.w));
}

fcShort4 fcShort4_madHi(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_madHis(a.x, b.x, c.x), fcMath_madHis(a.y, b.y, c.y), fcMath_madHis(a.z, b.z, c.z), fcMath_madHis(a.w, b.w, c.w));
}

fcShort4 fcShort4_madSat(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_madSats(a.x, b.x, c.x), fcMath_madSats(a.y, b.y, c.y), fcMath_madSats(a.z, b.z, c.z), fcMath_madSats(a.w, b.w, c.w));
}

fcShort4 fcShort4_mulHi(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_mulHis(a.x, b.x), fcMath_mulHis(a.y, b.y), fcMath_mulHis(a.z, b.z), fcMath_mulHis(a.w, b.w));
}

fcShort4 fcShort4_rhadd(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_rhadds(a.x, b.x), fcMath_rhadds(a.y, b.y), fcMath_rhadds(a.z, b.z), fcMath_rhadds(a.w, b.w));
}

fcShort4 fcShort4_rotate(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_rotates(a.x, b.x), fcMath_rotates(a.y, b.y), fcMath_rotates(a.z, b.z), fcMath_rotates(a.w, b.w));
}

fcShort4 fcShort4_subSat(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_subSats(a.x, b.x), fcMath_subSats(a.y, b.y), fcMath_subSats(a.z, b.z), fcMath_subSats(a.w, b.w));
}


//
// fcShort8
//

fcShort8 fcShort8_create() {
  fcShort8 result = {.s = {0}};
  return result;
}

fcShort8 fcShort8_create1(cl_short v) {
  return fcShort8_create11111111(v, v, v, v, v, v, v, v);
}

fcShort8 fcShort8_create11111111(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s4;
  result.s5 = s5;
  result.s6 = s6;
  result.s7 = s7;
  return result;
}

fcShort8 fcShort8_create1111112(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec1) {
  return fcShort8_create11111111(x, y, z, w, s4, s5, vec1.x, vec1.y);
}
fcShort8 fcShort8_create1111121(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort2 vec1, cl_short s7) {
  return fcShort8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, s7);
}
fcShort8 fcShort8_create111113(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort3 vec1) {
  return fcShort8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, vec1.z);
}
fcShort8 fcShort8_create1111211(cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, z, w, vec1.x, vec1.y, s6, s7);
}
fcShort8 fcShort8_create111122(cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
}
fcShort8 fcShort8_create111131(cl_short x, cl_short y, cl_short z, cl_short w, fcShort3 vec1, cl_short s7) {
  return fcShort8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, s7);
}
fcShort8 fcShort8_create11114(cl_short x, cl_short y, cl_short z, cl_short w, fcShort4 vec1) {
  return fcShort8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
}
fcShort8 fcShort8_create1112111(cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, s5, s6, s7);
}
fcShort8 fcShort8_create111212(cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create111221(cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create11123(cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort3 vec2) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create111311(cl_short x, cl_short y, cl_short z, fcShort3 vec1, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, s6, s7);
}
fcShort8 fcShort8_create11132(cl_short x, cl_short y, cl_short z, fcShort3 vec1, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
}
fcShort8 fcShort8_create11141(cl_short x, cl_short y, cl_short z, fcShort4 vec1, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s7);
}
fcShort8 fcShort8_create1121111(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, s4, s5, s6, s7);
}
fcShort8 fcShort8_create112112(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, s4, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create112121(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create11213(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create112211(cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s6, s7);
}
fcShort8 fcShort8_create11222(cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcShort8 fcShort8_create11231(cl_short x, cl_short y, fcShort2 vec1, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s7);
}
fcShort8 fcShort8_create1124(cl_short x, cl_short y, fcShort2 vec1, fcShort4 vec2) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcShort8 fcShort8_create113111(cl_short x, cl_short y, fcShort3 vec1, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, s6, s7);
}
fcShort8 fcShort8_create11312(cl_short x, cl_short y, fcShort3 vec1, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create11321(cl_short x, cl_short y, fcShort3 vec1, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create1133(cl_short x, cl_short y, fcShort3 vec1, fcShort3 vec2) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create11411(cl_short x, cl_short y, fcShort4 vec1, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s6, s7);
}
fcShort8 fcShort8_create1142(cl_short x, cl_short y, fcShort4 vec1, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
}
fcShort8 fcShort8_create1211111(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, s4, s5, s6, s7);
}
fcShort8 fcShort8_create121112(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, s4, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create121121(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create12113(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create121211(cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s6, s7);
}
fcShort8 fcShort8_create12122(cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcShort8 fcShort8_create12131(cl_short x, fcShort2 vec1, cl_short w, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s7);
}
fcShort8 fcShort8_create1214(cl_short x, fcShort2 vec1, cl_short w, fcShort4 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcShort8 fcShort8_create122111(cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, s6, s7);
}
fcShort8 fcShort8_create12212(cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcShort8 fcShort8_create12221(cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcShort8 fcShort8_create1223(cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcShort8 fcShort8_create12311(cl_short x, fcShort2 vec1, fcShort3 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcShort8 fcShort8_create1232(cl_short x, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcShort8 fcShort8_create1241(cl_short x, fcShort2 vec1, fcShort4 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcShort8 fcShort8_create131111(cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, s6, s7);
}
fcShort8 fcShort8_create13112(cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create13121(cl_short x, fcShort3 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create1313(cl_short x, fcShort3 vec1, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create13211(cl_short x, fcShort3 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s6, s7);
}
fcShort8 fcShort8_create1322(cl_short x, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcShort8 fcShort8_create1331(cl_short x, fcShort3 vec1, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s7);
}
fcShort8 fcShort8_create134(cl_short x, fcShort3 vec1, fcShort4 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcShort8 fcShort8_create14111(cl_short x, fcShort4 vec1, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, s6, s7);
}
fcShort8 fcShort8_create1412(cl_short x, fcShort4 vec1, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create1421(cl_short x, fcShort4 vec1, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create143(cl_short x, fcShort4 vec1, fcShort3 vec2) {
  return fcShort8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create2111111(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, s4, s5, s6, s7);
}
fcShort8 fcShort8_create211112(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, s4, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create211121(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create21113(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create211211(fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s6, s7);
}
fcShort8 fcShort8_create21122(fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcShort8 fcShort8_create21131(fcShort2 vec1, cl_short z, cl_short w, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcShort8 fcShort8_create2114(fcShort2 vec1, cl_short z, cl_short w, fcShort4 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcShort8 fcShort8_create212111(fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, s6, s7);
}
fcShort8 fcShort8_create21212(fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcShort8 fcShort8_create21221(fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcShort8 fcShort8_create2123(fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcShort8 fcShort8_create21311(fcShort2 vec1, cl_short z, fcShort3 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcShort8 fcShort8_create2132(fcShort2 vec1, cl_short z, fcShort3 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcShort8 fcShort8_create2141(fcShort2 vec1, cl_short z, fcShort4 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcShort8 fcShort8_create221111(fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, s6, s7);
}
fcShort8 fcShort8_create22112(fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, vec3.x, vec3.y);
}
fcShort8 fcShort8_create22121(fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, s7);
}
fcShort8 fcShort8_create2213(fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, vec3.z);
}
fcShort8 fcShort8_create22211(fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s6, s7);
}
fcShort8 fcShort8_create2222(fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, fcShort2 vec4) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
}
fcShort8 fcShort8_create2231(fcShort2 vec1, fcShort2 vec2, fcShort3 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s7);
}
fcShort8 fcShort8_create224(fcShort2 vec1, fcShort2 vec2, fcShort4 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
}
fcShort8 fcShort8_create23111(fcShort2 vec1, fcShort3 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, s6, s7);
}
fcShort8 fcShort8_create2312(fcShort2 vec1, fcShort3 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, vec3.x, vec3.y);
}
fcShort8 fcShort8_create2321(fcShort2 vec1, fcShort3 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s7);
}
fcShort8 fcShort8_create233(fcShort2 vec1, fcShort3 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
}
fcShort8 fcShort8_create2411(fcShort2 vec1, fcShort4 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s6, s7);
}
fcShort8 fcShort8_create242(fcShort2 vec1, fcShort4 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
}
fcShort8 fcShort8_create311111(fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, s6, s7);
}
fcShort8 fcShort8_create31112(fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create31121(fcShort3 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create3113(fcShort3 vec1, cl_short w, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create31211(fcShort3 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s6, s7);
}
fcShort8 fcShort8_create3122(fcShort3 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcShort8 fcShort8_create3131(fcShort3 vec1, cl_short w, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcShort8 fcShort8_create314(fcShort3 vec1, cl_short w, fcShort4 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcShort8 fcShort8_create32111(fcShort3 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, s6, s7);
}
fcShort8 fcShort8_create3212(fcShort3 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcShort8 fcShort8_create3221(fcShort3 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcShort8 fcShort8_create323(fcShort3 vec1, fcShort2 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcShort8 fcShort8_create3311(fcShort3 vec1, fcShort3 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcShort8 fcShort8_create332(fcShort3 vec1, fcShort3 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcShort8 fcShort8_create341(fcShort3 vec1, fcShort4 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcShort8 fcShort8_create41111(fcShort4 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, s6, s7);
}
fcShort8 fcShort8_create4112(fcShort4 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, vec2.x, vec2.y);
}
fcShort8 fcShort8_create4121(fcShort4 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, s7);
}
fcShort8 fcShort8_create413(fcShort4 vec1, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, vec2.z);
}
fcShort8 fcShort8_create4211(fcShort4 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s6, s7);
}
fcShort8 fcShort8_create422(fcShort4 vec1, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcShort8 fcShort8_create431(fcShort4 vec1, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s7);
}
fcShort8 fcShort8_create44(fcShort4 vec1, fcShort4 vec2) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcShort8 fcShort8_create8(fcShort8 vec1) {
  return fcShort8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s4, vec1.s5, vec1.s6, vec1.s7);
}

fcShort4 fcShort8_odd(fcShort8 a) {
  return fcShort4_create1111(a.y, a.w, a.s5, a.s7);
}

fcShort4 fcShort8_even(fcShort8 a) {
  return fcShort4_create1111(a.x, a.z, a.s4, a.s6);
}

fcByte8 fcShort8_convertByte8(fcShort8 a) {
  return fcByte8_create11111111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w, (cl_byte) a.s4, (cl_byte) a.s5, (cl_byte) a.s6, (cl_byte) a.s7);
}

fcInt8 fcShort8_convertInt8(fcShort8 a) {
  return fcInt8_create11111111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w, (cl_int) a.s4, (cl_int) a.s5, (cl_int) a.s6, (cl_int) a.s7);
}

fcLong8 fcShort8_convertLong8(fcShort8 a) {
  return fcLong8_create11111111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w, (cl_long) a.s4, (cl_long) a.s5, (cl_long) a.s6, (cl_long) a.s7);
}

fcFloat8 fcShort8_convertFloat8(fcShort8 a) {
  return fcFloat8_create11111111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w, (cl_float) a.s4, (cl_float) a.s5, (cl_float) a.s6, (cl_float) a.s7);
}

fcDouble8 fcShort8_convertDouble8(fcShort8 a) {
  return fcDouble8_create11111111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w, (cl_double) a.s4, (cl_double) a.s5, (cl_double) a.s6, (cl_double) a.s7);
}

fcShort2 fcShort8_asShort2(fcShort8 a) {
  return fcShort2_create11(a.x, a.y);
}

fcShort3 fcShort8_asShort3(fcShort8 a) {
  return fcShort3_create111(a.x, a.y, a.z);
}

fcShort4 fcShort8_asShort4(fcShort8 a) {
  return fcShort4_create1111(a.x, a.y, a.z, a.w);
}

fcInt8 fcShort8_isEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s4 == b.s4? 1 : 0, a.s5 == b.s5? 1 : 0, a.s6 == b.s6? 1 : 0, a.s7 == b.s7? 1 : 0);
}

fcInt8 fcShort8_isNotEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s4 != b.s4? 1 : 0, a.s5 != b.s5? 1 : 0, a.s6 != b.s6? 1 : 0, a.s7 != b.s7? 1 : 0);
}

fcInt8 fcShort8_isGreater(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s4 > b.s4? 1 : 0, a.s5 > b.s5? 1 : 0, a.s6 > b.s6? 1 : 0, a.s7 > b.s7? 1 : 0);
}

fcInt8 fcShort8_isGreaterEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s4 >= b.s4? 1 : 0, a.s5 >= b.s5? 1 : 0, a.s6 >= b.s6? 1 : 0, a.s7 >= b.s7? 1 : 0);
}

fcInt8 fcShort8_isLess(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s4 < b.s4? 1 : 0, a.s5 < b.s5? 1 : 0, a.s6 < b.s6? 1 : 0, a.s7 < b.s7? 1 : 0);
}

fcInt8 fcShort8_isLessEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s4 <= b.s4? 1 : 0, a.s5 <= b.s5? 1 : 0, a.s6 <= b.s6? 1 : 0, a.s7 <= b.s7? 1 : 0);
}

fcShort8 fcShort8_select(fcShort8 a, fcShort8 b, fcInt8 c) {
  return fcShort8_create11111111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w), fcMath_select(a.s4, b.s4, c.s4), fcMath_select(a.s5, b.s5, c.s5), fcMath_select(a.s6, b.s6, c.s6), fcMath_select(a.s7, b.s7, c.s7));
}

cl_int fcShort8_any(fcShort8 a) {
  return a.x != 0 || a.y != 0 || a.z != 0 || a.w != 0 || a.s4 != 0 || a.s5 != 0 || a.s6 != 0 || a.s7 != 0;
}

cl_int fcShort8_all(fcShort8 a) {
  return !(a.x == 0 || a.y == 0 || a.z == 0 || a.w == 0 || a.s4 == 0 || a.s5 == 0 || a.s6 == 0 || a.s7 == 0);
}

fcShort8 fcShort8_add(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w, a.s4 + b.s4, a.s5 + b.s5, a.s6 + b.s6, a.s7 + b.s7);
}

fcShort8 fcShort8_sub(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w, a.s4 - b.s4, a.s5 - b.s5, a.s6 - b.s6, a.s7 - b.s7);
}

fcShort8 fcShort8_mul(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w, a.s4 * b.s4, a.s5 * b.s5, a.s6 * b.s6, a.s7 * b.s7);
}

fcDouble8 fcShort8_muld(fcShort8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w), (cl_double)(a.s4 * b.s4), (cl_double)(a.s5 * b.s5), (cl_double)(a.s6 * b.s6), (cl_double)(a.s7 * b.s7));
}

fcFloat8 fcShort8_mulf(fcShort8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w), (cl_float)(a.s4 * b.s4), (cl_float)(a.s5 * b.s5), (cl_float)(a.s6 * b.s6), (cl_float)(a.s7 * b.s7));
}

fcShort8 fcShort8_mulk(fcShort8 a, cl_short k) {
  return fcShort8_create11111111(a.x * k, a.y * k, a.z * k, a.w * k, a.s4 * k, a.s5 * k, a.s6 * k, a.s7 * k);
}

fcDouble8 fcShort8_mulkd(fcShort8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k), (cl_double)(a.s4 * k), (cl_double)(a.s5 * k), (cl_double)(a.s6 * k), (cl_double)(a.s7 * k));
}

fcFloat8 fcShort8_mulkf(fcShort8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k), (cl_float)(a.s4 * k), (cl_float)(a.s5 * k), (cl_float)(a.s6 * k), (cl_float)(a.s7 * k));
}

fcShort8 fcShort8_div(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w, a.s4 / b.s4, a.s5 / b.s5, a.s6 / b.s6, a.s7 / b.s7);
}

fcDouble8 fcShort8_divd(fcShort8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w), (cl_double)(a.s4 / b.s4), (cl_double)(a.s5 / b.s5), (cl_double)(a.s6 / b.s6), (cl_double)(a.s7 / b.s7));
}

fcFloat8 fcShort8_divf(fcShort8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w), (cl_float)(a.s4 / b.s4), (cl_float)(a.s5 / b.s5), (cl_float)(a.s6 / b.s6), (cl_float)(a.s7 / b.s7));
}

fcShort8 fcShort8_divk(fcShort8 a, cl_short k) {
  return fcShort8_create11111111(a.x / k, a.y / k, a.z / k, a.w / k, a.s4 / k, a.s5 / k, a.s6 / k, a.s7 / k);
}

fcDouble8 fcShort8_divkd(fcShort8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k), (cl_double)(a.s4 / k), (cl_double)(a.s5 / k), (cl_double)(a.s6 / k), (cl_double)(a.s7 / k));
}

fcFloat8 fcShort8_divkf(fcShort8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k), (cl_float)(a.s4 / k), (cl_float)(a.s5 / k), (cl_float)(a.s6 / k), (cl_float)(a.s7 / k));
}

fcShort8 fcShort8_mod(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w, a.s4 % b.s4, a.s5 % b.s5, a.s6 % b.s6, a.s7 % b.s7);
}

fcShort8 fcShort8_modk(fcShort8 a, cl_short k) {
  return fcShort8_create11111111(a.x % k, a.y % k, a.z % k, a.w % k, a.s4 % k, a.s5 % k, a.s6 % k, a.s7 % k);
}

fcShort8 fcShort8_bitAnd(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w, a.s4 & b.s4, a.s5 & b.s5, a.s6 & b.s6, a.s7 & b.s7);
}

fcShort8 fcShort8_bitOr(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w, a.s4 | b.s4, a.s5 | b.s5, a.s6 | b.s6, a.s7 | b.s7);
}

fcShort8 fcShort8_bitXor(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w, a.s4 ^ b.s4, a.s5 ^ b.s5, a.s6 ^ b.s6, a.s7 ^ b.s7);
}

fcShort8 fcShort8_bitNot(fcShort8 a) {
  return fcShort8_create11111111(~a.x, ~a.y, ~a.z, ~a.w, ~a.s4, ~a.s5, ~a.s6, ~a.s7);
}

fcShort8 fcShort8_abs(fcShort8 a) {
  return fcShort8_create11111111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w), fcMath_abs(a.s4), fcMath_abs(a.s5), fcMath_abs(a.s6), fcMath_abs(a.s7));
}

fcShort8 fcShort8_clamp(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w), fcMath_clamp(a.s4, b.s4, c.s4), fcMath_clamp(a.s5, b.s5, c.s5), fcMath_clamp(a.s6, b.s6, c.s6), fcMath_clamp(a.s7, b.s7, c.s7));
}

fcShort8 fcShort8_max(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w), fcMath_max(a.s4, b.s4), fcMath_max(a.s5, b.s5), fcMath_max(a.s6, b.s6), fcMath_max(a.s7, b.s7));
}

fcShort8 fcShort8_maxMag(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w), fcMath_maxMag(a.s4, b.s4), fcMath_maxMag(a.s5, b.s5), fcMath_maxMag(a.s6, b.s6), fcMath_maxMag(a.s7, b.s7));
}

fcShort8 fcShort8_min(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w), fcMath_min(a.s4, b.s4), fcMath_min(a.s5, b.s5), fcMath_min(a.s6, b.s6), fcMath_min(a.s7, b.s7));
}

fcShort8 fcShort8_minMag(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w), fcMath_minMag(a.s4, b.s4), fcMath_minMag(a.s5, b.s5), fcMath_minMag(a.s6, b.s6), fcMath_minMag(a.s7, b.s7));
}

fcShort8 fcShort8_mix(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w), fcMath_mix(a.s4, b.s4, c.s4), fcMath_mix(a.s5, b.s5, c.s5), fcMath_mix(a.s6, b.s6, c.s6), fcMath_mix(a.s7, b.s7, c.s7));
}

fcShort8 fcShort8_clampk(fcShort8 v, cl_short min, cl_short max) {
  return fcShort8_create11111111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max), fcMath_clamp(v.s4, min, max), fcMath_clamp(v.s5, min, max), fcMath_clamp(v.s6, min, max), fcMath_clamp(v.s7, min, max));
}

fcShort8 fcShort8_maxk(fcShort8 x, cl_short y) {
  return fcShort8_create11111111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y), fcMath_max(x.s4, y), fcMath_max(x.s5, y), fcMath_max(x.s6, y), fcMath_max(x.s7, y));
}

fcShort8 fcShort8_mink(fcShort8 x, cl_short y) {
  return fcShort8_create11111111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y), fcMath_min(x.s4, y), fcMath_min(x.s5, y), fcMath_min(x.s6, y), fcMath_min(x.s7, y));
}

fcShort8 fcShort8_mixk(fcShort8 x, fcShort8 y, cl_short a) {
  return fcShort8_create11111111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a), fcMath_mix(x.s4, y.s4, a), fcMath_mix(x.s5, y.s5, a), fcMath_mix(x.s6, y.s6, a), fcMath_mix(x.s7, y.s7, a));
}

fcShort8 fcShort8_absDiff(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w), fcMath_absDiff(a.s4, b.s4), fcMath_absDiff(a.s5, b.s5), fcMath_absDiff(a.s6, b.s6), fcMath_absDiff(a.s7, b.s7));
}

fcShort8 fcShort8_addSat(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_addSats(a.x, b.x), fcMath_addSats(a.y, b.y), fcMath_addSats(a.z, b.z), fcMath_addSats(a.w, b.w), fcMath_addSats(a.s4, b.s4), fcMath_addSats(a.s5, b.s5), fcMath_addSats(a.s6, b.s6), fcMath_addSats(a.s7, b.s7));
}

fcShort8 fcShort8_clz(fcShort8 a) {
  return fcShort8_create11111111(fcMath_clzs(a.x), fcMath_clzs(a.y), fcMath_clzs(a.z), fcMath_clzs(a.w), fcMath_clzs(a.s4), fcMath_clzs(a.s5), fcMath_clzs(a.s6), fcMath_clzs(a.s7));
}

fcShort8 fcShort8_hadd(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_hadds(a.x, b.x), fcMath_hadds(a.y, b.y), fcMath_hadds(a.z, b.z), fcMath_hadds(a.w, b.w), fcMath_hadds(a.s4, b.s4), fcMath_hadds(a.s5, b.s5), fcMath_hadds(a.s6, b.s6), fcMath_hadds(a.s7, b.s7));
}

fcShort8 fcShort8_madHi(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_madHis(a.x, b.x, c.x), fcMath_madHis(a.y, b.y, c.y), fcMath_madHis(a.z, b.z, c.z), fcMath_madHis(a.w, b.w, c.w), fcMath_madHis(a.s4, b.s4, c.s4), fcMath_madHis(a.s5, b.s5, c.s5), fcMath_madHis(a.s6, b.s6, c.s6), fcMath_madHis(a.s7, b.s7, c.s7));
}

fcShort8 fcShort8_madSat(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_madSats(a.x, b.x, c.x), fcMath_madSats(a.y, b.y, c.y), fcMath_madSats(a.z, b.z, c.z), fcMath_madSats(a.w, b.w, c.w), fcMath_madSats(a.s4, b.s4, c.s4), fcMath_madSats(a.s5, b.s5, c.s5), fcMath_madSats(a.s6, b.s6, c.s6), fcMath_madSats(a.s7, b.s7, c.s7));
}

fcShort8 fcShort8_mulHi(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_mulHis(a.x, b.x), fcMath_mulHis(a.y, b.y), fcMath_mulHis(a.z, b.z), fcMath_mulHis(a.w, b.w), fcMath_mulHis(a.s4, b.s4), fcMath_mulHis(a.s5, b.s5), fcMath_mulHis(a.s6, b.s6), fcMath_mulHis(a.s7, b.s7));
}

fcShort8 fcShort8_rhadd(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_rhadds(a.x, b.x), fcMath_rhadds(a.y, b.y), fcMath_rhadds(a.z, b.z), fcMath_rhadds(a.w, b.w), fcMath_rhadds(a.s4, b.s4), fcMath_rhadds(a.s5, b.s5), fcMath_rhadds(a.s6, b.s6), fcMath_rhadds(a.s7, b.s7));
}

fcShort8 fcShort8_rotate(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_rotates(a.x, b.x), fcMath_rotates(a.y, b.y), fcMath_rotates(a.z, b.z), fcMath_rotates(a.w, b.w), fcMath_rotates(a.s4, b.s4), fcMath_rotates(a.s5, b.s5), fcMath_rotates(a.s6, b.s6), fcMath_rotates(a.s7, b.s7));
}

fcShort8 fcShort8_subSat(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_subSats(a.x, b.x), fcMath_subSats(a.y, b.y), fcMath_subSats(a.z, b.z), fcMath_subSats(a.w, b.w), fcMath_subSats(a.s4, b.s4), fcMath_subSats(a.s5, b.s5), fcMath_subSats(a.s6, b.s6), fcMath_subSats(a.s7, b.s7));
}


//
// fcInt2
//

fcInt2 fcInt2_create() {
  fcInt2 result = {.s = {0}};
  return result;
}

fcInt2 fcInt2_create1(cl_int v) {
  return fcInt2_create11(v, v);
}

fcInt2 fcInt2_create11(cl_int x, cl_int y) {
  fcInt2 result;
  result.x = x;
  result.y = y;
  return result;
}

fcInt2 fcInt2_create2(fcInt2 vec1) {
  return fcInt2_create11(vec1.x, vec1.y);
}

fcByte2 fcInt2_convertByte2(fcInt2 a) {
  return fcByte2_create11((cl_byte) a.x, (cl_byte) a.y);
}

fcShort2 fcInt2_convertShort2(fcInt2 a) {
  return fcShort2_create11((cl_short) a.x, (cl_short) a.y);
}

fcLong2 fcInt2_convertLong2(fcInt2 a) {
  return fcLong2_create11((cl_long) a.x, (cl_long) a.y);
}

fcFloat2 fcInt2_convertFloat2(fcInt2 a) {
  return fcFloat2_create11((cl_float) a.x, (cl_float) a.y);
}

fcDouble2 fcInt2_convertDouble2(fcInt2 a) {
  return fcDouble2_create11((cl_double) a.x, (cl_double) a.y);
}

fcInt2 fcInt2_isEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
}

fcInt2 fcInt2_isNotEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
}

fcInt2 fcInt2_isGreater(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
}

fcInt2 fcInt2_isGreaterEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
}

fcInt2 fcInt2_isLess(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
}

fcInt2 fcInt2_isLessEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
}

fcInt2 fcInt2_select(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y));
}

cl_int fcInt2_any(fcInt2 a) {
  return a.x != 0 || a.y != 0;
}

cl_int fcInt2_all(fcInt2 a) {
  return !(a.x == 0 || a.y == 0);
}

fcInt2 fcInt2_add(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x + b.x, a.y + b.y);
}

fcInt2 fcInt2_sub(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x - b.x, a.y - b.y);
}

fcInt2 fcInt2_mul(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x * b.x, a.y * b.y);
}

fcDouble2 fcInt2_muld(fcInt2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x * b.x), (cl_double)(a.y * b.y));
}

fcFloat2 fcInt2_mulf(fcInt2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x * b.x), (cl_float)(a.y * b.y));
}

fcInt2 fcInt2_mulk(fcInt2 a, cl_int k) {
  return fcInt2_create11(a.x * k, a.y * k);
}

fcDouble2 fcInt2_mulkd(fcInt2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x * k), (cl_double)(a.y * k));
}

fcFloat2 fcInt2_mulkf(fcInt2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x * k), (cl_float)(a.y * k));
}

fcInt2 fcInt2_div(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x / b.x, a.y / b.y);
}

fcDouble2 fcInt2_divd(fcInt2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x / b.x), (cl_double)(a.y / b.y));
}

fcFloat2 fcInt2_divf(fcInt2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x / b.x), (cl_float)(a.y / b.y));
}

fcInt2 fcInt2_divk(fcInt2 a, cl_int k) {
  return fcInt2_create11(a.x / k, a.y / k);
}

fcDouble2 fcInt2_divkd(fcInt2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x / k), (cl_double)(a.y / k));
}

fcFloat2 fcInt2_divkf(fcInt2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x / k), (cl_float)(a.y / k));
}

fcInt2 fcInt2_mod(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x % b.x, a.y % b.y);
}

fcInt2 fcInt2_modk(fcInt2 a, cl_int k) {
  return fcInt2_create11(a.x % k, a.y % k);
}

fcInt2 fcInt2_bitAnd(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x & b.x, a.y & b.y);
}

fcInt2 fcInt2_bitOr(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x | b.x, a.y | b.y);
}

fcInt2 fcInt2_bitXor(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.x ^ b.x, a.y ^ b.y);
}

fcInt2 fcInt2_bitNot(fcInt2 a) {
  return fcInt2_create11(~a.x, ~a.y);
}

fcInt2 fcInt2_abs(fcInt2 a) {
  return fcInt2_create11(fcMath_abs(a.x), fcMath_abs(a.y));
}

fcInt2 fcInt2_clamp(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y));
}

fcInt2 fcInt2_max(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y));
}

fcInt2 fcInt2_maxMag(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y));
}

fcInt2 fcInt2_min(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y));
}

fcInt2 fcInt2_minMag(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y));
}

fcInt2 fcInt2_mix(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y));
}

fcInt2 fcInt2_clampk(fcInt2 v, cl_int min, cl_int max) {
  return fcInt2_create11(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max));
}

fcInt2 fcInt2_maxk(fcInt2 x, cl_int y) {
  return fcInt2_create11(fcMath_max(x.x, y), fcMath_max(x.y, y));
}

fcInt2 fcInt2_mink(fcInt2 x, cl_int y) {
  return fcInt2_create11(fcMath_min(x.x, y), fcMath_min(x.y, y));
}

fcInt2 fcInt2_mixk(fcInt2 x, fcInt2 y, cl_int a) {
  return fcInt2_create11(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a));
}

fcInt2 fcInt2_absDiff(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y));
}

fcInt2 fcInt2_addSat(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_addSat(a.x, b.x), fcMath_addSat(a.y, b.y));
}

fcInt2 fcInt2_clz(fcInt2 a) {
  return fcInt2_create11(fcMath_clz(a.x), fcMath_clz(a.y));
}

fcInt2 fcInt2_hadd(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_hadd(a.x, b.x), fcMath_hadd(a.y, b.y));
}

fcInt2 fcInt2_madHi(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_madHi(a.x, b.x, c.x), fcMath_madHi(a.y, b.y, c.y));
}

fcInt2 fcInt2_madSat(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_madSat(a.x, b.x, c.x), fcMath_madSat(a.y, b.y, c.y));
}

fcInt2 fcInt2_mulHi(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_mulHi(a.x, b.x), fcMath_mulHi(a.y, b.y));
}

fcInt2 fcInt2_rhadd(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_rhadd(a.x, b.x), fcMath_rhadd(a.y, b.y));
}

fcInt2 fcInt2_rotate(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_rotate(a.x, b.x), fcMath_rotate(a.y, b.y));
}

fcInt2 fcInt2_subSat(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_subSat(a.x, b.x), fcMath_subSat(a.y, b.y));
}

fcInt2 fcInt2_mad24(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_mad24(a.x, b.x, c.x), fcMath_mad24(a.y, b.y, c.y));
}

fcInt2 fcInt2_mul24(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_mul24(a.x, b.x), fcMath_mul24(a.y, b.y));
}


//
// fcInt3
//

fcInt3 fcInt3_create() {
  fcInt3 result = {.s = {0}};
  return result;
}

fcInt3 fcInt3_create1(cl_int v) {
  return fcInt3_create111(v, v, v);
}

fcInt3 fcInt3_create111(cl_int x, cl_int y, cl_int z) {
  fcInt3 result;
  result.x = x;
  result.y = y;
  result.z = z;
  return result;
}

fcInt3 fcInt3_create12(cl_int x, fcInt2 vec1) {
  return fcInt3_create111(x, vec1.x, vec1.y);
}
fcInt3 fcInt3_create21(fcInt2 vec1, cl_int z) {
  return fcInt3_create111(vec1.x, vec1.y, z);
}
fcInt3 fcInt3_create3(fcInt3 vec1) {
  return fcInt3_create111(vec1.x, vec1.y, vec1.z);
}

fcByte3 fcInt3_convertByte3(fcInt3 a) {
  return fcByte3_create111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z);
}

fcShort3 fcInt3_convertShort3(fcInt3 a) {
  return fcShort3_create111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z);
}

fcLong3 fcInt3_convertLong3(fcInt3 a) {
  return fcLong3_create111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z);
}

fcFloat3 fcInt3_convertFloat3(fcInt3 a) {
  return fcFloat3_create111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z);
}

fcDouble3 fcInt3_convertDouble3(fcInt3 a) {
  return fcDouble3_create111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z);
}

fcInt2 fcInt3_asInt2(fcInt3 a) {
  return fcInt2_create11(a.x, a.y);
}

fcInt3 fcInt3_isEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
}

fcInt3 fcInt3_isNotEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
}

fcInt3 fcInt3_isGreater(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
}

fcInt3 fcInt3_isGreaterEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
}

fcInt3 fcInt3_isLess(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
}

fcInt3 fcInt3_isLessEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
}

fcInt3 fcInt3_select(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z));
}

cl_int fcInt3_any(fcInt3 a) {
  return a.x != 0 || a.y != 0 || a.z != 0;
}

cl_int fcInt3_all(fcInt3 a) {
  return !(a.x == 0 || a.y == 0 || a.z == 0);
}

fcInt3 fcInt3_add(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x + b.x, a.y + b.y, a.z + b.z);
}

fcInt3 fcInt3_sub(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x - b.x, a.y - b.y, a.z - b.z);
}

fcInt3 fcInt3_mul(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x * b.x, a.y * b.y, a.z * b.z);
}

fcDouble3 fcInt3_muld(fcInt3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z));
}

fcFloat3 fcInt3_mulf(fcInt3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z));
}

fcInt3 fcInt3_mulk(fcInt3 a, cl_int k) {
  return fcInt3_create111(a.x * k, a.y * k, a.z * k);
}

fcDouble3 fcInt3_mulkd(fcInt3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k));
}

fcFloat3 fcInt3_mulkf(fcInt3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k));
}

fcInt3 fcInt3_div(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x / b.x, a.y / b.y, a.z / b.z);
}

fcDouble3 fcInt3_divd(fcInt3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z));
}

fcFloat3 fcInt3_divf(fcInt3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z));
}

fcInt3 fcInt3_divk(fcInt3 a, cl_int k) {
  return fcInt3_create111(a.x / k, a.y / k, a.z / k);
}

fcDouble3 fcInt3_divkd(fcInt3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k));
}

fcFloat3 fcInt3_divkf(fcInt3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k));
}

fcInt3 fcInt3_mod(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x % b.x, a.y % b.y, a.z % b.z);
}

fcInt3 fcInt3_modk(fcInt3 a, cl_int k) {
  return fcInt3_create111(a.x % k, a.y % k, a.z % k);
}

fcInt3 fcInt3_bitAnd(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x & b.x, a.y & b.y, a.z & b.z);
}

fcInt3 fcInt3_bitOr(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x | b.x, a.y | b.y, a.z | b.z);
}

fcInt3 fcInt3_bitXor(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z);
}

fcInt3 fcInt3_bitNot(fcInt3 a) {
  return fcInt3_create111(~a.x, ~a.y, ~a.z);
}

fcInt3 fcInt3_abs(fcInt3 a) {
  return fcInt3_create111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z));
}

fcInt3 fcInt3_clamp(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z));
}

fcInt3 fcInt3_max(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z));
}

fcInt3 fcInt3_maxMag(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z));
}

fcInt3 fcInt3_min(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z));
}

fcInt3 fcInt3_minMag(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z));
}

fcInt3 fcInt3_mix(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z));
}

fcInt3 fcInt3_clampk(fcInt3 v, cl_int min, cl_int max) {
  return fcInt3_create111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max));
}

fcInt3 fcInt3_maxk(fcInt3 x, cl_int y) {
  return fcInt3_create111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y));
}

fcInt3 fcInt3_mink(fcInt3 x, cl_int y) {
  return fcInt3_create111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y));
}

fcInt3 fcInt3_mixk(fcInt3 x, fcInt3 y, cl_int a) {
  return fcInt3_create111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a));
}

fcInt3 fcInt3_absDiff(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z));
}

fcInt3 fcInt3_addSat(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_addSat(a.x, b.x), fcMath_addSat(a.y, b.y), fcMath_addSat(a.z, b.z));
}

fcInt3 fcInt3_clz(fcInt3 a) {
  return fcInt3_create111(fcMath_clz(a.x), fcMath_clz(a.y), fcMath_clz(a.z));
}

fcInt3 fcInt3_hadd(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_hadd(a.x, b.x), fcMath_hadd(a.y, b.y), fcMath_hadd(a.z, b.z));
}

fcInt3 fcInt3_madHi(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_madHi(a.x, b.x, c.x), fcMath_madHi(a.y, b.y, c.y), fcMath_madHi(a.z, b.z, c.z));
}

fcInt3 fcInt3_madSat(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_madSat(a.x, b.x, c.x), fcMath_madSat(a.y, b.y, c.y), fcMath_madSat(a.z, b.z, c.z));
}

fcInt3 fcInt3_mulHi(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_mulHi(a.x, b.x), fcMath_mulHi(a.y, b.y), fcMath_mulHi(a.z, b.z));
}

fcInt3 fcInt3_rhadd(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_rhadd(a.x, b.x), fcMath_rhadd(a.y, b.y), fcMath_rhadd(a.z, b.z));
}

fcInt3 fcInt3_rotate(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_rotate(a.x, b.x), fcMath_rotate(a.y, b.y), fcMath_rotate(a.z, b.z));
}

fcInt3 fcInt3_subSat(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_subSat(a.x, b.x), fcMath_subSat(a.y, b.y), fcMath_subSat(a.z, b.z));
}

fcInt3 fcInt3_mad24(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_mad24(a.x, b.x, c.x), fcMath_mad24(a.y, b.y, c.y), fcMath_mad24(a.z, b.z, c.z));
}

fcInt3 fcInt3_mul24(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_mul24(a.x, b.x), fcMath_mul24(a.y, b.y), fcMath_mul24(a.z, b.z));
}


//
// fcInt4
//

fcInt4 fcInt4_create() {
  fcInt4 result = {.s = {0}};
  return result;
}

fcInt4 fcInt4_create1(cl_int v) {
  return fcInt4_create1111(v, v, v, v);
}

fcInt4 fcInt4_create1111(cl_int x, cl_int y, cl_int z, cl_int w) {
  fcInt4 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  return result;
}

fcInt4 fcInt4_create112(cl_int x, cl_int y, fcInt2 vec1) {
  return fcInt4_create1111(x, y, vec1.x, vec1.y);
}
fcInt4 fcInt4_create121(cl_int x, fcInt2 vec1, cl_int w) {
  return fcInt4_create1111(x, vec1.x, vec1.y, w);
}
fcInt4 fcInt4_create13(cl_int x, fcInt3 vec1) {
  return fcInt4_create1111(x, vec1.x, vec1.y, vec1.z);
}
fcInt4 fcInt4_create211(fcInt2 vec1, cl_int z, cl_int w) {
  return fcInt4_create1111(vec1.x, vec1.y, z, w);
}
fcInt4 fcInt4_create22(fcInt2 vec1, fcInt2 vec2) {
  return fcInt4_create1111(vec1.x, vec1.y, vec2.x, vec2.y);
}
fcInt4 fcInt4_create31(fcInt3 vec1, cl_int w) {
  return fcInt4_create1111(vec1.x, vec1.y, vec1.z, w);
}
fcInt4 fcInt4_create4(fcInt4 vec1) {
  return fcInt4_create1111(vec1.x, vec1.y, vec1.z, vec1.w);
}

fcInt2 fcInt4_odd(fcInt4 a) {
  return fcInt2_create11(a.y, a.w);
}

fcInt2 fcInt4_even(fcInt4 a) {
  return fcInt2_create11(a.x, a.z);
}

fcByte4 fcInt4_convertByte4(fcInt4 a) {
  return fcByte4_create1111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w);
}

fcShort4 fcInt4_convertShort4(fcInt4 a) {
  return fcShort4_create1111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w);
}

fcLong4 fcInt4_convertLong4(fcInt4 a) {
  return fcLong4_create1111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w);
}

fcFloat4 fcInt4_convertFloat4(fcInt4 a) {
  return fcFloat4_create1111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w);
}

fcDouble4 fcInt4_convertDouble4(fcInt4 a) {
  return fcDouble4_create1111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w);
}

fcInt2 fcInt4_asInt2(fcInt4 a) {
  return fcInt2_create11(a.x, a.y);
}

fcInt3 fcInt4_asInt3(fcInt4 a) {
  return fcInt3_create111(a.x, a.y, a.z);
}

fcInt4 fcInt4_isEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
}

fcInt4 fcInt4_isNotEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
}

fcInt4 fcInt4_isGreater(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
}

fcInt4 fcInt4_isGreaterEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
}

fcInt4 fcInt4_isLess(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
}

fcInt4 fcInt4_isLessEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
}

fcInt4 fcInt4_select(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w));
}

cl_int fcInt4_any(fcInt4 a) {
  return a.x != 0 || a.y != 0 || a.z != 0 || a.w != 0;
}

cl_int fcInt4_all(fcInt4 a) {
  return !(a.x == 0 || a.y == 0 || a.z == 0 || a.w == 0);
}

fcInt4 fcInt4_add(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

fcInt4 fcInt4_sub(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

fcInt4 fcInt4_mul(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

fcDouble4 fcInt4_muld(fcInt4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w));
}

fcFloat4 fcInt4_mulf(fcInt4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w));
}

fcInt4 fcInt4_mulk(fcInt4 a, cl_int k) {
  return fcInt4_create1111(a.x * k, a.y * k, a.z * k, a.w * k);
}

fcDouble4 fcInt4_mulkd(fcInt4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k));
}

fcFloat4 fcInt4_mulkf(fcInt4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k));
}

fcInt4 fcInt4_div(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

fcDouble4 fcInt4_divd(fcInt4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w));
}

fcFloat4 fcInt4_divf(fcInt4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w));
}

fcInt4 fcInt4_divk(fcInt4 a, cl_int k) {
  return fcInt4_create1111(a.x / k, a.y / k, a.z / k, a.w / k);
}

fcDouble4 fcInt4_divkd(fcInt4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k));
}

fcFloat4 fcInt4_divkf(fcInt4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k));
}

fcInt4 fcInt4_mod(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
}

fcInt4 fcInt4_modk(fcInt4 a, cl_int k) {
  return fcInt4_create1111(a.x % k, a.y % k, a.z % k, a.w % k);
}

fcInt4 fcInt4_bitAnd(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
}

fcInt4 fcInt4_bitOr(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
}

fcInt4 fcInt4_bitXor(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
}

fcInt4 fcInt4_bitNot(fcInt4 a) {
  return fcInt4_create1111(~a.x, ~a.y, ~a.z, ~a.w);
}

fcInt4 fcInt4_abs(fcInt4 a) {
  return fcInt4_create1111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w));
}

fcInt4 fcInt4_clamp(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w));
}

fcInt4 fcInt4_max(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w));
}

fcInt4 fcInt4_maxMag(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w));
}

fcInt4 fcInt4_min(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w));
}

fcInt4 fcInt4_minMag(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w));
}

fcInt4 fcInt4_mix(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w));
}

fcInt4 fcInt4_clampk(fcInt4 v, cl_int min, cl_int max) {
  return fcInt4_create1111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max));
}

fcInt4 fcInt4_maxk(fcInt4 x, cl_int y) {
  return fcInt4_create1111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y));
}

fcInt4 fcInt4_mink(fcInt4 x, cl_int y) {
  return fcInt4_create1111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y));
}

fcInt4 fcInt4_mixk(fcInt4 x, fcInt4 y, cl_int a) {
  return fcInt4_create1111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a));
}

fcInt4 fcInt4_absDiff(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w));
}

fcInt4 fcInt4_addSat(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_addSat(a.x, b.x), fcMath_addSat(a.y, b.y), fcMath_addSat(a.z, b.z), fcMath_addSat(a.w, b.w));
}

fcInt4 fcInt4_clz(fcInt4 a) {
  return fcInt4_create1111(fcMath_clz(a.x), fcMath_clz(a.y), fcMath_clz(a.z), fcMath_clz(a.w));
}

fcInt4 fcInt4_hadd(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_hadd(a.x, b.x), fcMath_hadd(a.y, b.y), fcMath_hadd(a.z, b.z), fcMath_hadd(a.w, b.w));
}

fcInt4 fcInt4_madHi(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_madHi(a.x, b.x, c.x), fcMath_madHi(a.y, b.y, c.y), fcMath_madHi(a.z, b.z, c.z), fcMath_madHi(a.w, b.w, c.w));
}

fcInt4 fcInt4_madSat(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_madSat(a.x, b.x, c.x), fcMath_madSat(a.y, b.y, c.y), fcMath_madSat(a.z, b.z, c.z), fcMath_madSat(a.w, b.w, c.w));
}

fcInt4 fcInt4_mulHi(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_mulHi(a.x, b.x), fcMath_mulHi(a.y, b.y), fcMath_mulHi(a.z, b.z), fcMath_mulHi(a.w, b.w));
}

fcInt4 fcInt4_rhadd(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_rhadd(a.x, b.x), fcMath_rhadd(a.y, b.y), fcMath_rhadd(a.z, b.z), fcMath_rhadd(a.w, b.w));
}

fcInt4 fcInt4_rotate(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_rotate(a.x, b.x), fcMath_rotate(a.y, b.y), fcMath_rotate(a.z, b.z), fcMath_rotate(a.w, b.w));
}

fcInt4 fcInt4_subSat(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_subSat(a.x, b.x), fcMath_subSat(a.y, b.y), fcMath_subSat(a.z, b.z), fcMath_subSat(a.w, b.w));
}

fcInt4 fcInt4_mad24(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_mad24(a.x, b.x, c.x), fcMath_mad24(a.y, b.y, c.y), fcMath_mad24(a.z, b.z, c.z), fcMath_mad24(a.w, b.w, c.w));
}

fcInt4 fcInt4_mul24(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_mul24(a.x, b.x), fcMath_mul24(a.y, b.y), fcMath_mul24(a.z, b.z), fcMath_mul24(a.w, b.w));
}


//
// fcInt8
//

fcInt8 fcInt8_create() {
  fcInt8 result = {.s = {0}};
  return result;
}

fcInt8 fcInt8_create1(cl_int v) {
  return fcInt8_create11111111(v, v, v, v, v, v, v, v);
}

fcInt8 fcInt8_create11111111(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s4;
  result.s5 = s5;
  result.s6 = s6;
  result.s7 = s7;
  return result;
}

fcInt8 fcInt8_create1111112(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec1) {
  return fcInt8_create11111111(x, y, z, w, s4, s5, vec1.x, vec1.y);
}
fcInt8 fcInt8_create1111121(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt2 vec1, cl_int s7) {
  return fcInt8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, s7);
}
fcInt8 fcInt8_create111113(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt3 vec1) {
  return fcInt8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, vec1.z);
}
fcInt8 fcInt8_create1111211(cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, z, w, vec1.x, vec1.y, s6, s7);
}
fcInt8 fcInt8_create111122(cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
}
fcInt8 fcInt8_create111131(cl_int x, cl_int y, cl_int z, cl_int w, fcInt3 vec1, cl_int s7) {
  return fcInt8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, s7);
}
fcInt8 fcInt8_create11114(cl_int x, cl_int y, cl_int z, cl_int w, fcInt4 vec1) {
  return fcInt8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
}
fcInt8 fcInt8_create1112111(cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, s5, s6, s7);
}
fcInt8 fcInt8_create111212(cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create111221(cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create11123(cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt3 vec2) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create111311(cl_int x, cl_int y, cl_int z, fcInt3 vec1, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, s6, s7);
}
fcInt8 fcInt8_create11132(cl_int x, cl_int y, cl_int z, fcInt3 vec1, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
}
fcInt8 fcInt8_create11141(cl_int x, cl_int y, cl_int z, fcInt4 vec1, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s7);
}
fcInt8 fcInt8_create1121111(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, s4, s5, s6, s7);
}
fcInt8 fcInt8_create112112(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, s4, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create112121(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create11213(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create112211(cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s6, s7);
}
fcInt8 fcInt8_create11222(cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcInt8 fcInt8_create11231(cl_int x, cl_int y, fcInt2 vec1, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s7);
}
fcInt8 fcInt8_create1124(cl_int x, cl_int y, fcInt2 vec1, fcInt4 vec2) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcInt8 fcInt8_create113111(cl_int x, cl_int y, fcInt3 vec1, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, s6, s7);
}
fcInt8 fcInt8_create11312(cl_int x, cl_int y, fcInt3 vec1, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create11321(cl_int x, cl_int y, fcInt3 vec1, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create1133(cl_int x, cl_int y, fcInt3 vec1, fcInt3 vec2) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create11411(cl_int x, cl_int y, fcInt4 vec1, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s6, s7);
}
fcInt8 fcInt8_create1142(cl_int x, cl_int y, fcInt4 vec1, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
}
fcInt8 fcInt8_create1211111(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, s4, s5, s6, s7);
}
fcInt8 fcInt8_create121112(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, s4, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create121121(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create12113(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create121211(cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s6, s7);
}
fcInt8 fcInt8_create12122(cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcInt8 fcInt8_create12131(cl_int x, fcInt2 vec1, cl_int w, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s7);
}
fcInt8 fcInt8_create1214(cl_int x, fcInt2 vec1, cl_int w, fcInt4 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcInt8 fcInt8_create122111(cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, s6, s7);
}
fcInt8 fcInt8_create12212(cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcInt8 fcInt8_create12221(cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcInt8 fcInt8_create1223(cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcInt8 fcInt8_create12311(cl_int x, fcInt2 vec1, fcInt3 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcInt8 fcInt8_create1232(cl_int x, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcInt8 fcInt8_create1241(cl_int x, fcInt2 vec1, fcInt4 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcInt8 fcInt8_create131111(cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, s6, s7);
}
fcInt8 fcInt8_create13112(cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create13121(cl_int x, fcInt3 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create1313(cl_int x, fcInt3 vec1, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create13211(cl_int x, fcInt3 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s6, s7);
}
fcInt8 fcInt8_create1322(cl_int x, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcInt8 fcInt8_create1331(cl_int x, fcInt3 vec1, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s7);
}
fcInt8 fcInt8_create134(cl_int x, fcInt3 vec1, fcInt4 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcInt8 fcInt8_create14111(cl_int x, fcInt4 vec1, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, s6, s7);
}
fcInt8 fcInt8_create1412(cl_int x, fcInt4 vec1, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create1421(cl_int x, fcInt4 vec1, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create143(cl_int x, fcInt4 vec1, fcInt3 vec2) {
  return fcInt8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create2111111(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, s4, s5, s6, s7);
}
fcInt8 fcInt8_create211112(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, s4, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create211121(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create21113(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create211211(fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s6, s7);
}
fcInt8 fcInt8_create21122(fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcInt8 fcInt8_create21131(fcInt2 vec1, cl_int z, cl_int w, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcInt8 fcInt8_create2114(fcInt2 vec1, cl_int z, cl_int w, fcInt4 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcInt8 fcInt8_create212111(fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, s6, s7);
}
fcInt8 fcInt8_create21212(fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcInt8 fcInt8_create21221(fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcInt8 fcInt8_create2123(fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcInt8 fcInt8_create21311(fcInt2 vec1, cl_int z, fcInt3 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcInt8 fcInt8_create2132(fcInt2 vec1, cl_int z, fcInt3 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcInt8 fcInt8_create2141(fcInt2 vec1, cl_int z, fcInt4 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcInt8 fcInt8_create221111(fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, s6, s7);
}
fcInt8 fcInt8_create22112(fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, vec3.x, vec3.y);
}
fcInt8 fcInt8_create22121(fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, s7);
}
fcInt8 fcInt8_create2213(fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, vec3.z);
}
fcInt8 fcInt8_create22211(fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s6, s7);
}
fcInt8 fcInt8_create2222(fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, fcInt2 vec4) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
}
fcInt8 fcInt8_create2231(fcInt2 vec1, fcInt2 vec2, fcInt3 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s7);
}
fcInt8 fcInt8_create224(fcInt2 vec1, fcInt2 vec2, fcInt4 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
}
fcInt8 fcInt8_create23111(fcInt2 vec1, fcInt3 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, s6, s7);
}
fcInt8 fcInt8_create2312(fcInt2 vec1, fcInt3 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, vec3.x, vec3.y);
}
fcInt8 fcInt8_create2321(fcInt2 vec1, fcInt3 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s7);
}
fcInt8 fcInt8_create233(fcInt2 vec1, fcInt3 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
}
fcInt8 fcInt8_create2411(fcInt2 vec1, fcInt4 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s6, s7);
}
fcInt8 fcInt8_create242(fcInt2 vec1, fcInt4 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
}
fcInt8 fcInt8_create311111(fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, s6, s7);
}
fcInt8 fcInt8_create31112(fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create31121(fcInt3 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create3113(fcInt3 vec1, cl_int w, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create31211(fcInt3 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s6, s7);
}
fcInt8 fcInt8_create3122(fcInt3 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcInt8 fcInt8_create3131(fcInt3 vec1, cl_int w, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcInt8 fcInt8_create314(fcInt3 vec1, cl_int w, fcInt4 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcInt8 fcInt8_create32111(fcInt3 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, s6, s7);
}
fcInt8 fcInt8_create3212(fcInt3 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcInt8 fcInt8_create3221(fcInt3 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcInt8 fcInt8_create323(fcInt3 vec1, fcInt2 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcInt8 fcInt8_create3311(fcInt3 vec1, fcInt3 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcInt8 fcInt8_create332(fcInt3 vec1, fcInt3 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcInt8 fcInt8_create341(fcInt3 vec1, fcInt4 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcInt8 fcInt8_create41111(fcInt4 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, s6, s7);
}
fcInt8 fcInt8_create4112(fcInt4 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, vec2.x, vec2.y);
}
fcInt8 fcInt8_create4121(fcInt4 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, s7);
}
fcInt8 fcInt8_create413(fcInt4 vec1, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, vec2.z);
}
fcInt8 fcInt8_create4211(fcInt4 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s6, s7);
}
fcInt8 fcInt8_create422(fcInt4 vec1, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcInt8 fcInt8_create431(fcInt4 vec1, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s7);
}
fcInt8 fcInt8_create44(fcInt4 vec1, fcInt4 vec2) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcInt8 fcInt8_create8(fcInt8 vec1) {
  return fcInt8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s4, vec1.s5, vec1.s6, vec1.s7);
}

fcInt4 fcInt8_odd(fcInt8 a) {
  return fcInt4_create1111(a.y, a.w, a.s5, a.s7);
}

fcInt4 fcInt8_even(fcInt8 a) {
  return fcInt4_create1111(a.x, a.z, a.s4, a.s6);
}

fcByte8 fcInt8_convertByte8(fcInt8 a) {
  return fcByte8_create11111111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w, (cl_byte) a.s4, (cl_byte) a.s5, (cl_byte) a.s6, (cl_byte) a.s7);
}

fcShort8 fcInt8_convertShort8(fcInt8 a) {
  return fcShort8_create11111111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w, (cl_short) a.s4, (cl_short) a.s5, (cl_short) a.s6, (cl_short) a.s7);
}

fcLong8 fcInt8_convertLong8(fcInt8 a) {
  return fcLong8_create11111111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w, (cl_long) a.s4, (cl_long) a.s5, (cl_long) a.s6, (cl_long) a.s7);
}

fcFloat8 fcInt8_convertFloat8(fcInt8 a) {
  return fcFloat8_create11111111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w, (cl_float) a.s4, (cl_float) a.s5, (cl_float) a.s6, (cl_float) a.s7);
}

fcDouble8 fcInt8_convertDouble8(fcInt8 a) {
  return fcDouble8_create11111111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w, (cl_double) a.s4, (cl_double) a.s5, (cl_double) a.s6, (cl_double) a.s7);
}

fcInt2 fcInt8_asInt2(fcInt8 a) {
  return fcInt2_create11(a.x, a.y);
}

fcInt3 fcInt8_asInt3(fcInt8 a) {
  return fcInt3_create111(a.x, a.y, a.z);
}

fcInt4 fcInt8_asInt4(fcInt8 a) {
  return fcInt4_create1111(a.x, a.y, a.z, a.w);
}

fcInt8 fcInt8_isEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s4 == b.s4? 1 : 0, a.s5 == b.s5? 1 : 0, a.s6 == b.s6? 1 : 0, a.s7 == b.s7? 1 : 0);
}

fcInt8 fcInt8_isNotEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s4 != b.s4? 1 : 0, a.s5 != b.s5? 1 : 0, a.s6 != b.s6? 1 : 0, a.s7 != b.s7? 1 : 0);
}

fcInt8 fcInt8_isGreater(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s4 > b.s4? 1 : 0, a.s5 > b.s5? 1 : 0, a.s6 > b.s6? 1 : 0, a.s7 > b.s7? 1 : 0);
}

fcInt8 fcInt8_isGreaterEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s4 >= b.s4? 1 : 0, a.s5 >= b.s5? 1 : 0, a.s6 >= b.s6? 1 : 0, a.s7 >= b.s7? 1 : 0);
}

fcInt8 fcInt8_isLess(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s4 < b.s4? 1 : 0, a.s5 < b.s5? 1 : 0, a.s6 < b.s6? 1 : 0, a.s7 < b.s7? 1 : 0);
}

fcInt8 fcInt8_isLessEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s4 <= b.s4? 1 : 0, a.s5 <= b.s5? 1 : 0, a.s6 <= b.s6? 1 : 0, a.s7 <= b.s7? 1 : 0);
}

fcInt8 fcInt8_select(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w), fcMath_select(a.s4, b.s4, c.s4), fcMath_select(a.s5, b.s5, c.s5), fcMath_select(a.s6, b.s6, c.s6), fcMath_select(a.s7, b.s7, c.s7));
}

cl_int fcInt8_any(fcInt8 a) {
  return a.x != 0 || a.y != 0 || a.z != 0 || a.w != 0 || a.s4 != 0 || a.s5 != 0 || a.s6 != 0 || a.s7 != 0;
}

cl_int fcInt8_all(fcInt8 a) {
  return !(a.x == 0 || a.y == 0 || a.z == 0 || a.w == 0 || a.s4 == 0 || a.s5 == 0 || a.s6 == 0 || a.s7 == 0);
}

fcInt8 fcInt8_add(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w, a.s4 + b.s4, a.s5 + b.s5, a.s6 + b.s6, a.s7 + b.s7);
}

fcInt8 fcInt8_sub(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w, a.s4 - b.s4, a.s5 - b.s5, a.s6 - b.s6, a.s7 - b.s7);
}

fcInt8 fcInt8_mul(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w, a.s4 * b.s4, a.s5 * b.s5, a.s6 * b.s6, a.s7 * b.s7);
}

fcDouble8 fcInt8_muld(fcInt8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w), (cl_double)(a.s4 * b.s4), (cl_double)(a.s5 * b.s5), (cl_double)(a.s6 * b.s6), (cl_double)(a.s7 * b.s7));
}

fcFloat8 fcInt8_mulf(fcInt8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w), (cl_float)(a.s4 * b.s4), (cl_float)(a.s5 * b.s5), (cl_float)(a.s6 * b.s6), (cl_float)(a.s7 * b.s7));
}

fcInt8 fcInt8_mulk(fcInt8 a, cl_int k) {
  return fcInt8_create11111111(a.x * k, a.y * k, a.z * k, a.w * k, a.s4 * k, a.s5 * k, a.s6 * k, a.s7 * k);
}

fcDouble8 fcInt8_mulkd(fcInt8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k), (cl_double)(a.s4 * k), (cl_double)(a.s5 * k), (cl_double)(a.s6 * k), (cl_double)(a.s7 * k));
}

fcFloat8 fcInt8_mulkf(fcInt8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k), (cl_float)(a.s4 * k), (cl_float)(a.s5 * k), (cl_float)(a.s6 * k), (cl_float)(a.s7 * k));
}

fcInt8 fcInt8_div(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w, a.s4 / b.s4, a.s5 / b.s5, a.s6 / b.s6, a.s7 / b.s7);
}

fcDouble8 fcInt8_divd(fcInt8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w), (cl_double)(a.s4 / b.s4), (cl_double)(a.s5 / b.s5), (cl_double)(a.s6 / b.s6), (cl_double)(a.s7 / b.s7));
}

fcFloat8 fcInt8_divf(fcInt8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w), (cl_float)(a.s4 / b.s4), (cl_float)(a.s5 / b.s5), (cl_float)(a.s6 / b.s6), (cl_float)(a.s7 / b.s7));
}

fcInt8 fcInt8_divk(fcInt8 a, cl_int k) {
  return fcInt8_create11111111(a.x / k, a.y / k, a.z / k, a.w / k, a.s4 / k, a.s5 / k, a.s6 / k, a.s7 / k);
}

fcDouble8 fcInt8_divkd(fcInt8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k), (cl_double)(a.s4 / k), (cl_double)(a.s5 / k), (cl_double)(a.s6 / k), (cl_double)(a.s7 / k));
}

fcFloat8 fcInt8_divkf(fcInt8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k), (cl_float)(a.s4 / k), (cl_float)(a.s5 / k), (cl_float)(a.s6 / k), (cl_float)(a.s7 / k));
}

fcInt8 fcInt8_mod(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w, a.s4 % b.s4, a.s5 % b.s5, a.s6 % b.s6, a.s7 % b.s7);
}

fcInt8 fcInt8_modk(fcInt8 a, cl_int k) {
  return fcInt8_create11111111(a.x % k, a.y % k, a.z % k, a.w % k, a.s4 % k, a.s5 % k, a.s6 % k, a.s7 % k);
}

fcInt8 fcInt8_bitAnd(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w, a.s4 & b.s4, a.s5 & b.s5, a.s6 & b.s6, a.s7 & b.s7);
}

fcInt8 fcInt8_bitOr(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w, a.s4 | b.s4, a.s5 | b.s5, a.s6 | b.s6, a.s7 | b.s7);
}

fcInt8 fcInt8_bitXor(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w, a.s4 ^ b.s4, a.s5 ^ b.s5, a.s6 ^ b.s6, a.s7 ^ b.s7);
}

fcInt8 fcInt8_bitNot(fcInt8 a) {
  return fcInt8_create11111111(~a.x, ~a.y, ~a.z, ~a.w, ~a.s4, ~a.s5, ~a.s6, ~a.s7);
}

fcInt8 fcInt8_abs(fcInt8 a) {
  return fcInt8_create11111111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w), fcMath_abs(a.s4), fcMath_abs(a.s5), fcMath_abs(a.s6), fcMath_abs(a.s7));
}

fcInt8 fcInt8_clamp(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w), fcMath_clamp(a.s4, b.s4, c.s4), fcMath_clamp(a.s5, b.s5, c.s5), fcMath_clamp(a.s6, b.s6, c.s6), fcMath_clamp(a.s7, b.s7, c.s7));
}

fcInt8 fcInt8_max(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w), fcMath_max(a.s4, b.s4), fcMath_max(a.s5, b.s5), fcMath_max(a.s6, b.s6), fcMath_max(a.s7, b.s7));
}

fcInt8 fcInt8_maxMag(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w), fcMath_maxMag(a.s4, b.s4), fcMath_maxMag(a.s5, b.s5), fcMath_maxMag(a.s6, b.s6), fcMath_maxMag(a.s7, b.s7));
}

fcInt8 fcInt8_min(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w), fcMath_min(a.s4, b.s4), fcMath_min(a.s5, b.s5), fcMath_min(a.s6, b.s6), fcMath_min(a.s7, b.s7));
}

fcInt8 fcInt8_minMag(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w), fcMath_minMag(a.s4, b.s4), fcMath_minMag(a.s5, b.s5), fcMath_minMag(a.s6, b.s6), fcMath_minMag(a.s7, b.s7));
}

fcInt8 fcInt8_mix(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w), fcMath_mix(a.s4, b.s4, c.s4), fcMath_mix(a.s5, b.s5, c.s5), fcMath_mix(a.s6, b.s6, c.s6), fcMath_mix(a.s7, b.s7, c.s7));
}

fcInt8 fcInt8_clampk(fcInt8 v, cl_int min, cl_int max) {
  return fcInt8_create11111111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max), fcMath_clamp(v.s4, min, max), fcMath_clamp(v.s5, min, max), fcMath_clamp(v.s6, min, max), fcMath_clamp(v.s7, min, max));
}

fcInt8 fcInt8_maxk(fcInt8 x, cl_int y) {
  return fcInt8_create11111111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y), fcMath_max(x.s4, y), fcMath_max(x.s5, y), fcMath_max(x.s6, y), fcMath_max(x.s7, y));
}

fcInt8 fcInt8_mink(fcInt8 x, cl_int y) {
  return fcInt8_create11111111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y), fcMath_min(x.s4, y), fcMath_min(x.s5, y), fcMath_min(x.s6, y), fcMath_min(x.s7, y));
}

fcInt8 fcInt8_mixk(fcInt8 x, fcInt8 y, cl_int a) {
  return fcInt8_create11111111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a), fcMath_mix(x.s4, y.s4, a), fcMath_mix(x.s5, y.s5, a), fcMath_mix(x.s6, y.s6, a), fcMath_mix(x.s7, y.s7, a));
}

fcInt8 fcInt8_absDiff(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w), fcMath_absDiff(a.s4, b.s4), fcMath_absDiff(a.s5, b.s5), fcMath_absDiff(a.s6, b.s6), fcMath_absDiff(a.s7, b.s7));
}

fcInt8 fcInt8_addSat(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_addSat(a.x, b.x), fcMath_addSat(a.y, b.y), fcMath_addSat(a.z, b.z), fcMath_addSat(a.w, b.w), fcMath_addSat(a.s4, b.s4), fcMath_addSat(a.s5, b.s5), fcMath_addSat(a.s6, b.s6), fcMath_addSat(a.s7, b.s7));
}

fcInt8 fcInt8_clz(fcInt8 a) {
  return fcInt8_create11111111(fcMath_clz(a.x), fcMath_clz(a.y), fcMath_clz(a.z), fcMath_clz(a.w), fcMath_clz(a.s4), fcMath_clz(a.s5), fcMath_clz(a.s6), fcMath_clz(a.s7));
}

fcInt8 fcInt8_hadd(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_hadd(a.x, b.x), fcMath_hadd(a.y, b.y), fcMath_hadd(a.z, b.z), fcMath_hadd(a.w, b.w), fcMath_hadd(a.s4, b.s4), fcMath_hadd(a.s5, b.s5), fcMath_hadd(a.s6, b.s6), fcMath_hadd(a.s7, b.s7));
}

fcInt8 fcInt8_madHi(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_madHi(a.x, b.x, c.x), fcMath_madHi(a.y, b.y, c.y), fcMath_madHi(a.z, b.z, c.z), fcMath_madHi(a.w, b.w, c.w), fcMath_madHi(a.s4, b.s4, c.s4), fcMath_madHi(a.s5, b.s5, c.s5), fcMath_madHi(a.s6, b.s6, c.s6), fcMath_madHi(a.s7, b.s7, c.s7));
}

fcInt8 fcInt8_madSat(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_madSat(a.x, b.x, c.x), fcMath_madSat(a.y, b.y, c.y), fcMath_madSat(a.z, b.z, c.z), fcMath_madSat(a.w, b.w, c.w), fcMath_madSat(a.s4, b.s4, c.s4), fcMath_madSat(a.s5, b.s5, c.s5), fcMath_madSat(a.s6, b.s6, c.s6), fcMath_madSat(a.s7, b.s7, c.s7));
}

fcInt8 fcInt8_mulHi(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_mulHi(a.x, b.x), fcMath_mulHi(a.y, b.y), fcMath_mulHi(a.z, b.z), fcMath_mulHi(a.w, b.w), fcMath_mulHi(a.s4, b.s4), fcMath_mulHi(a.s5, b.s5), fcMath_mulHi(a.s6, b.s6), fcMath_mulHi(a.s7, b.s7));
}

fcInt8 fcInt8_rhadd(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_rhadd(a.x, b.x), fcMath_rhadd(a.y, b.y), fcMath_rhadd(a.z, b.z), fcMath_rhadd(a.w, b.w), fcMath_rhadd(a.s4, b.s4), fcMath_rhadd(a.s5, b.s5), fcMath_rhadd(a.s6, b.s6), fcMath_rhadd(a.s7, b.s7));
}

fcInt8 fcInt8_rotate(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_rotate(a.x, b.x), fcMath_rotate(a.y, b.y), fcMath_rotate(a.z, b.z), fcMath_rotate(a.w, b.w), fcMath_rotate(a.s4, b.s4), fcMath_rotate(a.s5, b.s5), fcMath_rotate(a.s6, b.s6), fcMath_rotate(a.s7, b.s7));
}

fcInt8 fcInt8_subSat(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_subSat(a.x, b.x), fcMath_subSat(a.y, b.y), fcMath_subSat(a.z, b.z), fcMath_subSat(a.w, b.w), fcMath_subSat(a.s4, b.s4), fcMath_subSat(a.s5, b.s5), fcMath_subSat(a.s6, b.s6), fcMath_subSat(a.s7, b.s7));
}

fcInt8 fcInt8_mad24(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_mad24(a.x, b.x, c.x), fcMath_mad24(a.y, b.y, c.y), fcMath_mad24(a.z, b.z, c.z), fcMath_mad24(a.w, b.w, c.w), fcMath_mad24(a.s4, b.s4, c.s4), fcMath_mad24(a.s5, b.s5, c.s5), fcMath_mad24(a.s6, b.s6, c.s6), fcMath_mad24(a.s7, b.s7, c.s7));
}

fcInt8 fcInt8_mul24(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_mul24(a.x, b.x), fcMath_mul24(a.y, b.y), fcMath_mul24(a.z, b.z), fcMath_mul24(a.w, b.w), fcMath_mul24(a.s4, b.s4), fcMath_mul24(a.s5, b.s5), fcMath_mul24(a.s6, b.s6), fcMath_mul24(a.s7, b.s7));
}


//
// fcLong2
//

fcLong2 fcLong2_create() {
  fcLong2 result = {.s = {0L}};
  return result;
}

fcLong2 fcLong2_create1(cl_long v) {
  return fcLong2_create11(v, v);
}

fcLong2 fcLong2_create11(cl_long x, cl_long y) {
  fcLong2 result;
  result.x = x;
  result.y = y;
  return result;
}

fcLong2 fcLong2_create2(fcLong2 vec1) {
  return fcLong2_create11(vec1.x, vec1.y);
}

fcByte2 fcLong2_convertByte2(fcLong2 a) {
  return fcByte2_create11((cl_byte) a.x, (cl_byte) a.y);
}

fcShort2 fcLong2_convertShort2(fcLong2 a) {
  return fcShort2_create11((cl_short) a.x, (cl_short) a.y);
}

fcInt2 fcLong2_convertInt2(fcLong2 a) {
  return fcInt2_create11((cl_int) a.x, (cl_int) a.y);
}

fcFloat2 fcLong2_convertFloat2(fcLong2 a) {
  return fcFloat2_create11((cl_float) a.x, (cl_float) a.y);
}

fcDouble2 fcLong2_convertDouble2(fcLong2 a) {
  return fcDouble2_create11((cl_double) a.x, (cl_double) a.y);
}

fcInt2 fcLong2_isEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
}

fcInt2 fcLong2_isNotEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
}

fcInt2 fcLong2_isGreater(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
}

fcInt2 fcLong2_isGreaterEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
}

fcInt2 fcLong2_isLess(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
}

fcInt2 fcLong2_isLessEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
}

fcLong2 fcLong2_select(fcLong2 a, fcLong2 b, fcInt2 c) {
  return fcLong2_create11(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y));
}

cl_int fcLong2_any(fcLong2 a) {
  return a.x != 0L || a.y != 0L;
}

cl_int fcLong2_all(fcLong2 a) {
  return !(a.x == 0L || a.y == 0L);
}

fcLong2 fcLong2_add(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x + b.x, a.y + b.y);
}

fcLong2 fcLong2_sub(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x - b.x, a.y - b.y);
}

fcLong2 fcLong2_mul(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x * b.x, a.y * b.y);
}

fcDouble2 fcLong2_muld(fcLong2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x * b.x), (cl_double)(a.y * b.y));
}

fcFloat2 fcLong2_mulf(fcLong2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x * b.x), (cl_float)(a.y * b.y));
}

fcLong2 fcLong2_mulk(fcLong2 a, cl_long k) {
  return fcLong2_create11(a.x * k, a.y * k);
}

fcDouble2 fcLong2_mulkd(fcLong2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x * k), (cl_double)(a.y * k));
}

fcFloat2 fcLong2_mulkf(fcLong2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x * k), (cl_float)(a.y * k));
}

fcLong2 fcLong2_div(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x / b.x, a.y / b.y);
}

fcDouble2 fcLong2_divd(fcLong2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x / b.x), (cl_double)(a.y / b.y));
}

fcFloat2 fcLong2_divf(fcLong2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x / b.x), (cl_float)(a.y / b.y));
}

fcLong2 fcLong2_divk(fcLong2 a, cl_long k) {
  return fcLong2_create11(a.x / k, a.y / k);
}

fcDouble2 fcLong2_divkd(fcLong2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x / k), (cl_double)(a.y / k));
}

fcFloat2 fcLong2_divkf(fcLong2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x / k), (cl_float)(a.y / k));
}

fcLong2 fcLong2_mod(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x % b.x, a.y % b.y);
}

fcLong2 fcLong2_modk(fcLong2 a, cl_long k) {
  return fcLong2_create11(a.x % k, a.y % k);
}

fcLong2 fcLong2_bitAnd(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x & b.x, a.y & b.y);
}

fcLong2 fcLong2_bitOr(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x | b.x, a.y | b.y);
}

fcLong2 fcLong2_bitXor(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.x ^ b.x, a.y ^ b.y);
}

fcLong2 fcLong2_bitNot(fcLong2 a) {
  return fcLong2_create11(~a.x, ~a.y);
}

fcLong2 fcLong2_abs(fcLong2 a) {
  return fcLong2_create11(fcMath_abs(a.x), fcMath_abs(a.y));
}

fcLong2 fcLong2_clamp(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y));
}

fcLong2 fcLong2_max(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y));
}

fcLong2 fcLong2_maxMag(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y));
}

fcLong2 fcLong2_min(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y));
}

fcLong2 fcLong2_minMag(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y));
}

fcLong2 fcLong2_mix(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y));
}

fcLong2 fcLong2_clampk(fcLong2 v, cl_long min, cl_long max) {
  return fcLong2_create11(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max));
}

fcLong2 fcLong2_maxk(fcLong2 x, cl_long y) {
  return fcLong2_create11(fcMath_max(x.x, y), fcMath_max(x.y, y));
}

fcLong2 fcLong2_mink(fcLong2 x, cl_long y) {
  return fcLong2_create11(fcMath_min(x.x, y), fcMath_min(x.y, y));
}

fcLong2 fcLong2_mixk(fcLong2 x, fcLong2 y, cl_long a) {
  return fcLong2_create11(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a));
}

fcLong2 fcLong2_absDiff(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y));
}

fcLong2 fcLong2_addSat(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_addSatl(a.x, b.x), fcMath_addSatl(a.y, b.y));
}

fcLong2 fcLong2_clz(fcLong2 a) {
  return fcLong2_create11(fcMath_clzl(a.x), fcMath_clzl(a.y));
}

fcLong2 fcLong2_hadd(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_haddl(a.x, b.x), fcMath_haddl(a.y, b.y));
}

fcLong2 fcLong2_madHi(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_madHil(a.x, b.x, c.x), fcMath_madHil(a.y, b.y, c.y));
}

fcLong2 fcLong2_madSat(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_madSatl(a.x, b.x, c.x), fcMath_madSatl(a.y, b.y, c.y));
}

fcLong2 fcLong2_mulHi(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_mulHil(a.x, b.x), fcMath_mulHil(a.y, b.y));
}

fcLong2 fcLong2_rhadd(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_rhaddl(a.x, b.x), fcMath_rhaddl(a.y, b.y));
}

fcLong2 fcLong2_rotate(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_rotatel(a.x, b.x), fcMath_rotatel(a.y, b.y));
}

fcLong2 fcLong2_subSat(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_subSatl(a.x, b.x), fcMath_subSatl(a.y, b.y));
}


//
// fcLong3
//

fcLong3 fcLong3_create() {
  fcLong3 result = {.s = {0L}};
  return result;
}

fcLong3 fcLong3_create1(cl_long v) {
  return fcLong3_create111(v, v, v);
}

fcLong3 fcLong3_create111(cl_long x, cl_long y, cl_long z) {
  fcLong3 result;
  result.x = x;
  result.y = y;
  result.z = z;
  return result;
}

fcLong3 fcLong3_create12(cl_long x, fcLong2 vec1) {
  return fcLong3_create111(x, vec1.x, vec1.y);
}
fcLong3 fcLong3_create21(fcLong2 vec1, cl_long z) {
  return fcLong3_create111(vec1.x, vec1.y, z);
}
fcLong3 fcLong3_create3(fcLong3 vec1) {
  return fcLong3_create111(vec1.x, vec1.y, vec1.z);
}

fcByte3 fcLong3_convertByte3(fcLong3 a) {
  return fcByte3_create111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z);
}

fcShort3 fcLong3_convertShort3(fcLong3 a) {
  return fcShort3_create111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z);
}

fcInt3 fcLong3_convertInt3(fcLong3 a) {
  return fcInt3_create111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z);
}

fcFloat3 fcLong3_convertFloat3(fcLong3 a) {
  return fcFloat3_create111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z);
}

fcDouble3 fcLong3_convertDouble3(fcLong3 a) {
  return fcDouble3_create111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z);
}

fcLong2 fcLong3_asLong2(fcLong3 a) {
  return fcLong2_create11(a.x, a.y);
}

fcInt3 fcLong3_isEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
}

fcInt3 fcLong3_isNotEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
}

fcInt3 fcLong3_isGreater(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
}

fcInt3 fcLong3_isGreaterEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
}

fcInt3 fcLong3_isLess(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
}

fcInt3 fcLong3_isLessEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
}

fcLong3 fcLong3_select(fcLong3 a, fcLong3 b, fcInt3 c) {
  return fcLong3_create111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z));
}

cl_int fcLong3_any(fcLong3 a) {
  return a.x != 0L || a.y != 0L || a.z != 0L;
}

cl_int fcLong3_all(fcLong3 a) {
  return !(a.x == 0L || a.y == 0L || a.z == 0L);
}

fcLong3 fcLong3_add(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x + b.x, a.y + b.y, a.z + b.z);
}

fcLong3 fcLong3_sub(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x - b.x, a.y - b.y, a.z - b.z);
}

fcLong3 fcLong3_mul(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x * b.x, a.y * b.y, a.z * b.z);
}

fcDouble3 fcLong3_muld(fcLong3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z));
}

fcFloat3 fcLong3_mulf(fcLong3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z));
}

fcLong3 fcLong3_mulk(fcLong3 a, cl_long k) {
  return fcLong3_create111(a.x * k, a.y * k, a.z * k);
}

fcDouble3 fcLong3_mulkd(fcLong3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k));
}

fcFloat3 fcLong3_mulkf(fcLong3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k));
}

fcLong3 fcLong3_div(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x / b.x, a.y / b.y, a.z / b.z);
}

fcDouble3 fcLong3_divd(fcLong3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z));
}

fcFloat3 fcLong3_divf(fcLong3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z));
}

fcLong3 fcLong3_divk(fcLong3 a, cl_long k) {
  return fcLong3_create111(a.x / k, a.y / k, a.z / k);
}

fcDouble3 fcLong3_divkd(fcLong3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k));
}

fcFloat3 fcLong3_divkf(fcLong3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k));
}

fcLong3 fcLong3_mod(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x % b.x, a.y % b.y, a.z % b.z);
}

fcLong3 fcLong3_modk(fcLong3 a, cl_long k) {
  return fcLong3_create111(a.x % k, a.y % k, a.z % k);
}

fcLong3 fcLong3_bitAnd(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x & b.x, a.y & b.y, a.z & b.z);
}

fcLong3 fcLong3_bitOr(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x | b.x, a.y | b.y, a.z | b.z);
}

fcLong3 fcLong3_bitXor(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z);
}

fcLong3 fcLong3_bitNot(fcLong3 a) {
  return fcLong3_create111(~a.x, ~a.y, ~a.z);
}

fcLong3 fcLong3_abs(fcLong3 a) {
  return fcLong3_create111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z));
}

fcLong3 fcLong3_clamp(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z));
}

fcLong3 fcLong3_max(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z));
}

fcLong3 fcLong3_maxMag(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z));
}

fcLong3 fcLong3_min(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z));
}

fcLong3 fcLong3_minMag(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z));
}

fcLong3 fcLong3_mix(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z));
}

fcLong3 fcLong3_clampk(fcLong3 v, cl_long min, cl_long max) {
  return fcLong3_create111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max));
}

fcLong3 fcLong3_maxk(fcLong3 x, cl_long y) {
  return fcLong3_create111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y));
}

fcLong3 fcLong3_mink(fcLong3 x, cl_long y) {
  return fcLong3_create111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y));
}

fcLong3 fcLong3_mixk(fcLong3 x, fcLong3 y, cl_long a) {
  return fcLong3_create111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a));
}

fcLong3 fcLong3_absDiff(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z));
}

fcLong3 fcLong3_addSat(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_addSatl(a.x, b.x), fcMath_addSatl(a.y, b.y), fcMath_addSatl(a.z, b.z));
}

fcLong3 fcLong3_clz(fcLong3 a) {
  return fcLong3_create111(fcMath_clzl(a.x), fcMath_clzl(a.y), fcMath_clzl(a.z));
}

fcLong3 fcLong3_hadd(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_haddl(a.x, b.x), fcMath_haddl(a.y, b.y), fcMath_haddl(a.z, b.z));
}

fcLong3 fcLong3_madHi(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_madHil(a.x, b.x, c.x), fcMath_madHil(a.y, b.y, c.y), fcMath_madHil(a.z, b.z, c.z));
}

fcLong3 fcLong3_madSat(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_madSatl(a.x, b.x, c.x), fcMath_madSatl(a.y, b.y, c.y), fcMath_madSatl(a.z, b.z, c.z));
}

fcLong3 fcLong3_mulHi(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_mulHil(a.x, b.x), fcMath_mulHil(a.y, b.y), fcMath_mulHil(a.z, b.z));
}

fcLong3 fcLong3_rhadd(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_rhaddl(a.x, b.x), fcMath_rhaddl(a.y, b.y), fcMath_rhaddl(a.z, b.z));
}

fcLong3 fcLong3_rotate(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_rotatel(a.x, b.x), fcMath_rotatel(a.y, b.y), fcMath_rotatel(a.z, b.z));
}

fcLong3 fcLong3_subSat(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_subSatl(a.x, b.x), fcMath_subSatl(a.y, b.y), fcMath_subSatl(a.z, b.z));
}


//
// fcLong4
//

fcLong4 fcLong4_create() {
  fcLong4 result = {.s = {0L}};
  return result;
}

fcLong4 fcLong4_create1(cl_long v) {
  return fcLong4_create1111(v, v, v, v);
}

fcLong4 fcLong4_create1111(cl_long x, cl_long y, cl_long z, cl_long w) {
  fcLong4 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  return result;
}

fcLong4 fcLong4_create112(cl_long x, cl_long y, fcLong2 vec1) {
  return fcLong4_create1111(x, y, vec1.x, vec1.y);
}
fcLong4 fcLong4_create121(cl_long x, fcLong2 vec1, cl_long w) {
  return fcLong4_create1111(x, vec1.x, vec1.y, w);
}
fcLong4 fcLong4_create13(cl_long x, fcLong3 vec1) {
  return fcLong4_create1111(x, vec1.x, vec1.y, vec1.z);
}
fcLong4 fcLong4_create211(fcLong2 vec1, cl_long z, cl_long w) {
  return fcLong4_create1111(vec1.x, vec1.y, z, w);
}
fcLong4 fcLong4_create22(fcLong2 vec1, fcLong2 vec2) {
  return fcLong4_create1111(vec1.x, vec1.y, vec2.x, vec2.y);
}
fcLong4 fcLong4_create31(fcLong3 vec1, cl_long w) {
  return fcLong4_create1111(vec1.x, vec1.y, vec1.z, w);
}
fcLong4 fcLong4_create4(fcLong4 vec1) {
  return fcLong4_create1111(vec1.x, vec1.y, vec1.z, vec1.w);
}

fcLong2 fcLong4_odd(fcLong4 a) {
  return fcLong2_create11(a.y, a.w);
}

fcLong2 fcLong4_even(fcLong4 a) {
  return fcLong2_create11(a.x, a.z);
}

fcByte4 fcLong4_convertByte4(fcLong4 a) {
  return fcByte4_create1111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w);
}

fcShort4 fcLong4_convertShort4(fcLong4 a) {
  return fcShort4_create1111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w);
}

fcInt4 fcLong4_convertInt4(fcLong4 a) {
  return fcInt4_create1111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w);
}

fcFloat4 fcLong4_convertFloat4(fcLong4 a) {
  return fcFloat4_create1111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w);
}

fcDouble4 fcLong4_convertDouble4(fcLong4 a) {
  return fcDouble4_create1111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w);
}

fcLong2 fcLong4_asLong2(fcLong4 a) {
  return fcLong2_create11(a.x, a.y);
}

fcLong3 fcLong4_asLong3(fcLong4 a) {
  return fcLong3_create111(a.x, a.y, a.z);
}

fcInt4 fcLong4_isEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
}

fcInt4 fcLong4_isNotEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
}

fcInt4 fcLong4_isGreater(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
}

fcInt4 fcLong4_isGreaterEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
}

fcInt4 fcLong4_isLess(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
}

fcInt4 fcLong4_isLessEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
}

fcLong4 fcLong4_select(fcLong4 a, fcLong4 b, fcInt4 c) {
  return fcLong4_create1111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w));
}

cl_int fcLong4_any(fcLong4 a) {
  return a.x != 0L || a.y != 0L || a.z != 0L || a.w != 0L;
}

cl_int fcLong4_all(fcLong4 a) {
  return !(a.x == 0L || a.y == 0L || a.z == 0L || a.w == 0L);
}

fcLong4 fcLong4_add(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

fcLong4 fcLong4_sub(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

fcLong4 fcLong4_mul(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

fcDouble4 fcLong4_muld(fcLong4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w));
}

fcFloat4 fcLong4_mulf(fcLong4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w));
}

fcLong4 fcLong4_mulk(fcLong4 a, cl_long k) {
  return fcLong4_create1111(a.x * k, a.y * k, a.z * k, a.w * k);
}

fcDouble4 fcLong4_mulkd(fcLong4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k));
}

fcFloat4 fcLong4_mulkf(fcLong4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k));
}

fcLong4 fcLong4_div(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

fcDouble4 fcLong4_divd(fcLong4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w));
}

fcFloat4 fcLong4_divf(fcLong4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w));
}

fcLong4 fcLong4_divk(fcLong4 a, cl_long k) {
  return fcLong4_create1111(a.x / k, a.y / k, a.z / k, a.w / k);
}

fcDouble4 fcLong4_divkd(fcLong4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k));
}

fcFloat4 fcLong4_divkf(fcLong4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k));
}

fcLong4 fcLong4_mod(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
}

fcLong4 fcLong4_modk(fcLong4 a, cl_long k) {
  return fcLong4_create1111(a.x % k, a.y % k, a.z % k, a.w % k);
}

fcLong4 fcLong4_bitAnd(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
}

fcLong4 fcLong4_bitOr(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
}

fcLong4 fcLong4_bitXor(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
}

fcLong4 fcLong4_bitNot(fcLong4 a) {
  return fcLong4_create1111(~a.x, ~a.y, ~a.z, ~a.w);
}

fcLong4 fcLong4_abs(fcLong4 a) {
  return fcLong4_create1111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w));
}

fcLong4 fcLong4_clamp(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w));
}

fcLong4 fcLong4_max(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w));
}

fcLong4 fcLong4_maxMag(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w));
}

fcLong4 fcLong4_min(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w));
}

fcLong4 fcLong4_minMag(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w));
}

fcLong4 fcLong4_mix(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w));
}

fcLong4 fcLong4_clampk(fcLong4 v, cl_long min, cl_long max) {
  return fcLong4_create1111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max));
}

fcLong4 fcLong4_maxk(fcLong4 x, cl_long y) {
  return fcLong4_create1111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y));
}

fcLong4 fcLong4_mink(fcLong4 x, cl_long y) {
  return fcLong4_create1111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y));
}

fcLong4 fcLong4_mixk(fcLong4 x, fcLong4 y, cl_long a) {
  return fcLong4_create1111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a));
}

fcLong4 fcLong4_absDiff(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w));
}

fcLong4 fcLong4_addSat(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_addSatl(a.x, b.x), fcMath_addSatl(a.y, b.y), fcMath_addSatl(a.z, b.z), fcMath_addSatl(a.w, b.w));
}

fcLong4 fcLong4_clz(fcLong4 a) {
  return fcLong4_create1111(fcMath_clzl(a.x), fcMath_clzl(a.y), fcMath_clzl(a.z), fcMath_clzl(a.w));
}

fcLong4 fcLong4_hadd(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_haddl(a.x, b.x), fcMath_haddl(a.y, b.y), fcMath_haddl(a.z, b.z), fcMath_haddl(a.w, b.w));
}

fcLong4 fcLong4_madHi(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_madHil(a.x, b.x, c.x), fcMath_madHil(a.y, b.y, c.y), fcMath_madHil(a.z, b.z, c.z), fcMath_madHil(a.w, b.w, c.w));
}

fcLong4 fcLong4_madSat(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_madSatl(a.x, b.x, c.x), fcMath_madSatl(a.y, b.y, c.y), fcMath_madSatl(a.z, b.z, c.z), fcMath_madSatl(a.w, b.w, c.w));
}

fcLong4 fcLong4_mulHi(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_mulHil(a.x, b.x), fcMath_mulHil(a.y, b.y), fcMath_mulHil(a.z, b.z), fcMath_mulHil(a.w, b.w));
}

fcLong4 fcLong4_rhadd(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_rhaddl(a.x, b.x), fcMath_rhaddl(a.y, b.y), fcMath_rhaddl(a.z, b.z), fcMath_rhaddl(a.w, b.w));
}

fcLong4 fcLong4_rotate(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_rotatel(a.x, b.x), fcMath_rotatel(a.y, b.y), fcMath_rotatel(a.z, b.z), fcMath_rotatel(a.w, b.w));
}

fcLong4 fcLong4_subSat(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_subSatl(a.x, b.x), fcMath_subSatl(a.y, b.y), fcMath_subSatl(a.z, b.z), fcMath_subSatl(a.w, b.w));
}


//
// fcLong8
//

fcLong8 fcLong8_create() {
  fcLong8 result = {.s = {0L}};
  return result;
}

fcLong8 fcLong8_create1(cl_long v) {
  return fcLong8_create11111111(v, v, v, v, v, v, v, v);
}

fcLong8 fcLong8_create11111111(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s4;
  result.s5 = s5;
  result.s6 = s6;
  result.s7 = s7;
  return result;
}

fcLong8 fcLong8_create1111112(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec1) {
  return fcLong8_create11111111(x, y, z, w, s4, s5, vec1.x, vec1.y);
}
fcLong8 fcLong8_create1111121(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong2 vec1, cl_long s7) {
  return fcLong8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, s7);
}
fcLong8 fcLong8_create111113(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong3 vec1) {
  return fcLong8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, vec1.z);
}
fcLong8 fcLong8_create1111211(cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, z, w, vec1.x, vec1.y, s6, s7);
}
fcLong8 fcLong8_create111122(cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
}
fcLong8 fcLong8_create111131(cl_long x, cl_long y, cl_long z, cl_long w, fcLong3 vec1, cl_long s7) {
  return fcLong8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, s7);
}
fcLong8 fcLong8_create11114(cl_long x, cl_long y, cl_long z, cl_long w, fcLong4 vec1) {
  return fcLong8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
}
fcLong8 fcLong8_create1112111(cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, s5, s6, s7);
}
fcLong8 fcLong8_create111212(cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create111221(cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create11123(cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong3 vec2) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create111311(cl_long x, cl_long y, cl_long z, fcLong3 vec1, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, s6, s7);
}
fcLong8 fcLong8_create11132(cl_long x, cl_long y, cl_long z, fcLong3 vec1, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
}
fcLong8 fcLong8_create11141(cl_long x, cl_long y, cl_long z, fcLong4 vec1, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s7);
}
fcLong8 fcLong8_create1121111(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, s4, s5, s6, s7);
}
fcLong8 fcLong8_create112112(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, s4, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create112121(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create11213(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create112211(cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s6, s7);
}
fcLong8 fcLong8_create11222(cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcLong8 fcLong8_create11231(cl_long x, cl_long y, fcLong2 vec1, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s7);
}
fcLong8 fcLong8_create1124(cl_long x, cl_long y, fcLong2 vec1, fcLong4 vec2) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcLong8 fcLong8_create113111(cl_long x, cl_long y, fcLong3 vec1, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, s6, s7);
}
fcLong8 fcLong8_create11312(cl_long x, cl_long y, fcLong3 vec1, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create11321(cl_long x, cl_long y, fcLong3 vec1, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create1133(cl_long x, cl_long y, fcLong3 vec1, fcLong3 vec2) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create11411(cl_long x, cl_long y, fcLong4 vec1, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s6, s7);
}
fcLong8 fcLong8_create1142(cl_long x, cl_long y, fcLong4 vec1, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
}
fcLong8 fcLong8_create1211111(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, s4, s5, s6, s7);
}
fcLong8 fcLong8_create121112(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, s4, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create121121(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create12113(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create121211(cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s6, s7);
}
fcLong8 fcLong8_create12122(cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcLong8 fcLong8_create12131(cl_long x, fcLong2 vec1, cl_long w, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s7);
}
fcLong8 fcLong8_create1214(cl_long x, fcLong2 vec1, cl_long w, fcLong4 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcLong8 fcLong8_create122111(cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, s6, s7);
}
fcLong8 fcLong8_create12212(cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcLong8 fcLong8_create12221(cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcLong8 fcLong8_create1223(cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcLong8 fcLong8_create12311(cl_long x, fcLong2 vec1, fcLong3 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcLong8 fcLong8_create1232(cl_long x, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcLong8 fcLong8_create1241(cl_long x, fcLong2 vec1, fcLong4 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcLong8 fcLong8_create131111(cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, s6, s7);
}
fcLong8 fcLong8_create13112(cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create13121(cl_long x, fcLong3 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create1313(cl_long x, fcLong3 vec1, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create13211(cl_long x, fcLong3 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s6, s7);
}
fcLong8 fcLong8_create1322(cl_long x, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcLong8 fcLong8_create1331(cl_long x, fcLong3 vec1, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s7);
}
fcLong8 fcLong8_create134(cl_long x, fcLong3 vec1, fcLong4 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcLong8 fcLong8_create14111(cl_long x, fcLong4 vec1, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, s6, s7);
}
fcLong8 fcLong8_create1412(cl_long x, fcLong4 vec1, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create1421(cl_long x, fcLong4 vec1, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create143(cl_long x, fcLong4 vec1, fcLong3 vec2) {
  return fcLong8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create2111111(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, s4, s5, s6, s7);
}
fcLong8 fcLong8_create211112(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, s4, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create211121(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create21113(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create211211(fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s6, s7);
}
fcLong8 fcLong8_create21122(fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcLong8 fcLong8_create21131(fcLong2 vec1, cl_long z, cl_long w, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcLong8 fcLong8_create2114(fcLong2 vec1, cl_long z, cl_long w, fcLong4 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcLong8 fcLong8_create212111(fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, s6, s7);
}
fcLong8 fcLong8_create21212(fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcLong8 fcLong8_create21221(fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcLong8 fcLong8_create2123(fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcLong8 fcLong8_create21311(fcLong2 vec1, cl_long z, fcLong3 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcLong8 fcLong8_create2132(fcLong2 vec1, cl_long z, fcLong3 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcLong8 fcLong8_create2141(fcLong2 vec1, cl_long z, fcLong4 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcLong8 fcLong8_create221111(fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, s6, s7);
}
fcLong8 fcLong8_create22112(fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, vec3.x, vec3.y);
}
fcLong8 fcLong8_create22121(fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, s7);
}
fcLong8 fcLong8_create2213(fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, vec3.z);
}
fcLong8 fcLong8_create22211(fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s6, s7);
}
fcLong8 fcLong8_create2222(fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, fcLong2 vec4) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
}
fcLong8 fcLong8_create2231(fcLong2 vec1, fcLong2 vec2, fcLong3 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s7);
}
fcLong8 fcLong8_create224(fcLong2 vec1, fcLong2 vec2, fcLong4 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
}
fcLong8 fcLong8_create23111(fcLong2 vec1, fcLong3 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, s6, s7);
}
fcLong8 fcLong8_create2312(fcLong2 vec1, fcLong3 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, vec3.x, vec3.y);
}
fcLong8 fcLong8_create2321(fcLong2 vec1, fcLong3 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s7);
}
fcLong8 fcLong8_create233(fcLong2 vec1, fcLong3 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
}
fcLong8 fcLong8_create2411(fcLong2 vec1, fcLong4 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s6, s7);
}
fcLong8 fcLong8_create242(fcLong2 vec1, fcLong4 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
}
fcLong8 fcLong8_create311111(fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, s6, s7);
}
fcLong8 fcLong8_create31112(fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create31121(fcLong3 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create3113(fcLong3 vec1, cl_long w, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create31211(fcLong3 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s6, s7);
}
fcLong8 fcLong8_create3122(fcLong3 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcLong8 fcLong8_create3131(fcLong3 vec1, cl_long w, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcLong8 fcLong8_create314(fcLong3 vec1, cl_long w, fcLong4 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcLong8 fcLong8_create32111(fcLong3 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, s6, s7);
}
fcLong8 fcLong8_create3212(fcLong3 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcLong8 fcLong8_create3221(fcLong3 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcLong8 fcLong8_create323(fcLong3 vec1, fcLong2 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcLong8 fcLong8_create3311(fcLong3 vec1, fcLong3 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcLong8 fcLong8_create332(fcLong3 vec1, fcLong3 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcLong8 fcLong8_create341(fcLong3 vec1, fcLong4 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcLong8 fcLong8_create41111(fcLong4 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, s6, s7);
}
fcLong8 fcLong8_create4112(fcLong4 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, vec2.x, vec2.y);
}
fcLong8 fcLong8_create4121(fcLong4 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, s7);
}
fcLong8 fcLong8_create413(fcLong4 vec1, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, vec2.z);
}
fcLong8 fcLong8_create4211(fcLong4 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s6, s7);
}
fcLong8 fcLong8_create422(fcLong4 vec1, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcLong8 fcLong8_create431(fcLong4 vec1, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s7);
}
fcLong8 fcLong8_create44(fcLong4 vec1, fcLong4 vec2) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcLong8 fcLong8_create8(fcLong8 vec1) {
  return fcLong8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s4, vec1.s5, vec1.s6, vec1.s7);
}

fcLong4 fcLong8_odd(fcLong8 a) {
  return fcLong4_create1111(a.y, a.w, a.s5, a.s7);
}

fcLong4 fcLong8_even(fcLong8 a) {
  return fcLong4_create1111(a.x, a.z, a.s4, a.s6);
}

fcByte8 fcLong8_convertByte8(fcLong8 a) {
  return fcByte8_create11111111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w, (cl_byte) a.s4, (cl_byte) a.s5, (cl_byte) a.s6, (cl_byte) a.s7);
}

fcShort8 fcLong8_convertShort8(fcLong8 a) {
  return fcShort8_create11111111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w, (cl_short) a.s4, (cl_short) a.s5, (cl_short) a.s6, (cl_short) a.s7);
}

fcInt8 fcLong8_convertInt8(fcLong8 a) {
  return fcInt8_create11111111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w, (cl_int) a.s4, (cl_int) a.s5, (cl_int) a.s6, (cl_int) a.s7);
}

fcFloat8 fcLong8_convertFloat8(fcLong8 a) {
  return fcFloat8_create11111111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w, (cl_float) a.s4, (cl_float) a.s5, (cl_float) a.s6, (cl_float) a.s7);
}

fcDouble8 fcLong8_convertDouble8(fcLong8 a) {
  return fcDouble8_create11111111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w, (cl_double) a.s4, (cl_double) a.s5, (cl_double) a.s6, (cl_double) a.s7);
}

fcLong2 fcLong8_asLong2(fcLong8 a) {
  return fcLong2_create11(a.x, a.y);
}

fcLong3 fcLong8_asLong3(fcLong8 a) {
  return fcLong3_create111(a.x, a.y, a.z);
}

fcLong4 fcLong8_asLong4(fcLong8 a) {
  return fcLong4_create1111(a.x, a.y, a.z, a.w);
}

fcInt8 fcLong8_isEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s4 == b.s4? 1 : 0, a.s5 == b.s5? 1 : 0, a.s6 == b.s6? 1 : 0, a.s7 == b.s7? 1 : 0);
}

fcInt8 fcLong8_isNotEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s4 != b.s4? 1 : 0, a.s5 != b.s5? 1 : 0, a.s6 != b.s6? 1 : 0, a.s7 != b.s7? 1 : 0);
}

fcInt8 fcLong8_isGreater(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s4 > b.s4? 1 : 0, a.s5 > b.s5? 1 : 0, a.s6 > b.s6? 1 : 0, a.s7 > b.s7? 1 : 0);
}

fcInt8 fcLong8_isGreaterEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s4 >= b.s4? 1 : 0, a.s5 >= b.s5? 1 : 0, a.s6 >= b.s6? 1 : 0, a.s7 >= b.s7? 1 : 0);
}

fcInt8 fcLong8_isLess(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s4 < b.s4? 1 : 0, a.s5 < b.s5? 1 : 0, a.s6 < b.s6? 1 : 0, a.s7 < b.s7? 1 : 0);
}

fcInt8 fcLong8_isLessEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s4 <= b.s4? 1 : 0, a.s5 <= b.s5? 1 : 0, a.s6 <= b.s6? 1 : 0, a.s7 <= b.s7? 1 : 0);
}

fcLong8 fcLong8_select(fcLong8 a, fcLong8 b, fcInt8 c) {
  return fcLong8_create11111111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w), fcMath_select(a.s4, b.s4, c.s4), fcMath_select(a.s5, b.s5, c.s5), fcMath_select(a.s6, b.s6, c.s6), fcMath_select(a.s7, b.s7, c.s7));
}

cl_int fcLong8_any(fcLong8 a) {
  return a.x != 0L || a.y != 0L || a.z != 0L || a.w != 0L || a.s4 != 0L || a.s5 != 0L || a.s6 != 0L || a.s7 != 0L;
}

cl_int fcLong8_all(fcLong8 a) {
  return !(a.x == 0L || a.y == 0L || a.z == 0L || a.w == 0L || a.s4 == 0L || a.s5 == 0L || a.s6 == 0L || a.s7 == 0L);
}

fcLong8 fcLong8_add(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w, a.s4 + b.s4, a.s5 + b.s5, a.s6 + b.s6, a.s7 + b.s7);
}

fcLong8 fcLong8_sub(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w, a.s4 - b.s4, a.s5 - b.s5, a.s6 - b.s6, a.s7 - b.s7);
}

fcLong8 fcLong8_mul(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w, a.s4 * b.s4, a.s5 * b.s5, a.s6 * b.s6, a.s7 * b.s7);
}

fcDouble8 fcLong8_muld(fcLong8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w), (cl_double)(a.s4 * b.s4), (cl_double)(a.s5 * b.s5), (cl_double)(a.s6 * b.s6), (cl_double)(a.s7 * b.s7));
}

fcFloat8 fcLong8_mulf(fcLong8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w), (cl_float)(a.s4 * b.s4), (cl_float)(a.s5 * b.s5), (cl_float)(a.s6 * b.s6), (cl_float)(a.s7 * b.s7));
}

fcLong8 fcLong8_mulk(fcLong8 a, cl_long k) {
  return fcLong8_create11111111(a.x * k, a.y * k, a.z * k, a.w * k, a.s4 * k, a.s5 * k, a.s6 * k, a.s7 * k);
}

fcDouble8 fcLong8_mulkd(fcLong8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k), (cl_double)(a.s4 * k), (cl_double)(a.s5 * k), (cl_double)(a.s6 * k), (cl_double)(a.s7 * k));
}

fcFloat8 fcLong8_mulkf(fcLong8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k), (cl_float)(a.s4 * k), (cl_float)(a.s5 * k), (cl_float)(a.s6 * k), (cl_float)(a.s7 * k));
}

fcLong8 fcLong8_div(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w, a.s4 / b.s4, a.s5 / b.s5, a.s6 / b.s6, a.s7 / b.s7);
}

fcDouble8 fcLong8_divd(fcLong8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w), (cl_double)(a.s4 / b.s4), (cl_double)(a.s5 / b.s5), (cl_double)(a.s6 / b.s6), (cl_double)(a.s7 / b.s7));
}

fcFloat8 fcLong8_divf(fcLong8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w), (cl_float)(a.s4 / b.s4), (cl_float)(a.s5 / b.s5), (cl_float)(a.s6 / b.s6), (cl_float)(a.s7 / b.s7));
}

fcLong8 fcLong8_divk(fcLong8 a, cl_long k) {
  return fcLong8_create11111111(a.x / k, a.y / k, a.z / k, a.w / k, a.s4 / k, a.s5 / k, a.s6 / k, a.s7 / k);
}

fcDouble8 fcLong8_divkd(fcLong8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k), (cl_double)(a.s4 / k), (cl_double)(a.s5 / k), (cl_double)(a.s6 / k), (cl_double)(a.s7 / k));
}

fcFloat8 fcLong8_divkf(fcLong8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k), (cl_float)(a.s4 / k), (cl_float)(a.s5 / k), (cl_float)(a.s6 / k), (cl_float)(a.s7 / k));
}

fcLong8 fcLong8_mod(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w, a.s4 % b.s4, a.s5 % b.s5, a.s6 % b.s6, a.s7 % b.s7);
}

fcLong8 fcLong8_modk(fcLong8 a, cl_long k) {
  return fcLong8_create11111111(a.x % k, a.y % k, a.z % k, a.w % k, a.s4 % k, a.s5 % k, a.s6 % k, a.s7 % k);
}

fcLong8 fcLong8_bitAnd(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w, a.s4 & b.s4, a.s5 & b.s5, a.s6 & b.s6, a.s7 & b.s7);
}

fcLong8 fcLong8_bitOr(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w, a.s4 | b.s4, a.s5 | b.s5, a.s6 | b.s6, a.s7 | b.s7);
}

fcLong8 fcLong8_bitXor(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w, a.s4 ^ b.s4, a.s5 ^ b.s5, a.s6 ^ b.s6, a.s7 ^ b.s7);
}

fcLong8 fcLong8_bitNot(fcLong8 a) {
  return fcLong8_create11111111(~a.x, ~a.y, ~a.z, ~a.w, ~a.s4, ~a.s5, ~a.s6, ~a.s7);
}

fcLong8 fcLong8_abs(fcLong8 a) {
  return fcLong8_create11111111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w), fcMath_abs(a.s4), fcMath_abs(a.s5), fcMath_abs(a.s6), fcMath_abs(a.s7));
}

fcLong8 fcLong8_clamp(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w), fcMath_clamp(a.s4, b.s4, c.s4), fcMath_clamp(a.s5, b.s5, c.s5), fcMath_clamp(a.s6, b.s6, c.s6), fcMath_clamp(a.s7, b.s7, c.s7));
}

fcLong8 fcLong8_max(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w), fcMath_max(a.s4, b.s4), fcMath_max(a.s5, b.s5), fcMath_max(a.s6, b.s6), fcMath_max(a.s7, b.s7));
}

fcLong8 fcLong8_maxMag(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w), fcMath_maxMag(a.s4, b.s4), fcMath_maxMag(a.s5, b.s5), fcMath_maxMag(a.s6, b.s6), fcMath_maxMag(a.s7, b.s7));
}

fcLong8 fcLong8_min(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w), fcMath_min(a.s4, b.s4), fcMath_min(a.s5, b.s5), fcMath_min(a.s6, b.s6), fcMath_min(a.s7, b.s7));
}

fcLong8 fcLong8_minMag(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w), fcMath_minMag(a.s4, b.s4), fcMath_minMag(a.s5, b.s5), fcMath_minMag(a.s6, b.s6), fcMath_minMag(a.s7, b.s7));
}

fcLong8 fcLong8_mix(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w), fcMath_mix(a.s4, b.s4, c.s4), fcMath_mix(a.s5, b.s5, c.s5), fcMath_mix(a.s6, b.s6, c.s6), fcMath_mix(a.s7, b.s7, c.s7));
}

fcLong8 fcLong8_clampk(fcLong8 v, cl_long min, cl_long max) {
  return fcLong8_create11111111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max), fcMath_clamp(v.s4, min, max), fcMath_clamp(v.s5, min, max), fcMath_clamp(v.s6, min, max), fcMath_clamp(v.s7, min, max));
}

fcLong8 fcLong8_maxk(fcLong8 x, cl_long y) {
  return fcLong8_create11111111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y), fcMath_max(x.s4, y), fcMath_max(x.s5, y), fcMath_max(x.s6, y), fcMath_max(x.s7, y));
}

fcLong8 fcLong8_mink(fcLong8 x, cl_long y) {
  return fcLong8_create11111111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y), fcMath_min(x.s4, y), fcMath_min(x.s5, y), fcMath_min(x.s6, y), fcMath_min(x.s7, y));
}

fcLong8 fcLong8_mixk(fcLong8 x, fcLong8 y, cl_long a) {
  return fcLong8_create11111111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a), fcMath_mix(x.s4, y.s4, a), fcMath_mix(x.s5, y.s5, a), fcMath_mix(x.s6, y.s6, a), fcMath_mix(x.s7, y.s7, a));
}

fcLong8 fcLong8_absDiff(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_absDiff(a.x, b.x), fcMath_absDiff(a.y, b.y), fcMath_absDiff(a.z, b.z), fcMath_absDiff(a.w, b.w), fcMath_absDiff(a.s4, b.s4), fcMath_absDiff(a.s5, b.s5), fcMath_absDiff(a.s6, b.s6), fcMath_absDiff(a.s7, b.s7));
}

fcLong8 fcLong8_addSat(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_addSatl(a.x, b.x), fcMath_addSatl(a.y, b.y), fcMath_addSatl(a.z, b.z), fcMath_addSatl(a.w, b.w), fcMath_addSatl(a.s4, b.s4), fcMath_addSatl(a.s5, b.s5), fcMath_addSatl(a.s6, b.s6), fcMath_addSatl(a.s7, b.s7));
}

fcLong8 fcLong8_clz(fcLong8 a) {
  return fcLong8_create11111111(fcMath_clzl(a.x), fcMath_clzl(a.y), fcMath_clzl(a.z), fcMath_clzl(a.w), fcMath_clzl(a.s4), fcMath_clzl(a.s5), fcMath_clzl(a.s6), fcMath_clzl(a.s7));
}

fcLong8 fcLong8_hadd(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_haddl(a.x, b.x), fcMath_haddl(a.y, b.y), fcMath_haddl(a.z, b.z), fcMath_haddl(a.w, b.w), fcMath_haddl(a.s4, b.s4), fcMath_haddl(a.s5, b.s5), fcMath_haddl(a.s6, b.s6), fcMath_haddl(a.s7, b.s7));
}

fcLong8 fcLong8_madHi(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_madHil(a.x, b.x, c.x), fcMath_madHil(a.y, b.y, c.y), fcMath_madHil(a.z, b.z, c.z), fcMath_madHil(a.w, b.w, c.w), fcMath_madHil(a.s4, b.s4, c.s4), fcMath_madHil(a.s5, b.s5, c.s5), fcMath_madHil(a.s6, b.s6, c.s6), fcMath_madHil(a.s7, b.s7, c.s7));
}

fcLong8 fcLong8_madSat(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_madSatl(a.x, b.x, c.x), fcMath_madSatl(a.y, b.y, c.y), fcMath_madSatl(a.z, b.z, c.z), fcMath_madSatl(a.w, b.w, c.w), fcMath_madSatl(a.s4, b.s4, c.s4), fcMath_madSatl(a.s5, b.s5, c.s5), fcMath_madSatl(a.s6, b.s6, c.s6), fcMath_madSatl(a.s7, b.s7, c.s7));
}

fcLong8 fcLong8_mulHi(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_mulHil(a.x, b.x), fcMath_mulHil(a.y, b.y), fcMath_mulHil(a.z, b.z), fcMath_mulHil(a.w, b.w), fcMath_mulHil(a.s4, b.s4), fcMath_mulHil(a.s5, b.s5), fcMath_mulHil(a.s6, b.s6), fcMath_mulHil(a.s7, b.s7));
}

fcLong8 fcLong8_rhadd(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_rhaddl(a.x, b.x), fcMath_rhaddl(a.y, b.y), fcMath_rhaddl(a.z, b.z), fcMath_rhaddl(a.w, b.w), fcMath_rhaddl(a.s4, b.s4), fcMath_rhaddl(a.s5, b.s5), fcMath_rhaddl(a.s6, b.s6), fcMath_rhaddl(a.s7, b.s7));
}

fcLong8 fcLong8_rotate(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_rotatel(a.x, b.x), fcMath_rotatel(a.y, b.y), fcMath_rotatel(a.z, b.z), fcMath_rotatel(a.w, b.w), fcMath_rotatel(a.s4, b.s4), fcMath_rotatel(a.s5, b.s5), fcMath_rotatel(a.s6, b.s6), fcMath_rotatel(a.s7, b.s7));
}

fcLong8 fcLong8_subSat(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_subSatl(a.x, b.x), fcMath_subSatl(a.y, b.y), fcMath_subSatl(a.z, b.z), fcMath_subSatl(a.w, b.w), fcMath_subSatl(a.s4, b.s4), fcMath_subSatl(a.s5, b.s5), fcMath_subSatl(a.s6, b.s6), fcMath_subSatl(a.s7, b.s7));
}


//
// fcFloat2
//

fcFloat2 fcFloat2_create() {
  fcFloat2 result = {.s = {0.0f}};
  return result;
}

fcFloat2 fcFloat2_create1(cl_float v) {
  return fcFloat2_create11(v, v);
}

fcFloat2 fcFloat2_create11(cl_float x, cl_float y) {
  fcFloat2 result;
  result.x = x;
  result.y = y;
  return result;
}

fcFloat2 fcFloat2_create2(fcFloat2 vec1) {
  return fcFloat2_create11(vec1.x, vec1.y);
}

fcByte2 fcFloat2_convertByte2(fcFloat2 a) {
  return fcByte2_create11((cl_byte) a.x, (cl_byte) a.y);
}

fcShort2 fcFloat2_convertShort2(fcFloat2 a) {
  return fcShort2_create11((cl_short) a.x, (cl_short) a.y);
}

fcInt2 fcFloat2_convertInt2(fcFloat2 a) {
  return fcInt2_create11((cl_int) a.x, (cl_int) a.y);
}

fcLong2 fcFloat2_convertLong2(fcFloat2 a) {
  return fcLong2_create11((cl_long) a.x, (cl_long) a.y);
}

fcDouble2 fcFloat2_convertDouble2(fcFloat2 a) {
  return fcDouble2_create11((cl_double) a.x, (cl_double) a.y);
}

fcInt2 fcFloat2_isEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
}

fcInt2 fcFloat2_isNotEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
}

fcInt2 fcFloat2_isGreater(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
}

fcInt2 fcFloat2_isGreaterEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
}

fcInt2 fcFloat2_isLess(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
}

fcInt2 fcFloat2_isLessEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
}

fcFloat2 fcFloat2_select(fcFloat2 a, fcFloat2 b, fcInt2 c) {
  return fcFloat2_create11(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y));
}

fcInt2 fcFloat2_isFinite(fcFloat2 a) {
  return fcInt2_create11(fcMath_isFinitef(a.x), fcMath_isFinitef(a.y));
}

fcInt2 fcFloat2_isInf(fcFloat2 a) {
  return fcInt2_create11(fcMath_isInff(a.x), fcMath_isInff(a.y));
}

fcInt2 fcFloat2_isNaN(fcFloat2 a) {
  return fcInt2_create11(fcMath_isNaNf(a.x), fcMath_isNaNf(a.y));
}

fcInt2 fcFloat2_isNormal(fcFloat2 a) {
  return fcInt2_create11(fcMath_isNormalf(a.x), fcMath_isNormalf(a.y));
}

fcInt2 fcFloat2_isOrdered(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(fcMath_isOrderedf(a.x, b.x), fcMath_isOrderedf(a.y, b.y));
}

fcInt2 fcFloat2_isUnordered(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(fcMath_isUnorderedf(a.x, b.x), fcMath_isUnorderedf(a.y, b.y));
}

cl_int fcFloat2_any(fcFloat2 a) {
  return a.x != 0.0f || a.y != 0.0f;
}

cl_int fcFloat2_all(fcFloat2 a) {
  return !(a.x == 0.0f || a.y == 0.0f);
}

fcFloat2 fcFloat2_add(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(a.x + b.x, a.y + b.y);
}

fcFloat2 fcFloat2_sub(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(a.x - b.x, a.y - b.y);
}

fcDouble2 fcFloat2_muld(fcFloat2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x * b.x), (cl_double)(a.y * b.y));
}

fcFloat2 fcFloat2_mulf(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x * b.x), (cl_float)(a.y * b.y));
}

fcDouble2 fcFloat2_mulkd(fcFloat2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x * k), (cl_double)(a.y * k));
}

fcFloat2 fcFloat2_mulkf(fcFloat2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x * k), (cl_float)(a.y * k));
}

fcDouble2 fcFloat2_divd(fcFloat2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x / b.x), (cl_double)(a.y / b.y));
}

fcFloat2 fcFloat2_divf(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x / b.x), (cl_float)(a.y / b.y));
}

fcDouble2 fcFloat2_divkd(fcFloat2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x / k), (cl_double)(a.y / k));
}

fcFloat2 fcFloat2_divkf(fcFloat2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x / k), (cl_float)(a.y / k));
}

cl_float fcFloat2_dot(fcFloat2 a, fcFloat2 b) {
  return a.x * b.x + a.y * b.y;
}

cl_double fcFloat2_distance(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_length(fcFloat2_sub(a, b));
}

cl_double fcFloat2_length(fcFloat2 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y);
}

fcFloat2 fcFloat2_normalize(fcFloat2 a) {
  cl_double len = fcFloat2_length(a);
  return fcFloat2_create11((cl_float)(a.x / len), (cl_float)(a.y / len));
}

fcFloat2 fcFloat2_abs(fcFloat2 a) {
  return fcFloat2_create11(fcMath_abs(a.x), fcMath_abs(a.y));
}

fcFloat2 fcFloat2_clamp(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y));
}

fcFloat2 fcFloat2_max(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y));
}

fcFloat2 fcFloat2_maxMag(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y));
}

fcFloat2 fcFloat2_min(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y));
}

fcFloat2 fcFloat2_minMag(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y));
}

fcFloat2 fcFloat2_mix(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y));
}

fcFloat2 fcFloat2_clampk(fcFloat2 v, cl_float min, cl_float max) {
  return fcFloat2_create11(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max));
}

fcFloat2 fcFloat2_maxk(fcFloat2 x, cl_float y) {
  return fcFloat2_create11(fcMath_max(x.x, y), fcMath_max(x.y, y));
}

fcFloat2 fcFloat2_mink(fcFloat2 x, cl_float y) {
  return fcFloat2_create11(fcMath_min(x.x, y), fcMath_min(x.y, y));
}

fcFloat2 fcFloat2_mixk(fcFloat2 x, fcFloat2 y, cl_float a) {
  return fcFloat2_create11(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a));
}

fcFloat2 fcFloat2_acos(fcFloat2 a) {
  return fcFloat2_create11(fcMath_acosf(a.x), fcMath_acosf(a.y));
}

fcFloat2 fcFloat2_acosh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_acoshf(a.x), fcMath_acoshf(a.y));
}

fcFloat2 fcFloat2_asin(fcFloat2 a) {
  return fcFloat2_create11(fcMath_asinf(a.x), fcMath_asinf(a.y));
}

fcFloat2 fcFloat2_asinh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_asinhf(a.x), fcMath_asinhf(a.y));
}

fcFloat2 fcFloat2_atan(fcFloat2 a) {
  return fcFloat2_create11(fcMath_atanf(a.x), fcMath_atanf(a.y));
}

fcFloat2 fcFloat2_atan2(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_atan2f(a.x, b.x), fcMath_atan2f(a.y, b.y));
}

fcFloat2 fcFloat2_atanh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_atanhf(a.x), fcMath_atanhf(a.y));
}

fcFloat2 fcFloat2_cbrt(fcFloat2 a) {
  return fcFloat2_create11(fcMath_cbrtf(a.x), fcMath_cbrtf(a.y));
}

fcFloat2 fcFloat2_ceil(fcFloat2 a) {
  return fcFloat2_create11(fcMath_ceilf(a.x), fcMath_ceilf(a.y));
}

fcFloat2 fcFloat2_copySign(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_copySignf(a.x, b.x), fcMath_copySignf(a.y, b.y));
}

fcFloat2 fcFloat2_cos(fcFloat2 a) {
  return fcFloat2_create11(fcMath_cosf(a.x), fcMath_cosf(a.y));
}

fcFloat2 fcFloat2_cosh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_coshf(a.x), fcMath_coshf(a.y));
}

fcFloat2 fcFloat2_erf(fcFloat2 a) {
  return fcFloat2_create11(fcMath_erff(a.x), fcMath_erff(a.y));
}

fcFloat2 fcFloat2_erfc(fcFloat2 a) {
  return fcFloat2_create11(fcMath_erfcf(a.x), fcMath_erfcf(a.y));
}

fcFloat2 fcFloat2_exp(fcFloat2 a) {
  return fcFloat2_create11(fcMath_expf(a.x), fcMath_expf(a.y));
}

fcFloat2 fcFloat2_exp10(fcFloat2 a) {
  return fcFloat2_create11(fcMath_exp10f(a.x), fcMath_exp10f(a.y));
}

fcFloat2 fcFloat2_exp2(fcFloat2 a) {
  return fcFloat2_create11(fcMath_exp2f(a.x), fcMath_exp2f(a.y));
}

fcFloat2 fcFloat2_expm1(fcFloat2 a) {
  return fcFloat2_create11(fcMath_expm1f(a.x), fcMath_expm1f(a.y));
}

fcFloat2 fcFloat2_fdim(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_fdimf(a.x, b.x), fcMath_fdimf(a.y, b.y));
}

fcFloat2 fcFloat2_floor(fcFloat2 a) {
  return fcFloat2_create11(fcMath_floorf(a.x), fcMath_floorf(a.y));
}

fcFloat2 fcFloat2_fma(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_fmaf(a.x, b.x, c.x), fcMath_fmaf(a.y, b.y, c.y));
}

fcFloat2 fcFloat2_fmod(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_fmodf(a.x, b.x), fcMath_fmodf(a.y, b.y));
}

fcFloat2 fcFloat2_fract(fcFloat2 a) {
  return fcFloat2_create11(fcMath_fractf(a.x), fcMath_fractf(a.y));
}

fcFloat2 fcFloat2_frexp(fcFloat2 a) {
  return fcFloat2_create11(fcMath_frexpf(a.x), fcMath_frexpf(a.y));
}

fcFloat2 fcFloat2_getExponent(fcFloat2 a) {
  return fcFloat2_create11(fcMath_getExponentf(a.x), fcMath_getExponentf(a.y));
}

fcFloat2 fcFloat2_hypot(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_hypotf(a.x, b.x), fcMath_hypotf(a.y, b.y));
}

fcFloat2 fcFloat2_lgamma(fcFloat2 a) {
  return fcFloat2_create11(fcMath_lgammaf(a.x), fcMath_lgammaf(a.y));
}

fcFloat2 fcFloat2_log(fcFloat2 a) {
  return fcFloat2_create11(fcMath_logf(a.x), fcMath_logf(a.y));
}

fcFloat2 fcFloat2_log10(fcFloat2 a) {
  return fcFloat2_create11(fcMath_log10f(a.x), fcMath_log10f(a.y));
}

fcFloat2 fcFloat2_log1p(fcFloat2 a) {
  return fcFloat2_create11(fcMath_log1pf(a.x), fcMath_log1pf(a.y));
}

fcFloat2 fcFloat2_log2(fcFloat2 a) {
  return fcFloat2_create11(fcMath_log2f(a.x), fcMath_log2f(a.y));
}

fcFloat2 fcFloat2_logb(fcFloat2 a) {
  return fcFloat2_create11(fcMath_logbf(a.x), fcMath_logbf(a.y));
}

fcFloat2 fcFloat2_mad(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_madf(a.x, b.x, c.x), fcMath_madf(a.y, b.y, c.y));
}

fcFloat2 fcFloat2_nextAfter(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_nextAfterf(a.x, b.x), fcMath_nextAfterf(a.y, b.y));
}

fcFloat2 fcFloat2_pow(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_powf(a.x, b.x), fcMath_powf(a.y, b.y));
}

fcFloat2 fcFloat2_powr(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_powrf(a.x, b.x), fcMath_powrf(a.y, b.y));
}

fcFloat2 fcFloat2_remainder(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_remainderf(a.x, b.x), fcMath_remainderf(a.y, b.y));
}

fcFloat2 fcFloat2_rint(fcFloat2 a) {
  return fcFloat2_create11(fcMath_rintf(a.x), fcMath_rintf(a.y));
}

fcFloat2 fcFloat2_round(fcFloat2 a) {
  return fcFloat2_create11(fcMath_roundf(a.x), fcMath_roundf(a.y));
}

fcFloat2 fcFloat2_rsqrt(fcFloat2 a) {
  return fcFloat2_create11(fcMath_rsqrtf(a.x), fcMath_rsqrtf(a.y));
}

fcFloat2 fcFloat2_signum(fcFloat2 a) {
  return fcFloat2_create11(fcMath_signumf(a.x), fcMath_signumf(a.y));
}

fcFloat2 fcFloat2_sin(fcFloat2 a) {
  return fcFloat2_create11(fcMath_sinf(a.x), fcMath_sinf(a.y));
}

fcFloat2 fcFloat2_sinh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_sinhf(a.x), fcMath_sinhf(a.y));
}

fcFloat2 fcFloat2_smoothStep(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_smoothStepf(a.x, b.x, c.x), fcMath_smoothStepf(a.y, b.y, c.y));
}

fcFloat2 fcFloat2_sqrt(fcFloat2 a) {
  return fcFloat2_create11(fcMath_sqrtf(a.x), fcMath_sqrtf(a.y));
}

fcFloat2 fcFloat2_step(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_stepf(a.x, b.x), fcMath_stepf(a.y, b.y));
}

fcFloat2 fcFloat2_tan(fcFloat2 a) {
  return fcFloat2_create11(fcMath_tanf(a.x), fcMath_tanf(a.y));
}

fcFloat2 fcFloat2_tanh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_tanhf(a.x), fcMath_tanhf(a.y));
}

fcFloat2 fcFloat2_tgamma(fcFloat2 a) {
  return fcFloat2_create11(fcMath_tgammaf(a.x), fcMath_tgammaf(a.y));
}

fcFloat2 fcFloat2_toDegrees(fcFloat2 a) {
  return fcFloat2_create11(fcMath_toDegreesf(a.x), fcMath_toDegreesf(a.y));
}

fcFloat2 fcFloat2_toRadians(fcFloat2 a) {
  return fcFloat2_create11(fcMath_toRadiansf(a.x), fcMath_toRadiansf(a.y));
}

fcFloat2 fcFloat2_trunc(fcFloat2 a) {
  return fcFloat2_create11(fcMath_truncf(a.x), fcMath_truncf(a.y));
}

fcFloat2 fcFloat2_scalb(fcFloat2 a, fcInt2 n) {
  return fcFloat2_create11(fcMath_scalbf(a.x, n.x), fcMath_scalbf(a.y, n.y));
}

fcFloat2 fcFloat2_ldexp(fcFloat2 a, fcInt2 n) {
  return fcFloat2_create11(fcMath_ldexpf(a.x, n.x), fcMath_ldexpf(a.y, n.y));
}

fcFloat2 fcFloat2_pown(fcFloat2 a, fcInt2 b) {
  return fcFloat2_create11(fcMath_pownf(a.x, b.x), fcMath_pownf(a.y, b.y));
}

fcFloat2 fcFloat2_rootn(fcFloat2 a, fcInt2 b) {
  return fcFloat2_create11(fcMath_rootnf(a.x, b.x), fcMath_rootnf(a.y, b.y));
}

fcFloat2 fcFloat2_smoothStepk(fcFloat2 a, fcFloat2 b, cl_float c) {
  return fcFloat2_create11(fcMath_smoothStepf(a.x, b.x, c), fcMath_smoothStepf(a.y, b.y, c));
}


//
// fcFloat3
//

fcFloat3 fcFloat3_create() {
  fcFloat3 result = {.s = {0.0f}};
  return result;
}

fcFloat3 fcFloat3_create1(cl_float v) {
  return fcFloat3_create111(v, v, v);
}

fcFloat3 fcFloat3_create111(cl_float x, cl_float y, cl_float z) {
  fcFloat3 result;
  result.x = x;
  result.y = y;
  result.z = z;
  return result;
}

fcFloat3 fcFloat3_create12(cl_float x, fcFloat2 vec1) {
  return fcFloat3_create111(x, vec1.x, vec1.y);
}
fcFloat3 fcFloat3_create21(fcFloat2 vec1, cl_float z) {
  return fcFloat3_create111(vec1.x, vec1.y, z);
}
fcFloat3 fcFloat3_create3(fcFloat3 vec1) {
  return fcFloat3_create111(vec1.x, vec1.y, vec1.z);
}

fcByte3 fcFloat3_convertByte3(fcFloat3 a) {
  return fcByte3_create111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z);
}

fcShort3 fcFloat3_convertShort3(fcFloat3 a) {
  return fcShort3_create111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z);
}

fcInt3 fcFloat3_convertInt3(fcFloat3 a) {
  return fcInt3_create111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z);
}

fcLong3 fcFloat3_convertLong3(fcFloat3 a) {
  return fcLong3_create111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z);
}

fcDouble3 fcFloat3_convertDouble3(fcFloat3 a) {
  return fcDouble3_create111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z);
}

fcFloat2 fcFloat3_asFloat2(fcFloat3 a) {
  return fcFloat2_create11(a.x, a.y);
}

fcInt3 fcFloat3_isEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
}

fcInt3 fcFloat3_isNotEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
}

fcInt3 fcFloat3_isGreater(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
}

fcInt3 fcFloat3_isGreaterEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
}

fcInt3 fcFloat3_isLess(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
}

fcInt3 fcFloat3_isLessEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
}

fcFloat3 fcFloat3_select(fcFloat3 a, fcFloat3 b, fcInt3 c) {
  return fcFloat3_create111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z));
}

fcInt3 fcFloat3_isFinite(fcFloat3 a) {
  return fcInt3_create111(fcMath_isFinitef(a.x), fcMath_isFinitef(a.y), fcMath_isFinitef(a.z));
}

fcInt3 fcFloat3_isInf(fcFloat3 a) {
  return fcInt3_create111(fcMath_isInff(a.x), fcMath_isInff(a.y), fcMath_isInff(a.z));
}

fcInt3 fcFloat3_isNaN(fcFloat3 a) {
  return fcInt3_create111(fcMath_isNaNf(a.x), fcMath_isNaNf(a.y), fcMath_isNaNf(a.z));
}

fcInt3 fcFloat3_isNormal(fcFloat3 a) {
  return fcInt3_create111(fcMath_isNormalf(a.x), fcMath_isNormalf(a.y), fcMath_isNormalf(a.z));
}

fcInt3 fcFloat3_isOrdered(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(fcMath_isOrderedf(a.x, b.x), fcMath_isOrderedf(a.y, b.y), fcMath_isOrderedf(a.z, b.z));
}

fcInt3 fcFloat3_isUnordered(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(fcMath_isUnorderedf(a.x, b.x), fcMath_isUnorderedf(a.y, b.y), fcMath_isUnorderedf(a.z, b.z));
}

cl_int fcFloat3_any(fcFloat3 a) {
  return a.x != 0.0f || a.y != 0.0f || a.z != 0.0f;
}

cl_int fcFloat3_all(fcFloat3 a) {
  return !(a.x == 0.0f || a.y == 0.0f || a.z == 0.0f);
}

fcFloat3 fcFloat3_add(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(a.x + b.x, a.y + b.y, a.z + b.z);
}

fcFloat3 fcFloat3_sub(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(a.x - b.x, a.y - b.y, a.z - b.z);
}

fcDouble3 fcFloat3_muld(fcFloat3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z));
}

fcFloat3 fcFloat3_mulf(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z));
}

fcDouble3 fcFloat3_mulkd(fcFloat3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k));
}

fcFloat3 fcFloat3_mulkf(fcFloat3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k));
}

fcDouble3 fcFloat3_divd(fcFloat3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z));
}

fcFloat3 fcFloat3_divf(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z));
}

fcDouble3 fcFloat3_divkd(fcFloat3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k));
}

fcFloat3 fcFloat3_divkf(fcFloat3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k));
}

fcFloat3 fcFloat3_cross(fcFloat3 a, fcFloat3 b) {
  cl_float resX = a.y * b.z - a.z * b.y;
  cl_float resY = a.z * b.x - a.x * b.z;
  cl_float resZ = a.x * b.y - a.y * b.x;
  return fcFloat3_create111(resX, resY, resZ);
}

cl_float fcFloat3_dot(fcFloat3 a, fcFloat3 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

cl_double fcFloat3_distance(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_length(fcFloat3_sub(a, b));
}

cl_double fcFloat3_length(fcFloat3 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

fcFloat3 fcFloat3_normalize(fcFloat3 a) {
  cl_double len = fcFloat3_length(a);
  return fcFloat3_create111((cl_float)(a.x / len), (cl_float)(a.y / len), (cl_float)(a.z / len));
}

fcFloat3 fcFloat3_abs(fcFloat3 a) {
  return fcFloat3_create111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z));
}

fcFloat3 fcFloat3_clamp(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z));
}

fcFloat3 fcFloat3_max(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z));
}

fcFloat3 fcFloat3_maxMag(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z));
}

fcFloat3 fcFloat3_min(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z));
}

fcFloat3 fcFloat3_minMag(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z));
}

fcFloat3 fcFloat3_mix(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z));
}

fcFloat3 fcFloat3_clampk(fcFloat3 v, cl_float min, cl_float max) {
  return fcFloat3_create111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max));
}

fcFloat3 fcFloat3_maxk(fcFloat3 x, cl_float y) {
  return fcFloat3_create111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y));
}

fcFloat3 fcFloat3_mink(fcFloat3 x, cl_float y) {
  return fcFloat3_create111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y));
}

fcFloat3 fcFloat3_mixk(fcFloat3 x, fcFloat3 y, cl_float a) {
  return fcFloat3_create111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a));
}

fcFloat3 fcFloat3_acos(fcFloat3 a) {
  return fcFloat3_create111(fcMath_acosf(a.x), fcMath_acosf(a.y), fcMath_acosf(a.z));
}

fcFloat3 fcFloat3_acosh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_acoshf(a.x), fcMath_acoshf(a.y), fcMath_acoshf(a.z));
}

fcFloat3 fcFloat3_asin(fcFloat3 a) {
  return fcFloat3_create111(fcMath_asinf(a.x), fcMath_asinf(a.y), fcMath_asinf(a.z));
}

fcFloat3 fcFloat3_asinh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_asinhf(a.x), fcMath_asinhf(a.y), fcMath_asinhf(a.z));
}

fcFloat3 fcFloat3_atan(fcFloat3 a) {
  return fcFloat3_create111(fcMath_atanf(a.x), fcMath_atanf(a.y), fcMath_atanf(a.z));
}

fcFloat3 fcFloat3_atan2(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_atan2f(a.x, b.x), fcMath_atan2f(a.y, b.y), fcMath_atan2f(a.z, b.z));
}

fcFloat3 fcFloat3_atanh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_atanhf(a.x), fcMath_atanhf(a.y), fcMath_atanhf(a.z));
}

fcFloat3 fcFloat3_cbrt(fcFloat3 a) {
  return fcFloat3_create111(fcMath_cbrtf(a.x), fcMath_cbrtf(a.y), fcMath_cbrtf(a.z));
}

fcFloat3 fcFloat3_ceil(fcFloat3 a) {
  return fcFloat3_create111(fcMath_ceilf(a.x), fcMath_ceilf(a.y), fcMath_ceilf(a.z));
}

fcFloat3 fcFloat3_copySign(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_copySignf(a.x, b.x), fcMath_copySignf(a.y, b.y), fcMath_copySignf(a.z, b.z));
}

fcFloat3 fcFloat3_cos(fcFloat3 a) {
  return fcFloat3_create111(fcMath_cosf(a.x), fcMath_cosf(a.y), fcMath_cosf(a.z));
}

fcFloat3 fcFloat3_cosh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_coshf(a.x), fcMath_coshf(a.y), fcMath_coshf(a.z));
}

fcFloat3 fcFloat3_erf(fcFloat3 a) {
  return fcFloat3_create111(fcMath_erff(a.x), fcMath_erff(a.y), fcMath_erff(a.z));
}

fcFloat3 fcFloat3_erfc(fcFloat3 a) {
  return fcFloat3_create111(fcMath_erfcf(a.x), fcMath_erfcf(a.y), fcMath_erfcf(a.z));
}

fcFloat3 fcFloat3_exp(fcFloat3 a) {
  return fcFloat3_create111(fcMath_expf(a.x), fcMath_expf(a.y), fcMath_expf(a.z));
}

fcFloat3 fcFloat3_exp10(fcFloat3 a) {
  return fcFloat3_create111(fcMath_exp10f(a.x), fcMath_exp10f(a.y), fcMath_exp10f(a.z));
}

fcFloat3 fcFloat3_exp2(fcFloat3 a) {
  return fcFloat3_create111(fcMath_exp2f(a.x), fcMath_exp2f(a.y), fcMath_exp2f(a.z));
}

fcFloat3 fcFloat3_expm1(fcFloat3 a) {
  return fcFloat3_create111(fcMath_expm1f(a.x), fcMath_expm1f(a.y), fcMath_expm1f(a.z));
}

fcFloat3 fcFloat3_fdim(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_fdimf(a.x, b.x), fcMath_fdimf(a.y, b.y), fcMath_fdimf(a.z, b.z));
}

fcFloat3 fcFloat3_floor(fcFloat3 a) {
  return fcFloat3_create111(fcMath_floorf(a.x), fcMath_floorf(a.y), fcMath_floorf(a.z));
}

fcFloat3 fcFloat3_fma(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_fmaf(a.x, b.x, c.x), fcMath_fmaf(a.y, b.y, c.y), fcMath_fmaf(a.z, b.z, c.z));
}

fcFloat3 fcFloat3_fmod(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_fmodf(a.x, b.x), fcMath_fmodf(a.y, b.y), fcMath_fmodf(a.z, b.z));
}

fcFloat3 fcFloat3_fract(fcFloat3 a) {
  return fcFloat3_create111(fcMath_fractf(a.x), fcMath_fractf(a.y), fcMath_fractf(a.z));
}

fcFloat3 fcFloat3_frexp(fcFloat3 a) {
  return fcFloat3_create111(fcMath_frexpf(a.x), fcMath_frexpf(a.y), fcMath_frexpf(a.z));
}

fcFloat3 fcFloat3_getExponent(fcFloat3 a) {
  return fcFloat3_create111(fcMath_getExponentf(a.x), fcMath_getExponentf(a.y), fcMath_getExponentf(a.z));
}

fcFloat3 fcFloat3_hypot(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_hypotf(a.x, b.x), fcMath_hypotf(a.y, b.y), fcMath_hypotf(a.z, b.z));
}

fcFloat3 fcFloat3_lgamma(fcFloat3 a) {
  return fcFloat3_create111(fcMath_lgammaf(a.x), fcMath_lgammaf(a.y), fcMath_lgammaf(a.z));
}

fcFloat3 fcFloat3_log(fcFloat3 a) {
  return fcFloat3_create111(fcMath_logf(a.x), fcMath_logf(a.y), fcMath_logf(a.z));
}

fcFloat3 fcFloat3_log10(fcFloat3 a) {
  return fcFloat3_create111(fcMath_log10f(a.x), fcMath_log10f(a.y), fcMath_log10f(a.z));
}

fcFloat3 fcFloat3_log1p(fcFloat3 a) {
  return fcFloat3_create111(fcMath_log1pf(a.x), fcMath_log1pf(a.y), fcMath_log1pf(a.z));
}

fcFloat3 fcFloat3_log2(fcFloat3 a) {
  return fcFloat3_create111(fcMath_log2f(a.x), fcMath_log2f(a.y), fcMath_log2f(a.z));
}

fcFloat3 fcFloat3_logb(fcFloat3 a) {
  return fcFloat3_create111(fcMath_logbf(a.x), fcMath_logbf(a.y), fcMath_logbf(a.z));
}

fcFloat3 fcFloat3_mad(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_madf(a.x, b.x, c.x), fcMath_madf(a.y, b.y, c.y), fcMath_madf(a.z, b.z, c.z));
}

fcFloat3 fcFloat3_nextAfter(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_nextAfterf(a.x, b.x), fcMath_nextAfterf(a.y, b.y), fcMath_nextAfterf(a.z, b.z));
}

fcFloat3 fcFloat3_pow(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_powf(a.x, b.x), fcMath_powf(a.y, b.y), fcMath_powf(a.z, b.z));
}

fcFloat3 fcFloat3_powr(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_powrf(a.x, b.x), fcMath_powrf(a.y, b.y), fcMath_powrf(a.z, b.z));
}

fcFloat3 fcFloat3_remainder(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_remainderf(a.x, b.x), fcMath_remainderf(a.y, b.y), fcMath_remainderf(a.z, b.z));
}

fcFloat3 fcFloat3_rint(fcFloat3 a) {
  return fcFloat3_create111(fcMath_rintf(a.x), fcMath_rintf(a.y), fcMath_rintf(a.z));
}

fcFloat3 fcFloat3_round(fcFloat3 a) {
  return fcFloat3_create111(fcMath_roundf(a.x), fcMath_roundf(a.y), fcMath_roundf(a.z));
}

fcFloat3 fcFloat3_rsqrt(fcFloat3 a) {
  return fcFloat3_create111(fcMath_rsqrtf(a.x), fcMath_rsqrtf(a.y), fcMath_rsqrtf(a.z));
}

fcFloat3 fcFloat3_signum(fcFloat3 a) {
  return fcFloat3_create111(fcMath_signumf(a.x), fcMath_signumf(a.y), fcMath_signumf(a.z));
}

fcFloat3 fcFloat3_sin(fcFloat3 a) {
  return fcFloat3_create111(fcMath_sinf(a.x), fcMath_sinf(a.y), fcMath_sinf(a.z));
}

fcFloat3 fcFloat3_sinh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_sinhf(a.x), fcMath_sinhf(a.y), fcMath_sinhf(a.z));
}

fcFloat3 fcFloat3_smoothStep(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_smoothStepf(a.x, b.x, c.x), fcMath_smoothStepf(a.y, b.y, c.y), fcMath_smoothStepf(a.z, b.z, c.z));
}

fcFloat3 fcFloat3_sqrt(fcFloat3 a) {
  return fcFloat3_create111(fcMath_sqrtf(a.x), fcMath_sqrtf(a.y), fcMath_sqrtf(a.z));
}

fcFloat3 fcFloat3_step(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_stepf(a.x, b.x), fcMath_stepf(a.y, b.y), fcMath_stepf(a.z, b.z));
}

fcFloat3 fcFloat3_tan(fcFloat3 a) {
  return fcFloat3_create111(fcMath_tanf(a.x), fcMath_tanf(a.y), fcMath_tanf(a.z));
}

fcFloat3 fcFloat3_tanh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_tanhf(a.x), fcMath_tanhf(a.y), fcMath_tanhf(a.z));
}

fcFloat3 fcFloat3_tgamma(fcFloat3 a) {
  return fcFloat3_create111(fcMath_tgammaf(a.x), fcMath_tgammaf(a.y), fcMath_tgammaf(a.z));
}

fcFloat3 fcFloat3_toDegrees(fcFloat3 a) {
  return fcFloat3_create111(fcMath_toDegreesf(a.x), fcMath_toDegreesf(a.y), fcMath_toDegreesf(a.z));
}

fcFloat3 fcFloat3_toRadians(fcFloat3 a) {
  return fcFloat3_create111(fcMath_toRadiansf(a.x), fcMath_toRadiansf(a.y), fcMath_toRadiansf(a.z));
}

fcFloat3 fcFloat3_trunc(fcFloat3 a) {
  return fcFloat3_create111(fcMath_truncf(a.x), fcMath_truncf(a.y), fcMath_truncf(a.z));
}

fcFloat3 fcFloat3_scalb(fcFloat3 a, fcInt3 n) {
  return fcFloat3_create111(fcMath_scalbf(a.x, n.x), fcMath_scalbf(a.y, n.y), fcMath_scalbf(a.z, n.z));
}

fcFloat3 fcFloat3_ldexp(fcFloat3 a, fcInt3 n) {
  return fcFloat3_create111(fcMath_ldexpf(a.x, n.x), fcMath_ldexpf(a.y, n.y), fcMath_ldexpf(a.z, n.z));
}

fcFloat3 fcFloat3_pown(fcFloat3 a, fcInt3 b) {
  return fcFloat3_create111(fcMath_pownf(a.x, b.x), fcMath_pownf(a.y, b.y), fcMath_pownf(a.z, b.z));
}

fcFloat3 fcFloat3_rootn(fcFloat3 a, fcInt3 b) {
  return fcFloat3_create111(fcMath_rootnf(a.x, b.x), fcMath_rootnf(a.y, b.y), fcMath_rootnf(a.z, b.z));
}

fcFloat3 fcFloat3_smoothStepk(fcFloat3 a, fcFloat3 b, cl_float c) {
  return fcFloat3_create111(fcMath_smoothStepf(a.x, b.x, c), fcMath_smoothStepf(a.y, b.y, c), fcMath_smoothStepf(a.z, b.z, c));
}


//
// fcFloat4
//

fcFloat4 fcFloat4_create() {
  fcFloat4 result = {.s = {0.0f}};
  return result;
}

fcFloat4 fcFloat4_create1(cl_float v) {
  return fcFloat4_create1111(v, v, v, v);
}

fcFloat4 fcFloat4_create1111(cl_float x, cl_float y, cl_float z, cl_float w) {
  fcFloat4 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  return result;
}

fcFloat4 fcFloat4_create112(cl_float x, cl_float y, fcFloat2 vec1) {
  return fcFloat4_create1111(x, y, vec1.x, vec1.y);
}
fcFloat4 fcFloat4_create121(cl_float x, fcFloat2 vec1, cl_float w) {
  return fcFloat4_create1111(x, vec1.x, vec1.y, w);
}
fcFloat4 fcFloat4_create13(cl_float x, fcFloat3 vec1) {
  return fcFloat4_create1111(x, vec1.x, vec1.y, vec1.z);
}
fcFloat4 fcFloat4_create211(fcFloat2 vec1, cl_float z, cl_float w) {
  return fcFloat4_create1111(vec1.x, vec1.y, z, w);
}
fcFloat4 fcFloat4_create22(fcFloat2 vec1, fcFloat2 vec2) {
  return fcFloat4_create1111(vec1.x, vec1.y, vec2.x, vec2.y);
}
fcFloat4 fcFloat4_create31(fcFloat3 vec1, cl_float w) {
  return fcFloat4_create1111(vec1.x, vec1.y, vec1.z, w);
}
fcFloat4 fcFloat4_create4(fcFloat4 vec1) {
  return fcFloat4_create1111(vec1.x, vec1.y, vec1.z, vec1.w);
}

fcFloat2 fcFloat4_odd(fcFloat4 a) {
  return fcFloat2_create11(a.y, a.w);
}

fcFloat2 fcFloat4_even(fcFloat4 a) {
  return fcFloat2_create11(a.x, a.z);
}

fcByte4 fcFloat4_convertByte4(fcFloat4 a) {
  return fcByte4_create1111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w);
}

fcShort4 fcFloat4_convertShort4(fcFloat4 a) {
  return fcShort4_create1111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w);
}

fcInt4 fcFloat4_convertInt4(fcFloat4 a) {
  return fcInt4_create1111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w);
}

fcLong4 fcFloat4_convertLong4(fcFloat4 a) {
  return fcLong4_create1111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w);
}

fcDouble4 fcFloat4_convertDouble4(fcFloat4 a) {
  return fcDouble4_create1111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w);
}

fcFloat2 fcFloat4_asFloat2(fcFloat4 a) {
  return fcFloat2_create11(a.x, a.y);
}

fcFloat3 fcFloat4_asFloat3(fcFloat4 a) {
  return fcFloat3_create111(a.x, a.y, a.z);
}

fcInt4 fcFloat4_isEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
}

fcInt4 fcFloat4_isNotEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
}

fcInt4 fcFloat4_isGreater(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
}

fcInt4 fcFloat4_isGreaterEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
}

fcInt4 fcFloat4_isLess(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
}

fcInt4 fcFloat4_isLessEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
}

fcFloat4 fcFloat4_select(fcFloat4 a, fcFloat4 b, fcInt4 c) {
  return fcFloat4_create1111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w));
}

fcInt4 fcFloat4_isFinite(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isFinitef(a.x), fcMath_isFinitef(a.y), fcMath_isFinitef(a.z), fcMath_isFinitef(a.w));
}

fcInt4 fcFloat4_isInf(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isInff(a.x), fcMath_isInff(a.y), fcMath_isInff(a.z), fcMath_isInff(a.w));
}

fcInt4 fcFloat4_isNaN(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isNaNf(a.x), fcMath_isNaNf(a.y), fcMath_isNaNf(a.z), fcMath_isNaNf(a.w));
}

fcInt4 fcFloat4_isNormal(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isNormalf(a.x), fcMath_isNormalf(a.y), fcMath_isNormalf(a.z), fcMath_isNormalf(a.w));
}

fcInt4 fcFloat4_isOrdered(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(fcMath_isOrderedf(a.x, b.x), fcMath_isOrderedf(a.y, b.y), fcMath_isOrderedf(a.z, b.z), fcMath_isOrderedf(a.w, b.w));
}

fcInt4 fcFloat4_isUnordered(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(fcMath_isUnorderedf(a.x, b.x), fcMath_isUnorderedf(a.y, b.y), fcMath_isUnorderedf(a.z, b.z), fcMath_isUnorderedf(a.w, b.w));
}

cl_int fcFloat4_any(fcFloat4 a) {
  return a.x != 0.0f || a.y != 0.0f || a.z != 0.0f || a.w != 0.0f;
}

cl_int fcFloat4_all(fcFloat4 a) {
  return !(a.x == 0.0f || a.y == 0.0f || a.z == 0.0f || a.w == 0.0f);
}

fcFloat4 fcFloat4_add(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

fcFloat4 fcFloat4_sub(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

fcDouble4 fcFloat4_muld(fcFloat4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w));
}

fcFloat4 fcFloat4_mulf(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w));
}

fcDouble4 fcFloat4_mulkd(fcFloat4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k));
}

fcFloat4 fcFloat4_mulkf(fcFloat4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k));
}

fcDouble4 fcFloat4_divd(fcFloat4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w));
}

fcFloat4 fcFloat4_divf(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w));
}

fcDouble4 fcFloat4_divkd(fcFloat4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k));
}

fcFloat4 fcFloat4_divkf(fcFloat4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k));
}

fcFloat4 fcFloat4_cross(fcFloat4 a, fcFloat4 b) {
  cl_float resX = a.y * b.z - a.z * b.y;
  cl_float resY = a.z * b.x - a.x * b.z;
  cl_float resZ = a.x * b.y - a.y * b.x;
  return fcFloat4_create1111(resX, resY, resZ, 0.0f);
}

cl_float fcFloat4_dot(fcFloat4 a, fcFloat4 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

cl_double fcFloat4_distance(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_length(fcFloat4_sub(a, b));
}

cl_double fcFloat4_length(fcFloat4 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
}

fcFloat4 fcFloat4_normalize(fcFloat4 a) {
  cl_double len = fcFloat4_length(a);
  return fcFloat4_create1111((cl_float)(a.x / len), (cl_float)(a.y / len), (cl_float)(a.z / len), (cl_float)(a.w / len));
}

fcFloat4 fcFloat4_abs(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w));
}

fcFloat4 fcFloat4_clamp(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w));
}

fcFloat4 fcFloat4_max(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w));
}

fcFloat4 fcFloat4_maxMag(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w));
}

fcFloat4 fcFloat4_min(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w));
}

fcFloat4 fcFloat4_minMag(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w));
}

fcFloat4 fcFloat4_mix(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w));
}

fcFloat4 fcFloat4_clampk(fcFloat4 v, cl_float min, cl_float max) {
  return fcFloat4_create1111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max));
}

fcFloat4 fcFloat4_maxk(fcFloat4 x, cl_float y) {
  return fcFloat4_create1111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y));
}

fcFloat4 fcFloat4_mink(fcFloat4 x, cl_float y) {
  return fcFloat4_create1111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y));
}

fcFloat4 fcFloat4_mixk(fcFloat4 x, fcFloat4 y, cl_float a) {
  return fcFloat4_create1111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a));
}

fcFloat4 fcFloat4_acos(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_acosf(a.x), fcMath_acosf(a.y), fcMath_acosf(a.z), fcMath_acosf(a.w));
}

fcFloat4 fcFloat4_acosh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_acoshf(a.x), fcMath_acoshf(a.y), fcMath_acoshf(a.z), fcMath_acoshf(a.w));
}

fcFloat4 fcFloat4_asin(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_asinf(a.x), fcMath_asinf(a.y), fcMath_asinf(a.z), fcMath_asinf(a.w));
}

fcFloat4 fcFloat4_asinh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_asinhf(a.x), fcMath_asinhf(a.y), fcMath_asinhf(a.z), fcMath_asinhf(a.w));
}

fcFloat4 fcFloat4_atan(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_atanf(a.x), fcMath_atanf(a.y), fcMath_atanf(a.z), fcMath_atanf(a.w));
}

fcFloat4 fcFloat4_atan2(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_atan2f(a.x, b.x), fcMath_atan2f(a.y, b.y), fcMath_atan2f(a.z, b.z), fcMath_atan2f(a.w, b.w));
}

fcFloat4 fcFloat4_atanh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_atanhf(a.x), fcMath_atanhf(a.y), fcMath_atanhf(a.z), fcMath_atanhf(a.w));
}

fcFloat4 fcFloat4_cbrt(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_cbrtf(a.x), fcMath_cbrtf(a.y), fcMath_cbrtf(a.z), fcMath_cbrtf(a.w));
}

fcFloat4 fcFloat4_ceil(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_ceilf(a.x), fcMath_ceilf(a.y), fcMath_ceilf(a.z), fcMath_ceilf(a.w));
}

fcFloat4 fcFloat4_copySign(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_copySignf(a.x, b.x), fcMath_copySignf(a.y, b.y), fcMath_copySignf(a.z, b.z), fcMath_copySignf(a.w, b.w));
}

fcFloat4 fcFloat4_cos(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_cosf(a.x), fcMath_cosf(a.y), fcMath_cosf(a.z), fcMath_cosf(a.w));
}

fcFloat4 fcFloat4_cosh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_coshf(a.x), fcMath_coshf(a.y), fcMath_coshf(a.z), fcMath_coshf(a.w));
}

fcFloat4 fcFloat4_erf(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_erff(a.x), fcMath_erff(a.y), fcMath_erff(a.z), fcMath_erff(a.w));
}

fcFloat4 fcFloat4_erfc(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_erfcf(a.x), fcMath_erfcf(a.y), fcMath_erfcf(a.z), fcMath_erfcf(a.w));
}

fcFloat4 fcFloat4_exp(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_expf(a.x), fcMath_expf(a.y), fcMath_expf(a.z), fcMath_expf(a.w));
}

fcFloat4 fcFloat4_exp10(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_exp10f(a.x), fcMath_exp10f(a.y), fcMath_exp10f(a.z), fcMath_exp10f(a.w));
}

fcFloat4 fcFloat4_exp2(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_exp2f(a.x), fcMath_exp2f(a.y), fcMath_exp2f(a.z), fcMath_exp2f(a.w));
}

fcFloat4 fcFloat4_expm1(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_expm1f(a.x), fcMath_expm1f(a.y), fcMath_expm1f(a.z), fcMath_expm1f(a.w));
}

fcFloat4 fcFloat4_fdim(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_fdimf(a.x, b.x), fcMath_fdimf(a.y, b.y), fcMath_fdimf(a.z, b.z), fcMath_fdimf(a.w, b.w));
}

fcFloat4 fcFloat4_floor(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_floorf(a.x), fcMath_floorf(a.y), fcMath_floorf(a.z), fcMath_floorf(a.w));
}

fcFloat4 fcFloat4_fma(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_fmaf(a.x, b.x, c.x), fcMath_fmaf(a.y, b.y, c.y), fcMath_fmaf(a.z, b.z, c.z), fcMath_fmaf(a.w, b.w, c.w));
}

fcFloat4 fcFloat4_fmod(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_fmodf(a.x, b.x), fcMath_fmodf(a.y, b.y), fcMath_fmodf(a.z, b.z), fcMath_fmodf(a.w, b.w));
}

fcFloat4 fcFloat4_fract(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_fractf(a.x), fcMath_fractf(a.y), fcMath_fractf(a.z), fcMath_fractf(a.w));
}

fcFloat4 fcFloat4_frexp(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_frexpf(a.x), fcMath_frexpf(a.y), fcMath_frexpf(a.z), fcMath_frexpf(a.w));
}

fcFloat4 fcFloat4_getExponent(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_getExponentf(a.x), fcMath_getExponentf(a.y), fcMath_getExponentf(a.z), fcMath_getExponentf(a.w));
}

fcFloat4 fcFloat4_hypot(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_hypotf(a.x, b.x), fcMath_hypotf(a.y, b.y), fcMath_hypotf(a.z, b.z), fcMath_hypotf(a.w, b.w));
}

fcFloat4 fcFloat4_lgamma(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_lgammaf(a.x), fcMath_lgammaf(a.y), fcMath_lgammaf(a.z), fcMath_lgammaf(a.w));
}

fcFloat4 fcFloat4_log(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_logf(a.x), fcMath_logf(a.y), fcMath_logf(a.z), fcMath_logf(a.w));
}

fcFloat4 fcFloat4_log10(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_log10f(a.x), fcMath_log10f(a.y), fcMath_log10f(a.z), fcMath_log10f(a.w));
}

fcFloat4 fcFloat4_log1p(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_log1pf(a.x), fcMath_log1pf(a.y), fcMath_log1pf(a.z), fcMath_log1pf(a.w));
}

fcFloat4 fcFloat4_log2(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_log2f(a.x), fcMath_log2f(a.y), fcMath_log2f(a.z), fcMath_log2f(a.w));
}

fcFloat4 fcFloat4_logb(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_logbf(a.x), fcMath_logbf(a.y), fcMath_logbf(a.z), fcMath_logbf(a.w));
}

fcFloat4 fcFloat4_mad(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_madf(a.x, b.x, c.x), fcMath_madf(a.y, b.y, c.y), fcMath_madf(a.z, b.z, c.z), fcMath_madf(a.w, b.w, c.w));
}

fcFloat4 fcFloat4_nextAfter(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_nextAfterf(a.x, b.x), fcMath_nextAfterf(a.y, b.y), fcMath_nextAfterf(a.z, b.z), fcMath_nextAfterf(a.w, b.w));
}

fcFloat4 fcFloat4_pow(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_powf(a.x, b.x), fcMath_powf(a.y, b.y), fcMath_powf(a.z, b.z), fcMath_powf(a.w, b.w));
}

fcFloat4 fcFloat4_powr(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_powrf(a.x, b.x), fcMath_powrf(a.y, b.y), fcMath_powrf(a.z, b.z), fcMath_powrf(a.w, b.w));
}

fcFloat4 fcFloat4_remainder(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_remainderf(a.x, b.x), fcMath_remainderf(a.y, b.y), fcMath_remainderf(a.z, b.z), fcMath_remainderf(a.w, b.w));
}

fcFloat4 fcFloat4_rint(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_rintf(a.x), fcMath_rintf(a.y), fcMath_rintf(a.z), fcMath_rintf(a.w));
}

fcFloat4 fcFloat4_round(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_roundf(a.x), fcMath_roundf(a.y), fcMath_roundf(a.z), fcMath_roundf(a.w));
}

fcFloat4 fcFloat4_rsqrt(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_rsqrtf(a.x), fcMath_rsqrtf(a.y), fcMath_rsqrtf(a.z), fcMath_rsqrtf(a.w));
}

fcFloat4 fcFloat4_signum(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_signumf(a.x), fcMath_signumf(a.y), fcMath_signumf(a.z), fcMath_signumf(a.w));
}

fcFloat4 fcFloat4_sin(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_sinf(a.x), fcMath_sinf(a.y), fcMath_sinf(a.z), fcMath_sinf(a.w));
}

fcFloat4 fcFloat4_sinh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_sinhf(a.x), fcMath_sinhf(a.y), fcMath_sinhf(a.z), fcMath_sinhf(a.w));
}

fcFloat4 fcFloat4_smoothStep(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_smoothStepf(a.x, b.x, c.x), fcMath_smoothStepf(a.y, b.y, c.y), fcMath_smoothStepf(a.z, b.z, c.z), fcMath_smoothStepf(a.w, b.w, c.w));
}

fcFloat4 fcFloat4_sqrt(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_sqrtf(a.x), fcMath_sqrtf(a.y), fcMath_sqrtf(a.z), fcMath_sqrtf(a.w));
}

fcFloat4 fcFloat4_step(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_stepf(a.x, b.x), fcMath_stepf(a.y, b.y), fcMath_stepf(a.z, b.z), fcMath_stepf(a.w, b.w));
}

fcFloat4 fcFloat4_tan(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_tanf(a.x), fcMath_tanf(a.y), fcMath_tanf(a.z), fcMath_tanf(a.w));
}

fcFloat4 fcFloat4_tanh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_tanhf(a.x), fcMath_tanhf(a.y), fcMath_tanhf(a.z), fcMath_tanhf(a.w));
}

fcFloat4 fcFloat4_tgamma(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_tgammaf(a.x), fcMath_tgammaf(a.y), fcMath_tgammaf(a.z), fcMath_tgammaf(a.w));
}

fcFloat4 fcFloat4_toDegrees(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_toDegreesf(a.x), fcMath_toDegreesf(a.y), fcMath_toDegreesf(a.z), fcMath_toDegreesf(a.w));
}

fcFloat4 fcFloat4_toRadians(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_toRadiansf(a.x), fcMath_toRadiansf(a.y), fcMath_toRadiansf(a.z), fcMath_toRadiansf(a.w));
}

fcFloat4 fcFloat4_trunc(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_truncf(a.x), fcMath_truncf(a.y), fcMath_truncf(a.z), fcMath_truncf(a.w));
}

fcFloat4 fcFloat4_scalb(fcFloat4 a, fcInt4 n) {
  return fcFloat4_create1111(fcMath_scalbf(a.x, n.x), fcMath_scalbf(a.y, n.y), fcMath_scalbf(a.z, n.z), fcMath_scalbf(a.w, n.w));
}

fcFloat4 fcFloat4_ldexp(fcFloat4 a, fcInt4 n) {
  return fcFloat4_create1111(fcMath_ldexpf(a.x, n.x), fcMath_ldexpf(a.y, n.y), fcMath_ldexpf(a.z, n.z), fcMath_ldexpf(a.w, n.w));
}

fcFloat4 fcFloat4_pown(fcFloat4 a, fcInt4 b) {
  return fcFloat4_create1111(fcMath_pownf(a.x, b.x), fcMath_pownf(a.y, b.y), fcMath_pownf(a.z, b.z), fcMath_pownf(a.w, b.w));
}

fcFloat4 fcFloat4_rootn(fcFloat4 a, fcInt4 b) {
  return fcFloat4_create1111(fcMath_rootnf(a.x, b.x), fcMath_rootnf(a.y, b.y), fcMath_rootnf(a.z, b.z), fcMath_rootnf(a.w, b.w));
}

fcFloat4 fcFloat4_smoothStepk(fcFloat4 a, fcFloat4 b, cl_float c) {
  return fcFloat4_create1111(fcMath_smoothStepf(a.x, b.x, c), fcMath_smoothStepf(a.y, b.y, c), fcMath_smoothStepf(a.z, b.z, c), fcMath_smoothStepf(a.w, b.w, c));
}


//
// fcFloat8
//

fcFloat8 fcFloat8_create() {
  fcFloat8 result = {.s = {0.0f}};
  return result;
}

fcFloat8 fcFloat8_create1(cl_float v) {
  return fcFloat8_create11111111(v, v, v, v, v, v, v, v);
}

fcFloat8 fcFloat8_create11111111(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s4;
  result.s5 = s5;
  result.s6 = s6;
  result.s7 = s7;
  return result;
}

fcFloat8 fcFloat8_create1111112(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec1) {
  return fcFloat8_create11111111(x, y, z, w, s4, s5, vec1.x, vec1.y);
}
fcFloat8 fcFloat8_create1111121(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat2 vec1, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, s7);
}
fcFloat8 fcFloat8_create111113(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat3 vec1) {
  return fcFloat8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, vec1.z);
}
fcFloat8 fcFloat8_create1111211(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, w, vec1.x, vec1.y, s6, s7);
}
fcFloat8 fcFloat8_create111122(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create111131(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat3 vec1, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, s7);
}
fcFloat8 fcFloat8_create11114(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat4 vec1) {
  return fcFloat8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
}
fcFloat8 fcFloat8_create1112111(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, s5, s6, s7);
}
fcFloat8 fcFloat8_create111212(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create111221(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create11123(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create111311(cl_float x, cl_float y, cl_float z, fcFloat3 vec1, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, s6, s7);
}
fcFloat8 fcFloat8_create11132(cl_float x, cl_float y, cl_float z, fcFloat3 vec1, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create11141(cl_float x, cl_float y, cl_float z, fcFloat4 vec1, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s7);
}
fcFloat8 fcFloat8_create1121111(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create112112(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, s4, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create112121(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create11213(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create112211(cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s6, s7);
}
fcFloat8 fcFloat8_create11222(cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create11231(cl_float x, cl_float y, fcFloat2 vec1, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s7);
}
fcFloat8 fcFloat8_create1124(cl_float x, cl_float y, fcFloat2 vec1, fcFloat4 vec2) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcFloat8 fcFloat8_create113111(cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, s6, s7);
}
fcFloat8 fcFloat8_create11312(cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create11321(cl_float x, cl_float y, fcFloat3 vec1, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create1133(cl_float x, cl_float y, fcFloat3 vec1, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create11411(cl_float x, cl_float y, fcFloat4 vec1, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s6, s7);
}
fcFloat8 fcFloat8_create1142(cl_float x, cl_float y, fcFloat4 vec1, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create1211111(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create121112(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, s4, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create121121(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create12113(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create121211(cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s6, s7);
}
fcFloat8 fcFloat8_create12122(cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create12131(cl_float x, fcFloat2 vec1, cl_float w, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s7);
}
fcFloat8 fcFloat8_create1214(cl_float x, fcFloat2 vec1, cl_float w, fcFloat4 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcFloat8 fcFloat8_create122111(cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, s6, s7);
}
fcFloat8 fcFloat8_create12212(cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create12221(cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcFloat8 fcFloat8_create1223(cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcFloat8 fcFloat8_create12311(cl_float x, fcFloat2 vec1, fcFloat3 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcFloat8 fcFloat8_create1232(cl_float x, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create1241(cl_float x, fcFloat2 vec1, fcFloat4 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcFloat8 fcFloat8_create131111(cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create13112(cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create13121(cl_float x, fcFloat3 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create1313(cl_float x, fcFloat3 vec1, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create13211(cl_float x, fcFloat3 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s6, s7);
}
fcFloat8 fcFloat8_create1322(cl_float x, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create1331(cl_float x, fcFloat3 vec1, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s7);
}
fcFloat8 fcFloat8_create134(cl_float x, fcFloat3 vec1, fcFloat4 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcFloat8 fcFloat8_create14111(cl_float x, fcFloat4 vec1, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, s6, s7);
}
fcFloat8 fcFloat8_create1412(cl_float x, fcFloat4 vec1, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create1421(cl_float x, fcFloat4 vec1, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create143(cl_float x, fcFloat4 vec1, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create2111111(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create211112(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, s4, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create211121(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create21113(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create211211(fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s6, s7);
}
fcFloat8 fcFloat8_create21122(fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create21131(fcFloat2 vec1, cl_float z, cl_float w, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcFloat8 fcFloat8_create2114(fcFloat2 vec1, cl_float z, cl_float w, fcFloat4 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcFloat8 fcFloat8_create212111(fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, s6, s7);
}
fcFloat8 fcFloat8_create21212(fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create21221(fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcFloat8 fcFloat8_create2123(fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcFloat8 fcFloat8_create21311(fcFloat2 vec1, cl_float z, fcFloat3 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcFloat8 fcFloat8_create2132(fcFloat2 vec1, cl_float z, fcFloat3 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create2141(fcFloat2 vec1, cl_float z, fcFloat4 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcFloat8 fcFloat8_create221111(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create22112(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create22121(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, s7);
}
fcFloat8 fcFloat8_create2213(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, vec3.z);
}
fcFloat8 fcFloat8_create22211(fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s6, s7);
}
fcFloat8 fcFloat8_create2222(fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, fcFloat2 vec4) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
}
fcFloat8 fcFloat8_create2231(fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s7);
}
fcFloat8 fcFloat8_create224(fcFloat2 vec1, fcFloat2 vec2, fcFloat4 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
}
fcFloat8 fcFloat8_create23111(fcFloat2 vec1, fcFloat3 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, s6, s7);
}
fcFloat8 fcFloat8_create2312(fcFloat2 vec1, fcFloat3 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create2321(fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s7);
}
fcFloat8 fcFloat8_create233(fcFloat2 vec1, fcFloat3 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
}
fcFloat8 fcFloat8_create2411(fcFloat2 vec1, fcFloat4 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s6, s7);
}
fcFloat8 fcFloat8_create242(fcFloat2 vec1, fcFloat4 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create311111(fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create31112(fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create31121(fcFloat3 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create3113(fcFloat3 vec1, cl_float w, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create31211(fcFloat3 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s6, s7);
}
fcFloat8 fcFloat8_create3122(fcFloat3 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create3131(fcFloat3 vec1, cl_float w, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcFloat8 fcFloat8_create314(fcFloat3 vec1, cl_float w, fcFloat4 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcFloat8 fcFloat8_create32111(fcFloat3 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, s6, s7);
}
fcFloat8 fcFloat8_create3212(fcFloat3 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create3221(fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcFloat8 fcFloat8_create323(fcFloat3 vec1, fcFloat2 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcFloat8 fcFloat8_create3311(fcFloat3 vec1, fcFloat3 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcFloat8 fcFloat8_create332(fcFloat3 vec1, fcFloat3 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create341(fcFloat3 vec1, fcFloat4 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcFloat8 fcFloat8_create41111(fcFloat4 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, s6, s7);
}
fcFloat8 fcFloat8_create4112(fcFloat4 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, vec2.x, vec2.y);
}
fcFloat8 fcFloat8_create4121(fcFloat4 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, s7);
}
fcFloat8 fcFloat8_create413(fcFloat4 vec1, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, vec2.z);
}
fcFloat8 fcFloat8_create4211(fcFloat4 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s6, s7);
}
fcFloat8 fcFloat8_create422(fcFloat4 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcFloat8 fcFloat8_create431(fcFloat4 vec1, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s7);
}
fcFloat8 fcFloat8_create44(fcFloat4 vec1, fcFloat4 vec2) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcFloat8 fcFloat8_create8(fcFloat8 vec1) {
  return fcFloat8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s4, vec1.s5, vec1.s6, vec1.s7);
}

fcFloat4 fcFloat8_odd(fcFloat8 a) {
  return fcFloat4_create1111(a.y, a.w, a.s5, a.s7);
}

fcFloat4 fcFloat8_even(fcFloat8 a) {
  return fcFloat4_create1111(a.x, a.z, a.s4, a.s6);
}

fcByte8 fcFloat8_convertByte8(fcFloat8 a) {
  return fcByte8_create11111111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w, (cl_byte) a.s4, (cl_byte) a.s5, (cl_byte) a.s6, (cl_byte) a.s7);
}

fcShort8 fcFloat8_convertShort8(fcFloat8 a) {
  return fcShort8_create11111111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w, (cl_short) a.s4, (cl_short) a.s5, (cl_short) a.s6, (cl_short) a.s7);
}

fcInt8 fcFloat8_convertInt8(fcFloat8 a) {
  return fcInt8_create11111111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w, (cl_int) a.s4, (cl_int) a.s5, (cl_int) a.s6, (cl_int) a.s7);
}

fcLong8 fcFloat8_convertLong8(fcFloat8 a) {
  return fcLong8_create11111111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w, (cl_long) a.s4, (cl_long) a.s5, (cl_long) a.s6, (cl_long) a.s7);
}

fcDouble8 fcFloat8_convertDouble8(fcFloat8 a) {
  return fcDouble8_create11111111((cl_double) a.x, (cl_double) a.y, (cl_double) a.z, (cl_double) a.w, (cl_double) a.s4, (cl_double) a.s5, (cl_double) a.s6, (cl_double) a.s7);
}

fcFloat2 fcFloat8_asFloat2(fcFloat8 a) {
  return fcFloat2_create11(a.x, a.y);
}

fcFloat3 fcFloat8_asFloat3(fcFloat8 a) {
  return fcFloat3_create111(a.x, a.y, a.z);
}

fcFloat4 fcFloat8_asFloat4(fcFloat8 a) {
  return fcFloat4_create1111(a.x, a.y, a.z, a.w);
}

fcInt8 fcFloat8_isEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s4 == b.s4? 1 : 0, a.s5 == b.s5? 1 : 0, a.s6 == b.s6? 1 : 0, a.s7 == b.s7? 1 : 0);
}

fcInt8 fcFloat8_isNotEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s4 != b.s4? 1 : 0, a.s5 != b.s5? 1 : 0, a.s6 != b.s6? 1 : 0, a.s7 != b.s7? 1 : 0);
}

fcInt8 fcFloat8_isGreater(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s4 > b.s4? 1 : 0, a.s5 > b.s5? 1 : 0, a.s6 > b.s6? 1 : 0, a.s7 > b.s7? 1 : 0);
}

fcInt8 fcFloat8_isGreaterEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s4 >= b.s4? 1 : 0, a.s5 >= b.s5? 1 : 0, a.s6 >= b.s6? 1 : 0, a.s7 >= b.s7? 1 : 0);
}

fcInt8 fcFloat8_isLess(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s4 < b.s4? 1 : 0, a.s5 < b.s5? 1 : 0, a.s6 < b.s6? 1 : 0, a.s7 < b.s7? 1 : 0);
}

fcInt8 fcFloat8_isLessEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s4 <= b.s4? 1 : 0, a.s5 <= b.s5? 1 : 0, a.s6 <= b.s6? 1 : 0, a.s7 <= b.s7? 1 : 0);
}

fcFloat8 fcFloat8_select(fcFloat8 a, fcFloat8 b, fcInt8 c) {
  return fcFloat8_create11111111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w), fcMath_select(a.s4, b.s4, c.s4), fcMath_select(a.s5, b.s5, c.s5), fcMath_select(a.s6, b.s6, c.s6), fcMath_select(a.s7, b.s7, c.s7));
}

fcInt8 fcFloat8_isFinite(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isFinitef(a.x), fcMath_isFinitef(a.y), fcMath_isFinitef(a.z), fcMath_isFinitef(a.w), fcMath_isFinitef(a.s4), fcMath_isFinitef(a.s5), fcMath_isFinitef(a.s6), fcMath_isFinitef(a.s7));
}

fcInt8 fcFloat8_isInf(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isInff(a.x), fcMath_isInff(a.y), fcMath_isInff(a.z), fcMath_isInff(a.w), fcMath_isInff(a.s4), fcMath_isInff(a.s5), fcMath_isInff(a.s6), fcMath_isInff(a.s7));
}

fcInt8 fcFloat8_isNaN(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isNaNf(a.x), fcMath_isNaNf(a.y), fcMath_isNaNf(a.z), fcMath_isNaNf(a.w), fcMath_isNaNf(a.s4), fcMath_isNaNf(a.s5), fcMath_isNaNf(a.s6), fcMath_isNaNf(a.s7));
}

fcInt8 fcFloat8_isNormal(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isNormalf(a.x), fcMath_isNormalf(a.y), fcMath_isNormalf(a.z), fcMath_isNormalf(a.w), fcMath_isNormalf(a.s4), fcMath_isNormalf(a.s5), fcMath_isNormalf(a.s6), fcMath_isNormalf(a.s7));
}

fcInt8 fcFloat8_isOrdered(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(fcMath_isOrderedf(a.x, b.x), fcMath_isOrderedf(a.y, b.y), fcMath_isOrderedf(a.z, b.z), fcMath_isOrderedf(a.w, b.w), fcMath_isOrderedf(a.s4, b.s4), fcMath_isOrderedf(a.s5, b.s5), fcMath_isOrderedf(a.s6, b.s6), fcMath_isOrderedf(a.s7, b.s7));
}

fcInt8 fcFloat8_isUnordered(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(fcMath_isUnorderedf(a.x, b.x), fcMath_isUnorderedf(a.y, b.y), fcMath_isUnorderedf(a.z, b.z), fcMath_isUnorderedf(a.w, b.w), fcMath_isUnorderedf(a.s4, b.s4), fcMath_isUnorderedf(a.s5, b.s5), fcMath_isUnorderedf(a.s6, b.s6), fcMath_isUnorderedf(a.s7, b.s7));
}

cl_int fcFloat8_any(fcFloat8 a) {
  return a.x != 0.0f || a.y != 0.0f || a.z != 0.0f || a.w != 0.0f || a.s4 != 0.0f || a.s5 != 0.0f || a.s6 != 0.0f || a.s7 != 0.0f;
}

cl_int fcFloat8_all(fcFloat8 a) {
  return !(a.x == 0.0f || a.y == 0.0f || a.z == 0.0f || a.w == 0.0f || a.s4 == 0.0f || a.s5 == 0.0f || a.s6 == 0.0f || a.s7 == 0.0f);
}

fcFloat8 fcFloat8_add(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w, a.s4 + b.s4, a.s5 + b.s5, a.s6 + b.s6, a.s7 + b.s7);
}

fcFloat8 fcFloat8_sub(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w, a.s4 - b.s4, a.s5 - b.s5, a.s6 - b.s6, a.s7 - b.s7);
}

fcDouble8 fcFloat8_muld(fcFloat8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w), (cl_double)(a.s4 * b.s4), (cl_double)(a.s5 * b.s5), (cl_double)(a.s6 * b.s6), (cl_double)(a.s7 * b.s7));
}

fcFloat8 fcFloat8_mulf(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w), (cl_float)(a.s4 * b.s4), (cl_float)(a.s5 * b.s5), (cl_float)(a.s6 * b.s6), (cl_float)(a.s7 * b.s7));
}

fcDouble8 fcFloat8_mulkd(fcFloat8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k), (cl_double)(a.s4 * k), (cl_double)(a.s5 * k), (cl_double)(a.s6 * k), (cl_double)(a.s7 * k));
}

fcFloat8 fcFloat8_mulkf(fcFloat8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k), (cl_float)(a.s4 * k), (cl_float)(a.s5 * k), (cl_float)(a.s6 * k), (cl_float)(a.s7 * k));
}

fcDouble8 fcFloat8_divd(fcFloat8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w), (cl_double)(a.s4 / b.s4), (cl_double)(a.s5 / b.s5), (cl_double)(a.s6 / b.s6), (cl_double)(a.s7 / b.s7));
}

fcFloat8 fcFloat8_divf(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w), (cl_float)(a.s4 / b.s4), (cl_float)(a.s5 / b.s5), (cl_float)(a.s6 / b.s6), (cl_float)(a.s7 / b.s7));
}

fcDouble8 fcFloat8_divkd(fcFloat8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k), (cl_double)(a.s4 / k), (cl_double)(a.s5 / k), (cl_double)(a.s6 / k), (cl_double)(a.s7 / k));
}

fcFloat8 fcFloat8_divkf(fcFloat8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k), (cl_float)(a.s4 / k), (cl_float)(a.s5 / k), (cl_float)(a.s6 / k), (cl_float)(a.s7 / k));
}

cl_float fcFloat8_dot(fcFloat8 a, fcFloat8 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w + a.s4 * b.s4 + a.s5 * b.s5 + a.s6 * b.s6 + a.s7 * b.s7;
}

cl_double fcFloat8_distance(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_length(fcFloat8_sub(a, b));
}

cl_double fcFloat8_length(fcFloat8 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w + a.s4 * a.s4 + a.s5 * a.s5 + a.s6 * a.s6 + a.s7 * a.s7);
}

fcFloat8 fcFloat8_normalize(fcFloat8 a) {
  cl_double len = fcFloat8_length(a);
  return fcFloat8_create11111111((cl_float)(a.x / len), (cl_float)(a.y / len), (cl_float)(a.z / len), (cl_float)(a.w / len), (cl_float)(a.s4 / len), (cl_float)(a.s5 / len), (cl_float)(a.s6 / len), (cl_float)(a.s7 / len));
}

fcFloat8 fcFloat8_abs(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w), fcMath_abs(a.s4), fcMath_abs(a.s5), fcMath_abs(a.s6), fcMath_abs(a.s7));
}

fcFloat8 fcFloat8_clamp(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w), fcMath_clamp(a.s4, b.s4, c.s4), fcMath_clamp(a.s5, b.s5, c.s5), fcMath_clamp(a.s6, b.s6, c.s6), fcMath_clamp(a.s7, b.s7, c.s7));
}

fcFloat8 fcFloat8_max(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w), fcMath_max(a.s4, b.s4), fcMath_max(a.s5, b.s5), fcMath_max(a.s6, b.s6), fcMath_max(a.s7, b.s7));
}

fcFloat8 fcFloat8_maxMag(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w), fcMath_maxMag(a.s4, b.s4), fcMath_maxMag(a.s5, b.s5), fcMath_maxMag(a.s6, b.s6), fcMath_maxMag(a.s7, b.s7));
}

fcFloat8 fcFloat8_min(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w), fcMath_min(a.s4, b.s4), fcMath_min(a.s5, b.s5), fcMath_min(a.s6, b.s6), fcMath_min(a.s7, b.s7));
}

fcFloat8 fcFloat8_minMag(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w), fcMath_minMag(a.s4, b.s4), fcMath_minMag(a.s5, b.s5), fcMath_minMag(a.s6, b.s6), fcMath_minMag(a.s7, b.s7));
}

fcFloat8 fcFloat8_mix(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w), fcMath_mix(a.s4, b.s4, c.s4), fcMath_mix(a.s5, b.s5, c.s5), fcMath_mix(a.s6, b.s6, c.s6), fcMath_mix(a.s7, b.s7, c.s7));
}

fcFloat8 fcFloat8_clampk(fcFloat8 v, cl_float min, cl_float max) {
  return fcFloat8_create11111111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max), fcMath_clamp(v.s4, min, max), fcMath_clamp(v.s5, min, max), fcMath_clamp(v.s6, min, max), fcMath_clamp(v.s7, min, max));
}

fcFloat8 fcFloat8_maxk(fcFloat8 x, cl_float y) {
  return fcFloat8_create11111111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y), fcMath_max(x.s4, y), fcMath_max(x.s5, y), fcMath_max(x.s6, y), fcMath_max(x.s7, y));
}

fcFloat8 fcFloat8_mink(fcFloat8 x, cl_float y) {
  return fcFloat8_create11111111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y), fcMath_min(x.s4, y), fcMath_min(x.s5, y), fcMath_min(x.s6, y), fcMath_min(x.s7, y));
}

fcFloat8 fcFloat8_mixk(fcFloat8 x, fcFloat8 y, cl_float a) {
  return fcFloat8_create11111111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a), fcMath_mix(x.s4, y.s4, a), fcMath_mix(x.s5, y.s5, a), fcMath_mix(x.s6, y.s6, a), fcMath_mix(x.s7, y.s7, a));
}

fcFloat8 fcFloat8_acos(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_acosf(a.x), fcMath_acosf(a.y), fcMath_acosf(a.z), fcMath_acosf(a.w), fcMath_acosf(a.s4), fcMath_acosf(a.s5), fcMath_acosf(a.s6), fcMath_acosf(a.s7));
}

fcFloat8 fcFloat8_acosh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_acoshf(a.x), fcMath_acoshf(a.y), fcMath_acoshf(a.z), fcMath_acoshf(a.w), fcMath_acoshf(a.s4), fcMath_acoshf(a.s5), fcMath_acoshf(a.s6), fcMath_acoshf(a.s7));
}

fcFloat8 fcFloat8_asin(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_asinf(a.x), fcMath_asinf(a.y), fcMath_asinf(a.z), fcMath_asinf(a.w), fcMath_asinf(a.s4), fcMath_asinf(a.s5), fcMath_asinf(a.s6), fcMath_asinf(a.s7));
}

fcFloat8 fcFloat8_asinh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_asinhf(a.x), fcMath_asinhf(a.y), fcMath_asinhf(a.z), fcMath_asinhf(a.w), fcMath_asinhf(a.s4), fcMath_asinhf(a.s5), fcMath_asinhf(a.s6), fcMath_asinhf(a.s7));
}

fcFloat8 fcFloat8_atan(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_atanf(a.x), fcMath_atanf(a.y), fcMath_atanf(a.z), fcMath_atanf(a.w), fcMath_atanf(a.s4), fcMath_atanf(a.s5), fcMath_atanf(a.s6), fcMath_atanf(a.s7));
}

fcFloat8 fcFloat8_atan2(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_atan2f(a.x, b.x), fcMath_atan2f(a.y, b.y), fcMath_atan2f(a.z, b.z), fcMath_atan2f(a.w, b.w), fcMath_atan2f(a.s4, b.s4), fcMath_atan2f(a.s5, b.s5), fcMath_atan2f(a.s6, b.s6), fcMath_atan2f(a.s7, b.s7));
}

fcFloat8 fcFloat8_atanh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_atanhf(a.x), fcMath_atanhf(a.y), fcMath_atanhf(a.z), fcMath_atanhf(a.w), fcMath_atanhf(a.s4), fcMath_atanhf(a.s5), fcMath_atanhf(a.s6), fcMath_atanhf(a.s7));
}

fcFloat8 fcFloat8_cbrt(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_cbrtf(a.x), fcMath_cbrtf(a.y), fcMath_cbrtf(a.z), fcMath_cbrtf(a.w), fcMath_cbrtf(a.s4), fcMath_cbrtf(a.s5), fcMath_cbrtf(a.s6), fcMath_cbrtf(a.s7));
}

fcFloat8 fcFloat8_ceil(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_ceilf(a.x), fcMath_ceilf(a.y), fcMath_ceilf(a.z), fcMath_ceilf(a.w), fcMath_ceilf(a.s4), fcMath_ceilf(a.s5), fcMath_ceilf(a.s6), fcMath_ceilf(a.s7));
}

fcFloat8 fcFloat8_copySign(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_copySignf(a.x, b.x), fcMath_copySignf(a.y, b.y), fcMath_copySignf(a.z, b.z), fcMath_copySignf(a.w, b.w), fcMath_copySignf(a.s4, b.s4), fcMath_copySignf(a.s5, b.s5), fcMath_copySignf(a.s6, b.s6), fcMath_copySignf(a.s7, b.s7));
}

fcFloat8 fcFloat8_cos(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_cosf(a.x), fcMath_cosf(a.y), fcMath_cosf(a.z), fcMath_cosf(a.w), fcMath_cosf(a.s4), fcMath_cosf(a.s5), fcMath_cosf(a.s6), fcMath_cosf(a.s7));
}

fcFloat8 fcFloat8_cosh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_coshf(a.x), fcMath_coshf(a.y), fcMath_coshf(a.z), fcMath_coshf(a.w), fcMath_coshf(a.s4), fcMath_coshf(a.s5), fcMath_coshf(a.s6), fcMath_coshf(a.s7));
}

fcFloat8 fcFloat8_erf(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_erff(a.x), fcMath_erff(a.y), fcMath_erff(a.z), fcMath_erff(a.w), fcMath_erff(a.s4), fcMath_erff(a.s5), fcMath_erff(a.s6), fcMath_erff(a.s7));
}

fcFloat8 fcFloat8_erfc(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_erfcf(a.x), fcMath_erfcf(a.y), fcMath_erfcf(a.z), fcMath_erfcf(a.w), fcMath_erfcf(a.s4), fcMath_erfcf(a.s5), fcMath_erfcf(a.s6), fcMath_erfcf(a.s7));
}

fcFloat8 fcFloat8_exp(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_expf(a.x), fcMath_expf(a.y), fcMath_expf(a.z), fcMath_expf(a.w), fcMath_expf(a.s4), fcMath_expf(a.s5), fcMath_expf(a.s6), fcMath_expf(a.s7));
}

fcFloat8 fcFloat8_exp10(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_exp10f(a.x), fcMath_exp10f(a.y), fcMath_exp10f(a.z), fcMath_exp10f(a.w), fcMath_exp10f(a.s4), fcMath_exp10f(a.s5), fcMath_exp10f(a.s6), fcMath_exp10f(a.s7));
}

fcFloat8 fcFloat8_exp2(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_exp2f(a.x), fcMath_exp2f(a.y), fcMath_exp2f(a.z), fcMath_exp2f(a.w), fcMath_exp2f(a.s4), fcMath_exp2f(a.s5), fcMath_exp2f(a.s6), fcMath_exp2f(a.s7));
}

fcFloat8 fcFloat8_expm1(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_expm1f(a.x), fcMath_expm1f(a.y), fcMath_expm1f(a.z), fcMath_expm1f(a.w), fcMath_expm1f(a.s4), fcMath_expm1f(a.s5), fcMath_expm1f(a.s6), fcMath_expm1f(a.s7));
}

fcFloat8 fcFloat8_fdim(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_fdimf(a.x, b.x), fcMath_fdimf(a.y, b.y), fcMath_fdimf(a.z, b.z), fcMath_fdimf(a.w, b.w), fcMath_fdimf(a.s4, b.s4), fcMath_fdimf(a.s5, b.s5), fcMath_fdimf(a.s6, b.s6), fcMath_fdimf(a.s7, b.s7));
}

fcFloat8 fcFloat8_floor(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_floorf(a.x), fcMath_floorf(a.y), fcMath_floorf(a.z), fcMath_floorf(a.w), fcMath_floorf(a.s4), fcMath_floorf(a.s5), fcMath_floorf(a.s6), fcMath_floorf(a.s7));
}

fcFloat8 fcFloat8_fma(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_fmaf(a.x, b.x, c.x), fcMath_fmaf(a.y, b.y, c.y), fcMath_fmaf(a.z, b.z, c.z), fcMath_fmaf(a.w, b.w, c.w), fcMath_fmaf(a.s4, b.s4, c.s4), fcMath_fmaf(a.s5, b.s5, c.s5), fcMath_fmaf(a.s6, b.s6, c.s6), fcMath_fmaf(a.s7, b.s7, c.s7));
}

fcFloat8 fcFloat8_fmod(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_fmodf(a.x, b.x), fcMath_fmodf(a.y, b.y), fcMath_fmodf(a.z, b.z), fcMath_fmodf(a.w, b.w), fcMath_fmodf(a.s4, b.s4), fcMath_fmodf(a.s5, b.s5), fcMath_fmodf(a.s6, b.s6), fcMath_fmodf(a.s7, b.s7));
}

fcFloat8 fcFloat8_fract(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_fractf(a.x), fcMath_fractf(a.y), fcMath_fractf(a.z), fcMath_fractf(a.w), fcMath_fractf(a.s4), fcMath_fractf(a.s5), fcMath_fractf(a.s6), fcMath_fractf(a.s7));
}

fcFloat8 fcFloat8_frexp(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_frexpf(a.x), fcMath_frexpf(a.y), fcMath_frexpf(a.z), fcMath_frexpf(a.w), fcMath_frexpf(a.s4), fcMath_frexpf(a.s5), fcMath_frexpf(a.s6), fcMath_frexpf(a.s7));
}

fcFloat8 fcFloat8_getExponent(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_getExponentf(a.x), fcMath_getExponentf(a.y), fcMath_getExponentf(a.z), fcMath_getExponentf(a.w), fcMath_getExponentf(a.s4), fcMath_getExponentf(a.s5), fcMath_getExponentf(a.s6), fcMath_getExponentf(a.s7));
}

fcFloat8 fcFloat8_hypot(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_hypotf(a.x, b.x), fcMath_hypotf(a.y, b.y), fcMath_hypotf(a.z, b.z), fcMath_hypotf(a.w, b.w), fcMath_hypotf(a.s4, b.s4), fcMath_hypotf(a.s5, b.s5), fcMath_hypotf(a.s6, b.s6), fcMath_hypotf(a.s7, b.s7));
}

fcFloat8 fcFloat8_lgamma(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_lgammaf(a.x), fcMath_lgammaf(a.y), fcMath_lgammaf(a.z), fcMath_lgammaf(a.w), fcMath_lgammaf(a.s4), fcMath_lgammaf(a.s5), fcMath_lgammaf(a.s6), fcMath_lgammaf(a.s7));
}

fcFloat8 fcFloat8_log(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_logf(a.x), fcMath_logf(a.y), fcMath_logf(a.z), fcMath_logf(a.w), fcMath_logf(a.s4), fcMath_logf(a.s5), fcMath_logf(a.s6), fcMath_logf(a.s7));
}

fcFloat8 fcFloat8_log10(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_log10f(a.x), fcMath_log10f(a.y), fcMath_log10f(a.z), fcMath_log10f(a.w), fcMath_log10f(a.s4), fcMath_log10f(a.s5), fcMath_log10f(a.s6), fcMath_log10f(a.s7));
}

fcFloat8 fcFloat8_log1p(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_log1pf(a.x), fcMath_log1pf(a.y), fcMath_log1pf(a.z), fcMath_log1pf(a.w), fcMath_log1pf(a.s4), fcMath_log1pf(a.s5), fcMath_log1pf(a.s6), fcMath_log1pf(a.s7));
}

fcFloat8 fcFloat8_log2(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_log2f(a.x), fcMath_log2f(a.y), fcMath_log2f(a.z), fcMath_log2f(a.w), fcMath_log2f(a.s4), fcMath_log2f(a.s5), fcMath_log2f(a.s6), fcMath_log2f(a.s7));
}

fcFloat8 fcFloat8_logb(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_logbf(a.x), fcMath_logbf(a.y), fcMath_logbf(a.z), fcMath_logbf(a.w), fcMath_logbf(a.s4), fcMath_logbf(a.s5), fcMath_logbf(a.s6), fcMath_logbf(a.s7));
}

fcFloat8 fcFloat8_mad(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_madf(a.x, b.x, c.x), fcMath_madf(a.y, b.y, c.y), fcMath_madf(a.z, b.z, c.z), fcMath_madf(a.w, b.w, c.w), fcMath_madf(a.s4, b.s4, c.s4), fcMath_madf(a.s5, b.s5, c.s5), fcMath_madf(a.s6, b.s6, c.s6), fcMath_madf(a.s7, b.s7, c.s7));
}

fcFloat8 fcFloat8_nextAfter(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_nextAfterf(a.x, b.x), fcMath_nextAfterf(a.y, b.y), fcMath_nextAfterf(a.z, b.z), fcMath_nextAfterf(a.w, b.w), fcMath_nextAfterf(a.s4, b.s4), fcMath_nextAfterf(a.s5, b.s5), fcMath_nextAfterf(a.s6, b.s6), fcMath_nextAfterf(a.s7, b.s7));
}

fcFloat8 fcFloat8_pow(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_powf(a.x, b.x), fcMath_powf(a.y, b.y), fcMath_powf(a.z, b.z), fcMath_powf(a.w, b.w), fcMath_powf(a.s4, b.s4), fcMath_powf(a.s5, b.s5), fcMath_powf(a.s6, b.s6), fcMath_powf(a.s7, b.s7));
}

fcFloat8 fcFloat8_powr(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_powrf(a.x, b.x), fcMath_powrf(a.y, b.y), fcMath_powrf(a.z, b.z), fcMath_powrf(a.w, b.w), fcMath_powrf(a.s4, b.s4), fcMath_powrf(a.s5, b.s5), fcMath_powrf(a.s6, b.s6), fcMath_powrf(a.s7, b.s7));
}

fcFloat8 fcFloat8_remainder(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_remainderf(a.x, b.x), fcMath_remainderf(a.y, b.y), fcMath_remainderf(a.z, b.z), fcMath_remainderf(a.w, b.w), fcMath_remainderf(a.s4, b.s4), fcMath_remainderf(a.s5, b.s5), fcMath_remainderf(a.s6, b.s6), fcMath_remainderf(a.s7, b.s7));
}

fcFloat8 fcFloat8_rint(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_rintf(a.x), fcMath_rintf(a.y), fcMath_rintf(a.z), fcMath_rintf(a.w), fcMath_rintf(a.s4), fcMath_rintf(a.s5), fcMath_rintf(a.s6), fcMath_rintf(a.s7));
}

fcFloat8 fcFloat8_round(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_roundf(a.x), fcMath_roundf(a.y), fcMath_roundf(a.z), fcMath_roundf(a.w), fcMath_roundf(a.s4), fcMath_roundf(a.s5), fcMath_roundf(a.s6), fcMath_roundf(a.s7));
}

fcFloat8 fcFloat8_rsqrt(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_rsqrtf(a.x), fcMath_rsqrtf(a.y), fcMath_rsqrtf(a.z), fcMath_rsqrtf(a.w), fcMath_rsqrtf(a.s4), fcMath_rsqrtf(a.s5), fcMath_rsqrtf(a.s6), fcMath_rsqrtf(a.s7));
}

fcFloat8 fcFloat8_signum(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_signumf(a.x), fcMath_signumf(a.y), fcMath_signumf(a.z), fcMath_signumf(a.w), fcMath_signumf(a.s4), fcMath_signumf(a.s5), fcMath_signumf(a.s6), fcMath_signumf(a.s7));
}

fcFloat8 fcFloat8_sin(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_sinf(a.x), fcMath_sinf(a.y), fcMath_sinf(a.z), fcMath_sinf(a.w), fcMath_sinf(a.s4), fcMath_sinf(a.s5), fcMath_sinf(a.s6), fcMath_sinf(a.s7));
}

fcFloat8 fcFloat8_sinh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_sinhf(a.x), fcMath_sinhf(a.y), fcMath_sinhf(a.z), fcMath_sinhf(a.w), fcMath_sinhf(a.s4), fcMath_sinhf(a.s5), fcMath_sinhf(a.s6), fcMath_sinhf(a.s7));
}

fcFloat8 fcFloat8_smoothStep(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_smoothStepf(a.x, b.x, c.x), fcMath_smoothStepf(a.y, b.y, c.y), fcMath_smoothStepf(a.z, b.z, c.z), fcMath_smoothStepf(a.w, b.w, c.w), fcMath_smoothStepf(a.s4, b.s4, c.s4), fcMath_smoothStepf(a.s5, b.s5, c.s5), fcMath_smoothStepf(a.s6, b.s6, c.s6), fcMath_smoothStepf(a.s7, b.s7, c.s7));
}

fcFloat8 fcFloat8_sqrt(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_sqrtf(a.x), fcMath_sqrtf(a.y), fcMath_sqrtf(a.z), fcMath_sqrtf(a.w), fcMath_sqrtf(a.s4), fcMath_sqrtf(a.s5), fcMath_sqrtf(a.s6), fcMath_sqrtf(a.s7));
}

fcFloat8 fcFloat8_step(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_stepf(a.x, b.x), fcMath_stepf(a.y, b.y), fcMath_stepf(a.z, b.z), fcMath_stepf(a.w, b.w), fcMath_stepf(a.s4, b.s4), fcMath_stepf(a.s5, b.s5), fcMath_stepf(a.s6, b.s6), fcMath_stepf(a.s7, b.s7));
}

fcFloat8 fcFloat8_tan(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_tanf(a.x), fcMath_tanf(a.y), fcMath_tanf(a.z), fcMath_tanf(a.w), fcMath_tanf(a.s4), fcMath_tanf(a.s5), fcMath_tanf(a.s6), fcMath_tanf(a.s7));
}

fcFloat8 fcFloat8_tanh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_tanhf(a.x), fcMath_tanhf(a.y), fcMath_tanhf(a.z), fcMath_tanhf(a.w), fcMath_tanhf(a.s4), fcMath_tanhf(a.s5), fcMath_tanhf(a.s6), fcMath_tanhf(a.s7));
}

fcFloat8 fcFloat8_tgamma(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_tgammaf(a.x), fcMath_tgammaf(a.y), fcMath_tgammaf(a.z), fcMath_tgammaf(a.w), fcMath_tgammaf(a.s4), fcMath_tgammaf(a.s5), fcMath_tgammaf(a.s6), fcMath_tgammaf(a.s7));
}

fcFloat8 fcFloat8_toDegrees(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_toDegreesf(a.x), fcMath_toDegreesf(a.y), fcMath_toDegreesf(a.z), fcMath_toDegreesf(a.w), fcMath_toDegreesf(a.s4), fcMath_toDegreesf(a.s5), fcMath_toDegreesf(a.s6), fcMath_toDegreesf(a.s7));
}

fcFloat8 fcFloat8_toRadians(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_toRadiansf(a.x), fcMath_toRadiansf(a.y), fcMath_toRadiansf(a.z), fcMath_toRadiansf(a.w), fcMath_toRadiansf(a.s4), fcMath_toRadiansf(a.s5), fcMath_toRadiansf(a.s6), fcMath_toRadiansf(a.s7));
}

fcFloat8 fcFloat8_trunc(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_truncf(a.x), fcMath_truncf(a.y), fcMath_truncf(a.z), fcMath_truncf(a.w), fcMath_truncf(a.s4), fcMath_truncf(a.s5), fcMath_truncf(a.s6), fcMath_truncf(a.s7));
}

fcFloat8 fcFloat8_scalb(fcFloat8 a, fcInt8 n) {
  return fcFloat8_create11111111(fcMath_scalbf(a.x, n.x), fcMath_scalbf(a.y, n.y), fcMath_scalbf(a.z, n.z), fcMath_scalbf(a.w, n.w), fcMath_scalbf(a.s4, n.s4), fcMath_scalbf(a.s5, n.s5), fcMath_scalbf(a.s6, n.s6), fcMath_scalbf(a.s7, n.s7));
}

fcFloat8 fcFloat8_ldexp(fcFloat8 a, fcInt8 n) {
  return fcFloat8_create11111111(fcMath_ldexpf(a.x, n.x), fcMath_ldexpf(a.y, n.y), fcMath_ldexpf(a.z, n.z), fcMath_ldexpf(a.w, n.w), fcMath_ldexpf(a.s4, n.s4), fcMath_ldexpf(a.s5, n.s5), fcMath_ldexpf(a.s6, n.s6), fcMath_ldexpf(a.s7, n.s7));
}

fcFloat8 fcFloat8_pown(fcFloat8 a, fcInt8 b) {
  return fcFloat8_create11111111(fcMath_pownf(a.x, b.x), fcMath_pownf(a.y, b.y), fcMath_pownf(a.z, b.z), fcMath_pownf(a.w, b.w), fcMath_pownf(a.s4, b.s4), fcMath_pownf(a.s5, b.s5), fcMath_pownf(a.s6, b.s6), fcMath_pownf(a.s7, b.s7));
}

fcFloat8 fcFloat8_rootn(fcFloat8 a, fcInt8 b) {
  return fcFloat8_create11111111(fcMath_rootnf(a.x, b.x), fcMath_rootnf(a.y, b.y), fcMath_rootnf(a.z, b.z), fcMath_rootnf(a.w, b.w), fcMath_rootnf(a.s4, b.s4), fcMath_rootnf(a.s5, b.s5), fcMath_rootnf(a.s6, b.s6), fcMath_rootnf(a.s7, b.s7));
}

fcFloat8 fcFloat8_smoothStepk(fcFloat8 a, fcFloat8 b, cl_float c) {
  return fcFloat8_create11111111(fcMath_smoothStepf(a.x, b.x, c), fcMath_smoothStepf(a.y, b.y, c), fcMath_smoothStepf(a.z, b.z, c), fcMath_smoothStepf(a.w, b.w, c), fcMath_smoothStepf(a.s4, b.s4, c), fcMath_smoothStepf(a.s5, b.s5, c), fcMath_smoothStepf(a.s6, b.s6, c), fcMath_smoothStepf(a.s7, b.s7, c));
}


//
// fcDouble2
//

fcDouble2 fcDouble2_create() {
  fcDouble2 result = {.s = {0.0}};
  return result;
}

fcDouble2 fcDouble2_create1(cl_double v) {
  return fcDouble2_create11(v, v);
}

fcDouble2 fcDouble2_create11(cl_double x, cl_double y) {
  fcDouble2 result;
  result.x = x;
  result.y = y;
  return result;
}

fcDouble2 fcDouble2_create2(fcDouble2 vec1) {
  return fcDouble2_create11(vec1.x, vec1.y);
}

fcByte2 fcDouble2_convertByte2(fcDouble2 a) {
  return fcByte2_create11((cl_byte) a.x, (cl_byte) a.y);
}

fcShort2 fcDouble2_convertShort2(fcDouble2 a) {
  return fcShort2_create11((cl_short) a.x, (cl_short) a.y);
}

fcInt2 fcDouble2_convertInt2(fcDouble2 a) {
  return fcInt2_create11((cl_int) a.x, (cl_int) a.y);
}

fcLong2 fcDouble2_convertLong2(fcDouble2 a) {
  return fcLong2_create11((cl_long) a.x, (cl_long) a.y);
}

fcFloat2 fcDouble2_convertFloat2(fcDouble2 a) {
  return fcFloat2_create11((cl_float) a.x, (cl_float) a.y);
}

fcInt2 fcDouble2_isEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
}

fcInt2 fcDouble2_isNotEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
}

fcInt2 fcDouble2_isGreater(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
}

fcInt2 fcDouble2_isGreaterEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
}

fcInt2 fcDouble2_isLess(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
}

fcInt2 fcDouble2_isLessEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
}

fcDouble2 fcDouble2_select(fcDouble2 a, fcDouble2 b, fcInt2 c) {
  return fcDouble2_create11(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y));
}

fcInt2 fcDouble2_isFinite(fcDouble2 a) {
  return fcInt2_create11(fcMath_isFinite(a.x), fcMath_isFinite(a.y));
}

fcInt2 fcDouble2_isInf(fcDouble2 a) {
  return fcInt2_create11(fcMath_isInf(a.x), fcMath_isInf(a.y));
}

fcInt2 fcDouble2_isNaN(fcDouble2 a) {
  return fcInt2_create11(fcMath_isNaN(a.x), fcMath_isNaN(a.y));
}

fcInt2 fcDouble2_isNormal(fcDouble2 a) {
  return fcInt2_create11(fcMath_isNormal(a.x), fcMath_isNormal(a.y));
}

fcInt2 fcDouble2_isOrdered(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(fcMath_isOrdered(a.x, b.x), fcMath_isOrdered(a.y, b.y));
}

fcInt2 fcDouble2_isUnordered(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(fcMath_isUnordered(a.x, b.x), fcMath_isUnordered(a.y, b.y));
}

cl_int fcDouble2_any(fcDouble2 a) {
  return a.x != 0.0 || a.y != 0.0;
}

cl_int fcDouble2_all(fcDouble2 a) {
  return !(a.x == 0.0 || a.y == 0.0);
}

fcDouble2 fcDouble2_add(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(a.x + b.x, a.y + b.y);
}

fcDouble2 fcDouble2_sub(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(a.x - b.x, a.y - b.y);
}

fcDouble2 fcDouble2_muld(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x * b.x), (cl_double)(a.y * b.y));
}

fcFloat2 fcDouble2_mulf(fcDouble2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x * b.x), (cl_float)(a.y * b.y));
}

fcDouble2 fcDouble2_mulkd(fcDouble2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x * k), (cl_double)(a.y * k));
}

fcFloat2 fcDouble2_mulkf(fcDouble2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x * k), (cl_float)(a.y * k));
}

fcDouble2 fcDouble2_divd(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.x / b.x), (cl_double)(a.y / b.y));
}

fcFloat2 fcDouble2_divf(fcDouble2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.x / b.x), (cl_float)(a.y / b.y));
}

fcDouble2 fcDouble2_divkd(fcDouble2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.x / k), (cl_double)(a.y / k));
}

fcFloat2 fcDouble2_divkf(fcDouble2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.x / k), (cl_float)(a.y / k));
}

cl_double fcDouble2_dot(fcDouble2 a, fcDouble2 b) {
  return a.x * b.x + a.y * b.y;
}

cl_double fcDouble2_distance(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_length(fcDouble2_sub(a, b));
}

cl_double fcDouble2_length(fcDouble2 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y);
}

fcDouble2 fcDouble2_normalize(fcDouble2 a) {
  cl_double len = fcDouble2_length(a);
  return fcDouble2_create11((cl_double)(a.x / len), (cl_double)(a.y / len));
}

fcDouble2 fcDouble2_abs(fcDouble2 a) {
  return fcDouble2_create11(fcMath_abs(a.x), fcMath_abs(a.y));
}

fcDouble2 fcDouble2_clamp(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y));
}

fcDouble2 fcDouble2_max(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y));
}

fcDouble2 fcDouble2_maxMag(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y));
}

fcDouble2 fcDouble2_min(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y));
}

fcDouble2 fcDouble2_minMag(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y));
}

fcDouble2 fcDouble2_mix(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y));
}

fcDouble2 fcDouble2_clampk(fcDouble2 v, cl_double min, cl_double max) {
  return fcDouble2_create11(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max));
}

fcDouble2 fcDouble2_maxk(fcDouble2 x, cl_double y) {
  return fcDouble2_create11(fcMath_max(x.x, y), fcMath_max(x.y, y));
}

fcDouble2 fcDouble2_mink(fcDouble2 x, cl_double y) {
  return fcDouble2_create11(fcMath_min(x.x, y), fcMath_min(x.y, y));
}

fcDouble2 fcDouble2_mixk(fcDouble2 x, fcDouble2 y, cl_double a) {
  return fcDouble2_create11(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a));
}

fcDouble2 fcDouble2_acos(fcDouble2 a) {
  return fcDouble2_create11(fcMath_acos(a.x), fcMath_acos(a.y));
}

fcDouble2 fcDouble2_acosh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_acosh(a.x), fcMath_acosh(a.y));
}

fcDouble2 fcDouble2_asin(fcDouble2 a) {
  return fcDouble2_create11(fcMath_asin(a.x), fcMath_asin(a.y));
}

fcDouble2 fcDouble2_asinh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_asinh(a.x), fcMath_asinh(a.y));
}

fcDouble2 fcDouble2_atan(fcDouble2 a) {
  return fcDouble2_create11(fcMath_atan(a.x), fcMath_atan(a.y));
}

fcDouble2 fcDouble2_atan2(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_atan2(a.x, b.x), fcMath_atan2(a.y, b.y));
}

fcDouble2 fcDouble2_atanh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_atanh(a.x), fcMath_atanh(a.y));
}

fcDouble2 fcDouble2_cbrt(fcDouble2 a) {
  return fcDouble2_create11(fcMath_cbrt(a.x), fcMath_cbrt(a.y));
}

fcDouble2 fcDouble2_ceil(fcDouble2 a) {
  return fcDouble2_create11(fcMath_ceil(a.x), fcMath_ceil(a.y));
}

fcDouble2 fcDouble2_copySign(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_copySign(a.x, b.x), fcMath_copySign(a.y, b.y));
}

fcDouble2 fcDouble2_cos(fcDouble2 a) {
  return fcDouble2_create11(fcMath_cos(a.x), fcMath_cos(a.y));
}

fcDouble2 fcDouble2_cosh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_cosh(a.x), fcMath_cosh(a.y));
}

fcDouble2 fcDouble2_erf(fcDouble2 a) {
  return fcDouble2_create11(fcMath_erf(a.x), fcMath_erf(a.y));
}

fcDouble2 fcDouble2_erfc(fcDouble2 a) {
  return fcDouble2_create11(fcMath_erfc(a.x), fcMath_erfc(a.y));
}

fcDouble2 fcDouble2_exp(fcDouble2 a) {
  return fcDouble2_create11(fcMath_exp(a.x), fcMath_exp(a.y));
}

fcDouble2 fcDouble2_exp10(fcDouble2 a) {
  return fcDouble2_create11(fcMath_exp10(a.x), fcMath_exp10(a.y));
}

fcDouble2 fcDouble2_exp2(fcDouble2 a) {
  return fcDouble2_create11(fcMath_exp2(a.x), fcMath_exp2(a.y));
}

fcDouble2 fcDouble2_expm1(fcDouble2 a) {
  return fcDouble2_create11(fcMath_expm1(a.x), fcMath_expm1(a.y));
}

fcDouble2 fcDouble2_fdim(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_fdim(a.x, b.x), fcMath_fdim(a.y, b.y));
}

fcDouble2 fcDouble2_floor(fcDouble2 a) {
  return fcDouble2_create11(fcMath_floor(a.x), fcMath_floor(a.y));
}

fcDouble2 fcDouble2_fma(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_fma(a.x, b.x, c.x), fcMath_fma(a.y, b.y, c.y));
}

fcDouble2 fcDouble2_fmod(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_fmod(a.x, b.x), fcMath_fmod(a.y, b.y));
}

fcDouble2 fcDouble2_fract(fcDouble2 a) {
  return fcDouble2_create11(fcMath_fract(a.x), fcMath_fract(a.y));
}

fcDouble2 fcDouble2_frexp(fcDouble2 a) {
  return fcDouble2_create11(fcMath_frexp(a.x), fcMath_frexp(a.y));
}

fcDouble2 fcDouble2_getExponent(fcDouble2 a) {
  return fcDouble2_create11(fcMath_getExponent(a.x), fcMath_getExponent(a.y));
}

fcDouble2 fcDouble2_hypot(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_hypot(a.x, b.x), fcMath_hypot(a.y, b.y));
}

fcDouble2 fcDouble2_lgamma(fcDouble2 a) {
  return fcDouble2_create11(fcMath_lgamma(a.x), fcMath_lgamma(a.y));
}

fcDouble2 fcDouble2_log(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log(a.x), fcMath_log(a.y));
}

fcDouble2 fcDouble2_log10(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log10(a.x), fcMath_log10(a.y));
}

fcDouble2 fcDouble2_log1p(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log1p(a.x), fcMath_log1p(a.y));
}

fcDouble2 fcDouble2_log2(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log2(a.x), fcMath_log2(a.y));
}

fcDouble2 fcDouble2_logb(fcDouble2 a) {
  return fcDouble2_create11(fcMath_logb(a.x), fcMath_logb(a.y));
}

fcDouble2 fcDouble2_mad(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_mad(a.x, b.x, c.x), fcMath_mad(a.y, b.y, c.y));
}

fcDouble2 fcDouble2_nextAfter(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_nextAfter(a.x, b.x), fcMath_nextAfter(a.y, b.y));
}

fcDouble2 fcDouble2_pow(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_pow(a.x, b.x), fcMath_pow(a.y, b.y));
}

fcDouble2 fcDouble2_powr(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_powr(a.x, b.x), fcMath_powr(a.y, b.y));
}

fcDouble2 fcDouble2_remainder(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_remainder(a.x, b.x), fcMath_remainder(a.y, b.y));
}

fcDouble2 fcDouble2_rint(fcDouble2 a) {
  return fcDouble2_create11(fcMath_rint(a.x), fcMath_rint(a.y));
}

fcDouble2 fcDouble2_round(fcDouble2 a) {
  return fcDouble2_create11(fcMath_round(a.x), fcMath_round(a.y));
}

fcDouble2 fcDouble2_rsqrt(fcDouble2 a) {
  return fcDouble2_create11(fcMath_rsqrt(a.x), fcMath_rsqrt(a.y));
}

fcDouble2 fcDouble2_signum(fcDouble2 a) {
  return fcDouble2_create11(fcMath_signum(a.x), fcMath_signum(a.y));
}

fcDouble2 fcDouble2_sin(fcDouble2 a) {
  return fcDouble2_create11(fcMath_sin(a.x), fcMath_sin(a.y));
}

fcDouble2 fcDouble2_sinh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_sinh(a.x), fcMath_sinh(a.y));
}

fcDouble2 fcDouble2_smoothStep(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_smoothStep(a.x, b.x, c.x), fcMath_smoothStep(a.y, b.y, c.y));
}

fcDouble2 fcDouble2_sqrt(fcDouble2 a) {
  return fcDouble2_create11(fcMath_sqrt(a.x), fcMath_sqrt(a.y));
}

fcDouble2 fcDouble2_step(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_step(a.x, b.x), fcMath_step(a.y, b.y));
}

fcDouble2 fcDouble2_tan(fcDouble2 a) {
  return fcDouble2_create11(fcMath_tan(a.x), fcMath_tan(a.y));
}

fcDouble2 fcDouble2_tanh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_tanh(a.x), fcMath_tanh(a.y));
}

fcDouble2 fcDouble2_tgamma(fcDouble2 a) {
  return fcDouble2_create11(fcMath_tgamma(a.x), fcMath_tgamma(a.y));
}

fcDouble2 fcDouble2_toDegrees(fcDouble2 a) {
  return fcDouble2_create11(fcMath_toDegrees(a.x), fcMath_toDegrees(a.y));
}

fcDouble2 fcDouble2_toRadians(fcDouble2 a) {
  return fcDouble2_create11(fcMath_toRadians(a.x), fcMath_toRadians(a.y));
}

fcDouble2 fcDouble2_trunc(fcDouble2 a) {
  return fcDouble2_create11(fcMath_trunc(a.x), fcMath_trunc(a.y));
}

fcDouble2 fcDouble2_scalb(fcDouble2 a, fcInt2 n) {
  return fcDouble2_create11(fcMath_scalb(a.x, n.x), fcMath_scalb(a.y, n.y));
}

fcDouble2 fcDouble2_ldexp(fcDouble2 a, fcInt2 n) {
  return fcDouble2_create11(fcMath_ldexp(a.x, n.x), fcMath_ldexp(a.y, n.y));
}

fcDouble2 fcDouble2_pown(fcDouble2 a, fcInt2 b) {
  return fcDouble2_create11(fcMath_pown(a.x, b.x), fcMath_pown(a.y, b.y));
}

fcDouble2 fcDouble2_rootn(fcDouble2 a, fcInt2 b) {
  return fcDouble2_create11(fcMath_rootn(a.x, b.x), fcMath_rootn(a.y, b.y));
}

fcDouble2 fcDouble2_smoothStepk(fcDouble2 a, fcDouble2 b, cl_double c) {
  return fcDouble2_create11(fcMath_smoothStep(a.x, b.x, c), fcMath_smoothStep(a.y, b.y, c));
}


//
// fcDouble3
//

fcDouble3 fcDouble3_create() {
  fcDouble3 result = {.s = {0.0}};
  return result;
}

fcDouble3 fcDouble3_create1(cl_double v) {
  return fcDouble3_create111(v, v, v);
}

fcDouble3 fcDouble3_create111(cl_double x, cl_double y, cl_double z) {
  fcDouble3 result;
  result.x = x;
  result.y = y;
  result.z = z;
  return result;
}

fcDouble3 fcDouble3_create12(cl_double x, fcDouble2 vec1) {
  return fcDouble3_create111(x, vec1.x, vec1.y);
}
fcDouble3 fcDouble3_create21(fcDouble2 vec1, cl_double z) {
  return fcDouble3_create111(vec1.x, vec1.y, z);
}
fcDouble3 fcDouble3_create3(fcDouble3 vec1) {
  return fcDouble3_create111(vec1.x, vec1.y, vec1.z);
}

fcByte3 fcDouble3_convertByte3(fcDouble3 a) {
  return fcByte3_create111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z);
}

fcShort3 fcDouble3_convertShort3(fcDouble3 a) {
  return fcShort3_create111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z);
}

fcInt3 fcDouble3_convertInt3(fcDouble3 a) {
  return fcInt3_create111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z);
}

fcLong3 fcDouble3_convertLong3(fcDouble3 a) {
  return fcLong3_create111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z);
}

fcFloat3 fcDouble3_convertFloat3(fcDouble3 a) {
  return fcFloat3_create111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z);
}

fcDouble2 fcDouble3_asDouble2(fcDouble3 a) {
  return fcDouble2_create11(a.x, a.y);
}

fcInt3 fcDouble3_isEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
}

fcInt3 fcDouble3_isNotEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
}

fcInt3 fcDouble3_isGreater(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
}

fcInt3 fcDouble3_isGreaterEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
}

fcInt3 fcDouble3_isLess(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
}

fcInt3 fcDouble3_isLessEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
}

fcDouble3 fcDouble3_select(fcDouble3 a, fcDouble3 b, fcInt3 c) {
  return fcDouble3_create111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z));
}

fcInt3 fcDouble3_isFinite(fcDouble3 a) {
  return fcInt3_create111(fcMath_isFinite(a.x), fcMath_isFinite(a.y), fcMath_isFinite(a.z));
}

fcInt3 fcDouble3_isInf(fcDouble3 a) {
  return fcInt3_create111(fcMath_isInf(a.x), fcMath_isInf(a.y), fcMath_isInf(a.z));
}

fcInt3 fcDouble3_isNaN(fcDouble3 a) {
  return fcInt3_create111(fcMath_isNaN(a.x), fcMath_isNaN(a.y), fcMath_isNaN(a.z));
}

fcInt3 fcDouble3_isNormal(fcDouble3 a) {
  return fcInt3_create111(fcMath_isNormal(a.x), fcMath_isNormal(a.y), fcMath_isNormal(a.z));
}

fcInt3 fcDouble3_isOrdered(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(fcMath_isOrdered(a.x, b.x), fcMath_isOrdered(a.y, b.y), fcMath_isOrdered(a.z, b.z));
}

fcInt3 fcDouble3_isUnordered(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(fcMath_isUnordered(a.x, b.x), fcMath_isUnordered(a.y, b.y), fcMath_isUnordered(a.z, b.z));
}

cl_int fcDouble3_any(fcDouble3 a) {
  return a.x != 0.0 || a.y != 0.0 || a.z != 0.0;
}

cl_int fcDouble3_all(fcDouble3 a) {
  return !(a.x == 0.0 || a.y == 0.0 || a.z == 0.0);
}

fcDouble3 fcDouble3_add(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(a.x + b.x, a.y + b.y, a.z + b.z);
}

fcDouble3 fcDouble3_sub(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(a.x - b.x, a.y - b.y, a.z - b.z);
}

fcDouble3 fcDouble3_muld(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z));
}

fcFloat3 fcDouble3_mulf(fcDouble3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z));
}

fcDouble3 fcDouble3_mulkd(fcDouble3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k));
}

fcFloat3 fcDouble3_mulkf(fcDouble3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k));
}

fcDouble3 fcDouble3_divd(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z));
}

fcFloat3 fcDouble3_divf(fcDouble3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z));
}

fcDouble3 fcDouble3_divkd(fcDouble3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k));
}

fcFloat3 fcDouble3_divkf(fcDouble3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k));
}

fcDouble3 fcDouble3_cross(fcDouble3 a, fcDouble3 b) {
  cl_double resX = a.y * b.z - a.z * b.y;
  cl_double resY = a.z * b.x - a.x * b.z;
  cl_double resZ = a.x * b.y - a.y * b.x;
  return fcDouble3_create111(resX, resY, resZ);
}

cl_double fcDouble3_dot(fcDouble3 a, fcDouble3 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

cl_double fcDouble3_distance(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_length(fcDouble3_sub(a, b));
}

cl_double fcDouble3_length(fcDouble3 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

fcDouble3 fcDouble3_normalize(fcDouble3 a) {
  cl_double len = fcDouble3_length(a);
  return fcDouble3_create111((cl_double)(a.x / len), (cl_double)(a.y / len), (cl_double)(a.z / len));
}

fcDouble3 fcDouble3_abs(fcDouble3 a) {
  return fcDouble3_create111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z));
}

fcDouble3 fcDouble3_clamp(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z));
}

fcDouble3 fcDouble3_max(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z));
}

fcDouble3 fcDouble3_maxMag(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z));
}

fcDouble3 fcDouble3_min(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z));
}

fcDouble3 fcDouble3_minMag(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z));
}

fcDouble3 fcDouble3_mix(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z));
}

fcDouble3 fcDouble3_clampk(fcDouble3 v, cl_double min, cl_double max) {
  return fcDouble3_create111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max));
}

fcDouble3 fcDouble3_maxk(fcDouble3 x, cl_double y) {
  return fcDouble3_create111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y));
}

fcDouble3 fcDouble3_mink(fcDouble3 x, cl_double y) {
  return fcDouble3_create111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y));
}

fcDouble3 fcDouble3_mixk(fcDouble3 x, fcDouble3 y, cl_double a) {
  return fcDouble3_create111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a));
}

fcDouble3 fcDouble3_acos(fcDouble3 a) {
  return fcDouble3_create111(fcMath_acos(a.x), fcMath_acos(a.y), fcMath_acos(a.z));
}

fcDouble3 fcDouble3_acosh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_acosh(a.x), fcMath_acosh(a.y), fcMath_acosh(a.z));
}

fcDouble3 fcDouble3_asin(fcDouble3 a) {
  return fcDouble3_create111(fcMath_asin(a.x), fcMath_asin(a.y), fcMath_asin(a.z));
}

fcDouble3 fcDouble3_asinh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_asinh(a.x), fcMath_asinh(a.y), fcMath_asinh(a.z));
}

fcDouble3 fcDouble3_atan(fcDouble3 a) {
  return fcDouble3_create111(fcMath_atan(a.x), fcMath_atan(a.y), fcMath_atan(a.z));
}

fcDouble3 fcDouble3_atan2(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_atan2(a.x, b.x), fcMath_atan2(a.y, b.y), fcMath_atan2(a.z, b.z));
}

fcDouble3 fcDouble3_atanh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_atanh(a.x), fcMath_atanh(a.y), fcMath_atanh(a.z));
}

fcDouble3 fcDouble3_cbrt(fcDouble3 a) {
  return fcDouble3_create111(fcMath_cbrt(a.x), fcMath_cbrt(a.y), fcMath_cbrt(a.z));
}

fcDouble3 fcDouble3_ceil(fcDouble3 a) {
  return fcDouble3_create111(fcMath_ceil(a.x), fcMath_ceil(a.y), fcMath_ceil(a.z));
}

fcDouble3 fcDouble3_copySign(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_copySign(a.x, b.x), fcMath_copySign(a.y, b.y), fcMath_copySign(a.z, b.z));
}

fcDouble3 fcDouble3_cos(fcDouble3 a) {
  return fcDouble3_create111(fcMath_cos(a.x), fcMath_cos(a.y), fcMath_cos(a.z));
}

fcDouble3 fcDouble3_cosh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_cosh(a.x), fcMath_cosh(a.y), fcMath_cosh(a.z));
}

fcDouble3 fcDouble3_erf(fcDouble3 a) {
  return fcDouble3_create111(fcMath_erf(a.x), fcMath_erf(a.y), fcMath_erf(a.z));
}

fcDouble3 fcDouble3_erfc(fcDouble3 a) {
  return fcDouble3_create111(fcMath_erfc(a.x), fcMath_erfc(a.y), fcMath_erfc(a.z));
}

fcDouble3 fcDouble3_exp(fcDouble3 a) {
  return fcDouble3_create111(fcMath_exp(a.x), fcMath_exp(a.y), fcMath_exp(a.z));
}

fcDouble3 fcDouble3_exp10(fcDouble3 a) {
  return fcDouble3_create111(fcMath_exp10(a.x), fcMath_exp10(a.y), fcMath_exp10(a.z));
}

fcDouble3 fcDouble3_exp2(fcDouble3 a) {
  return fcDouble3_create111(fcMath_exp2(a.x), fcMath_exp2(a.y), fcMath_exp2(a.z));
}

fcDouble3 fcDouble3_expm1(fcDouble3 a) {
  return fcDouble3_create111(fcMath_expm1(a.x), fcMath_expm1(a.y), fcMath_expm1(a.z));
}

fcDouble3 fcDouble3_fdim(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_fdim(a.x, b.x), fcMath_fdim(a.y, b.y), fcMath_fdim(a.z, b.z));
}

fcDouble3 fcDouble3_floor(fcDouble3 a) {
  return fcDouble3_create111(fcMath_floor(a.x), fcMath_floor(a.y), fcMath_floor(a.z));
}

fcDouble3 fcDouble3_fma(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_fma(a.x, b.x, c.x), fcMath_fma(a.y, b.y, c.y), fcMath_fma(a.z, b.z, c.z));
}

fcDouble3 fcDouble3_fmod(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_fmod(a.x, b.x), fcMath_fmod(a.y, b.y), fcMath_fmod(a.z, b.z));
}

fcDouble3 fcDouble3_fract(fcDouble3 a) {
  return fcDouble3_create111(fcMath_fract(a.x), fcMath_fract(a.y), fcMath_fract(a.z));
}

fcDouble3 fcDouble3_frexp(fcDouble3 a) {
  return fcDouble3_create111(fcMath_frexp(a.x), fcMath_frexp(a.y), fcMath_frexp(a.z));
}

fcDouble3 fcDouble3_getExponent(fcDouble3 a) {
  return fcDouble3_create111(fcMath_getExponent(a.x), fcMath_getExponent(a.y), fcMath_getExponent(a.z));
}

fcDouble3 fcDouble3_hypot(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_hypot(a.x, b.x), fcMath_hypot(a.y, b.y), fcMath_hypot(a.z, b.z));
}

fcDouble3 fcDouble3_lgamma(fcDouble3 a) {
  return fcDouble3_create111(fcMath_lgamma(a.x), fcMath_lgamma(a.y), fcMath_lgamma(a.z));
}

fcDouble3 fcDouble3_log(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log(a.x), fcMath_log(a.y), fcMath_log(a.z));
}

fcDouble3 fcDouble3_log10(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log10(a.x), fcMath_log10(a.y), fcMath_log10(a.z));
}

fcDouble3 fcDouble3_log1p(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log1p(a.x), fcMath_log1p(a.y), fcMath_log1p(a.z));
}

fcDouble3 fcDouble3_log2(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log2(a.x), fcMath_log2(a.y), fcMath_log2(a.z));
}

fcDouble3 fcDouble3_logb(fcDouble3 a) {
  return fcDouble3_create111(fcMath_logb(a.x), fcMath_logb(a.y), fcMath_logb(a.z));
}

fcDouble3 fcDouble3_mad(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_mad(a.x, b.x, c.x), fcMath_mad(a.y, b.y, c.y), fcMath_mad(a.z, b.z, c.z));
}

fcDouble3 fcDouble3_nextAfter(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_nextAfter(a.x, b.x), fcMath_nextAfter(a.y, b.y), fcMath_nextAfter(a.z, b.z));
}

fcDouble3 fcDouble3_pow(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_pow(a.x, b.x), fcMath_pow(a.y, b.y), fcMath_pow(a.z, b.z));
}

fcDouble3 fcDouble3_powr(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_powr(a.x, b.x), fcMath_powr(a.y, b.y), fcMath_powr(a.z, b.z));
}

fcDouble3 fcDouble3_remainder(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_remainder(a.x, b.x), fcMath_remainder(a.y, b.y), fcMath_remainder(a.z, b.z));
}

fcDouble3 fcDouble3_rint(fcDouble3 a) {
  return fcDouble3_create111(fcMath_rint(a.x), fcMath_rint(a.y), fcMath_rint(a.z));
}

fcDouble3 fcDouble3_round(fcDouble3 a) {
  return fcDouble3_create111(fcMath_round(a.x), fcMath_round(a.y), fcMath_round(a.z));
}

fcDouble3 fcDouble3_rsqrt(fcDouble3 a) {
  return fcDouble3_create111(fcMath_rsqrt(a.x), fcMath_rsqrt(a.y), fcMath_rsqrt(a.z));
}

fcDouble3 fcDouble3_signum(fcDouble3 a) {
  return fcDouble3_create111(fcMath_signum(a.x), fcMath_signum(a.y), fcMath_signum(a.z));
}

fcDouble3 fcDouble3_sin(fcDouble3 a) {
  return fcDouble3_create111(fcMath_sin(a.x), fcMath_sin(a.y), fcMath_sin(a.z));
}

fcDouble3 fcDouble3_sinh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_sinh(a.x), fcMath_sinh(a.y), fcMath_sinh(a.z));
}

fcDouble3 fcDouble3_smoothStep(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_smoothStep(a.x, b.x, c.x), fcMath_smoothStep(a.y, b.y, c.y), fcMath_smoothStep(a.z, b.z, c.z));
}

fcDouble3 fcDouble3_sqrt(fcDouble3 a) {
  return fcDouble3_create111(fcMath_sqrt(a.x), fcMath_sqrt(a.y), fcMath_sqrt(a.z));
}

fcDouble3 fcDouble3_step(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_step(a.x, b.x), fcMath_step(a.y, b.y), fcMath_step(a.z, b.z));
}

fcDouble3 fcDouble3_tan(fcDouble3 a) {
  return fcDouble3_create111(fcMath_tan(a.x), fcMath_tan(a.y), fcMath_tan(a.z));
}

fcDouble3 fcDouble3_tanh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_tanh(a.x), fcMath_tanh(a.y), fcMath_tanh(a.z));
}

fcDouble3 fcDouble3_tgamma(fcDouble3 a) {
  return fcDouble3_create111(fcMath_tgamma(a.x), fcMath_tgamma(a.y), fcMath_tgamma(a.z));
}

fcDouble3 fcDouble3_toDegrees(fcDouble3 a) {
  return fcDouble3_create111(fcMath_toDegrees(a.x), fcMath_toDegrees(a.y), fcMath_toDegrees(a.z));
}

fcDouble3 fcDouble3_toRadians(fcDouble3 a) {
  return fcDouble3_create111(fcMath_toRadians(a.x), fcMath_toRadians(a.y), fcMath_toRadians(a.z));
}

fcDouble3 fcDouble3_trunc(fcDouble3 a) {
  return fcDouble3_create111(fcMath_trunc(a.x), fcMath_trunc(a.y), fcMath_trunc(a.z));
}

fcDouble3 fcDouble3_scalb(fcDouble3 a, fcInt3 n) {
  return fcDouble3_create111(fcMath_scalb(a.x, n.x), fcMath_scalb(a.y, n.y), fcMath_scalb(a.z, n.z));
}

fcDouble3 fcDouble3_ldexp(fcDouble3 a, fcInt3 n) {
  return fcDouble3_create111(fcMath_ldexp(a.x, n.x), fcMath_ldexp(a.y, n.y), fcMath_ldexp(a.z, n.z));
}

fcDouble3 fcDouble3_pown(fcDouble3 a, fcInt3 b) {
  return fcDouble3_create111(fcMath_pown(a.x, b.x), fcMath_pown(a.y, b.y), fcMath_pown(a.z, b.z));
}

fcDouble3 fcDouble3_rootn(fcDouble3 a, fcInt3 b) {
  return fcDouble3_create111(fcMath_rootn(a.x, b.x), fcMath_rootn(a.y, b.y), fcMath_rootn(a.z, b.z));
}

fcDouble3 fcDouble3_smoothStepk(fcDouble3 a, fcDouble3 b, cl_double c) {
  return fcDouble3_create111(fcMath_smoothStep(a.x, b.x, c), fcMath_smoothStep(a.y, b.y, c), fcMath_smoothStep(a.z, b.z, c));
}


//
// fcDouble4
//

fcDouble4 fcDouble4_create() {
  fcDouble4 result = {.s = {0.0}};
  return result;
}

fcDouble4 fcDouble4_create1(cl_double v) {
  return fcDouble4_create1111(v, v, v, v);
}

fcDouble4 fcDouble4_create1111(cl_double x, cl_double y, cl_double z, cl_double w) {
  fcDouble4 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  return result;
}

fcDouble4 fcDouble4_create112(cl_double x, cl_double y, fcDouble2 vec1) {
  return fcDouble4_create1111(x, y, vec1.x, vec1.y);
}
fcDouble4 fcDouble4_create121(cl_double x, fcDouble2 vec1, cl_double w) {
  return fcDouble4_create1111(x, vec1.x, vec1.y, w);
}
fcDouble4 fcDouble4_create13(cl_double x, fcDouble3 vec1) {
  return fcDouble4_create1111(x, vec1.x, vec1.y, vec1.z);
}
fcDouble4 fcDouble4_create211(fcDouble2 vec1, cl_double z, cl_double w) {
  return fcDouble4_create1111(vec1.x, vec1.y, z, w);
}
fcDouble4 fcDouble4_create22(fcDouble2 vec1, fcDouble2 vec2) {
  return fcDouble4_create1111(vec1.x, vec1.y, vec2.x, vec2.y);
}
fcDouble4 fcDouble4_create31(fcDouble3 vec1, cl_double w) {
  return fcDouble4_create1111(vec1.x, vec1.y, vec1.z, w);
}
fcDouble4 fcDouble4_create4(fcDouble4 vec1) {
  return fcDouble4_create1111(vec1.x, vec1.y, vec1.z, vec1.w);
}

fcDouble2 fcDouble4_odd(fcDouble4 a) {
  return fcDouble2_create11(a.y, a.w);
}

fcDouble2 fcDouble4_even(fcDouble4 a) {
  return fcDouble2_create11(a.x, a.z);
}

fcByte4 fcDouble4_convertByte4(fcDouble4 a) {
  return fcByte4_create1111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w);
}

fcShort4 fcDouble4_convertShort4(fcDouble4 a) {
  return fcShort4_create1111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w);
}

fcInt4 fcDouble4_convertInt4(fcDouble4 a) {
  return fcInt4_create1111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w);
}

fcLong4 fcDouble4_convertLong4(fcDouble4 a) {
  return fcLong4_create1111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w);
}

fcFloat4 fcDouble4_convertFloat4(fcDouble4 a) {
  return fcFloat4_create1111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w);
}

fcDouble2 fcDouble4_asDouble2(fcDouble4 a) {
  return fcDouble2_create11(a.x, a.y);
}

fcDouble3 fcDouble4_asDouble3(fcDouble4 a) {
  return fcDouble3_create111(a.x, a.y, a.z);
}

fcInt4 fcDouble4_isEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
}

fcInt4 fcDouble4_isNotEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
}

fcInt4 fcDouble4_isGreater(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
}

fcInt4 fcDouble4_isGreaterEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
}

fcInt4 fcDouble4_isLess(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
}

fcInt4 fcDouble4_isLessEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
}

fcDouble4 fcDouble4_select(fcDouble4 a, fcDouble4 b, fcInt4 c) {
  return fcDouble4_create1111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w));
}

fcInt4 fcDouble4_isFinite(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isFinite(a.x), fcMath_isFinite(a.y), fcMath_isFinite(a.z), fcMath_isFinite(a.w));
}

fcInt4 fcDouble4_isInf(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isInf(a.x), fcMath_isInf(a.y), fcMath_isInf(a.z), fcMath_isInf(a.w));
}

fcInt4 fcDouble4_isNaN(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isNaN(a.x), fcMath_isNaN(a.y), fcMath_isNaN(a.z), fcMath_isNaN(a.w));
}

fcInt4 fcDouble4_isNormal(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isNormal(a.x), fcMath_isNormal(a.y), fcMath_isNormal(a.z), fcMath_isNormal(a.w));
}

fcInt4 fcDouble4_isOrdered(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(fcMath_isOrdered(a.x, b.x), fcMath_isOrdered(a.y, b.y), fcMath_isOrdered(a.z, b.z), fcMath_isOrdered(a.w, b.w));
}

fcInt4 fcDouble4_isUnordered(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(fcMath_isUnordered(a.x, b.x), fcMath_isUnordered(a.y, b.y), fcMath_isUnordered(a.z, b.z), fcMath_isUnordered(a.w, b.w));
}

cl_int fcDouble4_any(fcDouble4 a) {
  return a.x != 0.0 || a.y != 0.0 || a.z != 0.0 || a.w != 0.0;
}

cl_int fcDouble4_all(fcDouble4 a) {
  return !(a.x == 0.0 || a.y == 0.0 || a.z == 0.0 || a.w == 0.0);
}

fcDouble4 fcDouble4_add(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

fcDouble4 fcDouble4_sub(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

fcDouble4 fcDouble4_muld(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w));
}

fcFloat4 fcDouble4_mulf(fcDouble4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w));
}

fcDouble4 fcDouble4_mulkd(fcDouble4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k));
}

fcFloat4 fcDouble4_mulkf(fcDouble4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k));
}

fcDouble4 fcDouble4_divd(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w));
}

fcFloat4 fcDouble4_divf(fcDouble4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w));
}

fcDouble4 fcDouble4_divkd(fcDouble4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k));
}

fcFloat4 fcDouble4_divkf(fcDouble4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k));
}

fcDouble4 fcDouble4_cross(fcDouble4 a, fcDouble4 b) {
  cl_double resX = a.y * b.z - a.z * b.y;
  cl_double resY = a.z * b.x - a.x * b.z;
  cl_double resZ = a.x * b.y - a.y * b.x;
  return fcDouble4_create1111(resX, resY, resZ, 0.0);
}

cl_double fcDouble4_dot(fcDouble4 a, fcDouble4 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

cl_double fcDouble4_distance(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_length(fcDouble4_sub(a, b));
}

cl_double fcDouble4_length(fcDouble4 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
}

fcDouble4 fcDouble4_normalize(fcDouble4 a) {
  cl_double len = fcDouble4_length(a);
  return fcDouble4_create1111((cl_double)(a.x / len), (cl_double)(a.y / len), (cl_double)(a.z / len), (cl_double)(a.w / len));
}

fcDouble4 fcDouble4_abs(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w));
}

fcDouble4 fcDouble4_clamp(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w));
}

fcDouble4 fcDouble4_max(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w));
}

fcDouble4 fcDouble4_maxMag(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w));
}

fcDouble4 fcDouble4_min(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w));
}

fcDouble4 fcDouble4_minMag(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w));
}

fcDouble4 fcDouble4_mix(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w));
}

fcDouble4 fcDouble4_clampk(fcDouble4 v, cl_double min, cl_double max) {
  return fcDouble4_create1111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max));
}

fcDouble4 fcDouble4_maxk(fcDouble4 x, cl_double y) {
  return fcDouble4_create1111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y));
}

fcDouble4 fcDouble4_mink(fcDouble4 x, cl_double y) {
  return fcDouble4_create1111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y));
}

fcDouble4 fcDouble4_mixk(fcDouble4 x, fcDouble4 y, cl_double a) {
  return fcDouble4_create1111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a));
}

fcDouble4 fcDouble4_acos(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_acos(a.x), fcMath_acos(a.y), fcMath_acos(a.z), fcMath_acos(a.w));
}

fcDouble4 fcDouble4_acosh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_acosh(a.x), fcMath_acosh(a.y), fcMath_acosh(a.z), fcMath_acosh(a.w));
}

fcDouble4 fcDouble4_asin(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_asin(a.x), fcMath_asin(a.y), fcMath_asin(a.z), fcMath_asin(a.w));
}

fcDouble4 fcDouble4_asinh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_asinh(a.x), fcMath_asinh(a.y), fcMath_asinh(a.z), fcMath_asinh(a.w));
}

fcDouble4 fcDouble4_atan(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_atan(a.x), fcMath_atan(a.y), fcMath_atan(a.z), fcMath_atan(a.w));
}

fcDouble4 fcDouble4_atan2(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_atan2(a.x, b.x), fcMath_atan2(a.y, b.y), fcMath_atan2(a.z, b.z), fcMath_atan2(a.w, b.w));
}

fcDouble4 fcDouble4_atanh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_atanh(a.x), fcMath_atanh(a.y), fcMath_atanh(a.z), fcMath_atanh(a.w));
}

fcDouble4 fcDouble4_cbrt(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_cbrt(a.x), fcMath_cbrt(a.y), fcMath_cbrt(a.z), fcMath_cbrt(a.w));
}

fcDouble4 fcDouble4_ceil(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_ceil(a.x), fcMath_ceil(a.y), fcMath_ceil(a.z), fcMath_ceil(a.w));
}

fcDouble4 fcDouble4_copySign(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_copySign(a.x, b.x), fcMath_copySign(a.y, b.y), fcMath_copySign(a.z, b.z), fcMath_copySign(a.w, b.w));
}

fcDouble4 fcDouble4_cos(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_cos(a.x), fcMath_cos(a.y), fcMath_cos(a.z), fcMath_cos(a.w));
}

fcDouble4 fcDouble4_cosh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_cosh(a.x), fcMath_cosh(a.y), fcMath_cosh(a.z), fcMath_cosh(a.w));
}

fcDouble4 fcDouble4_erf(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_erf(a.x), fcMath_erf(a.y), fcMath_erf(a.z), fcMath_erf(a.w));
}

fcDouble4 fcDouble4_erfc(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_erfc(a.x), fcMath_erfc(a.y), fcMath_erfc(a.z), fcMath_erfc(a.w));
}

fcDouble4 fcDouble4_exp(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_exp(a.x), fcMath_exp(a.y), fcMath_exp(a.z), fcMath_exp(a.w));
}

fcDouble4 fcDouble4_exp10(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_exp10(a.x), fcMath_exp10(a.y), fcMath_exp10(a.z), fcMath_exp10(a.w));
}

fcDouble4 fcDouble4_exp2(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_exp2(a.x), fcMath_exp2(a.y), fcMath_exp2(a.z), fcMath_exp2(a.w));
}

fcDouble4 fcDouble4_expm1(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_expm1(a.x), fcMath_expm1(a.y), fcMath_expm1(a.z), fcMath_expm1(a.w));
}

fcDouble4 fcDouble4_fdim(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_fdim(a.x, b.x), fcMath_fdim(a.y, b.y), fcMath_fdim(a.z, b.z), fcMath_fdim(a.w, b.w));
}

fcDouble4 fcDouble4_floor(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_floor(a.x), fcMath_floor(a.y), fcMath_floor(a.z), fcMath_floor(a.w));
}

fcDouble4 fcDouble4_fma(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_fma(a.x, b.x, c.x), fcMath_fma(a.y, b.y, c.y), fcMath_fma(a.z, b.z, c.z), fcMath_fma(a.w, b.w, c.w));
}

fcDouble4 fcDouble4_fmod(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_fmod(a.x, b.x), fcMath_fmod(a.y, b.y), fcMath_fmod(a.z, b.z), fcMath_fmod(a.w, b.w));
}

fcDouble4 fcDouble4_fract(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_fract(a.x), fcMath_fract(a.y), fcMath_fract(a.z), fcMath_fract(a.w));
}

fcDouble4 fcDouble4_frexp(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_frexp(a.x), fcMath_frexp(a.y), fcMath_frexp(a.z), fcMath_frexp(a.w));
}

fcDouble4 fcDouble4_getExponent(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_getExponent(a.x), fcMath_getExponent(a.y), fcMath_getExponent(a.z), fcMath_getExponent(a.w));
}

fcDouble4 fcDouble4_hypot(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_hypot(a.x, b.x), fcMath_hypot(a.y, b.y), fcMath_hypot(a.z, b.z), fcMath_hypot(a.w, b.w));
}

fcDouble4 fcDouble4_lgamma(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_lgamma(a.x), fcMath_lgamma(a.y), fcMath_lgamma(a.z), fcMath_lgamma(a.w));
}

fcDouble4 fcDouble4_log(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log(a.x), fcMath_log(a.y), fcMath_log(a.z), fcMath_log(a.w));
}

fcDouble4 fcDouble4_log10(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log10(a.x), fcMath_log10(a.y), fcMath_log10(a.z), fcMath_log10(a.w));
}

fcDouble4 fcDouble4_log1p(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log1p(a.x), fcMath_log1p(a.y), fcMath_log1p(a.z), fcMath_log1p(a.w));
}

fcDouble4 fcDouble4_log2(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log2(a.x), fcMath_log2(a.y), fcMath_log2(a.z), fcMath_log2(a.w));
}

fcDouble4 fcDouble4_logb(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_logb(a.x), fcMath_logb(a.y), fcMath_logb(a.z), fcMath_logb(a.w));
}

fcDouble4 fcDouble4_mad(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_mad(a.x, b.x, c.x), fcMath_mad(a.y, b.y, c.y), fcMath_mad(a.z, b.z, c.z), fcMath_mad(a.w, b.w, c.w));
}

fcDouble4 fcDouble4_nextAfter(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_nextAfter(a.x, b.x), fcMath_nextAfter(a.y, b.y), fcMath_nextAfter(a.z, b.z), fcMath_nextAfter(a.w, b.w));
}

fcDouble4 fcDouble4_pow(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_pow(a.x, b.x), fcMath_pow(a.y, b.y), fcMath_pow(a.z, b.z), fcMath_pow(a.w, b.w));
}

fcDouble4 fcDouble4_powr(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_powr(a.x, b.x), fcMath_powr(a.y, b.y), fcMath_powr(a.z, b.z), fcMath_powr(a.w, b.w));
}

fcDouble4 fcDouble4_remainder(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_remainder(a.x, b.x), fcMath_remainder(a.y, b.y), fcMath_remainder(a.z, b.z), fcMath_remainder(a.w, b.w));
}

fcDouble4 fcDouble4_rint(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_rint(a.x), fcMath_rint(a.y), fcMath_rint(a.z), fcMath_rint(a.w));
}

fcDouble4 fcDouble4_round(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_round(a.x), fcMath_round(a.y), fcMath_round(a.z), fcMath_round(a.w));
}

fcDouble4 fcDouble4_rsqrt(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_rsqrt(a.x), fcMath_rsqrt(a.y), fcMath_rsqrt(a.z), fcMath_rsqrt(a.w));
}

fcDouble4 fcDouble4_signum(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_signum(a.x), fcMath_signum(a.y), fcMath_signum(a.z), fcMath_signum(a.w));
}

fcDouble4 fcDouble4_sin(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_sin(a.x), fcMath_sin(a.y), fcMath_sin(a.z), fcMath_sin(a.w));
}

fcDouble4 fcDouble4_sinh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_sinh(a.x), fcMath_sinh(a.y), fcMath_sinh(a.z), fcMath_sinh(a.w));
}

fcDouble4 fcDouble4_smoothStep(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_smoothStep(a.x, b.x, c.x), fcMath_smoothStep(a.y, b.y, c.y), fcMath_smoothStep(a.z, b.z, c.z), fcMath_smoothStep(a.w, b.w, c.w));
}

fcDouble4 fcDouble4_sqrt(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_sqrt(a.x), fcMath_sqrt(a.y), fcMath_sqrt(a.z), fcMath_sqrt(a.w));
}

fcDouble4 fcDouble4_step(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_step(a.x, b.x), fcMath_step(a.y, b.y), fcMath_step(a.z, b.z), fcMath_step(a.w, b.w));
}

fcDouble4 fcDouble4_tan(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_tan(a.x), fcMath_tan(a.y), fcMath_tan(a.z), fcMath_tan(a.w));
}

fcDouble4 fcDouble4_tanh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_tanh(a.x), fcMath_tanh(a.y), fcMath_tanh(a.z), fcMath_tanh(a.w));
}

fcDouble4 fcDouble4_tgamma(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_tgamma(a.x), fcMath_tgamma(a.y), fcMath_tgamma(a.z), fcMath_tgamma(a.w));
}

fcDouble4 fcDouble4_toDegrees(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_toDegrees(a.x), fcMath_toDegrees(a.y), fcMath_toDegrees(a.z), fcMath_toDegrees(a.w));
}

fcDouble4 fcDouble4_toRadians(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_toRadians(a.x), fcMath_toRadians(a.y), fcMath_toRadians(a.z), fcMath_toRadians(a.w));
}

fcDouble4 fcDouble4_trunc(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_trunc(a.x), fcMath_trunc(a.y), fcMath_trunc(a.z), fcMath_trunc(a.w));
}

fcDouble4 fcDouble4_scalb(fcDouble4 a, fcInt4 n) {
  return fcDouble4_create1111(fcMath_scalb(a.x, n.x), fcMath_scalb(a.y, n.y), fcMath_scalb(a.z, n.z), fcMath_scalb(a.w, n.w));
}

fcDouble4 fcDouble4_ldexp(fcDouble4 a, fcInt4 n) {
  return fcDouble4_create1111(fcMath_ldexp(a.x, n.x), fcMath_ldexp(a.y, n.y), fcMath_ldexp(a.z, n.z), fcMath_ldexp(a.w, n.w));
}

fcDouble4 fcDouble4_pown(fcDouble4 a, fcInt4 b) {
  return fcDouble4_create1111(fcMath_pown(a.x, b.x), fcMath_pown(a.y, b.y), fcMath_pown(a.z, b.z), fcMath_pown(a.w, b.w));
}

fcDouble4 fcDouble4_rootn(fcDouble4 a, fcInt4 b) {
  return fcDouble4_create1111(fcMath_rootn(a.x, b.x), fcMath_rootn(a.y, b.y), fcMath_rootn(a.z, b.z), fcMath_rootn(a.w, b.w));
}

fcDouble4 fcDouble4_smoothStepk(fcDouble4 a, fcDouble4 b, cl_double c) {
  return fcDouble4_create1111(fcMath_smoothStep(a.x, b.x, c), fcMath_smoothStep(a.y, b.y, c), fcMath_smoothStep(a.z, b.z, c), fcMath_smoothStep(a.w, b.w, c));
}


//
// fcDouble8
//

fcDouble8 fcDouble8_create() {
  fcDouble8 result = {.s = {0.0}};
  return result;
}

fcDouble8 fcDouble8_create1(cl_double v) {
  return fcDouble8_create11111111(v, v, v, v, v, v, v, v);
}

fcDouble8 fcDouble8_create11111111(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8 result;
  result.x = x;
  result.y = y;
  result.z = z;
  result.w = w;
  result.s4 = s4;
  result.s5 = s5;
  result.s6 = s6;
  result.s7 = s7;
  return result;
}

fcDouble8 fcDouble8_create1111112(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec1) {
  return fcDouble8_create11111111(x, y, z, w, s4, s5, vec1.x, vec1.y);
}
fcDouble8 fcDouble8_create1111121(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble2 vec1, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, s7);
}
fcDouble8 fcDouble8_create111113(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble3 vec1) {
  return fcDouble8_create11111111(x, y, z, w, s4, vec1.x, vec1.y, vec1.z);
}
fcDouble8 fcDouble8_create1111211(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, w, vec1.x, vec1.y, s6, s7);
}
fcDouble8 fcDouble8_create111122(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create111131(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble3 vec1, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, s7);
}
fcDouble8 fcDouble8_create11114(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble4 vec1) {
  return fcDouble8_create11111111(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
}
fcDouble8 fcDouble8_create1112111(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, s5, s6, s7);
}
fcDouble8 fcDouble8_create111212(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create111221(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create11123(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create111311(cl_double x, cl_double y, cl_double z, fcDouble3 vec1, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, s6, s7);
}
fcDouble8 fcDouble8_create11132(cl_double x, cl_double y, cl_double z, fcDouble3 vec1, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create11141(cl_double x, cl_double y, cl_double z, fcDouble4 vec1, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s7);
}
fcDouble8 fcDouble8_create1121111(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create112112(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, s4, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create112121(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create11213(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, s4, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create112211(cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s6, s7);
}
fcDouble8 fcDouble8_create11222(cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create11231(cl_double x, cl_double y, fcDouble2 vec1, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s7);
}
fcDouble8 fcDouble8_create1124(cl_double x, cl_double y, fcDouble2 vec1, fcDouble4 vec2) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcDouble8 fcDouble8_create113111(cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, s6, s7);
}
fcDouble8 fcDouble8_create11312(cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec1.z, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create11321(cl_double x, cl_double y, fcDouble3 vec1, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create1133(cl_double x, cl_double y, fcDouble3 vec1, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create11411(cl_double x, cl_double y, fcDouble4 vec1, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s6, s7);
}
fcDouble8 fcDouble8_create1142(cl_double x, cl_double y, fcDouble4 vec1, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create1211111(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create121112(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, s4, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create121121(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create12113(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, s4, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create121211(cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s6, s7);
}
fcDouble8 fcDouble8_create12122(cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create12131(cl_double x, fcDouble2 vec1, cl_double w, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s7);
}
fcDouble8 fcDouble8_create1214(cl_double x, fcDouble2 vec1, cl_double w, fcDouble4 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcDouble8 fcDouble8_create122111(cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, s6, s7);
}
fcDouble8 fcDouble8_create12212(cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create12221(cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcDouble8 fcDouble8_create1223(cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcDouble8 fcDouble8_create12311(cl_double x, fcDouble2 vec1, fcDouble3 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcDouble8 fcDouble8_create1232(cl_double x, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create1241(cl_double x, fcDouble2 vec1, fcDouble4 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcDouble8 fcDouble8_create131111(cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create13112(cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create13121(cl_double x, fcDouble3 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create1313(cl_double x, fcDouble3 vec1, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, s4, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create13211(cl_double x, fcDouble3 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s6, s7);
}
fcDouble8 fcDouble8_create1322(cl_double x, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create1331(cl_double x, fcDouble3 vec1, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s7);
}
fcDouble8 fcDouble8_create134(cl_double x, fcDouble3 vec1, fcDouble4 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcDouble8 fcDouble8_create14111(cl_double x, fcDouble4 vec1, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, s6, s7);
}
fcDouble8 fcDouble8_create1412(cl_double x, fcDouble4 vec1, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create1421(cl_double x, fcDouble4 vec1, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create143(cl_double x, fcDouble4 vec1, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create2111111(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create211112(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, s4, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create211121(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create21113(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create211211(fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s6, s7);
}
fcDouble8 fcDouble8_create21122(fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create21131(fcDouble2 vec1, cl_double z, cl_double w, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcDouble8 fcDouble8_create2114(fcDouble2 vec1, cl_double z, cl_double w, fcDouble4 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcDouble8 fcDouble8_create212111(fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, s6, s7);
}
fcDouble8 fcDouble8_create21212(fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create21221(fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcDouble8 fcDouble8_create2123(fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcDouble8 fcDouble8_create21311(fcDouble2 vec1, cl_double z, fcDouble3 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcDouble8 fcDouble8_create2132(fcDouble2 vec1, cl_double z, fcDouble3 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create2141(fcDouble2 vec1, cl_double z, fcDouble4 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcDouble8 fcDouble8_create221111(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create22112(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, s5, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create22121(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, s7);
}
fcDouble8 fcDouble8_create2213(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, s4, vec3.x, vec3.y, vec3.z);
}
fcDouble8 fcDouble8_create22211(fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s6, s7);
}
fcDouble8 fcDouble8_create2222(fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, fcDouble2 vec4) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
}
fcDouble8 fcDouble8_create2231(fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s7);
}
fcDouble8 fcDouble8_create224(fcDouble2 vec1, fcDouble2 vec2, fcDouble4 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
}
fcDouble8 fcDouble8_create23111(fcDouble2 vec1, fcDouble3 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, s6, s7);
}
fcDouble8 fcDouble8_create2312(fcDouble2 vec1, fcDouble3 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s5, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create2321(fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s7);
}
fcDouble8 fcDouble8_create233(fcDouble2 vec1, fcDouble3 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
}
fcDouble8 fcDouble8_create2411(fcDouble2 vec1, fcDouble4 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s6, s7);
}
fcDouble8 fcDouble8_create242(fcDouble2 vec1, fcDouble4 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create311111(fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create31112(fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create31121(fcDouble3 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create3113(fcDouble3 vec1, cl_double w, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, s4, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create31211(fcDouble3 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s6, s7);
}
fcDouble8 fcDouble8_create3122(fcDouble3 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create3131(fcDouble3 vec1, cl_double w, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s7);
}
fcDouble8 fcDouble8_create314(fcDouble3 vec1, cl_double w, fcDouble4 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcDouble8 fcDouble8_create32111(fcDouble3 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, s6, s7);
}
fcDouble8 fcDouble8_create3212(fcDouble3 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s5, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create3221(fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s7);
}
fcDouble8 fcDouble8_create323(fcDouble3 vec1, fcDouble2 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
}
fcDouble8 fcDouble8_create3311(fcDouble3 vec1, fcDouble3 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s6, s7);
}
fcDouble8 fcDouble8_create332(fcDouble3 vec1, fcDouble3 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create341(fcDouble3 vec1, fcDouble4 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s7);
}
fcDouble8 fcDouble8_create41111(fcDouble4 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, s6, s7);
}
fcDouble8 fcDouble8_create4112(fcDouble4 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, s5, vec2.x, vec2.y);
}
fcDouble8 fcDouble8_create4121(fcDouble4 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, s7);
}
fcDouble8 fcDouble8_create413(fcDouble4 vec1, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, s4, vec2.x, vec2.y, vec2.z);
}
fcDouble8 fcDouble8_create4211(fcDouble4 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s6, s7);
}
fcDouble8 fcDouble8_create422(fcDouble4 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
}
fcDouble8 fcDouble8_create431(fcDouble4 vec1, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s7);
}
fcDouble8 fcDouble8_create44(fcDouble4 vec1, fcDouble4 vec2) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
}
fcDouble8 fcDouble8_create8(fcDouble8 vec1) {
  return fcDouble8_create11111111(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s4, vec1.s5, vec1.s6, vec1.s7);
}

fcDouble4 fcDouble8_odd(fcDouble8 a) {
  return fcDouble4_create1111(a.y, a.w, a.s5, a.s7);
}

fcDouble4 fcDouble8_even(fcDouble8 a) {
  return fcDouble4_create1111(a.x, a.z, a.s4, a.s6);
}

fcByte8 fcDouble8_convertByte8(fcDouble8 a) {
  return fcByte8_create11111111((cl_byte) a.x, (cl_byte) a.y, (cl_byte) a.z, (cl_byte) a.w, (cl_byte) a.s4, (cl_byte) a.s5, (cl_byte) a.s6, (cl_byte) a.s7);
}

fcShort8 fcDouble8_convertShort8(fcDouble8 a) {
  return fcShort8_create11111111((cl_short) a.x, (cl_short) a.y, (cl_short) a.z, (cl_short) a.w, (cl_short) a.s4, (cl_short) a.s5, (cl_short) a.s6, (cl_short) a.s7);
}

fcInt8 fcDouble8_convertInt8(fcDouble8 a) {
  return fcInt8_create11111111((cl_int) a.x, (cl_int) a.y, (cl_int) a.z, (cl_int) a.w, (cl_int) a.s4, (cl_int) a.s5, (cl_int) a.s6, (cl_int) a.s7);
}

fcLong8 fcDouble8_convertLong8(fcDouble8 a) {
  return fcLong8_create11111111((cl_long) a.x, (cl_long) a.y, (cl_long) a.z, (cl_long) a.w, (cl_long) a.s4, (cl_long) a.s5, (cl_long) a.s6, (cl_long) a.s7);
}

fcFloat8 fcDouble8_convertFloat8(fcDouble8 a) {
  return fcFloat8_create11111111((cl_float) a.x, (cl_float) a.y, (cl_float) a.z, (cl_float) a.w, (cl_float) a.s4, (cl_float) a.s5, (cl_float) a.s6, (cl_float) a.s7);
}

fcDouble2 fcDouble8_asDouble2(fcDouble8 a) {
  return fcDouble2_create11(a.x, a.y);
}

fcDouble3 fcDouble8_asDouble3(fcDouble8 a) {
  return fcDouble3_create111(a.x, a.y, a.z);
}

fcDouble4 fcDouble8_asDouble4(fcDouble8 a) {
  return fcDouble4_create1111(a.x, a.y, a.z, a.w);
}

fcInt8 fcDouble8_isEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s4 == b.s4? 1 : 0, a.s5 == b.s5? 1 : 0, a.s6 == b.s6? 1 : 0, a.s7 == b.s7? 1 : 0);
}

fcInt8 fcDouble8_isNotEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s4 != b.s4? 1 : 0, a.s5 != b.s5? 1 : 0, a.s6 != b.s6? 1 : 0, a.s7 != b.s7? 1 : 0);
}

fcInt8 fcDouble8_isGreater(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s4 > b.s4? 1 : 0, a.s5 > b.s5? 1 : 0, a.s6 > b.s6? 1 : 0, a.s7 > b.s7? 1 : 0);
}

fcInt8 fcDouble8_isGreaterEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s4 >= b.s4? 1 : 0, a.s5 >= b.s5? 1 : 0, a.s6 >= b.s6? 1 : 0, a.s7 >= b.s7? 1 : 0);
}

fcInt8 fcDouble8_isLess(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s4 < b.s4? 1 : 0, a.s5 < b.s5? 1 : 0, a.s6 < b.s6? 1 : 0, a.s7 < b.s7? 1 : 0);
}

fcInt8 fcDouble8_isLessEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s4 <= b.s4? 1 : 0, a.s5 <= b.s5? 1 : 0, a.s6 <= b.s6? 1 : 0, a.s7 <= b.s7? 1 : 0);
}

fcDouble8 fcDouble8_select(fcDouble8 a, fcDouble8 b, fcInt8 c) {
  return fcDouble8_create11111111(fcMath_select(a.x, b.x, c.x), fcMath_select(a.y, b.y, c.y), fcMath_select(a.z, b.z, c.z), fcMath_select(a.w, b.w, c.w), fcMath_select(a.s4, b.s4, c.s4), fcMath_select(a.s5, b.s5, c.s5), fcMath_select(a.s6, b.s6, c.s6), fcMath_select(a.s7, b.s7, c.s7));
}

fcInt8 fcDouble8_isFinite(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isFinite(a.x), fcMath_isFinite(a.y), fcMath_isFinite(a.z), fcMath_isFinite(a.w), fcMath_isFinite(a.s4), fcMath_isFinite(a.s5), fcMath_isFinite(a.s6), fcMath_isFinite(a.s7));
}

fcInt8 fcDouble8_isInf(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isInf(a.x), fcMath_isInf(a.y), fcMath_isInf(a.z), fcMath_isInf(a.w), fcMath_isInf(a.s4), fcMath_isInf(a.s5), fcMath_isInf(a.s6), fcMath_isInf(a.s7));
}

fcInt8 fcDouble8_isNaN(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isNaN(a.x), fcMath_isNaN(a.y), fcMath_isNaN(a.z), fcMath_isNaN(a.w), fcMath_isNaN(a.s4), fcMath_isNaN(a.s5), fcMath_isNaN(a.s6), fcMath_isNaN(a.s7));
}

fcInt8 fcDouble8_isNormal(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isNormal(a.x), fcMath_isNormal(a.y), fcMath_isNormal(a.z), fcMath_isNormal(a.w), fcMath_isNormal(a.s4), fcMath_isNormal(a.s5), fcMath_isNormal(a.s6), fcMath_isNormal(a.s7));
}

fcInt8 fcDouble8_isOrdered(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(fcMath_isOrdered(a.x, b.x), fcMath_isOrdered(a.y, b.y), fcMath_isOrdered(a.z, b.z), fcMath_isOrdered(a.w, b.w), fcMath_isOrdered(a.s4, b.s4), fcMath_isOrdered(a.s5, b.s5), fcMath_isOrdered(a.s6, b.s6), fcMath_isOrdered(a.s7, b.s7));
}

fcInt8 fcDouble8_isUnordered(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(fcMath_isUnordered(a.x, b.x), fcMath_isUnordered(a.y, b.y), fcMath_isUnordered(a.z, b.z), fcMath_isUnordered(a.w, b.w), fcMath_isUnordered(a.s4, b.s4), fcMath_isUnordered(a.s5, b.s5), fcMath_isUnordered(a.s6, b.s6), fcMath_isUnordered(a.s7, b.s7));
}

cl_int fcDouble8_any(fcDouble8 a) {
  return a.x != 0.0 || a.y != 0.0 || a.z != 0.0 || a.w != 0.0 || a.s4 != 0.0 || a.s5 != 0.0 || a.s6 != 0.0 || a.s7 != 0.0;
}

cl_int fcDouble8_all(fcDouble8 a) {
  return !(a.x == 0.0 || a.y == 0.0 || a.z == 0.0 || a.w == 0.0 || a.s4 == 0.0 || a.s5 == 0.0 || a.s6 == 0.0 || a.s7 == 0.0);
}

fcDouble8 fcDouble8_add(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w, a.s4 + b.s4, a.s5 + b.s5, a.s6 + b.s6, a.s7 + b.s7);
}

fcDouble8 fcDouble8_sub(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w, a.s4 - b.s4, a.s5 - b.s5, a.s6 - b.s6, a.s7 - b.s7);
}

fcDouble8 fcDouble8_muld(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x * b.x), (cl_double)(a.y * b.y), (cl_double)(a.z * b.z), (cl_double)(a.w * b.w), (cl_double)(a.s4 * b.s4), (cl_double)(a.s5 * b.s5), (cl_double)(a.s6 * b.s6), (cl_double)(a.s7 * b.s7));
}

fcFloat8 fcDouble8_mulf(fcDouble8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x * b.x), (cl_float)(a.y * b.y), (cl_float)(a.z * b.z), (cl_float)(a.w * b.w), (cl_float)(a.s4 * b.s4), (cl_float)(a.s5 * b.s5), (cl_float)(a.s6 * b.s6), (cl_float)(a.s7 * b.s7));
}

fcDouble8 fcDouble8_mulkd(fcDouble8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x * k), (cl_double)(a.y * k), (cl_double)(a.z * k), (cl_double)(a.w * k), (cl_double)(a.s4 * k), (cl_double)(a.s5 * k), (cl_double)(a.s6 * k), (cl_double)(a.s7 * k));
}

fcFloat8 fcDouble8_mulkf(fcDouble8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x * k), (cl_float)(a.y * k), (cl_float)(a.z * k), (cl_float)(a.w * k), (cl_float)(a.s4 * k), (cl_float)(a.s5 * k), (cl_float)(a.s6 * k), (cl_float)(a.s7 * k));
}

fcDouble8 fcDouble8_divd(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.x / b.x), (cl_double)(a.y / b.y), (cl_double)(a.z / b.z), (cl_double)(a.w / b.w), (cl_double)(a.s4 / b.s4), (cl_double)(a.s5 / b.s5), (cl_double)(a.s6 / b.s6), (cl_double)(a.s7 / b.s7));
}

fcFloat8 fcDouble8_divf(fcDouble8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.x / b.x), (cl_float)(a.y / b.y), (cl_float)(a.z / b.z), (cl_float)(a.w / b.w), (cl_float)(a.s4 / b.s4), (cl_float)(a.s5 / b.s5), (cl_float)(a.s6 / b.s6), (cl_float)(a.s7 / b.s7));
}

fcDouble8 fcDouble8_divkd(fcDouble8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.x / k), (cl_double)(a.y / k), (cl_double)(a.z / k), (cl_double)(a.w / k), (cl_double)(a.s4 / k), (cl_double)(a.s5 / k), (cl_double)(a.s6 / k), (cl_double)(a.s7 / k));
}

fcFloat8 fcDouble8_divkf(fcDouble8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.x / k), (cl_float)(a.y / k), (cl_float)(a.z / k), (cl_float)(a.w / k), (cl_float)(a.s4 / k), (cl_float)(a.s5 / k), (cl_float)(a.s6 / k), (cl_float)(a.s7 / k));
}

cl_double fcDouble8_dot(fcDouble8 a, fcDouble8 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w + a.s4 * b.s4 + a.s5 * b.s5 + a.s6 * b.s6 + a.s7 * b.s7;
}

cl_double fcDouble8_distance(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_length(fcDouble8_sub(a, b));
}

cl_double fcDouble8_length(fcDouble8 a) {
  return fcMath_sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w + a.s4 * a.s4 + a.s5 * a.s5 + a.s6 * a.s6 + a.s7 * a.s7);
}

fcDouble8 fcDouble8_normalize(fcDouble8 a) {
  cl_double len = fcDouble8_length(a);
  return fcDouble8_create11111111((cl_double)(a.x / len), (cl_double)(a.y / len), (cl_double)(a.z / len), (cl_double)(a.w / len), (cl_double)(a.s4 / len), (cl_double)(a.s5 / len), (cl_double)(a.s6 / len), (cl_double)(a.s7 / len));
}

fcDouble8 fcDouble8_abs(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_abs(a.x), fcMath_abs(a.y), fcMath_abs(a.z), fcMath_abs(a.w), fcMath_abs(a.s4), fcMath_abs(a.s5), fcMath_abs(a.s6), fcMath_abs(a.s7));
}

fcDouble8 fcDouble8_clamp(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_clamp(a.x, b.x, c.x), fcMath_clamp(a.y, b.y, c.y), fcMath_clamp(a.z, b.z, c.z), fcMath_clamp(a.w, b.w, c.w), fcMath_clamp(a.s4, b.s4, c.s4), fcMath_clamp(a.s5, b.s5, c.s5), fcMath_clamp(a.s6, b.s6, c.s6), fcMath_clamp(a.s7, b.s7, c.s7));
}

fcDouble8 fcDouble8_max(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_max(a.x, b.x), fcMath_max(a.y, b.y), fcMath_max(a.z, b.z), fcMath_max(a.w, b.w), fcMath_max(a.s4, b.s4), fcMath_max(a.s5, b.s5), fcMath_max(a.s6, b.s6), fcMath_max(a.s7, b.s7));
}

fcDouble8 fcDouble8_maxMag(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_maxMag(a.x, b.x), fcMath_maxMag(a.y, b.y), fcMath_maxMag(a.z, b.z), fcMath_maxMag(a.w, b.w), fcMath_maxMag(a.s4, b.s4), fcMath_maxMag(a.s5, b.s5), fcMath_maxMag(a.s6, b.s6), fcMath_maxMag(a.s7, b.s7));
}

fcDouble8 fcDouble8_min(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_min(a.x, b.x), fcMath_min(a.y, b.y), fcMath_min(a.z, b.z), fcMath_min(a.w, b.w), fcMath_min(a.s4, b.s4), fcMath_min(a.s5, b.s5), fcMath_min(a.s6, b.s6), fcMath_min(a.s7, b.s7));
}

fcDouble8 fcDouble8_minMag(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_minMag(a.x, b.x), fcMath_minMag(a.y, b.y), fcMath_minMag(a.z, b.z), fcMath_minMag(a.w, b.w), fcMath_minMag(a.s4, b.s4), fcMath_minMag(a.s5, b.s5), fcMath_minMag(a.s6, b.s6), fcMath_minMag(a.s7, b.s7));
}

fcDouble8 fcDouble8_mix(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_mix(a.x, b.x, c.x), fcMath_mix(a.y, b.y, c.y), fcMath_mix(a.z, b.z, c.z), fcMath_mix(a.w, b.w, c.w), fcMath_mix(a.s4, b.s4, c.s4), fcMath_mix(a.s5, b.s5, c.s5), fcMath_mix(a.s6, b.s6, c.s6), fcMath_mix(a.s7, b.s7, c.s7));
}

fcDouble8 fcDouble8_clampk(fcDouble8 v, cl_double min, cl_double max) {
  return fcDouble8_create11111111(fcMath_clamp(v.x, min, max), fcMath_clamp(v.y, min, max), fcMath_clamp(v.z, min, max), fcMath_clamp(v.w, min, max), fcMath_clamp(v.s4, min, max), fcMath_clamp(v.s5, min, max), fcMath_clamp(v.s6, min, max), fcMath_clamp(v.s7, min, max));
}

fcDouble8 fcDouble8_maxk(fcDouble8 x, cl_double y) {
  return fcDouble8_create11111111(fcMath_max(x.x, y), fcMath_max(x.y, y), fcMath_max(x.z, y), fcMath_max(x.w, y), fcMath_max(x.s4, y), fcMath_max(x.s5, y), fcMath_max(x.s6, y), fcMath_max(x.s7, y));
}

fcDouble8 fcDouble8_mink(fcDouble8 x, cl_double y) {
  return fcDouble8_create11111111(fcMath_min(x.x, y), fcMath_min(x.y, y), fcMath_min(x.z, y), fcMath_min(x.w, y), fcMath_min(x.s4, y), fcMath_min(x.s5, y), fcMath_min(x.s6, y), fcMath_min(x.s7, y));
}

fcDouble8 fcDouble8_mixk(fcDouble8 x, fcDouble8 y, cl_double a) {
  return fcDouble8_create11111111(fcMath_mix(x.x, y.x, a), fcMath_mix(x.y, y.y, a), fcMath_mix(x.z, y.z, a), fcMath_mix(x.w, y.w, a), fcMath_mix(x.s4, y.s4, a), fcMath_mix(x.s5, y.s5, a), fcMath_mix(x.s6, y.s6, a), fcMath_mix(x.s7, y.s7, a));
}

fcDouble8 fcDouble8_acos(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_acos(a.x), fcMath_acos(a.y), fcMath_acos(a.z), fcMath_acos(a.w), fcMath_acos(a.s4), fcMath_acos(a.s5), fcMath_acos(a.s6), fcMath_acos(a.s7));
}

fcDouble8 fcDouble8_acosh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_acosh(a.x), fcMath_acosh(a.y), fcMath_acosh(a.z), fcMath_acosh(a.w), fcMath_acosh(a.s4), fcMath_acosh(a.s5), fcMath_acosh(a.s6), fcMath_acosh(a.s7));
}

fcDouble8 fcDouble8_asin(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_asin(a.x), fcMath_asin(a.y), fcMath_asin(a.z), fcMath_asin(a.w), fcMath_asin(a.s4), fcMath_asin(a.s5), fcMath_asin(a.s6), fcMath_asin(a.s7));
}

fcDouble8 fcDouble8_asinh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_asinh(a.x), fcMath_asinh(a.y), fcMath_asinh(a.z), fcMath_asinh(a.w), fcMath_asinh(a.s4), fcMath_asinh(a.s5), fcMath_asinh(a.s6), fcMath_asinh(a.s7));
}

fcDouble8 fcDouble8_atan(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_atan(a.x), fcMath_atan(a.y), fcMath_atan(a.z), fcMath_atan(a.w), fcMath_atan(a.s4), fcMath_atan(a.s5), fcMath_atan(a.s6), fcMath_atan(a.s7));
}

fcDouble8 fcDouble8_atan2(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_atan2(a.x, b.x), fcMath_atan2(a.y, b.y), fcMath_atan2(a.z, b.z), fcMath_atan2(a.w, b.w), fcMath_atan2(a.s4, b.s4), fcMath_atan2(a.s5, b.s5), fcMath_atan2(a.s6, b.s6), fcMath_atan2(a.s7, b.s7));
}

fcDouble8 fcDouble8_atanh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_atanh(a.x), fcMath_atanh(a.y), fcMath_atanh(a.z), fcMath_atanh(a.w), fcMath_atanh(a.s4), fcMath_atanh(a.s5), fcMath_atanh(a.s6), fcMath_atanh(a.s7));
}

fcDouble8 fcDouble8_cbrt(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_cbrt(a.x), fcMath_cbrt(a.y), fcMath_cbrt(a.z), fcMath_cbrt(a.w), fcMath_cbrt(a.s4), fcMath_cbrt(a.s5), fcMath_cbrt(a.s6), fcMath_cbrt(a.s7));
}

fcDouble8 fcDouble8_ceil(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_ceil(a.x), fcMath_ceil(a.y), fcMath_ceil(a.z), fcMath_ceil(a.w), fcMath_ceil(a.s4), fcMath_ceil(a.s5), fcMath_ceil(a.s6), fcMath_ceil(a.s7));
}

fcDouble8 fcDouble8_copySign(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_copySign(a.x, b.x), fcMath_copySign(a.y, b.y), fcMath_copySign(a.z, b.z), fcMath_copySign(a.w, b.w), fcMath_copySign(a.s4, b.s4), fcMath_copySign(a.s5, b.s5), fcMath_copySign(a.s6, b.s6), fcMath_copySign(a.s7, b.s7));
}

fcDouble8 fcDouble8_cos(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_cos(a.x), fcMath_cos(a.y), fcMath_cos(a.z), fcMath_cos(a.w), fcMath_cos(a.s4), fcMath_cos(a.s5), fcMath_cos(a.s6), fcMath_cos(a.s7));
}

fcDouble8 fcDouble8_cosh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_cosh(a.x), fcMath_cosh(a.y), fcMath_cosh(a.z), fcMath_cosh(a.w), fcMath_cosh(a.s4), fcMath_cosh(a.s5), fcMath_cosh(a.s6), fcMath_cosh(a.s7));
}

fcDouble8 fcDouble8_erf(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_erf(a.x), fcMath_erf(a.y), fcMath_erf(a.z), fcMath_erf(a.w), fcMath_erf(a.s4), fcMath_erf(a.s5), fcMath_erf(a.s6), fcMath_erf(a.s7));
}

fcDouble8 fcDouble8_erfc(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_erfc(a.x), fcMath_erfc(a.y), fcMath_erfc(a.z), fcMath_erfc(a.w), fcMath_erfc(a.s4), fcMath_erfc(a.s5), fcMath_erfc(a.s6), fcMath_erfc(a.s7));
}

fcDouble8 fcDouble8_exp(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_exp(a.x), fcMath_exp(a.y), fcMath_exp(a.z), fcMath_exp(a.w), fcMath_exp(a.s4), fcMath_exp(a.s5), fcMath_exp(a.s6), fcMath_exp(a.s7));
}

fcDouble8 fcDouble8_exp10(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_exp10(a.x), fcMath_exp10(a.y), fcMath_exp10(a.z), fcMath_exp10(a.w), fcMath_exp10(a.s4), fcMath_exp10(a.s5), fcMath_exp10(a.s6), fcMath_exp10(a.s7));
}

fcDouble8 fcDouble8_exp2(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_exp2(a.x), fcMath_exp2(a.y), fcMath_exp2(a.z), fcMath_exp2(a.w), fcMath_exp2(a.s4), fcMath_exp2(a.s5), fcMath_exp2(a.s6), fcMath_exp2(a.s7));
}

fcDouble8 fcDouble8_expm1(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_expm1(a.x), fcMath_expm1(a.y), fcMath_expm1(a.z), fcMath_expm1(a.w), fcMath_expm1(a.s4), fcMath_expm1(a.s5), fcMath_expm1(a.s6), fcMath_expm1(a.s7));
}

fcDouble8 fcDouble8_fdim(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_fdim(a.x, b.x), fcMath_fdim(a.y, b.y), fcMath_fdim(a.z, b.z), fcMath_fdim(a.w, b.w), fcMath_fdim(a.s4, b.s4), fcMath_fdim(a.s5, b.s5), fcMath_fdim(a.s6, b.s6), fcMath_fdim(a.s7, b.s7));
}

fcDouble8 fcDouble8_floor(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_floor(a.x), fcMath_floor(a.y), fcMath_floor(a.z), fcMath_floor(a.w), fcMath_floor(a.s4), fcMath_floor(a.s5), fcMath_floor(a.s6), fcMath_floor(a.s7));
}

fcDouble8 fcDouble8_fma(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_fma(a.x, b.x, c.x), fcMath_fma(a.y, b.y, c.y), fcMath_fma(a.z, b.z, c.z), fcMath_fma(a.w, b.w, c.w), fcMath_fma(a.s4, b.s4, c.s4), fcMath_fma(a.s5, b.s5, c.s5), fcMath_fma(a.s6, b.s6, c.s6), fcMath_fma(a.s7, b.s7, c.s7));
}

fcDouble8 fcDouble8_fmod(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_fmod(a.x, b.x), fcMath_fmod(a.y, b.y), fcMath_fmod(a.z, b.z), fcMath_fmod(a.w, b.w), fcMath_fmod(a.s4, b.s4), fcMath_fmod(a.s5, b.s5), fcMath_fmod(a.s6, b.s6), fcMath_fmod(a.s7, b.s7));
}

fcDouble8 fcDouble8_fract(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_fract(a.x), fcMath_fract(a.y), fcMath_fract(a.z), fcMath_fract(a.w), fcMath_fract(a.s4), fcMath_fract(a.s5), fcMath_fract(a.s6), fcMath_fract(a.s7));
}

fcDouble8 fcDouble8_frexp(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_frexp(a.x), fcMath_frexp(a.y), fcMath_frexp(a.z), fcMath_frexp(a.w), fcMath_frexp(a.s4), fcMath_frexp(a.s5), fcMath_frexp(a.s6), fcMath_frexp(a.s7));
}

fcDouble8 fcDouble8_getExponent(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_getExponent(a.x), fcMath_getExponent(a.y), fcMath_getExponent(a.z), fcMath_getExponent(a.w), fcMath_getExponent(a.s4), fcMath_getExponent(a.s5), fcMath_getExponent(a.s6), fcMath_getExponent(a.s7));
}

fcDouble8 fcDouble8_hypot(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_hypot(a.x, b.x), fcMath_hypot(a.y, b.y), fcMath_hypot(a.z, b.z), fcMath_hypot(a.w, b.w), fcMath_hypot(a.s4, b.s4), fcMath_hypot(a.s5, b.s5), fcMath_hypot(a.s6, b.s6), fcMath_hypot(a.s7, b.s7));
}

fcDouble8 fcDouble8_lgamma(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_lgamma(a.x), fcMath_lgamma(a.y), fcMath_lgamma(a.z), fcMath_lgamma(a.w), fcMath_lgamma(a.s4), fcMath_lgamma(a.s5), fcMath_lgamma(a.s6), fcMath_lgamma(a.s7));
}

fcDouble8 fcDouble8_log(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log(a.x), fcMath_log(a.y), fcMath_log(a.z), fcMath_log(a.w), fcMath_log(a.s4), fcMath_log(a.s5), fcMath_log(a.s6), fcMath_log(a.s7));
}

fcDouble8 fcDouble8_log10(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log10(a.x), fcMath_log10(a.y), fcMath_log10(a.z), fcMath_log10(a.w), fcMath_log10(a.s4), fcMath_log10(a.s5), fcMath_log10(a.s6), fcMath_log10(a.s7));
}

fcDouble8 fcDouble8_log1p(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log1p(a.x), fcMath_log1p(a.y), fcMath_log1p(a.z), fcMath_log1p(a.w), fcMath_log1p(a.s4), fcMath_log1p(a.s5), fcMath_log1p(a.s6), fcMath_log1p(a.s7));
}

fcDouble8 fcDouble8_log2(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log2(a.x), fcMath_log2(a.y), fcMath_log2(a.z), fcMath_log2(a.w), fcMath_log2(a.s4), fcMath_log2(a.s5), fcMath_log2(a.s6), fcMath_log2(a.s7));
}

fcDouble8 fcDouble8_logb(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_logb(a.x), fcMath_logb(a.y), fcMath_logb(a.z), fcMath_logb(a.w), fcMath_logb(a.s4), fcMath_logb(a.s5), fcMath_logb(a.s6), fcMath_logb(a.s7));
}

fcDouble8 fcDouble8_mad(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_mad(a.x, b.x, c.x), fcMath_mad(a.y, b.y, c.y), fcMath_mad(a.z, b.z, c.z), fcMath_mad(a.w, b.w, c.w), fcMath_mad(a.s4, b.s4, c.s4), fcMath_mad(a.s5, b.s5, c.s5), fcMath_mad(a.s6, b.s6, c.s6), fcMath_mad(a.s7, b.s7, c.s7));
}

fcDouble8 fcDouble8_nextAfter(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_nextAfter(a.x, b.x), fcMath_nextAfter(a.y, b.y), fcMath_nextAfter(a.z, b.z), fcMath_nextAfter(a.w, b.w), fcMath_nextAfter(a.s4, b.s4), fcMath_nextAfter(a.s5, b.s5), fcMath_nextAfter(a.s6, b.s6), fcMath_nextAfter(a.s7, b.s7));
}

fcDouble8 fcDouble8_pow(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_pow(a.x, b.x), fcMath_pow(a.y, b.y), fcMath_pow(a.z, b.z), fcMath_pow(a.w, b.w), fcMath_pow(a.s4, b.s4), fcMath_pow(a.s5, b.s5), fcMath_pow(a.s6, b.s6), fcMath_pow(a.s7, b.s7));
}

fcDouble8 fcDouble8_powr(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_powr(a.x, b.x), fcMath_powr(a.y, b.y), fcMath_powr(a.z, b.z), fcMath_powr(a.w, b.w), fcMath_powr(a.s4, b.s4), fcMath_powr(a.s5, b.s5), fcMath_powr(a.s6, b.s6), fcMath_powr(a.s7, b.s7));
}

fcDouble8 fcDouble8_remainder(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_remainder(a.x, b.x), fcMath_remainder(a.y, b.y), fcMath_remainder(a.z, b.z), fcMath_remainder(a.w, b.w), fcMath_remainder(a.s4, b.s4), fcMath_remainder(a.s5, b.s5), fcMath_remainder(a.s6, b.s6), fcMath_remainder(a.s7, b.s7));
}

fcDouble8 fcDouble8_rint(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_rint(a.x), fcMath_rint(a.y), fcMath_rint(a.z), fcMath_rint(a.w), fcMath_rint(a.s4), fcMath_rint(a.s5), fcMath_rint(a.s6), fcMath_rint(a.s7));
}

fcDouble8 fcDouble8_round(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_round(a.x), fcMath_round(a.y), fcMath_round(a.z), fcMath_round(a.w), fcMath_round(a.s4), fcMath_round(a.s5), fcMath_round(a.s6), fcMath_round(a.s7));
}

fcDouble8 fcDouble8_rsqrt(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_rsqrt(a.x), fcMath_rsqrt(a.y), fcMath_rsqrt(a.z), fcMath_rsqrt(a.w), fcMath_rsqrt(a.s4), fcMath_rsqrt(a.s5), fcMath_rsqrt(a.s6), fcMath_rsqrt(a.s7));
}

fcDouble8 fcDouble8_signum(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_signum(a.x), fcMath_signum(a.y), fcMath_signum(a.z), fcMath_signum(a.w), fcMath_signum(a.s4), fcMath_signum(a.s5), fcMath_signum(a.s6), fcMath_signum(a.s7));
}

fcDouble8 fcDouble8_sin(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_sin(a.x), fcMath_sin(a.y), fcMath_sin(a.z), fcMath_sin(a.w), fcMath_sin(a.s4), fcMath_sin(a.s5), fcMath_sin(a.s6), fcMath_sin(a.s7));
}

fcDouble8 fcDouble8_sinh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_sinh(a.x), fcMath_sinh(a.y), fcMath_sinh(a.z), fcMath_sinh(a.w), fcMath_sinh(a.s4), fcMath_sinh(a.s5), fcMath_sinh(a.s6), fcMath_sinh(a.s7));
}

fcDouble8 fcDouble8_smoothStep(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_smoothStep(a.x, b.x, c.x), fcMath_smoothStep(a.y, b.y, c.y), fcMath_smoothStep(a.z, b.z, c.z), fcMath_smoothStep(a.w, b.w, c.w), fcMath_smoothStep(a.s4, b.s4, c.s4), fcMath_smoothStep(a.s5, b.s5, c.s5), fcMath_smoothStep(a.s6, b.s6, c.s6), fcMath_smoothStep(a.s7, b.s7, c.s7));
}

fcDouble8 fcDouble8_sqrt(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_sqrt(a.x), fcMath_sqrt(a.y), fcMath_sqrt(a.z), fcMath_sqrt(a.w), fcMath_sqrt(a.s4), fcMath_sqrt(a.s5), fcMath_sqrt(a.s6), fcMath_sqrt(a.s7));
}

fcDouble8 fcDouble8_step(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_step(a.x, b.x), fcMath_step(a.y, b.y), fcMath_step(a.z, b.z), fcMath_step(a.w, b.w), fcMath_step(a.s4, b.s4), fcMath_step(a.s5, b.s5), fcMath_step(a.s6, b.s6), fcMath_step(a.s7, b.s7));
}

fcDouble8 fcDouble8_tan(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_tan(a.x), fcMath_tan(a.y), fcMath_tan(a.z), fcMath_tan(a.w), fcMath_tan(a.s4), fcMath_tan(a.s5), fcMath_tan(a.s6), fcMath_tan(a.s7));
}

fcDouble8 fcDouble8_tanh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_tanh(a.x), fcMath_tanh(a.y), fcMath_tanh(a.z), fcMath_tanh(a.w), fcMath_tanh(a.s4), fcMath_tanh(a.s5), fcMath_tanh(a.s6), fcMath_tanh(a.s7));
}

fcDouble8 fcDouble8_tgamma(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_tgamma(a.x), fcMath_tgamma(a.y), fcMath_tgamma(a.z), fcMath_tgamma(a.w), fcMath_tgamma(a.s4), fcMath_tgamma(a.s5), fcMath_tgamma(a.s6), fcMath_tgamma(a.s7));
}

fcDouble8 fcDouble8_toDegrees(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_toDegrees(a.x), fcMath_toDegrees(a.y), fcMath_toDegrees(a.z), fcMath_toDegrees(a.w), fcMath_toDegrees(a.s4), fcMath_toDegrees(a.s5), fcMath_toDegrees(a.s6), fcMath_toDegrees(a.s7));
}

fcDouble8 fcDouble8_toRadians(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_toRadians(a.x), fcMath_toRadians(a.y), fcMath_toRadians(a.z), fcMath_toRadians(a.w), fcMath_toRadians(a.s4), fcMath_toRadians(a.s5), fcMath_toRadians(a.s6), fcMath_toRadians(a.s7));
}

fcDouble8 fcDouble8_trunc(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_trunc(a.x), fcMath_trunc(a.y), fcMath_trunc(a.z), fcMath_trunc(a.w), fcMath_trunc(a.s4), fcMath_trunc(a.s5), fcMath_trunc(a.s6), fcMath_trunc(a.s7));
}

fcDouble8 fcDouble8_scalb(fcDouble8 a, fcInt8 n) {
  return fcDouble8_create11111111(fcMath_scalb(a.x, n.x), fcMath_scalb(a.y, n.y), fcMath_scalb(a.z, n.z), fcMath_scalb(a.w, n.w), fcMath_scalb(a.s4, n.s4), fcMath_scalb(a.s5, n.s5), fcMath_scalb(a.s6, n.s6), fcMath_scalb(a.s7, n.s7));
}

fcDouble8 fcDouble8_ldexp(fcDouble8 a, fcInt8 n) {
  return fcDouble8_create11111111(fcMath_ldexp(a.x, n.x), fcMath_ldexp(a.y, n.y), fcMath_ldexp(a.z, n.z), fcMath_ldexp(a.w, n.w), fcMath_ldexp(a.s4, n.s4), fcMath_ldexp(a.s5, n.s5), fcMath_ldexp(a.s6, n.s6), fcMath_ldexp(a.s7, n.s7));
}

fcDouble8 fcDouble8_pown(fcDouble8 a, fcInt8 b) {
  return fcDouble8_create11111111(fcMath_pown(a.x, b.x), fcMath_pown(a.y, b.y), fcMath_pown(a.z, b.z), fcMath_pown(a.w, b.w), fcMath_pown(a.s4, b.s4), fcMath_pown(a.s5, b.s5), fcMath_pown(a.s6, b.s6), fcMath_pown(a.s7, b.s7));
}

fcDouble8 fcDouble8_rootn(fcDouble8 a, fcInt8 b) {
  return fcDouble8_create11111111(fcMath_rootn(a.x, b.x), fcMath_rootn(a.y, b.y), fcMath_rootn(a.z, b.z), fcMath_rootn(a.w, b.w), fcMath_rootn(a.s4, b.s4), fcMath_rootn(a.s5, b.s5), fcMath_rootn(a.s6, b.s6), fcMath_rootn(a.s7, b.s7));
}

fcDouble8 fcDouble8_smoothStepk(fcDouble8 a, fcDouble8 b, cl_double c) {
  return fcDouble8_create11111111(fcMath_smoothStep(a.x, b.x, c), fcMath_smoothStep(a.y, b.y, c), fcMath_smoothStep(a.z, b.z, c), fcMath_smoothStep(a.w, b.w, c), fcMath_smoothStep(a.s4, b.s4, c), fcMath_smoothStep(a.s5, b.s5, c), fcMath_smoothStep(a.s6, b.s6, c), fcMath_smoothStep(a.s7, b.s7, c));
}


