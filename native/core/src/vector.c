#include <fancier/vector.h>

#include <fancier/exception.h>

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

fcByte2 fcByte2_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcByte3 fcByte3_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcByte4 fcByte4_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcByte8 fcByte8_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcShort2 fcShort2_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcShort3 fcShort3_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcShort4 fcShort4_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcShort8 fcShort8_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcInt2 fcInt2_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcInt3 fcInt3_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcInt4 fcInt4_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcInt8 fcInt8_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcLong2 fcLong2_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcLong3 fcLong3_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcLong4 fcLong4_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcLong8 fcLong8_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcFloat2 fcFloat2_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcFloat3 fcFloat3_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcFloat4 fcFloat4_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcFloat8 fcFloat8_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcDouble2 fcDouble2_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcDouble3 fcDouble3_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcDouble4 fcDouble4_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

fcDouble8 fcDouble8_unwrap(JNIEnv* env, jobject vec, fcError* err) {
  fcError __tmp_err;
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

