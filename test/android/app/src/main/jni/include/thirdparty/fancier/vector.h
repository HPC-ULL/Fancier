#ifndef _FANCIER_VECTOR_H_
#define _FANCIER_VECTOR_H_

#include <fancier/platform.h>
#include <fancier/math.h>


// Type definitions

typedef cl_char2 cl_byte2;
typedef cl_char3 cl_byte3;
typedef cl_char4 cl_byte4;
typedef cl_char8 cl_byte8;

typedef cl_byte2 fcByte2;
typedef cl_byte3 fcByte3;
typedef cl_byte4 fcByte4;
typedef cl_byte8 fcByte8;

typedef cl_short2 fcShort2;
typedef cl_short3 fcShort3;
typedef cl_short4 fcShort4;
typedef cl_short8 fcShort8;

typedef cl_int2 fcInt2;
typedef cl_int3 fcInt3;
typedef cl_int4 fcInt4;
typedef cl_int8 fcInt8;

typedef cl_long2 fcLong2;
typedef cl_long3 fcLong3;
typedef cl_long4 fcLong4;
typedef cl_long8 fcLong8;

typedef cl_float2 fcFloat2;
typedef cl_float3 fcFloat3;
typedef cl_float4 fcFloat4;
typedef cl_float8 fcFloat8;

typedef cl_double2 fcDouble2;
typedef cl_double3 fcDouble3;
typedef cl_double4 fcDouble4;
typedef cl_double8 fcDouble8;


// Java references

extern jclass fcByte2_class;
extern jmethodID fcByte2_constructor;
extern jclass fcByte3_class;
extern jmethodID fcByte3_constructor;
extern jclass fcByte4_class;
extern jmethodID fcByte4_constructor;
extern jclass fcByte8_class;
extern jmethodID fcByte8_constructor;

extern jclass fcShort2_class;
extern jmethodID fcShort2_constructor;
extern jclass fcShort3_class;
extern jmethodID fcShort3_constructor;
extern jclass fcShort4_class;
extern jmethodID fcShort4_constructor;
extern jclass fcShort8_class;
extern jmethodID fcShort8_constructor;

extern jclass fcInt2_class;
extern jmethodID fcInt2_constructor;
extern jclass fcInt3_class;
extern jmethodID fcInt3_constructor;
extern jclass fcInt4_class;
extern jmethodID fcInt4_constructor;
extern jclass fcInt8_class;
extern jmethodID fcInt8_constructor;

extern jclass fcLong2_class;
extern jmethodID fcLong2_constructor;
extern jclass fcLong3_class;
extern jmethodID fcLong3_constructor;
extern jclass fcLong4_class;
extern jmethodID fcLong4_constructor;
extern jclass fcLong8_class;
extern jmethodID fcLong8_constructor;

extern jclass fcFloat2_class;
extern jmethodID fcFloat2_constructor;
extern jclass fcFloat3_class;
extern jmethodID fcFloat3_constructor;
extern jclass fcFloat4_class;
extern jmethodID fcFloat4_constructor;
extern jclass fcFloat8_class;
extern jmethodID fcFloat8_constructor;

extern jclass fcDouble2_class;
extern jmethodID fcDouble2_constructor;
extern jclass fcDouble3_class;
extern jmethodID fcDouble3_constructor;
extern jclass fcDouble4_class;
extern jmethodID fcDouble4_constructor;
extern jclass fcDouble8_class;
extern jmethodID fcDouble8_constructor;


// Module initialization

FANCIER_API jint fcVector_initJNI(JNIEnv* env);
FANCIER_API void fcVector_releaseJNI(JNIEnv* env);

// Java interface

FANCIER_API fcByte2* fcByte2_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte2_wrap(JNIEnv* env, fcByte2 vec);
FANCIER_API fcByte2 fcByte2_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcByte3* fcByte3_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte3_wrap(JNIEnv* env, fcByte3 vec);
FANCIER_API fcByte3 fcByte3_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcByte4* fcByte4_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte4_wrap(JNIEnv* env, fcByte4 vec);
FANCIER_API fcByte4 fcByte4_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcByte8* fcByte8_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte8_wrap(JNIEnv* env, fcByte8 vec);
FANCIER_API fcByte8 fcByte8_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort2* fcShort2_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort2_wrap(JNIEnv* env, fcShort2 vec);
FANCIER_API fcShort2 fcShort2_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort3* fcShort3_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort3_wrap(JNIEnv* env, fcShort3 vec);
FANCIER_API fcShort3 fcShort3_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort4* fcShort4_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort4_wrap(JNIEnv* env, fcShort4 vec);
FANCIER_API fcShort4 fcShort4_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort8* fcShort8_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort8_wrap(JNIEnv* env, fcShort8 vec);
FANCIER_API fcShort8 fcShort8_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt2* fcInt2_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt2_wrap(JNIEnv* env, fcInt2 vec);
FANCIER_API fcInt2 fcInt2_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt3* fcInt3_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt3_wrap(JNIEnv* env, fcInt3 vec);
FANCIER_API fcInt3 fcInt3_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt4* fcInt4_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt4_wrap(JNIEnv* env, fcInt4 vec);
FANCIER_API fcInt4 fcInt4_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt8* fcInt8_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt8_wrap(JNIEnv* env, fcInt8 vec);
FANCIER_API fcInt8 fcInt8_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong2* fcLong2_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong2_wrap(JNIEnv* env, fcLong2 vec);
FANCIER_API fcLong2 fcLong2_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong3* fcLong3_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong3_wrap(JNIEnv* env, fcLong3 vec);
FANCIER_API fcLong3 fcLong3_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong4* fcLong4_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong4_wrap(JNIEnv* env, fcLong4 vec);
FANCIER_API fcLong4 fcLong4_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong8* fcLong8_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong8_wrap(JNIEnv* env, fcLong8 vec);
FANCIER_API fcLong8 fcLong8_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat2* fcFloat2_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat2_wrap(JNIEnv* env, fcFloat2 vec);
FANCIER_API fcFloat2 fcFloat2_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat3* fcFloat3_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat3_wrap(JNIEnv* env, fcFloat3 vec);
FANCIER_API fcFloat3 fcFloat3_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat4* fcFloat4_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat4_wrap(JNIEnv* env, fcFloat4 vec);
FANCIER_API fcFloat4 fcFloat4_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat8* fcFloat8_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat8_wrap(JNIEnv* env, fcFloat8 vec);
FANCIER_API fcFloat8 fcFloat8_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble2* fcDouble2_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble2_wrap(JNIEnv* env, fcDouble2 vec);
FANCIER_API fcDouble2 fcDouble2_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble3* fcDouble3_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble3_wrap(JNIEnv* env, fcDouble3 vec);
FANCIER_API fcDouble3 fcDouble3_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble4* fcDouble4_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble4_wrap(JNIEnv* env, fcDouble4 vec);
FANCIER_API fcDouble4 fcDouble4_unwrap(JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble8* fcDouble8_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble8_wrap(JNIEnv* env, fcDouble8 vec);
FANCIER_API fcDouble8 fcDouble8_unwrap(JNIEnv* env, jobject vec, int* err);


// Native interface

FANCIER_STATIC fcByte2 fcByte2_create1(cl_byte v);
FANCIER_STATIC void fcByte2_set1(fcByte2* self, cl_byte v);
FANCIER_STATIC fcByte2 fcByte2_create11(cl_byte a, cl_byte b);
FANCIER_STATIC void fcByte2_set11(fcByte2* self, cl_byte a, cl_byte b);
FANCIER_STATIC fcByte2 fcByte2_create2(fcByte2 vec1);
FANCIER_STATIC void fcByte2_set2(fcByte2* self, fcByte2 vec1);

FANCIER_STATIC fcShort2 fcByte2_convertShort2(fcByte2 a);
FANCIER_STATIC fcInt2 fcByte2_convertInt2(fcByte2 a);
FANCIER_STATIC fcLong2 fcByte2_convertLong2(fcByte2 a);
FANCIER_STATIC fcFloat2 fcByte2_convertFloat2(fcByte2 a);
FANCIER_STATIC fcDouble2 fcByte2_convertDouble2(fcByte2 a);

FANCIER_STATIC fcInt2 fcByte2_isEqual(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcInt2 fcByte2_isNotEqual(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcInt2 fcByte2_isGreater(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcInt2 fcByte2_isGreaterEqual(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcInt2 fcByte2_isLess(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcInt2 fcByte2_isLessEqual(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_select(fcByte2 a, fcByte2 b, fcInt2 c);

FANCIER_STATIC cl_int fcByte2_any(fcByte2 a);
FANCIER_STATIC cl_int fcByte2_all(fcByte2 a);

FANCIER_STATIC fcByte2 fcByte2_neg(fcByte2 a);
FANCIER_STATIC fcByte2 fcByte2_add(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_sub(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_mul(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcDouble2 fcByte2_muld(fcByte2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcByte2_mulf(fcByte2 a, fcFloat2 b);
FANCIER_STATIC fcByte2 fcByte2_mulk(fcByte2 a, cl_byte k);
FANCIER_STATIC fcDouble2 fcByte2_mulkd(fcByte2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcByte2_mulkf(fcByte2 a, cl_float k);
FANCIER_STATIC fcByte2 fcByte2_div(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcDouble2 fcByte2_divd(fcByte2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcByte2_divf(fcByte2 a, fcFloat2 b);
FANCIER_STATIC fcByte2 fcByte2_divk(fcByte2 a, cl_byte k);
FANCIER_STATIC fcDouble2 fcByte2_divkd(fcByte2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcByte2_divkf(fcByte2 a, cl_float k);
FANCIER_STATIC fcByte2 fcByte2_mod(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_modk(fcByte2 a, cl_byte k);
FANCIER_STATIC fcByte2 fcByte2_bitAnd(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_bitOr(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_bitXor(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_bitNot(fcByte2 a);

FANCIER_STATIC fcByte2 fcByte2_abs(fcByte2 a);
FANCIER_STATIC fcByte2 fcByte2_clamp(fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_STATIC fcByte2 fcByte2_max(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_maxMag(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_min(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_minMag(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_mix(fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_STATIC fcByte2 fcByte2_clampk(fcByte2 v, cl_byte min, cl_byte max);
FANCIER_STATIC fcByte2 fcByte2_maxk(fcByte2 x, cl_byte y);
FANCIER_STATIC fcByte2 fcByte2_mink(fcByte2 x, cl_byte y);
FANCIER_STATIC fcByte2 fcByte2_mixk(fcByte2 x, fcByte2 y, cl_byte a);
FANCIER_STATIC fcByte2 fcByte2_absDiff(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_addSat(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_clz(fcByte2 a);
FANCIER_STATIC fcByte2 fcByte2_hadd(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_madHi(fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_STATIC fcByte2 fcByte2_madSat(fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_STATIC fcByte2 fcByte2_mulHi(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_rhadd(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_rotate(fcByte2 a, fcByte2 b);
FANCIER_STATIC fcByte2 fcByte2_subSat(fcByte2 a, fcByte2 b);

FANCIER_STATIC fcByte3 fcByte3_create1(cl_byte v);
FANCIER_STATIC void fcByte3_set1(fcByte3* self, cl_byte v);
FANCIER_STATIC fcByte3 fcByte3_create111(cl_byte a, cl_byte b, cl_byte c);
FANCIER_STATIC void fcByte3_set111(fcByte3* self, cl_byte a, cl_byte b, cl_byte c);
FANCIER_STATIC fcByte3 fcByte3_create12(cl_byte x, fcByte2 vec1);
FANCIER_STATIC void fcByte3_set12(fcByte3* self, cl_byte x, fcByte2 vec1);
FANCIER_STATIC fcByte3 fcByte3_create21(fcByte2 vec1, cl_byte z);
FANCIER_STATIC void fcByte3_set21(fcByte3* self, fcByte2 vec1, cl_byte z);
FANCIER_STATIC fcByte3 fcByte3_create3(fcByte3 vec1);
FANCIER_STATIC void fcByte3_set3(fcByte3* self, fcByte3 vec1);

FANCIER_STATIC fcShort3 fcByte3_convertShort3(fcByte3 a);
FANCIER_STATIC fcInt3 fcByte3_convertInt3(fcByte3 a);
FANCIER_STATIC fcLong3 fcByte3_convertLong3(fcByte3 a);
FANCIER_STATIC fcFloat3 fcByte3_convertFloat3(fcByte3 a);
FANCIER_STATIC fcDouble3 fcByte3_convertDouble3(fcByte3 a);
FANCIER_STATIC fcByte2 fcByte3_asByte2(fcByte3 a);

FANCIER_STATIC fcInt3 fcByte3_isEqual(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcInt3 fcByte3_isNotEqual(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcInt3 fcByte3_isGreater(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcInt3 fcByte3_isGreaterEqual(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcInt3 fcByte3_isLess(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcInt3 fcByte3_isLessEqual(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_select(fcByte3 a, fcByte3 b, fcInt3 c);

FANCIER_STATIC cl_int fcByte3_any(fcByte3 a);
FANCIER_STATIC cl_int fcByte3_all(fcByte3 a);

FANCIER_STATIC fcByte3 fcByte3_neg(fcByte3 a);
FANCIER_STATIC fcByte3 fcByte3_add(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_sub(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_mul(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcDouble3 fcByte3_muld(fcByte3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcByte3_mulf(fcByte3 a, fcFloat3 b);
FANCIER_STATIC fcByte3 fcByte3_mulk(fcByte3 a, cl_byte k);
FANCIER_STATIC fcDouble3 fcByte3_mulkd(fcByte3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcByte3_mulkf(fcByte3 a, cl_float k);
FANCIER_STATIC fcByte3 fcByte3_div(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcDouble3 fcByte3_divd(fcByte3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcByte3_divf(fcByte3 a, fcFloat3 b);
FANCIER_STATIC fcByte3 fcByte3_divk(fcByte3 a, cl_byte k);
FANCIER_STATIC fcDouble3 fcByte3_divkd(fcByte3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcByte3_divkf(fcByte3 a, cl_float k);
FANCIER_STATIC fcByte3 fcByte3_mod(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_modk(fcByte3 a, cl_byte k);
FANCIER_STATIC fcByte3 fcByte3_bitAnd(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_bitOr(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_bitXor(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_bitNot(fcByte3 a);

FANCIER_STATIC fcByte3 fcByte3_abs(fcByte3 a);
FANCIER_STATIC fcByte3 fcByte3_clamp(fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_STATIC fcByte3 fcByte3_max(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_maxMag(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_min(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_minMag(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_mix(fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_STATIC fcByte3 fcByte3_clampk(fcByte3 v, cl_byte min, cl_byte max);
FANCIER_STATIC fcByte3 fcByte3_maxk(fcByte3 x, cl_byte y);
FANCIER_STATIC fcByte3 fcByte3_mink(fcByte3 x, cl_byte y);
FANCIER_STATIC fcByte3 fcByte3_mixk(fcByte3 x, fcByte3 y, cl_byte a);
FANCIER_STATIC fcByte3 fcByte3_absDiff(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_addSat(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_clz(fcByte3 a);
FANCIER_STATIC fcByte3 fcByte3_hadd(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_madHi(fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_STATIC fcByte3 fcByte3_madSat(fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_STATIC fcByte3 fcByte3_mulHi(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_rhadd(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_rotate(fcByte3 a, fcByte3 b);
FANCIER_STATIC fcByte3 fcByte3_subSat(fcByte3 a, fcByte3 b);

FANCIER_STATIC fcByte4 fcByte4_create1(cl_byte v);
FANCIER_STATIC void fcByte4_set1(fcByte4* self, cl_byte v);
FANCIER_STATIC fcByte4 fcByte4_create1111(cl_byte a, cl_byte b, cl_byte c, cl_byte d);
FANCIER_STATIC void fcByte4_set1111(fcByte4* self, cl_byte a, cl_byte b, cl_byte c, cl_byte d);
FANCIER_STATIC fcByte4 fcByte4_create112(cl_byte x, cl_byte y, fcByte2 vec1);
FANCIER_STATIC void fcByte4_set112(fcByte4* self, cl_byte x, cl_byte y, fcByte2 vec1);
FANCIER_STATIC fcByte4 fcByte4_create121(cl_byte x, fcByte2 vec1, cl_byte w);
FANCIER_STATIC void fcByte4_set121(fcByte4* self, cl_byte x, fcByte2 vec1, cl_byte w);
FANCIER_STATIC fcByte4 fcByte4_create13(cl_byte x, fcByte3 vec1);
FANCIER_STATIC void fcByte4_set13(fcByte4* self, cl_byte x, fcByte3 vec1);
FANCIER_STATIC fcByte4 fcByte4_create211(fcByte2 vec1, cl_byte z, cl_byte w);
FANCIER_STATIC void fcByte4_set211(fcByte4* self, fcByte2 vec1, cl_byte z, cl_byte w);
FANCIER_STATIC fcByte4 fcByte4_create22(fcByte2 vec1, fcByte2 vec2);
FANCIER_STATIC void fcByte4_set22(fcByte4* self, fcByte2 vec1, fcByte2 vec2);
FANCIER_STATIC fcByte4 fcByte4_create31(fcByte3 vec1, cl_byte w);
FANCIER_STATIC void fcByte4_set31(fcByte4* self, fcByte3 vec1, cl_byte w);
FANCIER_STATIC fcByte4 fcByte4_create4(fcByte4 vec1);
FANCIER_STATIC void fcByte4_set4(fcByte4* self, fcByte4 vec1);

FANCIER_STATIC fcByte2 fcByte4_odd(fcByte4 a);
FANCIER_STATIC fcByte2 fcByte4_even(fcByte4 a);

FANCIER_STATIC fcShort4 fcByte4_convertShort4(fcByte4 a);
FANCIER_STATIC fcInt4 fcByte4_convertInt4(fcByte4 a);
FANCIER_STATIC fcLong4 fcByte4_convertLong4(fcByte4 a);
FANCIER_STATIC fcFloat4 fcByte4_convertFloat4(fcByte4 a);
FANCIER_STATIC fcDouble4 fcByte4_convertDouble4(fcByte4 a);
FANCIER_STATIC fcByte2 fcByte4_asByte2(fcByte4 a);
FANCIER_STATIC fcByte3 fcByte4_asByte3(fcByte4 a);

FANCIER_STATIC fcInt4 fcByte4_isEqual(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcInt4 fcByte4_isNotEqual(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcInt4 fcByte4_isGreater(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcInt4 fcByte4_isGreaterEqual(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcInt4 fcByte4_isLess(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcInt4 fcByte4_isLessEqual(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_select(fcByte4 a, fcByte4 b, fcInt4 c);

FANCIER_STATIC cl_int fcByte4_any(fcByte4 a);
FANCIER_STATIC cl_int fcByte4_all(fcByte4 a);

FANCIER_STATIC fcByte4 fcByte4_neg(fcByte4 a);
FANCIER_STATIC fcByte4 fcByte4_add(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_sub(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_mul(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcDouble4 fcByte4_muld(fcByte4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcByte4_mulf(fcByte4 a, fcFloat4 b);
FANCIER_STATIC fcByte4 fcByte4_mulk(fcByte4 a, cl_byte k);
FANCIER_STATIC fcDouble4 fcByte4_mulkd(fcByte4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcByte4_mulkf(fcByte4 a, cl_float k);
FANCIER_STATIC fcByte4 fcByte4_div(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcDouble4 fcByte4_divd(fcByte4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcByte4_divf(fcByte4 a, fcFloat4 b);
FANCIER_STATIC fcByte4 fcByte4_divk(fcByte4 a, cl_byte k);
FANCIER_STATIC fcDouble4 fcByte4_divkd(fcByte4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcByte4_divkf(fcByte4 a, cl_float k);
FANCIER_STATIC fcByte4 fcByte4_mod(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_modk(fcByte4 a, cl_byte k);
FANCIER_STATIC fcByte4 fcByte4_bitAnd(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_bitOr(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_bitXor(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_bitNot(fcByte4 a);

FANCIER_STATIC fcByte4 fcByte4_abs(fcByte4 a);
FANCIER_STATIC fcByte4 fcByte4_clamp(fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_STATIC fcByte4 fcByte4_max(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_maxMag(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_min(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_minMag(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_mix(fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_STATIC fcByte4 fcByte4_clampk(fcByte4 v, cl_byte min, cl_byte max);
FANCIER_STATIC fcByte4 fcByte4_maxk(fcByte4 x, cl_byte y);
FANCIER_STATIC fcByte4 fcByte4_mink(fcByte4 x, cl_byte y);
FANCIER_STATIC fcByte4 fcByte4_mixk(fcByte4 x, fcByte4 y, cl_byte a);
FANCIER_STATIC fcByte4 fcByte4_absDiff(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_addSat(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_clz(fcByte4 a);
FANCIER_STATIC fcByte4 fcByte4_hadd(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_madHi(fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_STATIC fcByte4 fcByte4_madSat(fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_STATIC fcByte4 fcByte4_mulHi(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_rhadd(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_rotate(fcByte4 a, fcByte4 b);
FANCIER_STATIC fcByte4 fcByte4_subSat(fcByte4 a, fcByte4 b);

FANCIER_STATIC fcByte8 fcByte8_create1(cl_byte v);
FANCIER_STATIC void fcByte8_set1(fcByte8* self, cl_byte v);
FANCIER_STATIC fcByte8 fcByte8_create11111111(cl_byte a, cl_byte b, cl_byte c, cl_byte d, cl_byte e, cl_byte f, cl_byte g, cl_byte h);
FANCIER_STATIC void fcByte8_set11111111(fcByte8* self, cl_byte a, cl_byte b, cl_byte c, cl_byte d, cl_byte e, cl_byte f, cl_byte g, cl_byte h);
FANCIER_STATIC fcByte8 fcByte8_create1111112(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec1);
FANCIER_STATIC void fcByte8_set1111112(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec1);
FANCIER_STATIC fcByte8 fcByte8_create1111121(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec1, cl_byte s7);
FANCIER_STATIC void fcByte8_set1111121(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec1, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create111113(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec1);
FANCIER_STATIC void fcByte8_set111113(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec1);
FANCIER_STATIC fcByte8 fcByte8_create1111211(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set1111211(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create111122(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set111122(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create111131(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte3 vec1, cl_byte s7);
FANCIER_STATIC void fcByte8_set111131(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte3 vec1, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create11114(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte4 vec1);
FANCIER_STATIC void fcByte8_set11114(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte4 vec1);
FANCIER_STATIC fcByte8 fcByte8_create1112111(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set1112111(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create111212(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set111212(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create111221(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set111221(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create11123(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set11123(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create111311(cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set111311(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create11132(cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set11132(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create11141(cl_byte x, cl_byte y, cl_byte z, fcByte4 vec1, cl_byte s7);
FANCIER_STATIC void fcByte8_set11141(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte4 vec1, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1121111(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set1121111(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create112112(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set112112(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create112121(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set112121(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create11213(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set11213(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create112211(cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set112211(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create11222(cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set11222(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create11231(cl_byte x, cl_byte y, fcByte2 vec1, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set11231(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1124(cl_byte x, cl_byte y, fcByte2 vec1, fcByte4 vec2);
FANCIER_STATIC void fcByte8_set1124(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte4 vec2);
FANCIER_STATIC fcByte8 fcByte8_create113111(cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set113111(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create11312(cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set11312(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create11321(cl_byte x, cl_byte y, fcByte3 vec1, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set11321(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1133(cl_byte x, cl_byte y, fcByte3 vec1, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set1133(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create11411(cl_byte x, cl_byte y, fcByte4 vec1, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set11411(fcByte8* self, cl_byte x, cl_byte y, fcByte4 vec1, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1142(cl_byte x, cl_byte y, fcByte4 vec1, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set1142(fcByte8* self, cl_byte x, cl_byte y, fcByte4 vec1, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create1211111(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set1211111(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create121112(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set121112(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create121121(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set121121(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create12113(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set12113(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create121211(cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set121211(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create12122(cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set12122(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create12131(cl_byte x, fcByte2 vec1, cl_byte w, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set12131(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1214(cl_byte x, fcByte2 vec1, cl_byte w, fcByte4 vec2);
FANCIER_STATIC void fcByte8_set1214(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte4 vec2);
FANCIER_STATIC fcByte8 fcByte8_create122111(cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set122111(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create12212(cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set12212(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create12221(cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC void fcByte8_set12221(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1223(cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3);
FANCIER_STATIC void fcByte8_set1223(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3);
FANCIER_STATIC fcByte8 fcByte8_create12311(cl_byte x, fcByte2 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set12311(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1232(cl_byte x, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set1232(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create1241(cl_byte x, fcByte2 vec1, fcByte4 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set1241(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte4 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create131111(cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set131111(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create13112(cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set13112(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create13121(cl_byte x, fcByte3 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set13121(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1313(cl_byte x, fcByte3 vec1, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set1313(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create13211(cl_byte x, fcByte3 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set13211(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1322(cl_byte x, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set1322(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create1331(cl_byte x, fcByte3 vec1, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set1331(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create134(cl_byte x, fcByte3 vec1, fcByte4 vec2);
FANCIER_STATIC void fcByte8_set134(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte4 vec2);
FANCIER_STATIC fcByte8 fcByte8_create14111(cl_byte x, fcByte4 vec1, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set14111(fcByte8* self, cl_byte x, fcByte4 vec1, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create1412(cl_byte x, fcByte4 vec1, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set1412(fcByte8* self, cl_byte x, fcByte4 vec1, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create1421(cl_byte x, fcByte4 vec1, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set1421(fcByte8* self, cl_byte x, fcByte4 vec1, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create143(cl_byte x, fcByte4 vec1, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set143(fcByte8* self, cl_byte x, fcByte4 vec1, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create2111111(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set2111111(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create211112(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set211112(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create211121(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set211121(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create21113(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set21113(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create211211(fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set211211(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create21122(fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set21122(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create21131(fcByte2 vec1, cl_byte z, cl_byte w, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set21131(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create2114(fcByte2 vec1, cl_byte z, cl_byte w, fcByte4 vec2);
FANCIER_STATIC void fcByte8_set2114(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte4 vec2);
FANCIER_STATIC fcByte8 fcByte8_create212111(fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set212111(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create21212(fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set21212(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create21221(fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC void fcByte8_set21221(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create2123(fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte3 vec3);
FANCIER_STATIC void fcByte8_set2123(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte3 vec3);
FANCIER_STATIC fcByte8 fcByte8_create21311(fcByte2 vec1, cl_byte z, fcByte3 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set21311(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte3 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create2132(fcByte2 vec1, cl_byte z, fcByte3 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set2132(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte3 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create2141(fcByte2 vec1, cl_byte z, fcByte4 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set2141(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte4 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create221111(fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set221111(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create22112(fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set22112(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create22121(fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC void fcByte8_set22121(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create2213(fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte3 vec3);
FANCIER_STATIC void fcByte8_set2213(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte3 vec3);
FANCIER_STATIC fcByte8 fcByte8_create22211(fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set22211(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create2222(fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, fcByte2 vec4);
FANCIER_STATIC void fcByte8_set2222(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, fcByte2 vec4);
FANCIER_STATIC fcByte8 fcByte8_create2231(fcByte2 vec1, fcByte2 vec2, fcByte3 vec3, cl_byte s7);
FANCIER_STATIC void fcByte8_set2231(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create224(fcByte2 vec1, fcByte2 vec2, fcByte4 vec3);
FANCIER_STATIC void fcByte8_set224(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte4 vec3);
FANCIER_STATIC fcByte8 fcByte8_create23111(fcByte2 vec1, fcByte3 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set23111(fcByte8* self, fcByte2 vec1, fcByte3 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create2312(fcByte2 vec1, fcByte3 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set2312(fcByte8* self, fcByte2 vec1, fcByte3 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create2321(fcByte2 vec1, fcByte3 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC void fcByte8_set2321(fcByte8* self, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create233(fcByte2 vec1, fcByte3 vec2, fcByte3 vec3);
FANCIER_STATIC void fcByte8_set233(fcByte8* self, fcByte2 vec1, fcByte3 vec2, fcByte3 vec3);
FANCIER_STATIC fcByte8 fcByte8_create2411(fcByte2 vec1, fcByte4 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set2411(fcByte8* self, fcByte2 vec1, fcByte4 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create242(fcByte2 vec1, fcByte4 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set242(fcByte8* self, fcByte2 vec1, fcByte4 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create311111(fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set311111(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create31112(fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set31112(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create31121(fcByte3 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set31121(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create3113(fcByte3 vec1, cl_byte w, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set3113(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create31211(fcByte3 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set31211(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create3122(fcByte3 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set3122(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create3131(fcByte3 vec1, cl_byte w, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set3131(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create314(fcByte3 vec1, cl_byte w, fcByte4 vec2);
FANCIER_STATIC void fcByte8_set314(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte4 vec2);
FANCIER_STATIC fcByte8 fcByte8_create32111(fcByte3 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set32111(fcByte8* self, fcByte3 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create3212(fcByte3 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set3212(fcByte8* self, fcByte3 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create3221(fcByte3 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC void fcByte8_set3221(fcByte8* self, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create323(fcByte3 vec1, fcByte2 vec2, fcByte3 vec3);
FANCIER_STATIC void fcByte8_set323(fcByte8* self, fcByte3 vec1, fcByte2 vec2, fcByte3 vec3);
FANCIER_STATIC fcByte8 fcByte8_create3311(fcByte3 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set3311(fcByte8* self, fcByte3 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create332(fcByte3 vec1, fcByte3 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set332(fcByte8* self, fcByte3 vec1, fcByte3 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create341(fcByte3 vec1, fcByte4 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set341(fcByte8* self, fcByte3 vec1, fcByte4 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create41111(fcByte4 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set41111(fcByte8* self, fcByte4 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create4112(fcByte4 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC void fcByte8_set4112(fcByte8* self, fcByte4 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2);
FANCIER_STATIC fcByte8 fcByte8_create4121(fcByte4 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set4121(fcByte8* self, fcByte4 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create413(fcByte4 vec1, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC void fcByte8_set413(fcByte8* self, fcByte4 vec1, cl_byte s4, fcByte3 vec2);
FANCIER_STATIC fcByte8 fcByte8_create4211(fcByte4 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC void fcByte8_set4211(fcByte8* self, fcByte4 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create422(fcByte4 vec1, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC void fcByte8_set422(fcByte8* self, fcByte4 vec1, fcByte2 vec2, fcByte2 vec3);
FANCIER_STATIC fcByte8 fcByte8_create431(fcByte4 vec1, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC void fcByte8_set431(fcByte8* self, fcByte4 vec1, fcByte3 vec2, cl_byte s7);
FANCIER_STATIC fcByte8 fcByte8_create44(fcByte4 vec1, fcByte4 vec2);
FANCIER_STATIC void fcByte8_set44(fcByte8* self, fcByte4 vec1, fcByte4 vec2);
FANCIER_STATIC fcByte8 fcByte8_create8(fcByte8 vec1);
FANCIER_STATIC void fcByte8_set8(fcByte8* self, fcByte8 vec1);

FANCIER_STATIC fcByte4 fcByte8_odd(fcByte8 a);
FANCIER_STATIC fcByte4 fcByte8_even(fcByte8 a);

FANCIER_STATIC fcShort8 fcByte8_convertShort8(fcByte8 a);
FANCIER_STATIC fcInt8 fcByte8_convertInt8(fcByte8 a);
FANCIER_STATIC fcLong8 fcByte8_convertLong8(fcByte8 a);
FANCIER_STATIC fcFloat8 fcByte8_convertFloat8(fcByte8 a);
FANCIER_STATIC fcDouble8 fcByte8_convertDouble8(fcByte8 a);
FANCIER_STATIC fcByte2 fcByte8_asByte2(fcByte8 a);
FANCIER_STATIC fcByte3 fcByte8_asByte3(fcByte8 a);
FANCIER_STATIC fcByte4 fcByte8_asByte4(fcByte8 a);

FANCIER_STATIC fcInt8 fcByte8_isEqual(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcInt8 fcByte8_isNotEqual(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcInt8 fcByte8_isGreater(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcInt8 fcByte8_isGreaterEqual(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcInt8 fcByte8_isLess(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcInt8 fcByte8_isLessEqual(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_select(fcByte8 a, fcByte8 b, fcInt8 c);

FANCIER_STATIC cl_int fcByte8_any(fcByte8 a);
FANCIER_STATIC cl_int fcByte8_all(fcByte8 a);

FANCIER_STATIC fcByte8 fcByte8_neg(fcByte8 a);
FANCIER_STATIC fcByte8 fcByte8_add(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_sub(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_mul(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcDouble8 fcByte8_muld(fcByte8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcByte8_mulf(fcByte8 a, fcFloat8 b);
FANCIER_STATIC fcByte8 fcByte8_mulk(fcByte8 a, cl_byte k);
FANCIER_STATIC fcDouble8 fcByte8_mulkd(fcByte8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcByte8_mulkf(fcByte8 a, cl_float k);
FANCIER_STATIC fcByte8 fcByte8_div(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcDouble8 fcByte8_divd(fcByte8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcByte8_divf(fcByte8 a, fcFloat8 b);
FANCIER_STATIC fcByte8 fcByte8_divk(fcByte8 a, cl_byte k);
FANCIER_STATIC fcDouble8 fcByte8_divkd(fcByte8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcByte8_divkf(fcByte8 a, cl_float k);
FANCIER_STATIC fcByte8 fcByte8_mod(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_modk(fcByte8 a, cl_byte k);
FANCIER_STATIC fcByte8 fcByte8_bitAnd(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_bitOr(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_bitXor(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_bitNot(fcByte8 a);

FANCIER_STATIC fcByte8 fcByte8_abs(fcByte8 a);
FANCIER_STATIC fcByte8 fcByte8_clamp(fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_STATIC fcByte8 fcByte8_max(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_maxMag(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_min(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_minMag(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_mix(fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_STATIC fcByte8 fcByte8_clampk(fcByte8 v, cl_byte min, cl_byte max);
FANCIER_STATIC fcByte8 fcByte8_maxk(fcByte8 x, cl_byte y);
FANCIER_STATIC fcByte8 fcByte8_mink(fcByte8 x, cl_byte y);
FANCIER_STATIC fcByte8 fcByte8_mixk(fcByte8 x, fcByte8 y, cl_byte a);
FANCIER_STATIC fcByte8 fcByte8_absDiff(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_addSat(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_clz(fcByte8 a);
FANCIER_STATIC fcByte8 fcByte8_hadd(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_madHi(fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_STATIC fcByte8 fcByte8_madSat(fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_STATIC fcByte8 fcByte8_mulHi(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_rhadd(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_rotate(fcByte8 a, fcByte8 b);
FANCIER_STATIC fcByte8 fcByte8_subSat(fcByte8 a, fcByte8 b);

FANCIER_STATIC fcShort2 fcShort2_create1(cl_short v);
FANCIER_STATIC void fcShort2_set1(fcShort2* self, cl_short v);
FANCIER_STATIC fcShort2 fcShort2_create11(cl_short a, cl_short b);
FANCIER_STATIC void fcShort2_set11(fcShort2* self, cl_short a, cl_short b);
FANCIER_STATIC fcShort2 fcShort2_create2(fcShort2 vec1);
FANCIER_STATIC void fcShort2_set2(fcShort2* self, fcShort2 vec1);

FANCIER_STATIC fcByte2 fcShort2_convertByte2(fcShort2 a);
FANCIER_STATIC fcInt2 fcShort2_convertInt2(fcShort2 a);
FANCIER_STATIC fcLong2 fcShort2_convertLong2(fcShort2 a);
FANCIER_STATIC fcFloat2 fcShort2_convertFloat2(fcShort2 a);
FANCIER_STATIC fcDouble2 fcShort2_convertDouble2(fcShort2 a);

FANCIER_STATIC fcInt2 fcShort2_isEqual(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcInt2 fcShort2_isNotEqual(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcInt2 fcShort2_isGreater(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcInt2 fcShort2_isGreaterEqual(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcInt2 fcShort2_isLess(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcInt2 fcShort2_isLessEqual(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_select(fcShort2 a, fcShort2 b, fcInt2 c);

FANCIER_STATIC cl_int fcShort2_any(fcShort2 a);
FANCIER_STATIC cl_int fcShort2_all(fcShort2 a);

FANCIER_STATIC fcShort2 fcShort2_neg(fcShort2 a);
FANCIER_STATIC fcShort2 fcShort2_add(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_sub(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_mul(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcDouble2 fcShort2_muld(fcShort2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcShort2_mulf(fcShort2 a, fcFloat2 b);
FANCIER_STATIC fcShort2 fcShort2_mulk(fcShort2 a, cl_short k);
FANCIER_STATIC fcDouble2 fcShort2_mulkd(fcShort2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcShort2_mulkf(fcShort2 a, cl_float k);
FANCIER_STATIC fcShort2 fcShort2_div(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcDouble2 fcShort2_divd(fcShort2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcShort2_divf(fcShort2 a, fcFloat2 b);
FANCIER_STATIC fcShort2 fcShort2_divk(fcShort2 a, cl_short k);
FANCIER_STATIC fcDouble2 fcShort2_divkd(fcShort2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcShort2_divkf(fcShort2 a, cl_float k);
FANCIER_STATIC fcShort2 fcShort2_mod(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_modk(fcShort2 a, cl_short k);
FANCIER_STATIC fcShort2 fcShort2_bitAnd(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_bitOr(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_bitXor(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_bitNot(fcShort2 a);

FANCIER_STATIC fcShort2 fcShort2_abs(fcShort2 a);
FANCIER_STATIC fcShort2 fcShort2_clamp(fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_STATIC fcShort2 fcShort2_max(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_maxMag(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_min(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_minMag(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_mix(fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_STATIC fcShort2 fcShort2_clampk(fcShort2 v, cl_short min, cl_short max);
FANCIER_STATIC fcShort2 fcShort2_maxk(fcShort2 x, cl_short y);
FANCIER_STATIC fcShort2 fcShort2_mink(fcShort2 x, cl_short y);
FANCIER_STATIC fcShort2 fcShort2_mixk(fcShort2 x, fcShort2 y, cl_short a);
FANCIER_STATIC fcShort2 fcShort2_absDiff(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_addSat(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_clz(fcShort2 a);
FANCIER_STATIC fcShort2 fcShort2_hadd(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_madHi(fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_STATIC fcShort2 fcShort2_madSat(fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_STATIC fcShort2 fcShort2_mulHi(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_rhadd(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_rotate(fcShort2 a, fcShort2 b);
FANCIER_STATIC fcShort2 fcShort2_subSat(fcShort2 a, fcShort2 b);

FANCIER_STATIC fcShort3 fcShort3_create1(cl_short v);
FANCIER_STATIC void fcShort3_set1(fcShort3* self, cl_short v);
FANCIER_STATIC fcShort3 fcShort3_create111(cl_short a, cl_short b, cl_short c);
FANCIER_STATIC void fcShort3_set111(fcShort3* self, cl_short a, cl_short b, cl_short c);
FANCIER_STATIC fcShort3 fcShort3_create12(cl_short x, fcShort2 vec1);
FANCIER_STATIC void fcShort3_set12(fcShort3* self, cl_short x, fcShort2 vec1);
FANCIER_STATIC fcShort3 fcShort3_create21(fcShort2 vec1, cl_short z);
FANCIER_STATIC void fcShort3_set21(fcShort3* self, fcShort2 vec1, cl_short z);
FANCIER_STATIC fcShort3 fcShort3_create3(fcShort3 vec1);
FANCIER_STATIC void fcShort3_set3(fcShort3* self, fcShort3 vec1);

FANCIER_STATIC fcByte3 fcShort3_convertByte3(fcShort3 a);
FANCIER_STATIC fcInt3 fcShort3_convertInt3(fcShort3 a);
FANCIER_STATIC fcLong3 fcShort3_convertLong3(fcShort3 a);
FANCIER_STATIC fcFloat3 fcShort3_convertFloat3(fcShort3 a);
FANCIER_STATIC fcDouble3 fcShort3_convertDouble3(fcShort3 a);
FANCIER_STATIC fcShort2 fcShort3_asShort2(fcShort3 a);

FANCIER_STATIC fcInt3 fcShort3_isEqual(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcInt3 fcShort3_isNotEqual(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcInt3 fcShort3_isGreater(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcInt3 fcShort3_isGreaterEqual(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcInt3 fcShort3_isLess(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcInt3 fcShort3_isLessEqual(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_select(fcShort3 a, fcShort3 b, fcInt3 c);

FANCIER_STATIC cl_int fcShort3_any(fcShort3 a);
FANCIER_STATIC cl_int fcShort3_all(fcShort3 a);

FANCIER_STATIC fcShort3 fcShort3_neg(fcShort3 a);
FANCIER_STATIC fcShort3 fcShort3_add(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_sub(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_mul(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcDouble3 fcShort3_muld(fcShort3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcShort3_mulf(fcShort3 a, fcFloat3 b);
FANCIER_STATIC fcShort3 fcShort3_mulk(fcShort3 a, cl_short k);
FANCIER_STATIC fcDouble3 fcShort3_mulkd(fcShort3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcShort3_mulkf(fcShort3 a, cl_float k);
FANCIER_STATIC fcShort3 fcShort3_div(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcDouble3 fcShort3_divd(fcShort3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcShort3_divf(fcShort3 a, fcFloat3 b);
FANCIER_STATIC fcShort3 fcShort3_divk(fcShort3 a, cl_short k);
FANCIER_STATIC fcDouble3 fcShort3_divkd(fcShort3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcShort3_divkf(fcShort3 a, cl_float k);
FANCIER_STATIC fcShort3 fcShort3_mod(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_modk(fcShort3 a, cl_short k);
FANCIER_STATIC fcShort3 fcShort3_bitAnd(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_bitOr(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_bitXor(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_bitNot(fcShort3 a);

FANCIER_STATIC fcShort3 fcShort3_abs(fcShort3 a);
FANCIER_STATIC fcShort3 fcShort3_clamp(fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_STATIC fcShort3 fcShort3_max(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_maxMag(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_min(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_minMag(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_mix(fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_STATIC fcShort3 fcShort3_clampk(fcShort3 v, cl_short min, cl_short max);
FANCIER_STATIC fcShort3 fcShort3_maxk(fcShort3 x, cl_short y);
FANCIER_STATIC fcShort3 fcShort3_mink(fcShort3 x, cl_short y);
FANCIER_STATIC fcShort3 fcShort3_mixk(fcShort3 x, fcShort3 y, cl_short a);
FANCIER_STATIC fcShort3 fcShort3_absDiff(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_addSat(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_clz(fcShort3 a);
FANCIER_STATIC fcShort3 fcShort3_hadd(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_madHi(fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_STATIC fcShort3 fcShort3_madSat(fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_STATIC fcShort3 fcShort3_mulHi(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_rhadd(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_rotate(fcShort3 a, fcShort3 b);
FANCIER_STATIC fcShort3 fcShort3_subSat(fcShort3 a, fcShort3 b);

FANCIER_STATIC fcShort4 fcShort4_create1(cl_short v);
FANCIER_STATIC void fcShort4_set1(fcShort4* self, cl_short v);
FANCIER_STATIC fcShort4 fcShort4_create1111(cl_short a, cl_short b, cl_short c, cl_short d);
FANCIER_STATIC void fcShort4_set1111(fcShort4* self, cl_short a, cl_short b, cl_short c, cl_short d);
FANCIER_STATIC fcShort4 fcShort4_create112(cl_short x, cl_short y, fcShort2 vec1);
FANCIER_STATIC void fcShort4_set112(fcShort4* self, cl_short x, cl_short y, fcShort2 vec1);
FANCIER_STATIC fcShort4 fcShort4_create121(cl_short x, fcShort2 vec1, cl_short w);
FANCIER_STATIC void fcShort4_set121(fcShort4* self, cl_short x, fcShort2 vec1, cl_short w);
FANCIER_STATIC fcShort4 fcShort4_create13(cl_short x, fcShort3 vec1);
FANCIER_STATIC void fcShort4_set13(fcShort4* self, cl_short x, fcShort3 vec1);
FANCIER_STATIC fcShort4 fcShort4_create211(fcShort2 vec1, cl_short z, cl_short w);
FANCIER_STATIC void fcShort4_set211(fcShort4* self, fcShort2 vec1, cl_short z, cl_short w);
FANCIER_STATIC fcShort4 fcShort4_create22(fcShort2 vec1, fcShort2 vec2);
FANCIER_STATIC void fcShort4_set22(fcShort4* self, fcShort2 vec1, fcShort2 vec2);
FANCIER_STATIC fcShort4 fcShort4_create31(fcShort3 vec1, cl_short w);
FANCIER_STATIC void fcShort4_set31(fcShort4* self, fcShort3 vec1, cl_short w);
FANCIER_STATIC fcShort4 fcShort4_create4(fcShort4 vec1);
FANCIER_STATIC void fcShort4_set4(fcShort4* self, fcShort4 vec1);

FANCIER_STATIC fcShort2 fcShort4_odd(fcShort4 a);
FANCIER_STATIC fcShort2 fcShort4_even(fcShort4 a);

FANCIER_STATIC fcByte4 fcShort4_convertByte4(fcShort4 a);
FANCIER_STATIC fcInt4 fcShort4_convertInt4(fcShort4 a);
FANCIER_STATIC fcLong4 fcShort4_convertLong4(fcShort4 a);
FANCIER_STATIC fcFloat4 fcShort4_convertFloat4(fcShort4 a);
FANCIER_STATIC fcDouble4 fcShort4_convertDouble4(fcShort4 a);
FANCIER_STATIC fcShort2 fcShort4_asShort2(fcShort4 a);
FANCIER_STATIC fcShort3 fcShort4_asShort3(fcShort4 a);

FANCIER_STATIC fcInt4 fcShort4_isEqual(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcInt4 fcShort4_isNotEqual(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcInt4 fcShort4_isGreater(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcInt4 fcShort4_isGreaterEqual(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcInt4 fcShort4_isLess(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcInt4 fcShort4_isLessEqual(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_select(fcShort4 a, fcShort4 b, fcInt4 c);

FANCIER_STATIC cl_int fcShort4_any(fcShort4 a);
FANCIER_STATIC cl_int fcShort4_all(fcShort4 a);

FANCIER_STATIC fcShort4 fcShort4_neg(fcShort4 a);
FANCIER_STATIC fcShort4 fcShort4_add(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_sub(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_mul(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcDouble4 fcShort4_muld(fcShort4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcShort4_mulf(fcShort4 a, fcFloat4 b);
FANCIER_STATIC fcShort4 fcShort4_mulk(fcShort4 a, cl_short k);
FANCIER_STATIC fcDouble4 fcShort4_mulkd(fcShort4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcShort4_mulkf(fcShort4 a, cl_float k);
FANCIER_STATIC fcShort4 fcShort4_div(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcDouble4 fcShort4_divd(fcShort4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcShort4_divf(fcShort4 a, fcFloat4 b);
FANCIER_STATIC fcShort4 fcShort4_divk(fcShort4 a, cl_short k);
FANCIER_STATIC fcDouble4 fcShort4_divkd(fcShort4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcShort4_divkf(fcShort4 a, cl_float k);
FANCIER_STATIC fcShort4 fcShort4_mod(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_modk(fcShort4 a, cl_short k);
FANCIER_STATIC fcShort4 fcShort4_bitAnd(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_bitOr(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_bitXor(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_bitNot(fcShort4 a);

FANCIER_STATIC fcShort4 fcShort4_abs(fcShort4 a);
FANCIER_STATIC fcShort4 fcShort4_clamp(fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_STATIC fcShort4 fcShort4_max(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_maxMag(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_min(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_minMag(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_mix(fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_STATIC fcShort4 fcShort4_clampk(fcShort4 v, cl_short min, cl_short max);
FANCIER_STATIC fcShort4 fcShort4_maxk(fcShort4 x, cl_short y);
FANCIER_STATIC fcShort4 fcShort4_mink(fcShort4 x, cl_short y);
FANCIER_STATIC fcShort4 fcShort4_mixk(fcShort4 x, fcShort4 y, cl_short a);
FANCIER_STATIC fcShort4 fcShort4_absDiff(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_addSat(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_clz(fcShort4 a);
FANCIER_STATIC fcShort4 fcShort4_hadd(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_madHi(fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_STATIC fcShort4 fcShort4_madSat(fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_STATIC fcShort4 fcShort4_mulHi(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_rhadd(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_rotate(fcShort4 a, fcShort4 b);
FANCIER_STATIC fcShort4 fcShort4_subSat(fcShort4 a, fcShort4 b);

FANCIER_STATIC fcShort8 fcShort8_create1(cl_short v);
FANCIER_STATIC void fcShort8_set1(fcShort8* self, cl_short v);
FANCIER_STATIC fcShort8 fcShort8_create11111111(cl_short a, cl_short b, cl_short c, cl_short d, cl_short e, cl_short f, cl_short g, cl_short h);
FANCIER_STATIC void fcShort8_set11111111(fcShort8* self, cl_short a, cl_short b, cl_short c, cl_short d, cl_short e, cl_short f, cl_short g, cl_short h);
FANCIER_STATIC fcShort8 fcShort8_create1111112(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec1);
FANCIER_STATIC void fcShort8_set1111112(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec1);
FANCIER_STATIC fcShort8 fcShort8_create1111121(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort2 vec1, cl_short s7);
FANCIER_STATIC void fcShort8_set1111121(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort2 vec1, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create111113(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort3 vec1);
FANCIER_STATIC void fcShort8_set111113(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort3 vec1);
FANCIER_STATIC fcShort8 fcShort8_create1111211(cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set1111211(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create111122(cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set111122(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create111131(cl_short x, cl_short y, cl_short z, cl_short w, fcShort3 vec1, cl_short s7);
FANCIER_STATIC void fcShort8_set111131(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort3 vec1, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create11114(cl_short x, cl_short y, cl_short z, cl_short w, fcShort4 vec1);
FANCIER_STATIC void fcShort8_set11114(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort4 vec1);
FANCIER_STATIC fcShort8 fcShort8_create1112111(cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set1112111(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create111212(cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set111212(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create111221(cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set111221(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create11123(cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set11123(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create111311(cl_short x, cl_short y, cl_short z, fcShort3 vec1, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set111311(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort3 vec1, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create11132(cl_short x, cl_short y, cl_short z, fcShort3 vec1, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set11132(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort3 vec1, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create11141(cl_short x, cl_short y, cl_short z, fcShort4 vec1, cl_short s7);
FANCIER_STATIC void fcShort8_set11141(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort4 vec1, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1121111(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set1121111(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create112112(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set112112(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create112121(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set112121(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create11213(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set11213(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create112211(cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set112211(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create11222(cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set11222(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create11231(cl_short x, cl_short y, fcShort2 vec1, fcShort3 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set11231(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort3 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1124(cl_short x, cl_short y, fcShort2 vec1, fcShort4 vec2);
FANCIER_STATIC void fcShort8_set1124(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort4 vec2);
FANCIER_STATIC fcShort8 fcShort8_create113111(cl_short x, cl_short y, fcShort3 vec1, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set113111(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create11312(cl_short x, cl_short y, fcShort3 vec1, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set11312(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create11321(cl_short x, cl_short y, fcShort3 vec1, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set11321(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1133(cl_short x, cl_short y, fcShort3 vec1, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set1133(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create11411(cl_short x, cl_short y, fcShort4 vec1, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set11411(fcShort8* self, cl_short x, cl_short y, fcShort4 vec1, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1142(cl_short x, cl_short y, fcShort4 vec1, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set1142(fcShort8* self, cl_short x, cl_short y, fcShort4 vec1, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create1211111(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set1211111(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create121112(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set121112(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create121121(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set121121(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create12113(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set12113(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create121211(cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set121211(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create12122(cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set12122(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create12131(cl_short x, fcShort2 vec1, cl_short w, fcShort3 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set12131(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort3 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1214(cl_short x, fcShort2 vec1, cl_short w, fcShort4 vec2);
FANCIER_STATIC void fcShort8_set1214(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort4 vec2);
FANCIER_STATIC fcShort8 fcShort8_create122111(cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set122111(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create12212(cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set12212(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create12221(cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC void fcShort8_set12221(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1223(cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3);
FANCIER_STATIC void fcShort8_set1223(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3);
FANCIER_STATIC fcShort8 fcShort8_create12311(cl_short x, fcShort2 vec1, fcShort3 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set12311(fcShort8* self, cl_short x, fcShort2 vec1, fcShort3 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1232(cl_short x, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set1232(fcShort8* self, cl_short x, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create1241(cl_short x, fcShort2 vec1, fcShort4 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set1241(fcShort8* self, cl_short x, fcShort2 vec1, fcShort4 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create131111(cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set131111(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create13112(cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set13112(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create13121(cl_short x, fcShort3 vec1, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set13121(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1313(cl_short x, fcShort3 vec1, cl_short s4, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set1313(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create13211(cl_short x, fcShort3 vec1, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set13211(fcShort8* self, cl_short x, fcShort3 vec1, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1322(cl_short x, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set1322(fcShort8* self, cl_short x, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create1331(cl_short x, fcShort3 vec1, fcShort3 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set1331(fcShort8* self, cl_short x, fcShort3 vec1, fcShort3 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create134(cl_short x, fcShort3 vec1, fcShort4 vec2);
FANCIER_STATIC void fcShort8_set134(fcShort8* self, cl_short x, fcShort3 vec1, fcShort4 vec2);
FANCIER_STATIC fcShort8 fcShort8_create14111(cl_short x, fcShort4 vec1, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set14111(fcShort8* self, cl_short x, fcShort4 vec1, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create1412(cl_short x, fcShort4 vec1, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set1412(fcShort8* self, cl_short x, fcShort4 vec1, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create1421(cl_short x, fcShort4 vec1, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set1421(fcShort8* self, cl_short x, fcShort4 vec1, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create143(cl_short x, fcShort4 vec1, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set143(fcShort8* self, cl_short x, fcShort4 vec1, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create2111111(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set2111111(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create211112(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set211112(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create211121(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set211121(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create21113(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set21113(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create211211(fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set211211(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create21122(fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set21122(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create21131(fcShort2 vec1, cl_short z, cl_short w, fcShort3 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set21131(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort3 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create2114(fcShort2 vec1, cl_short z, cl_short w, fcShort4 vec2);
FANCIER_STATIC void fcShort8_set2114(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort4 vec2);
FANCIER_STATIC fcShort8 fcShort8_create212111(fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set212111(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create21212(fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set21212(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create21221(fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC void fcShort8_set21221(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create2123(fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort3 vec3);
FANCIER_STATIC void fcShort8_set2123(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort3 vec3);
FANCIER_STATIC fcShort8 fcShort8_create21311(fcShort2 vec1, cl_short z, fcShort3 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set21311(fcShort8* self, fcShort2 vec1, cl_short z, fcShort3 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create2132(fcShort2 vec1, cl_short z, fcShort3 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set2132(fcShort8* self, fcShort2 vec1, cl_short z, fcShort3 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create2141(fcShort2 vec1, cl_short z, fcShort4 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set2141(fcShort8* self, fcShort2 vec1, cl_short z, fcShort4 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create221111(fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set221111(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create22112(fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set22112(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create22121(fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort2 vec3, cl_short s7);
FANCIER_STATIC void fcShort8_set22121(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort2 vec3, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create2213(fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort3 vec3);
FANCIER_STATIC void fcShort8_set2213(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort3 vec3);
FANCIER_STATIC fcShort8 fcShort8_create22211(fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set22211(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create2222(fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, fcShort2 vec4);
FANCIER_STATIC void fcShort8_set2222(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, fcShort2 vec4);
FANCIER_STATIC fcShort8 fcShort8_create2231(fcShort2 vec1, fcShort2 vec2, fcShort3 vec3, cl_short s7);
FANCIER_STATIC void fcShort8_set2231(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create224(fcShort2 vec1, fcShort2 vec2, fcShort4 vec3);
FANCIER_STATIC void fcShort8_set224(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort4 vec3);
FANCIER_STATIC fcShort8 fcShort8_create23111(fcShort2 vec1, fcShort3 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set23111(fcShort8* self, fcShort2 vec1, fcShort3 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create2312(fcShort2 vec1, fcShort3 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set2312(fcShort8* self, fcShort2 vec1, fcShort3 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create2321(fcShort2 vec1, fcShort3 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC void fcShort8_set2321(fcShort8* self, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create233(fcShort2 vec1, fcShort3 vec2, fcShort3 vec3);
FANCIER_STATIC void fcShort8_set233(fcShort8* self, fcShort2 vec1, fcShort3 vec2, fcShort3 vec3);
FANCIER_STATIC fcShort8 fcShort8_create2411(fcShort2 vec1, fcShort4 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set2411(fcShort8* self, fcShort2 vec1, fcShort4 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create242(fcShort2 vec1, fcShort4 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set242(fcShort8* self, fcShort2 vec1, fcShort4 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create311111(fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set311111(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create31112(fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set31112(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create31121(fcShort3 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set31121(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create3113(fcShort3 vec1, cl_short w, cl_short s4, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set3113(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create31211(fcShort3 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set31211(fcShort8* self, fcShort3 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create3122(fcShort3 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set3122(fcShort8* self, fcShort3 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create3131(fcShort3 vec1, cl_short w, fcShort3 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set3131(fcShort8* self, fcShort3 vec1, cl_short w, fcShort3 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create314(fcShort3 vec1, cl_short w, fcShort4 vec2);
FANCIER_STATIC void fcShort8_set314(fcShort8* self, fcShort3 vec1, cl_short w, fcShort4 vec2);
FANCIER_STATIC fcShort8 fcShort8_create32111(fcShort3 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set32111(fcShort8* self, fcShort3 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create3212(fcShort3 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set3212(fcShort8* self, fcShort3 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create3221(fcShort3 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC void fcShort8_set3221(fcShort8* self, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create323(fcShort3 vec1, fcShort2 vec2, fcShort3 vec3);
FANCIER_STATIC void fcShort8_set323(fcShort8* self, fcShort3 vec1, fcShort2 vec2, fcShort3 vec3);
FANCIER_STATIC fcShort8 fcShort8_create3311(fcShort3 vec1, fcShort3 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set3311(fcShort8* self, fcShort3 vec1, fcShort3 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create332(fcShort3 vec1, fcShort3 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set332(fcShort8* self, fcShort3 vec1, fcShort3 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create341(fcShort3 vec1, fcShort4 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set341(fcShort8* self, fcShort3 vec1, fcShort4 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create41111(fcShort4 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set41111(fcShort8* self, fcShort4 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create4112(fcShort4 vec1, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC void fcShort8_set4112(fcShort8* self, fcShort4 vec1, cl_short s4, cl_short s5, fcShort2 vec2);
FANCIER_STATIC fcShort8 fcShort8_create4121(fcShort4 vec1, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set4121(fcShort8* self, fcShort4 vec1, cl_short s4, fcShort2 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create413(fcShort4 vec1, cl_short s4, fcShort3 vec2);
FANCIER_STATIC void fcShort8_set413(fcShort8* self, fcShort4 vec1, cl_short s4, fcShort3 vec2);
FANCIER_STATIC fcShort8 fcShort8_create4211(fcShort4 vec1, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC void fcShort8_set4211(fcShort8* self, fcShort4 vec1, fcShort2 vec2, cl_short s6, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create422(fcShort4 vec1, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC void fcShort8_set422(fcShort8* self, fcShort4 vec1, fcShort2 vec2, fcShort2 vec3);
FANCIER_STATIC fcShort8 fcShort8_create431(fcShort4 vec1, fcShort3 vec2, cl_short s7);
FANCIER_STATIC void fcShort8_set431(fcShort8* self, fcShort4 vec1, fcShort3 vec2, cl_short s7);
FANCIER_STATIC fcShort8 fcShort8_create44(fcShort4 vec1, fcShort4 vec2);
FANCIER_STATIC void fcShort8_set44(fcShort8* self, fcShort4 vec1, fcShort4 vec2);
FANCIER_STATIC fcShort8 fcShort8_create8(fcShort8 vec1);
FANCIER_STATIC void fcShort8_set8(fcShort8* self, fcShort8 vec1);

FANCIER_STATIC fcShort4 fcShort8_odd(fcShort8 a);
FANCIER_STATIC fcShort4 fcShort8_even(fcShort8 a);

FANCIER_STATIC fcByte8 fcShort8_convertByte8(fcShort8 a);
FANCIER_STATIC fcInt8 fcShort8_convertInt8(fcShort8 a);
FANCIER_STATIC fcLong8 fcShort8_convertLong8(fcShort8 a);
FANCIER_STATIC fcFloat8 fcShort8_convertFloat8(fcShort8 a);
FANCIER_STATIC fcDouble8 fcShort8_convertDouble8(fcShort8 a);
FANCIER_STATIC fcShort2 fcShort8_asShort2(fcShort8 a);
FANCIER_STATIC fcShort3 fcShort8_asShort3(fcShort8 a);
FANCIER_STATIC fcShort4 fcShort8_asShort4(fcShort8 a);

FANCIER_STATIC fcInt8 fcShort8_isEqual(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcInt8 fcShort8_isNotEqual(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcInt8 fcShort8_isGreater(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcInt8 fcShort8_isGreaterEqual(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcInt8 fcShort8_isLess(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcInt8 fcShort8_isLessEqual(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_select(fcShort8 a, fcShort8 b, fcInt8 c);

FANCIER_STATIC cl_int fcShort8_any(fcShort8 a);
FANCIER_STATIC cl_int fcShort8_all(fcShort8 a);

FANCIER_STATIC fcShort8 fcShort8_neg(fcShort8 a);
FANCIER_STATIC fcShort8 fcShort8_add(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_sub(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_mul(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcDouble8 fcShort8_muld(fcShort8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcShort8_mulf(fcShort8 a, fcFloat8 b);
FANCIER_STATIC fcShort8 fcShort8_mulk(fcShort8 a, cl_short k);
FANCIER_STATIC fcDouble8 fcShort8_mulkd(fcShort8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcShort8_mulkf(fcShort8 a, cl_float k);
FANCIER_STATIC fcShort8 fcShort8_div(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcDouble8 fcShort8_divd(fcShort8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcShort8_divf(fcShort8 a, fcFloat8 b);
FANCIER_STATIC fcShort8 fcShort8_divk(fcShort8 a, cl_short k);
FANCIER_STATIC fcDouble8 fcShort8_divkd(fcShort8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcShort8_divkf(fcShort8 a, cl_float k);
FANCIER_STATIC fcShort8 fcShort8_mod(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_modk(fcShort8 a, cl_short k);
FANCIER_STATIC fcShort8 fcShort8_bitAnd(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_bitOr(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_bitXor(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_bitNot(fcShort8 a);

FANCIER_STATIC fcShort8 fcShort8_abs(fcShort8 a);
FANCIER_STATIC fcShort8 fcShort8_clamp(fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_STATIC fcShort8 fcShort8_max(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_maxMag(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_min(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_minMag(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_mix(fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_STATIC fcShort8 fcShort8_clampk(fcShort8 v, cl_short min, cl_short max);
FANCIER_STATIC fcShort8 fcShort8_maxk(fcShort8 x, cl_short y);
FANCIER_STATIC fcShort8 fcShort8_mink(fcShort8 x, cl_short y);
FANCIER_STATIC fcShort8 fcShort8_mixk(fcShort8 x, fcShort8 y, cl_short a);
FANCIER_STATIC fcShort8 fcShort8_absDiff(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_addSat(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_clz(fcShort8 a);
FANCIER_STATIC fcShort8 fcShort8_hadd(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_madHi(fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_STATIC fcShort8 fcShort8_madSat(fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_STATIC fcShort8 fcShort8_mulHi(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_rhadd(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_rotate(fcShort8 a, fcShort8 b);
FANCIER_STATIC fcShort8 fcShort8_subSat(fcShort8 a, fcShort8 b);

FANCIER_STATIC fcInt2 fcInt2_create1(cl_int v);
FANCIER_STATIC void fcInt2_set1(fcInt2* self, cl_int v);
FANCIER_STATIC fcInt2 fcInt2_create11(cl_int a, cl_int b);
FANCIER_STATIC void fcInt2_set11(fcInt2* self, cl_int a, cl_int b);
FANCIER_STATIC fcInt2 fcInt2_create2(fcInt2 vec1);
FANCIER_STATIC void fcInt2_set2(fcInt2* self, fcInt2 vec1);

FANCIER_STATIC fcByte2 fcInt2_convertByte2(fcInt2 a);
FANCIER_STATIC fcShort2 fcInt2_convertShort2(fcInt2 a);
FANCIER_STATIC fcLong2 fcInt2_convertLong2(fcInt2 a);
FANCIER_STATIC fcFloat2 fcInt2_convertFloat2(fcInt2 a);
FANCIER_STATIC fcDouble2 fcInt2_convertDouble2(fcInt2 a);

FANCIER_STATIC fcInt2 fcInt2_isEqual(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_isNotEqual(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_isGreater(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_isGreaterEqual(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_isLess(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_isLessEqual(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_select(fcInt2 a, fcInt2 b, fcInt2 c);

FANCIER_STATIC cl_int fcInt2_any(fcInt2 a);
FANCIER_STATIC cl_int fcInt2_all(fcInt2 a);

FANCIER_STATIC fcInt2 fcInt2_neg(fcInt2 a);
FANCIER_STATIC fcInt2 fcInt2_add(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_sub(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_mul(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcDouble2 fcInt2_muld(fcInt2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcInt2_mulf(fcInt2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcInt2_mulk(fcInt2 a, cl_int k);
FANCIER_STATIC fcDouble2 fcInt2_mulkd(fcInt2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcInt2_mulkf(fcInt2 a, cl_float k);
FANCIER_STATIC fcInt2 fcInt2_div(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcDouble2 fcInt2_divd(fcInt2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcInt2_divf(fcInt2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcInt2_divk(fcInt2 a, cl_int k);
FANCIER_STATIC fcDouble2 fcInt2_divkd(fcInt2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcInt2_divkf(fcInt2 a, cl_float k);
FANCIER_STATIC fcInt2 fcInt2_mod(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_modk(fcInt2 a, cl_int k);
FANCIER_STATIC fcInt2 fcInt2_bitAnd(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_bitOr(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_bitXor(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_bitNot(fcInt2 a);

FANCIER_STATIC fcInt2 fcInt2_abs(fcInt2 a);
FANCIER_STATIC fcInt2 fcInt2_clamp(fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcInt2_max(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_maxMag(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_min(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_minMag(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_mix(fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcInt2_clampk(fcInt2 v, cl_int min, cl_int max);
FANCIER_STATIC fcInt2 fcInt2_maxk(fcInt2 x, cl_int y);
FANCIER_STATIC fcInt2 fcInt2_mink(fcInt2 x, cl_int y);
FANCIER_STATIC fcInt2 fcInt2_mixk(fcInt2 x, fcInt2 y, cl_int a);
FANCIER_STATIC fcInt2 fcInt2_absDiff(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_addSat(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_clz(fcInt2 a);
FANCIER_STATIC fcInt2 fcInt2_hadd(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_madHi(fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcInt2_madSat(fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcInt2_mulHi(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_rhadd(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_rotate(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_subSat(fcInt2 a, fcInt2 b);
FANCIER_STATIC fcInt2 fcInt2_mad24(fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcInt2_mul24(fcInt2 a, fcInt2 b);

FANCIER_STATIC fcInt3 fcInt3_create1(cl_int v);
FANCIER_STATIC void fcInt3_set1(fcInt3* self, cl_int v);
FANCIER_STATIC fcInt3 fcInt3_create111(cl_int a, cl_int b, cl_int c);
FANCIER_STATIC void fcInt3_set111(fcInt3* self, cl_int a, cl_int b, cl_int c);
FANCIER_STATIC fcInt3 fcInt3_create12(cl_int x, fcInt2 vec1);
FANCIER_STATIC void fcInt3_set12(fcInt3* self, cl_int x, fcInt2 vec1);
FANCIER_STATIC fcInt3 fcInt3_create21(fcInt2 vec1, cl_int z);
FANCIER_STATIC void fcInt3_set21(fcInt3* self, fcInt2 vec1, cl_int z);
FANCIER_STATIC fcInt3 fcInt3_create3(fcInt3 vec1);
FANCIER_STATIC void fcInt3_set3(fcInt3* self, fcInt3 vec1);

FANCIER_STATIC fcByte3 fcInt3_convertByte3(fcInt3 a);
FANCIER_STATIC fcShort3 fcInt3_convertShort3(fcInt3 a);
FANCIER_STATIC fcLong3 fcInt3_convertLong3(fcInt3 a);
FANCIER_STATIC fcFloat3 fcInt3_convertFloat3(fcInt3 a);
FANCIER_STATIC fcDouble3 fcInt3_convertDouble3(fcInt3 a);
FANCIER_STATIC fcInt2 fcInt3_asInt2(fcInt3 a);

FANCIER_STATIC fcInt3 fcInt3_isEqual(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_isNotEqual(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_isGreater(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_isGreaterEqual(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_isLess(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_isLessEqual(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_select(fcInt3 a, fcInt3 b, fcInt3 c);

FANCIER_STATIC cl_int fcInt3_any(fcInt3 a);
FANCIER_STATIC cl_int fcInt3_all(fcInt3 a);

FANCIER_STATIC fcInt3 fcInt3_neg(fcInt3 a);
FANCIER_STATIC fcInt3 fcInt3_add(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_sub(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_mul(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcDouble3 fcInt3_muld(fcInt3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcInt3_mulf(fcInt3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcInt3_mulk(fcInt3 a, cl_int k);
FANCIER_STATIC fcDouble3 fcInt3_mulkd(fcInt3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcInt3_mulkf(fcInt3 a, cl_float k);
FANCIER_STATIC fcInt3 fcInt3_div(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcDouble3 fcInt3_divd(fcInt3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcInt3_divf(fcInt3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcInt3_divk(fcInt3 a, cl_int k);
FANCIER_STATIC fcDouble3 fcInt3_divkd(fcInt3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcInt3_divkf(fcInt3 a, cl_float k);
FANCIER_STATIC fcInt3 fcInt3_mod(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_modk(fcInt3 a, cl_int k);
FANCIER_STATIC fcInt3 fcInt3_bitAnd(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_bitOr(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_bitXor(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_bitNot(fcInt3 a);

FANCIER_STATIC fcInt3 fcInt3_abs(fcInt3 a);
FANCIER_STATIC fcInt3 fcInt3_clamp(fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcInt3_max(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_maxMag(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_min(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_minMag(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_mix(fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcInt3_clampk(fcInt3 v, cl_int min, cl_int max);
FANCIER_STATIC fcInt3 fcInt3_maxk(fcInt3 x, cl_int y);
FANCIER_STATIC fcInt3 fcInt3_mink(fcInt3 x, cl_int y);
FANCIER_STATIC fcInt3 fcInt3_mixk(fcInt3 x, fcInt3 y, cl_int a);
FANCIER_STATIC fcInt3 fcInt3_absDiff(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_addSat(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_clz(fcInt3 a);
FANCIER_STATIC fcInt3 fcInt3_hadd(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_madHi(fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcInt3_madSat(fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcInt3_mulHi(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_rhadd(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_rotate(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_subSat(fcInt3 a, fcInt3 b);
FANCIER_STATIC fcInt3 fcInt3_mad24(fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcInt3_mul24(fcInt3 a, fcInt3 b);

FANCIER_STATIC fcInt4 fcInt4_create1(cl_int v);
FANCIER_STATIC void fcInt4_set1(fcInt4* self, cl_int v);
FANCIER_STATIC fcInt4 fcInt4_create1111(cl_int a, cl_int b, cl_int c, cl_int d);
FANCIER_STATIC void fcInt4_set1111(fcInt4* self, cl_int a, cl_int b, cl_int c, cl_int d);
FANCIER_STATIC fcInt4 fcInt4_create112(cl_int x, cl_int y, fcInt2 vec1);
FANCIER_STATIC void fcInt4_set112(fcInt4* self, cl_int x, cl_int y, fcInt2 vec1);
FANCIER_STATIC fcInt4 fcInt4_create121(cl_int x, fcInt2 vec1, cl_int w);
FANCIER_STATIC void fcInt4_set121(fcInt4* self, cl_int x, fcInt2 vec1, cl_int w);
FANCIER_STATIC fcInt4 fcInt4_create13(cl_int x, fcInt3 vec1);
FANCIER_STATIC void fcInt4_set13(fcInt4* self, cl_int x, fcInt3 vec1);
FANCIER_STATIC fcInt4 fcInt4_create211(fcInt2 vec1, cl_int z, cl_int w);
FANCIER_STATIC void fcInt4_set211(fcInt4* self, fcInt2 vec1, cl_int z, cl_int w);
FANCIER_STATIC fcInt4 fcInt4_create22(fcInt2 vec1, fcInt2 vec2);
FANCIER_STATIC void fcInt4_set22(fcInt4* self, fcInt2 vec1, fcInt2 vec2);
FANCIER_STATIC fcInt4 fcInt4_create31(fcInt3 vec1, cl_int w);
FANCIER_STATIC void fcInt4_set31(fcInt4* self, fcInt3 vec1, cl_int w);
FANCIER_STATIC fcInt4 fcInt4_create4(fcInt4 vec1);
FANCIER_STATIC void fcInt4_set4(fcInt4* self, fcInt4 vec1);

FANCIER_STATIC fcInt2 fcInt4_odd(fcInt4 a);
FANCIER_STATIC fcInt2 fcInt4_even(fcInt4 a);

FANCIER_STATIC fcByte4 fcInt4_convertByte4(fcInt4 a);
FANCIER_STATIC fcShort4 fcInt4_convertShort4(fcInt4 a);
FANCIER_STATIC fcLong4 fcInt4_convertLong4(fcInt4 a);
FANCIER_STATIC fcFloat4 fcInt4_convertFloat4(fcInt4 a);
FANCIER_STATIC fcDouble4 fcInt4_convertDouble4(fcInt4 a);
FANCIER_STATIC fcInt2 fcInt4_asInt2(fcInt4 a);
FANCIER_STATIC fcInt3 fcInt4_asInt3(fcInt4 a);

FANCIER_STATIC fcInt4 fcInt4_isEqual(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_isNotEqual(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_isGreater(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_isGreaterEqual(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_isLess(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_isLessEqual(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_select(fcInt4 a, fcInt4 b, fcInt4 c);

FANCIER_STATIC cl_int fcInt4_any(fcInt4 a);
FANCIER_STATIC cl_int fcInt4_all(fcInt4 a);

FANCIER_STATIC fcInt4 fcInt4_neg(fcInt4 a);
FANCIER_STATIC fcInt4 fcInt4_add(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_sub(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_mul(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcDouble4 fcInt4_muld(fcInt4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcInt4_mulf(fcInt4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcInt4_mulk(fcInt4 a, cl_int k);
FANCIER_STATIC fcDouble4 fcInt4_mulkd(fcInt4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcInt4_mulkf(fcInt4 a, cl_float k);
FANCIER_STATIC fcInt4 fcInt4_div(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcDouble4 fcInt4_divd(fcInt4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcInt4_divf(fcInt4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcInt4_divk(fcInt4 a, cl_int k);
FANCIER_STATIC fcDouble4 fcInt4_divkd(fcInt4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcInt4_divkf(fcInt4 a, cl_float k);
FANCIER_STATIC fcInt4 fcInt4_mod(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_modk(fcInt4 a, cl_int k);
FANCIER_STATIC fcInt4 fcInt4_bitAnd(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_bitOr(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_bitXor(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_bitNot(fcInt4 a);

FANCIER_STATIC fcInt4 fcInt4_abs(fcInt4 a);
FANCIER_STATIC fcInt4 fcInt4_clamp(fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcInt4_max(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_maxMag(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_min(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_minMag(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_mix(fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcInt4_clampk(fcInt4 v, cl_int min, cl_int max);
FANCIER_STATIC fcInt4 fcInt4_maxk(fcInt4 x, cl_int y);
FANCIER_STATIC fcInt4 fcInt4_mink(fcInt4 x, cl_int y);
FANCIER_STATIC fcInt4 fcInt4_mixk(fcInt4 x, fcInt4 y, cl_int a);
FANCIER_STATIC fcInt4 fcInt4_absDiff(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_addSat(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_clz(fcInt4 a);
FANCIER_STATIC fcInt4 fcInt4_hadd(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_madHi(fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcInt4_madSat(fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcInt4_mulHi(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_rhadd(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_rotate(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_subSat(fcInt4 a, fcInt4 b);
FANCIER_STATIC fcInt4 fcInt4_mad24(fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcInt4_mul24(fcInt4 a, fcInt4 b);

FANCIER_STATIC fcInt8 fcInt8_create1(cl_int v);
FANCIER_STATIC void fcInt8_set1(fcInt8* self, cl_int v);
FANCIER_STATIC fcInt8 fcInt8_create11111111(cl_int a, cl_int b, cl_int c, cl_int d, cl_int e, cl_int f, cl_int g, cl_int h);
FANCIER_STATIC void fcInt8_set11111111(fcInt8* self, cl_int a, cl_int b, cl_int c, cl_int d, cl_int e, cl_int f, cl_int g, cl_int h);
FANCIER_STATIC fcInt8 fcInt8_create1111112(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec1);
FANCIER_STATIC void fcInt8_set1111112(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec1);
FANCIER_STATIC fcInt8 fcInt8_create1111121(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt2 vec1, cl_int s7);
FANCIER_STATIC void fcInt8_set1111121(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt2 vec1, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create111113(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt3 vec1);
FANCIER_STATIC void fcInt8_set111113(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt3 vec1);
FANCIER_STATIC fcInt8 fcInt8_create1111211(cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set1111211(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create111122(cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set111122(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create111131(cl_int x, cl_int y, cl_int z, cl_int w, fcInt3 vec1, cl_int s7);
FANCIER_STATIC void fcInt8_set111131(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt3 vec1, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create11114(cl_int x, cl_int y, cl_int z, cl_int w, fcInt4 vec1);
FANCIER_STATIC void fcInt8_set11114(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt4 vec1);
FANCIER_STATIC fcInt8 fcInt8_create1112111(cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set1112111(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create111212(cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set111212(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create111221(cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set111221(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create11123(cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set11123(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create111311(cl_int x, cl_int y, cl_int z, fcInt3 vec1, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set111311(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt3 vec1, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create11132(cl_int x, cl_int y, cl_int z, fcInt3 vec1, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set11132(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt3 vec1, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create11141(cl_int x, cl_int y, cl_int z, fcInt4 vec1, cl_int s7);
FANCIER_STATIC void fcInt8_set11141(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt4 vec1, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1121111(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set1121111(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create112112(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set112112(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create112121(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set112121(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create11213(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set11213(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create112211(cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set112211(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create11222(cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set11222(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create11231(cl_int x, cl_int y, fcInt2 vec1, fcInt3 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set11231(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt3 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1124(cl_int x, cl_int y, fcInt2 vec1, fcInt4 vec2);
FANCIER_STATIC void fcInt8_set1124(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt4 vec2);
FANCIER_STATIC fcInt8 fcInt8_create113111(cl_int x, cl_int y, fcInt3 vec1, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set113111(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create11312(cl_int x, cl_int y, fcInt3 vec1, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set11312(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create11321(cl_int x, cl_int y, fcInt3 vec1, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set11321(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1133(cl_int x, cl_int y, fcInt3 vec1, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set1133(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create11411(cl_int x, cl_int y, fcInt4 vec1, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set11411(fcInt8* self, cl_int x, cl_int y, fcInt4 vec1, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1142(cl_int x, cl_int y, fcInt4 vec1, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set1142(fcInt8* self, cl_int x, cl_int y, fcInt4 vec1, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create1211111(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set1211111(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create121112(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set121112(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create121121(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set121121(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create12113(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set12113(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create121211(cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set121211(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create12122(cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set12122(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create12131(cl_int x, fcInt2 vec1, cl_int w, fcInt3 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set12131(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt3 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1214(cl_int x, fcInt2 vec1, cl_int w, fcInt4 vec2);
FANCIER_STATIC void fcInt8_set1214(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt4 vec2);
FANCIER_STATIC fcInt8 fcInt8_create122111(cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set122111(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create12212(cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set12212(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create12221(cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC void fcInt8_set12221(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1223(cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3);
FANCIER_STATIC void fcInt8_set1223(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3);
FANCIER_STATIC fcInt8 fcInt8_create12311(cl_int x, fcInt2 vec1, fcInt3 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set12311(fcInt8* self, cl_int x, fcInt2 vec1, fcInt3 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1232(cl_int x, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set1232(fcInt8* self, cl_int x, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create1241(cl_int x, fcInt2 vec1, fcInt4 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set1241(fcInt8* self, cl_int x, fcInt2 vec1, fcInt4 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create131111(cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set131111(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create13112(cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set13112(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create13121(cl_int x, fcInt3 vec1, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set13121(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1313(cl_int x, fcInt3 vec1, cl_int s4, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set1313(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create13211(cl_int x, fcInt3 vec1, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set13211(fcInt8* self, cl_int x, fcInt3 vec1, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1322(cl_int x, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set1322(fcInt8* self, cl_int x, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create1331(cl_int x, fcInt3 vec1, fcInt3 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set1331(fcInt8* self, cl_int x, fcInt3 vec1, fcInt3 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create134(cl_int x, fcInt3 vec1, fcInt4 vec2);
FANCIER_STATIC void fcInt8_set134(fcInt8* self, cl_int x, fcInt3 vec1, fcInt4 vec2);
FANCIER_STATIC fcInt8 fcInt8_create14111(cl_int x, fcInt4 vec1, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set14111(fcInt8* self, cl_int x, fcInt4 vec1, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create1412(cl_int x, fcInt4 vec1, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set1412(fcInt8* self, cl_int x, fcInt4 vec1, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create1421(cl_int x, fcInt4 vec1, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set1421(fcInt8* self, cl_int x, fcInt4 vec1, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create143(cl_int x, fcInt4 vec1, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set143(fcInt8* self, cl_int x, fcInt4 vec1, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create2111111(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set2111111(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create211112(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set211112(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create211121(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set211121(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create21113(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set21113(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create211211(fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set211211(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create21122(fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set21122(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create21131(fcInt2 vec1, cl_int z, cl_int w, fcInt3 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set21131(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt3 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create2114(fcInt2 vec1, cl_int z, cl_int w, fcInt4 vec2);
FANCIER_STATIC void fcInt8_set2114(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt4 vec2);
FANCIER_STATIC fcInt8 fcInt8_create212111(fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set212111(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create21212(fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set21212(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create21221(fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC void fcInt8_set21221(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create2123(fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt3 vec3);
FANCIER_STATIC void fcInt8_set2123(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt3 vec3);
FANCIER_STATIC fcInt8 fcInt8_create21311(fcInt2 vec1, cl_int z, fcInt3 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set21311(fcInt8* self, fcInt2 vec1, cl_int z, fcInt3 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create2132(fcInt2 vec1, cl_int z, fcInt3 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set2132(fcInt8* self, fcInt2 vec1, cl_int z, fcInt3 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create2141(fcInt2 vec1, cl_int z, fcInt4 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set2141(fcInt8* self, fcInt2 vec1, cl_int z, fcInt4 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create221111(fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set221111(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create22112(fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set22112(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create22121(fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt2 vec3, cl_int s7);
FANCIER_STATIC void fcInt8_set22121(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt2 vec3, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create2213(fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt3 vec3);
FANCIER_STATIC void fcInt8_set2213(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt3 vec3);
FANCIER_STATIC fcInt8 fcInt8_create22211(fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set22211(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create2222(fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, fcInt2 vec4);
FANCIER_STATIC void fcInt8_set2222(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, fcInt2 vec4);
FANCIER_STATIC fcInt8 fcInt8_create2231(fcInt2 vec1, fcInt2 vec2, fcInt3 vec3, cl_int s7);
FANCIER_STATIC void fcInt8_set2231(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create224(fcInt2 vec1, fcInt2 vec2, fcInt4 vec3);
FANCIER_STATIC void fcInt8_set224(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt4 vec3);
FANCIER_STATIC fcInt8 fcInt8_create23111(fcInt2 vec1, fcInt3 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set23111(fcInt8* self, fcInt2 vec1, fcInt3 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create2312(fcInt2 vec1, fcInt3 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set2312(fcInt8* self, fcInt2 vec1, fcInt3 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create2321(fcInt2 vec1, fcInt3 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC void fcInt8_set2321(fcInt8* self, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create233(fcInt2 vec1, fcInt3 vec2, fcInt3 vec3);
FANCIER_STATIC void fcInt8_set233(fcInt8* self, fcInt2 vec1, fcInt3 vec2, fcInt3 vec3);
FANCIER_STATIC fcInt8 fcInt8_create2411(fcInt2 vec1, fcInt4 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set2411(fcInt8* self, fcInt2 vec1, fcInt4 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create242(fcInt2 vec1, fcInt4 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set242(fcInt8* self, fcInt2 vec1, fcInt4 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create311111(fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set311111(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create31112(fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set31112(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create31121(fcInt3 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set31121(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create3113(fcInt3 vec1, cl_int w, cl_int s4, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set3113(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create31211(fcInt3 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set31211(fcInt8* self, fcInt3 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create3122(fcInt3 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set3122(fcInt8* self, fcInt3 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create3131(fcInt3 vec1, cl_int w, fcInt3 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set3131(fcInt8* self, fcInt3 vec1, cl_int w, fcInt3 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create314(fcInt3 vec1, cl_int w, fcInt4 vec2);
FANCIER_STATIC void fcInt8_set314(fcInt8* self, fcInt3 vec1, cl_int w, fcInt4 vec2);
FANCIER_STATIC fcInt8 fcInt8_create32111(fcInt3 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set32111(fcInt8* self, fcInt3 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create3212(fcInt3 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set3212(fcInt8* self, fcInt3 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create3221(fcInt3 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC void fcInt8_set3221(fcInt8* self, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create323(fcInt3 vec1, fcInt2 vec2, fcInt3 vec3);
FANCIER_STATIC void fcInt8_set323(fcInt8* self, fcInt3 vec1, fcInt2 vec2, fcInt3 vec3);
FANCIER_STATIC fcInt8 fcInt8_create3311(fcInt3 vec1, fcInt3 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set3311(fcInt8* self, fcInt3 vec1, fcInt3 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create332(fcInt3 vec1, fcInt3 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set332(fcInt8* self, fcInt3 vec1, fcInt3 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create341(fcInt3 vec1, fcInt4 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set341(fcInt8* self, fcInt3 vec1, fcInt4 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create41111(fcInt4 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set41111(fcInt8* self, fcInt4 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create4112(fcInt4 vec1, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC void fcInt8_set4112(fcInt8* self, fcInt4 vec1, cl_int s4, cl_int s5, fcInt2 vec2);
FANCIER_STATIC fcInt8 fcInt8_create4121(fcInt4 vec1, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set4121(fcInt8* self, fcInt4 vec1, cl_int s4, fcInt2 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create413(fcInt4 vec1, cl_int s4, fcInt3 vec2);
FANCIER_STATIC void fcInt8_set413(fcInt8* self, fcInt4 vec1, cl_int s4, fcInt3 vec2);
FANCIER_STATIC fcInt8 fcInt8_create4211(fcInt4 vec1, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC void fcInt8_set4211(fcInt8* self, fcInt4 vec1, fcInt2 vec2, cl_int s6, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create422(fcInt4 vec1, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC void fcInt8_set422(fcInt8* self, fcInt4 vec1, fcInt2 vec2, fcInt2 vec3);
FANCIER_STATIC fcInt8 fcInt8_create431(fcInt4 vec1, fcInt3 vec2, cl_int s7);
FANCIER_STATIC void fcInt8_set431(fcInt8* self, fcInt4 vec1, fcInt3 vec2, cl_int s7);
FANCIER_STATIC fcInt8 fcInt8_create44(fcInt4 vec1, fcInt4 vec2);
FANCIER_STATIC void fcInt8_set44(fcInt8* self, fcInt4 vec1, fcInt4 vec2);
FANCIER_STATIC fcInt8 fcInt8_create8(fcInt8 vec1);
FANCIER_STATIC void fcInt8_set8(fcInt8* self, fcInt8 vec1);

FANCIER_STATIC fcInt4 fcInt8_odd(fcInt8 a);
FANCIER_STATIC fcInt4 fcInt8_even(fcInt8 a);

FANCIER_STATIC fcByte8 fcInt8_convertByte8(fcInt8 a);
FANCIER_STATIC fcShort8 fcInt8_convertShort8(fcInt8 a);
FANCIER_STATIC fcLong8 fcInt8_convertLong8(fcInt8 a);
FANCIER_STATIC fcFloat8 fcInt8_convertFloat8(fcInt8 a);
FANCIER_STATIC fcDouble8 fcInt8_convertDouble8(fcInt8 a);
FANCIER_STATIC fcInt2 fcInt8_asInt2(fcInt8 a);
FANCIER_STATIC fcInt3 fcInt8_asInt3(fcInt8 a);
FANCIER_STATIC fcInt4 fcInt8_asInt4(fcInt8 a);

FANCIER_STATIC fcInt8 fcInt8_isEqual(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_isNotEqual(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_isGreater(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_isGreaterEqual(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_isLess(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_isLessEqual(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_select(fcInt8 a, fcInt8 b, fcInt8 c);

FANCIER_STATIC cl_int fcInt8_any(fcInt8 a);
FANCIER_STATIC cl_int fcInt8_all(fcInt8 a);

FANCIER_STATIC fcInt8 fcInt8_neg(fcInt8 a);
FANCIER_STATIC fcInt8 fcInt8_add(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_sub(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_mul(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcDouble8 fcInt8_muld(fcInt8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcInt8_mulf(fcInt8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcInt8_mulk(fcInt8 a, cl_int k);
FANCIER_STATIC fcDouble8 fcInt8_mulkd(fcInt8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcInt8_mulkf(fcInt8 a, cl_float k);
FANCIER_STATIC fcInt8 fcInt8_div(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcDouble8 fcInt8_divd(fcInt8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcInt8_divf(fcInt8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcInt8_divk(fcInt8 a, cl_int k);
FANCIER_STATIC fcDouble8 fcInt8_divkd(fcInt8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcInt8_divkf(fcInt8 a, cl_float k);
FANCIER_STATIC fcInt8 fcInt8_mod(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_modk(fcInt8 a, cl_int k);
FANCIER_STATIC fcInt8 fcInt8_bitAnd(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_bitOr(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_bitXor(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_bitNot(fcInt8 a);

FANCIER_STATIC fcInt8 fcInt8_abs(fcInt8 a);
FANCIER_STATIC fcInt8 fcInt8_clamp(fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcInt8_max(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_maxMag(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_min(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_minMag(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_mix(fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcInt8_clampk(fcInt8 v, cl_int min, cl_int max);
FANCIER_STATIC fcInt8 fcInt8_maxk(fcInt8 x, cl_int y);
FANCIER_STATIC fcInt8 fcInt8_mink(fcInt8 x, cl_int y);
FANCIER_STATIC fcInt8 fcInt8_mixk(fcInt8 x, fcInt8 y, cl_int a);
FANCIER_STATIC fcInt8 fcInt8_absDiff(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_addSat(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_clz(fcInt8 a);
FANCIER_STATIC fcInt8 fcInt8_hadd(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_madHi(fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcInt8_madSat(fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcInt8_mulHi(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_rhadd(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_rotate(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_subSat(fcInt8 a, fcInt8 b);
FANCIER_STATIC fcInt8 fcInt8_mad24(fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcInt8_mul24(fcInt8 a, fcInt8 b);

FANCIER_STATIC fcLong2 fcLong2_create1(cl_long v);
FANCIER_STATIC void fcLong2_set1(fcLong2* self, cl_long v);
FANCIER_STATIC fcLong2 fcLong2_create11(cl_long a, cl_long b);
FANCIER_STATIC void fcLong2_set11(fcLong2* self, cl_long a, cl_long b);
FANCIER_STATIC fcLong2 fcLong2_create2(fcLong2 vec1);
FANCIER_STATIC void fcLong2_set2(fcLong2* self, fcLong2 vec1);

FANCIER_STATIC fcByte2 fcLong2_convertByte2(fcLong2 a);
FANCIER_STATIC fcShort2 fcLong2_convertShort2(fcLong2 a);
FANCIER_STATIC fcInt2 fcLong2_convertInt2(fcLong2 a);
FANCIER_STATIC fcFloat2 fcLong2_convertFloat2(fcLong2 a);
FANCIER_STATIC fcDouble2 fcLong2_convertDouble2(fcLong2 a);

FANCIER_STATIC fcInt2 fcLong2_isEqual(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcInt2 fcLong2_isNotEqual(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcInt2 fcLong2_isGreater(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcInt2 fcLong2_isGreaterEqual(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcInt2 fcLong2_isLess(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcInt2 fcLong2_isLessEqual(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_select(fcLong2 a, fcLong2 b, fcInt2 c);

FANCIER_STATIC cl_int fcLong2_any(fcLong2 a);
FANCIER_STATIC cl_int fcLong2_all(fcLong2 a);

FANCIER_STATIC fcLong2 fcLong2_neg(fcLong2 a);
FANCIER_STATIC fcLong2 fcLong2_add(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_sub(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_mul(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcDouble2 fcLong2_muld(fcLong2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcLong2_mulf(fcLong2 a, fcFloat2 b);
FANCIER_STATIC fcLong2 fcLong2_mulk(fcLong2 a, cl_long k);
FANCIER_STATIC fcDouble2 fcLong2_mulkd(fcLong2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcLong2_mulkf(fcLong2 a, cl_float k);
FANCIER_STATIC fcLong2 fcLong2_div(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcDouble2 fcLong2_divd(fcLong2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcLong2_divf(fcLong2 a, fcFloat2 b);
FANCIER_STATIC fcLong2 fcLong2_divk(fcLong2 a, cl_long k);
FANCIER_STATIC fcDouble2 fcLong2_divkd(fcLong2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcLong2_divkf(fcLong2 a, cl_float k);
FANCIER_STATIC fcLong2 fcLong2_mod(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_modk(fcLong2 a, cl_long k);
FANCIER_STATIC fcLong2 fcLong2_bitAnd(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_bitOr(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_bitXor(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_bitNot(fcLong2 a);

FANCIER_STATIC fcLong2 fcLong2_abs(fcLong2 a);
FANCIER_STATIC fcLong2 fcLong2_clamp(fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_STATIC fcLong2 fcLong2_max(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_maxMag(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_min(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_minMag(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_mix(fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_STATIC fcLong2 fcLong2_clampk(fcLong2 v, cl_long min, cl_long max);
FANCIER_STATIC fcLong2 fcLong2_maxk(fcLong2 x, cl_long y);
FANCIER_STATIC fcLong2 fcLong2_mink(fcLong2 x, cl_long y);
FANCIER_STATIC fcLong2 fcLong2_mixk(fcLong2 x, fcLong2 y, cl_long a);
FANCIER_STATIC fcLong2 fcLong2_absDiff(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_addSat(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_clz(fcLong2 a);
FANCIER_STATIC fcLong2 fcLong2_hadd(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_madHi(fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_STATIC fcLong2 fcLong2_madSat(fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_STATIC fcLong2 fcLong2_mulHi(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_rhadd(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_rotate(fcLong2 a, fcLong2 b);
FANCIER_STATIC fcLong2 fcLong2_subSat(fcLong2 a, fcLong2 b);

FANCIER_STATIC fcLong3 fcLong3_create1(cl_long v);
FANCIER_STATIC void fcLong3_set1(fcLong3* self, cl_long v);
FANCIER_STATIC fcLong3 fcLong3_create111(cl_long a, cl_long b, cl_long c);
FANCIER_STATIC void fcLong3_set111(fcLong3* self, cl_long a, cl_long b, cl_long c);
FANCIER_STATIC fcLong3 fcLong3_create12(cl_long x, fcLong2 vec1);
FANCIER_STATIC void fcLong3_set12(fcLong3* self, cl_long x, fcLong2 vec1);
FANCIER_STATIC fcLong3 fcLong3_create21(fcLong2 vec1, cl_long z);
FANCIER_STATIC void fcLong3_set21(fcLong3* self, fcLong2 vec1, cl_long z);
FANCIER_STATIC fcLong3 fcLong3_create3(fcLong3 vec1);
FANCIER_STATIC void fcLong3_set3(fcLong3* self, fcLong3 vec1);

FANCIER_STATIC fcByte3 fcLong3_convertByte3(fcLong3 a);
FANCIER_STATIC fcShort3 fcLong3_convertShort3(fcLong3 a);
FANCIER_STATIC fcInt3 fcLong3_convertInt3(fcLong3 a);
FANCIER_STATIC fcFloat3 fcLong3_convertFloat3(fcLong3 a);
FANCIER_STATIC fcDouble3 fcLong3_convertDouble3(fcLong3 a);
FANCIER_STATIC fcLong2 fcLong3_asLong2(fcLong3 a);

FANCIER_STATIC fcInt3 fcLong3_isEqual(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcInt3 fcLong3_isNotEqual(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcInt3 fcLong3_isGreater(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcInt3 fcLong3_isGreaterEqual(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcInt3 fcLong3_isLess(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcInt3 fcLong3_isLessEqual(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_select(fcLong3 a, fcLong3 b, fcInt3 c);

FANCIER_STATIC cl_int fcLong3_any(fcLong3 a);
FANCIER_STATIC cl_int fcLong3_all(fcLong3 a);

FANCIER_STATIC fcLong3 fcLong3_neg(fcLong3 a);
FANCIER_STATIC fcLong3 fcLong3_add(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_sub(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_mul(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcDouble3 fcLong3_muld(fcLong3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcLong3_mulf(fcLong3 a, fcFloat3 b);
FANCIER_STATIC fcLong3 fcLong3_mulk(fcLong3 a, cl_long k);
FANCIER_STATIC fcDouble3 fcLong3_mulkd(fcLong3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcLong3_mulkf(fcLong3 a, cl_float k);
FANCIER_STATIC fcLong3 fcLong3_div(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcDouble3 fcLong3_divd(fcLong3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcLong3_divf(fcLong3 a, fcFloat3 b);
FANCIER_STATIC fcLong3 fcLong3_divk(fcLong3 a, cl_long k);
FANCIER_STATIC fcDouble3 fcLong3_divkd(fcLong3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcLong3_divkf(fcLong3 a, cl_float k);
FANCIER_STATIC fcLong3 fcLong3_mod(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_modk(fcLong3 a, cl_long k);
FANCIER_STATIC fcLong3 fcLong3_bitAnd(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_bitOr(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_bitXor(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_bitNot(fcLong3 a);

FANCIER_STATIC fcLong3 fcLong3_abs(fcLong3 a);
FANCIER_STATIC fcLong3 fcLong3_clamp(fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_STATIC fcLong3 fcLong3_max(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_maxMag(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_min(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_minMag(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_mix(fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_STATIC fcLong3 fcLong3_clampk(fcLong3 v, cl_long min, cl_long max);
FANCIER_STATIC fcLong3 fcLong3_maxk(fcLong3 x, cl_long y);
FANCIER_STATIC fcLong3 fcLong3_mink(fcLong3 x, cl_long y);
FANCIER_STATIC fcLong3 fcLong3_mixk(fcLong3 x, fcLong3 y, cl_long a);
FANCIER_STATIC fcLong3 fcLong3_absDiff(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_addSat(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_clz(fcLong3 a);
FANCIER_STATIC fcLong3 fcLong3_hadd(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_madHi(fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_STATIC fcLong3 fcLong3_madSat(fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_STATIC fcLong3 fcLong3_mulHi(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_rhadd(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_rotate(fcLong3 a, fcLong3 b);
FANCIER_STATIC fcLong3 fcLong3_subSat(fcLong3 a, fcLong3 b);

FANCIER_STATIC fcLong4 fcLong4_create1(cl_long v);
FANCIER_STATIC void fcLong4_set1(fcLong4* self, cl_long v);
FANCIER_STATIC fcLong4 fcLong4_create1111(cl_long a, cl_long b, cl_long c, cl_long d);
FANCIER_STATIC void fcLong4_set1111(fcLong4* self, cl_long a, cl_long b, cl_long c, cl_long d);
FANCIER_STATIC fcLong4 fcLong4_create112(cl_long x, cl_long y, fcLong2 vec1);
FANCIER_STATIC void fcLong4_set112(fcLong4* self, cl_long x, cl_long y, fcLong2 vec1);
FANCIER_STATIC fcLong4 fcLong4_create121(cl_long x, fcLong2 vec1, cl_long w);
FANCIER_STATIC void fcLong4_set121(fcLong4* self, cl_long x, fcLong2 vec1, cl_long w);
FANCIER_STATIC fcLong4 fcLong4_create13(cl_long x, fcLong3 vec1);
FANCIER_STATIC void fcLong4_set13(fcLong4* self, cl_long x, fcLong3 vec1);
FANCIER_STATIC fcLong4 fcLong4_create211(fcLong2 vec1, cl_long z, cl_long w);
FANCIER_STATIC void fcLong4_set211(fcLong4* self, fcLong2 vec1, cl_long z, cl_long w);
FANCIER_STATIC fcLong4 fcLong4_create22(fcLong2 vec1, fcLong2 vec2);
FANCIER_STATIC void fcLong4_set22(fcLong4* self, fcLong2 vec1, fcLong2 vec2);
FANCIER_STATIC fcLong4 fcLong4_create31(fcLong3 vec1, cl_long w);
FANCIER_STATIC void fcLong4_set31(fcLong4* self, fcLong3 vec1, cl_long w);
FANCIER_STATIC fcLong4 fcLong4_create4(fcLong4 vec1);
FANCIER_STATIC void fcLong4_set4(fcLong4* self, fcLong4 vec1);

FANCIER_STATIC fcLong2 fcLong4_odd(fcLong4 a);
FANCIER_STATIC fcLong2 fcLong4_even(fcLong4 a);

FANCIER_STATIC fcByte4 fcLong4_convertByte4(fcLong4 a);
FANCIER_STATIC fcShort4 fcLong4_convertShort4(fcLong4 a);
FANCIER_STATIC fcInt4 fcLong4_convertInt4(fcLong4 a);
FANCIER_STATIC fcFloat4 fcLong4_convertFloat4(fcLong4 a);
FANCIER_STATIC fcDouble4 fcLong4_convertDouble4(fcLong4 a);
FANCIER_STATIC fcLong2 fcLong4_asLong2(fcLong4 a);
FANCIER_STATIC fcLong3 fcLong4_asLong3(fcLong4 a);

FANCIER_STATIC fcInt4 fcLong4_isEqual(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcInt4 fcLong4_isNotEqual(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcInt4 fcLong4_isGreater(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcInt4 fcLong4_isGreaterEqual(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcInt4 fcLong4_isLess(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcInt4 fcLong4_isLessEqual(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_select(fcLong4 a, fcLong4 b, fcInt4 c);

FANCIER_STATIC cl_int fcLong4_any(fcLong4 a);
FANCIER_STATIC cl_int fcLong4_all(fcLong4 a);

FANCIER_STATIC fcLong4 fcLong4_neg(fcLong4 a);
FANCIER_STATIC fcLong4 fcLong4_add(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_sub(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_mul(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcDouble4 fcLong4_muld(fcLong4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcLong4_mulf(fcLong4 a, fcFloat4 b);
FANCIER_STATIC fcLong4 fcLong4_mulk(fcLong4 a, cl_long k);
FANCIER_STATIC fcDouble4 fcLong4_mulkd(fcLong4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcLong4_mulkf(fcLong4 a, cl_float k);
FANCIER_STATIC fcLong4 fcLong4_div(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcDouble4 fcLong4_divd(fcLong4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcLong4_divf(fcLong4 a, fcFloat4 b);
FANCIER_STATIC fcLong4 fcLong4_divk(fcLong4 a, cl_long k);
FANCIER_STATIC fcDouble4 fcLong4_divkd(fcLong4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcLong4_divkf(fcLong4 a, cl_float k);
FANCIER_STATIC fcLong4 fcLong4_mod(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_modk(fcLong4 a, cl_long k);
FANCIER_STATIC fcLong4 fcLong4_bitAnd(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_bitOr(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_bitXor(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_bitNot(fcLong4 a);

FANCIER_STATIC fcLong4 fcLong4_abs(fcLong4 a);
FANCIER_STATIC fcLong4 fcLong4_clamp(fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_STATIC fcLong4 fcLong4_max(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_maxMag(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_min(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_minMag(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_mix(fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_STATIC fcLong4 fcLong4_clampk(fcLong4 v, cl_long min, cl_long max);
FANCIER_STATIC fcLong4 fcLong4_maxk(fcLong4 x, cl_long y);
FANCIER_STATIC fcLong4 fcLong4_mink(fcLong4 x, cl_long y);
FANCIER_STATIC fcLong4 fcLong4_mixk(fcLong4 x, fcLong4 y, cl_long a);
FANCIER_STATIC fcLong4 fcLong4_absDiff(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_addSat(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_clz(fcLong4 a);
FANCIER_STATIC fcLong4 fcLong4_hadd(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_madHi(fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_STATIC fcLong4 fcLong4_madSat(fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_STATIC fcLong4 fcLong4_mulHi(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_rhadd(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_rotate(fcLong4 a, fcLong4 b);
FANCIER_STATIC fcLong4 fcLong4_subSat(fcLong4 a, fcLong4 b);

FANCIER_STATIC fcLong8 fcLong8_create1(cl_long v);
FANCIER_STATIC void fcLong8_set1(fcLong8* self, cl_long v);
FANCIER_STATIC fcLong8 fcLong8_create11111111(cl_long a, cl_long b, cl_long c, cl_long d, cl_long e, cl_long f, cl_long g, cl_long h);
FANCIER_STATIC void fcLong8_set11111111(fcLong8* self, cl_long a, cl_long b, cl_long c, cl_long d, cl_long e, cl_long f, cl_long g, cl_long h);
FANCIER_STATIC fcLong8 fcLong8_create1111112(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec1);
FANCIER_STATIC void fcLong8_set1111112(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec1);
FANCIER_STATIC fcLong8 fcLong8_create1111121(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong2 vec1, cl_long s7);
FANCIER_STATIC void fcLong8_set1111121(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong2 vec1, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create111113(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong3 vec1);
FANCIER_STATIC void fcLong8_set111113(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong3 vec1);
FANCIER_STATIC fcLong8 fcLong8_create1111211(cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set1111211(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create111122(cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set111122(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create111131(cl_long x, cl_long y, cl_long z, cl_long w, fcLong3 vec1, cl_long s7);
FANCIER_STATIC void fcLong8_set111131(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong3 vec1, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create11114(cl_long x, cl_long y, cl_long z, cl_long w, fcLong4 vec1);
FANCIER_STATIC void fcLong8_set11114(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong4 vec1);
FANCIER_STATIC fcLong8 fcLong8_create1112111(cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set1112111(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create111212(cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set111212(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create111221(cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set111221(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create11123(cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set11123(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create111311(cl_long x, cl_long y, cl_long z, fcLong3 vec1, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set111311(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong3 vec1, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create11132(cl_long x, cl_long y, cl_long z, fcLong3 vec1, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set11132(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong3 vec1, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create11141(cl_long x, cl_long y, cl_long z, fcLong4 vec1, cl_long s7);
FANCIER_STATIC void fcLong8_set11141(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong4 vec1, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1121111(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set1121111(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create112112(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set112112(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create112121(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set112121(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create11213(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set11213(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create112211(cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set112211(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create11222(cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set11222(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create11231(cl_long x, cl_long y, fcLong2 vec1, fcLong3 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set11231(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong3 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1124(cl_long x, cl_long y, fcLong2 vec1, fcLong4 vec2);
FANCIER_STATIC void fcLong8_set1124(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong4 vec2);
FANCIER_STATIC fcLong8 fcLong8_create113111(cl_long x, cl_long y, fcLong3 vec1, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set113111(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create11312(cl_long x, cl_long y, fcLong3 vec1, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set11312(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create11321(cl_long x, cl_long y, fcLong3 vec1, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set11321(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1133(cl_long x, cl_long y, fcLong3 vec1, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set1133(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create11411(cl_long x, cl_long y, fcLong4 vec1, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set11411(fcLong8* self, cl_long x, cl_long y, fcLong4 vec1, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1142(cl_long x, cl_long y, fcLong4 vec1, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set1142(fcLong8* self, cl_long x, cl_long y, fcLong4 vec1, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create1211111(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set1211111(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create121112(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set121112(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create121121(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set121121(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create12113(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set12113(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create121211(cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set121211(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create12122(cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set12122(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create12131(cl_long x, fcLong2 vec1, cl_long w, fcLong3 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set12131(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong3 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1214(cl_long x, fcLong2 vec1, cl_long w, fcLong4 vec2);
FANCIER_STATIC void fcLong8_set1214(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong4 vec2);
FANCIER_STATIC fcLong8 fcLong8_create122111(cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set122111(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create12212(cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set12212(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create12221(cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC void fcLong8_set12221(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1223(cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3);
FANCIER_STATIC void fcLong8_set1223(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3);
FANCIER_STATIC fcLong8 fcLong8_create12311(cl_long x, fcLong2 vec1, fcLong3 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set12311(fcLong8* self, cl_long x, fcLong2 vec1, fcLong3 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1232(cl_long x, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set1232(fcLong8* self, cl_long x, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create1241(cl_long x, fcLong2 vec1, fcLong4 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set1241(fcLong8* self, cl_long x, fcLong2 vec1, fcLong4 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create131111(cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set131111(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create13112(cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set13112(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create13121(cl_long x, fcLong3 vec1, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set13121(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1313(cl_long x, fcLong3 vec1, cl_long s4, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set1313(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create13211(cl_long x, fcLong3 vec1, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set13211(fcLong8* self, cl_long x, fcLong3 vec1, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1322(cl_long x, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set1322(fcLong8* self, cl_long x, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create1331(cl_long x, fcLong3 vec1, fcLong3 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set1331(fcLong8* self, cl_long x, fcLong3 vec1, fcLong3 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create134(cl_long x, fcLong3 vec1, fcLong4 vec2);
FANCIER_STATIC void fcLong8_set134(fcLong8* self, cl_long x, fcLong3 vec1, fcLong4 vec2);
FANCIER_STATIC fcLong8 fcLong8_create14111(cl_long x, fcLong4 vec1, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set14111(fcLong8* self, cl_long x, fcLong4 vec1, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create1412(cl_long x, fcLong4 vec1, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set1412(fcLong8* self, cl_long x, fcLong4 vec1, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create1421(cl_long x, fcLong4 vec1, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set1421(fcLong8* self, cl_long x, fcLong4 vec1, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create143(cl_long x, fcLong4 vec1, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set143(fcLong8* self, cl_long x, fcLong4 vec1, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create2111111(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set2111111(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create211112(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set211112(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create211121(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set211121(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create21113(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set21113(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create211211(fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set211211(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create21122(fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set21122(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create21131(fcLong2 vec1, cl_long z, cl_long w, fcLong3 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set21131(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong3 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create2114(fcLong2 vec1, cl_long z, cl_long w, fcLong4 vec2);
FANCIER_STATIC void fcLong8_set2114(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong4 vec2);
FANCIER_STATIC fcLong8 fcLong8_create212111(fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set212111(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create21212(fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set21212(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create21221(fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC void fcLong8_set21221(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create2123(fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong3 vec3);
FANCIER_STATIC void fcLong8_set2123(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong3 vec3);
FANCIER_STATIC fcLong8 fcLong8_create21311(fcLong2 vec1, cl_long z, fcLong3 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set21311(fcLong8* self, fcLong2 vec1, cl_long z, fcLong3 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create2132(fcLong2 vec1, cl_long z, fcLong3 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set2132(fcLong8* self, fcLong2 vec1, cl_long z, fcLong3 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create2141(fcLong2 vec1, cl_long z, fcLong4 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set2141(fcLong8* self, fcLong2 vec1, cl_long z, fcLong4 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create221111(fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set221111(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create22112(fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set22112(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create22121(fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong2 vec3, cl_long s7);
FANCIER_STATIC void fcLong8_set22121(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong2 vec3, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create2213(fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong3 vec3);
FANCIER_STATIC void fcLong8_set2213(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong3 vec3);
FANCIER_STATIC fcLong8 fcLong8_create22211(fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set22211(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create2222(fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, fcLong2 vec4);
FANCIER_STATIC void fcLong8_set2222(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, fcLong2 vec4);
FANCIER_STATIC fcLong8 fcLong8_create2231(fcLong2 vec1, fcLong2 vec2, fcLong3 vec3, cl_long s7);
FANCIER_STATIC void fcLong8_set2231(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create224(fcLong2 vec1, fcLong2 vec2, fcLong4 vec3);
FANCIER_STATIC void fcLong8_set224(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong4 vec3);
FANCIER_STATIC fcLong8 fcLong8_create23111(fcLong2 vec1, fcLong3 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set23111(fcLong8* self, fcLong2 vec1, fcLong3 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create2312(fcLong2 vec1, fcLong3 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set2312(fcLong8* self, fcLong2 vec1, fcLong3 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create2321(fcLong2 vec1, fcLong3 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC void fcLong8_set2321(fcLong8* self, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create233(fcLong2 vec1, fcLong3 vec2, fcLong3 vec3);
FANCIER_STATIC void fcLong8_set233(fcLong8* self, fcLong2 vec1, fcLong3 vec2, fcLong3 vec3);
FANCIER_STATIC fcLong8 fcLong8_create2411(fcLong2 vec1, fcLong4 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set2411(fcLong8* self, fcLong2 vec1, fcLong4 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create242(fcLong2 vec1, fcLong4 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set242(fcLong8* self, fcLong2 vec1, fcLong4 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create311111(fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set311111(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create31112(fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set31112(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create31121(fcLong3 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set31121(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create3113(fcLong3 vec1, cl_long w, cl_long s4, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set3113(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create31211(fcLong3 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set31211(fcLong8* self, fcLong3 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create3122(fcLong3 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set3122(fcLong8* self, fcLong3 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create3131(fcLong3 vec1, cl_long w, fcLong3 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set3131(fcLong8* self, fcLong3 vec1, cl_long w, fcLong3 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create314(fcLong3 vec1, cl_long w, fcLong4 vec2);
FANCIER_STATIC void fcLong8_set314(fcLong8* self, fcLong3 vec1, cl_long w, fcLong4 vec2);
FANCIER_STATIC fcLong8 fcLong8_create32111(fcLong3 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set32111(fcLong8* self, fcLong3 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create3212(fcLong3 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set3212(fcLong8* self, fcLong3 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create3221(fcLong3 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC void fcLong8_set3221(fcLong8* self, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create323(fcLong3 vec1, fcLong2 vec2, fcLong3 vec3);
FANCIER_STATIC void fcLong8_set323(fcLong8* self, fcLong3 vec1, fcLong2 vec2, fcLong3 vec3);
FANCIER_STATIC fcLong8 fcLong8_create3311(fcLong3 vec1, fcLong3 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set3311(fcLong8* self, fcLong3 vec1, fcLong3 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create332(fcLong3 vec1, fcLong3 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set332(fcLong8* self, fcLong3 vec1, fcLong3 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create341(fcLong3 vec1, fcLong4 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set341(fcLong8* self, fcLong3 vec1, fcLong4 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create41111(fcLong4 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set41111(fcLong8* self, fcLong4 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create4112(fcLong4 vec1, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC void fcLong8_set4112(fcLong8* self, fcLong4 vec1, cl_long s4, cl_long s5, fcLong2 vec2);
FANCIER_STATIC fcLong8 fcLong8_create4121(fcLong4 vec1, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set4121(fcLong8* self, fcLong4 vec1, cl_long s4, fcLong2 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create413(fcLong4 vec1, cl_long s4, fcLong3 vec2);
FANCIER_STATIC void fcLong8_set413(fcLong8* self, fcLong4 vec1, cl_long s4, fcLong3 vec2);
FANCIER_STATIC fcLong8 fcLong8_create4211(fcLong4 vec1, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC void fcLong8_set4211(fcLong8* self, fcLong4 vec1, fcLong2 vec2, cl_long s6, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create422(fcLong4 vec1, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC void fcLong8_set422(fcLong8* self, fcLong4 vec1, fcLong2 vec2, fcLong2 vec3);
FANCIER_STATIC fcLong8 fcLong8_create431(fcLong4 vec1, fcLong3 vec2, cl_long s7);
FANCIER_STATIC void fcLong8_set431(fcLong8* self, fcLong4 vec1, fcLong3 vec2, cl_long s7);
FANCIER_STATIC fcLong8 fcLong8_create44(fcLong4 vec1, fcLong4 vec2);
FANCIER_STATIC void fcLong8_set44(fcLong8* self, fcLong4 vec1, fcLong4 vec2);
FANCIER_STATIC fcLong8 fcLong8_create8(fcLong8 vec1);
FANCIER_STATIC void fcLong8_set8(fcLong8* self, fcLong8 vec1);

FANCIER_STATIC fcLong4 fcLong8_odd(fcLong8 a);
FANCIER_STATIC fcLong4 fcLong8_even(fcLong8 a);

FANCIER_STATIC fcByte8 fcLong8_convertByte8(fcLong8 a);
FANCIER_STATIC fcShort8 fcLong8_convertShort8(fcLong8 a);
FANCIER_STATIC fcInt8 fcLong8_convertInt8(fcLong8 a);
FANCIER_STATIC fcFloat8 fcLong8_convertFloat8(fcLong8 a);
FANCIER_STATIC fcDouble8 fcLong8_convertDouble8(fcLong8 a);
FANCIER_STATIC fcLong2 fcLong8_asLong2(fcLong8 a);
FANCIER_STATIC fcLong3 fcLong8_asLong3(fcLong8 a);
FANCIER_STATIC fcLong4 fcLong8_asLong4(fcLong8 a);

FANCIER_STATIC fcInt8 fcLong8_isEqual(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcInt8 fcLong8_isNotEqual(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcInt8 fcLong8_isGreater(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcInt8 fcLong8_isGreaterEqual(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcInt8 fcLong8_isLess(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcInt8 fcLong8_isLessEqual(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_select(fcLong8 a, fcLong8 b, fcInt8 c);

FANCIER_STATIC cl_int fcLong8_any(fcLong8 a);
FANCIER_STATIC cl_int fcLong8_all(fcLong8 a);

FANCIER_STATIC fcLong8 fcLong8_neg(fcLong8 a);
FANCIER_STATIC fcLong8 fcLong8_add(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_sub(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_mul(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcDouble8 fcLong8_muld(fcLong8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcLong8_mulf(fcLong8 a, fcFloat8 b);
FANCIER_STATIC fcLong8 fcLong8_mulk(fcLong8 a, cl_long k);
FANCIER_STATIC fcDouble8 fcLong8_mulkd(fcLong8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcLong8_mulkf(fcLong8 a, cl_float k);
FANCIER_STATIC fcLong8 fcLong8_div(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcDouble8 fcLong8_divd(fcLong8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcLong8_divf(fcLong8 a, fcFloat8 b);
FANCIER_STATIC fcLong8 fcLong8_divk(fcLong8 a, cl_long k);
FANCIER_STATIC fcDouble8 fcLong8_divkd(fcLong8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcLong8_divkf(fcLong8 a, cl_float k);
FANCIER_STATIC fcLong8 fcLong8_mod(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_modk(fcLong8 a, cl_long k);
FANCIER_STATIC fcLong8 fcLong8_bitAnd(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_bitOr(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_bitXor(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_bitNot(fcLong8 a);

FANCIER_STATIC fcLong8 fcLong8_abs(fcLong8 a);
FANCIER_STATIC fcLong8 fcLong8_clamp(fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_STATIC fcLong8 fcLong8_max(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_maxMag(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_min(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_minMag(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_mix(fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_STATIC fcLong8 fcLong8_clampk(fcLong8 v, cl_long min, cl_long max);
FANCIER_STATIC fcLong8 fcLong8_maxk(fcLong8 x, cl_long y);
FANCIER_STATIC fcLong8 fcLong8_mink(fcLong8 x, cl_long y);
FANCIER_STATIC fcLong8 fcLong8_mixk(fcLong8 x, fcLong8 y, cl_long a);
FANCIER_STATIC fcLong8 fcLong8_absDiff(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_addSat(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_clz(fcLong8 a);
FANCIER_STATIC fcLong8 fcLong8_hadd(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_madHi(fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_STATIC fcLong8 fcLong8_madSat(fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_STATIC fcLong8 fcLong8_mulHi(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_rhadd(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_rotate(fcLong8 a, fcLong8 b);
FANCIER_STATIC fcLong8 fcLong8_subSat(fcLong8 a, fcLong8 b);

FANCIER_STATIC fcFloat2 fcFloat2_create1(cl_float v);
FANCIER_STATIC void fcFloat2_set1(fcFloat2* self, cl_float v);
FANCIER_STATIC fcFloat2 fcFloat2_create11(cl_float a, cl_float b);
FANCIER_STATIC void fcFloat2_set11(fcFloat2* self, cl_float a, cl_float b);
FANCIER_STATIC fcFloat2 fcFloat2_create2(fcFloat2 vec1);
FANCIER_STATIC void fcFloat2_set2(fcFloat2* self, fcFloat2 vec1);

FANCIER_STATIC fcByte2 fcFloat2_convertByte2(fcFloat2 a);
FANCIER_STATIC fcShort2 fcFloat2_convertShort2(fcFloat2 a);
FANCIER_STATIC fcInt2 fcFloat2_convertInt2(fcFloat2 a);
FANCIER_STATIC fcLong2 fcFloat2_convertLong2(fcFloat2 a);
FANCIER_STATIC fcDouble2 fcFloat2_convertDouble2(fcFloat2 a);

FANCIER_STATIC fcInt2 fcFloat2_isEqual(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcFloat2_isNotEqual(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcFloat2_isGreater(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcFloat2_isGreaterEqual(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcFloat2_isLess(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcFloat2_isLessEqual(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_select(fcFloat2 a, fcFloat2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcFloat2_isFinite(fcFloat2 a);
FANCIER_STATIC fcInt2 fcFloat2_isInf(fcFloat2 a);
FANCIER_STATIC fcInt2 fcFloat2_isNaN(fcFloat2 a);
FANCIER_STATIC fcInt2 fcFloat2_isNormal(fcFloat2 a);
FANCIER_STATIC fcInt2 fcFloat2_isOrdered(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcInt2 fcFloat2_isUnordered(fcFloat2 a, fcFloat2 b);

FANCIER_STATIC cl_int fcFloat2_any(fcFloat2 a);
FANCIER_STATIC cl_int fcFloat2_all(fcFloat2 a);

FANCIER_STATIC fcFloat2 fcFloat2_neg(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_add(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_sub(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcDouble2 fcFloat2_muld(fcFloat2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcFloat2_mulf(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcDouble2 fcFloat2_mulkd(fcFloat2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcFloat2_mulkf(fcFloat2 a, cl_float k);
FANCIER_STATIC fcDouble2 fcFloat2_divd(fcFloat2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcFloat2_divf(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcDouble2 fcFloat2_divkd(fcFloat2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcFloat2_divkf(fcFloat2 a, cl_float k);
FANCIER_STATIC cl_float fcFloat2_dot(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC cl_double fcFloat2_distance(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC cl_double fcFloat2_length(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_normalize(fcFloat2 a);

FANCIER_STATIC fcFloat2 fcFloat2_abs(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_clamp(fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_STATIC fcFloat2 fcFloat2_max(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_maxMag(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_min(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_minMag(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_mix(fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_STATIC fcFloat2 fcFloat2_clampk(fcFloat2 v, cl_float min, cl_float max);
FANCIER_STATIC fcFloat2 fcFloat2_maxk(fcFloat2 x, cl_float y);
FANCIER_STATIC fcFloat2 fcFloat2_mink(fcFloat2 x, cl_float y);
FANCIER_STATIC fcFloat2 fcFloat2_mixk(fcFloat2 x, fcFloat2 y, cl_float a);
FANCIER_STATIC fcFloat2 fcFloat2_acos(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_acosh(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_asin(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_asinh(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_atan(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_atan2(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_atanh(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_cbrt(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_ceil(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_copySign(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_cos(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_cosh(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_erf(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_erfc(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_exp(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_exp10(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_exp2(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_expm1(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_fdim(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_floor(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_fma(fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_STATIC fcFloat2 fcFloat2_fmod(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_fract(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_frexp(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_getExponent(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_hypot(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_lgamma(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_log(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_log10(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_log1p(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_log2(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_logb(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_mad(fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_STATIC fcFloat2 fcFloat2_nextAfter(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_pow(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_powr(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_remainder(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_rint(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_round(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_rsqrt(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_signum(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_sin(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_sinh(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_smoothStep(fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_STATIC fcFloat2 fcFloat2_sqrt(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_step(fcFloat2 a, fcFloat2 b);
FANCIER_STATIC fcFloat2 fcFloat2_tan(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_tanh(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_tgamma(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_toDegrees(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_toRadians(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_trunc(fcFloat2 a);
FANCIER_STATIC fcFloat2 fcFloat2_scalb(fcFloat2 a, fcInt2 n);
FANCIER_STATIC fcFloat2 fcFloat2_ldexp(fcFloat2 a, fcInt2 n);
FANCIER_STATIC fcFloat2 fcFloat2_pown(fcFloat2 a, fcInt2 b);
FANCIER_STATIC fcFloat2 fcFloat2_rootn(fcFloat2 a, fcInt2 b);
FANCIER_STATIC fcFloat2 fcFloat2_smoothStepk(fcFloat2 a, fcFloat2 b, cl_float c);

FANCIER_STATIC fcFloat3 fcFloat3_create1(cl_float v);
FANCIER_STATIC void fcFloat3_set1(fcFloat3* self, cl_float v);
FANCIER_STATIC fcFloat3 fcFloat3_create111(cl_float a, cl_float b, cl_float c);
FANCIER_STATIC void fcFloat3_set111(fcFloat3* self, cl_float a, cl_float b, cl_float c);
FANCIER_STATIC fcFloat3 fcFloat3_create12(cl_float x, fcFloat2 vec1);
FANCIER_STATIC void fcFloat3_set12(fcFloat3* self, cl_float x, fcFloat2 vec1);
FANCIER_STATIC fcFloat3 fcFloat3_create21(fcFloat2 vec1, cl_float z);
FANCIER_STATIC void fcFloat3_set21(fcFloat3* self, fcFloat2 vec1, cl_float z);
FANCIER_STATIC fcFloat3 fcFloat3_create3(fcFloat3 vec1);
FANCIER_STATIC void fcFloat3_set3(fcFloat3* self, fcFloat3 vec1);

FANCIER_STATIC fcByte3 fcFloat3_convertByte3(fcFloat3 a);
FANCIER_STATIC fcShort3 fcFloat3_convertShort3(fcFloat3 a);
FANCIER_STATIC fcInt3 fcFloat3_convertInt3(fcFloat3 a);
FANCIER_STATIC fcLong3 fcFloat3_convertLong3(fcFloat3 a);
FANCIER_STATIC fcDouble3 fcFloat3_convertDouble3(fcFloat3 a);
FANCIER_STATIC fcFloat2 fcFloat3_asFloat2(fcFloat3 a);

FANCIER_STATIC fcInt3 fcFloat3_isEqual(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcFloat3_isNotEqual(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcFloat3_isGreater(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcFloat3_isGreaterEqual(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcFloat3_isLess(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcFloat3_isLessEqual(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_select(fcFloat3 a, fcFloat3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcFloat3_isFinite(fcFloat3 a);
FANCIER_STATIC fcInt3 fcFloat3_isInf(fcFloat3 a);
FANCIER_STATIC fcInt3 fcFloat3_isNaN(fcFloat3 a);
FANCIER_STATIC fcInt3 fcFloat3_isNormal(fcFloat3 a);
FANCIER_STATIC fcInt3 fcFloat3_isOrdered(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcInt3 fcFloat3_isUnordered(fcFloat3 a, fcFloat3 b);

FANCIER_STATIC cl_int fcFloat3_any(fcFloat3 a);
FANCIER_STATIC cl_int fcFloat3_all(fcFloat3 a);

FANCIER_STATIC fcFloat3 fcFloat3_neg(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_add(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_sub(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcDouble3 fcFloat3_muld(fcFloat3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcFloat3_mulf(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcDouble3 fcFloat3_mulkd(fcFloat3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcFloat3_mulkf(fcFloat3 a, cl_float k);
FANCIER_STATIC fcDouble3 fcFloat3_divd(fcFloat3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcFloat3_divf(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcDouble3 fcFloat3_divkd(fcFloat3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcFloat3_divkf(fcFloat3 a, cl_float k);
FANCIER_STATIC fcFloat3 fcFloat3_cross(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC cl_float fcFloat3_dot(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC cl_double fcFloat3_distance(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC cl_double fcFloat3_length(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_normalize(fcFloat3 a);

FANCIER_STATIC fcFloat3 fcFloat3_abs(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_clamp(fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_STATIC fcFloat3 fcFloat3_max(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_maxMag(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_min(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_minMag(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_mix(fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_STATIC fcFloat3 fcFloat3_clampk(fcFloat3 v, cl_float min, cl_float max);
FANCIER_STATIC fcFloat3 fcFloat3_maxk(fcFloat3 x, cl_float y);
FANCIER_STATIC fcFloat3 fcFloat3_mink(fcFloat3 x, cl_float y);
FANCIER_STATIC fcFloat3 fcFloat3_mixk(fcFloat3 x, fcFloat3 y, cl_float a);
FANCIER_STATIC fcFloat3 fcFloat3_acos(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_acosh(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_asin(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_asinh(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_atan(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_atan2(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_atanh(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_cbrt(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_ceil(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_copySign(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_cos(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_cosh(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_erf(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_erfc(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_exp(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_exp10(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_exp2(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_expm1(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_fdim(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_floor(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_fma(fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_STATIC fcFloat3 fcFloat3_fmod(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_fract(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_frexp(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_getExponent(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_hypot(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_lgamma(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_log(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_log10(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_log1p(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_log2(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_logb(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_mad(fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_STATIC fcFloat3 fcFloat3_nextAfter(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_pow(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_powr(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_remainder(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_rint(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_round(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_rsqrt(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_signum(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_sin(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_sinh(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_smoothStep(fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_STATIC fcFloat3 fcFloat3_sqrt(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_step(fcFloat3 a, fcFloat3 b);
FANCIER_STATIC fcFloat3 fcFloat3_tan(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_tanh(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_tgamma(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_toDegrees(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_toRadians(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_trunc(fcFloat3 a);
FANCIER_STATIC fcFloat3 fcFloat3_scalb(fcFloat3 a, fcInt3 n);
FANCIER_STATIC fcFloat3 fcFloat3_ldexp(fcFloat3 a, fcInt3 n);
FANCIER_STATIC fcFloat3 fcFloat3_pown(fcFloat3 a, fcInt3 b);
FANCIER_STATIC fcFloat3 fcFloat3_rootn(fcFloat3 a, fcInt3 b);
FANCIER_STATIC fcFloat3 fcFloat3_smoothStepk(fcFloat3 a, fcFloat3 b, cl_float c);

FANCIER_STATIC fcFloat4 fcFloat4_create1(cl_float v);
FANCIER_STATIC void fcFloat4_set1(fcFloat4* self, cl_float v);
FANCIER_STATIC fcFloat4 fcFloat4_create1111(cl_float a, cl_float b, cl_float c, cl_float d);
FANCIER_STATIC void fcFloat4_set1111(fcFloat4* self, cl_float a, cl_float b, cl_float c, cl_float d);
FANCIER_STATIC fcFloat4 fcFloat4_create112(cl_float x, cl_float y, fcFloat2 vec1);
FANCIER_STATIC void fcFloat4_set112(fcFloat4* self, cl_float x, cl_float y, fcFloat2 vec1);
FANCIER_STATIC fcFloat4 fcFloat4_create121(cl_float x, fcFloat2 vec1, cl_float w);
FANCIER_STATIC void fcFloat4_set121(fcFloat4* self, cl_float x, fcFloat2 vec1, cl_float w);
FANCIER_STATIC fcFloat4 fcFloat4_create13(cl_float x, fcFloat3 vec1);
FANCIER_STATIC void fcFloat4_set13(fcFloat4* self, cl_float x, fcFloat3 vec1);
FANCIER_STATIC fcFloat4 fcFloat4_create211(fcFloat2 vec1, cl_float z, cl_float w);
FANCIER_STATIC void fcFloat4_set211(fcFloat4* self, fcFloat2 vec1, cl_float z, cl_float w);
FANCIER_STATIC fcFloat4 fcFloat4_create22(fcFloat2 vec1, fcFloat2 vec2);
FANCIER_STATIC void fcFloat4_set22(fcFloat4* self, fcFloat2 vec1, fcFloat2 vec2);
FANCIER_STATIC fcFloat4 fcFloat4_create31(fcFloat3 vec1, cl_float w);
FANCIER_STATIC void fcFloat4_set31(fcFloat4* self, fcFloat3 vec1, cl_float w);
FANCIER_STATIC fcFloat4 fcFloat4_create4(fcFloat4 vec1);
FANCIER_STATIC void fcFloat4_set4(fcFloat4* self, fcFloat4 vec1);

FANCIER_STATIC fcFloat2 fcFloat4_odd(fcFloat4 a);
FANCIER_STATIC fcFloat2 fcFloat4_even(fcFloat4 a);

FANCIER_STATIC fcByte4 fcFloat4_convertByte4(fcFloat4 a);
FANCIER_STATIC fcShort4 fcFloat4_convertShort4(fcFloat4 a);
FANCIER_STATIC fcInt4 fcFloat4_convertInt4(fcFloat4 a);
FANCIER_STATIC fcLong4 fcFloat4_convertLong4(fcFloat4 a);
FANCIER_STATIC fcDouble4 fcFloat4_convertDouble4(fcFloat4 a);
FANCIER_STATIC fcFloat2 fcFloat4_asFloat2(fcFloat4 a);
FANCIER_STATIC fcFloat3 fcFloat4_asFloat3(fcFloat4 a);

FANCIER_STATIC fcInt4 fcFloat4_isEqual(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcFloat4_isNotEqual(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcFloat4_isGreater(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcFloat4_isGreaterEqual(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcFloat4_isLess(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcFloat4_isLessEqual(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_select(fcFloat4 a, fcFloat4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcFloat4_isFinite(fcFloat4 a);
FANCIER_STATIC fcInt4 fcFloat4_isInf(fcFloat4 a);
FANCIER_STATIC fcInt4 fcFloat4_isNaN(fcFloat4 a);
FANCIER_STATIC fcInt4 fcFloat4_isNormal(fcFloat4 a);
FANCIER_STATIC fcInt4 fcFloat4_isOrdered(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcInt4 fcFloat4_isUnordered(fcFloat4 a, fcFloat4 b);

FANCIER_STATIC cl_int fcFloat4_any(fcFloat4 a);
FANCIER_STATIC cl_int fcFloat4_all(fcFloat4 a);

FANCIER_STATIC fcFloat4 fcFloat4_neg(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_add(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_sub(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcDouble4 fcFloat4_muld(fcFloat4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcFloat4_mulf(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcDouble4 fcFloat4_mulkd(fcFloat4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcFloat4_mulkf(fcFloat4 a, cl_float k);
FANCIER_STATIC fcDouble4 fcFloat4_divd(fcFloat4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcFloat4_divf(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcDouble4 fcFloat4_divkd(fcFloat4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcFloat4_divkf(fcFloat4 a, cl_float k);
FANCIER_STATIC fcFloat4 fcFloat4_cross(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC cl_float fcFloat4_dot(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC cl_double fcFloat4_distance(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC cl_double fcFloat4_length(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_normalize(fcFloat4 a);

FANCIER_STATIC fcFloat4 fcFloat4_abs(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_clamp(fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_STATIC fcFloat4 fcFloat4_max(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_maxMag(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_min(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_minMag(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_mix(fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_STATIC fcFloat4 fcFloat4_clampk(fcFloat4 v, cl_float min, cl_float max);
FANCIER_STATIC fcFloat4 fcFloat4_maxk(fcFloat4 x, cl_float y);
FANCIER_STATIC fcFloat4 fcFloat4_mink(fcFloat4 x, cl_float y);
FANCIER_STATIC fcFloat4 fcFloat4_mixk(fcFloat4 x, fcFloat4 y, cl_float a);
FANCIER_STATIC fcFloat4 fcFloat4_acos(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_acosh(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_asin(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_asinh(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_atan(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_atan2(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_atanh(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_cbrt(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_ceil(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_copySign(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_cos(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_cosh(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_erf(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_erfc(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_exp(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_exp10(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_exp2(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_expm1(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_fdim(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_floor(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_fma(fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_STATIC fcFloat4 fcFloat4_fmod(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_fract(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_frexp(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_getExponent(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_hypot(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_lgamma(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_log(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_log10(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_log1p(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_log2(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_logb(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_mad(fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_STATIC fcFloat4 fcFloat4_nextAfter(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_pow(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_powr(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_remainder(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_rint(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_round(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_rsqrt(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_signum(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_sin(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_sinh(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_smoothStep(fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_STATIC fcFloat4 fcFloat4_sqrt(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_step(fcFloat4 a, fcFloat4 b);
FANCIER_STATIC fcFloat4 fcFloat4_tan(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_tanh(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_tgamma(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_toDegrees(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_toRadians(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_trunc(fcFloat4 a);
FANCIER_STATIC fcFloat4 fcFloat4_scalb(fcFloat4 a, fcInt4 n);
FANCIER_STATIC fcFloat4 fcFloat4_ldexp(fcFloat4 a, fcInt4 n);
FANCIER_STATIC fcFloat4 fcFloat4_pown(fcFloat4 a, fcInt4 b);
FANCIER_STATIC fcFloat4 fcFloat4_rootn(fcFloat4 a, fcInt4 b);
FANCIER_STATIC fcFloat4 fcFloat4_smoothStepk(fcFloat4 a, fcFloat4 b, cl_float c);

FANCIER_STATIC fcFloat8 fcFloat8_create1(cl_float v);
FANCIER_STATIC void fcFloat8_set1(fcFloat8* self, cl_float v);
FANCIER_STATIC fcFloat8 fcFloat8_create11111111(cl_float a, cl_float b, cl_float c, cl_float d, cl_float e, cl_float f, cl_float g, cl_float h);
FANCIER_STATIC void fcFloat8_set11111111(fcFloat8* self, cl_float a, cl_float b, cl_float c, cl_float d, cl_float e, cl_float f, cl_float g, cl_float h);
FANCIER_STATIC fcFloat8 fcFloat8_create1111112(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec1);
FANCIER_STATIC void fcFloat8_set1111112(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec1);
FANCIER_STATIC fcFloat8 fcFloat8_create1111121(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat2 vec1, cl_float s7);
FANCIER_STATIC void fcFloat8_set1111121(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat2 vec1, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create111113(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat3 vec1);
FANCIER_STATIC void fcFloat8_set111113(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat3 vec1);
FANCIER_STATIC fcFloat8 fcFloat8_create1111211(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set1111211(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create111122(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set111122(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create111131(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat3 vec1, cl_float s7);
FANCIER_STATIC void fcFloat8_set111131(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat3 vec1, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create11114(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat4 vec1);
FANCIER_STATIC void fcFloat8_set11114(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat4 vec1);
FANCIER_STATIC fcFloat8 fcFloat8_create1112111(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set1112111(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create111212(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set111212(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create111221(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set111221(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create11123(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set11123(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create111311(cl_float x, cl_float y, cl_float z, fcFloat3 vec1, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set111311(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat3 vec1, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create11132(cl_float x, cl_float y, cl_float z, fcFloat3 vec1, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set11132(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat3 vec1, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create11141(cl_float x, cl_float y, cl_float z, fcFloat4 vec1, cl_float s7);
FANCIER_STATIC void fcFloat8_set11141(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat4 vec1, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1121111(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set1121111(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create112112(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set112112(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create112121(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set112121(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create11213(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set11213(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create112211(cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set112211(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create11222(cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set11222(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create11231(cl_float x, cl_float y, fcFloat2 vec1, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set11231(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1124(cl_float x, cl_float y, fcFloat2 vec1, fcFloat4 vec2);
FANCIER_STATIC void fcFloat8_set1124(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat4 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create113111(cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set113111(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create11312(cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set11312(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create11321(cl_float x, cl_float y, fcFloat3 vec1, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set11321(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1133(cl_float x, cl_float y, fcFloat3 vec1, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set1133(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create11411(cl_float x, cl_float y, fcFloat4 vec1, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set11411(fcFloat8* self, cl_float x, cl_float y, fcFloat4 vec1, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1142(cl_float x, cl_float y, fcFloat4 vec1, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set1142(fcFloat8* self, cl_float x, cl_float y, fcFloat4 vec1, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create1211111(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set1211111(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create121112(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set121112(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create121121(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set121121(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create12113(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set12113(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create121211(cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set121211(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create12122(cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set12122(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create12131(cl_float x, fcFloat2 vec1, cl_float w, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set12131(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1214(cl_float x, fcFloat2 vec1, cl_float w, fcFloat4 vec2);
FANCIER_STATIC void fcFloat8_set1214(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat4 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create122111(cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set122111(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create12212(cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set12212(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create12221(cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC void fcFloat8_set12221(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1223(cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3);
FANCIER_STATIC void fcFloat8_set1223(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create12311(cl_float x, fcFloat2 vec1, fcFloat3 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set12311(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat3 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1232(cl_float x, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set1232(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create1241(cl_float x, fcFloat2 vec1, fcFloat4 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set1241(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat4 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create131111(cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set131111(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create13112(cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set13112(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create13121(cl_float x, fcFloat3 vec1, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set13121(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1313(cl_float x, fcFloat3 vec1, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set1313(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create13211(cl_float x, fcFloat3 vec1, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set13211(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1322(cl_float x, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set1322(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create1331(cl_float x, fcFloat3 vec1, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set1331(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create134(cl_float x, fcFloat3 vec1, fcFloat4 vec2);
FANCIER_STATIC void fcFloat8_set134(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat4 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create14111(cl_float x, fcFloat4 vec1, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set14111(fcFloat8* self, cl_float x, fcFloat4 vec1, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create1412(cl_float x, fcFloat4 vec1, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set1412(fcFloat8* self, cl_float x, fcFloat4 vec1, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create1421(cl_float x, fcFloat4 vec1, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set1421(fcFloat8* self, cl_float x, fcFloat4 vec1, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create143(cl_float x, fcFloat4 vec1, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set143(fcFloat8* self, cl_float x, fcFloat4 vec1, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create2111111(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set2111111(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create211112(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set211112(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create211121(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set211121(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create21113(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set21113(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create211211(fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set211211(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create21122(fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set21122(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create21131(fcFloat2 vec1, cl_float z, cl_float w, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set21131(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create2114(fcFloat2 vec1, cl_float z, cl_float w, fcFloat4 vec2);
FANCIER_STATIC void fcFloat8_set2114(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat4 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create212111(fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set212111(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create21212(fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set21212(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create21221(fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC void fcFloat8_set21221(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create2123(fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat3 vec3);
FANCIER_STATIC void fcFloat8_set2123(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat3 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create21311(fcFloat2 vec1, cl_float z, fcFloat3 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set21311(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat3 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create2132(fcFloat2 vec1, cl_float z, fcFloat3 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set2132(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat3 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create2141(fcFloat2 vec1, cl_float z, fcFloat4 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set2141(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat4 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create221111(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set221111(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create22112(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set22112(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create22121(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC void fcFloat8_set22121(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create2213(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat3 vec3);
FANCIER_STATIC void fcFloat8_set2213(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat3 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create22211(fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set22211(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create2222(fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, fcFloat2 vec4);
FANCIER_STATIC void fcFloat8_set2222(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, fcFloat2 vec4);
FANCIER_STATIC fcFloat8 fcFloat8_create2231(fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3, cl_float s7);
FANCIER_STATIC void fcFloat8_set2231(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create224(fcFloat2 vec1, fcFloat2 vec2, fcFloat4 vec3);
FANCIER_STATIC void fcFloat8_set224(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat4 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create23111(fcFloat2 vec1, fcFloat3 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set23111(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create2312(fcFloat2 vec1, fcFloat3 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set2312(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create2321(fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC void fcFloat8_set2321(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create233(fcFloat2 vec1, fcFloat3 vec2, fcFloat3 vec3);
FANCIER_STATIC void fcFloat8_set233(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, fcFloat3 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create2411(fcFloat2 vec1, fcFloat4 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set2411(fcFloat8* self, fcFloat2 vec1, fcFloat4 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create242(fcFloat2 vec1, fcFloat4 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set242(fcFloat8* self, fcFloat2 vec1, fcFloat4 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create311111(fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set311111(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create31112(fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set31112(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create31121(fcFloat3 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set31121(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create3113(fcFloat3 vec1, cl_float w, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set3113(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create31211(fcFloat3 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set31211(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create3122(fcFloat3 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set3122(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create3131(fcFloat3 vec1, cl_float w, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set3131(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create314(fcFloat3 vec1, cl_float w, fcFloat4 vec2);
FANCIER_STATIC void fcFloat8_set314(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat4 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create32111(fcFloat3 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set32111(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create3212(fcFloat3 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set3212(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create3221(fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC void fcFloat8_set3221(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create323(fcFloat3 vec1, fcFloat2 vec2, fcFloat3 vec3);
FANCIER_STATIC void fcFloat8_set323(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, fcFloat3 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create3311(fcFloat3 vec1, fcFloat3 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set3311(fcFloat8* self, fcFloat3 vec1, fcFloat3 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create332(fcFloat3 vec1, fcFloat3 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set332(fcFloat8* self, fcFloat3 vec1, fcFloat3 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create341(fcFloat3 vec1, fcFloat4 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set341(fcFloat8* self, fcFloat3 vec1, fcFloat4 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create41111(fcFloat4 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set41111(fcFloat8* self, fcFloat4 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create4112(fcFloat4 vec1, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC void fcFloat8_set4112(fcFloat8* self, fcFloat4 vec1, cl_float s4, cl_float s5, fcFloat2 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create4121(fcFloat4 vec1, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set4121(fcFloat8* self, fcFloat4 vec1, cl_float s4, fcFloat2 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create413(fcFloat4 vec1, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC void fcFloat8_set413(fcFloat8* self, fcFloat4 vec1, cl_float s4, fcFloat3 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create4211(fcFloat4 vec1, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC void fcFloat8_set4211(fcFloat8* self, fcFloat4 vec1, fcFloat2 vec2, cl_float s6, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create422(fcFloat4 vec1, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC void fcFloat8_set422(fcFloat8* self, fcFloat4 vec1, fcFloat2 vec2, fcFloat2 vec3);
FANCIER_STATIC fcFloat8 fcFloat8_create431(fcFloat4 vec1, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC void fcFloat8_set431(fcFloat8* self, fcFloat4 vec1, fcFloat3 vec2, cl_float s7);
FANCIER_STATIC fcFloat8 fcFloat8_create44(fcFloat4 vec1, fcFloat4 vec2);
FANCIER_STATIC void fcFloat8_set44(fcFloat8* self, fcFloat4 vec1, fcFloat4 vec2);
FANCIER_STATIC fcFloat8 fcFloat8_create8(fcFloat8 vec1);
FANCIER_STATIC void fcFloat8_set8(fcFloat8* self, fcFloat8 vec1);

FANCIER_STATIC fcFloat4 fcFloat8_odd(fcFloat8 a);
FANCIER_STATIC fcFloat4 fcFloat8_even(fcFloat8 a);

FANCIER_STATIC fcByte8 fcFloat8_convertByte8(fcFloat8 a);
FANCIER_STATIC fcShort8 fcFloat8_convertShort8(fcFloat8 a);
FANCIER_STATIC fcInt8 fcFloat8_convertInt8(fcFloat8 a);
FANCIER_STATIC fcLong8 fcFloat8_convertLong8(fcFloat8 a);
FANCIER_STATIC fcDouble8 fcFloat8_convertDouble8(fcFloat8 a);
FANCIER_STATIC fcFloat2 fcFloat8_asFloat2(fcFloat8 a);
FANCIER_STATIC fcFloat3 fcFloat8_asFloat3(fcFloat8 a);
FANCIER_STATIC fcFloat4 fcFloat8_asFloat4(fcFloat8 a);

FANCIER_STATIC fcInt8 fcFloat8_isEqual(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcFloat8_isNotEqual(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcFloat8_isGreater(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcFloat8_isGreaterEqual(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcFloat8_isLess(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcFloat8_isLessEqual(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_select(fcFloat8 a, fcFloat8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcFloat8_isFinite(fcFloat8 a);
FANCIER_STATIC fcInt8 fcFloat8_isInf(fcFloat8 a);
FANCIER_STATIC fcInt8 fcFloat8_isNaN(fcFloat8 a);
FANCIER_STATIC fcInt8 fcFloat8_isNormal(fcFloat8 a);
FANCIER_STATIC fcInt8 fcFloat8_isOrdered(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcInt8 fcFloat8_isUnordered(fcFloat8 a, fcFloat8 b);

FANCIER_STATIC cl_int fcFloat8_any(fcFloat8 a);
FANCIER_STATIC cl_int fcFloat8_all(fcFloat8 a);

FANCIER_STATIC fcFloat8 fcFloat8_neg(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_add(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_sub(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcDouble8 fcFloat8_muld(fcFloat8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcFloat8_mulf(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcDouble8 fcFloat8_mulkd(fcFloat8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcFloat8_mulkf(fcFloat8 a, cl_float k);
FANCIER_STATIC fcDouble8 fcFloat8_divd(fcFloat8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcFloat8_divf(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcDouble8 fcFloat8_divkd(fcFloat8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcFloat8_divkf(fcFloat8 a, cl_float k);
FANCIER_STATIC cl_float fcFloat8_dot(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC cl_double fcFloat8_distance(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC cl_double fcFloat8_length(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_normalize(fcFloat8 a);

FANCIER_STATIC fcFloat8 fcFloat8_abs(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_clamp(fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_STATIC fcFloat8 fcFloat8_max(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_maxMag(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_min(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_minMag(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_mix(fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_STATIC fcFloat8 fcFloat8_clampk(fcFloat8 v, cl_float min, cl_float max);
FANCIER_STATIC fcFloat8 fcFloat8_maxk(fcFloat8 x, cl_float y);
FANCIER_STATIC fcFloat8 fcFloat8_mink(fcFloat8 x, cl_float y);
FANCIER_STATIC fcFloat8 fcFloat8_mixk(fcFloat8 x, fcFloat8 y, cl_float a);
FANCIER_STATIC fcFloat8 fcFloat8_acos(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_acosh(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_asin(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_asinh(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_atan(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_atan2(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_atanh(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_cbrt(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_ceil(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_copySign(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_cos(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_cosh(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_erf(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_erfc(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_exp(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_exp10(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_exp2(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_expm1(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_fdim(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_floor(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_fma(fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_STATIC fcFloat8 fcFloat8_fmod(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_fract(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_frexp(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_getExponent(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_hypot(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_lgamma(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_log(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_log10(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_log1p(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_log2(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_logb(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_mad(fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_STATIC fcFloat8 fcFloat8_nextAfter(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_pow(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_powr(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_remainder(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_rint(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_round(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_rsqrt(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_signum(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_sin(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_sinh(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_smoothStep(fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_STATIC fcFloat8 fcFloat8_sqrt(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_step(fcFloat8 a, fcFloat8 b);
FANCIER_STATIC fcFloat8 fcFloat8_tan(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_tanh(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_tgamma(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_toDegrees(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_toRadians(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_trunc(fcFloat8 a);
FANCIER_STATIC fcFloat8 fcFloat8_scalb(fcFloat8 a, fcInt8 n);
FANCIER_STATIC fcFloat8 fcFloat8_ldexp(fcFloat8 a, fcInt8 n);
FANCIER_STATIC fcFloat8 fcFloat8_pown(fcFloat8 a, fcInt8 b);
FANCIER_STATIC fcFloat8 fcFloat8_rootn(fcFloat8 a, fcInt8 b);
FANCIER_STATIC fcFloat8 fcFloat8_smoothStepk(fcFloat8 a, fcFloat8 b, cl_float c);

FANCIER_STATIC fcDouble2 fcDouble2_create1(cl_double v);
FANCIER_STATIC void fcDouble2_set1(fcDouble2* self, cl_double v);
FANCIER_STATIC fcDouble2 fcDouble2_create11(cl_double a, cl_double b);
FANCIER_STATIC void fcDouble2_set11(fcDouble2* self, cl_double a, cl_double b);
FANCIER_STATIC fcDouble2 fcDouble2_create2(fcDouble2 vec1);
FANCIER_STATIC void fcDouble2_set2(fcDouble2* self, fcDouble2 vec1);

FANCIER_STATIC fcByte2 fcDouble2_convertByte2(fcDouble2 a);
FANCIER_STATIC fcShort2 fcDouble2_convertShort2(fcDouble2 a);
FANCIER_STATIC fcInt2 fcDouble2_convertInt2(fcDouble2 a);
FANCIER_STATIC fcLong2 fcDouble2_convertLong2(fcDouble2 a);
FANCIER_STATIC fcFloat2 fcDouble2_convertFloat2(fcDouble2 a);

FANCIER_STATIC fcInt2 fcDouble2_isEqual(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcInt2 fcDouble2_isNotEqual(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcInt2 fcDouble2_isGreater(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcInt2 fcDouble2_isGreaterEqual(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcInt2 fcDouble2_isLess(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcInt2 fcDouble2_isLessEqual(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_select(fcDouble2 a, fcDouble2 b, fcInt2 c);
FANCIER_STATIC fcInt2 fcDouble2_isFinite(fcDouble2 a);
FANCIER_STATIC fcInt2 fcDouble2_isInf(fcDouble2 a);
FANCIER_STATIC fcInt2 fcDouble2_isNaN(fcDouble2 a);
FANCIER_STATIC fcInt2 fcDouble2_isNormal(fcDouble2 a);
FANCIER_STATIC fcInt2 fcDouble2_isOrdered(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcInt2 fcDouble2_isUnordered(fcDouble2 a, fcDouble2 b);

FANCIER_STATIC cl_int fcDouble2_any(fcDouble2 a);
FANCIER_STATIC cl_int fcDouble2_all(fcDouble2 a);

FANCIER_STATIC fcDouble2 fcDouble2_neg(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_add(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_sub(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_muld(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcDouble2_mulf(fcDouble2 a, fcFloat2 b);
FANCIER_STATIC fcDouble2 fcDouble2_mulkd(fcDouble2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcDouble2_mulkf(fcDouble2 a, cl_float k);
FANCIER_STATIC fcDouble2 fcDouble2_divd(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcFloat2 fcDouble2_divf(fcDouble2 a, fcFloat2 b);
FANCIER_STATIC fcDouble2 fcDouble2_divkd(fcDouble2 a, cl_double k);
FANCIER_STATIC fcFloat2 fcDouble2_divkf(fcDouble2 a, cl_float k);
FANCIER_STATIC cl_double fcDouble2_dot(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC cl_double fcDouble2_distance(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC cl_double fcDouble2_length(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_normalize(fcDouble2 a);

FANCIER_STATIC fcDouble2 fcDouble2_abs(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_clamp(fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_STATIC fcDouble2 fcDouble2_max(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_maxMag(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_min(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_minMag(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_mix(fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_STATIC fcDouble2 fcDouble2_clampk(fcDouble2 v, cl_double min, cl_double max);
FANCIER_STATIC fcDouble2 fcDouble2_maxk(fcDouble2 x, cl_double y);
FANCIER_STATIC fcDouble2 fcDouble2_mink(fcDouble2 x, cl_double y);
FANCIER_STATIC fcDouble2 fcDouble2_mixk(fcDouble2 x, fcDouble2 y, cl_double a);
FANCIER_STATIC fcDouble2 fcDouble2_acos(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_acosh(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_asin(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_asinh(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_atan(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_atan2(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_atanh(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_cbrt(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_ceil(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_copySign(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_cos(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_cosh(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_erf(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_erfc(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_exp(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_exp10(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_exp2(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_expm1(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_fdim(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_floor(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_fma(fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_STATIC fcDouble2 fcDouble2_fmod(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_fract(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_frexp(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_getExponent(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_hypot(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_lgamma(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_log(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_log10(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_log1p(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_log2(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_logb(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_mad(fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_STATIC fcDouble2 fcDouble2_nextAfter(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_pow(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_powr(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_remainder(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_rint(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_round(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_rsqrt(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_signum(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_sin(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_sinh(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_smoothStep(fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_STATIC fcDouble2 fcDouble2_sqrt(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_step(fcDouble2 a, fcDouble2 b);
FANCIER_STATIC fcDouble2 fcDouble2_tan(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_tanh(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_tgamma(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_toDegrees(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_toRadians(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_trunc(fcDouble2 a);
FANCIER_STATIC fcDouble2 fcDouble2_scalb(fcDouble2 a, fcInt2 n);
FANCIER_STATIC fcDouble2 fcDouble2_ldexp(fcDouble2 a, fcInt2 n);
FANCIER_STATIC fcDouble2 fcDouble2_pown(fcDouble2 a, fcInt2 b);
FANCIER_STATIC fcDouble2 fcDouble2_rootn(fcDouble2 a, fcInt2 b);
FANCIER_STATIC fcDouble2 fcDouble2_smoothStepk(fcDouble2 a, fcDouble2 b, cl_double c);

FANCIER_STATIC fcDouble3 fcDouble3_create1(cl_double v);
FANCIER_STATIC void fcDouble3_set1(fcDouble3* self, cl_double v);
FANCIER_STATIC fcDouble3 fcDouble3_create111(cl_double a, cl_double b, cl_double c);
FANCIER_STATIC void fcDouble3_set111(fcDouble3* self, cl_double a, cl_double b, cl_double c);
FANCIER_STATIC fcDouble3 fcDouble3_create12(cl_double x, fcDouble2 vec1);
FANCIER_STATIC void fcDouble3_set12(fcDouble3* self, cl_double x, fcDouble2 vec1);
FANCIER_STATIC fcDouble3 fcDouble3_create21(fcDouble2 vec1, cl_double z);
FANCIER_STATIC void fcDouble3_set21(fcDouble3* self, fcDouble2 vec1, cl_double z);
FANCIER_STATIC fcDouble3 fcDouble3_create3(fcDouble3 vec1);
FANCIER_STATIC void fcDouble3_set3(fcDouble3* self, fcDouble3 vec1);

FANCIER_STATIC fcByte3 fcDouble3_convertByte3(fcDouble3 a);
FANCIER_STATIC fcShort3 fcDouble3_convertShort3(fcDouble3 a);
FANCIER_STATIC fcInt3 fcDouble3_convertInt3(fcDouble3 a);
FANCIER_STATIC fcLong3 fcDouble3_convertLong3(fcDouble3 a);
FANCIER_STATIC fcFloat3 fcDouble3_convertFloat3(fcDouble3 a);
FANCIER_STATIC fcDouble2 fcDouble3_asDouble2(fcDouble3 a);

FANCIER_STATIC fcInt3 fcDouble3_isEqual(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcInt3 fcDouble3_isNotEqual(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcInt3 fcDouble3_isGreater(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcInt3 fcDouble3_isGreaterEqual(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcInt3 fcDouble3_isLess(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcInt3 fcDouble3_isLessEqual(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_select(fcDouble3 a, fcDouble3 b, fcInt3 c);
FANCIER_STATIC fcInt3 fcDouble3_isFinite(fcDouble3 a);
FANCIER_STATIC fcInt3 fcDouble3_isInf(fcDouble3 a);
FANCIER_STATIC fcInt3 fcDouble3_isNaN(fcDouble3 a);
FANCIER_STATIC fcInt3 fcDouble3_isNormal(fcDouble3 a);
FANCIER_STATIC fcInt3 fcDouble3_isOrdered(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcInt3 fcDouble3_isUnordered(fcDouble3 a, fcDouble3 b);

FANCIER_STATIC cl_int fcDouble3_any(fcDouble3 a);
FANCIER_STATIC cl_int fcDouble3_all(fcDouble3 a);

FANCIER_STATIC fcDouble3 fcDouble3_neg(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_add(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_sub(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_muld(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcDouble3_mulf(fcDouble3 a, fcFloat3 b);
FANCIER_STATIC fcDouble3 fcDouble3_mulkd(fcDouble3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcDouble3_mulkf(fcDouble3 a, cl_float k);
FANCIER_STATIC fcDouble3 fcDouble3_divd(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcFloat3 fcDouble3_divf(fcDouble3 a, fcFloat3 b);
FANCIER_STATIC fcDouble3 fcDouble3_divkd(fcDouble3 a, cl_double k);
FANCIER_STATIC fcFloat3 fcDouble3_divkf(fcDouble3 a, cl_float k);
FANCIER_STATIC fcDouble3 fcDouble3_cross(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC cl_double fcDouble3_dot(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC cl_double fcDouble3_distance(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC cl_double fcDouble3_length(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_normalize(fcDouble3 a);

FANCIER_STATIC fcDouble3 fcDouble3_abs(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_clamp(fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_STATIC fcDouble3 fcDouble3_max(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_maxMag(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_min(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_minMag(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_mix(fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_STATIC fcDouble3 fcDouble3_clampk(fcDouble3 v, cl_double min, cl_double max);
FANCIER_STATIC fcDouble3 fcDouble3_maxk(fcDouble3 x, cl_double y);
FANCIER_STATIC fcDouble3 fcDouble3_mink(fcDouble3 x, cl_double y);
FANCIER_STATIC fcDouble3 fcDouble3_mixk(fcDouble3 x, fcDouble3 y, cl_double a);
FANCIER_STATIC fcDouble3 fcDouble3_acos(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_acosh(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_asin(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_asinh(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_atan(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_atan2(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_atanh(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_cbrt(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_ceil(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_copySign(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_cos(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_cosh(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_erf(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_erfc(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_exp(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_exp10(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_exp2(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_expm1(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_fdim(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_floor(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_fma(fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_STATIC fcDouble3 fcDouble3_fmod(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_fract(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_frexp(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_getExponent(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_hypot(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_lgamma(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_log(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_log10(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_log1p(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_log2(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_logb(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_mad(fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_STATIC fcDouble3 fcDouble3_nextAfter(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_pow(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_powr(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_remainder(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_rint(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_round(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_rsqrt(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_signum(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_sin(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_sinh(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_smoothStep(fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_STATIC fcDouble3 fcDouble3_sqrt(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_step(fcDouble3 a, fcDouble3 b);
FANCIER_STATIC fcDouble3 fcDouble3_tan(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_tanh(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_tgamma(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_toDegrees(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_toRadians(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_trunc(fcDouble3 a);
FANCIER_STATIC fcDouble3 fcDouble3_scalb(fcDouble3 a, fcInt3 n);
FANCIER_STATIC fcDouble3 fcDouble3_ldexp(fcDouble3 a, fcInt3 n);
FANCIER_STATIC fcDouble3 fcDouble3_pown(fcDouble3 a, fcInt3 b);
FANCIER_STATIC fcDouble3 fcDouble3_rootn(fcDouble3 a, fcInt3 b);
FANCIER_STATIC fcDouble3 fcDouble3_smoothStepk(fcDouble3 a, fcDouble3 b, cl_double c);

FANCIER_STATIC fcDouble4 fcDouble4_create1(cl_double v);
FANCIER_STATIC void fcDouble4_set1(fcDouble4* self, cl_double v);
FANCIER_STATIC fcDouble4 fcDouble4_create1111(cl_double a, cl_double b, cl_double c, cl_double d);
FANCIER_STATIC void fcDouble4_set1111(fcDouble4* self, cl_double a, cl_double b, cl_double c, cl_double d);
FANCIER_STATIC fcDouble4 fcDouble4_create112(cl_double x, cl_double y, fcDouble2 vec1);
FANCIER_STATIC void fcDouble4_set112(fcDouble4* self, cl_double x, cl_double y, fcDouble2 vec1);
FANCIER_STATIC fcDouble4 fcDouble4_create121(cl_double x, fcDouble2 vec1, cl_double w);
FANCIER_STATIC void fcDouble4_set121(fcDouble4* self, cl_double x, fcDouble2 vec1, cl_double w);
FANCIER_STATIC fcDouble4 fcDouble4_create13(cl_double x, fcDouble3 vec1);
FANCIER_STATIC void fcDouble4_set13(fcDouble4* self, cl_double x, fcDouble3 vec1);
FANCIER_STATIC fcDouble4 fcDouble4_create211(fcDouble2 vec1, cl_double z, cl_double w);
FANCIER_STATIC void fcDouble4_set211(fcDouble4* self, fcDouble2 vec1, cl_double z, cl_double w);
FANCIER_STATIC fcDouble4 fcDouble4_create22(fcDouble2 vec1, fcDouble2 vec2);
FANCIER_STATIC void fcDouble4_set22(fcDouble4* self, fcDouble2 vec1, fcDouble2 vec2);
FANCIER_STATIC fcDouble4 fcDouble4_create31(fcDouble3 vec1, cl_double w);
FANCIER_STATIC void fcDouble4_set31(fcDouble4* self, fcDouble3 vec1, cl_double w);
FANCIER_STATIC fcDouble4 fcDouble4_create4(fcDouble4 vec1);
FANCIER_STATIC void fcDouble4_set4(fcDouble4* self, fcDouble4 vec1);

FANCIER_STATIC fcDouble2 fcDouble4_odd(fcDouble4 a);
FANCIER_STATIC fcDouble2 fcDouble4_even(fcDouble4 a);

FANCIER_STATIC fcByte4 fcDouble4_convertByte4(fcDouble4 a);
FANCIER_STATIC fcShort4 fcDouble4_convertShort4(fcDouble4 a);
FANCIER_STATIC fcInt4 fcDouble4_convertInt4(fcDouble4 a);
FANCIER_STATIC fcLong4 fcDouble4_convertLong4(fcDouble4 a);
FANCIER_STATIC fcFloat4 fcDouble4_convertFloat4(fcDouble4 a);
FANCIER_STATIC fcDouble2 fcDouble4_asDouble2(fcDouble4 a);
FANCIER_STATIC fcDouble3 fcDouble4_asDouble3(fcDouble4 a);

FANCIER_STATIC fcInt4 fcDouble4_isEqual(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcInt4 fcDouble4_isNotEqual(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcInt4 fcDouble4_isGreater(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcInt4 fcDouble4_isGreaterEqual(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcInt4 fcDouble4_isLess(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcInt4 fcDouble4_isLessEqual(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_select(fcDouble4 a, fcDouble4 b, fcInt4 c);
FANCIER_STATIC fcInt4 fcDouble4_isFinite(fcDouble4 a);
FANCIER_STATIC fcInt4 fcDouble4_isInf(fcDouble4 a);
FANCIER_STATIC fcInt4 fcDouble4_isNaN(fcDouble4 a);
FANCIER_STATIC fcInt4 fcDouble4_isNormal(fcDouble4 a);
FANCIER_STATIC fcInt4 fcDouble4_isOrdered(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcInt4 fcDouble4_isUnordered(fcDouble4 a, fcDouble4 b);

FANCIER_STATIC cl_int fcDouble4_any(fcDouble4 a);
FANCIER_STATIC cl_int fcDouble4_all(fcDouble4 a);

FANCIER_STATIC fcDouble4 fcDouble4_neg(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_add(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_sub(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_muld(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcDouble4_mulf(fcDouble4 a, fcFloat4 b);
FANCIER_STATIC fcDouble4 fcDouble4_mulkd(fcDouble4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcDouble4_mulkf(fcDouble4 a, cl_float k);
FANCIER_STATIC fcDouble4 fcDouble4_divd(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcFloat4 fcDouble4_divf(fcDouble4 a, fcFloat4 b);
FANCIER_STATIC fcDouble4 fcDouble4_divkd(fcDouble4 a, cl_double k);
FANCIER_STATIC fcFloat4 fcDouble4_divkf(fcDouble4 a, cl_float k);
FANCIER_STATIC fcDouble4 fcDouble4_cross(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC cl_double fcDouble4_dot(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC cl_double fcDouble4_distance(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC cl_double fcDouble4_length(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_normalize(fcDouble4 a);

FANCIER_STATIC fcDouble4 fcDouble4_abs(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_clamp(fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_STATIC fcDouble4 fcDouble4_max(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_maxMag(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_min(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_minMag(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_mix(fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_STATIC fcDouble4 fcDouble4_clampk(fcDouble4 v, cl_double min, cl_double max);
FANCIER_STATIC fcDouble4 fcDouble4_maxk(fcDouble4 x, cl_double y);
FANCIER_STATIC fcDouble4 fcDouble4_mink(fcDouble4 x, cl_double y);
FANCIER_STATIC fcDouble4 fcDouble4_mixk(fcDouble4 x, fcDouble4 y, cl_double a);
FANCIER_STATIC fcDouble4 fcDouble4_acos(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_acosh(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_asin(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_asinh(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_atan(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_atan2(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_atanh(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_cbrt(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_ceil(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_copySign(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_cos(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_cosh(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_erf(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_erfc(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_exp(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_exp10(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_exp2(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_expm1(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_fdim(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_floor(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_fma(fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_STATIC fcDouble4 fcDouble4_fmod(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_fract(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_frexp(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_getExponent(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_hypot(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_lgamma(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_log(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_log10(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_log1p(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_log2(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_logb(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_mad(fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_STATIC fcDouble4 fcDouble4_nextAfter(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_pow(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_powr(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_remainder(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_rint(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_round(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_rsqrt(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_signum(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_sin(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_sinh(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_smoothStep(fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_STATIC fcDouble4 fcDouble4_sqrt(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_step(fcDouble4 a, fcDouble4 b);
FANCIER_STATIC fcDouble4 fcDouble4_tan(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_tanh(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_tgamma(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_toDegrees(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_toRadians(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_trunc(fcDouble4 a);
FANCIER_STATIC fcDouble4 fcDouble4_scalb(fcDouble4 a, fcInt4 n);
FANCIER_STATIC fcDouble4 fcDouble4_ldexp(fcDouble4 a, fcInt4 n);
FANCIER_STATIC fcDouble4 fcDouble4_pown(fcDouble4 a, fcInt4 b);
FANCIER_STATIC fcDouble4 fcDouble4_rootn(fcDouble4 a, fcInt4 b);
FANCIER_STATIC fcDouble4 fcDouble4_smoothStepk(fcDouble4 a, fcDouble4 b, cl_double c);

FANCIER_STATIC fcDouble8 fcDouble8_create1(cl_double v);
FANCIER_STATIC void fcDouble8_set1(fcDouble8* self, cl_double v);
FANCIER_STATIC fcDouble8 fcDouble8_create11111111(cl_double a, cl_double b, cl_double c, cl_double d, cl_double e, cl_double f, cl_double g, cl_double h);
FANCIER_STATIC void fcDouble8_set11111111(fcDouble8* self, cl_double a, cl_double b, cl_double c, cl_double d, cl_double e, cl_double f, cl_double g, cl_double h);
FANCIER_STATIC fcDouble8 fcDouble8_create1111112(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec1);
FANCIER_STATIC void fcDouble8_set1111112(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec1);
FANCIER_STATIC fcDouble8 fcDouble8_create1111121(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble2 vec1, cl_double s7);
FANCIER_STATIC void fcDouble8_set1111121(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble2 vec1, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create111113(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble3 vec1);
FANCIER_STATIC void fcDouble8_set111113(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble3 vec1);
FANCIER_STATIC fcDouble8 fcDouble8_create1111211(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set1111211(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create111122(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set111122(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create111131(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble3 vec1, cl_double s7);
FANCIER_STATIC void fcDouble8_set111131(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble3 vec1, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create11114(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble4 vec1);
FANCIER_STATIC void fcDouble8_set11114(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble4 vec1);
FANCIER_STATIC fcDouble8 fcDouble8_create1112111(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set1112111(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create111212(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set111212(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create111221(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set111221(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create11123(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set11123(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create111311(cl_double x, cl_double y, cl_double z, fcDouble3 vec1, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set111311(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble3 vec1, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create11132(cl_double x, cl_double y, cl_double z, fcDouble3 vec1, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set11132(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble3 vec1, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create11141(cl_double x, cl_double y, cl_double z, fcDouble4 vec1, cl_double s7);
FANCIER_STATIC void fcDouble8_set11141(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble4 vec1, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1121111(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set1121111(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create112112(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set112112(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create112121(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set112121(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create11213(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set11213(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create112211(cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set112211(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create11222(cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set11222(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create11231(cl_double x, cl_double y, fcDouble2 vec1, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set11231(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1124(cl_double x, cl_double y, fcDouble2 vec1, fcDouble4 vec2);
FANCIER_STATIC void fcDouble8_set1124(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble4 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create113111(cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set113111(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create11312(cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set11312(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create11321(cl_double x, cl_double y, fcDouble3 vec1, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set11321(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1133(cl_double x, cl_double y, fcDouble3 vec1, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set1133(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create11411(cl_double x, cl_double y, fcDouble4 vec1, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set11411(fcDouble8* self, cl_double x, cl_double y, fcDouble4 vec1, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1142(cl_double x, cl_double y, fcDouble4 vec1, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set1142(fcDouble8* self, cl_double x, cl_double y, fcDouble4 vec1, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create1211111(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set1211111(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create121112(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set121112(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create121121(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set121121(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create12113(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set12113(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create121211(cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set121211(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create12122(cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set12122(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create12131(cl_double x, fcDouble2 vec1, cl_double w, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set12131(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1214(cl_double x, fcDouble2 vec1, cl_double w, fcDouble4 vec2);
FANCIER_STATIC void fcDouble8_set1214(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble4 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create122111(cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set122111(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create12212(cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set12212(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create12221(cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC void fcDouble8_set12221(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1223(cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3);
FANCIER_STATIC void fcDouble8_set1223(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create12311(cl_double x, fcDouble2 vec1, fcDouble3 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set12311(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble3 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1232(cl_double x, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set1232(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create1241(cl_double x, fcDouble2 vec1, fcDouble4 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set1241(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble4 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create131111(cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set131111(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create13112(cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set13112(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create13121(cl_double x, fcDouble3 vec1, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set13121(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1313(cl_double x, fcDouble3 vec1, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set1313(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create13211(cl_double x, fcDouble3 vec1, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set13211(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1322(cl_double x, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set1322(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create1331(cl_double x, fcDouble3 vec1, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set1331(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create134(cl_double x, fcDouble3 vec1, fcDouble4 vec2);
FANCIER_STATIC void fcDouble8_set134(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble4 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create14111(cl_double x, fcDouble4 vec1, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set14111(fcDouble8* self, cl_double x, fcDouble4 vec1, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create1412(cl_double x, fcDouble4 vec1, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set1412(fcDouble8* self, cl_double x, fcDouble4 vec1, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create1421(cl_double x, fcDouble4 vec1, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set1421(fcDouble8* self, cl_double x, fcDouble4 vec1, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create143(cl_double x, fcDouble4 vec1, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set143(fcDouble8* self, cl_double x, fcDouble4 vec1, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create2111111(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set2111111(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create211112(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set211112(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create211121(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set211121(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create21113(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set21113(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create211211(fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set211211(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create21122(fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set21122(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create21131(fcDouble2 vec1, cl_double z, cl_double w, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set21131(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create2114(fcDouble2 vec1, cl_double z, cl_double w, fcDouble4 vec2);
FANCIER_STATIC void fcDouble8_set2114(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble4 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create212111(fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set212111(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create21212(fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set21212(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create21221(fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC void fcDouble8_set21221(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create2123(fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble3 vec3);
FANCIER_STATIC void fcDouble8_set2123(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble3 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create21311(fcDouble2 vec1, cl_double z, fcDouble3 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set21311(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble3 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create2132(fcDouble2 vec1, cl_double z, fcDouble3 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set2132(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble3 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create2141(fcDouble2 vec1, cl_double z, fcDouble4 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set2141(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble4 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create221111(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set221111(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create22112(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set22112(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create22121(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC void fcDouble8_set22121(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create2213(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble3 vec3);
FANCIER_STATIC void fcDouble8_set2213(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble3 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create22211(fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set22211(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create2222(fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, fcDouble2 vec4);
FANCIER_STATIC void fcDouble8_set2222(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, fcDouble2 vec4);
FANCIER_STATIC fcDouble8 fcDouble8_create2231(fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3, cl_double s7);
FANCIER_STATIC void fcDouble8_set2231(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create224(fcDouble2 vec1, fcDouble2 vec2, fcDouble4 vec3);
FANCIER_STATIC void fcDouble8_set224(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble4 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create23111(fcDouble2 vec1, fcDouble3 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set23111(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create2312(fcDouble2 vec1, fcDouble3 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set2312(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create2321(fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC void fcDouble8_set2321(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create233(fcDouble2 vec1, fcDouble3 vec2, fcDouble3 vec3);
FANCIER_STATIC void fcDouble8_set233(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, fcDouble3 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create2411(fcDouble2 vec1, fcDouble4 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set2411(fcDouble8* self, fcDouble2 vec1, fcDouble4 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create242(fcDouble2 vec1, fcDouble4 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set242(fcDouble8* self, fcDouble2 vec1, fcDouble4 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create311111(fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set311111(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create31112(fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set31112(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create31121(fcDouble3 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set31121(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create3113(fcDouble3 vec1, cl_double w, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set3113(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create31211(fcDouble3 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set31211(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create3122(fcDouble3 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set3122(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create3131(fcDouble3 vec1, cl_double w, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set3131(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create314(fcDouble3 vec1, cl_double w, fcDouble4 vec2);
FANCIER_STATIC void fcDouble8_set314(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble4 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create32111(fcDouble3 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set32111(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create3212(fcDouble3 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set3212(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create3221(fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC void fcDouble8_set3221(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create323(fcDouble3 vec1, fcDouble2 vec2, fcDouble3 vec3);
FANCIER_STATIC void fcDouble8_set323(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, fcDouble3 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create3311(fcDouble3 vec1, fcDouble3 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set3311(fcDouble8* self, fcDouble3 vec1, fcDouble3 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create332(fcDouble3 vec1, fcDouble3 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set332(fcDouble8* self, fcDouble3 vec1, fcDouble3 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create341(fcDouble3 vec1, fcDouble4 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set341(fcDouble8* self, fcDouble3 vec1, fcDouble4 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create41111(fcDouble4 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set41111(fcDouble8* self, fcDouble4 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create4112(fcDouble4 vec1, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC void fcDouble8_set4112(fcDouble8* self, fcDouble4 vec1, cl_double s4, cl_double s5, fcDouble2 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create4121(fcDouble4 vec1, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set4121(fcDouble8* self, fcDouble4 vec1, cl_double s4, fcDouble2 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create413(fcDouble4 vec1, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC void fcDouble8_set413(fcDouble8* self, fcDouble4 vec1, cl_double s4, fcDouble3 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create4211(fcDouble4 vec1, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC void fcDouble8_set4211(fcDouble8* self, fcDouble4 vec1, fcDouble2 vec2, cl_double s6, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create422(fcDouble4 vec1, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC void fcDouble8_set422(fcDouble8* self, fcDouble4 vec1, fcDouble2 vec2, fcDouble2 vec3);
FANCIER_STATIC fcDouble8 fcDouble8_create431(fcDouble4 vec1, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC void fcDouble8_set431(fcDouble8* self, fcDouble4 vec1, fcDouble3 vec2, cl_double s7);
FANCIER_STATIC fcDouble8 fcDouble8_create44(fcDouble4 vec1, fcDouble4 vec2);
FANCIER_STATIC void fcDouble8_set44(fcDouble8* self, fcDouble4 vec1, fcDouble4 vec2);
FANCIER_STATIC fcDouble8 fcDouble8_create8(fcDouble8 vec1);
FANCIER_STATIC void fcDouble8_set8(fcDouble8* self, fcDouble8 vec1);

FANCIER_STATIC fcDouble4 fcDouble8_odd(fcDouble8 a);
FANCIER_STATIC fcDouble4 fcDouble8_even(fcDouble8 a);

FANCIER_STATIC fcByte8 fcDouble8_convertByte8(fcDouble8 a);
FANCIER_STATIC fcShort8 fcDouble8_convertShort8(fcDouble8 a);
FANCIER_STATIC fcInt8 fcDouble8_convertInt8(fcDouble8 a);
FANCIER_STATIC fcLong8 fcDouble8_convertLong8(fcDouble8 a);
FANCIER_STATIC fcFloat8 fcDouble8_convertFloat8(fcDouble8 a);
FANCIER_STATIC fcDouble2 fcDouble8_asDouble2(fcDouble8 a);
FANCIER_STATIC fcDouble3 fcDouble8_asDouble3(fcDouble8 a);
FANCIER_STATIC fcDouble4 fcDouble8_asDouble4(fcDouble8 a);

FANCIER_STATIC fcInt8 fcDouble8_isEqual(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcInt8 fcDouble8_isNotEqual(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcInt8 fcDouble8_isGreater(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcInt8 fcDouble8_isGreaterEqual(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcInt8 fcDouble8_isLess(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcInt8 fcDouble8_isLessEqual(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_select(fcDouble8 a, fcDouble8 b, fcInt8 c);
FANCIER_STATIC fcInt8 fcDouble8_isFinite(fcDouble8 a);
FANCIER_STATIC fcInt8 fcDouble8_isInf(fcDouble8 a);
FANCIER_STATIC fcInt8 fcDouble8_isNaN(fcDouble8 a);
FANCIER_STATIC fcInt8 fcDouble8_isNormal(fcDouble8 a);
FANCIER_STATIC fcInt8 fcDouble8_isOrdered(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcInt8 fcDouble8_isUnordered(fcDouble8 a, fcDouble8 b);

FANCIER_STATIC cl_int fcDouble8_any(fcDouble8 a);
FANCIER_STATIC cl_int fcDouble8_all(fcDouble8 a);

FANCIER_STATIC fcDouble8 fcDouble8_neg(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_add(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_sub(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_muld(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcDouble8_mulf(fcDouble8 a, fcFloat8 b);
FANCIER_STATIC fcDouble8 fcDouble8_mulkd(fcDouble8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcDouble8_mulkf(fcDouble8 a, cl_float k);
FANCIER_STATIC fcDouble8 fcDouble8_divd(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcFloat8 fcDouble8_divf(fcDouble8 a, fcFloat8 b);
FANCIER_STATIC fcDouble8 fcDouble8_divkd(fcDouble8 a, cl_double k);
FANCIER_STATIC fcFloat8 fcDouble8_divkf(fcDouble8 a, cl_float k);
FANCIER_STATIC cl_double fcDouble8_dot(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC cl_double fcDouble8_distance(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC cl_double fcDouble8_length(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_normalize(fcDouble8 a);

FANCIER_STATIC fcDouble8 fcDouble8_abs(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_clamp(fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_STATIC fcDouble8 fcDouble8_max(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_maxMag(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_min(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_minMag(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_mix(fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_STATIC fcDouble8 fcDouble8_clampk(fcDouble8 v, cl_double min, cl_double max);
FANCIER_STATIC fcDouble8 fcDouble8_maxk(fcDouble8 x, cl_double y);
FANCIER_STATIC fcDouble8 fcDouble8_mink(fcDouble8 x, cl_double y);
FANCIER_STATIC fcDouble8 fcDouble8_mixk(fcDouble8 x, fcDouble8 y, cl_double a);
FANCIER_STATIC fcDouble8 fcDouble8_acos(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_acosh(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_asin(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_asinh(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_atan(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_atan2(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_atanh(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_cbrt(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_ceil(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_copySign(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_cos(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_cosh(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_erf(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_erfc(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_exp(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_exp10(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_exp2(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_expm1(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_fdim(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_floor(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_fma(fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_STATIC fcDouble8 fcDouble8_fmod(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_fract(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_frexp(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_getExponent(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_hypot(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_lgamma(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_log(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_log10(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_log1p(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_log2(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_logb(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_mad(fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_STATIC fcDouble8 fcDouble8_nextAfter(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_pow(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_powr(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_remainder(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_rint(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_round(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_rsqrt(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_signum(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_sin(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_sinh(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_smoothStep(fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_STATIC fcDouble8 fcDouble8_sqrt(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_step(fcDouble8 a, fcDouble8 b);
FANCIER_STATIC fcDouble8 fcDouble8_tan(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_tanh(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_tgamma(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_toDegrees(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_toRadians(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_trunc(fcDouble8 a);
FANCIER_STATIC fcDouble8 fcDouble8_scalb(fcDouble8 a, fcInt8 n);
FANCIER_STATIC fcDouble8 fcDouble8_ldexp(fcDouble8 a, fcInt8 n);
FANCIER_STATIC fcDouble8 fcDouble8_pown(fcDouble8 a, fcInt8 b);
FANCIER_STATIC fcDouble8 fcDouble8_rootn(fcDouble8 a, fcInt8 b);
FANCIER_STATIC fcDouble8 fcDouble8_smoothStepk(fcDouble8 a, fcDouble8 b, cl_double c);


// Native implementations

//
// fcByte2
//

fcByte2 fcByte2_create1(cl_byte v) {
  return fcByte2_create11(v, v);
}

void fcByte2_set1(fcByte2* self, cl_byte v) {
  fcByte2_set11(self, v, v);
}

fcByte2 fcByte2_create11(cl_byte x, cl_byte y) {
  fcByte2 result;
  fcByte2_set11(&result, x, y);
  return result;
}

void fcByte2_set11(fcByte2* self, cl_byte x, cl_byte y) {
  self->s[0] = x;
  self->s[1] = y;
}

fcByte2 fcByte2_create2(fcByte2 vec1) {
  return fcByte2_create11(vec1.s[0], vec1.s[1]);
}

void fcByte2_set2(fcByte2* self, fcByte2 vec1) {
  fcByte2_set11(self, vec1.s[0], vec1.s[1]);
}

fcShort2 fcByte2_convertShort2(fcByte2 a) {
  return fcShort2_create11((cl_short)(a.s[0] & 0xff), (cl_short)(a.s[1] & 0xff));
}

fcInt2 fcByte2_convertInt2(fcByte2 a) {
  return fcInt2_create11((cl_int)(a.s[0] & 0xff), (cl_int)(a.s[1] & 0xff));
}

fcLong2 fcByte2_convertLong2(fcByte2 a) {
  return fcLong2_create11((cl_long)(a.s[0] & 0xff), (cl_long)(a.s[1] & 0xff));
}

fcFloat2 fcByte2_convertFloat2(fcByte2 a) {
  return fcFloat2_create11((cl_float)(a.s[0] & 0xff), (cl_float)(a.s[1] & 0xff));
}

fcDouble2 fcByte2_convertDouble2(fcByte2 a) {
  return fcDouble2_create11((cl_double)(a.s[0] & 0xff), (cl_double)(a.s[1] & 0xff));
}

fcInt2 fcByte2_isEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0);
}

fcInt2 fcByte2_isNotEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0);
}

fcInt2 fcByte2_isGreater(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0);
}

fcInt2 fcByte2_isGreaterEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0);
}

fcInt2 fcByte2_isLess(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0);
}

fcInt2 fcByte2_isLessEqual(fcByte2 a, fcByte2 b) {
  return fcInt2_create11(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0);
}

fcByte2 fcByte2_select(fcByte2 a, fcByte2 b, fcInt2 c) {
  return fcByte2_create11(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]));
}

cl_int fcByte2_any(fcByte2 a) {
  return a.s[0] != '\0' || a.s[1] != '\0';
}

cl_int fcByte2_all(fcByte2 a) {
  return !(a.s[0] == '\0' || a.s[1] == '\0');
}

fcByte2 fcByte2_neg(fcByte2 a) {
  return fcByte2_create11(-a.s[0], -a.s[1]);
}

fcByte2 fcByte2_add(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] + b.s[0], a.s[1] + b.s[1]);
}

fcByte2 fcByte2_sub(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] - b.s[0], a.s[1] - b.s[1]);
}

fcByte2 fcByte2_mul(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] * b.s[0], a.s[1] * b.s[1]);
}

fcDouble2 fcByte2_muld(fcByte2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]));
}

fcFloat2 fcByte2_mulf(fcByte2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]));
}

fcByte2 fcByte2_mulk(fcByte2 a, cl_byte k) {
  return fcByte2_create11(a.s[0] * k, a.s[1] * k);
}

fcDouble2 fcByte2_mulkd(fcByte2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k));
}

fcFloat2 fcByte2_mulkf(fcByte2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k));
}

fcByte2 fcByte2_div(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] / b.s[0], a.s[1] / b.s[1]);
}

fcDouble2 fcByte2_divd(fcByte2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]));
}

fcFloat2 fcByte2_divf(fcByte2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]));
}

fcByte2 fcByte2_divk(fcByte2 a, cl_byte k) {
  return fcByte2_create11(a.s[0] / k, a.s[1] / k);
}

fcDouble2 fcByte2_divkd(fcByte2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k));
}

fcFloat2 fcByte2_divkf(fcByte2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k));
}

fcByte2 fcByte2_mod(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] % b.s[0], a.s[1] % b.s[1]);
}

fcByte2 fcByte2_modk(fcByte2 a, cl_byte k) {
  return fcByte2_create11(a.s[0] % k, a.s[1] % k);
}

fcByte2 fcByte2_bitAnd(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] & b.s[0], a.s[1] & b.s[1]);
}

fcByte2 fcByte2_bitOr(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] | b.s[0], a.s[1] | b.s[1]);
}

fcByte2 fcByte2_bitXor(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1]);
}

fcByte2 fcByte2_bitNot(fcByte2 a) {
  return fcByte2_create11(~a.s[0], ~a.s[1]);
}

fcByte2 fcByte2_abs(fcByte2 a) {
  return fcByte2_create11(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]));
}

fcByte2 fcByte2_clamp(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]));
}

fcByte2 fcByte2_max(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]));
}

fcByte2 fcByte2_maxMag(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]));
}

fcByte2 fcByte2_min(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]));
}

fcByte2 fcByte2_minMag(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]));
}

fcByte2 fcByte2_mix(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]));
}

fcByte2 fcByte2_clampk(fcByte2 v, cl_byte min, cl_byte max) {
  return fcByte2_create11(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max));
}

fcByte2 fcByte2_maxk(fcByte2 x, cl_byte y) {
  return fcByte2_create11(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y));
}

fcByte2 fcByte2_mink(fcByte2 x, cl_byte y) {
  return fcByte2_create11(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y));
}

fcByte2 fcByte2_mixk(fcByte2 x, fcByte2 y, cl_byte a) {
  return fcByte2_create11(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a));
}

fcByte2 fcByte2_absDiff(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]));
}

fcByte2 fcByte2_addSat(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_addSatc(a.s[0], b.s[0]), fcMath_addSatc(a.s[1], b.s[1]));
}

fcByte2 fcByte2_clz(fcByte2 a) {
  return fcByte2_create11(fcMath_clzc(a.s[0]), fcMath_clzc(a.s[1]));
}

fcByte2 fcByte2_hadd(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_haddc(a.s[0], b.s[0]), fcMath_haddc(a.s[1], b.s[1]));
}

fcByte2 fcByte2_madHi(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_madHic(a.s[0], b.s[0], c.s[0]), fcMath_madHic(a.s[1], b.s[1], c.s[1]));
}

fcByte2 fcByte2_madSat(fcByte2 a, fcByte2 b, fcByte2 c) {
  return fcByte2_create11(fcMath_madSatc(a.s[0], b.s[0], c.s[0]), fcMath_madSatc(a.s[1], b.s[1], c.s[1]));
}

fcByte2 fcByte2_mulHi(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_mulHic(a.s[0], b.s[0]), fcMath_mulHic(a.s[1], b.s[1]));
}

fcByte2 fcByte2_rhadd(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_rhaddc(a.s[0], b.s[0]), fcMath_rhaddc(a.s[1], b.s[1]));
}

fcByte2 fcByte2_rotate(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_rotatec(a.s[0], b.s[0]), fcMath_rotatec(a.s[1], b.s[1]));
}

fcByte2 fcByte2_subSat(fcByte2 a, fcByte2 b) {
  return fcByte2_create11(fcMath_subSatc(a.s[0], b.s[0]), fcMath_subSatc(a.s[1], b.s[1]));
}


//
// fcByte3
//

fcByte3 fcByte3_create1(cl_byte v) {
  return fcByte3_create111(v, v, v);
}

void fcByte3_set1(fcByte3* self, cl_byte v) {
  fcByte3_set111(self, v, v, v);
}

fcByte3 fcByte3_create111(cl_byte x, cl_byte y, cl_byte z) {
  fcByte3 result;
  fcByte3_set111(&result, x, y, z);
  return result;
}

void fcByte3_set111(fcByte3* self, cl_byte x, cl_byte y, cl_byte z) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
}

fcByte3 fcByte3_create12(cl_byte x, fcByte2 vec1) {
  return fcByte3_create111(x, vec1.s[0], vec1.s[1]);
}

void fcByte3_set12(fcByte3* self, cl_byte x, fcByte2 vec1) {
  fcByte3_set111(self, x, vec1.s[0], vec1.s[1]);
}

fcByte3 fcByte3_create21(fcByte2 vec1, cl_byte z) {
  return fcByte3_create111(vec1.s[0], vec1.s[1], z);
}

void fcByte3_set21(fcByte3* self, fcByte2 vec1, cl_byte z) {
  fcByte3_set111(self, vec1.s[0], vec1.s[1], z);
}

fcByte3 fcByte3_create3(fcByte3 vec1) {
  return fcByte3_create111(vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcByte3_set3(fcByte3* self, fcByte3 vec1) {
  fcByte3_set111(self, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcShort3 fcByte3_convertShort3(fcByte3 a) {
  return fcShort3_create111((cl_short)(a.s[0] & 0xff), (cl_short)(a.s[1] & 0xff), (cl_short)(a.s[2] & 0xff));
}

fcInt3 fcByte3_convertInt3(fcByte3 a) {
  return fcInt3_create111((cl_int)(a.s[0] & 0xff), (cl_int)(a.s[1] & 0xff), (cl_int)(a.s[2] & 0xff));
}

fcLong3 fcByte3_convertLong3(fcByte3 a) {
  return fcLong3_create111((cl_long)(a.s[0] & 0xff), (cl_long)(a.s[1] & 0xff), (cl_long)(a.s[2] & 0xff));
}

fcFloat3 fcByte3_convertFloat3(fcByte3 a) {
  return fcFloat3_create111((cl_float)(a.s[0] & 0xff), (cl_float)(a.s[1] & 0xff), (cl_float)(a.s[2] & 0xff));
}

fcDouble3 fcByte3_convertDouble3(fcByte3 a) {
  return fcDouble3_create111((cl_double)(a.s[0] & 0xff), (cl_double)(a.s[1] & 0xff), (cl_double)(a.s[2] & 0xff));
}

fcByte2 fcByte3_asByte2(fcByte3 a) {
  return fcByte2_create11(a.s[0], a.s[1]);
}

fcInt3 fcByte3_isEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0);
}

fcInt3 fcByte3_isNotEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0);
}

fcInt3 fcByte3_isGreater(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0);
}

fcInt3 fcByte3_isGreaterEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0);
}

fcInt3 fcByte3_isLess(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0);
}

fcInt3 fcByte3_isLessEqual(fcByte3 a, fcByte3 b) {
  return fcInt3_create111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0);
}

fcByte3 fcByte3_select(fcByte3 a, fcByte3 b, fcInt3 c) {
  return fcByte3_create111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]));
}

cl_int fcByte3_any(fcByte3 a) {
  return a.s[0] != '\0' || a.s[1] != '\0' || a.s[2] != '\0';
}

cl_int fcByte3_all(fcByte3 a) {
  return !(a.s[0] == '\0' || a.s[1] == '\0' || a.s[2] == '\0');
}

fcByte3 fcByte3_neg(fcByte3 a) {
  return fcByte3_create111(-a.s[0], -a.s[1], -a.s[2]);
}

fcByte3 fcByte3_add(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2]);
}

fcByte3 fcByte3_sub(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2]);
}

fcByte3 fcByte3_mul(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2]);
}

fcDouble3 fcByte3_muld(fcByte3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]));
}

fcFloat3 fcByte3_mulf(fcByte3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]));
}

fcByte3 fcByte3_mulk(fcByte3 a, cl_byte k) {
  return fcByte3_create111(a.s[0] * k, a.s[1] * k, a.s[2] * k);
}

fcDouble3 fcByte3_mulkd(fcByte3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k));
}

fcFloat3 fcByte3_mulkf(fcByte3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k));
}

fcByte3 fcByte3_div(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2]);
}

fcDouble3 fcByte3_divd(fcByte3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]));
}

fcFloat3 fcByte3_divf(fcByte3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]));
}

fcByte3 fcByte3_divk(fcByte3 a, cl_byte k) {
  return fcByte3_create111(a.s[0] / k, a.s[1] / k, a.s[2] / k);
}

fcDouble3 fcByte3_divkd(fcByte3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k));
}

fcFloat3 fcByte3_divkf(fcByte3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k));
}

fcByte3 fcByte3_mod(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2]);
}

fcByte3 fcByte3_modk(fcByte3 a, cl_byte k) {
  return fcByte3_create111(a.s[0] % k, a.s[1] % k, a.s[2] % k);
}

fcByte3 fcByte3_bitAnd(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2]);
}

fcByte3 fcByte3_bitOr(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2]);
}

fcByte3 fcByte3_bitXor(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2]);
}

fcByte3 fcByte3_bitNot(fcByte3 a) {
  return fcByte3_create111(~a.s[0], ~a.s[1], ~a.s[2]);
}

fcByte3 fcByte3_abs(fcByte3 a) {
  return fcByte3_create111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]));
}

fcByte3 fcByte3_clamp(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]));
}

fcByte3 fcByte3_max(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]));
}

fcByte3 fcByte3_maxMag(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]));
}

fcByte3 fcByte3_min(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]));
}

fcByte3 fcByte3_minMag(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]));
}

fcByte3 fcByte3_mix(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]));
}

fcByte3 fcByte3_clampk(fcByte3 v, cl_byte min, cl_byte max) {
  return fcByte3_create111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max));
}

fcByte3 fcByte3_maxk(fcByte3 x, cl_byte y) {
  return fcByte3_create111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y));
}

fcByte3 fcByte3_mink(fcByte3 x, cl_byte y) {
  return fcByte3_create111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y));
}

fcByte3 fcByte3_mixk(fcByte3 x, fcByte3 y, cl_byte a) {
  return fcByte3_create111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a));
}

fcByte3 fcByte3_absDiff(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]));
}

fcByte3 fcByte3_addSat(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_addSatc(a.s[0], b.s[0]), fcMath_addSatc(a.s[1], b.s[1]), fcMath_addSatc(a.s[2], b.s[2]));
}

fcByte3 fcByte3_clz(fcByte3 a) {
  return fcByte3_create111(fcMath_clzc(a.s[0]), fcMath_clzc(a.s[1]), fcMath_clzc(a.s[2]));
}

fcByte3 fcByte3_hadd(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_haddc(a.s[0], b.s[0]), fcMath_haddc(a.s[1], b.s[1]), fcMath_haddc(a.s[2], b.s[2]));
}

fcByte3 fcByte3_madHi(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_madHic(a.s[0], b.s[0], c.s[0]), fcMath_madHic(a.s[1], b.s[1], c.s[1]), fcMath_madHic(a.s[2], b.s[2], c.s[2]));
}

fcByte3 fcByte3_madSat(fcByte3 a, fcByte3 b, fcByte3 c) {
  return fcByte3_create111(fcMath_madSatc(a.s[0], b.s[0], c.s[0]), fcMath_madSatc(a.s[1], b.s[1], c.s[1]), fcMath_madSatc(a.s[2], b.s[2], c.s[2]));
}

fcByte3 fcByte3_mulHi(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_mulHic(a.s[0], b.s[0]), fcMath_mulHic(a.s[1], b.s[1]), fcMath_mulHic(a.s[2], b.s[2]));
}

fcByte3 fcByte3_rhadd(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_rhaddc(a.s[0], b.s[0]), fcMath_rhaddc(a.s[1], b.s[1]), fcMath_rhaddc(a.s[2], b.s[2]));
}

fcByte3 fcByte3_rotate(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_rotatec(a.s[0], b.s[0]), fcMath_rotatec(a.s[1], b.s[1]), fcMath_rotatec(a.s[2], b.s[2]));
}

fcByte3 fcByte3_subSat(fcByte3 a, fcByte3 b) {
  return fcByte3_create111(fcMath_subSatc(a.s[0], b.s[0]), fcMath_subSatc(a.s[1], b.s[1]), fcMath_subSatc(a.s[2], b.s[2]));
}


//
// fcByte4
//

fcByte4 fcByte4_create1(cl_byte v) {
  return fcByte4_create1111(v, v, v, v);
}

void fcByte4_set1(fcByte4* self, cl_byte v) {
  fcByte4_set1111(self, v, v, v, v);
}

fcByte4 fcByte4_create1111(cl_byte x, cl_byte y, cl_byte z, cl_byte w) {
  fcByte4 result;
  fcByte4_set1111(&result, x, y, z, w);
  return result;
}

void fcByte4_set1111(fcByte4* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
}

fcByte4 fcByte4_create112(cl_byte x, cl_byte y, fcByte2 vec1) {
  return fcByte4_create1111(x, y, vec1.s[0], vec1.s[1]);
}

void fcByte4_set112(fcByte4* self, cl_byte x, cl_byte y, fcByte2 vec1) {
  fcByte4_set1111(self, x, y, vec1.s[0], vec1.s[1]);
}

fcByte4 fcByte4_create121(cl_byte x, fcByte2 vec1, cl_byte w) {
  return fcByte4_create1111(x, vec1.s[0], vec1.s[1], w);
}

void fcByte4_set121(fcByte4* self, cl_byte x, fcByte2 vec1, cl_byte w) {
  fcByte4_set1111(self, x, vec1.s[0], vec1.s[1], w);
}

fcByte4 fcByte4_create13(cl_byte x, fcByte3 vec1) {
  return fcByte4_create1111(x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcByte4_set13(fcByte4* self, cl_byte x, fcByte3 vec1) {
  fcByte4_set1111(self, x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte4 fcByte4_create211(fcByte2 vec1, cl_byte z, cl_byte w) {
  return fcByte4_create1111(vec1.s[0], vec1.s[1], z, w);
}

void fcByte4_set211(fcByte4* self, fcByte2 vec1, cl_byte z, cl_byte w) {
  fcByte4_set1111(self, vec1.s[0], vec1.s[1], z, w);
}

fcByte4 fcByte4_create22(fcByte2 vec1, fcByte2 vec2) {
  return fcByte4_create1111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcByte4_set22(fcByte4* self, fcByte2 vec1, fcByte2 vec2) {
  fcByte4_set1111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcByte4 fcByte4_create31(fcByte3 vec1, cl_byte w) {
  return fcByte4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], w);
}

void fcByte4_set31(fcByte4* self, fcByte3 vec1, cl_byte w) {
  fcByte4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], w);
}

fcByte4 fcByte4_create4(fcByte4 vec1) {
  return fcByte4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcByte4_set4(fcByte4* self, fcByte4 vec1) {
  fcByte4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcByte2 fcByte4_odd(fcByte4 a) {
  return fcByte2_create11(a.s[1], a.s[3]);
}

fcByte2 fcByte4_even(fcByte4 a) {
  return fcByte2_create11(a.s[0], a.s[2]);
}

fcShort4 fcByte4_convertShort4(fcByte4 a) {
  return fcShort4_create1111((cl_short)(a.s[0] & 0xff), (cl_short)(a.s[1] & 0xff), (cl_short)(a.s[2] & 0xff), (cl_short)(a.s[3] & 0xff));
}

fcInt4 fcByte4_convertInt4(fcByte4 a) {
  return fcInt4_create1111((cl_int)(a.s[0] & 0xff), (cl_int)(a.s[1] & 0xff), (cl_int)(a.s[2] & 0xff), (cl_int)(a.s[3] & 0xff));
}

fcLong4 fcByte4_convertLong4(fcByte4 a) {
  return fcLong4_create1111((cl_long)(a.s[0] & 0xff), (cl_long)(a.s[1] & 0xff), (cl_long)(a.s[2] & 0xff), (cl_long)(a.s[3] & 0xff));
}

fcFloat4 fcByte4_convertFloat4(fcByte4 a) {
  return fcFloat4_create1111((cl_float)(a.s[0] & 0xff), (cl_float)(a.s[1] & 0xff), (cl_float)(a.s[2] & 0xff), (cl_float)(a.s[3] & 0xff));
}

fcDouble4 fcByte4_convertDouble4(fcByte4 a) {
  return fcDouble4_create1111((cl_double)(a.s[0] & 0xff), (cl_double)(a.s[1] & 0xff), (cl_double)(a.s[2] & 0xff), (cl_double)(a.s[3] & 0xff));
}

fcByte2 fcByte4_asByte2(fcByte4 a) {
  return fcByte2_create11(a.s[0], a.s[1]);
}

fcByte3 fcByte4_asByte3(fcByte4 a) {
  return fcByte3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcByte4_isEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
}

fcInt4 fcByte4_isNotEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
}

fcInt4 fcByte4_isGreater(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
}

fcInt4 fcByte4_isGreaterEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
}

fcInt4 fcByte4_isLess(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
}

fcInt4 fcByte4_isLessEqual(fcByte4 a, fcByte4 b) {
  return fcInt4_create1111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
}

fcByte4 fcByte4_select(fcByte4 a, fcByte4 b, fcInt4 c) {
  return fcByte4_create1111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]));
}

cl_int fcByte4_any(fcByte4 a) {
  return a.s[0] != '\0' || a.s[1] != '\0' || a.s[2] != '\0' || a.s[3] != '\0';
}

cl_int fcByte4_all(fcByte4 a) {
  return !(a.s[0] == '\0' || a.s[1] == '\0' || a.s[2] == '\0' || a.s[3] == '\0');
}

fcByte4 fcByte4_neg(fcByte4 a) {
  return fcByte4_create1111(-a.s[0], -a.s[1], -a.s[2], -a.s[3]);
}

fcByte4 fcByte4_add(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3]);
}

fcByte4 fcByte4_sub(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3]);
}

fcByte4 fcByte4_mul(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3]);
}

fcDouble4 fcByte4_muld(fcByte4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]));
}

fcFloat4 fcByte4_mulf(fcByte4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]));
}

fcByte4 fcByte4_mulk(fcByte4 a, cl_byte k) {
  return fcByte4_create1111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k);
}

fcDouble4 fcByte4_mulkd(fcByte4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k));
}

fcFloat4 fcByte4_mulkf(fcByte4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k));
}

fcByte4 fcByte4_div(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3]);
}

fcDouble4 fcByte4_divd(fcByte4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]));
}

fcFloat4 fcByte4_divf(fcByte4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]));
}

fcByte4 fcByte4_divk(fcByte4 a, cl_byte k) {
  return fcByte4_create1111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k);
}

fcDouble4 fcByte4_divkd(fcByte4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k));
}

fcFloat4 fcByte4_divkf(fcByte4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k));
}

fcByte4 fcByte4_mod(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3]);
}

fcByte4 fcByte4_modk(fcByte4 a, cl_byte k) {
  return fcByte4_create1111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k);
}

fcByte4 fcByte4_bitAnd(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3]);
}

fcByte4 fcByte4_bitOr(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3]);
}

fcByte4 fcByte4_bitXor(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3]);
}

fcByte4 fcByte4_bitNot(fcByte4 a) {
  return fcByte4_create1111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3]);
}

fcByte4 fcByte4_abs(fcByte4 a) {
  return fcByte4_create1111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]));
}

fcByte4 fcByte4_clamp(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]));
}

fcByte4 fcByte4_max(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]));
}

fcByte4 fcByte4_maxMag(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]));
}

fcByte4 fcByte4_min(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]));
}

fcByte4 fcByte4_minMag(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]));
}

fcByte4 fcByte4_mix(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]));
}

fcByte4 fcByte4_clampk(fcByte4 v, cl_byte min, cl_byte max) {
  return fcByte4_create1111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max));
}

fcByte4 fcByte4_maxk(fcByte4 x, cl_byte y) {
  return fcByte4_create1111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y));
}

fcByte4 fcByte4_mink(fcByte4 x, cl_byte y) {
  return fcByte4_create1111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y));
}

fcByte4 fcByte4_mixk(fcByte4 x, fcByte4 y, cl_byte a) {
  return fcByte4_create1111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a));
}

fcByte4 fcByte4_absDiff(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]));
}

fcByte4 fcByte4_addSat(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_addSatc(a.s[0], b.s[0]), fcMath_addSatc(a.s[1], b.s[1]), fcMath_addSatc(a.s[2], b.s[2]), fcMath_addSatc(a.s[3], b.s[3]));
}

fcByte4 fcByte4_clz(fcByte4 a) {
  return fcByte4_create1111(fcMath_clzc(a.s[0]), fcMath_clzc(a.s[1]), fcMath_clzc(a.s[2]), fcMath_clzc(a.s[3]));
}

fcByte4 fcByte4_hadd(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_haddc(a.s[0], b.s[0]), fcMath_haddc(a.s[1], b.s[1]), fcMath_haddc(a.s[2], b.s[2]), fcMath_haddc(a.s[3], b.s[3]));
}

fcByte4 fcByte4_madHi(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_madHic(a.s[0], b.s[0], c.s[0]), fcMath_madHic(a.s[1], b.s[1], c.s[1]), fcMath_madHic(a.s[2], b.s[2], c.s[2]), fcMath_madHic(a.s[3], b.s[3], c.s[3]));
}

fcByte4 fcByte4_madSat(fcByte4 a, fcByte4 b, fcByte4 c) {
  return fcByte4_create1111(fcMath_madSatc(a.s[0], b.s[0], c.s[0]), fcMath_madSatc(a.s[1], b.s[1], c.s[1]), fcMath_madSatc(a.s[2], b.s[2], c.s[2]), fcMath_madSatc(a.s[3], b.s[3], c.s[3]));
}

fcByte4 fcByte4_mulHi(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_mulHic(a.s[0], b.s[0]), fcMath_mulHic(a.s[1], b.s[1]), fcMath_mulHic(a.s[2], b.s[2]), fcMath_mulHic(a.s[3], b.s[3]));
}

fcByte4 fcByte4_rhadd(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_rhaddc(a.s[0], b.s[0]), fcMath_rhaddc(a.s[1], b.s[1]), fcMath_rhaddc(a.s[2], b.s[2]), fcMath_rhaddc(a.s[3], b.s[3]));
}

fcByte4 fcByte4_rotate(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_rotatec(a.s[0], b.s[0]), fcMath_rotatec(a.s[1], b.s[1]), fcMath_rotatec(a.s[2], b.s[2]), fcMath_rotatec(a.s[3], b.s[3]));
}

fcByte4 fcByte4_subSat(fcByte4 a, fcByte4 b) {
  return fcByte4_create1111(fcMath_subSatc(a.s[0], b.s[0]), fcMath_subSatc(a.s[1], b.s[1]), fcMath_subSatc(a.s[2], b.s[2]), fcMath_subSatc(a.s[3], b.s[3]));
}


//
// fcByte8
//

fcByte8 fcByte8_create1(cl_byte v) {
  return fcByte8_create11111111(v, v, v, v, v, v, v, v);
}

void fcByte8_set1(fcByte8* self, cl_byte v) {
  fcByte8_set11111111(self, v, v, v, v, v, v, v, v);
}

fcByte8 fcByte8_create11111111(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8 result;
  fcByte8_set11111111(&result, x, y, z, w, s4, s5, s6, s7);
  return result;
}

void fcByte8_set11111111(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
  self->s[4] = s4;
  self->s[5] = s5;
  self->s[6] = s6;
  self->s[7] = s7;
}

fcByte8 fcByte8_create1111112(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec1) {
  return fcByte8_create11111111(x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

void fcByte8_set1111112(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec1) {
  fcByte8_set11111111(self, x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

fcByte8 fcByte8_create1111121(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec1, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

void fcByte8_set1111121(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec1, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

fcByte8 fcByte8_create111113(cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec1) {
  return fcByte8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcByte8_set111113(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec1) {
  fcByte8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte8 fcByte8_create1111211(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

void fcByte8_set1111211(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

fcByte8 fcByte8_create111122(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcByte8_set111122(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte2 vec1, fcByte2 vec2) {
  fcByte8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create111131(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte3 vec1, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

void fcByte8_set111131(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte3 vec1, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

fcByte8 fcByte8_create11114(cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte4 vec1) {
  return fcByte8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcByte8_set11114(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, cl_byte w, fcByte4 vec1) {
  fcByte8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcByte8 fcByte8_create1112111(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

void fcByte8_set1112111(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

fcByte8 fcByte8_create111212(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set111212(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create111221(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set111221(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create11123(cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte3 vec2) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set11123(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte2 vec1, fcByte3 vec2) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create111311(cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

void fcByte8_set111311(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

fcByte8 fcByte8_create11132(cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

void fcByte8_set11132(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte3 vec1, fcByte2 vec2) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create11141(cl_byte x, cl_byte y, cl_byte z, fcByte4 vec1, cl_byte s7) {
  return fcByte8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

void fcByte8_set11141(fcByte8* self, cl_byte x, cl_byte y, cl_byte z, fcByte4 vec1, cl_byte s7) {
  fcByte8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

fcByte8 fcByte8_create1121111(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

void fcByte8_set1121111(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

fcByte8 fcByte8_create112112(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set112112(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create112121(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set112121(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create11213(cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set11213(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, cl_byte s4, fcByte3 vec2) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create112211(cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

void fcByte8_set112211(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

fcByte8 fcByte8_create11222(cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcByte8_set11222(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create11231(cl_byte x, cl_byte y, fcByte2 vec1, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcByte8_set11231(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte3 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcByte8 fcByte8_create1124(cl_byte x, cl_byte y, fcByte2 vec1, fcByte4 vec2) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcByte8_set1124(fcByte8* self, cl_byte x, cl_byte y, fcByte2 vec1, fcByte4 vec2) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcByte8 fcByte8_create113111(cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

void fcByte8_set113111(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

fcByte8 fcByte8_create11312(cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set11312(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create11321(cl_byte x, cl_byte y, fcByte3 vec1, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set11321(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create1133(cl_byte x, cl_byte y, fcByte3 vec1, fcByte3 vec2) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set1133(fcByte8* self, cl_byte x, cl_byte y, fcByte3 vec1, fcByte3 vec2) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create11411(cl_byte x, cl_byte y, fcByte4 vec1, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

void fcByte8_set11411(fcByte8* self, cl_byte x, cl_byte y, fcByte4 vec1, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

fcByte8 fcByte8_create1142(cl_byte x, cl_byte y, fcByte4 vec1, fcByte2 vec2) {
  return fcByte8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

void fcByte8_set1142(fcByte8* self, cl_byte x, cl_byte y, fcByte4 vec1, fcByte2 vec2) {
  fcByte8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create1211111(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

void fcByte8_set1211111(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

fcByte8 fcByte8_create121112(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set121112(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create121121(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set121121(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create12113(cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set12113(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, cl_byte s4, fcByte3 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create121211(cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcByte8_set121211(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcByte8 fcByte8_create12122(cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcByte8_set12122(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create12131(cl_byte x, fcByte2 vec1, cl_byte w, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcByte8_set12131(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte3 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcByte8 fcByte8_create1214(cl_byte x, fcByte2 vec1, cl_byte w, fcByte4 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcByte8_set1214(fcByte8* self, cl_byte x, fcByte2 vec1, cl_byte w, fcByte4 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcByte8 fcByte8_create122111(cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcByte8_set122111(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcByte8 fcByte8_create12212(cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcByte8_set12212(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create12221(cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcByte8_set12221(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcByte8 fcByte8_create1223(cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcByte8_set1223(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcByte8 fcByte8_create12311(cl_byte x, fcByte2 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcByte8_set12311(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcByte8 fcByte8_create1232(cl_byte x, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcByte8_set1232(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create1241(cl_byte x, fcByte2 vec1, fcByte4 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcByte8_set1241(fcByte8* self, cl_byte x, fcByte2 vec1, fcByte4 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcByte8 fcByte8_create131111(cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

void fcByte8_set131111(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

fcByte8 fcByte8_create13112(cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set13112(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create13121(cl_byte x, fcByte3 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set13121(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create1313(cl_byte x, fcByte3 vec1, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set1313(fcByte8* self, cl_byte x, fcByte3 vec1, cl_byte s4, fcByte3 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create13211(cl_byte x, fcByte3 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

void fcByte8_set13211(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

fcByte8 fcByte8_create1322(cl_byte x, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcByte8_set1322(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create1331(cl_byte x, fcByte3 vec1, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcByte8_set1331(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte3 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcByte8 fcByte8_create134(cl_byte x, fcByte3 vec1, fcByte4 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcByte8_set134(fcByte8* self, cl_byte x, fcByte3 vec1, fcByte4 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcByte8 fcByte8_create14111(cl_byte x, fcByte4 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

void fcByte8_set14111(fcByte8* self, cl_byte x, fcByte4 vec1, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

fcByte8 fcByte8_create1412(cl_byte x, fcByte4 vec1, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set1412(fcByte8* self, cl_byte x, fcByte4 vec1, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create1421(cl_byte x, fcByte4 vec1, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set1421(fcByte8* self, cl_byte x, fcByte4 vec1, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create143(cl_byte x, fcByte4 vec1, fcByte3 vec2) {
  return fcByte8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set143(fcByte8* self, cl_byte x, fcByte4 vec1, fcByte3 vec2) {
  fcByte8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create2111111(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

void fcByte8_set2111111(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

fcByte8 fcByte8_create211112(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set211112(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create211121(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set211121(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create21113(fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set21113(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, cl_byte s4, fcByte3 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create211211(fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcByte8_set211211(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

fcByte8 fcByte8_create21122(fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcByte8_set21122(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create21131(fcByte2 vec1, cl_byte z, cl_byte w, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcByte8_set21131(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte3 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcByte8 fcByte8_create2114(fcByte2 vec1, cl_byte z, cl_byte w, fcByte4 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcByte8_set2114(fcByte8* self, fcByte2 vec1, cl_byte z, cl_byte w, fcByte4 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcByte8 fcByte8_create212111(fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcByte8_set212111(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcByte8 fcByte8_create21212(fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcByte8_set21212(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create21221(fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcByte8_set21221(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcByte8 fcByte8_create2123(fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcByte8_set2123(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte2 vec2, fcByte3 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcByte8 fcByte8_create21311(fcByte2 vec1, cl_byte z, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcByte8_set21311(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcByte8 fcByte8_create2132(fcByte2 vec1, cl_byte z, fcByte3 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcByte8_set2132(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte3 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create2141(fcByte2 vec1, cl_byte z, fcByte4 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcByte8_set2141(fcByte8* self, fcByte2 vec1, cl_byte z, fcByte4 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcByte8 fcByte8_create221111(fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

void fcByte8_set221111(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

fcByte8 fcByte8_create22112(fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

void fcByte8_set22112(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, cl_byte s5, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create22121(fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

void fcByte8_set22121(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte2 vec3, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

fcByte8 fcByte8_create2213(fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcByte8_set2213(fcByte8* self, fcByte2 vec1, fcByte2 vec2, cl_byte s4, fcByte3 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcByte8 fcByte8_create22211(fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

void fcByte8_set22211(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

fcByte8 fcByte8_create2222(fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, fcByte2 vec4) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

void fcByte8_set2222(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte2 vec3, fcByte2 vec4) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

fcByte8 fcByte8_create2231(fcByte2 vec1, fcByte2 vec2, fcByte3 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

void fcByte8_set2231(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte3 vec3, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

fcByte8 fcByte8_create224(fcByte2 vec1, fcByte2 vec2, fcByte4 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

void fcByte8_set224(fcByte8* self, fcByte2 vec1, fcByte2 vec2, fcByte4 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

fcByte8 fcByte8_create23111(fcByte2 vec1, fcByte3 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

void fcByte8_set23111(fcByte8* self, fcByte2 vec1, fcByte3 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

fcByte8 fcByte8_create2312(fcByte2 vec1, fcByte3 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

void fcByte8_set2312(fcByte8* self, fcByte2 vec1, fcByte3 vec2, cl_byte s5, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create2321(fcByte2 vec1, fcByte3 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

void fcByte8_set2321(fcByte8* self, fcByte2 vec1, fcByte3 vec2, fcByte2 vec3, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

fcByte8 fcByte8_create233(fcByte2 vec1, fcByte3 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcByte8_set233(fcByte8* self, fcByte2 vec1, fcByte3 vec2, fcByte3 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcByte8 fcByte8_create2411(fcByte2 vec1, fcByte4 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

void fcByte8_set2411(fcByte8* self, fcByte2 vec1, fcByte4 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

fcByte8 fcByte8_create242(fcByte2 vec1, fcByte4 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

void fcByte8_set242(fcByte8* self, fcByte2 vec1, fcByte4 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create311111(fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

void fcByte8_set311111(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

fcByte8 fcByte8_create31112(fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set31112(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create31121(fcByte3 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set31121(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create3113(fcByte3 vec1, cl_byte w, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set3113(fcByte8* self, fcByte3 vec1, cl_byte w, cl_byte s4, fcByte3 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create31211(fcByte3 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcByte8_set31211(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcByte8 fcByte8_create3122(fcByte3 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcByte8_set3122(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte2 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create3131(fcByte3 vec1, cl_byte w, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcByte8_set3131(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte3 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcByte8 fcByte8_create314(fcByte3 vec1, cl_byte w, fcByte4 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcByte8_set314(fcByte8* self, fcByte3 vec1, cl_byte w, fcByte4 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcByte8 fcByte8_create32111(fcByte3 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcByte8_set32111(fcByte8* self, fcByte3 vec1, fcByte2 vec2, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcByte8 fcByte8_create3212(fcByte3 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcByte8_set3212(fcByte8* self, fcByte3 vec1, fcByte2 vec2, cl_byte s5, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create3221(fcByte3 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcByte8_set3221(fcByte8* self, fcByte3 vec1, fcByte2 vec2, fcByte2 vec3, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcByte8 fcByte8_create323(fcByte3 vec1, fcByte2 vec2, fcByte3 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcByte8_set323(fcByte8* self, fcByte3 vec1, fcByte2 vec2, fcByte3 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcByte8 fcByte8_create3311(fcByte3 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcByte8_set3311(fcByte8* self, fcByte3 vec1, fcByte3 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcByte8 fcByte8_create332(fcByte3 vec1, fcByte3 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcByte8_set332(fcByte8* self, fcByte3 vec1, fcByte3 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create341(fcByte3 vec1, fcByte4 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcByte8_set341(fcByte8* self, fcByte3 vec1, fcByte4 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcByte8 fcByte8_create41111(fcByte4 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

void fcByte8_set41111(fcByte8* self, fcByte4 vec1, cl_byte s4, cl_byte s5, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

fcByte8 fcByte8_create4112(fcByte4 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcByte8_set4112(fcByte8* self, fcByte4 vec1, cl_byte s4, cl_byte s5, fcByte2 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

fcByte8 fcByte8_create4121(fcByte4 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

void fcByte8_set4121(fcByte8* self, fcByte4 vec1, cl_byte s4, fcByte2 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

fcByte8 fcByte8_create413(fcByte4 vec1, cl_byte s4, fcByte3 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcByte8_set413(fcByte8* self, fcByte4 vec1, cl_byte s4, fcByte3 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcByte8 fcByte8_create4211(fcByte4 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

void fcByte8_set4211(fcByte8* self, fcByte4 vec1, fcByte2 vec2, cl_byte s6, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

fcByte8 fcByte8_create422(fcByte4 vec1, fcByte2 vec2, fcByte2 vec3) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcByte8_set422(fcByte8* self, fcByte4 vec1, fcByte2 vec2, fcByte2 vec3) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcByte8 fcByte8_create431(fcByte4 vec1, fcByte3 vec2, cl_byte s7) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcByte8_set431(fcByte8* self, fcByte4 vec1, fcByte3 vec2, cl_byte s7) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcByte8 fcByte8_create44(fcByte4 vec1, fcByte4 vec2) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcByte8_set44(fcByte8* self, fcByte4 vec1, fcByte4 vec2) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcByte8 fcByte8_create8(fcByte8 vec1) {
  return fcByte8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

void fcByte8_set8(fcByte8* self, fcByte8 vec1) {
  fcByte8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

fcByte4 fcByte8_odd(fcByte8 a) {
  return fcByte4_create1111(a.s[1], a.s[3], a.s[5], a.s[7]);
}

fcByte4 fcByte8_even(fcByte8 a) {
  return fcByte4_create1111(a.s[0], a.s[2], a.s[4], a.s[6]);
}

fcShort8 fcByte8_convertShort8(fcByte8 a) {
  return fcShort8_create11111111((cl_short)(a.s[0] & 0xff), (cl_short)(a.s[1] & 0xff), (cl_short)(a.s[2] & 0xff), (cl_short)(a.s[3] & 0xff), (cl_short)(a.s[4] & 0xff), (cl_short)(a.s[5] & 0xff), (cl_short)(a.s[6] & 0xff), (cl_short)(a.s[7] & 0xff));
}

fcInt8 fcByte8_convertInt8(fcByte8 a) {
  return fcInt8_create11111111((cl_int)(a.s[0] & 0xff), (cl_int)(a.s[1] & 0xff), (cl_int)(a.s[2] & 0xff), (cl_int)(a.s[3] & 0xff), (cl_int)(a.s[4] & 0xff), (cl_int)(a.s[5] & 0xff), (cl_int)(a.s[6] & 0xff), (cl_int)(a.s[7] & 0xff));
}

fcLong8 fcByte8_convertLong8(fcByte8 a) {
  return fcLong8_create11111111((cl_long)(a.s[0] & 0xff), (cl_long)(a.s[1] & 0xff), (cl_long)(a.s[2] & 0xff), (cl_long)(a.s[3] & 0xff), (cl_long)(a.s[4] & 0xff), (cl_long)(a.s[5] & 0xff), (cl_long)(a.s[6] & 0xff), (cl_long)(a.s[7] & 0xff));
}

fcFloat8 fcByte8_convertFloat8(fcByte8 a) {
  return fcFloat8_create11111111((cl_float)(a.s[0] & 0xff), (cl_float)(a.s[1] & 0xff), (cl_float)(a.s[2] & 0xff), (cl_float)(a.s[3] & 0xff), (cl_float)(a.s[4] & 0xff), (cl_float)(a.s[5] & 0xff), (cl_float)(a.s[6] & 0xff), (cl_float)(a.s[7] & 0xff));
}

fcDouble8 fcByte8_convertDouble8(fcByte8 a) {
  return fcDouble8_create11111111((cl_double)(a.s[0] & 0xff), (cl_double)(a.s[1] & 0xff), (cl_double)(a.s[2] & 0xff), (cl_double)(a.s[3] & 0xff), (cl_double)(a.s[4] & 0xff), (cl_double)(a.s[5] & 0xff), (cl_double)(a.s[6] & 0xff), (cl_double)(a.s[7] & 0xff));
}

fcByte2 fcByte8_asByte2(fcByte8 a) {
  return fcByte2_create11(a.s[0], a.s[1]);
}

fcByte3 fcByte8_asByte3(fcByte8 a) {
  return fcByte3_create111(a.s[0], a.s[1], a.s[2]);
}

fcByte4 fcByte8_asByte4(fcByte8 a) {
  return fcByte4_create1111(a.s[0], a.s[1], a.s[2], a.s[3]);
}

fcInt8 fcByte8_isEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0, a.s[4] == b.s[4]? 1 : 0, a.s[5] == b.s[5]? 1 : 0, a.s[6] == b.s[6]? 1 : 0, a.s[7] == b.s[7]? 1 : 0);
}

fcInt8 fcByte8_isNotEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0, a.s[4] != b.s[4]? 1 : 0, a.s[5] != b.s[5]? 1 : 0, a.s[6] != b.s[6]? 1 : 0, a.s[7] != b.s[7]? 1 : 0);
}

fcInt8 fcByte8_isGreater(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0, a.s[4] > b.s[4]? 1 : 0, a.s[5] > b.s[5]? 1 : 0, a.s[6] > b.s[6]? 1 : 0, a.s[7] > b.s[7]? 1 : 0);
}

fcInt8 fcByte8_isGreaterEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0, a.s[4] >= b.s[4]? 1 : 0, a.s[5] >= b.s[5]? 1 : 0, a.s[6] >= b.s[6]? 1 : 0, a.s[7] >= b.s[7]? 1 : 0);
}

fcInt8 fcByte8_isLess(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0, a.s[4] < b.s[4]? 1 : 0, a.s[5] < b.s[5]? 1 : 0, a.s[6] < b.s[6]? 1 : 0, a.s[7] < b.s[7]? 1 : 0);
}

fcInt8 fcByte8_isLessEqual(fcByte8 a, fcByte8 b) {
  return fcInt8_create11111111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0, a.s[4] <= b.s[4]? 1 : 0, a.s[5] <= b.s[5]? 1 : 0, a.s[6] <= b.s[6]? 1 : 0, a.s[7] <= b.s[7]? 1 : 0);
}

fcByte8 fcByte8_select(fcByte8 a, fcByte8 b, fcInt8 c) {
  return fcByte8_create11111111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]), fcMath_select(a.s[4], b.s[4], c.s[4]), fcMath_select(a.s[5], b.s[5], c.s[5]), fcMath_select(a.s[6], b.s[6], c.s[6]), fcMath_select(a.s[7], b.s[7], c.s[7]));
}

cl_int fcByte8_any(fcByte8 a) {
  return a.s[0] != '\0' || a.s[1] != '\0' || a.s[2] != '\0' || a.s[3] != '\0' || a.s[4] != '\0' || a.s[5] != '\0' || a.s[6] != '\0' || a.s[7] != '\0';
}

cl_int fcByte8_all(fcByte8 a) {
  return !(a.s[0] == '\0' || a.s[1] == '\0' || a.s[2] == '\0' || a.s[3] == '\0' || a.s[4] == '\0' || a.s[5] == '\0' || a.s[6] == '\0' || a.s[7] == '\0');
}

fcByte8 fcByte8_neg(fcByte8 a) {
  return fcByte8_create11111111(-a.s[0], -a.s[1], -a.s[2], -a.s[3], -a.s[4], -a.s[5], -a.s[6], -a.s[7]);
}

fcByte8 fcByte8_add(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3], a.s[4] + b.s[4], a.s[5] + b.s[5], a.s[6] + b.s[6], a.s[7] + b.s[7]);
}

fcByte8 fcByte8_sub(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3], a.s[4] - b.s[4], a.s[5] - b.s[5], a.s[6] - b.s[6], a.s[7] - b.s[7]);
}

fcByte8 fcByte8_mul(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3], a.s[4] * b.s[4], a.s[5] * b.s[5], a.s[6] * b.s[6], a.s[7] * b.s[7]);
}

fcDouble8 fcByte8_muld(fcByte8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]), (cl_double)(a.s[4] * b.s[4]), (cl_double)(a.s[5] * b.s[5]), (cl_double)(a.s[6] * b.s[6]), (cl_double)(a.s[7] * b.s[7]));
}

fcFloat8 fcByte8_mulf(fcByte8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]), (cl_float)(a.s[4] * b.s[4]), (cl_float)(a.s[5] * b.s[5]), (cl_float)(a.s[6] * b.s[6]), (cl_float)(a.s[7] * b.s[7]));
}

fcByte8 fcByte8_mulk(fcByte8 a, cl_byte k) {
  return fcByte8_create11111111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k, a.s[4] * k, a.s[5] * k, a.s[6] * k, a.s[7] * k);
}

fcDouble8 fcByte8_mulkd(fcByte8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k), (cl_double)(a.s[4] * k), (cl_double)(a.s[5] * k), (cl_double)(a.s[6] * k), (cl_double)(a.s[7] * k));
}

fcFloat8 fcByte8_mulkf(fcByte8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k), (cl_float)(a.s[4] * k), (cl_float)(a.s[5] * k), (cl_float)(a.s[6] * k), (cl_float)(a.s[7] * k));
}

fcByte8 fcByte8_div(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3], a.s[4] / b.s[4], a.s[5] / b.s[5], a.s[6] / b.s[6], a.s[7] / b.s[7]);
}

fcDouble8 fcByte8_divd(fcByte8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]), (cl_double)(a.s[4] / b.s[4]), (cl_double)(a.s[5] / b.s[5]), (cl_double)(a.s[6] / b.s[6]), (cl_double)(a.s[7] / b.s[7]));
}

fcFloat8 fcByte8_divf(fcByte8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]), (cl_float)(a.s[4] / b.s[4]), (cl_float)(a.s[5] / b.s[5]), (cl_float)(a.s[6] / b.s[6]), (cl_float)(a.s[7] / b.s[7]));
}

fcByte8 fcByte8_divk(fcByte8 a, cl_byte k) {
  return fcByte8_create11111111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k, a.s[4] / k, a.s[5] / k, a.s[6] / k, a.s[7] / k);
}

fcDouble8 fcByte8_divkd(fcByte8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k), (cl_double)(a.s[4] / k), (cl_double)(a.s[5] / k), (cl_double)(a.s[6] / k), (cl_double)(a.s[7] / k));
}

fcFloat8 fcByte8_divkf(fcByte8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k), (cl_float)(a.s[4] / k), (cl_float)(a.s[5] / k), (cl_float)(a.s[6] / k), (cl_float)(a.s[7] / k));
}

fcByte8 fcByte8_mod(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3], a.s[4] % b.s[4], a.s[5] % b.s[5], a.s[6] % b.s[6], a.s[7] % b.s[7]);
}

fcByte8 fcByte8_modk(fcByte8 a, cl_byte k) {
  return fcByte8_create11111111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k, a.s[4] % k, a.s[5] % k, a.s[6] % k, a.s[7] % k);
}

fcByte8 fcByte8_bitAnd(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3], a.s[4] & b.s[4], a.s[5] & b.s[5], a.s[6] & b.s[6], a.s[7] & b.s[7]);
}

fcByte8 fcByte8_bitOr(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3], a.s[4] | b.s[4], a.s[5] | b.s[5], a.s[6] | b.s[6], a.s[7] | b.s[7]);
}

fcByte8 fcByte8_bitXor(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3], a.s[4] ^ b.s[4], a.s[5] ^ b.s[5], a.s[6] ^ b.s[6], a.s[7] ^ b.s[7]);
}

fcByte8 fcByte8_bitNot(fcByte8 a) {
  return fcByte8_create11111111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3], ~a.s[4], ~a.s[5], ~a.s[6], ~a.s[7]);
}

fcByte8 fcByte8_abs(fcByte8 a) {
  return fcByte8_create11111111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]), fcMath_abs(a.s[4]), fcMath_abs(a.s[5]), fcMath_abs(a.s[6]), fcMath_abs(a.s[7]));
}

fcByte8 fcByte8_clamp(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]), fcMath_clamp(a.s[4], b.s[4], c.s[4]), fcMath_clamp(a.s[5], b.s[5], c.s[5]), fcMath_clamp(a.s[6], b.s[6], c.s[6]), fcMath_clamp(a.s[7], b.s[7], c.s[7]));
}

fcByte8 fcByte8_max(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]), fcMath_max(a.s[4], b.s[4]), fcMath_max(a.s[5], b.s[5]), fcMath_max(a.s[6], b.s[6]), fcMath_max(a.s[7], b.s[7]));
}

fcByte8 fcByte8_maxMag(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]), fcMath_maxMag(a.s[4], b.s[4]), fcMath_maxMag(a.s[5], b.s[5]), fcMath_maxMag(a.s[6], b.s[6]), fcMath_maxMag(a.s[7], b.s[7]));
}

fcByte8 fcByte8_min(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]), fcMath_min(a.s[4], b.s[4]), fcMath_min(a.s[5], b.s[5]), fcMath_min(a.s[6], b.s[6]), fcMath_min(a.s[7], b.s[7]));
}

fcByte8 fcByte8_minMag(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]), fcMath_minMag(a.s[4], b.s[4]), fcMath_minMag(a.s[5], b.s[5]), fcMath_minMag(a.s[6], b.s[6]), fcMath_minMag(a.s[7], b.s[7]));
}

fcByte8 fcByte8_mix(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]), fcMath_mix(a.s[4], b.s[4], c.s[4]), fcMath_mix(a.s[5], b.s[5], c.s[5]), fcMath_mix(a.s[6], b.s[6], c.s[6]), fcMath_mix(a.s[7], b.s[7], c.s[7]));
}

fcByte8 fcByte8_clampk(fcByte8 v, cl_byte min, cl_byte max) {
  return fcByte8_create11111111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max), fcMath_clamp(v.s[4], min, max), fcMath_clamp(v.s[5], min, max), fcMath_clamp(v.s[6], min, max), fcMath_clamp(v.s[7], min, max));
}

fcByte8 fcByte8_maxk(fcByte8 x, cl_byte y) {
  return fcByte8_create11111111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y), fcMath_max(x.s[4], y), fcMath_max(x.s[5], y), fcMath_max(x.s[6], y), fcMath_max(x.s[7], y));
}

fcByte8 fcByte8_mink(fcByte8 x, cl_byte y) {
  return fcByte8_create11111111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y), fcMath_min(x.s[4], y), fcMath_min(x.s[5], y), fcMath_min(x.s[6], y), fcMath_min(x.s[7], y));
}

fcByte8 fcByte8_mixk(fcByte8 x, fcByte8 y, cl_byte a) {
  return fcByte8_create11111111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a), fcMath_mix(x.s[4], y.s[4], a), fcMath_mix(x.s[5], y.s[5], a), fcMath_mix(x.s[6], y.s[6], a), fcMath_mix(x.s[7], y.s[7], a));
}

fcByte8 fcByte8_absDiff(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]), fcMath_absDiff(a.s[4], b.s[4]), fcMath_absDiff(a.s[5], b.s[5]), fcMath_absDiff(a.s[6], b.s[6]), fcMath_absDiff(a.s[7], b.s[7]));
}

fcByte8 fcByte8_addSat(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_addSatc(a.s[0], b.s[0]), fcMath_addSatc(a.s[1], b.s[1]), fcMath_addSatc(a.s[2], b.s[2]), fcMath_addSatc(a.s[3], b.s[3]), fcMath_addSatc(a.s[4], b.s[4]), fcMath_addSatc(a.s[5], b.s[5]), fcMath_addSatc(a.s[6], b.s[6]), fcMath_addSatc(a.s[7], b.s[7]));
}

fcByte8 fcByte8_clz(fcByte8 a) {
  return fcByte8_create11111111(fcMath_clzc(a.s[0]), fcMath_clzc(a.s[1]), fcMath_clzc(a.s[2]), fcMath_clzc(a.s[3]), fcMath_clzc(a.s[4]), fcMath_clzc(a.s[5]), fcMath_clzc(a.s[6]), fcMath_clzc(a.s[7]));
}

fcByte8 fcByte8_hadd(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_haddc(a.s[0], b.s[0]), fcMath_haddc(a.s[1], b.s[1]), fcMath_haddc(a.s[2], b.s[2]), fcMath_haddc(a.s[3], b.s[3]), fcMath_haddc(a.s[4], b.s[4]), fcMath_haddc(a.s[5], b.s[5]), fcMath_haddc(a.s[6], b.s[6]), fcMath_haddc(a.s[7], b.s[7]));
}

fcByte8 fcByte8_madHi(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_madHic(a.s[0], b.s[0], c.s[0]), fcMath_madHic(a.s[1], b.s[1], c.s[1]), fcMath_madHic(a.s[2], b.s[2], c.s[2]), fcMath_madHic(a.s[3], b.s[3], c.s[3]), fcMath_madHic(a.s[4], b.s[4], c.s[4]), fcMath_madHic(a.s[5], b.s[5], c.s[5]), fcMath_madHic(a.s[6], b.s[6], c.s[6]), fcMath_madHic(a.s[7], b.s[7], c.s[7]));
}

fcByte8 fcByte8_madSat(fcByte8 a, fcByte8 b, fcByte8 c) {
  return fcByte8_create11111111(fcMath_madSatc(a.s[0], b.s[0], c.s[0]), fcMath_madSatc(a.s[1], b.s[1], c.s[1]), fcMath_madSatc(a.s[2], b.s[2], c.s[2]), fcMath_madSatc(a.s[3], b.s[3], c.s[3]), fcMath_madSatc(a.s[4], b.s[4], c.s[4]), fcMath_madSatc(a.s[5], b.s[5], c.s[5]), fcMath_madSatc(a.s[6], b.s[6], c.s[6]), fcMath_madSatc(a.s[7], b.s[7], c.s[7]));
}

fcByte8 fcByte8_mulHi(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_mulHic(a.s[0], b.s[0]), fcMath_mulHic(a.s[1], b.s[1]), fcMath_mulHic(a.s[2], b.s[2]), fcMath_mulHic(a.s[3], b.s[3]), fcMath_mulHic(a.s[4], b.s[4]), fcMath_mulHic(a.s[5], b.s[5]), fcMath_mulHic(a.s[6], b.s[6]), fcMath_mulHic(a.s[7], b.s[7]));
}

fcByte8 fcByte8_rhadd(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_rhaddc(a.s[0], b.s[0]), fcMath_rhaddc(a.s[1], b.s[1]), fcMath_rhaddc(a.s[2], b.s[2]), fcMath_rhaddc(a.s[3], b.s[3]), fcMath_rhaddc(a.s[4], b.s[4]), fcMath_rhaddc(a.s[5], b.s[5]), fcMath_rhaddc(a.s[6], b.s[6]), fcMath_rhaddc(a.s[7], b.s[7]));
}

fcByte8 fcByte8_rotate(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_rotatec(a.s[0], b.s[0]), fcMath_rotatec(a.s[1], b.s[1]), fcMath_rotatec(a.s[2], b.s[2]), fcMath_rotatec(a.s[3], b.s[3]), fcMath_rotatec(a.s[4], b.s[4]), fcMath_rotatec(a.s[5], b.s[5]), fcMath_rotatec(a.s[6], b.s[6]), fcMath_rotatec(a.s[7], b.s[7]));
}

fcByte8 fcByte8_subSat(fcByte8 a, fcByte8 b) {
  return fcByte8_create11111111(fcMath_subSatc(a.s[0], b.s[0]), fcMath_subSatc(a.s[1], b.s[1]), fcMath_subSatc(a.s[2], b.s[2]), fcMath_subSatc(a.s[3], b.s[3]), fcMath_subSatc(a.s[4], b.s[4]), fcMath_subSatc(a.s[5], b.s[5]), fcMath_subSatc(a.s[6], b.s[6]), fcMath_subSatc(a.s[7], b.s[7]));
}


//
// fcShort2
//

fcShort2 fcShort2_create1(cl_short v) {
  return fcShort2_create11(v, v);
}

void fcShort2_set1(fcShort2* self, cl_short v) {
  fcShort2_set11(self, v, v);
}

fcShort2 fcShort2_create11(cl_short x, cl_short y) {
  fcShort2 result;
  fcShort2_set11(&result, x, y);
  return result;
}

void fcShort2_set11(fcShort2* self, cl_short x, cl_short y) {
  self->s[0] = x;
  self->s[1] = y;
}

fcShort2 fcShort2_create2(fcShort2 vec1) {
  return fcShort2_create11(vec1.s[0], vec1.s[1]);
}

void fcShort2_set2(fcShort2* self, fcShort2 vec1) {
  fcShort2_set11(self, vec1.s[0], vec1.s[1]);
}

fcByte2 fcShort2_convertByte2(fcShort2 a) {
  return fcByte2_create11((cl_byte)(a.s[0]), (cl_byte)(a.s[1]));
}

fcInt2 fcShort2_convertInt2(fcShort2 a) {
  return fcInt2_create11((cl_int)(a.s[0]), (cl_int)(a.s[1]));
}

fcLong2 fcShort2_convertLong2(fcShort2 a) {
  return fcLong2_create11((cl_long)(a.s[0]), (cl_long)(a.s[1]));
}

fcFloat2 fcShort2_convertFloat2(fcShort2 a) {
  return fcFloat2_create11((cl_float)(a.s[0]), (cl_float)(a.s[1]));
}

fcDouble2 fcShort2_convertDouble2(fcShort2 a) {
  return fcDouble2_create11((cl_double)(a.s[0]), (cl_double)(a.s[1]));
}

fcInt2 fcShort2_isEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0);
}

fcInt2 fcShort2_isNotEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0);
}

fcInt2 fcShort2_isGreater(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0);
}

fcInt2 fcShort2_isGreaterEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0);
}

fcInt2 fcShort2_isLess(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0);
}

fcInt2 fcShort2_isLessEqual(fcShort2 a, fcShort2 b) {
  return fcInt2_create11(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0);
}

fcShort2 fcShort2_select(fcShort2 a, fcShort2 b, fcInt2 c) {
  return fcShort2_create11(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]));
}

cl_int fcShort2_any(fcShort2 a) {
  return a.s[0] != 0 || a.s[1] != 0;
}

cl_int fcShort2_all(fcShort2 a) {
  return !(a.s[0] == 0 || a.s[1] == 0);
}

fcShort2 fcShort2_neg(fcShort2 a) {
  return fcShort2_create11(-a.s[0], -a.s[1]);
}

fcShort2 fcShort2_add(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] + b.s[0], a.s[1] + b.s[1]);
}

fcShort2 fcShort2_sub(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] - b.s[0], a.s[1] - b.s[1]);
}

fcShort2 fcShort2_mul(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] * b.s[0], a.s[1] * b.s[1]);
}

fcDouble2 fcShort2_muld(fcShort2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]));
}

fcFloat2 fcShort2_mulf(fcShort2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]));
}

fcShort2 fcShort2_mulk(fcShort2 a, cl_short k) {
  return fcShort2_create11(a.s[0] * k, a.s[1] * k);
}

fcDouble2 fcShort2_mulkd(fcShort2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k));
}

fcFloat2 fcShort2_mulkf(fcShort2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k));
}

fcShort2 fcShort2_div(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] / b.s[0], a.s[1] / b.s[1]);
}

fcDouble2 fcShort2_divd(fcShort2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]));
}

fcFloat2 fcShort2_divf(fcShort2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]));
}

fcShort2 fcShort2_divk(fcShort2 a, cl_short k) {
  return fcShort2_create11(a.s[0] / k, a.s[1] / k);
}

fcDouble2 fcShort2_divkd(fcShort2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k));
}

fcFloat2 fcShort2_divkf(fcShort2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k));
}

fcShort2 fcShort2_mod(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] % b.s[0], a.s[1] % b.s[1]);
}

fcShort2 fcShort2_modk(fcShort2 a, cl_short k) {
  return fcShort2_create11(a.s[0] % k, a.s[1] % k);
}

fcShort2 fcShort2_bitAnd(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] & b.s[0], a.s[1] & b.s[1]);
}

fcShort2 fcShort2_bitOr(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] | b.s[0], a.s[1] | b.s[1]);
}

fcShort2 fcShort2_bitXor(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1]);
}

fcShort2 fcShort2_bitNot(fcShort2 a) {
  return fcShort2_create11(~a.s[0], ~a.s[1]);
}

fcShort2 fcShort2_abs(fcShort2 a) {
  return fcShort2_create11(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]));
}

fcShort2 fcShort2_clamp(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]));
}

fcShort2 fcShort2_max(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]));
}

fcShort2 fcShort2_maxMag(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]));
}

fcShort2 fcShort2_min(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]));
}

fcShort2 fcShort2_minMag(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]));
}

fcShort2 fcShort2_mix(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]));
}

fcShort2 fcShort2_clampk(fcShort2 v, cl_short min, cl_short max) {
  return fcShort2_create11(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max));
}

fcShort2 fcShort2_maxk(fcShort2 x, cl_short y) {
  return fcShort2_create11(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y));
}

fcShort2 fcShort2_mink(fcShort2 x, cl_short y) {
  return fcShort2_create11(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y));
}

fcShort2 fcShort2_mixk(fcShort2 x, fcShort2 y, cl_short a) {
  return fcShort2_create11(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a));
}

fcShort2 fcShort2_absDiff(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]));
}

fcShort2 fcShort2_addSat(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_addSats(a.s[0], b.s[0]), fcMath_addSats(a.s[1], b.s[1]));
}

fcShort2 fcShort2_clz(fcShort2 a) {
  return fcShort2_create11(fcMath_clzs(a.s[0]), fcMath_clzs(a.s[1]));
}

fcShort2 fcShort2_hadd(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_hadds(a.s[0], b.s[0]), fcMath_hadds(a.s[1], b.s[1]));
}

fcShort2 fcShort2_madHi(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_madHis(a.s[0], b.s[0], c.s[0]), fcMath_madHis(a.s[1], b.s[1], c.s[1]));
}

fcShort2 fcShort2_madSat(fcShort2 a, fcShort2 b, fcShort2 c) {
  return fcShort2_create11(fcMath_madSats(a.s[0], b.s[0], c.s[0]), fcMath_madSats(a.s[1], b.s[1], c.s[1]));
}

fcShort2 fcShort2_mulHi(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_mulHis(a.s[0], b.s[0]), fcMath_mulHis(a.s[1], b.s[1]));
}

fcShort2 fcShort2_rhadd(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_rhadds(a.s[0], b.s[0]), fcMath_rhadds(a.s[1], b.s[1]));
}

fcShort2 fcShort2_rotate(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_rotates(a.s[0], b.s[0]), fcMath_rotates(a.s[1], b.s[1]));
}

fcShort2 fcShort2_subSat(fcShort2 a, fcShort2 b) {
  return fcShort2_create11(fcMath_subSats(a.s[0], b.s[0]), fcMath_subSats(a.s[1], b.s[1]));
}


//
// fcShort3
//

fcShort3 fcShort3_create1(cl_short v) {
  return fcShort3_create111(v, v, v);
}

void fcShort3_set1(fcShort3* self, cl_short v) {
  fcShort3_set111(self, v, v, v);
}

fcShort3 fcShort3_create111(cl_short x, cl_short y, cl_short z) {
  fcShort3 result;
  fcShort3_set111(&result, x, y, z);
  return result;
}

void fcShort3_set111(fcShort3* self, cl_short x, cl_short y, cl_short z) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
}

fcShort3 fcShort3_create12(cl_short x, fcShort2 vec1) {
  return fcShort3_create111(x, vec1.s[0], vec1.s[1]);
}

void fcShort3_set12(fcShort3* self, cl_short x, fcShort2 vec1) {
  fcShort3_set111(self, x, vec1.s[0], vec1.s[1]);
}

fcShort3 fcShort3_create21(fcShort2 vec1, cl_short z) {
  return fcShort3_create111(vec1.s[0], vec1.s[1], z);
}

void fcShort3_set21(fcShort3* self, fcShort2 vec1, cl_short z) {
  fcShort3_set111(self, vec1.s[0], vec1.s[1], z);
}

fcShort3 fcShort3_create3(fcShort3 vec1) {
  return fcShort3_create111(vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcShort3_set3(fcShort3* self, fcShort3 vec1) {
  fcShort3_set111(self, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte3 fcShort3_convertByte3(fcShort3 a) {
  return fcByte3_create111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]));
}

fcInt3 fcShort3_convertInt3(fcShort3 a) {
  return fcInt3_create111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]));
}

fcLong3 fcShort3_convertLong3(fcShort3 a) {
  return fcLong3_create111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]));
}

fcFloat3 fcShort3_convertFloat3(fcShort3 a) {
  return fcFloat3_create111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]));
}

fcDouble3 fcShort3_convertDouble3(fcShort3 a) {
  return fcDouble3_create111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]));
}

fcShort2 fcShort3_asShort2(fcShort3 a) {
  return fcShort2_create11(a.s[0], a.s[1]);
}

fcInt3 fcShort3_isEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0);
}

fcInt3 fcShort3_isNotEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0);
}

fcInt3 fcShort3_isGreater(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0);
}

fcInt3 fcShort3_isGreaterEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0);
}

fcInt3 fcShort3_isLess(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0);
}

fcInt3 fcShort3_isLessEqual(fcShort3 a, fcShort3 b) {
  return fcInt3_create111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0);
}

fcShort3 fcShort3_select(fcShort3 a, fcShort3 b, fcInt3 c) {
  return fcShort3_create111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]));
}

cl_int fcShort3_any(fcShort3 a) {
  return a.s[0] != 0 || a.s[1] != 0 || a.s[2] != 0;
}

cl_int fcShort3_all(fcShort3 a) {
  return !(a.s[0] == 0 || a.s[1] == 0 || a.s[2] == 0);
}

fcShort3 fcShort3_neg(fcShort3 a) {
  return fcShort3_create111(-a.s[0], -a.s[1], -a.s[2]);
}

fcShort3 fcShort3_add(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2]);
}

fcShort3 fcShort3_sub(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2]);
}

fcShort3 fcShort3_mul(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2]);
}

fcDouble3 fcShort3_muld(fcShort3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]));
}

fcFloat3 fcShort3_mulf(fcShort3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]));
}

fcShort3 fcShort3_mulk(fcShort3 a, cl_short k) {
  return fcShort3_create111(a.s[0] * k, a.s[1] * k, a.s[2] * k);
}

fcDouble3 fcShort3_mulkd(fcShort3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k));
}

fcFloat3 fcShort3_mulkf(fcShort3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k));
}

fcShort3 fcShort3_div(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2]);
}

fcDouble3 fcShort3_divd(fcShort3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]));
}

fcFloat3 fcShort3_divf(fcShort3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]));
}

fcShort3 fcShort3_divk(fcShort3 a, cl_short k) {
  return fcShort3_create111(a.s[0] / k, a.s[1] / k, a.s[2] / k);
}

fcDouble3 fcShort3_divkd(fcShort3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k));
}

fcFloat3 fcShort3_divkf(fcShort3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k));
}

fcShort3 fcShort3_mod(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2]);
}

fcShort3 fcShort3_modk(fcShort3 a, cl_short k) {
  return fcShort3_create111(a.s[0] % k, a.s[1] % k, a.s[2] % k);
}

fcShort3 fcShort3_bitAnd(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2]);
}

fcShort3 fcShort3_bitOr(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2]);
}

fcShort3 fcShort3_bitXor(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2]);
}

fcShort3 fcShort3_bitNot(fcShort3 a) {
  return fcShort3_create111(~a.s[0], ~a.s[1], ~a.s[2]);
}

fcShort3 fcShort3_abs(fcShort3 a) {
  return fcShort3_create111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]));
}

fcShort3 fcShort3_clamp(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]));
}

fcShort3 fcShort3_max(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]));
}

fcShort3 fcShort3_maxMag(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]));
}

fcShort3 fcShort3_min(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]));
}

fcShort3 fcShort3_minMag(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]));
}

fcShort3 fcShort3_mix(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]));
}

fcShort3 fcShort3_clampk(fcShort3 v, cl_short min, cl_short max) {
  return fcShort3_create111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max));
}

fcShort3 fcShort3_maxk(fcShort3 x, cl_short y) {
  return fcShort3_create111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y));
}

fcShort3 fcShort3_mink(fcShort3 x, cl_short y) {
  return fcShort3_create111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y));
}

fcShort3 fcShort3_mixk(fcShort3 x, fcShort3 y, cl_short a) {
  return fcShort3_create111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a));
}

fcShort3 fcShort3_absDiff(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]));
}

fcShort3 fcShort3_addSat(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_addSats(a.s[0], b.s[0]), fcMath_addSats(a.s[1], b.s[1]), fcMath_addSats(a.s[2], b.s[2]));
}

fcShort3 fcShort3_clz(fcShort3 a) {
  return fcShort3_create111(fcMath_clzs(a.s[0]), fcMath_clzs(a.s[1]), fcMath_clzs(a.s[2]));
}

fcShort3 fcShort3_hadd(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_hadds(a.s[0], b.s[0]), fcMath_hadds(a.s[1], b.s[1]), fcMath_hadds(a.s[2], b.s[2]));
}

fcShort3 fcShort3_madHi(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_madHis(a.s[0], b.s[0], c.s[0]), fcMath_madHis(a.s[1], b.s[1], c.s[1]), fcMath_madHis(a.s[2], b.s[2], c.s[2]));
}

fcShort3 fcShort3_madSat(fcShort3 a, fcShort3 b, fcShort3 c) {
  return fcShort3_create111(fcMath_madSats(a.s[0], b.s[0], c.s[0]), fcMath_madSats(a.s[1], b.s[1], c.s[1]), fcMath_madSats(a.s[2], b.s[2], c.s[2]));
}

fcShort3 fcShort3_mulHi(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_mulHis(a.s[0], b.s[0]), fcMath_mulHis(a.s[1], b.s[1]), fcMath_mulHis(a.s[2], b.s[2]));
}

fcShort3 fcShort3_rhadd(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_rhadds(a.s[0], b.s[0]), fcMath_rhadds(a.s[1], b.s[1]), fcMath_rhadds(a.s[2], b.s[2]));
}

fcShort3 fcShort3_rotate(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_rotates(a.s[0], b.s[0]), fcMath_rotates(a.s[1], b.s[1]), fcMath_rotates(a.s[2], b.s[2]));
}

fcShort3 fcShort3_subSat(fcShort3 a, fcShort3 b) {
  return fcShort3_create111(fcMath_subSats(a.s[0], b.s[0]), fcMath_subSats(a.s[1], b.s[1]), fcMath_subSats(a.s[2], b.s[2]));
}


//
// fcShort4
//

fcShort4 fcShort4_create1(cl_short v) {
  return fcShort4_create1111(v, v, v, v);
}

void fcShort4_set1(fcShort4* self, cl_short v) {
  fcShort4_set1111(self, v, v, v, v);
}

fcShort4 fcShort4_create1111(cl_short x, cl_short y, cl_short z, cl_short w) {
  fcShort4 result;
  fcShort4_set1111(&result, x, y, z, w);
  return result;
}

void fcShort4_set1111(fcShort4* self, cl_short x, cl_short y, cl_short z, cl_short w) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
}

fcShort4 fcShort4_create112(cl_short x, cl_short y, fcShort2 vec1) {
  return fcShort4_create1111(x, y, vec1.s[0], vec1.s[1]);
}

void fcShort4_set112(fcShort4* self, cl_short x, cl_short y, fcShort2 vec1) {
  fcShort4_set1111(self, x, y, vec1.s[0], vec1.s[1]);
}

fcShort4 fcShort4_create121(cl_short x, fcShort2 vec1, cl_short w) {
  return fcShort4_create1111(x, vec1.s[0], vec1.s[1], w);
}

void fcShort4_set121(fcShort4* self, cl_short x, fcShort2 vec1, cl_short w) {
  fcShort4_set1111(self, x, vec1.s[0], vec1.s[1], w);
}

fcShort4 fcShort4_create13(cl_short x, fcShort3 vec1) {
  return fcShort4_create1111(x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcShort4_set13(fcShort4* self, cl_short x, fcShort3 vec1) {
  fcShort4_set1111(self, x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcShort4 fcShort4_create211(fcShort2 vec1, cl_short z, cl_short w) {
  return fcShort4_create1111(vec1.s[0], vec1.s[1], z, w);
}

void fcShort4_set211(fcShort4* self, fcShort2 vec1, cl_short z, cl_short w) {
  fcShort4_set1111(self, vec1.s[0], vec1.s[1], z, w);
}

fcShort4 fcShort4_create22(fcShort2 vec1, fcShort2 vec2) {
  return fcShort4_create1111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcShort4_set22(fcShort4* self, fcShort2 vec1, fcShort2 vec2) {
  fcShort4_set1111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcShort4 fcShort4_create31(fcShort3 vec1, cl_short w) {
  return fcShort4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], w);
}

void fcShort4_set31(fcShort4* self, fcShort3 vec1, cl_short w) {
  fcShort4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], w);
}

fcShort4 fcShort4_create4(fcShort4 vec1) {
  return fcShort4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcShort4_set4(fcShort4* self, fcShort4 vec1) {
  fcShort4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcShort2 fcShort4_odd(fcShort4 a) {
  return fcShort2_create11(a.s[1], a.s[3]);
}

fcShort2 fcShort4_even(fcShort4 a) {
  return fcShort2_create11(a.s[0], a.s[2]);
}

fcByte4 fcShort4_convertByte4(fcShort4 a) {
  return fcByte4_create1111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]));
}

fcInt4 fcShort4_convertInt4(fcShort4 a) {
  return fcInt4_create1111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]));
}

fcLong4 fcShort4_convertLong4(fcShort4 a) {
  return fcLong4_create1111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]));
}

fcFloat4 fcShort4_convertFloat4(fcShort4 a) {
  return fcFloat4_create1111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]));
}

fcDouble4 fcShort4_convertDouble4(fcShort4 a) {
  return fcDouble4_create1111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]));
}

fcShort2 fcShort4_asShort2(fcShort4 a) {
  return fcShort2_create11(a.s[0], a.s[1]);
}

fcShort3 fcShort4_asShort3(fcShort4 a) {
  return fcShort3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcShort4_isEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
}

fcInt4 fcShort4_isNotEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
}

fcInt4 fcShort4_isGreater(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
}

fcInt4 fcShort4_isGreaterEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
}

fcInt4 fcShort4_isLess(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
}

fcInt4 fcShort4_isLessEqual(fcShort4 a, fcShort4 b) {
  return fcInt4_create1111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
}

fcShort4 fcShort4_select(fcShort4 a, fcShort4 b, fcInt4 c) {
  return fcShort4_create1111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]));
}

cl_int fcShort4_any(fcShort4 a) {
  return a.s[0] != 0 || a.s[1] != 0 || a.s[2] != 0 || a.s[3] != 0;
}

cl_int fcShort4_all(fcShort4 a) {
  return !(a.s[0] == 0 || a.s[1] == 0 || a.s[2] == 0 || a.s[3] == 0);
}

fcShort4 fcShort4_neg(fcShort4 a) {
  return fcShort4_create1111(-a.s[0], -a.s[1], -a.s[2], -a.s[3]);
}

fcShort4 fcShort4_add(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3]);
}

fcShort4 fcShort4_sub(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3]);
}

fcShort4 fcShort4_mul(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3]);
}

fcDouble4 fcShort4_muld(fcShort4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]));
}

fcFloat4 fcShort4_mulf(fcShort4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]));
}

fcShort4 fcShort4_mulk(fcShort4 a, cl_short k) {
  return fcShort4_create1111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k);
}

fcDouble4 fcShort4_mulkd(fcShort4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k));
}

fcFloat4 fcShort4_mulkf(fcShort4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k));
}

fcShort4 fcShort4_div(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3]);
}

fcDouble4 fcShort4_divd(fcShort4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]));
}

fcFloat4 fcShort4_divf(fcShort4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]));
}

fcShort4 fcShort4_divk(fcShort4 a, cl_short k) {
  return fcShort4_create1111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k);
}

fcDouble4 fcShort4_divkd(fcShort4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k));
}

fcFloat4 fcShort4_divkf(fcShort4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k));
}

fcShort4 fcShort4_mod(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3]);
}

fcShort4 fcShort4_modk(fcShort4 a, cl_short k) {
  return fcShort4_create1111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k);
}

fcShort4 fcShort4_bitAnd(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3]);
}

fcShort4 fcShort4_bitOr(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3]);
}

fcShort4 fcShort4_bitXor(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3]);
}

fcShort4 fcShort4_bitNot(fcShort4 a) {
  return fcShort4_create1111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3]);
}

fcShort4 fcShort4_abs(fcShort4 a) {
  return fcShort4_create1111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]));
}

fcShort4 fcShort4_clamp(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]));
}

fcShort4 fcShort4_max(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]));
}

fcShort4 fcShort4_maxMag(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]));
}

fcShort4 fcShort4_min(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]));
}

fcShort4 fcShort4_minMag(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]));
}

fcShort4 fcShort4_mix(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]));
}

fcShort4 fcShort4_clampk(fcShort4 v, cl_short min, cl_short max) {
  return fcShort4_create1111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max));
}

fcShort4 fcShort4_maxk(fcShort4 x, cl_short y) {
  return fcShort4_create1111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y));
}

fcShort4 fcShort4_mink(fcShort4 x, cl_short y) {
  return fcShort4_create1111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y));
}

fcShort4 fcShort4_mixk(fcShort4 x, fcShort4 y, cl_short a) {
  return fcShort4_create1111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a));
}

fcShort4 fcShort4_absDiff(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]));
}

fcShort4 fcShort4_addSat(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_addSats(a.s[0], b.s[0]), fcMath_addSats(a.s[1], b.s[1]), fcMath_addSats(a.s[2], b.s[2]), fcMath_addSats(a.s[3], b.s[3]));
}

fcShort4 fcShort4_clz(fcShort4 a) {
  return fcShort4_create1111(fcMath_clzs(a.s[0]), fcMath_clzs(a.s[1]), fcMath_clzs(a.s[2]), fcMath_clzs(a.s[3]));
}

fcShort4 fcShort4_hadd(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_hadds(a.s[0], b.s[0]), fcMath_hadds(a.s[1], b.s[1]), fcMath_hadds(a.s[2], b.s[2]), fcMath_hadds(a.s[3], b.s[3]));
}

fcShort4 fcShort4_madHi(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_madHis(a.s[0], b.s[0], c.s[0]), fcMath_madHis(a.s[1], b.s[1], c.s[1]), fcMath_madHis(a.s[2], b.s[2], c.s[2]), fcMath_madHis(a.s[3], b.s[3], c.s[3]));
}

fcShort4 fcShort4_madSat(fcShort4 a, fcShort4 b, fcShort4 c) {
  return fcShort4_create1111(fcMath_madSats(a.s[0], b.s[0], c.s[0]), fcMath_madSats(a.s[1], b.s[1], c.s[1]), fcMath_madSats(a.s[2], b.s[2], c.s[2]), fcMath_madSats(a.s[3], b.s[3], c.s[3]));
}

fcShort4 fcShort4_mulHi(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_mulHis(a.s[0], b.s[0]), fcMath_mulHis(a.s[1], b.s[1]), fcMath_mulHis(a.s[2], b.s[2]), fcMath_mulHis(a.s[3], b.s[3]));
}

fcShort4 fcShort4_rhadd(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_rhadds(a.s[0], b.s[0]), fcMath_rhadds(a.s[1], b.s[1]), fcMath_rhadds(a.s[2], b.s[2]), fcMath_rhadds(a.s[3], b.s[3]));
}

fcShort4 fcShort4_rotate(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_rotates(a.s[0], b.s[0]), fcMath_rotates(a.s[1], b.s[1]), fcMath_rotates(a.s[2], b.s[2]), fcMath_rotates(a.s[3], b.s[3]));
}

fcShort4 fcShort4_subSat(fcShort4 a, fcShort4 b) {
  return fcShort4_create1111(fcMath_subSats(a.s[0], b.s[0]), fcMath_subSats(a.s[1], b.s[1]), fcMath_subSats(a.s[2], b.s[2]), fcMath_subSats(a.s[3], b.s[3]));
}


//
// fcShort8
//

fcShort8 fcShort8_create1(cl_short v) {
  return fcShort8_create11111111(v, v, v, v, v, v, v, v);
}

void fcShort8_set1(fcShort8* self, cl_short v) {
  fcShort8_set11111111(self, v, v, v, v, v, v, v, v);
}

fcShort8 fcShort8_create11111111(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8 result;
  fcShort8_set11111111(&result, x, y, z, w, s4, s5, s6, s7);
  return result;
}

void fcShort8_set11111111(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
  self->s[4] = s4;
  self->s[5] = s5;
  self->s[6] = s6;
  self->s[7] = s7;
}

fcShort8 fcShort8_create1111112(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec1) {
  return fcShort8_create11111111(x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

void fcShort8_set1111112(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec1) {
  fcShort8_set11111111(self, x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

fcShort8 fcShort8_create1111121(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort2 vec1, cl_short s7) {
  return fcShort8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

void fcShort8_set1111121(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort2 vec1, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

fcShort8 fcShort8_create111113(cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort3 vec1) {
  return fcShort8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcShort8_set111113(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, cl_short s4, fcShort3 vec1) {
  fcShort8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcShort8 fcShort8_create1111211(cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

void fcShort8_set1111211(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

fcShort8 fcShort8_create111122(cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcShort8_set111122(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort2 vec1, fcShort2 vec2) {
  fcShort8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create111131(cl_short x, cl_short y, cl_short z, cl_short w, fcShort3 vec1, cl_short s7) {
  return fcShort8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

void fcShort8_set111131(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort3 vec1, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

fcShort8 fcShort8_create11114(cl_short x, cl_short y, cl_short z, cl_short w, fcShort4 vec1) {
  return fcShort8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcShort8_set11114(fcShort8* self, cl_short x, cl_short y, cl_short z, cl_short w, fcShort4 vec1) {
  fcShort8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcShort8 fcShort8_create1112111(cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

void fcShort8_set1112111(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

fcShort8 fcShort8_create111212(cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set111212(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create111221(cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set111221(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create11123(cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort3 vec2) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set11123(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort2 vec1, fcShort3 vec2) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create111311(cl_short x, cl_short y, cl_short z, fcShort3 vec1, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

void fcShort8_set111311(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort3 vec1, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

fcShort8 fcShort8_create11132(cl_short x, cl_short y, cl_short z, fcShort3 vec1, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

void fcShort8_set11132(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort3 vec1, fcShort2 vec2) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create11141(cl_short x, cl_short y, cl_short z, fcShort4 vec1, cl_short s7) {
  return fcShort8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

void fcShort8_set11141(fcShort8* self, cl_short x, cl_short y, cl_short z, fcShort4 vec1, cl_short s7) {
  fcShort8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

fcShort8 fcShort8_create1121111(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

void fcShort8_set1121111(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

fcShort8 fcShort8_create112112(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set112112(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create112121(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set112121(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create11213(cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set11213(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, cl_short s4, fcShort3 vec2) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create112211(cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

void fcShort8_set112211(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

fcShort8 fcShort8_create11222(cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcShort8_set11222(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create11231(cl_short x, cl_short y, fcShort2 vec1, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcShort8_set11231(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort3 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcShort8 fcShort8_create1124(cl_short x, cl_short y, fcShort2 vec1, fcShort4 vec2) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcShort8_set1124(fcShort8* self, cl_short x, cl_short y, fcShort2 vec1, fcShort4 vec2) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcShort8 fcShort8_create113111(cl_short x, cl_short y, fcShort3 vec1, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

void fcShort8_set113111(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

fcShort8 fcShort8_create11312(cl_short x, cl_short y, fcShort3 vec1, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set11312(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create11321(cl_short x, cl_short y, fcShort3 vec1, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set11321(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create1133(cl_short x, cl_short y, fcShort3 vec1, fcShort3 vec2) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set1133(fcShort8* self, cl_short x, cl_short y, fcShort3 vec1, fcShort3 vec2) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create11411(cl_short x, cl_short y, fcShort4 vec1, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

void fcShort8_set11411(fcShort8* self, cl_short x, cl_short y, fcShort4 vec1, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

fcShort8 fcShort8_create1142(cl_short x, cl_short y, fcShort4 vec1, fcShort2 vec2) {
  return fcShort8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

void fcShort8_set1142(fcShort8* self, cl_short x, cl_short y, fcShort4 vec1, fcShort2 vec2) {
  fcShort8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create1211111(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

void fcShort8_set1211111(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

fcShort8 fcShort8_create121112(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set121112(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create121121(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set121121(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create12113(cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set12113(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, cl_short s4, fcShort3 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create121211(cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcShort8_set121211(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcShort8 fcShort8_create12122(cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcShort8_set12122(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create12131(cl_short x, fcShort2 vec1, cl_short w, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcShort8_set12131(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort3 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcShort8 fcShort8_create1214(cl_short x, fcShort2 vec1, cl_short w, fcShort4 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcShort8_set1214(fcShort8* self, cl_short x, fcShort2 vec1, cl_short w, fcShort4 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcShort8 fcShort8_create122111(cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcShort8_set122111(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcShort8 fcShort8_create12212(cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcShort8_set12212(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create12221(cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcShort8_set12221(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcShort8 fcShort8_create1223(cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcShort8_set1223(fcShort8* self, cl_short x, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcShort8 fcShort8_create12311(cl_short x, fcShort2 vec1, fcShort3 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcShort8_set12311(fcShort8* self, cl_short x, fcShort2 vec1, fcShort3 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcShort8 fcShort8_create1232(cl_short x, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcShort8_set1232(fcShort8* self, cl_short x, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create1241(cl_short x, fcShort2 vec1, fcShort4 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcShort8_set1241(fcShort8* self, cl_short x, fcShort2 vec1, fcShort4 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcShort8 fcShort8_create131111(cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

void fcShort8_set131111(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

fcShort8 fcShort8_create13112(cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set13112(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create13121(cl_short x, fcShort3 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set13121(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create1313(cl_short x, fcShort3 vec1, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set1313(fcShort8* self, cl_short x, fcShort3 vec1, cl_short s4, fcShort3 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create13211(cl_short x, fcShort3 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

void fcShort8_set13211(fcShort8* self, cl_short x, fcShort3 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

fcShort8 fcShort8_create1322(cl_short x, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcShort8_set1322(fcShort8* self, cl_short x, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create1331(cl_short x, fcShort3 vec1, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcShort8_set1331(fcShort8* self, cl_short x, fcShort3 vec1, fcShort3 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcShort8 fcShort8_create134(cl_short x, fcShort3 vec1, fcShort4 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcShort8_set134(fcShort8* self, cl_short x, fcShort3 vec1, fcShort4 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcShort8 fcShort8_create14111(cl_short x, fcShort4 vec1, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

void fcShort8_set14111(fcShort8* self, cl_short x, fcShort4 vec1, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

fcShort8 fcShort8_create1412(cl_short x, fcShort4 vec1, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set1412(fcShort8* self, cl_short x, fcShort4 vec1, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create1421(cl_short x, fcShort4 vec1, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set1421(fcShort8* self, cl_short x, fcShort4 vec1, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create143(cl_short x, fcShort4 vec1, fcShort3 vec2) {
  return fcShort8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set143(fcShort8* self, cl_short x, fcShort4 vec1, fcShort3 vec2) {
  fcShort8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create2111111(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

void fcShort8_set2111111(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

fcShort8 fcShort8_create211112(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set211112(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create211121(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set211121(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create21113(fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set21113(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, cl_short s4, fcShort3 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create211211(fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcShort8_set211211(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

fcShort8 fcShort8_create21122(fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcShort8_set21122(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create21131(fcShort2 vec1, cl_short z, cl_short w, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcShort8_set21131(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort3 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcShort8 fcShort8_create2114(fcShort2 vec1, cl_short z, cl_short w, fcShort4 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcShort8_set2114(fcShort8* self, fcShort2 vec1, cl_short z, cl_short w, fcShort4 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcShort8 fcShort8_create212111(fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcShort8_set212111(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcShort8 fcShort8_create21212(fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcShort8_set21212(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create21221(fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcShort8_set21221(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcShort8 fcShort8_create2123(fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcShort8_set2123(fcShort8* self, fcShort2 vec1, cl_short z, fcShort2 vec2, fcShort3 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcShort8 fcShort8_create21311(fcShort2 vec1, cl_short z, fcShort3 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcShort8_set21311(fcShort8* self, fcShort2 vec1, cl_short z, fcShort3 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcShort8 fcShort8_create2132(fcShort2 vec1, cl_short z, fcShort3 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcShort8_set2132(fcShort8* self, fcShort2 vec1, cl_short z, fcShort3 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create2141(fcShort2 vec1, cl_short z, fcShort4 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcShort8_set2141(fcShort8* self, fcShort2 vec1, cl_short z, fcShort4 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcShort8 fcShort8_create221111(fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

void fcShort8_set221111(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

fcShort8 fcShort8_create22112(fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

void fcShort8_set22112(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, cl_short s5, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create22121(fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

void fcShort8_set22121(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort2 vec3, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

fcShort8 fcShort8_create2213(fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcShort8_set2213(fcShort8* self, fcShort2 vec1, fcShort2 vec2, cl_short s4, fcShort3 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcShort8 fcShort8_create22211(fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

void fcShort8_set22211(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

fcShort8 fcShort8_create2222(fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, fcShort2 vec4) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

void fcShort8_set2222(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort2 vec3, fcShort2 vec4) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

fcShort8 fcShort8_create2231(fcShort2 vec1, fcShort2 vec2, fcShort3 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

void fcShort8_set2231(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort3 vec3, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

fcShort8 fcShort8_create224(fcShort2 vec1, fcShort2 vec2, fcShort4 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

void fcShort8_set224(fcShort8* self, fcShort2 vec1, fcShort2 vec2, fcShort4 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

fcShort8 fcShort8_create23111(fcShort2 vec1, fcShort3 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

void fcShort8_set23111(fcShort8* self, fcShort2 vec1, fcShort3 vec2, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

fcShort8 fcShort8_create2312(fcShort2 vec1, fcShort3 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

void fcShort8_set2312(fcShort8* self, fcShort2 vec1, fcShort3 vec2, cl_short s5, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create2321(fcShort2 vec1, fcShort3 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

void fcShort8_set2321(fcShort8* self, fcShort2 vec1, fcShort3 vec2, fcShort2 vec3, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

fcShort8 fcShort8_create233(fcShort2 vec1, fcShort3 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcShort8_set233(fcShort8* self, fcShort2 vec1, fcShort3 vec2, fcShort3 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcShort8 fcShort8_create2411(fcShort2 vec1, fcShort4 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

void fcShort8_set2411(fcShort8* self, fcShort2 vec1, fcShort4 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

fcShort8 fcShort8_create242(fcShort2 vec1, fcShort4 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

void fcShort8_set242(fcShort8* self, fcShort2 vec1, fcShort4 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create311111(fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

void fcShort8_set311111(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

fcShort8 fcShort8_create31112(fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set31112(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create31121(fcShort3 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set31121(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create3113(fcShort3 vec1, cl_short w, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set3113(fcShort8* self, fcShort3 vec1, cl_short w, cl_short s4, fcShort3 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create31211(fcShort3 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcShort8_set31211(fcShort8* self, fcShort3 vec1, cl_short w, fcShort2 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcShort8 fcShort8_create3122(fcShort3 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcShort8_set3122(fcShort8* self, fcShort3 vec1, cl_short w, fcShort2 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create3131(fcShort3 vec1, cl_short w, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcShort8_set3131(fcShort8* self, fcShort3 vec1, cl_short w, fcShort3 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcShort8 fcShort8_create314(fcShort3 vec1, cl_short w, fcShort4 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcShort8_set314(fcShort8* self, fcShort3 vec1, cl_short w, fcShort4 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcShort8 fcShort8_create32111(fcShort3 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcShort8_set32111(fcShort8* self, fcShort3 vec1, fcShort2 vec2, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcShort8 fcShort8_create3212(fcShort3 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcShort8_set3212(fcShort8* self, fcShort3 vec1, fcShort2 vec2, cl_short s5, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create3221(fcShort3 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcShort8_set3221(fcShort8* self, fcShort3 vec1, fcShort2 vec2, fcShort2 vec3, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcShort8 fcShort8_create323(fcShort3 vec1, fcShort2 vec2, fcShort3 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcShort8_set323(fcShort8* self, fcShort3 vec1, fcShort2 vec2, fcShort3 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcShort8 fcShort8_create3311(fcShort3 vec1, fcShort3 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcShort8_set3311(fcShort8* self, fcShort3 vec1, fcShort3 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcShort8 fcShort8_create332(fcShort3 vec1, fcShort3 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcShort8_set332(fcShort8* self, fcShort3 vec1, fcShort3 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create341(fcShort3 vec1, fcShort4 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcShort8_set341(fcShort8* self, fcShort3 vec1, fcShort4 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcShort8 fcShort8_create41111(fcShort4 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

void fcShort8_set41111(fcShort8* self, fcShort4 vec1, cl_short s4, cl_short s5, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

fcShort8 fcShort8_create4112(fcShort4 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcShort8_set4112(fcShort8* self, fcShort4 vec1, cl_short s4, cl_short s5, fcShort2 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

fcShort8 fcShort8_create4121(fcShort4 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

void fcShort8_set4121(fcShort8* self, fcShort4 vec1, cl_short s4, fcShort2 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

fcShort8 fcShort8_create413(fcShort4 vec1, cl_short s4, fcShort3 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcShort8_set413(fcShort8* self, fcShort4 vec1, cl_short s4, fcShort3 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcShort8 fcShort8_create4211(fcShort4 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

void fcShort8_set4211(fcShort8* self, fcShort4 vec1, fcShort2 vec2, cl_short s6, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

fcShort8 fcShort8_create422(fcShort4 vec1, fcShort2 vec2, fcShort2 vec3) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcShort8_set422(fcShort8* self, fcShort4 vec1, fcShort2 vec2, fcShort2 vec3) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcShort8 fcShort8_create431(fcShort4 vec1, fcShort3 vec2, cl_short s7) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcShort8_set431(fcShort8* self, fcShort4 vec1, fcShort3 vec2, cl_short s7) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcShort8 fcShort8_create44(fcShort4 vec1, fcShort4 vec2) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcShort8_set44(fcShort8* self, fcShort4 vec1, fcShort4 vec2) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcShort8 fcShort8_create8(fcShort8 vec1) {
  return fcShort8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

void fcShort8_set8(fcShort8* self, fcShort8 vec1) {
  fcShort8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

fcShort4 fcShort8_odd(fcShort8 a) {
  return fcShort4_create1111(a.s[1], a.s[3], a.s[5], a.s[7]);
}

fcShort4 fcShort8_even(fcShort8 a) {
  return fcShort4_create1111(a.s[0], a.s[2], a.s[4], a.s[6]);
}

fcByte8 fcShort8_convertByte8(fcShort8 a) {
  return fcByte8_create11111111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]), (cl_byte)(a.s[4]), (cl_byte)(a.s[5]), (cl_byte)(a.s[6]), (cl_byte)(a.s[7]));
}

fcInt8 fcShort8_convertInt8(fcShort8 a) {
  return fcInt8_create11111111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]), (cl_int)(a.s[4]), (cl_int)(a.s[5]), (cl_int)(a.s[6]), (cl_int)(a.s[7]));
}

fcLong8 fcShort8_convertLong8(fcShort8 a) {
  return fcLong8_create11111111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]), (cl_long)(a.s[4]), (cl_long)(a.s[5]), (cl_long)(a.s[6]), (cl_long)(a.s[7]));
}

fcFloat8 fcShort8_convertFloat8(fcShort8 a) {
  return fcFloat8_create11111111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]), (cl_float)(a.s[4]), (cl_float)(a.s[5]), (cl_float)(a.s[6]), (cl_float)(a.s[7]));
}

fcDouble8 fcShort8_convertDouble8(fcShort8 a) {
  return fcDouble8_create11111111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]), (cl_double)(a.s[4]), (cl_double)(a.s[5]), (cl_double)(a.s[6]), (cl_double)(a.s[7]));
}

fcShort2 fcShort8_asShort2(fcShort8 a) {
  return fcShort2_create11(a.s[0], a.s[1]);
}

fcShort3 fcShort8_asShort3(fcShort8 a) {
  return fcShort3_create111(a.s[0], a.s[1], a.s[2]);
}

fcShort4 fcShort8_asShort4(fcShort8 a) {
  return fcShort4_create1111(a.s[0], a.s[1], a.s[2], a.s[3]);
}

fcInt8 fcShort8_isEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0, a.s[4] == b.s[4]? 1 : 0, a.s[5] == b.s[5]? 1 : 0, a.s[6] == b.s[6]? 1 : 0, a.s[7] == b.s[7]? 1 : 0);
}

fcInt8 fcShort8_isNotEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0, a.s[4] != b.s[4]? 1 : 0, a.s[5] != b.s[5]? 1 : 0, a.s[6] != b.s[6]? 1 : 0, a.s[7] != b.s[7]? 1 : 0);
}

fcInt8 fcShort8_isGreater(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0, a.s[4] > b.s[4]? 1 : 0, a.s[5] > b.s[5]? 1 : 0, a.s[6] > b.s[6]? 1 : 0, a.s[7] > b.s[7]? 1 : 0);
}

fcInt8 fcShort8_isGreaterEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0, a.s[4] >= b.s[4]? 1 : 0, a.s[5] >= b.s[5]? 1 : 0, a.s[6] >= b.s[6]? 1 : 0, a.s[7] >= b.s[7]? 1 : 0);
}

fcInt8 fcShort8_isLess(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0, a.s[4] < b.s[4]? 1 : 0, a.s[5] < b.s[5]? 1 : 0, a.s[6] < b.s[6]? 1 : 0, a.s[7] < b.s[7]? 1 : 0);
}

fcInt8 fcShort8_isLessEqual(fcShort8 a, fcShort8 b) {
  return fcInt8_create11111111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0, a.s[4] <= b.s[4]? 1 : 0, a.s[5] <= b.s[5]? 1 : 0, a.s[6] <= b.s[6]? 1 : 0, a.s[7] <= b.s[7]? 1 : 0);
}

fcShort8 fcShort8_select(fcShort8 a, fcShort8 b, fcInt8 c) {
  return fcShort8_create11111111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]), fcMath_select(a.s[4], b.s[4], c.s[4]), fcMath_select(a.s[5], b.s[5], c.s[5]), fcMath_select(a.s[6], b.s[6], c.s[6]), fcMath_select(a.s[7], b.s[7], c.s[7]));
}

cl_int fcShort8_any(fcShort8 a) {
  return a.s[0] != 0 || a.s[1] != 0 || a.s[2] != 0 || a.s[3] != 0 || a.s[4] != 0 || a.s[5] != 0 || a.s[6] != 0 || a.s[7] != 0;
}

cl_int fcShort8_all(fcShort8 a) {
  return !(a.s[0] == 0 || a.s[1] == 0 || a.s[2] == 0 || a.s[3] == 0 || a.s[4] == 0 || a.s[5] == 0 || a.s[6] == 0 || a.s[7] == 0);
}

fcShort8 fcShort8_neg(fcShort8 a) {
  return fcShort8_create11111111(-a.s[0], -a.s[1], -a.s[2], -a.s[3], -a.s[4], -a.s[5], -a.s[6], -a.s[7]);
}

fcShort8 fcShort8_add(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3], a.s[4] + b.s[4], a.s[5] + b.s[5], a.s[6] + b.s[6], a.s[7] + b.s[7]);
}

fcShort8 fcShort8_sub(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3], a.s[4] - b.s[4], a.s[5] - b.s[5], a.s[6] - b.s[6], a.s[7] - b.s[7]);
}

fcShort8 fcShort8_mul(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3], a.s[4] * b.s[4], a.s[5] * b.s[5], a.s[6] * b.s[6], a.s[7] * b.s[7]);
}

fcDouble8 fcShort8_muld(fcShort8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]), (cl_double)(a.s[4] * b.s[4]), (cl_double)(a.s[5] * b.s[5]), (cl_double)(a.s[6] * b.s[6]), (cl_double)(a.s[7] * b.s[7]));
}

fcFloat8 fcShort8_mulf(fcShort8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]), (cl_float)(a.s[4] * b.s[4]), (cl_float)(a.s[5] * b.s[5]), (cl_float)(a.s[6] * b.s[6]), (cl_float)(a.s[7] * b.s[7]));
}

fcShort8 fcShort8_mulk(fcShort8 a, cl_short k) {
  return fcShort8_create11111111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k, a.s[4] * k, a.s[5] * k, a.s[6] * k, a.s[7] * k);
}

fcDouble8 fcShort8_mulkd(fcShort8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k), (cl_double)(a.s[4] * k), (cl_double)(a.s[5] * k), (cl_double)(a.s[6] * k), (cl_double)(a.s[7] * k));
}

fcFloat8 fcShort8_mulkf(fcShort8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k), (cl_float)(a.s[4] * k), (cl_float)(a.s[5] * k), (cl_float)(a.s[6] * k), (cl_float)(a.s[7] * k));
}

fcShort8 fcShort8_div(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3], a.s[4] / b.s[4], a.s[5] / b.s[5], a.s[6] / b.s[6], a.s[7] / b.s[7]);
}

fcDouble8 fcShort8_divd(fcShort8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]), (cl_double)(a.s[4] / b.s[4]), (cl_double)(a.s[5] / b.s[5]), (cl_double)(a.s[6] / b.s[6]), (cl_double)(a.s[7] / b.s[7]));
}

fcFloat8 fcShort8_divf(fcShort8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]), (cl_float)(a.s[4] / b.s[4]), (cl_float)(a.s[5] / b.s[5]), (cl_float)(a.s[6] / b.s[6]), (cl_float)(a.s[7] / b.s[7]));
}

fcShort8 fcShort8_divk(fcShort8 a, cl_short k) {
  return fcShort8_create11111111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k, a.s[4] / k, a.s[5] / k, a.s[6] / k, a.s[7] / k);
}

fcDouble8 fcShort8_divkd(fcShort8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k), (cl_double)(a.s[4] / k), (cl_double)(a.s[5] / k), (cl_double)(a.s[6] / k), (cl_double)(a.s[7] / k));
}

fcFloat8 fcShort8_divkf(fcShort8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k), (cl_float)(a.s[4] / k), (cl_float)(a.s[5] / k), (cl_float)(a.s[6] / k), (cl_float)(a.s[7] / k));
}

fcShort8 fcShort8_mod(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3], a.s[4] % b.s[4], a.s[5] % b.s[5], a.s[6] % b.s[6], a.s[7] % b.s[7]);
}

fcShort8 fcShort8_modk(fcShort8 a, cl_short k) {
  return fcShort8_create11111111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k, a.s[4] % k, a.s[5] % k, a.s[6] % k, a.s[7] % k);
}

fcShort8 fcShort8_bitAnd(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3], a.s[4] & b.s[4], a.s[5] & b.s[5], a.s[6] & b.s[6], a.s[7] & b.s[7]);
}

fcShort8 fcShort8_bitOr(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3], a.s[4] | b.s[4], a.s[5] | b.s[5], a.s[6] | b.s[6], a.s[7] | b.s[7]);
}

fcShort8 fcShort8_bitXor(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3], a.s[4] ^ b.s[4], a.s[5] ^ b.s[5], a.s[6] ^ b.s[6], a.s[7] ^ b.s[7]);
}

fcShort8 fcShort8_bitNot(fcShort8 a) {
  return fcShort8_create11111111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3], ~a.s[4], ~a.s[5], ~a.s[6], ~a.s[7]);
}

fcShort8 fcShort8_abs(fcShort8 a) {
  return fcShort8_create11111111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]), fcMath_abs(a.s[4]), fcMath_abs(a.s[5]), fcMath_abs(a.s[6]), fcMath_abs(a.s[7]));
}

fcShort8 fcShort8_clamp(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]), fcMath_clamp(a.s[4], b.s[4], c.s[4]), fcMath_clamp(a.s[5], b.s[5], c.s[5]), fcMath_clamp(a.s[6], b.s[6], c.s[6]), fcMath_clamp(a.s[7], b.s[7], c.s[7]));
}

fcShort8 fcShort8_max(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]), fcMath_max(a.s[4], b.s[4]), fcMath_max(a.s[5], b.s[5]), fcMath_max(a.s[6], b.s[6]), fcMath_max(a.s[7], b.s[7]));
}

fcShort8 fcShort8_maxMag(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]), fcMath_maxMag(a.s[4], b.s[4]), fcMath_maxMag(a.s[5], b.s[5]), fcMath_maxMag(a.s[6], b.s[6]), fcMath_maxMag(a.s[7], b.s[7]));
}

fcShort8 fcShort8_min(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]), fcMath_min(a.s[4], b.s[4]), fcMath_min(a.s[5], b.s[5]), fcMath_min(a.s[6], b.s[6]), fcMath_min(a.s[7], b.s[7]));
}

fcShort8 fcShort8_minMag(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]), fcMath_minMag(a.s[4], b.s[4]), fcMath_minMag(a.s[5], b.s[5]), fcMath_minMag(a.s[6], b.s[6]), fcMath_minMag(a.s[7], b.s[7]));
}

fcShort8 fcShort8_mix(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]), fcMath_mix(a.s[4], b.s[4], c.s[4]), fcMath_mix(a.s[5], b.s[5], c.s[5]), fcMath_mix(a.s[6], b.s[6], c.s[6]), fcMath_mix(a.s[7], b.s[7], c.s[7]));
}

fcShort8 fcShort8_clampk(fcShort8 v, cl_short min, cl_short max) {
  return fcShort8_create11111111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max), fcMath_clamp(v.s[4], min, max), fcMath_clamp(v.s[5], min, max), fcMath_clamp(v.s[6], min, max), fcMath_clamp(v.s[7], min, max));
}

fcShort8 fcShort8_maxk(fcShort8 x, cl_short y) {
  return fcShort8_create11111111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y), fcMath_max(x.s[4], y), fcMath_max(x.s[5], y), fcMath_max(x.s[6], y), fcMath_max(x.s[7], y));
}

fcShort8 fcShort8_mink(fcShort8 x, cl_short y) {
  return fcShort8_create11111111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y), fcMath_min(x.s[4], y), fcMath_min(x.s[5], y), fcMath_min(x.s[6], y), fcMath_min(x.s[7], y));
}

fcShort8 fcShort8_mixk(fcShort8 x, fcShort8 y, cl_short a) {
  return fcShort8_create11111111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a), fcMath_mix(x.s[4], y.s[4], a), fcMath_mix(x.s[5], y.s[5], a), fcMath_mix(x.s[6], y.s[6], a), fcMath_mix(x.s[7], y.s[7], a));
}

fcShort8 fcShort8_absDiff(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]), fcMath_absDiff(a.s[4], b.s[4]), fcMath_absDiff(a.s[5], b.s[5]), fcMath_absDiff(a.s[6], b.s[6]), fcMath_absDiff(a.s[7], b.s[7]));
}

fcShort8 fcShort8_addSat(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_addSats(a.s[0], b.s[0]), fcMath_addSats(a.s[1], b.s[1]), fcMath_addSats(a.s[2], b.s[2]), fcMath_addSats(a.s[3], b.s[3]), fcMath_addSats(a.s[4], b.s[4]), fcMath_addSats(a.s[5], b.s[5]), fcMath_addSats(a.s[6], b.s[6]), fcMath_addSats(a.s[7], b.s[7]));
}

fcShort8 fcShort8_clz(fcShort8 a) {
  return fcShort8_create11111111(fcMath_clzs(a.s[0]), fcMath_clzs(a.s[1]), fcMath_clzs(a.s[2]), fcMath_clzs(a.s[3]), fcMath_clzs(a.s[4]), fcMath_clzs(a.s[5]), fcMath_clzs(a.s[6]), fcMath_clzs(a.s[7]));
}

fcShort8 fcShort8_hadd(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_hadds(a.s[0], b.s[0]), fcMath_hadds(a.s[1], b.s[1]), fcMath_hadds(a.s[2], b.s[2]), fcMath_hadds(a.s[3], b.s[3]), fcMath_hadds(a.s[4], b.s[4]), fcMath_hadds(a.s[5], b.s[5]), fcMath_hadds(a.s[6], b.s[6]), fcMath_hadds(a.s[7], b.s[7]));
}

fcShort8 fcShort8_madHi(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_madHis(a.s[0], b.s[0], c.s[0]), fcMath_madHis(a.s[1], b.s[1], c.s[1]), fcMath_madHis(a.s[2], b.s[2], c.s[2]), fcMath_madHis(a.s[3], b.s[3], c.s[3]), fcMath_madHis(a.s[4], b.s[4], c.s[4]), fcMath_madHis(a.s[5], b.s[5], c.s[5]), fcMath_madHis(a.s[6], b.s[6], c.s[6]), fcMath_madHis(a.s[7], b.s[7], c.s[7]));
}

fcShort8 fcShort8_madSat(fcShort8 a, fcShort8 b, fcShort8 c) {
  return fcShort8_create11111111(fcMath_madSats(a.s[0], b.s[0], c.s[0]), fcMath_madSats(a.s[1], b.s[1], c.s[1]), fcMath_madSats(a.s[2], b.s[2], c.s[2]), fcMath_madSats(a.s[3], b.s[3], c.s[3]), fcMath_madSats(a.s[4], b.s[4], c.s[4]), fcMath_madSats(a.s[5], b.s[5], c.s[5]), fcMath_madSats(a.s[6], b.s[6], c.s[6]), fcMath_madSats(a.s[7], b.s[7], c.s[7]));
}

fcShort8 fcShort8_mulHi(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_mulHis(a.s[0], b.s[0]), fcMath_mulHis(a.s[1], b.s[1]), fcMath_mulHis(a.s[2], b.s[2]), fcMath_mulHis(a.s[3], b.s[3]), fcMath_mulHis(a.s[4], b.s[4]), fcMath_mulHis(a.s[5], b.s[5]), fcMath_mulHis(a.s[6], b.s[6]), fcMath_mulHis(a.s[7], b.s[7]));
}

fcShort8 fcShort8_rhadd(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_rhadds(a.s[0], b.s[0]), fcMath_rhadds(a.s[1], b.s[1]), fcMath_rhadds(a.s[2], b.s[2]), fcMath_rhadds(a.s[3], b.s[3]), fcMath_rhadds(a.s[4], b.s[4]), fcMath_rhadds(a.s[5], b.s[5]), fcMath_rhadds(a.s[6], b.s[6]), fcMath_rhadds(a.s[7], b.s[7]));
}

fcShort8 fcShort8_rotate(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_rotates(a.s[0], b.s[0]), fcMath_rotates(a.s[1], b.s[1]), fcMath_rotates(a.s[2], b.s[2]), fcMath_rotates(a.s[3], b.s[3]), fcMath_rotates(a.s[4], b.s[4]), fcMath_rotates(a.s[5], b.s[5]), fcMath_rotates(a.s[6], b.s[6]), fcMath_rotates(a.s[7], b.s[7]));
}

fcShort8 fcShort8_subSat(fcShort8 a, fcShort8 b) {
  return fcShort8_create11111111(fcMath_subSats(a.s[0], b.s[0]), fcMath_subSats(a.s[1], b.s[1]), fcMath_subSats(a.s[2], b.s[2]), fcMath_subSats(a.s[3], b.s[3]), fcMath_subSats(a.s[4], b.s[4]), fcMath_subSats(a.s[5], b.s[5]), fcMath_subSats(a.s[6], b.s[6]), fcMath_subSats(a.s[7], b.s[7]));
}


//
// fcInt2
//

fcInt2 fcInt2_create1(cl_int v) {
  return fcInt2_create11(v, v);
}

void fcInt2_set1(fcInt2* self, cl_int v) {
  fcInt2_set11(self, v, v);
}

fcInt2 fcInt2_create11(cl_int x, cl_int y) {
  fcInt2 result;
  fcInt2_set11(&result, x, y);
  return result;
}

void fcInt2_set11(fcInt2* self, cl_int x, cl_int y) {
  self->s[0] = x;
  self->s[1] = y;
}

fcInt2 fcInt2_create2(fcInt2 vec1) {
  return fcInt2_create11(vec1.s[0], vec1.s[1]);
}

void fcInt2_set2(fcInt2* self, fcInt2 vec1) {
  fcInt2_set11(self, vec1.s[0], vec1.s[1]);
}

fcByte2 fcInt2_convertByte2(fcInt2 a) {
  return fcByte2_create11((cl_byte)(a.s[0]), (cl_byte)(a.s[1]));
}

fcShort2 fcInt2_convertShort2(fcInt2 a) {
  return fcShort2_create11((cl_short)(a.s[0]), (cl_short)(a.s[1]));
}

fcLong2 fcInt2_convertLong2(fcInt2 a) {
  return fcLong2_create11((cl_long)(a.s[0]), (cl_long)(a.s[1]));
}

fcFloat2 fcInt2_convertFloat2(fcInt2 a) {
  return fcFloat2_create11((cl_float)(a.s[0]), (cl_float)(a.s[1]));
}

fcDouble2 fcInt2_convertDouble2(fcInt2 a) {
  return fcDouble2_create11((cl_double)(a.s[0]), (cl_double)(a.s[1]));
}

fcInt2 fcInt2_isEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0);
}

fcInt2 fcInt2_isNotEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0);
}

fcInt2 fcInt2_isGreater(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0);
}

fcInt2 fcInt2_isGreaterEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0);
}

fcInt2 fcInt2_isLess(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0);
}

fcInt2 fcInt2_isLessEqual(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0);
}

fcInt2 fcInt2_select(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]));
}

cl_int fcInt2_any(fcInt2 a) {
  return a.s[0] != 0 || a.s[1] != 0;
}

cl_int fcInt2_all(fcInt2 a) {
  return !(a.s[0] == 0 || a.s[1] == 0);
}

fcInt2 fcInt2_neg(fcInt2 a) {
  return fcInt2_create11(-a.s[0], -a.s[1]);
}

fcInt2 fcInt2_add(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] + b.s[0], a.s[1] + b.s[1]);
}

fcInt2 fcInt2_sub(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] - b.s[0], a.s[1] - b.s[1]);
}

fcInt2 fcInt2_mul(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] * b.s[0], a.s[1] * b.s[1]);
}

fcDouble2 fcInt2_muld(fcInt2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]));
}

fcFloat2 fcInt2_mulf(fcInt2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]));
}

fcInt2 fcInt2_mulk(fcInt2 a, cl_int k) {
  return fcInt2_create11(a.s[0] * k, a.s[1] * k);
}

fcDouble2 fcInt2_mulkd(fcInt2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k));
}

fcFloat2 fcInt2_mulkf(fcInt2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k));
}

fcInt2 fcInt2_div(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] / b.s[0], a.s[1] / b.s[1]);
}

fcDouble2 fcInt2_divd(fcInt2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]));
}

fcFloat2 fcInt2_divf(fcInt2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]));
}

fcInt2 fcInt2_divk(fcInt2 a, cl_int k) {
  return fcInt2_create11(a.s[0] / k, a.s[1] / k);
}

fcDouble2 fcInt2_divkd(fcInt2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k));
}

fcFloat2 fcInt2_divkf(fcInt2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k));
}

fcInt2 fcInt2_mod(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] % b.s[0], a.s[1] % b.s[1]);
}

fcInt2 fcInt2_modk(fcInt2 a, cl_int k) {
  return fcInt2_create11(a.s[0] % k, a.s[1] % k);
}

fcInt2 fcInt2_bitAnd(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] & b.s[0], a.s[1] & b.s[1]);
}

fcInt2 fcInt2_bitOr(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] | b.s[0], a.s[1] | b.s[1]);
}

fcInt2 fcInt2_bitXor(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1]);
}

fcInt2 fcInt2_bitNot(fcInt2 a) {
  return fcInt2_create11(~a.s[0], ~a.s[1]);
}

fcInt2 fcInt2_abs(fcInt2 a) {
  return fcInt2_create11(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]));
}

fcInt2 fcInt2_clamp(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcInt2_max(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]));
}

fcInt2 fcInt2_maxMag(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]));
}

fcInt2 fcInt2_min(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]));
}

fcInt2 fcInt2_minMag(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]));
}

fcInt2 fcInt2_mix(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcInt2_clampk(fcInt2 v, cl_int min, cl_int max) {
  return fcInt2_create11(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max));
}

fcInt2 fcInt2_maxk(fcInt2 x, cl_int y) {
  return fcInt2_create11(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y));
}

fcInt2 fcInt2_mink(fcInt2 x, cl_int y) {
  return fcInt2_create11(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y));
}

fcInt2 fcInt2_mixk(fcInt2 x, fcInt2 y, cl_int a) {
  return fcInt2_create11(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a));
}

fcInt2 fcInt2_absDiff(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]));
}

fcInt2 fcInt2_addSat(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_addSat(a.s[0], b.s[0]), fcMath_addSat(a.s[1], b.s[1]));
}

fcInt2 fcInt2_clz(fcInt2 a) {
  return fcInt2_create11(fcMath_clz(a.s[0]), fcMath_clz(a.s[1]));
}

fcInt2 fcInt2_hadd(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_hadd(a.s[0], b.s[0]), fcMath_hadd(a.s[1], b.s[1]));
}

fcInt2 fcInt2_madHi(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_madHi(a.s[0], b.s[0], c.s[0]), fcMath_madHi(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcInt2_madSat(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_madSat(a.s[0], b.s[0], c.s[0]), fcMath_madSat(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcInt2_mulHi(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_mulHi(a.s[0], b.s[0]), fcMath_mulHi(a.s[1], b.s[1]));
}

fcInt2 fcInt2_rhadd(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_rhadd(a.s[0], b.s[0]), fcMath_rhadd(a.s[1], b.s[1]));
}

fcInt2 fcInt2_rotate(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_rotate(a.s[0], b.s[0]), fcMath_rotate(a.s[1], b.s[1]));
}

fcInt2 fcInt2_subSat(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_subSat(a.s[0], b.s[0]), fcMath_subSat(a.s[1], b.s[1]));
}

fcInt2 fcInt2_mad24(fcInt2 a, fcInt2 b, fcInt2 c) {
  return fcInt2_create11(fcMath_mad24(a.s[0], b.s[0], c.s[0]), fcMath_mad24(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcInt2_mul24(fcInt2 a, fcInt2 b) {
  return fcInt2_create11(fcMath_mul24(a.s[0], b.s[0]), fcMath_mul24(a.s[1], b.s[1]));
}


//
// fcInt3
//

fcInt3 fcInt3_create1(cl_int v) {
  return fcInt3_create111(v, v, v);
}

void fcInt3_set1(fcInt3* self, cl_int v) {
  fcInt3_set111(self, v, v, v);
}

fcInt3 fcInt3_create111(cl_int x, cl_int y, cl_int z) {
  fcInt3 result;
  fcInt3_set111(&result, x, y, z);
  return result;
}

void fcInt3_set111(fcInt3* self, cl_int x, cl_int y, cl_int z) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
}

fcInt3 fcInt3_create12(cl_int x, fcInt2 vec1) {
  return fcInt3_create111(x, vec1.s[0], vec1.s[1]);
}

void fcInt3_set12(fcInt3* self, cl_int x, fcInt2 vec1) {
  fcInt3_set111(self, x, vec1.s[0], vec1.s[1]);
}

fcInt3 fcInt3_create21(fcInt2 vec1, cl_int z) {
  return fcInt3_create111(vec1.s[0], vec1.s[1], z);
}

void fcInt3_set21(fcInt3* self, fcInt2 vec1, cl_int z) {
  fcInt3_set111(self, vec1.s[0], vec1.s[1], z);
}

fcInt3 fcInt3_create3(fcInt3 vec1) {
  return fcInt3_create111(vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcInt3_set3(fcInt3* self, fcInt3 vec1) {
  fcInt3_set111(self, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte3 fcInt3_convertByte3(fcInt3 a) {
  return fcByte3_create111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]));
}

fcShort3 fcInt3_convertShort3(fcInt3 a) {
  return fcShort3_create111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]));
}

fcLong3 fcInt3_convertLong3(fcInt3 a) {
  return fcLong3_create111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]));
}

fcFloat3 fcInt3_convertFloat3(fcInt3 a) {
  return fcFloat3_create111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]));
}

fcDouble3 fcInt3_convertDouble3(fcInt3 a) {
  return fcDouble3_create111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]));
}

fcInt2 fcInt3_asInt2(fcInt3 a) {
  return fcInt2_create11(a.s[0], a.s[1]);
}

fcInt3 fcInt3_isEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0);
}

fcInt3 fcInt3_isNotEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0);
}

fcInt3 fcInt3_isGreater(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0);
}

fcInt3 fcInt3_isGreaterEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0);
}

fcInt3 fcInt3_isLess(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0);
}

fcInt3 fcInt3_isLessEqual(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0);
}

fcInt3 fcInt3_select(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]));
}

cl_int fcInt3_any(fcInt3 a) {
  return a.s[0] != 0 || a.s[1] != 0 || a.s[2] != 0;
}

cl_int fcInt3_all(fcInt3 a) {
  return !(a.s[0] == 0 || a.s[1] == 0 || a.s[2] == 0);
}

fcInt3 fcInt3_neg(fcInt3 a) {
  return fcInt3_create111(-a.s[0], -a.s[1], -a.s[2]);
}

fcInt3 fcInt3_add(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2]);
}

fcInt3 fcInt3_sub(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2]);
}

fcInt3 fcInt3_mul(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2]);
}

fcDouble3 fcInt3_muld(fcInt3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]));
}

fcFloat3 fcInt3_mulf(fcInt3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]));
}

fcInt3 fcInt3_mulk(fcInt3 a, cl_int k) {
  return fcInt3_create111(a.s[0] * k, a.s[1] * k, a.s[2] * k);
}

fcDouble3 fcInt3_mulkd(fcInt3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k));
}

fcFloat3 fcInt3_mulkf(fcInt3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k));
}

fcInt3 fcInt3_div(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2]);
}

fcDouble3 fcInt3_divd(fcInt3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]));
}

fcFloat3 fcInt3_divf(fcInt3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]));
}

fcInt3 fcInt3_divk(fcInt3 a, cl_int k) {
  return fcInt3_create111(a.s[0] / k, a.s[1] / k, a.s[2] / k);
}

fcDouble3 fcInt3_divkd(fcInt3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k));
}

fcFloat3 fcInt3_divkf(fcInt3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k));
}

fcInt3 fcInt3_mod(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2]);
}

fcInt3 fcInt3_modk(fcInt3 a, cl_int k) {
  return fcInt3_create111(a.s[0] % k, a.s[1] % k, a.s[2] % k);
}

fcInt3 fcInt3_bitAnd(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2]);
}

fcInt3 fcInt3_bitOr(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2]);
}

fcInt3 fcInt3_bitXor(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2]);
}

fcInt3 fcInt3_bitNot(fcInt3 a) {
  return fcInt3_create111(~a.s[0], ~a.s[1], ~a.s[2]);
}

fcInt3 fcInt3_abs(fcInt3 a) {
  return fcInt3_create111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]));
}

fcInt3 fcInt3_clamp(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcInt3_max(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]));
}

fcInt3 fcInt3_maxMag(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]));
}

fcInt3 fcInt3_min(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]));
}

fcInt3 fcInt3_minMag(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]));
}

fcInt3 fcInt3_mix(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcInt3_clampk(fcInt3 v, cl_int min, cl_int max) {
  return fcInt3_create111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max));
}

fcInt3 fcInt3_maxk(fcInt3 x, cl_int y) {
  return fcInt3_create111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y));
}

fcInt3 fcInt3_mink(fcInt3 x, cl_int y) {
  return fcInt3_create111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y));
}

fcInt3 fcInt3_mixk(fcInt3 x, fcInt3 y, cl_int a) {
  return fcInt3_create111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a));
}

fcInt3 fcInt3_absDiff(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]));
}

fcInt3 fcInt3_addSat(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_addSat(a.s[0], b.s[0]), fcMath_addSat(a.s[1], b.s[1]), fcMath_addSat(a.s[2], b.s[2]));
}

fcInt3 fcInt3_clz(fcInt3 a) {
  return fcInt3_create111(fcMath_clz(a.s[0]), fcMath_clz(a.s[1]), fcMath_clz(a.s[2]));
}

fcInt3 fcInt3_hadd(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_hadd(a.s[0], b.s[0]), fcMath_hadd(a.s[1], b.s[1]), fcMath_hadd(a.s[2], b.s[2]));
}

fcInt3 fcInt3_madHi(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_madHi(a.s[0], b.s[0], c.s[0]), fcMath_madHi(a.s[1], b.s[1], c.s[1]), fcMath_madHi(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcInt3_madSat(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_madSat(a.s[0], b.s[0], c.s[0]), fcMath_madSat(a.s[1], b.s[1], c.s[1]), fcMath_madSat(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcInt3_mulHi(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_mulHi(a.s[0], b.s[0]), fcMath_mulHi(a.s[1], b.s[1]), fcMath_mulHi(a.s[2], b.s[2]));
}

fcInt3 fcInt3_rhadd(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_rhadd(a.s[0], b.s[0]), fcMath_rhadd(a.s[1], b.s[1]), fcMath_rhadd(a.s[2], b.s[2]));
}

fcInt3 fcInt3_rotate(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_rotate(a.s[0], b.s[0]), fcMath_rotate(a.s[1], b.s[1]), fcMath_rotate(a.s[2], b.s[2]));
}

fcInt3 fcInt3_subSat(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_subSat(a.s[0], b.s[0]), fcMath_subSat(a.s[1], b.s[1]), fcMath_subSat(a.s[2], b.s[2]));
}

fcInt3 fcInt3_mad24(fcInt3 a, fcInt3 b, fcInt3 c) {
  return fcInt3_create111(fcMath_mad24(a.s[0], b.s[0], c.s[0]), fcMath_mad24(a.s[1], b.s[1], c.s[1]), fcMath_mad24(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcInt3_mul24(fcInt3 a, fcInt3 b) {
  return fcInt3_create111(fcMath_mul24(a.s[0], b.s[0]), fcMath_mul24(a.s[1], b.s[1]), fcMath_mul24(a.s[2], b.s[2]));
}


//
// fcInt4
//

fcInt4 fcInt4_create1(cl_int v) {
  return fcInt4_create1111(v, v, v, v);
}

void fcInt4_set1(fcInt4* self, cl_int v) {
  fcInt4_set1111(self, v, v, v, v);
}

fcInt4 fcInt4_create1111(cl_int x, cl_int y, cl_int z, cl_int w) {
  fcInt4 result;
  fcInt4_set1111(&result, x, y, z, w);
  return result;
}

void fcInt4_set1111(fcInt4* self, cl_int x, cl_int y, cl_int z, cl_int w) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
}

fcInt4 fcInt4_create112(cl_int x, cl_int y, fcInt2 vec1) {
  return fcInt4_create1111(x, y, vec1.s[0], vec1.s[1]);
}

void fcInt4_set112(fcInt4* self, cl_int x, cl_int y, fcInt2 vec1) {
  fcInt4_set1111(self, x, y, vec1.s[0], vec1.s[1]);
}

fcInt4 fcInt4_create121(cl_int x, fcInt2 vec1, cl_int w) {
  return fcInt4_create1111(x, vec1.s[0], vec1.s[1], w);
}

void fcInt4_set121(fcInt4* self, cl_int x, fcInt2 vec1, cl_int w) {
  fcInt4_set1111(self, x, vec1.s[0], vec1.s[1], w);
}

fcInt4 fcInt4_create13(cl_int x, fcInt3 vec1) {
  return fcInt4_create1111(x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcInt4_set13(fcInt4* self, cl_int x, fcInt3 vec1) {
  fcInt4_set1111(self, x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcInt4 fcInt4_create211(fcInt2 vec1, cl_int z, cl_int w) {
  return fcInt4_create1111(vec1.s[0], vec1.s[1], z, w);
}

void fcInt4_set211(fcInt4* self, fcInt2 vec1, cl_int z, cl_int w) {
  fcInt4_set1111(self, vec1.s[0], vec1.s[1], z, w);
}

fcInt4 fcInt4_create22(fcInt2 vec1, fcInt2 vec2) {
  return fcInt4_create1111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcInt4_set22(fcInt4* self, fcInt2 vec1, fcInt2 vec2) {
  fcInt4_set1111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcInt4 fcInt4_create31(fcInt3 vec1, cl_int w) {
  return fcInt4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], w);
}

void fcInt4_set31(fcInt4* self, fcInt3 vec1, cl_int w) {
  fcInt4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], w);
}

fcInt4 fcInt4_create4(fcInt4 vec1) {
  return fcInt4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcInt4_set4(fcInt4* self, fcInt4 vec1) {
  fcInt4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcInt2 fcInt4_odd(fcInt4 a) {
  return fcInt2_create11(a.s[1], a.s[3]);
}

fcInt2 fcInt4_even(fcInt4 a) {
  return fcInt2_create11(a.s[0], a.s[2]);
}

fcByte4 fcInt4_convertByte4(fcInt4 a) {
  return fcByte4_create1111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]));
}

fcShort4 fcInt4_convertShort4(fcInt4 a) {
  return fcShort4_create1111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]));
}

fcLong4 fcInt4_convertLong4(fcInt4 a) {
  return fcLong4_create1111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]));
}

fcFloat4 fcInt4_convertFloat4(fcInt4 a) {
  return fcFloat4_create1111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]));
}

fcDouble4 fcInt4_convertDouble4(fcInt4 a) {
  return fcDouble4_create1111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]));
}

fcInt2 fcInt4_asInt2(fcInt4 a) {
  return fcInt2_create11(a.s[0], a.s[1]);
}

fcInt3 fcInt4_asInt3(fcInt4 a) {
  return fcInt3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcInt4_isEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
}

fcInt4 fcInt4_isNotEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
}

fcInt4 fcInt4_isGreater(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
}

fcInt4 fcInt4_isGreaterEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
}

fcInt4 fcInt4_isLess(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
}

fcInt4 fcInt4_isLessEqual(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
}

fcInt4 fcInt4_select(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]));
}

cl_int fcInt4_any(fcInt4 a) {
  return a.s[0] != 0 || a.s[1] != 0 || a.s[2] != 0 || a.s[3] != 0;
}

cl_int fcInt4_all(fcInt4 a) {
  return !(a.s[0] == 0 || a.s[1] == 0 || a.s[2] == 0 || a.s[3] == 0);
}

fcInt4 fcInt4_neg(fcInt4 a) {
  return fcInt4_create1111(-a.s[0], -a.s[1], -a.s[2], -a.s[3]);
}

fcInt4 fcInt4_add(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3]);
}

fcInt4 fcInt4_sub(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3]);
}

fcInt4 fcInt4_mul(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3]);
}

fcDouble4 fcInt4_muld(fcInt4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]));
}

fcFloat4 fcInt4_mulf(fcInt4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]));
}

fcInt4 fcInt4_mulk(fcInt4 a, cl_int k) {
  return fcInt4_create1111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k);
}

fcDouble4 fcInt4_mulkd(fcInt4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k));
}

fcFloat4 fcInt4_mulkf(fcInt4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k));
}

fcInt4 fcInt4_div(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3]);
}

fcDouble4 fcInt4_divd(fcInt4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]));
}

fcFloat4 fcInt4_divf(fcInt4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]));
}

fcInt4 fcInt4_divk(fcInt4 a, cl_int k) {
  return fcInt4_create1111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k);
}

fcDouble4 fcInt4_divkd(fcInt4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k));
}

fcFloat4 fcInt4_divkf(fcInt4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k));
}

fcInt4 fcInt4_mod(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3]);
}

fcInt4 fcInt4_modk(fcInt4 a, cl_int k) {
  return fcInt4_create1111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k);
}

fcInt4 fcInt4_bitAnd(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3]);
}

fcInt4 fcInt4_bitOr(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3]);
}

fcInt4 fcInt4_bitXor(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3]);
}

fcInt4 fcInt4_bitNot(fcInt4 a) {
  return fcInt4_create1111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3]);
}

fcInt4 fcInt4_abs(fcInt4 a) {
  return fcInt4_create1111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]));
}

fcInt4 fcInt4_clamp(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcInt4_max(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]));
}

fcInt4 fcInt4_maxMag(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]));
}

fcInt4 fcInt4_min(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]));
}

fcInt4 fcInt4_minMag(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]));
}

fcInt4 fcInt4_mix(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcInt4_clampk(fcInt4 v, cl_int min, cl_int max) {
  return fcInt4_create1111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max));
}

fcInt4 fcInt4_maxk(fcInt4 x, cl_int y) {
  return fcInt4_create1111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y));
}

fcInt4 fcInt4_mink(fcInt4 x, cl_int y) {
  return fcInt4_create1111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y));
}

fcInt4 fcInt4_mixk(fcInt4 x, fcInt4 y, cl_int a) {
  return fcInt4_create1111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a));
}

fcInt4 fcInt4_absDiff(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]));
}

fcInt4 fcInt4_addSat(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_addSat(a.s[0], b.s[0]), fcMath_addSat(a.s[1], b.s[1]), fcMath_addSat(a.s[2], b.s[2]), fcMath_addSat(a.s[3], b.s[3]));
}

fcInt4 fcInt4_clz(fcInt4 a) {
  return fcInt4_create1111(fcMath_clz(a.s[0]), fcMath_clz(a.s[1]), fcMath_clz(a.s[2]), fcMath_clz(a.s[3]));
}

fcInt4 fcInt4_hadd(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_hadd(a.s[0], b.s[0]), fcMath_hadd(a.s[1], b.s[1]), fcMath_hadd(a.s[2], b.s[2]), fcMath_hadd(a.s[3], b.s[3]));
}

fcInt4 fcInt4_madHi(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_madHi(a.s[0], b.s[0], c.s[0]), fcMath_madHi(a.s[1], b.s[1], c.s[1]), fcMath_madHi(a.s[2], b.s[2], c.s[2]), fcMath_madHi(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcInt4_madSat(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_madSat(a.s[0], b.s[0], c.s[0]), fcMath_madSat(a.s[1], b.s[1], c.s[1]), fcMath_madSat(a.s[2], b.s[2], c.s[2]), fcMath_madSat(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcInt4_mulHi(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_mulHi(a.s[0], b.s[0]), fcMath_mulHi(a.s[1], b.s[1]), fcMath_mulHi(a.s[2], b.s[2]), fcMath_mulHi(a.s[3], b.s[3]));
}

fcInt4 fcInt4_rhadd(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_rhadd(a.s[0], b.s[0]), fcMath_rhadd(a.s[1], b.s[1]), fcMath_rhadd(a.s[2], b.s[2]), fcMath_rhadd(a.s[3], b.s[3]));
}

fcInt4 fcInt4_rotate(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_rotate(a.s[0], b.s[0]), fcMath_rotate(a.s[1], b.s[1]), fcMath_rotate(a.s[2], b.s[2]), fcMath_rotate(a.s[3], b.s[3]));
}

fcInt4 fcInt4_subSat(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_subSat(a.s[0], b.s[0]), fcMath_subSat(a.s[1], b.s[1]), fcMath_subSat(a.s[2], b.s[2]), fcMath_subSat(a.s[3], b.s[3]));
}

fcInt4 fcInt4_mad24(fcInt4 a, fcInt4 b, fcInt4 c) {
  return fcInt4_create1111(fcMath_mad24(a.s[0], b.s[0], c.s[0]), fcMath_mad24(a.s[1], b.s[1], c.s[1]), fcMath_mad24(a.s[2], b.s[2], c.s[2]), fcMath_mad24(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcInt4_mul24(fcInt4 a, fcInt4 b) {
  return fcInt4_create1111(fcMath_mul24(a.s[0], b.s[0]), fcMath_mul24(a.s[1], b.s[1]), fcMath_mul24(a.s[2], b.s[2]), fcMath_mul24(a.s[3], b.s[3]));
}


//
// fcInt8
//

fcInt8 fcInt8_create1(cl_int v) {
  return fcInt8_create11111111(v, v, v, v, v, v, v, v);
}

void fcInt8_set1(fcInt8* self, cl_int v) {
  fcInt8_set11111111(self, v, v, v, v, v, v, v, v);
}

fcInt8 fcInt8_create11111111(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8 result;
  fcInt8_set11111111(&result, x, y, z, w, s4, s5, s6, s7);
  return result;
}

void fcInt8_set11111111(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
  self->s[4] = s4;
  self->s[5] = s5;
  self->s[6] = s6;
  self->s[7] = s7;
}

fcInt8 fcInt8_create1111112(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec1) {
  return fcInt8_create11111111(x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

void fcInt8_set1111112(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec1) {
  fcInt8_set11111111(self, x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

fcInt8 fcInt8_create1111121(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt2 vec1, cl_int s7) {
  return fcInt8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

void fcInt8_set1111121(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt2 vec1, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

fcInt8 fcInt8_create111113(cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt3 vec1) {
  return fcInt8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcInt8_set111113(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, cl_int s4, fcInt3 vec1) {
  fcInt8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcInt8 fcInt8_create1111211(cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

void fcInt8_set1111211(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

fcInt8 fcInt8_create111122(cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcInt8_set111122(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt2 vec1, fcInt2 vec2) {
  fcInt8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create111131(cl_int x, cl_int y, cl_int z, cl_int w, fcInt3 vec1, cl_int s7) {
  return fcInt8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

void fcInt8_set111131(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt3 vec1, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

fcInt8 fcInt8_create11114(cl_int x, cl_int y, cl_int z, cl_int w, fcInt4 vec1) {
  return fcInt8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcInt8_set11114(fcInt8* self, cl_int x, cl_int y, cl_int z, cl_int w, fcInt4 vec1) {
  fcInt8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcInt8 fcInt8_create1112111(cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

void fcInt8_set1112111(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

fcInt8 fcInt8_create111212(cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set111212(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create111221(cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set111221(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create11123(cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt3 vec2) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set11123(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt2 vec1, fcInt3 vec2) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create111311(cl_int x, cl_int y, cl_int z, fcInt3 vec1, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

void fcInt8_set111311(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt3 vec1, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

fcInt8 fcInt8_create11132(cl_int x, cl_int y, cl_int z, fcInt3 vec1, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

void fcInt8_set11132(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt3 vec1, fcInt2 vec2) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create11141(cl_int x, cl_int y, cl_int z, fcInt4 vec1, cl_int s7) {
  return fcInt8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

void fcInt8_set11141(fcInt8* self, cl_int x, cl_int y, cl_int z, fcInt4 vec1, cl_int s7) {
  fcInt8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

fcInt8 fcInt8_create1121111(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

void fcInt8_set1121111(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

fcInt8 fcInt8_create112112(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set112112(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create112121(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set112121(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create11213(cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set11213(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, cl_int s4, fcInt3 vec2) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create112211(cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

void fcInt8_set112211(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

fcInt8 fcInt8_create11222(cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcInt8_set11222(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create11231(cl_int x, cl_int y, fcInt2 vec1, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcInt8_set11231(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt3 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcInt8 fcInt8_create1124(cl_int x, cl_int y, fcInt2 vec1, fcInt4 vec2) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcInt8_set1124(fcInt8* self, cl_int x, cl_int y, fcInt2 vec1, fcInt4 vec2) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcInt8 fcInt8_create113111(cl_int x, cl_int y, fcInt3 vec1, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

void fcInt8_set113111(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

fcInt8 fcInt8_create11312(cl_int x, cl_int y, fcInt3 vec1, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set11312(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create11321(cl_int x, cl_int y, fcInt3 vec1, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set11321(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create1133(cl_int x, cl_int y, fcInt3 vec1, fcInt3 vec2) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set1133(fcInt8* self, cl_int x, cl_int y, fcInt3 vec1, fcInt3 vec2) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create11411(cl_int x, cl_int y, fcInt4 vec1, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

void fcInt8_set11411(fcInt8* self, cl_int x, cl_int y, fcInt4 vec1, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

fcInt8 fcInt8_create1142(cl_int x, cl_int y, fcInt4 vec1, fcInt2 vec2) {
  return fcInt8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

void fcInt8_set1142(fcInt8* self, cl_int x, cl_int y, fcInt4 vec1, fcInt2 vec2) {
  fcInt8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create1211111(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

void fcInt8_set1211111(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

fcInt8 fcInt8_create121112(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set121112(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create121121(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set121121(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create12113(cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set12113(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, cl_int s4, fcInt3 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create121211(cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcInt8_set121211(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcInt8 fcInt8_create12122(cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcInt8_set12122(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create12131(cl_int x, fcInt2 vec1, cl_int w, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcInt8_set12131(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt3 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcInt8 fcInt8_create1214(cl_int x, fcInt2 vec1, cl_int w, fcInt4 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcInt8_set1214(fcInt8* self, cl_int x, fcInt2 vec1, cl_int w, fcInt4 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcInt8 fcInt8_create122111(cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcInt8_set122111(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcInt8 fcInt8_create12212(cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcInt8_set12212(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create12221(cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcInt8_set12221(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcInt8 fcInt8_create1223(cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcInt8_set1223(fcInt8* self, cl_int x, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcInt8 fcInt8_create12311(cl_int x, fcInt2 vec1, fcInt3 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcInt8_set12311(fcInt8* self, cl_int x, fcInt2 vec1, fcInt3 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcInt8 fcInt8_create1232(cl_int x, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcInt8_set1232(fcInt8* self, cl_int x, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create1241(cl_int x, fcInt2 vec1, fcInt4 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcInt8_set1241(fcInt8* self, cl_int x, fcInt2 vec1, fcInt4 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcInt8 fcInt8_create131111(cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

void fcInt8_set131111(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

fcInt8 fcInt8_create13112(cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set13112(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create13121(cl_int x, fcInt3 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set13121(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create1313(cl_int x, fcInt3 vec1, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set1313(fcInt8* self, cl_int x, fcInt3 vec1, cl_int s4, fcInt3 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create13211(cl_int x, fcInt3 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

void fcInt8_set13211(fcInt8* self, cl_int x, fcInt3 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

fcInt8 fcInt8_create1322(cl_int x, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcInt8_set1322(fcInt8* self, cl_int x, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create1331(cl_int x, fcInt3 vec1, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcInt8_set1331(fcInt8* self, cl_int x, fcInt3 vec1, fcInt3 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcInt8 fcInt8_create134(cl_int x, fcInt3 vec1, fcInt4 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcInt8_set134(fcInt8* self, cl_int x, fcInt3 vec1, fcInt4 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcInt8 fcInt8_create14111(cl_int x, fcInt4 vec1, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

void fcInt8_set14111(fcInt8* self, cl_int x, fcInt4 vec1, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

fcInt8 fcInt8_create1412(cl_int x, fcInt4 vec1, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set1412(fcInt8* self, cl_int x, fcInt4 vec1, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create1421(cl_int x, fcInt4 vec1, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set1421(fcInt8* self, cl_int x, fcInt4 vec1, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create143(cl_int x, fcInt4 vec1, fcInt3 vec2) {
  return fcInt8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set143(fcInt8* self, cl_int x, fcInt4 vec1, fcInt3 vec2) {
  fcInt8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create2111111(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

void fcInt8_set2111111(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

fcInt8 fcInt8_create211112(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set211112(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create211121(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set211121(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create21113(fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set21113(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, cl_int s4, fcInt3 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create211211(fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcInt8_set211211(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

fcInt8 fcInt8_create21122(fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcInt8_set21122(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create21131(fcInt2 vec1, cl_int z, cl_int w, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcInt8_set21131(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt3 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcInt8 fcInt8_create2114(fcInt2 vec1, cl_int z, cl_int w, fcInt4 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcInt8_set2114(fcInt8* self, fcInt2 vec1, cl_int z, cl_int w, fcInt4 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcInt8 fcInt8_create212111(fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcInt8_set212111(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcInt8 fcInt8_create21212(fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcInt8_set21212(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create21221(fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcInt8_set21221(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcInt8 fcInt8_create2123(fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcInt8_set2123(fcInt8* self, fcInt2 vec1, cl_int z, fcInt2 vec2, fcInt3 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcInt8 fcInt8_create21311(fcInt2 vec1, cl_int z, fcInt3 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcInt8_set21311(fcInt8* self, fcInt2 vec1, cl_int z, fcInt3 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcInt8 fcInt8_create2132(fcInt2 vec1, cl_int z, fcInt3 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcInt8_set2132(fcInt8* self, fcInt2 vec1, cl_int z, fcInt3 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create2141(fcInt2 vec1, cl_int z, fcInt4 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcInt8_set2141(fcInt8* self, fcInt2 vec1, cl_int z, fcInt4 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcInt8 fcInt8_create221111(fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

void fcInt8_set221111(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

fcInt8 fcInt8_create22112(fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

void fcInt8_set22112(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, cl_int s5, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create22121(fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

void fcInt8_set22121(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt2 vec3, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

fcInt8 fcInt8_create2213(fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcInt8_set2213(fcInt8* self, fcInt2 vec1, fcInt2 vec2, cl_int s4, fcInt3 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcInt8 fcInt8_create22211(fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

void fcInt8_set22211(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

fcInt8 fcInt8_create2222(fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, fcInt2 vec4) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

void fcInt8_set2222(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt2 vec3, fcInt2 vec4) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

fcInt8 fcInt8_create2231(fcInt2 vec1, fcInt2 vec2, fcInt3 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

void fcInt8_set2231(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt3 vec3, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

fcInt8 fcInt8_create224(fcInt2 vec1, fcInt2 vec2, fcInt4 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

void fcInt8_set224(fcInt8* self, fcInt2 vec1, fcInt2 vec2, fcInt4 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

fcInt8 fcInt8_create23111(fcInt2 vec1, fcInt3 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

void fcInt8_set23111(fcInt8* self, fcInt2 vec1, fcInt3 vec2, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

fcInt8 fcInt8_create2312(fcInt2 vec1, fcInt3 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

void fcInt8_set2312(fcInt8* self, fcInt2 vec1, fcInt3 vec2, cl_int s5, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create2321(fcInt2 vec1, fcInt3 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

void fcInt8_set2321(fcInt8* self, fcInt2 vec1, fcInt3 vec2, fcInt2 vec3, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

fcInt8 fcInt8_create233(fcInt2 vec1, fcInt3 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcInt8_set233(fcInt8* self, fcInt2 vec1, fcInt3 vec2, fcInt3 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcInt8 fcInt8_create2411(fcInt2 vec1, fcInt4 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

void fcInt8_set2411(fcInt8* self, fcInt2 vec1, fcInt4 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

fcInt8 fcInt8_create242(fcInt2 vec1, fcInt4 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

void fcInt8_set242(fcInt8* self, fcInt2 vec1, fcInt4 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create311111(fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

void fcInt8_set311111(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

fcInt8 fcInt8_create31112(fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set31112(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create31121(fcInt3 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set31121(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create3113(fcInt3 vec1, cl_int w, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set3113(fcInt8* self, fcInt3 vec1, cl_int w, cl_int s4, fcInt3 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create31211(fcInt3 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcInt8_set31211(fcInt8* self, fcInt3 vec1, cl_int w, fcInt2 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcInt8 fcInt8_create3122(fcInt3 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcInt8_set3122(fcInt8* self, fcInt3 vec1, cl_int w, fcInt2 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create3131(fcInt3 vec1, cl_int w, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcInt8_set3131(fcInt8* self, fcInt3 vec1, cl_int w, fcInt3 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcInt8 fcInt8_create314(fcInt3 vec1, cl_int w, fcInt4 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcInt8_set314(fcInt8* self, fcInt3 vec1, cl_int w, fcInt4 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcInt8 fcInt8_create32111(fcInt3 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcInt8_set32111(fcInt8* self, fcInt3 vec1, fcInt2 vec2, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcInt8 fcInt8_create3212(fcInt3 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcInt8_set3212(fcInt8* self, fcInt3 vec1, fcInt2 vec2, cl_int s5, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create3221(fcInt3 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcInt8_set3221(fcInt8* self, fcInt3 vec1, fcInt2 vec2, fcInt2 vec3, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcInt8 fcInt8_create323(fcInt3 vec1, fcInt2 vec2, fcInt3 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcInt8_set323(fcInt8* self, fcInt3 vec1, fcInt2 vec2, fcInt3 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcInt8 fcInt8_create3311(fcInt3 vec1, fcInt3 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcInt8_set3311(fcInt8* self, fcInt3 vec1, fcInt3 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcInt8 fcInt8_create332(fcInt3 vec1, fcInt3 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcInt8_set332(fcInt8* self, fcInt3 vec1, fcInt3 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create341(fcInt3 vec1, fcInt4 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcInt8_set341(fcInt8* self, fcInt3 vec1, fcInt4 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcInt8 fcInt8_create41111(fcInt4 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

void fcInt8_set41111(fcInt8* self, fcInt4 vec1, cl_int s4, cl_int s5, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

fcInt8 fcInt8_create4112(fcInt4 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcInt8_set4112(fcInt8* self, fcInt4 vec1, cl_int s4, cl_int s5, fcInt2 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

fcInt8 fcInt8_create4121(fcInt4 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

void fcInt8_set4121(fcInt8* self, fcInt4 vec1, cl_int s4, fcInt2 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

fcInt8 fcInt8_create413(fcInt4 vec1, cl_int s4, fcInt3 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcInt8_set413(fcInt8* self, fcInt4 vec1, cl_int s4, fcInt3 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcInt8 fcInt8_create4211(fcInt4 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

void fcInt8_set4211(fcInt8* self, fcInt4 vec1, fcInt2 vec2, cl_int s6, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

fcInt8 fcInt8_create422(fcInt4 vec1, fcInt2 vec2, fcInt2 vec3) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcInt8_set422(fcInt8* self, fcInt4 vec1, fcInt2 vec2, fcInt2 vec3) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcInt8 fcInt8_create431(fcInt4 vec1, fcInt3 vec2, cl_int s7) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcInt8_set431(fcInt8* self, fcInt4 vec1, fcInt3 vec2, cl_int s7) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcInt8 fcInt8_create44(fcInt4 vec1, fcInt4 vec2) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcInt8_set44(fcInt8* self, fcInt4 vec1, fcInt4 vec2) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcInt8 fcInt8_create8(fcInt8 vec1) {
  return fcInt8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

void fcInt8_set8(fcInt8* self, fcInt8 vec1) {
  fcInt8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

fcInt4 fcInt8_odd(fcInt8 a) {
  return fcInt4_create1111(a.s[1], a.s[3], a.s[5], a.s[7]);
}

fcInt4 fcInt8_even(fcInt8 a) {
  return fcInt4_create1111(a.s[0], a.s[2], a.s[4], a.s[6]);
}

fcByte8 fcInt8_convertByte8(fcInt8 a) {
  return fcByte8_create11111111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]), (cl_byte)(a.s[4]), (cl_byte)(a.s[5]), (cl_byte)(a.s[6]), (cl_byte)(a.s[7]));
}

fcShort8 fcInt8_convertShort8(fcInt8 a) {
  return fcShort8_create11111111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]), (cl_short)(a.s[4]), (cl_short)(a.s[5]), (cl_short)(a.s[6]), (cl_short)(a.s[7]));
}

fcLong8 fcInt8_convertLong8(fcInt8 a) {
  return fcLong8_create11111111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]), (cl_long)(a.s[4]), (cl_long)(a.s[5]), (cl_long)(a.s[6]), (cl_long)(a.s[7]));
}

fcFloat8 fcInt8_convertFloat8(fcInt8 a) {
  return fcFloat8_create11111111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]), (cl_float)(a.s[4]), (cl_float)(a.s[5]), (cl_float)(a.s[6]), (cl_float)(a.s[7]));
}

fcDouble8 fcInt8_convertDouble8(fcInt8 a) {
  return fcDouble8_create11111111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]), (cl_double)(a.s[4]), (cl_double)(a.s[5]), (cl_double)(a.s[6]), (cl_double)(a.s[7]));
}

fcInt2 fcInt8_asInt2(fcInt8 a) {
  return fcInt2_create11(a.s[0], a.s[1]);
}

fcInt3 fcInt8_asInt3(fcInt8 a) {
  return fcInt3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcInt8_asInt4(fcInt8 a) {
  return fcInt4_create1111(a.s[0], a.s[1], a.s[2], a.s[3]);
}

fcInt8 fcInt8_isEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0, a.s[4] == b.s[4]? 1 : 0, a.s[5] == b.s[5]? 1 : 0, a.s[6] == b.s[6]? 1 : 0, a.s[7] == b.s[7]? 1 : 0);
}

fcInt8 fcInt8_isNotEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0, a.s[4] != b.s[4]? 1 : 0, a.s[5] != b.s[5]? 1 : 0, a.s[6] != b.s[6]? 1 : 0, a.s[7] != b.s[7]? 1 : 0);
}

fcInt8 fcInt8_isGreater(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0, a.s[4] > b.s[4]? 1 : 0, a.s[5] > b.s[5]? 1 : 0, a.s[6] > b.s[6]? 1 : 0, a.s[7] > b.s[7]? 1 : 0);
}

fcInt8 fcInt8_isGreaterEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0, a.s[4] >= b.s[4]? 1 : 0, a.s[5] >= b.s[5]? 1 : 0, a.s[6] >= b.s[6]? 1 : 0, a.s[7] >= b.s[7]? 1 : 0);
}

fcInt8 fcInt8_isLess(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0, a.s[4] < b.s[4]? 1 : 0, a.s[5] < b.s[5]? 1 : 0, a.s[6] < b.s[6]? 1 : 0, a.s[7] < b.s[7]? 1 : 0);
}

fcInt8 fcInt8_isLessEqual(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0, a.s[4] <= b.s[4]? 1 : 0, a.s[5] <= b.s[5]? 1 : 0, a.s[6] <= b.s[6]? 1 : 0, a.s[7] <= b.s[7]? 1 : 0);
}

fcInt8 fcInt8_select(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]), fcMath_select(a.s[4], b.s[4], c.s[4]), fcMath_select(a.s[5], b.s[5], c.s[5]), fcMath_select(a.s[6], b.s[6], c.s[6]), fcMath_select(a.s[7], b.s[7], c.s[7]));
}

cl_int fcInt8_any(fcInt8 a) {
  return a.s[0] != 0 || a.s[1] != 0 || a.s[2] != 0 || a.s[3] != 0 || a.s[4] != 0 || a.s[5] != 0 || a.s[6] != 0 || a.s[7] != 0;
}

cl_int fcInt8_all(fcInt8 a) {
  return !(a.s[0] == 0 || a.s[1] == 0 || a.s[2] == 0 || a.s[3] == 0 || a.s[4] == 0 || a.s[5] == 0 || a.s[6] == 0 || a.s[7] == 0);
}

fcInt8 fcInt8_neg(fcInt8 a) {
  return fcInt8_create11111111(-a.s[0], -a.s[1], -a.s[2], -a.s[3], -a.s[4], -a.s[5], -a.s[6], -a.s[7]);
}

fcInt8 fcInt8_add(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3], a.s[4] + b.s[4], a.s[5] + b.s[5], a.s[6] + b.s[6], a.s[7] + b.s[7]);
}

fcInt8 fcInt8_sub(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3], a.s[4] - b.s[4], a.s[5] - b.s[5], a.s[6] - b.s[6], a.s[7] - b.s[7]);
}

fcInt8 fcInt8_mul(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3], a.s[4] * b.s[4], a.s[5] * b.s[5], a.s[6] * b.s[6], a.s[7] * b.s[7]);
}

fcDouble8 fcInt8_muld(fcInt8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]), (cl_double)(a.s[4] * b.s[4]), (cl_double)(a.s[5] * b.s[5]), (cl_double)(a.s[6] * b.s[6]), (cl_double)(a.s[7] * b.s[7]));
}

fcFloat8 fcInt8_mulf(fcInt8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]), (cl_float)(a.s[4] * b.s[4]), (cl_float)(a.s[5] * b.s[5]), (cl_float)(a.s[6] * b.s[6]), (cl_float)(a.s[7] * b.s[7]));
}

fcInt8 fcInt8_mulk(fcInt8 a, cl_int k) {
  return fcInt8_create11111111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k, a.s[4] * k, a.s[5] * k, a.s[6] * k, a.s[7] * k);
}

fcDouble8 fcInt8_mulkd(fcInt8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k), (cl_double)(a.s[4] * k), (cl_double)(a.s[5] * k), (cl_double)(a.s[6] * k), (cl_double)(a.s[7] * k));
}

fcFloat8 fcInt8_mulkf(fcInt8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k), (cl_float)(a.s[4] * k), (cl_float)(a.s[5] * k), (cl_float)(a.s[6] * k), (cl_float)(a.s[7] * k));
}

fcInt8 fcInt8_div(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3], a.s[4] / b.s[4], a.s[5] / b.s[5], a.s[6] / b.s[6], a.s[7] / b.s[7]);
}

fcDouble8 fcInt8_divd(fcInt8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]), (cl_double)(a.s[4] / b.s[4]), (cl_double)(a.s[5] / b.s[5]), (cl_double)(a.s[6] / b.s[6]), (cl_double)(a.s[7] / b.s[7]));
}

fcFloat8 fcInt8_divf(fcInt8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]), (cl_float)(a.s[4] / b.s[4]), (cl_float)(a.s[5] / b.s[5]), (cl_float)(a.s[6] / b.s[6]), (cl_float)(a.s[7] / b.s[7]));
}

fcInt8 fcInt8_divk(fcInt8 a, cl_int k) {
  return fcInt8_create11111111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k, a.s[4] / k, a.s[5] / k, a.s[6] / k, a.s[7] / k);
}

fcDouble8 fcInt8_divkd(fcInt8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k), (cl_double)(a.s[4] / k), (cl_double)(a.s[5] / k), (cl_double)(a.s[6] / k), (cl_double)(a.s[7] / k));
}

fcFloat8 fcInt8_divkf(fcInt8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k), (cl_float)(a.s[4] / k), (cl_float)(a.s[5] / k), (cl_float)(a.s[6] / k), (cl_float)(a.s[7] / k));
}

fcInt8 fcInt8_mod(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3], a.s[4] % b.s[4], a.s[5] % b.s[5], a.s[6] % b.s[6], a.s[7] % b.s[7]);
}

fcInt8 fcInt8_modk(fcInt8 a, cl_int k) {
  return fcInt8_create11111111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k, a.s[4] % k, a.s[5] % k, a.s[6] % k, a.s[7] % k);
}

fcInt8 fcInt8_bitAnd(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3], a.s[4] & b.s[4], a.s[5] & b.s[5], a.s[6] & b.s[6], a.s[7] & b.s[7]);
}

fcInt8 fcInt8_bitOr(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3], a.s[4] | b.s[4], a.s[5] | b.s[5], a.s[6] | b.s[6], a.s[7] | b.s[7]);
}

fcInt8 fcInt8_bitXor(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3], a.s[4] ^ b.s[4], a.s[5] ^ b.s[5], a.s[6] ^ b.s[6], a.s[7] ^ b.s[7]);
}

fcInt8 fcInt8_bitNot(fcInt8 a) {
  return fcInt8_create11111111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3], ~a.s[4], ~a.s[5], ~a.s[6], ~a.s[7]);
}

fcInt8 fcInt8_abs(fcInt8 a) {
  return fcInt8_create11111111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]), fcMath_abs(a.s[4]), fcMath_abs(a.s[5]), fcMath_abs(a.s[6]), fcMath_abs(a.s[7]));
}

fcInt8 fcInt8_clamp(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]), fcMath_clamp(a.s[4], b.s[4], c.s[4]), fcMath_clamp(a.s[5], b.s[5], c.s[5]), fcMath_clamp(a.s[6], b.s[6], c.s[6]), fcMath_clamp(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcInt8_max(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]), fcMath_max(a.s[4], b.s[4]), fcMath_max(a.s[5], b.s[5]), fcMath_max(a.s[6], b.s[6]), fcMath_max(a.s[7], b.s[7]));
}

fcInt8 fcInt8_maxMag(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]), fcMath_maxMag(a.s[4], b.s[4]), fcMath_maxMag(a.s[5], b.s[5]), fcMath_maxMag(a.s[6], b.s[6]), fcMath_maxMag(a.s[7], b.s[7]));
}

fcInt8 fcInt8_min(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]), fcMath_min(a.s[4], b.s[4]), fcMath_min(a.s[5], b.s[5]), fcMath_min(a.s[6], b.s[6]), fcMath_min(a.s[7], b.s[7]));
}

fcInt8 fcInt8_minMag(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]), fcMath_minMag(a.s[4], b.s[4]), fcMath_minMag(a.s[5], b.s[5]), fcMath_minMag(a.s[6], b.s[6]), fcMath_minMag(a.s[7], b.s[7]));
}

fcInt8 fcInt8_mix(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]), fcMath_mix(a.s[4], b.s[4], c.s[4]), fcMath_mix(a.s[5], b.s[5], c.s[5]), fcMath_mix(a.s[6], b.s[6], c.s[6]), fcMath_mix(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcInt8_clampk(fcInt8 v, cl_int min, cl_int max) {
  return fcInt8_create11111111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max), fcMath_clamp(v.s[4], min, max), fcMath_clamp(v.s[5], min, max), fcMath_clamp(v.s[6], min, max), fcMath_clamp(v.s[7], min, max));
}

fcInt8 fcInt8_maxk(fcInt8 x, cl_int y) {
  return fcInt8_create11111111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y), fcMath_max(x.s[4], y), fcMath_max(x.s[5], y), fcMath_max(x.s[6], y), fcMath_max(x.s[7], y));
}

fcInt8 fcInt8_mink(fcInt8 x, cl_int y) {
  return fcInt8_create11111111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y), fcMath_min(x.s[4], y), fcMath_min(x.s[5], y), fcMath_min(x.s[6], y), fcMath_min(x.s[7], y));
}

fcInt8 fcInt8_mixk(fcInt8 x, fcInt8 y, cl_int a) {
  return fcInt8_create11111111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a), fcMath_mix(x.s[4], y.s[4], a), fcMath_mix(x.s[5], y.s[5], a), fcMath_mix(x.s[6], y.s[6], a), fcMath_mix(x.s[7], y.s[7], a));
}

fcInt8 fcInt8_absDiff(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]), fcMath_absDiff(a.s[4], b.s[4]), fcMath_absDiff(a.s[5], b.s[5]), fcMath_absDiff(a.s[6], b.s[6]), fcMath_absDiff(a.s[7], b.s[7]));
}

fcInt8 fcInt8_addSat(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_addSat(a.s[0], b.s[0]), fcMath_addSat(a.s[1], b.s[1]), fcMath_addSat(a.s[2], b.s[2]), fcMath_addSat(a.s[3], b.s[3]), fcMath_addSat(a.s[4], b.s[4]), fcMath_addSat(a.s[5], b.s[5]), fcMath_addSat(a.s[6], b.s[6]), fcMath_addSat(a.s[7], b.s[7]));
}

fcInt8 fcInt8_clz(fcInt8 a) {
  return fcInt8_create11111111(fcMath_clz(a.s[0]), fcMath_clz(a.s[1]), fcMath_clz(a.s[2]), fcMath_clz(a.s[3]), fcMath_clz(a.s[4]), fcMath_clz(a.s[5]), fcMath_clz(a.s[6]), fcMath_clz(a.s[7]));
}

fcInt8 fcInt8_hadd(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_hadd(a.s[0], b.s[0]), fcMath_hadd(a.s[1], b.s[1]), fcMath_hadd(a.s[2], b.s[2]), fcMath_hadd(a.s[3], b.s[3]), fcMath_hadd(a.s[4], b.s[4]), fcMath_hadd(a.s[5], b.s[5]), fcMath_hadd(a.s[6], b.s[6]), fcMath_hadd(a.s[7], b.s[7]));
}

fcInt8 fcInt8_madHi(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_madHi(a.s[0], b.s[0], c.s[0]), fcMath_madHi(a.s[1], b.s[1], c.s[1]), fcMath_madHi(a.s[2], b.s[2], c.s[2]), fcMath_madHi(a.s[3], b.s[3], c.s[3]), fcMath_madHi(a.s[4], b.s[4], c.s[4]), fcMath_madHi(a.s[5], b.s[5], c.s[5]), fcMath_madHi(a.s[6], b.s[6], c.s[6]), fcMath_madHi(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcInt8_madSat(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_madSat(a.s[0], b.s[0], c.s[0]), fcMath_madSat(a.s[1], b.s[1], c.s[1]), fcMath_madSat(a.s[2], b.s[2], c.s[2]), fcMath_madSat(a.s[3], b.s[3], c.s[3]), fcMath_madSat(a.s[4], b.s[4], c.s[4]), fcMath_madSat(a.s[5], b.s[5], c.s[5]), fcMath_madSat(a.s[6], b.s[6], c.s[6]), fcMath_madSat(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcInt8_mulHi(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_mulHi(a.s[0], b.s[0]), fcMath_mulHi(a.s[1], b.s[1]), fcMath_mulHi(a.s[2], b.s[2]), fcMath_mulHi(a.s[3], b.s[3]), fcMath_mulHi(a.s[4], b.s[4]), fcMath_mulHi(a.s[5], b.s[5]), fcMath_mulHi(a.s[6], b.s[6]), fcMath_mulHi(a.s[7], b.s[7]));
}

fcInt8 fcInt8_rhadd(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_rhadd(a.s[0], b.s[0]), fcMath_rhadd(a.s[1], b.s[1]), fcMath_rhadd(a.s[2], b.s[2]), fcMath_rhadd(a.s[3], b.s[3]), fcMath_rhadd(a.s[4], b.s[4]), fcMath_rhadd(a.s[5], b.s[5]), fcMath_rhadd(a.s[6], b.s[6]), fcMath_rhadd(a.s[7], b.s[7]));
}

fcInt8 fcInt8_rotate(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_rotate(a.s[0], b.s[0]), fcMath_rotate(a.s[1], b.s[1]), fcMath_rotate(a.s[2], b.s[2]), fcMath_rotate(a.s[3], b.s[3]), fcMath_rotate(a.s[4], b.s[4]), fcMath_rotate(a.s[5], b.s[5]), fcMath_rotate(a.s[6], b.s[6]), fcMath_rotate(a.s[7], b.s[7]));
}

fcInt8 fcInt8_subSat(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_subSat(a.s[0], b.s[0]), fcMath_subSat(a.s[1], b.s[1]), fcMath_subSat(a.s[2], b.s[2]), fcMath_subSat(a.s[3], b.s[3]), fcMath_subSat(a.s[4], b.s[4]), fcMath_subSat(a.s[5], b.s[5]), fcMath_subSat(a.s[6], b.s[6]), fcMath_subSat(a.s[7], b.s[7]));
}

fcInt8 fcInt8_mad24(fcInt8 a, fcInt8 b, fcInt8 c) {
  return fcInt8_create11111111(fcMath_mad24(a.s[0], b.s[0], c.s[0]), fcMath_mad24(a.s[1], b.s[1], c.s[1]), fcMath_mad24(a.s[2], b.s[2], c.s[2]), fcMath_mad24(a.s[3], b.s[3], c.s[3]), fcMath_mad24(a.s[4], b.s[4], c.s[4]), fcMath_mad24(a.s[5], b.s[5], c.s[5]), fcMath_mad24(a.s[6], b.s[6], c.s[6]), fcMath_mad24(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcInt8_mul24(fcInt8 a, fcInt8 b) {
  return fcInt8_create11111111(fcMath_mul24(a.s[0], b.s[0]), fcMath_mul24(a.s[1], b.s[1]), fcMath_mul24(a.s[2], b.s[2]), fcMath_mul24(a.s[3], b.s[3]), fcMath_mul24(a.s[4], b.s[4]), fcMath_mul24(a.s[5], b.s[5]), fcMath_mul24(a.s[6], b.s[6]), fcMath_mul24(a.s[7], b.s[7]));
}


//
// fcLong2
//

fcLong2 fcLong2_create1(cl_long v) {
  return fcLong2_create11(v, v);
}

void fcLong2_set1(fcLong2* self, cl_long v) {
  fcLong2_set11(self, v, v);
}

fcLong2 fcLong2_create11(cl_long x, cl_long y) {
  fcLong2 result;
  fcLong2_set11(&result, x, y);
  return result;
}

void fcLong2_set11(fcLong2* self, cl_long x, cl_long y) {
  self->s[0] = x;
  self->s[1] = y;
}

fcLong2 fcLong2_create2(fcLong2 vec1) {
  return fcLong2_create11(vec1.s[0], vec1.s[1]);
}

void fcLong2_set2(fcLong2* self, fcLong2 vec1) {
  fcLong2_set11(self, vec1.s[0], vec1.s[1]);
}

fcByte2 fcLong2_convertByte2(fcLong2 a) {
  return fcByte2_create11((cl_byte)(a.s[0]), (cl_byte)(a.s[1]));
}

fcShort2 fcLong2_convertShort2(fcLong2 a) {
  return fcShort2_create11((cl_short)(a.s[0]), (cl_short)(a.s[1]));
}

fcInt2 fcLong2_convertInt2(fcLong2 a) {
  return fcInt2_create11((cl_int)(a.s[0]), (cl_int)(a.s[1]));
}

fcFloat2 fcLong2_convertFloat2(fcLong2 a) {
  return fcFloat2_create11((cl_float)(a.s[0]), (cl_float)(a.s[1]));
}

fcDouble2 fcLong2_convertDouble2(fcLong2 a) {
  return fcDouble2_create11((cl_double)(a.s[0]), (cl_double)(a.s[1]));
}

fcInt2 fcLong2_isEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0);
}

fcInt2 fcLong2_isNotEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0);
}

fcInt2 fcLong2_isGreater(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0);
}

fcInt2 fcLong2_isGreaterEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0);
}

fcInt2 fcLong2_isLess(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0);
}

fcInt2 fcLong2_isLessEqual(fcLong2 a, fcLong2 b) {
  return fcInt2_create11(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0);
}

fcLong2 fcLong2_select(fcLong2 a, fcLong2 b, fcInt2 c) {
  return fcLong2_create11(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]));
}

cl_int fcLong2_any(fcLong2 a) {
  return a.s[0] != 0L || a.s[1] != 0L;
}

cl_int fcLong2_all(fcLong2 a) {
  return !(a.s[0] == 0L || a.s[1] == 0L);
}

fcLong2 fcLong2_neg(fcLong2 a) {
  return fcLong2_create11(-a.s[0], -a.s[1]);
}

fcLong2 fcLong2_add(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] + b.s[0], a.s[1] + b.s[1]);
}

fcLong2 fcLong2_sub(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] - b.s[0], a.s[1] - b.s[1]);
}

fcLong2 fcLong2_mul(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] * b.s[0], a.s[1] * b.s[1]);
}

fcDouble2 fcLong2_muld(fcLong2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]));
}

fcFloat2 fcLong2_mulf(fcLong2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]));
}

fcLong2 fcLong2_mulk(fcLong2 a, cl_long k) {
  return fcLong2_create11(a.s[0] * k, a.s[1] * k);
}

fcDouble2 fcLong2_mulkd(fcLong2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k));
}

fcFloat2 fcLong2_mulkf(fcLong2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k));
}

fcLong2 fcLong2_div(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] / b.s[0], a.s[1] / b.s[1]);
}

fcDouble2 fcLong2_divd(fcLong2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]));
}

fcFloat2 fcLong2_divf(fcLong2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]));
}

fcLong2 fcLong2_divk(fcLong2 a, cl_long k) {
  return fcLong2_create11(a.s[0] / k, a.s[1] / k);
}

fcDouble2 fcLong2_divkd(fcLong2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k));
}

fcFloat2 fcLong2_divkf(fcLong2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k));
}

fcLong2 fcLong2_mod(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] % b.s[0], a.s[1] % b.s[1]);
}

fcLong2 fcLong2_modk(fcLong2 a, cl_long k) {
  return fcLong2_create11(a.s[0] % k, a.s[1] % k);
}

fcLong2 fcLong2_bitAnd(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] & b.s[0], a.s[1] & b.s[1]);
}

fcLong2 fcLong2_bitOr(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] | b.s[0], a.s[1] | b.s[1]);
}

fcLong2 fcLong2_bitXor(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1]);
}

fcLong2 fcLong2_bitNot(fcLong2 a) {
  return fcLong2_create11(~a.s[0], ~a.s[1]);
}

fcLong2 fcLong2_abs(fcLong2 a) {
  return fcLong2_create11(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]));
}

fcLong2 fcLong2_clamp(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]));
}

fcLong2 fcLong2_max(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]));
}

fcLong2 fcLong2_maxMag(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]));
}

fcLong2 fcLong2_min(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]));
}

fcLong2 fcLong2_minMag(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]));
}

fcLong2 fcLong2_mix(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]));
}

fcLong2 fcLong2_clampk(fcLong2 v, cl_long min, cl_long max) {
  return fcLong2_create11(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max));
}

fcLong2 fcLong2_maxk(fcLong2 x, cl_long y) {
  return fcLong2_create11(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y));
}

fcLong2 fcLong2_mink(fcLong2 x, cl_long y) {
  return fcLong2_create11(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y));
}

fcLong2 fcLong2_mixk(fcLong2 x, fcLong2 y, cl_long a) {
  return fcLong2_create11(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a));
}

fcLong2 fcLong2_absDiff(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]));
}

fcLong2 fcLong2_addSat(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_addSatl(a.s[0], b.s[0]), fcMath_addSatl(a.s[1], b.s[1]));
}

fcLong2 fcLong2_clz(fcLong2 a) {
  return fcLong2_create11(fcMath_clzl(a.s[0]), fcMath_clzl(a.s[1]));
}

fcLong2 fcLong2_hadd(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_haddl(a.s[0], b.s[0]), fcMath_haddl(a.s[1], b.s[1]));
}

fcLong2 fcLong2_madHi(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_madHil(a.s[0], b.s[0], c.s[0]), fcMath_madHil(a.s[1], b.s[1], c.s[1]));
}

fcLong2 fcLong2_madSat(fcLong2 a, fcLong2 b, fcLong2 c) {
  return fcLong2_create11(fcMath_madSatl(a.s[0], b.s[0], c.s[0]), fcMath_madSatl(a.s[1], b.s[1], c.s[1]));
}

fcLong2 fcLong2_mulHi(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_mulHil(a.s[0], b.s[0]), fcMath_mulHil(a.s[1], b.s[1]));
}

fcLong2 fcLong2_rhadd(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_rhaddl(a.s[0], b.s[0]), fcMath_rhaddl(a.s[1], b.s[1]));
}

fcLong2 fcLong2_rotate(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_rotatel(a.s[0], b.s[0]), fcMath_rotatel(a.s[1], b.s[1]));
}

fcLong2 fcLong2_subSat(fcLong2 a, fcLong2 b) {
  return fcLong2_create11(fcMath_subSatl(a.s[0], b.s[0]), fcMath_subSatl(a.s[1], b.s[1]));
}


//
// fcLong3
//

fcLong3 fcLong3_create1(cl_long v) {
  return fcLong3_create111(v, v, v);
}

void fcLong3_set1(fcLong3* self, cl_long v) {
  fcLong3_set111(self, v, v, v);
}

fcLong3 fcLong3_create111(cl_long x, cl_long y, cl_long z) {
  fcLong3 result;
  fcLong3_set111(&result, x, y, z);
  return result;
}

void fcLong3_set111(fcLong3* self, cl_long x, cl_long y, cl_long z) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
}

fcLong3 fcLong3_create12(cl_long x, fcLong2 vec1) {
  return fcLong3_create111(x, vec1.s[0], vec1.s[1]);
}

void fcLong3_set12(fcLong3* self, cl_long x, fcLong2 vec1) {
  fcLong3_set111(self, x, vec1.s[0], vec1.s[1]);
}

fcLong3 fcLong3_create21(fcLong2 vec1, cl_long z) {
  return fcLong3_create111(vec1.s[0], vec1.s[1], z);
}

void fcLong3_set21(fcLong3* self, fcLong2 vec1, cl_long z) {
  fcLong3_set111(self, vec1.s[0], vec1.s[1], z);
}

fcLong3 fcLong3_create3(fcLong3 vec1) {
  return fcLong3_create111(vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcLong3_set3(fcLong3* self, fcLong3 vec1) {
  fcLong3_set111(self, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte3 fcLong3_convertByte3(fcLong3 a) {
  return fcByte3_create111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]));
}

fcShort3 fcLong3_convertShort3(fcLong3 a) {
  return fcShort3_create111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]));
}

fcInt3 fcLong3_convertInt3(fcLong3 a) {
  return fcInt3_create111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]));
}

fcFloat3 fcLong3_convertFloat3(fcLong3 a) {
  return fcFloat3_create111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]));
}

fcDouble3 fcLong3_convertDouble3(fcLong3 a) {
  return fcDouble3_create111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]));
}

fcLong2 fcLong3_asLong2(fcLong3 a) {
  return fcLong2_create11(a.s[0], a.s[1]);
}

fcInt3 fcLong3_isEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0);
}

fcInt3 fcLong3_isNotEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0);
}

fcInt3 fcLong3_isGreater(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0);
}

fcInt3 fcLong3_isGreaterEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0);
}

fcInt3 fcLong3_isLess(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0);
}

fcInt3 fcLong3_isLessEqual(fcLong3 a, fcLong3 b) {
  return fcInt3_create111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0);
}

fcLong3 fcLong3_select(fcLong3 a, fcLong3 b, fcInt3 c) {
  return fcLong3_create111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]));
}

cl_int fcLong3_any(fcLong3 a) {
  return a.s[0] != 0L || a.s[1] != 0L || a.s[2] != 0L;
}

cl_int fcLong3_all(fcLong3 a) {
  return !(a.s[0] == 0L || a.s[1] == 0L || a.s[2] == 0L);
}

fcLong3 fcLong3_neg(fcLong3 a) {
  return fcLong3_create111(-a.s[0], -a.s[1], -a.s[2]);
}

fcLong3 fcLong3_add(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2]);
}

fcLong3 fcLong3_sub(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2]);
}

fcLong3 fcLong3_mul(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2]);
}

fcDouble3 fcLong3_muld(fcLong3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]));
}

fcFloat3 fcLong3_mulf(fcLong3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]));
}

fcLong3 fcLong3_mulk(fcLong3 a, cl_long k) {
  return fcLong3_create111(a.s[0] * k, a.s[1] * k, a.s[2] * k);
}

fcDouble3 fcLong3_mulkd(fcLong3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k));
}

fcFloat3 fcLong3_mulkf(fcLong3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k));
}

fcLong3 fcLong3_div(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2]);
}

fcDouble3 fcLong3_divd(fcLong3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]));
}

fcFloat3 fcLong3_divf(fcLong3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]));
}

fcLong3 fcLong3_divk(fcLong3 a, cl_long k) {
  return fcLong3_create111(a.s[0] / k, a.s[1] / k, a.s[2] / k);
}

fcDouble3 fcLong3_divkd(fcLong3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k));
}

fcFloat3 fcLong3_divkf(fcLong3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k));
}

fcLong3 fcLong3_mod(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2]);
}

fcLong3 fcLong3_modk(fcLong3 a, cl_long k) {
  return fcLong3_create111(a.s[0] % k, a.s[1] % k, a.s[2] % k);
}

fcLong3 fcLong3_bitAnd(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2]);
}

fcLong3 fcLong3_bitOr(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2]);
}

fcLong3 fcLong3_bitXor(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2]);
}

fcLong3 fcLong3_bitNot(fcLong3 a) {
  return fcLong3_create111(~a.s[0], ~a.s[1], ~a.s[2]);
}

fcLong3 fcLong3_abs(fcLong3 a) {
  return fcLong3_create111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]));
}

fcLong3 fcLong3_clamp(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]));
}

fcLong3 fcLong3_max(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]));
}

fcLong3 fcLong3_maxMag(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]));
}

fcLong3 fcLong3_min(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]));
}

fcLong3 fcLong3_minMag(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]));
}

fcLong3 fcLong3_mix(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]));
}

fcLong3 fcLong3_clampk(fcLong3 v, cl_long min, cl_long max) {
  return fcLong3_create111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max));
}

fcLong3 fcLong3_maxk(fcLong3 x, cl_long y) {
  return fcLong3_create111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y));
}

fcLong3 fcLong3_mink(fcLong3 x, cl_long y) {
  return fcLong3_create111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y));
}

fcLong3 fcLong3_mixk(fcLong3 x, fcLong3 y, cl_long a) {
  return fcLong3_create111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a));
}

fcLong3 fcLong3_absDiff(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]));
}

fcLong3 fcLong3_addSat(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_addSatl(a.s[0], b.s[0]), fcMath_addSatl(a.s[1], b.s[1]), fcMath_addSatl(a.s[2], b.s[2]));
}

fcLong3 fcLong3_clz(fcLong3 a) {
  return fcLong3_create111(fcMath_clzl(a.s[0]), fcMath_clzl(a.s[1]), fcMath_clzl(a.s[2]));
}

fcLong3 fcLong3_hadd(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_haddl(a.s[0], b.s[0]), fcMath_haddl(a.s[1], b.s[1]), fcMath_haddl(a.s[2], b.s[2]));
}

fcLong3 fcLong3_madHi(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_madHil(a.s[0], b.s[0], c.s[0]), fcMath_madHil(a.s[1], b.s[1], c.s[1]), fcMath_madHil(a.s[2], b.s[2], c.s[2]));
}

fcLong3 fcLong3_madSat(fcLong3 a, fcLong3 b, fcLong3 c) {
  return fcLong3_create111(fcMath_madSatl(a.s[0], b.s[0], c.s[0]), fcMath_madSatl(a.s[1], b.s[1], c.s[1]), fcMath_madSatl(a.s[2], b.s[2], c.s[2]));
}

fcLong3 fcLong3_mulHi(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_mulHil(a.s[0], b.s[0]), fcMath_mulHil(a.s[1], b.s[1]), fcMath_mulHil(a.s[2], b.s[2]));
}

fcLong3 fcLong3_rhadd(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_rhaddl(a.s[0], b.s[0]), fcMath_rhaddl(a.s[1], b.s[1]), fcMath_rhaddl(a.s[2], b.s[2]));
}

fcLong3 fcLong3_rotate(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_rotatel(a.s[0], b.s[0]), fcMath_rotatel(a.s[1], b.s[1]), fcMath_rotatel(a.s[2], b.s[2]));
}

fcLong3 fcLong3_subSat(fcLong3 a, fcLong3 b) {
  return fcLong3_create111(fcMath_subSatl(a.s[0], b.s[0]), fcMath_subSatl(a.s[1], b.s[1]), fcMath_subSatl(a.s[2], b.s[2]));
}


//
// fcLong4
//

fcLong4 fcLong4_create1(cl_long v) {
  return fcLong4_create1111(v, v, v, v);
}

void fcLong4_set1(fcLong4* self, cl_long v) {
  fcLong4_set1111(self, v, v, v, v);
}

fcLong4 fcLong4_create1111(cl_long x, cl_long y, cl_long z, cl_long w) {
  fcLong4 result;
  fcLong4_set1111(&result, x, y, z, w);
  return result;
}

void fcLong4_set1111(fcLong4* self, cl_long x, cl_long y, cl_long z, cl_long w) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
}

fcLong4 fcLong4_create112(cl_long x, cl_long y, fcLong2 vec1) {
  return fcLong4_create1111(x, y, vec1.s[0], vec1.s[1]);
}

void fcLong4_set112(fcLong4* self, cl_long x, cl_long y, fcLong2 vec1) {
  fcLong4_set1111(self, x, y, vec1.s[0], vec1.s[1]);
}

fcLong4 fcLong4_create121(cl_long x, fcLong2 vec1, cl_long w) {
  return fcLong4_create1111(x, vec1.s[0], vec1.s[1], w);
}

void fcLong4_set121(fcLong4* self, cl_long x, fcLong2 vec1, cl_long w) {
  fcLong4_set1111(self, x, vec1.s[0], vec1.s[1], w);
}

fcLong4 fcLong4_create13(cl_long x, fcLong3 vec1) {
  return fcLong4_create1111(x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcLong4_set13(fcLong4* self, cl_long x, fcLong3 vec1) {
  fcLong4_set1111(self, x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcLong4 fcLong4_create211(fcLong2 vec1, cl_long z, cl_long w) {
  return fcLong4_create1111(vec1.s[0], vec1.s[1], z, w);
}

void fcLong4_set211(fcLong4* self, fcLong2 vec1, cl_long z, cl_long w) {
  fcLong4_set1111(self, vec1.s[0], vec1.s[1], z, w);
}

fcLong4 fcLong4_create22(fcLong2 vec1, fcLong2 vec2) {
  return fcLong4_create1111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcLong4_set22(fcLong4* self, fcLong2 vec1, fcLong2 vec2) {
  fcLong4_set1111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcLong4 fcLong4_create31(fcLong3 vec1, cl_long w) {
  return fcLong4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], w);
}

void fcLong4_set31(fcLong4* self, fcLong3 vec1, cl_long w) {
  fcLong4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], w);
}

fcLong4 fcLong4_create4(fcLong4 vec1) {
  return fcLong4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcLong4_set4(fcLong4* self, fcLong4 vec1) {
  fcLong4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcLong2 fcLong4_odd(fcLong4 a) {
  return fcLong2_create11(a.s[1], a.s[3]);
}

fcLong2 fcLong4_even(fcLong4 a) {
  return fcLong2_create11(a.s[0], a.s[2]);
}

fcByte4 fcLong4_convertByte4(fcLong4 a) {
  return fcByte4_create1111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]));
}

fcShort4 fcLong4_convertShort4(fcLong4 a) {
  return fcShort4_create1111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]));
}

fcInt4 fcLong4_convertInt4(fcLong4 a) {
  return fcInt4_create1111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]));
}

fcFloat4 fcLong4_convertFloat4(fcLong4 a) {
  return fcFloat4_create1111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]));
}

fcDouble4 fcLong4_convertDouble4(fcLong4 a) {
  return fcDouble4_create1111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]));
}

fcLong2 fcLong4_asLong2(fcLong4 a) {
  return fcLong2_create11(a.s[0], a.s[1]);
}

fcLong3 fcLong4_asLong3(fcLong4 a) {
  return fcLong3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcLong4_isEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
}

fcInt4 fcLong4_isNotEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
}

fcInt4 fcLong4_isGreater(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
}

fcInt4 fcLong4_isGreaterEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
}

fcInt4 fcLong4_isLess(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
}

fcInt4 fcLong4_isLessEqual(fcLong4 a, fcLong4 b) {
  return fcInt4_create1111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
}

fcLong4 fcLong4_select(fcLong4 a, fcLong4 b, fcInt4 c) {
  return fcLong4_create1111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]));
}

cl_int fcLong4_any(fcLong4 a) {
  return a.s[0] != 0L || a.s[1] != 0L || a.s[2] != 0L || a.s[3] != 0L;
}

cl_int fcLong4_all(fcLong4 a) {
  return !(a.s[0] == 0L || a.s[1] == 0L || a.s[2] == 0L || a.s[3] == 0L);
}

fcLong4 fcLong4_neg(fcLong4 a) {
  return fcLong4_create1111(-a.s[0], -a.s[1], -a.s[2], -a.s[3]);
}

fcLong4 fcLong4_add(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3]);
}

fcLong4 fcLong4_sub(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3]);
}

fcLong4 fcLong4_mul(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3]);
}

fcDouble4 fcLong4_muld(fcLong4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]));
}

fcFloat4 fcLong4_mulf(fcLong4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]));
}

fcLong4 fcLong4_mulk(fcLong4 a, cl_long k) {
  return fcLong4_create1111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k);
}

fcDouble4 fcLong4_mulkd(fcLong4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k));
}

fcFloat4 fcLong4_mulkf(fcLong4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k));
}

fcLong4 fcLong4_div(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3]);
}

fcDouble4 fcLong4_divd(fcLong4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]));
}

fcFloat4 fcLong4_divf(fcLong4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]));
}

fcLong4 fcLong4_divk(fcLong4 a, cl_long k) {
  return fcLong4_create1111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k);
}

fcDouble4 fcLong4_divkd(fcLong4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k));
}

fcFloat4 fcLong4_divkf(fcLong4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k));
}

fcLong4 fcLong4_mod(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3]);
}

fcLong4 fcLong4_modk(fcLong4 a, cl_long k) {
  return fcLong4_create1111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k);
}

fcLong4 fcLong4_bitAnd(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3]);
}

fcLong4 fcLong4_bitOr(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3]);
}

fcLong4 fcLong4_bitXor(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3]);
}

fcLong4 fcLong4_bitNot(fcLong4 a) {
  return fcLong4_create1111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3]);
}

fcLong4 fcLong4_abs(fcLong4 a) {
  return fcLong4_create1111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]));
}

fcLong4 fcLong4_clamp(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]));
}

fcLong4 fcLong4_max(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]));
}

fcLong4 fcLong4_maxMag(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]));
}

fcLong4 fcLong4_min(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]));
}

fcLong4 fcLong4_minMag(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]));
}

fcLong4 fcLong4_mix(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]));
}

fcLong4 fcLong4_clampk(fcLong4 v, cl_long min, cl_long max) {
  return fcLong4_create1111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max));
}

fcLong4 fcLong4_maxk(fcLong4 x, cl_long y) {
  return fcLong4_create1111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y));
}

fcLong4 fcLong4_mink(fcLong4 x, cl_long y) {
  return fcLong4_create1111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y));
}

fcLong4 fcLong4_mixk(fcLong4 x, fcLong4 y, cl_long a) {
  return fcLong4_create1111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a));
}

fcLong4 fcLong4_absDiff(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]));
}

fcLong4 fcLong4_addSat(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_addSatl(a.s[0], b.s[0]), fcMath_addSatl(a.s[1], b.s[1]), fcMath_addSatl(a.s[2], b.s[2]), fcMath_addSatl(a.s[3], b.s[3]));
}

fcLong4 fcLong4_clz(fcLong4 a) {
  return fcLong4_create1111(fcMath_clzl(a.s[0]), fcMath_clzl(a.s[1]), fcMath_clzl(a.s[2]), fcMath_clzl(a.s[3]));
}

fcLong4 fcLong4_hadd(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_haddl(a.s[0], b.s[0]), fcMath_haddl(a.s[1], b.s[1]), fcMath_haddl(a.s[2], b.s[2]), fcMath_haddl(a.s[3], b.s[3]));
}

fcLong4 fcLong4_madHi(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_madHil(a.s[0], b.s[0], c.s[0]), fcMath_madHil(a.s[1], b.s[1], c.s[1]), fcMath_madHil(a.s[2], b.s[2], c.s[2]), fcMath_madHil(a.s[3], b.s[3], c.s[3]));
}

fcLong4 fcLong4_madSat(fcLong4 a, fcLong4 b, fcLong4 c) {
  return fcLong4_create1111(fcMath_madSatl(a.s[0], b.s[0], c.s[0]), fcMath_madSatl(a.s[1], b.s[1], c.s[1]), fcMath_madSatl(a.s[2], b.s[2], c.s[2]), fcMath_madSatl(a.s[3], b.s[3], c.s[3]));
}

fcLong4 fcLong4_mulHi(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_mulHil(a.s[0], b.s[0]), fcMath_mulHil(a.s[1], b.s[1]), fcMath_mulHil(a.s[2], b.s[2]), fcMath_mulHil(a.s[3], b.s[3]));
}

fcLong4 fcLong4_rhadd(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_rhaddl(a.s[0], b.s[0]), fcMath_rhaddl(a.s[1], b.s[1]), fcMath_rhaddl(a.s[2], b.s[2]), fcMath_rhaddl(a.s[3], b.s[3]));
}

fcLong4 fcLong4_rotate(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_rotatel(a.s[0], b.s[0]), fcMath_rotatel(a.s[1], b.s[1]), fcMath_rotatel(a.s[2], b.s[2]), fcMath_rotatel(a.s[3], b.s[3]));
}

fcLong4 fcLong4_subSat(fcLong4 a, fcLong4 b) {
  return fcLong4_create1111(fcMath_subSatl(a.s[0], b.s[0]), fcMath_subSatl(a.s[1], b.s[1]), fcMath_subSatl(a.s[2], b.s[2]), fcMath_subSatl(a.s[3], b.s[3]));
}


//
// fcLong8
//

fcLong8 fcLong8_create1(cl_long v) {
  return fcLong8_create11111111(v, v, v, v, v, v, v, v);
}

void fcLong8_set1(fcLong8* self, cl_long v) {
  fcLong8_set11111111(self, v, v, v, v, v, v, v, v);
}

fcLong8 fcLong8_create11111111(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8 result;
  fcLong8_set11111111(&result, x, y, z, w, s4, s5, s6, s7);
  return result;
}

void fcLong8_set11111111(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
  self->s[4] = s4;
  self->s[5] = s5;
  self->s[6] = s6;
  self->s[7] = s7;
}

fcLong8 fcLong8_create1111112(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec1) {
  return fcLong8_create11111111(x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

void fcLong8_set1111112(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec1) {
  fcLong8_set11111111(self, x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

fcLong8 fcLong8_create1111121(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong2 vec1, cl_long s7) {
  return fcLong8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

void fcLong8_set1111121(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong2 vec1, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

fcLong8 fcLong8_create111113(cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong3 vec1) {
  return fcLong8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcLong8_set111113(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, cl_long s4, fcLong3 vec1) {
  fcLong8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcLong8 fcLong8_create1111211(cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

void fcLong8_set1111211(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

fcLong8 fcLong8_create111122(cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcLong8_set111122(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong2 vec1, fcLong2 vec2) {
  fcLong8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create111131(cl_long x, cl_long y, cl_long z, cl_long w, fcLong3 vec1, cl_long s7) {
  return fcLong8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

void fcLong8_set111131(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong3 vec1, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

fcLong8 fcLong8_create11114(cl_long x, cl_long y, cl_long z, cl_long w, fcLong4 vec1) {
  return fcLong8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcLong8_set11114(fcLong8* self, cl_long x, cl_long y, cl_long z, cl_long w, fcLong4 vec1) {
  fcLong8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcLong8 fcLong8_create1112111(cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

void fcLong8_set1112111(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

fcLong8 fcLong8_create111212(cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set111212(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create111221(cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set111221(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create11123(cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong3 vec2) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set11123(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong2 vec1, fcLong3 vec2) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create111311(cl_long x, cl_long y, cl_long z, fcLong3 vec1, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

void fcLong8_set111311(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong3 vec1, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

fcLong8 fcLong8_create11132(cl_long x, cl_long y, cl_long z, fcLong3 vec1, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

void fcLong8_set11132(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong3 vec1, fcLong2 vec2) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create11141(cl_long x, cl_long y, cl_long z, fcLong4 vec1, cl_long s7) {
  return fcLong8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

void fcLong8_set11141(fcLong8* self, cl_long x, cl_long y, cl_long z, fcLong4 vec1, cl_long s7) {
  fcLong8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

fcLong8 fcLong8_create1121111(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

void fcLong8_set1121111(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

fcLong8 fcLong8_create112112(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set112112(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create112121(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set112121(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create11213(cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set11213(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, cl_long s4, fcLong3 vec2) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create112211(cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

void fcLong8_set112211(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

fcLong8 fcLong8_create11222(cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcLong8_set11222(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create11231(cl_long x, cl_long y, fcLong2 vec1, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcLong8_set11231(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong3 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcLong8 fcLong8_create1124(cl_long x, cl_long y, fcLong2 vec1, fcLong4 vec2) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcLong8_set1124(fcLong8* self, cl_long x, cl_long y, fcLong2 vec1, fcLong4 vec2) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcLong8 fcLong8_create113111(cl_long x, cl_long y, fcLong3 vec1, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

void fcLong8_set113111(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

fcLong8 fcLong8_create11312(cl_long x, cl_long y, fcLong3 vec1, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set11312(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create11321(cl_long x, cl_long y, fcLong3 vec1, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set11321(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create1133(cl_long x, cl_long y, fcLong3 vec1, fcLong3 vec2) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set1133(fcLong8* self, cl_long x, cl_long y, fcLong3 vec1, fcLong3 vec2) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create11411(cl_long x, cl_long y, fcLong4 vec1, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

void fcLong8_set11411(fcLong8* self, cl_long x, cl_long y, fcLong4 vec1, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

fcLong8 fcLong8_create1142(cl_long x, cl_long y, fcLong4 vec1, fcLong2 vec2) {
  return fcLong8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

void fcLong8_set1142(fcLong8* self, cl_long x, cl_long y, fcLong4 vec1, fcLong2 vec2) {
  fcLong8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create1211111(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

void fcLong8_set1211111(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

fcLong8 fcLong8_create121112(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set121112(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create121121(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set121121(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create12113(cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set12113(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, cl_long s4, fcLong3 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create121211(cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcLong8_set121211(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcLong8 fcLong8_create12122(cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcLong8_set12122(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create12131(cl_long x, fcLong2 vec1, cl_long w, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcLong8_set12131(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong3 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcLong8 fcLong8_create1214(cl_long x, fcLong2 vec1, cl_long w, fcLong4 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcLong8_set1214(fcLong8* self, cl_long x, fcLong2 vec1, cl_long w, fcLong4 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcLong8 fcLong8_create122111(cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcLong8_set122111(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcLong8 fcLong8_create12212(cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcLong8_set12212(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create12221(cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcLong8_set12221(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcLong8 fcLong8_create1223(cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcLong8_set1223(fcLong8* self, cl_long x, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcLong8 fcLong8_create12311(cl_long x, fcLong2 vec1, fcLong3 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcLong8_set12311(fcLong8* self, cl_long x, fcLong2 vec1, fcLong3 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcLong8 fcLong8_create1232(cl_long x, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcLong8_set1232(fcLong8* self, cl_long x, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create1241(cl_long x, fcLong2 vec1, fcLong4 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcLong8_set1241(fcLong8* self, cl_long x, fcLong2 vec1, fcLong4 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcLong8 fcLong8_create131111(cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

void fcLong8_set131111(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

fcLong8 fcLong8_create13112(cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set13112(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create13121(cl_long x, fcLong3 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set13121(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create1313(cl_long x, fcLong3 vec1, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set1313(fcLong8* self, cl_long x, fcLong3 vec1, cl_long s4, fcLong3 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create13211(cl_long x, fcLong3 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

void fcLong8_set13211(fcLong8* self, cl_long x, fcLong3 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

fcLong8 fcLong8_create1322(cl_long x, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcLong8_set1322(fcLong8* self, cl_long x, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create1331(cl_long x, fcLong3 vec1, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcLong8_set1331(fcLong8* self, cl_long x, fcLong3 vec1, fcLong3 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcLong8 fcLong8_create134(cl_long x, fcLong3 vec1, fcLong4 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcLong8_set134(fcLong8* self, cl_long x, fcLong3 vec1, fcLong4 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcLong8 fcLong8_create14111(cl_long x, fcLong4 vec1, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

void fcLong8_set14111(fcLong8* self, cl_long x, fcLong4 vec1, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

fcLong8 fcLong8_create1412(cl_long x, fcLong4 vec1, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set1412(fcLong8* self, cl_long x, fcLong4 vec1, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create1421(cl_long x, fcLong4 vec1, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set1421(fcLong8* self, cl_long x, fcLong4 vec1, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create143(cl_long x, fcLong4 vec1, fcLong3 vec2) {
  return fcLong8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set143(fcLong8* self, cl_long x, fcLong4 vec1, fcLong3 vec2) {
  fcLong8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create2111111(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

void fcLong8_set2111111(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

fcLong8 fcLong8_create211112(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set211112(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create211121(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set211121(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create21113(fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set21113(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, cl_long s4, fcLong3 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create211211(fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcLong8_set211211(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

fcLong8 fcLong8_create21122(fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcLong8_set21122(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create21131(fcLong2 vec1, cl_long z, cl_long w, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcLong8_set21131(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong3 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcLong8 fcLong8_create2114(fcLong2 vec1, cl_long z, cl_long w, fcLong4 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcLong8_set2114(fcLong8* self, fcLong2 vec1, cl_long z, cl_long w, fcLong4 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcLong8 fcLong8_create212111(fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcLong8_set212111(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcLong8 fcLong8_create21212(fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcLong8_set21212(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create21221(fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcLong8_set21221(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcLong8 fcLong8_create2123(fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcLong8_set2123(fcLong8* self, fcLong2 vec1, cl_long z, fcLong2 vec2, fcLong3 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcLong8 fcLong8_create21311(fcLong2 vec1, cl_long z, fcLong3 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcLong8_set21311(fcLong8* self, fcLong2 vec1, cl_long z, fcLong3 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcLong8 fcLong8_create2132(fcLong2 vec1, cl_long z, fcLong3 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcLong8_set2132(fcLong8* self, fcLong2 vec1, cl_long z, fcLong3 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create2141(fcLong2 vec1, cl_long z, fcLong4 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcLong8_set2141(fcLong8* self, fcLong2 vec1, cl_long z, fcLong4 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcLong8 fcLong8_create221111(fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

void fcLong8_set221111(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

fcLong8 fcLong8_create22112(fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

void fcLong8_set22112(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, cl_long s5, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create22121(fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

void fcLong8_set22121(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong2 vec3, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

fcLong8 fcLong8_create2213(fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcLong8_set2213(fcLong8* self, fcLong2 vec1, fcLong2 vec2, cl_long s4, fcLong3 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcLong8 fcLong8_create22211(fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

void fcLong8_set22211(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

fcLong8 fcLong8_create2222(fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, fcLong2 vec4) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

void fcLong8_set2222(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong2 vec3, fcLong2 vec4) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

fcLong8 fcLong8_create2231(fcLong2 vec1, fcLong2 vec2, fcLong3 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

void fcLong8_set2231(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong3 vec3, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

fcLong8 fcLong8_create224(fcLong2 vec1, fcLong2 vec2, fcLong4 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

void fcLong8_set224(fcLong8* self, fcLong2 vec1, fcLong2 vec2, fcLong4 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

fcLong8 fcLong8_create23111(fcLong2 vec1, fcLong3 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

void fcLong8_set23111(fcLong8* self, fcLong2 vec1, fcLong3 vec2, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

fcLong8 fcLong8_create2312(fcLong2 vec1, fcLong3 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

void fcLong8_set2312(fcLong8* self, fcLong2 vec1, fcLong3 vec2, cl_long s5, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create2321(fcLong2 vec1, fcLong3 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

void fcLong8_set2321(fcLong8* self, fcLong2 vec1, fcLong3 vec2, fcLong2 vec3, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

fcLong8 fcLong8_create233(fcLong2 vec1, fcLong3 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcLong8_set233(fcLong8* self, fcLong2 vec1, fcLong3 vec2, fcLong3 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcLong8 fcLong8_create2411(fcLong2 vec1, fcLong4 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

void fcLong8_set2411(fcLong8* self, fcLong2 vec1, fcLong4 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

fcLong8 fcLong8_create242(fcLong2 vec1, fcLong4 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

void fcLong8_set242(fcLong8* self, fcLong2 vec1, fcLong4 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create311111(fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

void fcLong8_set311111(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

fcLong8 fcLong8_create31112(fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set31112(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create31121(fcLong3 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set31121(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create3113(fcLong3 vec1, cl_long w, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set3113(fcLong8* self, fcLong3 vec1, cl_long w, cl_long s4, fcLong3 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create31211(fcLong3 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcLong8_set31211(fcLong8* self, fcLong3 vec1, cl_long w, fcLong2 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcLong8 fcLong8_create3122(fcLong3 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcLong8_set3122(fcLong8* self, fcLong3 vec1, cl_long w, fcLong2 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create3131(fcLong3 vec1, cl_long w, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcLong8_set3131(fcLong8* self, fcLong3 vec1, cl_long w, fcLong3 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcLong8 fcLong8_create314(fcLong3 vec1, cl_long w, fcLong4 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcLong8_set314(fcLong8* self, fcLong3 vec1, cl_long w, fcLong4 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcLong8 fcLong8_create32111(fcLong3 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcLong8_set32111(fcLong8* self, fcLong3 vec1, fcLong2 vec2, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcLong8 fcLong8_create3212(fcLong3 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcLong8_set3212(fcLong8* self, fcLong3 vec1, fcLong2 vec2, cl_long s5, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create3221(fcLong3 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcLong8_set3221(fcLong8* self, fcLong3 vec1, fcLong2 vec2, fcLong2 vec3, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcLong8 fcLong8_create323(fcLong3 vec1, fcLong2 vec2, fcLong3 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcLong8_set323(fcLong8* self, fcLong3 vec1, fcLong2 vec2, fcLong3 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcLong8 fcLong8_create3311(fcLong3 vec1, fcLong3 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcLong8_set3311(fcLong8* self, fcLong3 vec1, fcLong3 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcLong8 fcLong8_create332(fcLong3 vec1, fcLong3 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcLong8_set332(fcLong8* self, fcLong3 vec1, fcLong3 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create341(fcLong3 vec1, fcLong4 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcLong8_set341(fcLong8* self, fcLong3 vec1, fcLong4 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcLong8 fcLong8_create41111(fcLong4 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

void fcLong8_set41111(fcLong8* self, fcLong4 vec1, cl_long s4, cl_long s5, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

fcLong8 fcLong8_create4112(fcLong4 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcLong8_set4112(fcLong8* self, fcLong4 vec1, cl_long s4, cl_long s5, fcLong2 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

fcLong8 fcLong8_create4121(fcLong4 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

void fcLong8_set4121(fcLong8* self, fcLong4 vec1, cl_long s4, fcLong2 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

fcLong8 fcLong8_create413(fcLong4 vec1, cl_long s4, fcLong3 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcLong8_set413(fcLong8* self, fcLong4 vec1, cl_long s4, fcLong3 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcLong8 fcLong8_create4211(fcLong4 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

void fcLong8_set4211(fcLong8* self, fcLong4 vec1, fcLong2 vec2, cl_long s6, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

fcLong8 fcLong8_create422(fcLong4 vec1, fcLong2 vec2, fcLong2 vec3) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcLong8_set422(fcLong8* self, fcLong4 vec1, fcLong2 vec2, fcLong2 vec3) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcLong8 fcLong8_create431(fcLong4 vec1, fcLong3 vec2, cl_long s7) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcLong8_set431(fcLong8* self, fcLong4 vec1, fcLong3 vec2, cl_long s7) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcLong8 fcLong8_create44(fcLong4 vec1, fcLong4 vec2) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcLong8_set44(fcLong8* self, fcLong4 vec1, fcLong4 vec2) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcLong8 fcLong8_create8(fcLong8 vec1) {
  return fcLong8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

void fcLong8_set8(fcLong8* self, fcLong8 vec1) {
  fcLong8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

fcLong4 fcLong8_odd(fcLong8 a) {
  return fcLong4_create1111(a.s[1], a.s[3], a.s[5], a.s[7]);
}

fcLong4 fcLong8_even(fcLong8 a) {
  return fcLong4_create1111(a.s[0], a.s[2], a.s[4], a.s[6]);
}

fcByte8 fcLong8_convertByte8(fcLong8 a) {
  return fcByte8_create11111111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]), (cl_byte)(a.s[4]), (cl_byte)(a.s[5]), (cl_byte)(a.s[6]), (cl_byte)(a.s[7]));
}

fcShort8 fcLong8_convertShort8(fcLong8 a) {
  return fcShort8_create11111111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]), (cl_short)(a.s[4]), (cl_short)(a.s[5]), (cl_short)(a.s[6]), (cl_short)(a.s[7]));
}

fcInt8 fcLong8_convertInt8(fcLong8 a) {
  return fcInt8_create11111111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]), (cl_int)(a.s[4]), (cl_int)(a.s[5]), (cl_int)(a.s[6]), (cl_int)(a.s[7]));
}

fcFloat8 fcLong8_convertFloat8(fcLong8 a) {
  return fcFloat8_create11111111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]), (cl_float)(a.s[4]), (cl_float)(a.s[5]), (cl_float)(a.s[6]), (cl_float)(a.s[7]));
}

fcDouble8 fcLong8_convertDouble8(fcLong8 a) {
  return fcDouble8_create11111111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]), (cl_double)(a.s[4]), (cl_double)(a.s[5]), (cl_double)(a.s[6]), (cl_double)(a.s[7]));
}

fcLong2 fcLong8_asLong2(fcLong8 a) {
  return fcLong2_create11(a.s[0], a.s[1]);
}

fcLong3 fcLong8_asLong3(fcLong8 a) {
  return fcLong3_create111(a.s[0], a.s[1], a.s[2]);
}

fcLong4 fcLong8_asLong4(fcLong8 a) {
  return fcLong4_create1111(a.s[0], a.s[1], a.s[2], a.s[3]);
}

fcInt8 fcLong8_isEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0, a.s[4] == b.s[4]? 1 : 0, a.s[5] == b.s[5]? 1 : 0, a.s[6] == b.s[6]? 1 : 0, a.s[7] == b.s[7]? 1 : 0);
}

fcInt8 fcLong8_isNotEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0, a.s[4] != b.s[4]? 1 : 0, a.s[5] != b.s[5]? 1 : 0, a.s[6] != b.s[6]? 1 : 0, a.s[7] != b.s[7]? 1 : 0);
}

fcInt8 fcLong8_isGreater(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0, a.s[4] > b.s[4]? 1 : 0, a.s[5] > b.s[5]? 1 : 0, a.s[6] > b.s[6]? 1 : 0, a.s[7] > b.s[7]? 1 : 0);
}

fcInt8 fcLong8_isGreaterEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0, a.s[4] >= b.s[4]? 1 : 0, a.s[5] >= b.s[5]? 1 : 0, a.s[6] >= b.s[6]? 1 : 0, a.s[7] >= b.s[7]? 1 : 0);
}

fcInt8 fcLong8_isLess(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0, a.s[4] < b.s[4]? 1 : 0, a.s[5] < b.s[5]? 1 : 0, a.s[6] < b.s[6]? 1 : 0, a.s[7] < b.s[7]? 1 : 0);
}

fcInt8 fcLong8_isLessEqual(fcLong8 a, fcLong8 b) {
  return fcInt8_create11111111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0, a.s[4] <= b.s[4]? 1 : 0, a.s[5] <= b.s[5]? 1 : 0, a.s[6] <= b.s[6]? 1 : 0, a.s[7] <= b.s[7]? 1 : 0);
}

fcLong8 fcLong8_select(fcLong8 a, fcLong8 b, fcInt8 c) {
  return fcLong8_create11111111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]), fcMath_select(a.s[4], b.s[4], c.s[4]), fcMath_select(a.s[5], b.s[5], c.s[5]), fcMath_select(a.s[6], b.s[6], c.s[6]), fcMath_select(a.s[7], b.s[7], c.s[7]));
}

cl_int fcLong8_any(fcLong8 a) {
  return a.s[0] != 0L || a.s[1] != 0L || a.s[2] != 0L || a.s[3] != 0L || a.s[4] != 0L || a.s[5] != 0L || a.s[6] != 0L || a.s[7] != 0L;
}

cl_int fcLong8_all(fcLong8 a) {
  return !(a.s[0] == 0L || a.s[1] == 0L || a.s[2] == 0L || a.s[3] == 0L || a.s[4] == 0L || a.s[5] == 0L || a.s[6] == 0L || a.s[7] == 0L);
}

fcLong8 fcLong8_neg(fcLong8 a) {
  return fcLong8_create11111111(-a.s[0], -a.s[1], -a.s[2], -a.s[3], -a.s[4], -a.s[5], -a.s[6], -a.s[7]);
}

fcLong8 fcLong8_add(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3], a.s[4] + b.s[4], a.s[5] + b.s[5], a.s[6] + b.s[6], a.s[7] + b.s[7]);
}

fcLong8 fcLong8_sub(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3], a.s[4] - b.s[4], a.s[5] - b.s[5], a.s[6] - b.s[6], a.s[7] - b.s[7]);
}

fcLong8 fcLong8_mul(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] * b.s[0], a.s[1] * b.s[1], a.s[2] * b.s[2], a.s[3] * b.s[3], a.s[4] * b.s[4], a.s[5] * b.s[5], a.s[6] * b.s[6], a.s[7] * b.s[7]);
}

fcDouble8 fcLong8_muld(fcLong8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]), (cl_double)(a.s[4] * b.s[4]), (cl_double)(a.s[5] * b.s[5]), (cl_double)(a.s[6] * b.s[6]), (cl_double)(a.s[7] * b.s[7]));
}

fcFloat8 fcLong8_mulf(fcLong8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]), (cl_float)(a.s[4] * b.s[4]), (cl_float)(a.s[5] * b.s[5]), (cl_float)(a.s[6] * b.s[6]), (cl_float)(a.s[7] * b.s[7]));
}

fcLong8 fcLong8_mulk(fcLong8 a, cl_long k) {
  return fcLong8_create11111111(a.s[0] * k, a.s[1] * k, a.s[2] * k, a.s[3] * k, a.s[4] * k, a.s[5] * k, a.s[6] * k, a.s[7] * k);
}

fcDouble8 fcLong8_mulkd(fcLong8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k), (cl_double)(a.s[4] * k), (cl_double)(a.s[5] * k), (cl_double)(a.s[6] * k), (cl_double)(a.s[7] * k));
}

fcFloat8 fcLong8_mulkf(fcLong8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k), (cl_float)(a.s[4] * k), (cl_float)(a.s[5] * k), (cl_float)(a.s[6] * k), (cl_float)(a.s[7] * k));
}

fcLong8 fcLong8_div(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] / b.s[0], a.s[1] / b.s[1], a.s[2] / b.s[2], a.s[3] / b.s[3], a.s[4] / b.s[4], a.s[5] / b.s[5], a.s[6] / b.s[6], a.s[7] / b.s[7]);
}

fcDouble8 fcLong8_divd(fcLong8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]), (cl_double)(a.s[4] / b.s[4]), (cl_double)(a.s[5] / b.s[5]), (cl_double)(a.s[6] / b.s[6]), (cl_double)(a.s[7] / b.s[7]));
}

fcFloat8 fcLong8_divf(fcLong8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]), (cl_float)(a.s[4] / b.s[4]), (cl_float)(a.s[5] / b.s[5]), (cl_float)(a.s[6] / b.s[6]), (cl_float)(a.s[7] / b.s[7]));
}

fcLong8 fcLong8_divk(fcLong8 a, cl_long k) {
  return fcLong8_create11111111(a.s[0] / k, a.s[1] / k, a.s[2] / k, a.s[3] / k, a.s[4] / k, a.s[5] / k, a.s[6] / k, a.s[7] / k);
}

fcDouble8 fcLong8_divkd(fcLong8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k), (cl_double)(a.s[4] / k), (cl_double)(a.s[5] / k), (cl_double)(a.s[6] / k), (cl_double)(a.s[7] / k));
}

fcFloat8 fcLong8_divkf(fcLong8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k), (cl_float)(a.s[4] / k), (cl_float)(a.s[5] / k), (cl_float)(a.s[6] / k), (cl_float)(a.s[7] / k));
}

fcLong8 fcLong8_mod(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] % b.s[0], a.s[1] % b.s[1], a.s[2] % b.s[2], a.s[3] % b.s[3], a.s[4] % b.s[4], a.s[5] % b.s[5], a.s[6] % b.s[6], a.s[7] % b.s[7]);
}

fcLong8 fcLong8_modk(fcLong8 a, cl_long k) {
  return fcLong8_create11111111(a.s[0] % k, a.s[1] % k, a.s[2] % k, a.s[3] % k, a.s[4] % k, a.s[5] % k, a.s[6] % k, a.s[7] % k);
}

fcLong8 fcLong8_bitAnd(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] & b.s[0], a.s[1] & b.s[1], a.s[2] & b.s[2], a.s[3] & b.s[3], a.s[4] & b.s[4], a.s[5] & b.s[5], a.s[6] & b.s[6], a.s[7] & b.s[7]);
}

fcLong8 fcLong8_bitOr(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] | b.s[0], a.s[1] | b.s[1], a.s[2] | b.s[2], a.s[3] | b.s[3], a.s[4] | b.s[4], a.s[5] | b.s[5], a.s[6] | b.s[6], a.s[7] | b.s[7]);
}

fcLong8 fcLong8_bitXor(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(a.s[0] ^ b.s[0], a.s[1] ^ b.s[1], a.s[2] ^ b.s[2], a.s[3] ^ b.s[3], a.s[4] ^ b.s[4], a.s[5] ^ b.s[5], a.s[6] ^ b.s[6], a.s[7] ^ b.s[7]);
}

fcLong8 fcLong8_bitNot(fcLong8 a) {
  return fcLong8_create11111111(~a.s[0], ~a.s[1], ~a.s[2], ~a.s[3], ~a.s[4], ~a.s[5], ~a.s[6], ~a.s[7]);
}

fcLong8 fcLong8_abs(fcLong8 a) {
  return fcLong8_create11111111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]), fcMath_abs(a.s[4]), fcMath_abs(a.s[5]), fcMath_abs(a.s[6]), fcMath_abs(a.s[7]));
}

fcLong8 fcLong8_clamp(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]), fcMath_clamp(a.s[4], b.s[4], c.s[4]), fcMath_clamp(a.s[5], b.s[5], c.s[5]), fcMath_clamp(a.s[6], b.s[6], c.s[6]), fcMath_clamp(a.s[7], b.s[7], c.s[7]));
}

fcLong8 fcLong8_max(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]), fcMath_max(a.s[4], b.s[4]), fcMath_max(a.s[5], b.s[5]), fcMath_max(a.s[6], b.s[6]), fcMath_max(a.s[7], b.s[7]));
}

fcLong8 fcLong8_maxMag(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]), fcMath_maxMag(a.s[4], b.s[4]), fcMath_maxMag(a.s[5], b.s[5]), fcMath_maxMag(a.s[6], b.s[6]), fcMath_maxMag(a.s[7], b.s[7]));
}

fcLong8 fcLong8_min(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]), fcMath_min(a.s[4], b.s[4]), fcMath_min(a.s[5], b.s[5]), fcMath_min(a.s[6], b.s[6]), fcMath_min(a.s[7], b.s[7]));
}

fcLong8 fcLong8_minMag(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]), fcMath_minMag(a.s[4], b.s[4]), fcMath_minMag(a.s[5], b.s[5]), fcMath_minMag(a.s[6], b.s[6]), fcMath_minMag(a.s[7], b.s[7]));
}

fcLong8 fcLong8_mix(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]), fcMath_mix(a.s[4], b.s[4], c.s[4]), fcMath_mix(a.s[5], b.s[5], c.s[5]), fcMath_mix(a.s[6], b.s[6], c.s[6]), fcMath_mix(a.s[7], b.s[7], c.s[7]));
}

fcLong8 fcLong8_clampk(fcLong8 v, cl_long min, cl_long max) {
  return fcLong8_create11111111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max), fcMath_clamp(v.s[4], min, max), fcMath_clamp(v.s[5], min, max), fcMath_clamp(v.s[6], min, max), fcMath_clamp(v.s[7], min, max));
}

fcLong8 fcLong8_maxk(fcLong8 x, cl_long y) {
  return fcLong8_create11111111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y), fcMath_max(x.s[4], y), fcMath_max(x.s[5], y), fcMath_max(x.s[6], y), fcMath_max(x.s[7], y));
}

fcLong8 fcLong8_mink(fcLong8 x, cl_long y) {
  return fcLong8_create11111111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y), fcMath_min(x.s[4], y), fcMath_min(x.s[5], y), fcMath_min(x.s[6], y), fcMath_min(x.s[7], y));
}

fcLong8 fcLong8_mixk(fcLong8 x, fcLong8 y, cl_long a) {
  return fcLong8_create11111111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a), fcMath_mix(x.s[4], y.s[4], a), fcMath_mix(x.s[5], y.s[5], a), fcMath_mix(x.s[6], y.s[6], a), fcMath_mix(x.s[7], y.s[7], a));
}

fcLong8 fcLong8_absDiff(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_absDiff(a.s[0], b.s[0]), fcMath_absDiff(a.s[1], b.s[1]), fcMath_absDiff(a.s[2], b.s[2]), fcMath_absDiff(a.s[3], b.s[3]), fcMath_absDiff(a.s[4], b.s[4]), fcMath_absDiff(a.s[5], b.s[5]), fcMath_absDiff(a.s[6], b.s[6]), fcMath_absDiff(a.s[7], b.s[7]));
}

fcLong8 fcLong8_addSat(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_addSatl(a.s[0], b.s[0]), fcMath_addSatl(a.s[1], b.s[1]), fcMath_addSatl(a.s[2], b.s[2]), fcMath_addSatl(a.s[3], b.s[3]), fcMath_addSatl(a.s[4], b.s[4]), fcMath_addSatl(a.s[5], b.s[5]), fcMath_addSatl(a.s[6], b.s[6]), fcMath_addSatl(a.s[7], b.s[7]));
}

fcLong8 fcLong8_clz(fcLong8 a) {
  return fcLong8_create11111111(fcMath_clzl(a.s[0]), fcMath_clzl(a.s[1]), fcMath_clzl(a.s[2]), fcMath_clzl(a.s[3]), fcMath_clzl(a.s[4]), fcMath_clzl(a.s[5]), fcMath_clzl(a.s[6]), fcMath_clzl(a.s[7]));
}

fcLong8 fcLong8_hadd(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_haddl(a.s[0], b.s[0]), fcMath_haddl(a.s[1], b.s[1]), fcMath_haddl(a.s[2], b.s[2]), fcMath_haddl(a.s[3], b.s[3]), fcMath_haddl(a.s[4], b.s[4]), fcMath_haddl(a.s[5], b.s[5]), fcMath_haddl(a.s[6], b.s[6]), fcMath_haddl(a.s[7], b.s[7]));
}

fcLong8 fcLong8_madHi(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_madHil(a.s[0], b.s[0], c.s[0]), fcMath_madHil(a.s[1], b.s[1], c.s[1]), fcMath_madHil(a.s[2], b.s[2], c.s[2]), fcMath_madHil(a.s[3], b.s[3], c.s[3]), fcMath_madHil(a.s[4], b.s[4], c.s[4]), fcMath_madHil(a.s[5], b.s[5], c.s[5]), fcMath_madHil(a.s[6], b.s[6], c.s[6]), fcMath_madHil(a.s[7], b.s[7], c.s[7]));
}

fcLong8 fcLong8_madSat(fcLong8 a, fcLong8 b, fcLong8 c) {
  return fcLong8_create11111111(fcMath_madSatl(a.s[0], b.s[0], c.s[0]), fcMath_madSatl(a.s[1], b.s[1], c.s[1]), fcMath_madSatl(a.s[2], b.s[2], c.s[2]), fcMath_madSatl(a.s[3], b.s[3], c.s[3]), fcMath_madSatl(a.s[4], b.s[4], c.s[4]), fcMath_madSatl(a.s[5], b.s[5], c.s[5]), fcMath_madSatl(a.s[6], b.s[6], c.s[6]), fcMath_madSatl(a.s[7], b.s[7], c.s[7]));
}

fcLong8 fcLong8_mulHi(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_mulHil(a.s[0], b.s[0]), fcMath_mulHil(a.s[1], b.s[1]), fcMath_mulHil(a.s[2], b.s[2]), fcMath_mulHil(a.s[3], b.s[3]), fcMath_mulHil(a.s[4], b.s[4]), fcMath_mulHil(a.s[5], b.s[5]), fcMath_mulHil(a.s[6], b.s[6]), fcMath_mulHil(a.s[7], b.s[7]));
}

fcLong8 fcLong8_rhadd(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_rhaddl(a.s[0], b.s[0]), fcMath_rhaddl(a.s[1], b.s[1]), fcMath_rhaddl(a.s[2], b.s[2]), fcMath_rhaddl(a.s[3], b.s[3]), fcMath_rhaddl(a.s[4], b.s[4]), fcMath_rhaddl(a.s[5], b.s[5]), fcMath_rhaddl(a.s[6], b.s[6]), fcMath_rhaddl(a.s[7], b.s[7]));
}

fcLong8 fcLong8_rotate(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_rotatel(a.s[0], b.s[0]), fcMath_rotatel(a.s[1], b.s[1]), fcMath_rotatel(a.s[2], b.s[2]), fcMath_rotatel(a.s[3], b.s[3]), fcMath_rotatel(a.s[4], b.s[4]), fcMath_rotatel(a.s[5], b.s[5]), fcMath_rotatel(a.s[6], b.s[6]), fcMath_rotatel(a.s[7], b.s[7]));
}

fcLong8 fcLong8_subSat(fcLong8 a, fcLong8 b) {
  return fcLong8_create11111111(fcMath_subSatl(a.s[0], b.s[0]), fcMath_subSatl(a.s[1], b.s[1]), fcMath_subSatl(a.s[2], b.s[2]), fcMath_subSatl(a.s[3], b.s[3]), fcMath_subSatl(a.s[4], b.s[4]), fcMath_subSatl(a.s[5], b.s[5]), fcMath_subSatl(a.s[6], b.s[6]), fcMath_subSatl(a.s[7], b.s[7]));
}


//
// fcFloat2
//

fcFloat2 fcFloat2_create1(cl_float v) {
  return fcFloat2_create11(v, v);
}

void fcFloat2_set1(fcFloat2* self, cl_float v) {
  fcFloat2_set11(self, v, v);
}

fcFloat2 fcFloat2_create11(cl_float x, cl_float y) {
  fcFloat2 result;
  fcFloat2_set11(&result, x, y);
  return result;
}

void fcFloat2_set11(fcFloat2* self, cl_float x, cl_float y) {
  self->s[0] = x;
  self->s[1] = y;
}

fcFloat2 fcFloat2_create2(fcFloat2 vec1) {
  return fcFloat2_create11(vec1.s[0], vec1.s[1]);
}

void fcFloat2_set2(fcFloat2* self, fcFloat2 vec1) {
  fcFloat2_set11(self, vec1.s[0], vec1.s[1]);
}

fcByte2 fcFloat2_convertByte2(fcFloat2 a) {
  return fcByte2_create11((cl_byte)(a.s[0]), (cl_byte)(a.s[1]));
}

fcShort2 fcFloat2_convertShort2(fcFloat2 a) {
  return fcShort2_create11((cl_short)(a.s[0]), (cl_short)(a.s[1]));
}

fcInt2 fcFloat2_convertInt2(fcFloat2 a) {
  return fcInt2_create11((cl_int)(a.s[0]), (cl_int)(a.s[1]));
}

fcLong2 fcFloat2_convertLong2(fcFloat2 a) {
  return fcLong2_create11((cl_long)(a.s[0]), (cl_long)(a.s[1]));
}

fcDouble2 fcFloat2_convertDouble2(fcFloat2 a) {
  return fcDouble2_create11((cl_double)(a.s[0]), (cl_double)(a.s[1]));
}

fcInt2 fcFloat2_isEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0);
}

fcInt2 fcFloat2_isNotEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0);
}

fcInt2 fcFloat2_isGreater(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0);
}

fcInt2 fcFloat2_isGreaterEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0);
}

fcInt2 fcFloat2_isLess(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0);
}

fcInt2 fcFloat2_isLessEqual(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0);
}

fcFloat2 fcFloat2_select(fcFloat2 a, fcFloat2 b, fcInt2 c) {
  return fcFloat2_create11(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcFloat2_isFinite(fcFloat2 a) {
  return fcInt2_create11(fcMath_isFinitef(a.s[0]), fcMath_isFinitef(a.s[1]));
}

fcInt2 fcFloat2_isInf(fcFloat2 a) {
  return fcInt2_create11(fcMath_isInff(a.s[0]), fcMath_isInff(a.s[1]));
}

fcInt2 fcFloat2_isNaN(fcFloat2 a) {
  return fcInt2_create11(fcMath_isNaNf(a.s[0]), fcMath_isNaNf(a.s[1]));
}

fcInt2 fcFloat2_isNormal(fcFloat2 a) {
  return fcInt2_create11(fcMath_isNormalf(a.s[0]), fcMath_isNormalf(a.s[1]));
}

fcInt2 fcFloat2_isOrdered(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(fcMath_isOrderedf(a.s[0], b.s[0]), fcMath_isOrderedf(a.s[1], b.s[1]));
}

fcInt2 fcFloat2_isUnordered(fcFloat2 a, fcFloat2 b) {
  return fcInt2_create11(fcMath_isUnorderedf(a.s[0], b.s[0]), fcMath_isUnorderedf(a.s[1], b.s[1]));
}

cl_int fcFloat2_any(fcFloat2 a) {
  return a.s[0] != 0.0f || a.s[1] != 0.0f;
}

cl_int fcFloat2_all(fcFloat2 a) {
  return !(a.s[0] == 0.0f || a.s[1] == 0.0f);
}

fcFloat2 fcFloat2_neg(fcFloat2 a) {
  return fcFloat2_create11(-a.s[0], -a.s[1]);
}

fcFloat2 fcFloat2_add(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(a.s[0] + b.s[0], a.s[1] + b.s[1]);
}

fcFloat2 fcFloat2_sub(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(a.s[0] - b.s[0], a.s[1] - b.s[1]);
}

fcDouble2 fcFloat2_muld(fcFloat2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]));
}

fcFloat2 fcFloat2_mulf(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]));
}

fcDouble2 fcFloat2_mulkd(fcFloat2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k));
}

fcFloat2 fcFloat2_mulkf(fcFloat2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k));
}

fcDouble2 fcFloat2_divd(fcFloat2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]));
}

fcFloat2 fcFloat2_divf(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]));
}

fcDouble2 fcFloat2_divkd(fcFloat2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k));
}

fcFloat2 fcFloat2_divkf(fcFloat2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k));
}

cl_float fcFloat2_dot(fcFloat2 a, fcFloat2 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1];
}

cl_double fcFloat2_distance(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_length(fcFloat2_sub(a, b));
}

cl_double fcFloat2_length(fcFloat2 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1]);
}

fcFloat2 fcFloat2_normalize(fcFloat2 a) {
  cl_double len = fcFloat2_length(a);
  return fcFloat2_create11((cl_float)(a.s[0] / len), (cl_float)(a.s[1] / len));
}

fcFloat2 fcFloat2_abs(fcFloat2 a) {
  return fcFloat2_create11(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]));
}

fcFloat2 fcFloat2_clamp(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]));
}

fcFloat2 fcFloat2_max(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_maxMag(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_min(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_minMag(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_mix(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]));
}

fcFloat2 fcFloat2_clampk(fcFloat2 v, cl_float min, cl_float max) {
  return fcFloat2_create11(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max));
}

fcFloat2 fcFloat2_maxk(fcFloat2 x, cl_float y) {
  return fcFloat2_create11(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y));
}

fcFloat2 fcFloat2_mink(fcFloat2 x, cl_float y) {
  return fcFloat2_create11(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y));
}

fcFloat2 fcFloat2_mixk(fcFloat2 x, fcFloat2 y, cl_float a) {
  return fcFloat2_create11(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a));
}

fcFloat2 fcFloat2_acos(fcFloat2 a) {
  return fcFloat2_create11(fcMath_acosf(a.s[0]), fcMath_acosf(a.s[1]));
}

fcFloat2 fcFloat2_acosh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_acoshf(a.s[0]), fcMath_acoshf(a.s[1]));
}

fcFloat2 fcFloat2_asin(fcFloat2 a) {
  return fcFloat2_create11(fcMath_asinf(a.s[0]), fcMath_asinf(a.s[1]));
}

fcFloat2 fcFloat2_asinh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_asinhf(a.s[0]), fcMath_asinhf(a.s[1]));
}

fcFloat2 fcFloat2_atan(fcFloat2 a) {
  return fcFloat2_create11(fcMath_atanf(a.s[0]), fcMath_atanf(a.s[1]));
}

fcFloat2 fcFloat2_atan2(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_atan2f(a.s[0], b.s[0]), fcMath_atan2f(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_atanh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_atanhf(a.s[0]), fcMath_atanhf(a.s[1]));
}

fcFloat2 fcFloat2_cbrt(fcFloat2 a) {
  return fcFloat2_create11(fcMath_cbrtf(a.s[0]), fcMath_cbrtf(a.s[1]));
}

fcFloat2 fcFloat2_ceil(fcFloat2 a) {
  return fcFloat2_create11(fcMath_ceilf(a.s[0]), fcMath_ceilf(a.s[1]));
}

fcFloat2 fcFloat2_copySign(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_copySignf(a.s[0], b.s[0]), fcMath_copySignf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_cos(fcFloat2 a) {
  return fcFloat2_create11(fcMath_cosf(a.s[0]), fcMath_cosf(a.s[1]));
}

fcFloat2 fcFloat2_cosh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_coshf(a.s[0]), fcMath_coshf(a.s[1]));
}

fcFloat2 fcFloat2_erf(fcFloat2 a) {
  return fcFloat2_create11(fcMath_erff(a.s[0]), fcMath_erff(a.s[1]));
}

fcFloat2 fcFloat2_erfc(fcFloat2 a) {
  return fcFloat2_create11(fcMath_erfcf(a.s[0]), fcMath_erfcf(a.s[1]));
}

fcFloat2 fcFloat2_exp(fcFloat2 a) {
  return fcFloat2_create11(fcMath_expf(a.s[0]), fcMath_expf(a.s[1]));
}

fcFloat2 fcFloat2_exp10(fcFloat2 a) {
  return fcFloat2_create11(fcMath_exp10f(a.s[0]), fcMath_exp10f(a.s[1]));
}

fcFloat2 fcFloat2_exp2(fcFloat2 a) {
  return fcFloat2_create11(fcMath_exp2f(a.s[0]), fcMath_exp2f(a.s[1]));
}

fcFloat2 fcFloat2_expm1(fcFloat2 a) {
  return fcFloat2_create11(fcMath_expm1f(a.s[0]), fcMath_expm1f(a.s[1]));
}

fcFloat2 fcFloat2_fdim(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_fdimf(a.s[0], b.s[0]), fcMath_fdimf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_floor(fcFloat2 a) {
  return fcFloat2_create11(fcMath_floorf(a.s[0]), fcMath_floorf(a.s[1]));
}

fcFloat2 fcFloat2_fma(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_fmaf(a.s[0], b.s[0], c.s[0]), fcMath_fmaf(a.s[1], b.s[1], c.s[1]));
}

fcFloat2 fcFloat2_fmod(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_fmodf(a.s[0], b.s[0]), fcMath_fmodf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_fract(fcFloat2 a) {
  return fcFloat2_create11(fcMath_fractf(a.s[0]), fcMath_fractf(a.s[1]));
}

fcFloat2 fcFloat2_frexp(fcFloat2 a) {
  return fcFloat2_create11(fcMath_frexpf(a.s[0]), fcMath_frexpf(a.s[1]));
}

fcFloat2 fcFloat2_getExponent(fcFloat2 a) {
  return fcFloat2_create11(fcMath_getExponentf(a.s[0]), fcMath_getExponentf(a.s[1]));
}

fcFloat2 fcFloat2_hypot(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_hypotf(a.s[0], b.s[0]), fcMath_hypotf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_lgamma(fcFloat2 a) {
  return fcFloat2_create11(fcMath_lgammaf(a.s[0]), fcMath_lgammaf(a.s[1]));
}

fcFloat2 fcFloat2_log(fcFloat2 a) {
  return fcFloat2_create11(fcMath_logf(a.s[0]), fcMath_logf(a.s[1]));
}

fcFloat2 fcFloat2_log10(fcFloat2 a) {
  return fcFloat2_create11(fcMath_log10f(a.s[0]), fcMath_log10f(a.s[1]));
}

fcFloat2 fcFloat2_log1p(fcFloat2 a) {
  return fcFloat2_create11(fcMath_log1pf(a.s[0]), fcMath_log1pf(a.s[1]));
}

fcFloat2 fcFloat2_log2(fcFloat2 a) {
  return fcFloat2_create11(fcMath_log2f(a.s[0]), fcMath_log2f(a.s[1]));
}

fcFloat2 fcFloat2_logb(fcFloat2 a) {
  return fcFloat2_create11(fcMath_logbf(a.s[0]), fcMath_logbf(a.s[1]));
}

fcFloat2 fcFloat2_mad(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_madf(a.s[0], b.s[0], c.s[0]), fcMath_madf(a.s[1], b.s[1], c.s[1]));
}

fcFloat2 fcFloat2_nextAfter(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_nextAfterf(a.s[0], b.s[0]), fcMath_nextAfterf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_pow(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_powf(a.s[0], b.s[0]), fcMath_powf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_powr(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_powrf(a.s[0], b.s[0]), fcMath_powrf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_remainder(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_remainderf(a.s[0], b.s[0]), fcMath_remainderf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_rint(fcFloat2 a) {
  return fcFloat2_create11(fcMath_rintf(a.s[0]), fcMath_rintf(a.s[1]));
}

fcFloat2 fcFloat2_round(fcFloat2 a) {
  return fcFloat2_create11(fcMath_roundf(a.s[0]), fcMath_roundf(a.s[1]));
}

fcFloat2 fcFloat2_rsqrt(fcFloat2 a) {
  return fcFloat2_create11(fcMath_rsqrtf(a.s[0]), fcMath_rsqrtf(a.s[1]));
}

fcFloat2 fcFloat2_signum(fcFloat2 a) {
  return fcFloat2_create11(fcMath_signumf(a.s[0]), fcMath_signumf(a.s[1]));
}

fcFloat2 fcFloat2_sin(fcFloat2 a) {
  return fcFloat2_create11(fcMath_sinf(a.s[0]), fcMath_sinf(a.s[1]));
}

fcFloat2 fcFloat2_sinh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_sinhf(a.s[0]), fcMath_sinhf(a.s[1]));
}

fcFloat2 fcFloat2_smoothStep(fcFloat2 a, fcFloat2 b, fcFloat2 c) {
  return fcFloat2_create11(fcMath_smoothStepf(a.s[0], b.s[0], c.s[0]), fcMath_smoothStepf(a.s[1], b.s[1], c.s[1]));
}

fcFloat2 fcFloat2_sqrt(fcFloat2 a) {
  return fcFloat2_create11(fcMath_sqrtf(a.s[0]), fcMath_sqrtf(a.s[1]));
}

fcFloat2 fcFloat2_step(fcFloat2 a, fcFloat2 b) {
  return fcFloat2_create11(fcMath_stepf(a.s[0], b.s[0]), fcMath_stepf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_tan(fcFloat2 a) {
  return fcFloat2_create11(fcMath_tanf(a.s[0]), fcMath_tanf(a.s[1]));
}

fcFloat2 fcFloat2_tanh(fcFloat2 a) {
  return fcFloat2_create11(fcMath_tanhf(a.s[0]), fcMath_tanhf(a.s[1]));
}

fcFloat2 fcFloat2_tgamma(fcFloat2 a) {
  return fcFloat2_create11(fcMath_tgammaf(a.s[0]), fcMath_tgammaf(a.s[1]));
}

fcFloat2 fcFloat2_toDegrees(fcFloat2 a) {
  return fcFloat2_create11(fcMath_toDegreesf(a.s[0]), fcMath_toDegreesf(a.s[1]));
}

fcFloat2 fcFloat2_toRadians(fcFloat2 a) {
  return fcFloat2_create11(fcMath_toRadiansf(a.s[0]), fcMath_toRadiansf(a.s[1]));
}

fcFloat2 fcFloat2_trunc(fcFloat2 a) {
  return fcFloat2_create11(fcMath_truncf(a.s[0]), fcMath_truncf(a.s[1]));
}

fcFloat2 fcFloat2_scalb(fcFloat2 a, fcInt2 n) {
  return fcFloat2_create11(fcMath_scalbf(a.s[0], n.s[0]), fcMath_scalbf(a.s[1], n.s[1]));
}

fcFloat2 fcFloat2_ldexp(fcFloat2 a, fcInt2 n) {
  return fcFloat2_create11(fcMath_ldexpf(a.s[0], n.s[0]), fcMath_ldexpf(a.s[1], n.s[1]));
}

fcFloat2 fcFloat2_pown(fcFloat2 a, fcInt2 b) {
  return fcFloat2_create11(fcMath_pownf(a.s[0], b.s[0]), fcMath_pownf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_rootn(fcFloat2 a, fcInt2 b) {
  return fcFloat2_create11(fcMath_rootnf(a.s[0], b.s[0]), fcMath_rootnf(a.s[1], b.s[1]));
}

fcFloat2 fcFloat2_smoothStepk(fcFloat2 a, fcFloat2 b, cl_float c) {
  return fcFloat2_create11(fcMath_smoothStepf(a.s[0], b.s[0], c), fcMath_smoothStepf(a.s[1], b.s[1], c));
}


//
// fcFloat3
//

fcFloat3 fcFloat3_create1(cl_float v) {
  return fcFloat3_create111(v, v, v);
}

void fcFloat3_set1(fcFloat3* self, cl_float v) {
  fcFloat3_set111(self, v, v, v);
}

fcFloat3 fcFloat3_create111(cl_float x, cl_float y, cl_float z) {
  fcFloat3 result;
  fcFloat3_set111(&result, x, y, z);
  return result;
}

void fcFloat3_set111(fcFloat3* self, cl_float x, cl_float y, cl_float z) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
}

fcFloat3 fcFloat3_create12(cl_float x, fcFloat2 vec1) {
  return fcFloat3_create111(x, vec1.s[0], vec1.s[1]);
}

void fcFloat3_set12(fcFloat3* self, cl_float x, fcFloat2 vec1) {
  fcFloat3_set111(self, x, vec1.s[0], vec1.s[1]);
}

fcFloat3 fcFloat3_create21(fcFloat2 vec1, cl_float z) {
  return fcFloat3_create111(vec1.s[0], vec1.s[1], z);
}

void fcFloat3_set21(fcFloat3* self, fcFloat2 vec1, cl_float z) {
  fcFloat3_set111(self, vec1.s[0], vec1.s[1], z);
}

fcFloat3 fcFloat3_create3(fcFloat3 vec1) {
  return fcFloat3_create111(vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcFloat3_set3(fcFloat3* self, fcFloat3 vec1) {
  fcFloat3_set111(self, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte3 fcFloat3_convertByte3(fcFloat3 a) {
  return fcByte3_create111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]));
}

fcShort3 fcFloat3_convertShort3(fcFloat3 a) {
  return fcShort3_create111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]));
}

fcInt3 fcFloat3_convertInt3(fcFloat3 a) {
  return fcInt3_create111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]));
}

fcLong3 fcFloat3_convertLong3(fcFloat3 a) {
  return fcLong3_create111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]));
}

fcDouble3 fcFloat3_convertDouble3(fcFloat3 a) {
  return fcDouble3_create111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]));
}

fcFloat2 fcFloat3_asFloat2(fcFloat3 a) {
  return fcFloat2_create11(a.s[0], a.s[1]);
}

fcInt3 fcFloat3_isEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0);
}

fcInt3 fcFloat3_isNotEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0);
}

fcInt3 fcFloat3_isGreater(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0);
}

fcInt3 fcFloat3_isGreaterEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0);
}

fcInt3 fcFloat3_isLess(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0);
}

fcInt3 fcFloat3_isLessEqual(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0);
}

fcFloat3 fcFloat3_select(fcFloat3 a, fcFloat3 b, fcInt3 c) {
  return fcFloat3_create111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcFloat3_isFinite(fcFloat3 a) {
  return fcInt3_create111(fcMath_isFinitef(a.s[0]), fcMath_isFinitef(a.s[1]), fcMath_isFinitef(a.s[2]));
}

fcInt3 fcFloat3_isInf(fcFloat3 a) {
  return fcInt3_create111(fcMath_isInff(a.s[0]), fcMath_isInff(a.s[1]), fcMath_isInff(a.s[2]));
}

fcInt3 fcFloat3_isNaN(fcFloat3 a) {
  return fcInt3_create111(fcMath_isNaNf(a.s[0]), fcMath_isNaNf(a.s[1]), fcMath_isNaNf(a.s[2]));
}

fcInt3 fcFloat3_isNormal(fcFloat3 a) {
  return fcInt3_create111(fcMath_isNormalf(a.s[0]), fcMath_isNormalf(a.s[1]), fcMath_isNormalf(a.s[2]));
}

fcInt3 fcFloat3_isOrdered(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(fcMath_isOrderedf(a.s[0], b.s[0]), fcMath_isOrderedf(a.s[1], b.s[1]), fcMath_isOrderedf(a.s[2], b.s[2]));
}

fcInt3 fcFloat3_isUnordered(fcFloat3 a, fcFloat3 b) {
  return fcInt3_create111(fcMath_isUnorderedf(a.s[0], b.s[0]), fcMath_isUnorderedf(a.s[1], b.s[1]), fcMath_isUnorderedf(a.s[2], b.s[2]));
}

cl_int fcFloat3_any(fcFloat3 a) {
  return a.s[0] != 0.0f || a.s[1] != 0.0f || a.s[2] != 0.0f;
}

cl_int fcFloat3_all(fcFloat3 a) {
  return !(a.s[0] == 0.0f || a.s[1] == 0.0f || a.s[2] == 0.0f);
}

fcFloat3 fcFloat3_neg(fcFloat3 a) {
  return fcFloat3_create111(-a.s[0], -a.s[1], -a.s[2]);
}

fcFloat3 fcFloat3_add(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2]);
}

fcFloat3 fcFloat3_sub(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2]);
}

fcDouble3 fcFloat3_muld(fcFloat3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]));
}

fcFloat3 fcFloat3_mulf(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]));
}

fcDouble3 fcFloat3_mulkd(fcFloat3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k));
}

fcFloat3 fcFloat3_mulkf(fcFloat3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k));
}

fcDouble3 fcFloat3_divd(fcFloat3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]));
}

fcFloat3 fcFloat3_divf(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]));
}

fcDouble3 fcFloat3_divkd(fcFloat3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k));
}

fcFloat3 fcFloat3_divkf(fcFloat3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k));
}

fcFloat3 fcFloat3_cross(fcFloat3 a, fcFloat3 b) {
  cl_float resX = a.s[1] * b.s[2] - a.s[2] * b.s[1];
  cl_float resY = a.s[2] * b.s[0] - a.s[0] * b.s[2];
  cl_float resZ = a.s[0] * b.s[1] - a.s[1] * b.s[0];
  return fcFloat3_create111(resX, resY, resZ);
}

cl_float fcFloat3_dot(fcFloat3 a, fcFloat3 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2];
}

cl_double fcFloat3_distance(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_length(fcFloat3_sub(a, b));
}

cl_double fcFloat3_length(fcFloat3 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2]);
}

fcFloat3 fcFloat3_normalize(fcFloat3 a) {
  cl_double len = fcFloat3_length(a);
  return fcFloat3_create111((cl_float)(a.s[0] / len), (cl_float)(a.s[1] / len), (cl_float)(a.s[2] / len));
}

fcFloat3 fcFloat3_abs(fcFloat3 a) {
  return fcFloat3_create111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]));
}

fcFloat3 fcFloat3_clamp(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]));
}

fcFloat3 fcFloat3_max(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_maxMag(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_min(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_minMag(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_mix(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]));
}

fcFloat3 fcFloat3_clampk(fcFloat3 v, cl_float min, cl_float max) {
  return fcFloat3_create111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max));
}

fcFloat3 fcFloat3_maxk(fcFloat3 x, cl_float y) {
  return fcFloat3_create111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y));
}

fcFloat3 fcFloat3_mink(fcFloat3 x, cl_float y) {
  return fcFloat3_create111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y));
}

fcFloat3 fcFloat3_mixk(fcFloat3 x, fcFloat3 y, cl_float a) {
  return fcFloat3_create111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a));
}

fcFloat3 fcFloat3_acos(fcFloat3 a) {
  return fcFloat3_create111(fcMath_acosf(a.s[0]), fcMath_acosf(a.s[1]), fcMath_acosf(a.s[2]));
}

fcFloat3 fcFloat3_acosh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_acoshf(a.s[0]), fcMath_acoshf(a.s[1]), fcMath_acoshf(a.s[2]));
}

fcFloat3 fcFloat3_asin(fcFloat3 a) {
  return fcFloat3_create111(fcMath_asinf(a.s[0]), fcMath_asinf(a.s[1]), fcMath_asinf(a.s[2]));
}

fcFloat3 fcFloat3_asinh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_asinhf(a.s[0]), fcMath_asinhf(a.s[1]), fcMath_asinhf(a.s[2]));
}

fcFloat3 fcFloat3_atan(fcFloat3 a) {
  return fcFloat3_create111(fcMath_atanf(a.s[0]), fcMath_atanf(a.s[1]), fcMath_atanf(a.s[2]));
}

fcFloat3 fcFloat3_atan2(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_atan2f(a.s[0], b.s[0]), fcMath_atan2f(a.s[1], b.s[1]), fcMath_atan2f(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_atanh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_atanhf(a.s[0]), fcMath_atanhf(a.s[1]), fcMath_atanhf(a.s[2]));
}

fcFloat3 fcFloat3_cbrt(fcFloat3 a) {
  return fcFloat3_create111(fcMath_cbrtf(a.s[0]), fcMath_cbrtf(a.s[1]), fcMath_cbrtf(a.s[2]));
}

fcFloat3 fcFloat3_ceil(fcFloat3 a) {
  return fcFloat3_create111(fcMath_ceilf(a.s[0]), fcMath_ceilf(a.s[1]), fcMath_ceilf(a.s[2]));
}

fcFloat3 fcFloat3_copySign(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_copySignf(a.s[0], b.s[0]), fcMath_copySignf(a.s[1], b.s[1]), fcMath_copySignf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_cos(fcFloat3 a) {
  return fcFloat3_create111(fcMath_cosf(a.s[0]), fcMath_cosf(a.s[1]), fcMath_cosf(a.s[2]));
}

fcFloat3 fcFloat3_cosh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_coshf(a.s[0]), fcMath_coshf(a.s[1]), fcMath_coshf(a.s[2]));
}

fcFloat3 fcFloat3_erf(fcFloat3 a) {
  return fcFloat3_create111(fcMath_erff(a.s[0]), fcMath_erff(a.s[1]), fcMath_erff(a.s[2]));
}

fcFloat3 fcFloat3_erfc(fcFloat3 a) {
  return fcFloat3_create111(fcMath_erfcf(a.s[0]), fcMath_erfcf(a.s[1]), fcMath_erfcf(a.s[2]));
}

fcFloat3 fcFloat3_exp(fcFloat3 a) {
  return fcFloat3_create111(fcMath_expf(a.s[0]), fcMath_expf(a.s[1]), fcMath_expf(a.s[2]));
}

fcFloat3 fcFloat3_exp10(fcFloat3 a) {
  return fcFloat3_create111(fcMath_exp10f(a.s[0]), fcMath_exp10f(a.s[1]), fcMath_exp10f(a.s[2]));
}

fcFloat3 fcFloat3_exp2(fcFloat3 a) {
  return fcFloat3_create111(fcMath_exp2f(a.s[0]), fcMath_exp2f(a.s[1]), fcMath_exp2f(a.s[2]));
}

fcFloat3 fcFloat3_expm1(fcFloat3 a) {
  return fcFloat3_create111(fcMath_expm1f(a.s[0]), fcMath_expm1f(a.s[1]), fcMath_expm1f(a.s[2]));
}

fcFloat3 fcFloat3_fdim(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_fdimf(a.s[0], b.s[0]), fcMath_fdimf(a.s[1], b.s[1]), fcMath_fdimf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_floor(fcFloat3 a) {
  return fcFloat3_create111(fcMath_floorf(a.s[0]), fcMath_floorf(a.s[1]), fcMath_floorf(a.s[2]));
}

fcFloat3 fcFloat3_fma(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_fmaf(a.s[0], b.s[0], c.s[0]), fcMath_fmaf(a.s[1], b.s[1], c.s[1]), fcMath_fmaf(a.s[2], b.s[2], c.s[2]));
}

fcFloat3 fcFloat3_fmod(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_fmodf(a.s[0], b.s[0]), fcMath_fmodf(a.s[1], b.s[1]), fcMath_fmodf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_fract(fcFloat3 a) {
  return fcFloat3_create111(fcMath_fractf(a.s[0]), fcMath_fractf(a.s[1]), fcMath_fractf(a.s[2]));
}

fcFloat3 fcFloat3_frexp(fcFloat3 a) {
  return fcFloat3_create111(fcMath_frexpf(a.s[0]), fcMath_frexpf(a.s[1]), fcMath_frexpf(a.s[2]));
}

fcFloat3 fcFloat3_getExponent(fcFloat3 a) {
  return fcFloat3_create111(fcMath_getExponentf(a.s[0]), fcMath_getExponentf(a.s[1]), fcMath_getExponentf(a.s[2]));
}

fcFloat3 fcFloat3_hypot(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_hypotf(a.s[0], b.s[0]), fcMath_hypotf(a.s[1], b.s[1]), fcMath_hypotf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_lgamma(fcFloat3 a) {
  return fcFloat3_create111(fcMath_lgammaf(a.s[0]), fcMath_lgammaf(a.s[1]), fcMath_lgammaf(a.s[2]));
}

fcFloat3 fcFloat3_log(fcFloat3 a) {
  return fcFloat3_create111(fcMath_logf(a.s[0]), fcMath_logf(a.s[1]), fcMath_logf(a.s[2]));
}

fcFloat3 fcFloat3_log10(fcFloat3 a) {
  return fcFloat3_create111(fcMath_log10f(a.s[0]), fcMath_log10f(a.s[1]), fcMath_log10f(a.s[2]));
}

fcFloat3 fcFloat3_log1p(fcFloat3 a) {
  return fcFloat3_create111(fcMath_log1pf(a.s[0]), fcMath_log1pf(a.s[1]), fcMath_log1pf(a.s[2]));
}

fcFloat3 fcFloat3_log2(fcFloat3 a) {
  return fcFloat3_create111(fcMath_log2f(a.s[0]), fcMath_log2f(a.s[1]), fcMath_log2f(a.s[2]));
}

fcFloat3 fcFloat3_logb(fcFloat3 a) {
  return fcFloat3_create111(fcMath_logbf(a.s[0]), fcMath_logbf(a.s[1]), fcMath_logbf(a.s[2]));
}

fcFloat3 fcFloat3_mad(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_madf(a.s[0], b.s[0], c.s[0]), fcMath_madf(a.s[1], b.s[1], c.s[1]), fcMath_madf(a.s[2], b.s[2], c.s[2]));
}

fcFloat3 fcFloat3_nextAfter(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_nextAfterf(a.s[0], b.s[0]), fcMath_nextAfterf(a.s[1], b.s[1]), fcMath_nextAfterf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_pow(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_powf(a.s[0], b.s[0]), fcMath_powf(a.s[1], b.s[1]), fcMath_powf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_powr(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_powrf(a.s[0], b.s[0]), fcMath_powrf(a.s[1], b.s[1]), fcMath_powrf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_remainder(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_remainderf(a.s[0], b.s[0]), fcMath_remainderf(a.s[1], b.s[1]), fcMath_remainderf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_rint(fcFloat3 a) {
  return fcFloat3_create111(fcMath_rintf(a.s[0]), fcMath_rintf(a.s[1]), fcMath_rintf(a.s[2]));
}

fcFloat3 fcFloat3_round(fcFloat3 a) {
  return fcFloat3_create111(fcMath_roundf(a.s[0]), fcMath_roundf(a.s[1]), fcMath_roundf(a.s[2]));
}

fcFloat3 fcFloat3_rsqrt(fcFloat3 a) {
  return fcFloat3_create111(fcMath_rsqrtf(a.s[0]), fcMath_rsqrtf(a.s[1]), fcMath_rsqrtf(a.s[2]));
}

fcFloat3 fcFloat3_signum(fcFloat3 a) {
  return fcFloat3_create111(fcMath_signumf(a.s[0]), fcMath_signumf(a.s[1]), fcMath_signumf(a.s[2]));
}

fcFloat3 fcFloat3_sin(fcFloat3 a) {
  return fcFloat3_create111(fcMath_sinf(a.s[0]), fcMath_sinf(a.s[1]), fcMath_sinf(a.s[2]));
}

fcFloat3 fcFloat3_sinh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_sinhf(a.s[0]), fcMath_sinhf(a.s[1]), fcMath_sinhf(a.s[2]));
}

fcFloat3 fcFloat3_smoothStep(fcFloat3 a, fcFloat3 b, fcFloat3 c) {
  return fcFloat3_create111(fcMath_smoothStepf(a.s[0], b.s[0], c.s[0]), fcMath_smoothStepf(a.s[1], b.s[1], c.s[1]), fcMath_smoothStepf(a.s[2], b.s[2], c.s[2]));
}

fcFloat3 fcFloat3_sqrt(fcFloat3 a) {
  return fcFloat3_create111(fcMath_sqrtf(a.s[0]), fcMath_sqrtf(a.s[1]), fcMath_sqrtf(a.s[2]));
}

fcFloat3 fcFloat3_step(fcFloat3 a, fcFloat3 b) {
  return fcFloat3_create111(fcMath_stepf(a.s[0], b.s[0]), fcMath_stepf(a.s[1], b.s[1]), fcMath_stepf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_tan(fcFloat3 a) {
  return fcFloat3_create111(fcMath_tanf(a.s[0]), fcMath_tanf(a.s[1]), fcMath_tanf(a.s[2]));
}

fcFloat3 fcFloat3_tanh(fcFloat3 a) {
  return fcFloat3_create111(fcMath_tanhf(a.s[0]), fcMath_tanhf(a.s[1]), fcMath_tanhf(a.s[2]));
}

fcFloat3 fcFloat3_tgamma(fcFloat3 a) {
  return fcFloat3_create111(fcMath_tgammaf(a.s[0]), fcMath_tgammaf(a.s[1]), fcMath_tgammaf(a.s[2]));
}

fcFloat3 fcFloat3_toDegrees(fcFloat3 a) {
  return fcFloat3_create111(fcMath_toDegreesf(a.s[0]), fcMath_toDegreesf(a.s[1]), fcMath_toDegreesf(a.s[2]));
}

fcFloat3 fcFloat3_toRadians(fcFloat3 a) {
  return fcFloat3_create111(fcMath_toRadiansf(a.s[0]), fcMath_toRadiansf(a.s[1]), fcMath_toRadiansf(a.s[2]));
}

fcFloat3 fcFloat3_trunc(fcFloat3 a) {
  return fcFloat3_create111(fcMath_truncf(a.s[0]), fcMath_truncf(a.s[1]), fcMath_truncf(a.s[2]));
}

fcFloat3 fcFloat3_scalb(fcFloat3 a, fcInt3 n) {
  return fcFloat3_create111(fcMath_scalbf(a.s[0], n.s[0]), fcMath_scalbf(a.s[1], n.s[1]), fcMath_scalbf(a.s[2], n.s[2]));
}

fcFloat3 fcFloat3_ldexp(fcFloat3 a, fcInt3 n) {
  return fcFloat3_create111(fcMath_ldexpf(a.s[0], n.s[0]), fcMath_ldexpf(a.s[1], n.s[1]), fcMath_ldexpf(a.s[2], n.s[2]));
}

fcFloat3 fcFloat3_pown(fcFloat3 a, fcInt3 b) {
  return fcFloat3_create111(fcMath_pownf(a.s[0], b.s[0]), fcMath_pownf(a.s[1], b.s[1]), fcMath_pownf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_rootn(fcFloat3 a, fcInt3 b) {
  return fcFloat3_create111(fcMath_rootnf(a.s[0], b.s[0]), fcMath_rootnf(a.s[1], b.s[1]), fcMath_rootnf(a.s[2], b.s[2]));
}

fcFloat3 fcFloat3_smoothStepk(fcFloat3 a, fcFloat3 b, cl_float c) {
  return fcFloat3_create111(fcMath_smoothStepf(a.s[0], b.s[0], c), fcMath_smoothStepf(a.s[1], b.s[1], c), fcMath_smoothStepf(a.s[2], b.s[2], c));
}


//
// fcFloat4
//

fcFloat4 fcFloat4_create1(cl_float v) {
  return fcFloat4_create1111(v, v, v, v);
}

void fcFloat4_set1(fcFloat4* self, cl_float v) {
  fcFloat4_set1111(self, v, v, v, v);
}

fcFloat4 fcFloat4_create1111(cl_float x, cl_float y, cl_float z, cl_float w) {
  fcFloat4 result;
  fcFloat4_set1111(&result, x, y, z, w);
  return result;
}

void fcFloat4_set1111(fcFloat4* self, cl_float x, cl_float y, cl_float z, cl_float w) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
}

fcFloat4 fcFloat4_create112(cl_float x, cl_float y, fcFloat2 vec1) {
  return fcFloat4_create1111(x, y, vec1.s[0], vec1.s[1]);
}

void fcFloat4_set112(fcFloat4* self, cl_float x, cl_float y, fcFloat2 vec1) {
  fcFloat4_set1111(self, x, y, vec1.s[0], vec1.s[1]);
}

fcFloat4 fcFloat4_create121(cl_float x, fcFloat2 vec1, cl_float w) {
  return fcFloat4_create1111(x, vec1.s[0], vec1.s[1], w);
}

void fcFloat4_set121(fcFloat4* self, cl_float x, fcFloat2 vec1, cl_float w) {
  fcFloat4_set1111(self, x, vec1.s[0], vec1.s[1], w);
}

fcFloat4 fcFloat4_create13(cl_float x, fcFloat3 vec1) {
  return fcFloat4_create1111(x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcFloat4_set13(fcFloat4* self, cl_float x, fcFloat3 vec1) {
  fcFloat4_set1111(self, x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcFloat4 fcFloat4_create211(fcFloat2 vec1, cl_float z, cl_float w) {
  return fcFloat4_create1111(vec1.s[0], vec1.s[1], z, w);
}

void fcFloat4_set211(fcFloat4* self, fcFloat2 vec1, cl_float z, cl_float w) {
  fcFloat4_set1111(self, vec1.s[0], vec1.s[1], z, w);
}

fcFloat4 fcFloat4_create22(fcFloat2 vec1, fcFloat2 vec2) {
  return fcFloat4_create1111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcFloat4_set22(fcFloat4* self, fcFloat2 vec1, fcFloat2 vec2) {
  fcFloat4_set1111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcFloat4 fcFloat4_create31(fcFloat3 vec1, cl_float w) {
  return fcFloat4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], w);
}

void fcFloat4_set31(fcFloat4* self, fcFloat3 vec1, cl_float w) {
  fcFloat4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], w);
}

fcFloat4 fcFloat4_create4(fcFloat4 vec1) {
  return fcFloat4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcFloat4_set4(fcFloat4* self, fcFloat4 vec1) {
  fcFloat4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcFloat2 fcFloat4_odd(fcFloat4 a) {
  return fcFloat2_create11(a.s[1], a.s[3]);
}

fcFloat2 fcFloat4_even(fcFloat4 a) {
  return fcFloat2_create11(a.s[0], a.s[2]);
}

fcByte4 fcFloat4_convertByte4(fcFloat4 a) {
  return fcByte4_create1111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]));
}

fcShort4 fcFloat4_convertShort4(fcFloat4 a) {
  return fcShort4_create1111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]));
}

fcInt4 fcFloat4_convertInt4(fcFloat4 a) {
  return fcInt4_create1111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]));
}

fcLong4 fcFloat4_convertLong4(fcFloat4 a) {
  return fcLong4_create1111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]));
}

fcDouble4 fcFloat4_convertDouble4(fcFloat4 a) {
  return fcDouble4_create1111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]));
}

fcFloat2 fcFloat4_asFloat2(fcFloat4 a) {
  return fcFloat2_create11(a.s[0], a.s[1]);
}

fcFloat3 fcFloat4_asFloat3(fcFloat4 a) {
  return fcFloat3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcFloat4_isEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
}

fcInt4 fcFloat4_isNotEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
}

fcInt4 fcFloat4_isGreater(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
}

fcInt4 fcFloat4_isGreaterEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
}

fcInt4 fcFloat4_isLess(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
}

fcInt4 fcFloat4_isLessEqual(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
}

fcFloat4 fcFloat4_select(fcFloat4 a, fcFloat4 b, fcInt4 c) {
  return fcFloat4_create1111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcFloat4_isFinite(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isFinitef(a.s[0]), fcMath_isFinitef(a.s[1]), fcMath_isFinitef(a.s[2]), fcMath_isFinitef(a.s[3]));
}

fcInt4 fcFloat4_isInf(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isInff(a.s[0]), fcMath_isInff(a.s[1]), fcMath_isInff(a.s[2]), fcMath_isInff(a.s[3]));
}

fcInt4 fcFloat4_isNaN(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isNaNf(a.s[0]), fcMath_isNaNf(a.s[1]), fcMath_isNaNf(a.s[2]), fcMath_isNaNf(a.s[3]));
}

fcInt4 fcFloat4_isNormal(fcFloat4 a) {
  return fcInt4_create1111(fcMath_isNormalf(a.s[0]), fcMath_isNormalf(a.s[1]), fcMath_isNormalf(a.s[2]), fcMath_isNormalf(a.s[3]));
}

fcInt4 fcFloat4_isOrdered(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(fcMath_isOrderedf(a.s[0], b.s[0]), fcMath_isOrderedf(a.s[1], b.s[1]), fcMath_isOrderedf(a.s[2], b.s[2]), fcMath_isOrderedf(a.s[3], b.s[3]));
}

fcInt4 fcFloat4_isUnordered(fcFloat4 a, fcFloat4 b) {
  return fcInt4_create1111(fcMath_isUnorderedf(a.s[0], b.s[0]), fcMath_isUnorderedf(a.s[1], b.s[1]), fcMath_isUnorderedf(a.s[2], b.s[2]), fcMath_isUnorderedf(a.s[3], b.s[3]));
}

cl_int fcFloat4_any(fcFloat4 a) {
  return a.s[0] != 0.0f || a.s[1] != 0.0f || a.s[2] != 0.0f || a.s[3] != 0.0f;
}

cl_int fcFloat4_all(fcFloat4 a) {
  return !(a.s[0] == 0.0f || a.s[1] == 0.0f || a.s[2] == 0.0f || a.s[3] == 0.0f);
}

fcFloat4 fcFloat4_neg(fcFloat4 a) {
  return fcFloat4_create1111(-a.s[0], -a.s[1], -a.s[2], -a.s[3]);
}

fcFloat4 fcFloat4_add(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3]);
}

fcFloat4 fcFloat4_sub(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3]);
}

fcDouble4 fcFloat4_muld(fcFloat4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]));
}

fcFloat4 fcFloat4_mulf(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]));
}

fcDouble4 fcFloat4_mulkd(fcFloat4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k));
}

fcFloat4 fcFloat4_mulkf(fcFloat4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k));
}

fcDouble4 fcFloat4_divd(fcFloat4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]));
}

fcFloat4 fcFloat4_divf(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]));
}

fcDouble4 fcFloat4_divkd(fcFloat4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k));
}

fcFloat4 fcFloat4_divkf(fcFloat4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k));
}

fcFloat4 fcFloat4_cross(fcFloat4 a, fcFloat4 b) {
  cl_float resX = a.s[1] * b.s[2] - a.s[2] * b.s[1];
  cl_float resY = a.s[2] * b.s[0] - a.s[0] * b.s[2];
  cl_float resZ = a.s[0] * b.s[1] - a.s[1] * b.s[0];
  return fcFloat4_create1111(resX, resY, resZ, 0.0f);
}

cl_float fcFloat4_dot(fcFloat4 a, fcFloat4 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2] + a.s[3] * b.s[3];
}

cl_double fcFloat4_distance(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_length(fcFloat4_sub(a, b));
}

cl_double fcFloat4_length(fcFloat4 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2] + a.s[3] * a.s[3]);
}

fcFloat4 fcFloat4_normalize(fcFloat4 a) {
  cl_double len = fcFloat4_length(a);
  return fcFloat4_create1111((cl_float)(a.s[0] / len), (cl_float)(a.s[1] / len), (cl_float)(a.s[2] / len), (cl_float)(a.s[3] / len));
}

fcFloat4 fcFloat4_abs(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]));
}

fcFloat4 fcFloat4_clamp(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]));
}

fcFloat4 fcFloat4_max(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_maxMag(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_min(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_minMag(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_mix(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]));
}

fcFloat4 fcFloat4_clampk(fcFloat4 v, cl_float min, cl_float max) {
  return fcFloat4_create1111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max));
}

fcFloat4 fcFloat4_maxk(fcFloat4 x, cl_float y) {
  return fcFloat4_create1111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y));
}

fcFloat4 fcFloat4_mink(fcFloat4 x, cl_float y) {
  return fcFloat4_create1111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y));
}

fcFloat4 fcFloat4_mixk(fcFloat4 x, fcFloat4 y, cl_float a) {
  return fcFloat4_create1111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a));
}

fcFloat4 fcFloat4_acos(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_acosf(a.s[0]), fcMath_acosf(a.s[1]), fcMath_acosf(a.s[2]), fcMath_acosf(a.s[3]));
}

fcFloat4 fcFloat4_acosh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_acoshf(a.s[0]), fcMath_acoshf(a.s[1]), fcMath_acoshf(a.s[2]), fcMath_acoshf(a.s[3]));
}

fcFloat4 fcFloat4_asin(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_asinf(a.s[0]), fcMath_asinf(a.s[1]), fcMath_asinf(a.s[2]), fcMath_asinf(a.s[3]));
}

fcFloat4 fcFloat4_asinh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_asinhf(a.s[0]), fcMath_asinhf(a.s[1]), fcMath_asinhf(a.s[2]), fcMath_asinhf(a.s[3]));
}

fcFloat4 fcFloat4_atan(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_atanf(a.s[0]), fcMath_atanf(a.s[1]), fcMath_atanf(a.s[2]), fcMath_atanf(a.s[3]));
}

fcFloat4 fcFloat4_atan2(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_atan2f(a.s[0], b.s[0]), fcMath_atan2f(a.s[1], b.s[1]), fcMath_atan2f(a.s[2], b.s[2]), fcMath_atan2f(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_atanh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_atanhf(a.s[0]), fcMath_atanhf(a.s[1]), fcMath_atanhf(a.s[2]), fcMath_atanhf(a.s[3]));
}

fcFloat4 fcFloat4_cbrt(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_cbrtf(a.s[0]), fcMath_cbrtf(a.s[1]), fcMath_cbrtf(a.s[2]), fcMath_cbrtf(a.s[3]));
}

fcFloat4 fcFloat4_ceil(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_ceilf(a.s[0]), fcMath_ceilf(a.s[1]), fcMath_ceilf(a.s[2]), fcMath_ceilf(a.s[3]));
}

fcFloat4 fcFloat4_copySign(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_copySignf(a.s[0], b.s[0]), fcMath_copySignf(a.s[1], b.s[1]), fcMath_copySignf(a.s[2], b.s[2]), fcMath_copySignf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_cos(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_cosf(a.s[0]), fcMath_cosf(a.s[1]), fcMath_cosf(a.s[2]), fcMath_cosf(a.s[3]));
}

fcFloat4 fcFloat4_cosh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_coshf(a.s[0]), fcMath_coshf(a.s[1]), fcMath_coshf(a.s[2]), fcMath_coshf(a.s[3]));
}

fcFloat4 fcFloat4_erf(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_erff(a.s[0]), fcMath_erff(a.s[1]), fcMath_erff(a.s[2]), fcMath_erff(a.s[3]));
}

fcFloat4 fcFloat4_erfc(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_erfcf(a.s[0]), fcMath_erfcf(a.s[1]), fcMath_erfcf(a.s[2]), fcMath_erfcf(a.s[3]));
}

fcFloat4 fcFloat4_exp(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_expf(a.s[0]), fcMath_expf(a.s[1]), fcMath_expf(a.s[2]), fcMath_expf(a.s[3]));
}

fcFloat4 fcFloat4_exp10(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_exp10f(a.s[0]), fcMath_exp10f(a.s[1]), fcMath_exp10f(a.s[2]), fcMath_exp10f(a.s[3]));
}

fcFloat4 fcFloat4_exp2(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_exp2f(a.s[0]), fcMath_exp2f(a.s[1]), fcMath_exp2f(a.s[2]), fcMath_exp2f(a.s[3]));
}

fcFloat4 fcFloat4_expm1(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_expm1f(a.s[0]), fcMath_expm1f(a.s[1]), fcMath_expm1f(a.s[2]), fcMath_expm1f(a.s[3]));
}

fcFloat4 fcFloat4_fdim(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_fdimf(a.s[0], b.s[0]), fcMath_fdimf(a.s[1], b.s[1]), fcMath_fdimf(a.s[2], b.s[2]), fcMath_fdimf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_floor(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_floorf(a.s[0]), fcMath_floorf(a.s[1]), fcMath_floorf(a.s[2]), fcMath_floorf(a.s[3]));
}

fcFloat4 fcFloat4_fma(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_fmaf(a.s[0], b.s[0], c.s[0]), fcMath_fmaf(a.s[1], b.s[1], c.s[1]), fcMath_fmaf(a.s[2], b.s[2], c.s[2]), fcMath_fmaf(a.s[3], b.s[3], c.s[3]));
}

fcFloat4 fcFloat4_fmod(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_fmodf(a.s[0], b.s[0]), fcMath_fmodf(a.s[1], b.s[1]), fcMath_fmodf(a.s[2], b.s[2]), fcMath_fmodf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_fract(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_fractf(a.s[0]), fcMath_fractf(a.s[1]), fcMath_fractf(a.s[2]), fcMath_fractf(a.s[3]));
}

fcFloat4 fcFloat4_frexp(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_frexpf(a.s[0]), fcMath_frexpf(a.s[1]), fcMath_frexpf(a.s[2]), fcMath_frexpf(a.s[3]));
}

fcFloat4 fcFloat4_getExponent(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_getExponentf(a.s[0]), fcMath_getExponentf(a.s[1]), fcMath_getExponentf(a.s[2]), fcMath_getExponentf(a.s[3]));
}

fcFloat4 fcFloat4_hypot(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_hypotf(a.s[0], b.s[0]), fcMath_hypotf(a.s[1], b.s[1]), fcMath_hypotf(a.s[2], b.s[2]), fcMath_hypotf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_lgamma(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_lgammaf(a.s[0]), fcMath_lgammaf(a.s[1]), fcMath_lgammaf(a.s[2]), fcMath_lgammaf(a.s[3]));
}

fcFloat4 fcFloat4_log(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_logf(a.s[0]), fcMath_logf(a.s[1]), fcMath_logf(a.s[2]), fcMath_logf(a.s[3]));
}

fcFloat4 fcFloat4_log10(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_log10f(a.s[0]), fcMath_log10f(a.s[1]), fcMath_log10f(a.s[2]), fcMath_log10f(a.s[3]));
}

fcFloat4 fcFloat4_log1p(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_log1pf(a.s[0]), fcMath_log1pf(a.s[1]), fcMath_log1pf(a.s[2]), fcMath_log1pf(a.s[3]));
}

fcFloat4 fcFloat4_log2(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_log2f(a.s[0]), fcMath_log2f(a.s[1]), fcMath_log2f(a.s[2]), fcMath_log2f(a.s[3]));
}

fcFloat4 fcFloat4_logb(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_logbf(a.s[0]), fcMath_logbf(a.s[1]), fcMath_logbf(a.s[2]), fcMath_logbf(a.s[3]));
}

fcFloat4 fcFloat4_mad(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_madf(a.s[0], b.s[0], c.s[0]), fcMath_madf(a.s[1], b.s[1], c.s[1]), fcMath_madf(a.s[2], b.s[2], c.s[2]), fcMath_madf(a.s[3], b.s[3], c.s[3]));
}

fcFloat4 fcFloat4_nextAfter(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_nextAfterf(a.s[0], b.s[0]), fcMath_nextAfterf(a.s[1], b.s[1]), fcMath_nextAfterf(a.s[2], b.s[2]), fcMath_nextAfterf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_pow(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_powf(a.s[0], b.s[0]), fcMath_powf(a.s[1], b.s[1]), fcMath_powf(a.s[2], b.s[2]), fcMath_powf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_powr(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_powrf(a.s[0], b.s[0]), fcMath_powrf(a.s[1], b.s[1]), fcMath_powrf(a.s[2], b.s[2]), fcMath_powrf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_remainder(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_remainderf(a.s[0], b.s[0]), fcMath_remainderf(a.s[1], b.s[1]), fcMath_remainderf(a.s[2], b.s[2]), fcMath_remainderf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_rint(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_rintf(a.s[0]), fcMath_rintf(a.s[1]), fcMath_rintf(a.s[2]), fcMath_rintf(a.s[3]));
}

fcFloat4 fcFloat4_round(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_roundf(a.s[0]), fcMath_roundf(a.s[1]), fcMath_roundf(a.s[2]), fcMath_roundf(a.s[3]));
}

fcFloat4 fcFloat4_rsqrt(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_rsqrtf(a.s[0]), fcMath_rsqrtf(a.s[1]), fcMath_rsqrtf(a.s[2]), fcMath_rsqrtf(a.s[3]));
}

fcFloat4 fcFloat4_signum(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_signumf(a.s[0]), fcMath_signumf(a.s[1]), fcMath_signumf(a.s[2]), fcMath_signumf(a.s[3]));
}

fcFloat4 fcFloat4_sin(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_sinf(a.s[0]), fcMath_sinf(a.s[1]), fcMath_sinf(a.s[2]), fcMath_sinf(a.s[3]));
}

fcFloat4 fcFloat4_sinh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_sinhf(a.s[0]), fcMath_sinhf(a.s[1]), fcMath_sinhf(a.s[2]), fcMath_sinhf(a.s[3]));
}

fcFloat4 fcFloat4_smoothStep(fcFloat4 a, fcFloat4 b, fcFloat4 c) {
  return fcFloat4_create1111(fcMath_smoothStepf(a.s[0], b.s[0], c.s[0]), fcMath_smoothStepf(a.s[1], b.s[1], c.s[1]), fcMath_smoothStepf(a.s[2], b.s[2], c.s[2]), fcMath_smoothStepf(a.s[3], b.s[3], c.s[3]));
}

fcFloat4 fcFloat4_sqrt(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_sqrtf(a.s[0]), fcMath_sqrtf(a.s[1]), fcMath_sqrtf(a.s[2]), fcMath_sqrtf(a.s[3]));
}

fcFloat4 fcFloat4_step(fcFloat4 a, fcFloat4 b) {
  return fcFloat4_create1111(fcMath_stepf(a.s[0], b.s[0]), fcMath_stepf(a.s[1], b.s[1]), fcMath_stepf(a.s[2], b.s[2]), fcMath_stepf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_tan(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_tanf(a.s[0]), fcMath_tanf(a.s[1]), fcMath_tanf(a.s[2]), fcMath_tanf(a.s[3]));
}

fcFloat4 fcFloat4_tanh(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_tanhf(a.s[0]), fcMath_tanhf(a.s[1]), fcMath_tanhf(a.s[2]), fcMath_tanhf(a.s[3]));
}

fcFloat4 fcFloat4_tgamma(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_tgammaf(a.s[0]), fcMath_tgammaf(a.s[1]), fcMath_tgammaf(a.s[2]), fcMath_tgammaf(a.s[3]));
}

fcFloat4 fcFloat4_toDegrees(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_toDegreesf(a.s[0]), fcMath_toDegreesf(a.s[1]), fcMath_toDegreesf(a.s[2]), fcMath_toDegreesf(a.s[3]));
}

fcFloat4 fcFloat4_toRadians(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_toRadiansf(a.s[0]), fcMath_toRadiansf(a.s[1]), fcMath_toRadiansf(a.s[2]), fcMath_toRadiansf(a.s[3]));
}

fcFloat4 fcFloat4_trunc(fcFloat4 a) {
  return fcFloat4_create1111(fcMath_truncf(a.s[0]), fcMath_truncf(a.s[1]), fcMath_truncf(a.s[2]), fcMath_truncf(a.s[3]));
}

fcFloat4 fcFloat4_scalb(fcFloat4 a, fcInt4 n) {
  return fcFloat4_create1111(fcMath_scalbf(a.s[0], n.s[0]), fcMath_scalbf(a.s[1], n.s[1]), fcMath_scalbf(a.s[2], n.s[2]), fcMath_scalbf(a.s[3], n.s[3]));
}

fcFloat4 fcFloat4_ldexp(fcFloat4 a, fcInt4 n) {
  return fcFloat4_create1111(fcMath_ldexpf(a.s[0], n.s[0]), fcMath_ldexpf(a.s[1], n.s[1]), fcMath_ldexpf(a.s[2], n.s[2]), fcMath_ldexpf(a.s[3], n.s[3]));
}

fcFloat4 fcFloat4_pown(fcFloat4 a, fcInt4 b) {
  return fcFloat4_create1111(fcMath_pownf(a.s[0], b.s[0]), fcMath_pownf(a.s[1], b.s[1]), fcMath_pownf(a.s[2], b.s[2]), fcMath_pownf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_rootn(fcFloat4 a, fcInt4 b) {
  return fcFloat4_create1111(fcMath_rootnf(a.s[0], b.s[0]), fcMath_rootnf(a.s[1], b.s[1]), fcMath_rootnf(a.s[2], b.s[2]), fcMath_rootnf(a.s[3], b.s[3]));
}

fcFloat4 fcFloat4_smoothStepk(fcFloat4 a, fcFloat4 b, cl_float c) {
  return fcFloat4_create1111(fcMath_smoothStepf(a.s[0], b.s[0], c), fcMath_smoothStepf(a.s[1], b.s[1], c), fcMath_smoothStepf(a.s[2], b.s[2], c), fcMath_smoothStepf(a.s[3], b.s[3], c));
}


//
// fcFloat8
//

fcFloat8 fcFloat8_create1(cl_float v) {
  return fcFloat8_create11111111(v, v, v, v, v, v, v, v);
}

void fcFloat8_set1(fcFloat8* self, cl_float v) {
  fcFloat8_set11111111(self, v, v, v, v, v, v, v, v);
}

fcFloat8 fcFloat8_create11111111(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8 result;
  fcFloat8_set11111111(&result, x, y, z, w, s4, s5, s6, s7);
  return result;
}

void fcFloat8_set11111111(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
  self->s[4] = s4;
  self->s[5] = s5;
  self->s[6] = s6;
  self->s[7] = s7;
}

fcFloat8 fcFloat8_create1111112(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec1) {
  return fcFloat8_create11111111(x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

void fcFloat8_set1111112(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec1) {
  fcFloat8_set11111111(self, x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

fcFloat8 fcFloat8_create1111121(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat2 vec1, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

void fcFloat8_set1111121(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat2 vec1, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

fcFloat8 fcFloat8_create111113(cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat3 vec1) {
  return fcFloat8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcFloat8_set111113(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, cl_float s4, fcFloat3 vec1) {
  fcFloat8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcFloat8 fcFloat8_create1111211(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

void fcFloat8_set1111211(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

fcFloat8 fcFloat8_create111122(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcFloat8_set111122(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat2 vec1, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create111131(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat3 vec1, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

void fcFloat8_set111131(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat3 vec1, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

fcFloat8 fcFloat8_create11114(cl_float x, cl_float y, cl_float z, cl_float w, fcFloat4 vec1) {
  return fcFloat8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcFloat8_set11114(fcFloat8* self, cl_float x, cl_float y, cl_float z, cl_float w, fcFloat4 vec1) {
  fcFloat8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcFloat8 fcFloat8_create1112111(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

void fcFloat8_set1112111(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

fcFloat8 fcFloat8_create111212(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set111212(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create111221(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set111221(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create11123(cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set11123(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat2 vec1, fcFloat3 vec2) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create111311(cl_float x, cl_float y, cl_float z, fcFloat3 vec1, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

void fcFloat8_set111311(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat3 vec1, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

fcFloat8 fcFloat8_create11132(cl_float x, cl_float y, cl_float z, fcFloat3 vec1, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

void fcFloat8_set11132(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat3 vec1, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create11141(cl_float x, cl_float y, cl_float z, fcFloat4 vec1, cl_float s7) {
  return fcFloat8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

void fcFloat8_set11141(fcFloat8* self, cl_float x, cl_float y, cl_float z, fcFloat4 vec1, cl_float s7) {
  fcFloat8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

fcFloat8 fcFloat8_create1121111(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

void fcFloat8_set1121111(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create112112(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set112112(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create112121(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set112121(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create11213(cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set11213(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, cl_float s4, fcFloat3 vec2) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create112211(cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

void fcFloat8_set112211(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

fcFloat8 fcFloat8_create11222(cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set11222(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create11231(cl_float x, cl_float y, fcFloat2 vec1, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcFloat8_set11231(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat3 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcFloat8 fcFloat8_create1124(cl_float x, cl_float y, fcFloat2 vec1, fcFloat4 vec2) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcFloat8_set1124(fcFloat8* self, cl_float x, cl_float y, fcFloat2 vec1, fcFloat4 vec2) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcFloat8 fcFloat8_create113111(cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

void fcFloat8_set113111(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

fcFloat8 fcFloat8_create11312(cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set11312(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create11321(cl_float x, cl_float y, fcFloat3 vec1, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set11321(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create1133(cl_float x, cl_float y, fcFloat3 vec1, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set1133(fcFloat8* self, cl_float x, cl_float y, fcFloat3 vec1, fcFloat3 vec2) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create11411(cl_float x, cl_float y, fcFloat4 vec1, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

void fcFloat8_set11411(fcFloat8* self, cl_float x, cl_float y, fcFloat4 vec1, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

fcFloat8 fcFloat8_create1142(cl_float x, cl_float y, fcFloat4 vec1, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

void fcFloat8_set1142(fcFloat8* self, cl_float x, cl_float y, fcFloat4 vec1, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create1211111(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

void fcFloat8_set1211111(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create121112(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set121112(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create121121(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set121121(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create12113(cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set12113(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, cl_float s4, fcFloat3 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create121211(cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcFloat8_set121211(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcFloat8 fcFloat8_create12122(cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set12122(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create12131(cl_float x, fcFloat2 vec1, cl_float w, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcFloat8_set12131(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat3 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcFloat8 fcFloat8_create1214(cl_float x, fcFloat2 vec1, cl_float w, fcFloat4 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcFloat8_set1214(fcFloat8* self, cl_float x, fcFloat2 vec1, cl_float w, fcFloat4 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcFloat8 fcFloat8_create122111(cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcFloat8_set122111(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcFloat8 fcFloat8_create12212(cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcFloat8_set12212(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create12221(cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcFloat8_set12221(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcFloat8 fcFloat8_create1223(cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcFloat8_set1223(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcFloat8 fcFloat8_create12311(cl_float x, fcFloat2 vec1, fcFloat3 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcFloat8_set12311(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat3 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcFloat8 fcFloat8_create1232(cl_float x, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set1232(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create1241(cl_float x, fcFloat2 vec1, fcFloat4 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcFloat8_set1241(fcFloat8* self, cl_float x, fcFloat2 vec1, fcFloat4 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcFloat8 fcFloat8_create131111(cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

void fcFloat8_set131111(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create13112(cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set13112(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create13121(cl_float x, fcFloat3 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set13121(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create1313(cl_float x, fcFloat3 vec1, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set1313(fcFloat8* self, cl_float x, fcFloat3 vec1, cl_float s4, fcFloat3 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create13211(cl_float x, fcFloat3 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

void fcFloat8_set13211(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

fcFloat8 fcFloat8_create1322(cl_float x, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set1322(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create1331(cl_float x, fcFloat3 vec1, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcFloat8_set1331(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat3 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcFloat8 fcFloat8_create134(cl_float x, fcFloat3 vec1, fcFloat4 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcFloat8_set134(fcFloat8* self, cl_float x, fcFloat3 vec1, fcFloat4 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcFloat8 fcFloat8_create14111(cl_float x, fcFloat4 vec1, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

void fcFloat8_set14111(fcFloat8* self, cl_float x, fcFloat4 vec1, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

fcFloat8 fcFloat8_create1412(cl_float x, fcFloat4 vec1, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set1412(fcFloat8* self, cl_float x, fcFloat4 vec1, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create1421(cl_float x, fcFloat4 vec1, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set1421(fcFloat8* self, cl_float x, fcFloat4 vec1, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create143(cl_float x, fcFloat4 vec1, fcFloat3 vec2) {
  return fcFloat8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set143(fcFloat8* self, cl_float x, fcFloat4 vec1, fcFloat3 vec2) {
  fcFloat8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create2111111(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

void fcFloat8_set2111111(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create211112(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set211112(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create211121(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set211121(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create21113(fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set21113(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, cl_float s4, fcFloat3 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create211211(fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcFloat8_set211211(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

fcFloat8 fcFloat8_create21122(fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set21122(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create21131(fcFloat2 vec1, cl_float z, cl_float w, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcFloat8_set21131(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat3 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcFloat8 fcFloat8_create2114(fcFloat2 vec1, cl_float z, cl_float w, fcFloat4 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcFloat8_set2114(fcFloat8* self, fcFloat2 vec1, cl_float z, cl_float w, fcFloat4 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcFloat8 fcFloat8_create212111(fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcFloat8_set212111(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcFloat8 fcFloat8_create21212(fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcFloat8_set21212(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create21221(fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcFloat8_set21221(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcFloat8 fcFloat8_create2123(fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcFloat8_set2123(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat2 vec2, fcFloat3 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcFloat8 fcFloat8_create21311(fcFloat2 vec1, cl_float z, fcFloat3 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcFloat8_set21311(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat3 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcFloat8 fcFloat8_create2132(fcFloat2 vec1, cl_float z, fcFloat3 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set2132(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat3 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create2141(fcFloat2 vec1, cl_float z, fcFloat4 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcFloat8_set2141(fcFloat8* self, fcFloat2 vec1, cl_float z, fcFloat4 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcFloat8 fcFloat8_create221111(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

void fcFloat8_set221111(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create22112(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

void fcFloat8_set22112(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, cl_float s5, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create22121(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

void fcFloat8_set22121(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat2 vec3, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

fcFloat8 fcFloat8_create2213(fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcFloat8_set2213(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, cl_float s4, fcFloat3 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcFloat8 fcFloat8_create22211(fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

void fcFloat8_set22211(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

fcFloat8 fcFloat8_create2222(fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, fcFloat2 vec4) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

void fcFloat8_set2222(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat2 vec3, fcFloat2 vec4) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

fcFloat8 fcFloat8_create2231(fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

void fcFloat8_set2231(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat3 vec3, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

fcFloat8 fcFloat8_create224(fcFloat2 vec1, fcFloat2 vec2, fcFloat4 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

void fcFloat8_set224(fcFloat8* self, fcFloat2 vec1, fcFloat2 vec2, fcFloat4 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

fcFloat8 fcFloat8_create23111(fcFloat2 vec1, fcFloat3 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

void fcFloat8_set23111(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

fcFloat8 fcFloat8_create2312(fcFloat2 vec1, fcFloat3 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

void fcFloat8_set2312(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, cl_float s5, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create2321(fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

void fcFloat8_set2321(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, fcFloat2 vec3, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

fcFloat8 fcFloat8_create233(fcFloat2 vec1, fcFloat3 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcFloat8_set233(fcFloat8* self, fcFloat2 vec1, fcFloat3 vec2, fcFloat3 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcFloat8 fcFloat8_create2411(fcFloat2 vec1, fcFloat4 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

void fcFloat8_set2411(fcFloat8* self, fcFloat2 vec1, fcFloat4 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

fcFloat8 fcFloat8_create242(fcFloat2 vec1, fcFloat4 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set242(fcFloat8* self, fcFloat2 vec1, fcFloat4 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create311111(fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

void fcFloat8_set311111(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create31112(fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set31112(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create31121(fcFloat3 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set31121(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create3113(fcFloat3 vec1, cl_float w, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set3113(fcFloat8* self, fcFloat3 vec1, cl_float w, cl_float s4, fcFloat3 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create31211(fcFloat3 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcFloat8_set31211(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat2 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcFloat8 fcFloat8_create3122(fcFloat3 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set3122(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat2 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create3131(fcFloat3 vec1, cl_float w, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcFloat8_set3131(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat3 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcFloat8 fcFloat8_create314(fcFloat3 vec1, cl_float w, fcFloat4 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcFloat8_set314(fcFloat8* self, fcFloat3 vec1, cl_float w, fcFloat4 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcFloat8 fcFloat8_create32111(fcFloat3 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcFloat8_set32111(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcFloat8 fcFloat8_create3212(fcFloat3 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcFloat8_set3212(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, cl_float s5, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create3221(fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcFloat8_set3221(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, fcFloat2 vec3, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcFloat8 fcFloat8_create323(fcFloat3 vec1, fcFloat2 vec2, fcFloat3 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcFloat8_set323(fcFloat8* self, fcFloat3 vec1, fcFloat2 vec2, fcFloat3 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcFloat8 fcFloat8_create3311(fcFloat3 vec1, fcFloat3 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcFloat8_set3311(fcFloat8* self, fcFloat3 vec1, fcFloat3 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcFloat8 fcFloat8_create332(fcFloat3 vec1, fcFloat3 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set332(fcFloat8* self, fcFloat3 vec1, fcFloat3 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create341(fcFloat3 vec1, fcFloat4 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcFloat8_set341(fcFloat8* self, fcFloat3 vec1, fcFloat4 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcFloat8 fcFloat8_create41111(fcFloat4 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

void fcFloat8_set41111(fcFloat8* self, fcFloat4 vec1, cl_float s4, cl_float s5, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

fcFloat8 fcFloat8_create4112(fcFloat4 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcFloat8_set4112(fcFloat8* self, fcFloat4 vec1, cl_float s4, cl_float s5, fcFloat2 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

fcFloat8 fcFloat8_create4121(fcFloat4 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

void fcFloat8_set4121(fcFloat8* self, fcFloat4 vec1, cl_float s4, fcFloat2 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

fcFloat8 fcFloat8_create413(fcFloat4 vec1, cl_float s4, fcFloat3 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcFloat8_set413(fcFloat8* self, fcFloat4 vec1, cl_float s4, fcFloat3 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcFloat8 fcFloat8_create4211(fcFloat4 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

void fcFloat8_set4211(fcFloat8* self, fcFloat4 vec1, fcFloat2 vec2, cl_float s6, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

fcFloat8 fcFloat8_create422(fcFloat4 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcFloat8_set422(fcFloat8* self, fcFloat4 vec1, fcFloat2 vec2, fcFloat2 vec3) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcFloat8 fcFloat8_create431(fcFloat4 vec1, fcFloat3 vec2, cl_float s7) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcFloat8_set431(fcFloat8* self, fcFloat4 vec1, fcFloat3 vec2, cl_float s7) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcFloat8 fcFloat8_create44(fcFloat4 vec1, fcFloat4 vec2) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcFloat8_set44(fcFloat8* self, fcFloat4 vec1, fcFloat4 vec2) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcFloat8 fcFloat8_create8(fcFloat8 vec1) {
  return fcFloat8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

void fcFloat8_set8(fcFloat8* self, fcFloat8 vec1) {
  fcFloat8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

fcFloat4 fcFloat8_odd(fcFloat8 a) {
  return fcFloat4_create1111(a.s[1], a.s[3], a.s[5], a.s[7]);
}

fcFloat4 fcFloat8_even(fcFloat8 a) {
  return fcFloat4_create1111(a.s[0], a.s[2], a.s[4], a.s[6]);
}

fcByte8 fcFloat8_convertByte8(fcFloat8 a) {
  return fcByte8_create11111111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]), (cl_byte)(a.s[4]), (cl_byte)(a.s[5]), (cl_byte)(a.s[6]), (cl_byte)(a.s[7]));
}

fcShort8 fcFloat8_convertShort8(fcFloat8 a) {
  return fcShort8_create11111111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]), (cl_short)(a.s[4]), (cl_short)(a.s[5]), (cl_short)(a.s[6]), (cl_short)(a.s[7]));
}

fcInt8 fcFloat8_convertInt8(fcFloat8 a) {
  return fcInt8_create11111111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]), (cl_int)(a.s[4]), (cl_int)(a.s[5]), (cl_int)(a.s[6]), (cl_int)(a.s[7]));
}

fcLong8 fcFloat8_convertLong8(fcFloat8 a) {
  return fcLong8_create11111111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]), (cl_long)(a.s[4]), (cl_long)(a.s[5]), (cl_long)(a.s[6]), (cl_long)(a.s[7]));
}

fcDouble8 fcFloat8_convertDouble8(fcFloat8 a) {
  return fcDouble8_create11111111((cl_double)(a.s[0]), (cl_double)(a.s[1]), (cl_double)(a.s[2]), (cl_double)(a.s[3]), (cl_double)(a.s[4]), (cl_double)(a.s[5]), (cl_double)(a.s[6]), (cl_double)(a.s[7]));
}

fcFloat2 fcFloat8_asFloat2(fcFloat8 a) {
  return fcFloat2_create11(a.s[0], a.s[1]);
}

fcFloat3 fcFloat8_asFloat3(fcFloat8 a) {
  return fcFloat3_create111(a.s[0], a.s[1], a.s[2]);
}

fcFloat4 fcFloat8_asFloat4(fcFloat8 a) {
  return fcFloat4_create1111(a.s[0], a.s[1], a.s[2], a.s[3]);
}

fcInt8 fcFloat8_isEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0, a.s[4] == b.s[4]? 1 : 0, a.s[5] == b.s[5]? 1 : 0, a.s[6] == b.s[6]? 1 : 0, a.s[7] == b.s[7]? 1 : 0);
}

fcInt8 fcFloat8_isNotEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0, a.s[4] != b.s[4]? 1 : 0, a.s[5] != b.s[5]? 1 : 0, a.s[6] != b.s[6]? 1 : 0, a.s[7] != b.s[7]? 1 : 0);
}

fcInt8 fcFloat8_isGreater(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0, a.s[4] > b.s[4]? 1 : 0, a.s[5] > b.s[5]? 1 : 0, a.s[6] > b.s[6]? 1 : 0, a.s[7] > b.s[7]? 1 : 0);
}

fcInt8 fcFloat8_isGreaterEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0, a.s[4] >= b.s[4]? 1 : 0, a.s[5] >= b.s[5]? 1 : 0, a.s[6] >= b.s[6]? 1 : 0, a.s[7] >= b.s[7]? 1 : 0);
}

fcInt8 fcFloat8_isLess(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0, a.s[4] < b.s[4]? 1 : 0, a.s[5] < b.s[5]? 1 : 0, a.s[6] < b.s[6]? 1 : 0, a.s[7] < b.s[7]? 1 : 0);
}

fcInt8 fcFloat8_isLessEqual(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0, a.s[4] <= b.s[4]? 1 : 0, a.s[5] <= b.s[5]? 1 : 0, a.s[6] <= b.s[6]? 1 : 0, a.s[7] <= b.s[7]? 1 : 0);
}

fcFloat8 fcFloat8_select(fcFloat8 a, fcFloat8 b, fcInt8 c) {
  return fcFloat8_create11111111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]), fcMath_select(a.s[4], b.s[4], c.s[4]), fcMath_select(a.s[5], b.s[5], c.s[5]), fcMath_select(a.s[6], b.s[6], c.s[6]), fcMath_select(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcFloat8_isFinite(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isFinitef(a.s[0]), fcMath_isFinitef(a.s[1]), fcMath_isFinitef(a.s[2]), fcMath_isFinitef(a.s[3]), fcMath_isFinitef(a.s[4]), fcMath_isFinitef(a.s[5]), fcMath_isFinitef(a.s[6]), fcMath_isFinitef(a.s[7]));
}

fcInt8 fcFloat8_isInf(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isInff(a.s[0]), fcMath_isInff(a.s[1]), fcMath_isInff(a.s[2]), fcMath_isInff(a.s[3]), fcMath_isInff(a.s[4]), fcMath_isInff(a.s[5]), fcMath_isInff(a.s[6]), fcMath_isInff(a.s[7]));
}

fcInt8 fcFloat8_isNaN(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isNaNf(a.s[0]), fcMath_isNaNf(a.s[1]), fcMath_isNaNf(a.s[2]), fcMath_isNaNf(a.s[3]), fcMath_isNaNf(a.s[4]), fcMath_isNaNf(a.s[5]), fcMath_isNaNf(a.s[6]), fcMath_isNaNf(a.s[7]));
}

fcInt8 fcFloat8_isNormal(fcFloat8 a) {
  return fcInt8_create11111111(fcMath_isNormalf(a.s[0]), fcMath_isNormalf(a.s[1]), fcMath_isNormalf(a.s[2]), fcMath_isNormalf(a.s[3]), fcMath_isNormalf(a.s[4]), fcMath_isNormalf(a.s[5]), fcMath_isNormalf(a.s[6]), fcMath_isNormalf(a.s[7]));
}

fcInt8 fcFloat8_isOrdered(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(fcMath_isOrderedf(a.s[0], b.s[0]), fcMath_isOrderedf(a.s[1], b.s[1]), fcMath_isOrderedf(a.s[2], b.s[2]), fcMath_isOrderedf(a.s[3], b.s[3]), fcMath_isOrderedf(a.s[4], b.s[4]), fcMath_isOrderedf(a.s[5], b.s[5]), fcMath_isOrderedf(a.s[6], b.s[6]), fcMath_isOrderedf(a.s[7], b.s[7]));
}

fcInt8 fcFloat8_isUnordered(fcFloat8 a, fcFloat8 b) {
  return fcInt8_create11111111(fcMath_isUnorderedf(a.s[0], b.s[0]), fcMath_isUnorderedf(a.s[1], b.s[1]), fcMath_isUnorderedf(a.s[2], b.s[2]), fcMath_isUnorderedf(a.s[3], b.s[3]), fcMath_isUnorderedf(a.s[4], b.s[4]), fcMath_isUnorderedf(a.s[5], b.s[5]), fcMath_isUnorderedf(a.s[6], b.s[6]), fcMath_isUnorderedf(a.s[7], b.s[7]));
}

cl_int fcFloat8_any(fcFloat8 a) {
  return a.s[0] != 0.0f || a.s[1] != 0.0f || a.s[2] != 0.0f || a.s[3] != 0.0f || a.s[4] != 0.0f || a.s[5] != 0.0f || a.s[6] != 0.0f || a.s[7] != 0.0f;
}

cl_int fcFloat8_all(fcFloat8 a) {
  return !(a.s[0] == 0.0f || a.s[1] == 0.0f || a.s[2] == 0.0f || a.s[3] == 0.0f || a.s[4] == 0.0f || a.s[5] == 0.0f || a.s[6] == 0.0f || a.s[7] == 0.0f);
}

fcFloat8 fcFloat8_neg(fcFloat8 a) {
  return fcFloat8_create11111111(-a.s[0], -a.s[1], -a.s[2], -a.s[3], -a.s[4], -a.s[5], -a.s[6], -a.s[7]);
}

fcFloat8 fcFloat8_add(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3], a.s[4] + b.s[4], a.s[5] + b.s[5], a.s[6] + b.s[6], a.s[7] + b.s[7]);
}

fcFloat8 fcFloat8_sub(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3], a.s[4] - b.s[4], a.s[5] - b.s[5], a.s[6] - b.s[6], a.s[7] - b.s[7]);
}

fcDouble8 fcFloat8_muld(fcFloat8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]), (cl_double)(a.s[4] * b.s[4]), (cl_double)(a.s[5] * b.s[5]), (cl_double)(a.s[6] * b.s[6]), (cl_double)(a.s[7] * b.s[7]));
}

fcFloat8 fcFloat8_mulf(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]), (cl_float)(a.s[4] * b.s[4]), (cl_float)(a.s[5] * b.s[5]), (cl_float)(a.s[6] * b.s[6]), (cl_float)(a.s[7] * b.s[7]));
}

fcDouble8 fcFloat8_mulkd(fcFloat8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k), (cl_double)(a.s[4] * k), (cl_double)(a.s[5] * k), (cl_double)(a.s[6] * k), (cl_double)(a.s[7] * k));
}

fcFloat8 fcFloat8_mulkf(fcFloat8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k), (cl_float)(a.s[4] * k), (cl_float)(a.s[5] * k), (cl_float)(a.s[6] * k), (cl_float)(a.s[7] * k));
}

fcDouble8 fcFloat8_divd(fcFloat8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]), (cl_double)(a.s[4] / b.s[4]), (cl_double)(a.s[5] / b.s[5]), (cl_double)(a.s[6] / b.s[6]), (cl_double)(a.s[7] / b.s[7]));
}

fcFloat8 fcFloat8_divf(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]), (cl_float)(a.s[4] / b.s[4]), (cl_float)(a.s[5] / b.s[5]), (cl_float)(a.s[6] / b.s[6]), (cl_float)(a.s[7] / b.s[7]));
}

fcDouble8 fcFloat8_divkd(fcFloat8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k), (cl_double)(a.s[4] / k), (cl_double)(a.s[5] / k), (cl_double)(a.s[6] / k), (cl_double)(a.s[7] / k));
}

fcFloat8 fcFloat8_divkf(fcFloat8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k), (cl_float)(a.s[4] / k), (cl_float)(a.s[5] / k), (cl_float)(a.s[6] / k), (cl_float)(a.s[7] / k));
}

cl_float fcFloat8_dot(fcFloat8 a, fcFloat8 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2] + a.s[3] * b.s[3] + a.s[4] * b.s[4] + a.s[5] * b.s[5] + a.s[6] * b.s[6] + a.s[7] * b.s[7];
}

cl_double fcFloat8_distance(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_length(fcFloat8_sub(a, b));
}

cl_double fcFloat8_length(fcFloat8 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2] + a.s[3] * a.s[3] + a.s[4] * a.s[4] + a.s[5] * a.s[5] + a.s[6] * a.s[6] + a.s[7] * a.s[7]);
}

fcFloat8 fcFloat8_normalize(fcFloat8 a) {
  cl_double len = fcFloat8_length(a);
  return fcFloat8_create11111111((cl_float)(a.s[0] / len), (cl_float)(a.s[1] / len), (cl_float)(a.s[2] / len), (cl_float)(a.s[3] / len), (cl_float)(a.s[4] / len), (cl_float)(a.s[5] / len), (cl_float)(a.s[6] / len), (cl_float)(a.s[7] / len));
}

fcFloat8 fcFloat8_abs(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]), fcMath_abs(a.s[4]), fcMath_abs(a.s[5]), fcMath_abs(a.s[6]), fcMath_abs(a.s[7]));
}

fcFloat8 fcFloat8_clamp(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]), fcMath_clamp(a.s[4], b.s[4], c.s[4]), fcMath_clamp(a.s[5], b.s[5], c.s[5]), fcMath_clamp(a.s[6], b.s[6], c.s[6]), fcMath_clamp(a.s[7], b.s[7], c.s[7]));
}

fcFloat8 fcFloat8_max(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]), fcMath_max(a.s[4], b.s[4]), fcMath_max(a.s[5], b.s[5]), fcMath_max(a.s[6], b.s[6]), fcMath_max(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_maxMag(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]), fcMath_maxMag(a.s[4], b.s[4]), fcMath_maxMag(a.s[5], b.s[5]), fcMath_maxMag(a.s[6], b.s[6]), fcMath_maxMag(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_min(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]), fcMath_min(a.s[4], b.s[4]), fcMath_min(a.s[5], b.s[5]), fcMath_min(a.s[6], b.s[6]), fcMath_min(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_minMag(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]), fcMath_minMag(a.s[4], b.s[4]), fcMath_minMag(a.s[5], b.s[5]), fcMath_minMag(a.s[6], b.s[6]), fcMath_minMag(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_mix(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]), fcMath_mix(a.s[4], b.s[4], c.s[4]), fcMath_mix(a.s[5], b.s[5], c.s[5]), fcMath_mix(a.s[6], b.s[6], c.s[6]), fcMath_mix(a.s[7], b.s[7], c.s[7]));
}

fcFloat8 fcFloat8_clampk(fcFloat8 v, cl_float min, cl_float max) {
  return fcFloat8_create11111111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max), fcMath_clamp(v.s[4], min, max), fcMath_clamp(v.s[5], min, max), fcMath_clamp(v.s[6], min, max), fcMath_clamp(v.s[7], min, max));
}

fcFloat8 fcFloat8_maxk(fcFloat8 x, cl_float y) {
  return fcFloat8_create11111111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y), fcMath_max(x.s[4], y), fcMath_max(x.s[5], y), fcMath_max(x.s[6], y), fcMath_max(x.s[7], y));
}

fcFloat8 fcFloat8_mink(fcFloat8 x, cl_float y) {
  return fcFloat8_create11111111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y), fcMath_min(x.s[4], y), fcMath_min(x.s[5], y), fcMath_min(x.s[6], y), fcMath_min(x.s[7], y));
}

fcFloat8 fcFloat8_mixk(fcFloat8 x, fcFloat8 y, cl_float a) {
  return fcFloat8_create11111111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a), fcMath_mix(x.s[4], y.s[4], a), fcMath_mix(x.s[5], y.s[5], a), fcMath_mix(x.s[6], y.s[6], a), fcMath_mix(x.s[7], y.s[7], a));
}

fcFloat8 fcFloat8_acos(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_acosf(a.s[0]), fcMath_acosf(a.s[1]), fcMath_acosf(a.s[2]), fcMath_acosf(a.s[3]), fcMath_acosf(a.s[4]), fcMath_acosf(a.s[5]), fcMath_acosf(a.s[6]), fcMath_acosf(a.s[7]));
}

fcFloat8 fcFloat8_acosh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_acoshf(a.s[0]), fcMath_acoshf(a.s[1]), fcMath_acoshf(a.s[2]), fcMath_acoshf(a.s[3]), fcMath_acoshf(a.s[4]), fcMath_acoshf(a.s[5]), fcMath_acoshf(a.s[6]), fcMath_acoshf(a.s[7]));
}

fcFloat8 fcFloat8_asin(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_asinf(a.s[0]), fcMath_asinf(a.s[1]), fcMath_asinf(a.s[2]), fcMath_asinf(a.s[3]), fcMath_asinf(a.s[4]), fcMath_asinf(a.s[5]), fcMath_asinf(a.s[6]), fcMath_asinf(a.s[7]));
}

fcFloat8 fcFloat8_asinh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_asinhf(a.s[0]), fcMath_asinhf(a.s[1]), fcMath_asinhf(a.s[2]), fcMath_asinhf(a.s[3]), fcMath_asinhf(a.s[4]), fcMath_asinhf(a.s[5]), fcMath_asinhf(a.s[6]), fcMath_asinhf(a.s[7]));
}

fcFloat8 fcFloat8_atan(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_atanf(a.s[0]), fcMath_atanf(a.s[1]), fcMath_atanf(a.s[2]), fcMath_atanf(a.s[3]), fcMath_atanf(a.s[4]), fcMath_atanf(a.s[5]), fcMath_atanf(a.s[6]), fcMath_atanf(a.s[7]));
}

fcFloat8 fcFloat8_atan2(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_atan2f(a.s[0], b.s[0]), fcMath_atan2f(a.s[1], b.s[1]), fcMath_atan2f(a.s[2], b.s[2]), fcMath_atan2f(a.s[3], b.s[3]), fcMath_atan2f(a.s[4], b.s[4]), fcMath_atan2f(a.s[5], b.s[5]), fcMath_atan2f(a.s[6], b.s[6]), fcMath_atan2f(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_atanh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_atanhf(a.s[0]), fcMath_atanhf(a.s[1]), fcMath_atanhf(a.s[2]), fcMath_atanhf(a.s[3]), fcMath_atanhf(a.s[4]), fcMath_atanhf(a.s[5]), fcMath_atanhf(a.s[6]), fcMath_atanhf(a.s[7]));
}

fcFloat8 fcFloat8_cbrt(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_cbrtf(a.s[0]), fcMath_cbrtf(a.s[1]), fcMath_cbrtf(a.s[2]), fcMath_cbrtf(a.s[3]), fcMath_cbrtf(a.s[4]), fcMath_cbrtf(a.s[5]), fcMath_cbrtf(a.s[6]), fcMath_cbrtf(a.s[7]));
}

fcFloat8 fcFloat8_ceil(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_ceilf(a.s[0]), fcMath_ceilf(a.s[1]), fcMath_ceilf(a.s[2]), fcMath_ceilf(a.s[3]), fcMath_ceilf(a.s[4]), fcMath_ceilf(a.s[5]), fcMath_ceilf(a.s[6]), fcMath_ceilf(a.s[7]));
}

fcFloat8 fcFloat8_copySign(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_copySignf(a.s[0], b.s[0]), fcMath_copySignf(a.s[1], b.s[1]), fcMath_copySignf(a.s[2], b.s[2]), fcMath_copySignf(a.s[3], b.s[3]), fcMath_copySignf(a.s[4], b.s[4]), fcMath_copySignf(a.s[5], b.s[5]), fcMath_copySignf(a.s[6], b.s[6]), fcMath_copySignf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_cos(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_cosf(a.s[0]), fcMath_cosf(a.s[1]), fcMath_cosf(a.s[2]), fcMath_cosf(a.s[3]), fcMath_cosf(a.s[4]), fcMath_cosf(a.s[5]), fcMath_cosf(a.s[6]), fcMath_cosf(a.s[7]));
}

fcFloat8 fcFloat8_cosh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_coshf(a.s[0]), fcMath_coshf(a.s[1]), fcMath_coshf(a.s[2]), fcMath_coshf(a.s[3]), fcMath_coshf(a.s[4]), fcMath_coshf(a.s[5]), fcMath_coshf(a.s[6]), fcMath_coshf(a.s[7]));
}

fcFloat8 fcFloat8_erf(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_erff(a.s[0]), fcMath_erff(a.s[1]), fcMath_erff(a.s[2]), fcMath_erff(a.s[3]), fcMath_erff(a.s[4]), fcMath_erff(a.s[5]), fcMath_erff(a.s[6]), fcMath_erff(a.s[7]));
}

fcFloat8 fcFloat8_erfc(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_erfcf(a.s[0]), fcMath_erfcf(a.s[1]), fcMath_erfcf(a.s[2]), fcMath_erfcf(a.s[3]), fcMath_erfcf(a.s[4]), fcMath_erfcf(a.s[5]), fcMath_erfcf(a.s[6]), fcMath_erfcf(a.s[7]));
}

fcFloat8 fcFloat8_exp(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_expf(a.s[0]), fcMath_expf(a.s[1]), fcMath_expf(a.s[2]), fcMath_expf(a.s[3]), fcMath_expf(a.s[4]), fcMath_expf(a.s[5]), fcMath_expf(a.s[6]), fcMath_expf(a.s[7]));
}

fcFloat8 fcFloat8_exp10(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_exp10f(a.s[0]), fcMath_exp10f(a.s[1]), fcMath_exp10f(a.s[2]), fcMath_exp10f(a.s[3]), fcMath_exp10f(a.s[4]), fcMath_exp10f(a.s[5]), fcMath_exp10f(a.s[6]), fcMath_exp10f(a.s[7]));
}

fcFloat8 fcFloat8_exp2(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_exp2f(a.s[0]), fcMath_exp2f(a.s[1]), fcMath_exp2f(a.s[2]), fcMath_exp2f(a.s[3]), fcMath_exp2f(a.s[4]), fcMath_exp2f(a.s[5]), fcMath_exp2f(a.s[6]), fcMath_exp2f(a.s[7]));
}

fcFloat8 fcFloat8_expm1(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_expm1f(a.s[0]), fcMath_expm1f(a.s[1]), fcMath_expm1f(a.s[2]), fcMath_expm1f(a.s[3]), fcMath_expm1f(a.s[4]), fcMath_expm1f(a.s[5]), fcMath_expm1f(a.s[6]), fcMath_expm1f(a.s[7]));
}

fcFloat8 fcFloat8_fdim(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_fdimf(a.s[0], b.s[0]), fcMath_fdimf(a.s[1], b.s[1]), fcMath_fdimf(a.s[2], b.s[2]), fcMath_fdimf(a.s[3], b.s[3]), fcMath_fdimf(a.s[4], b.s[4]), fcMath_fdimf(a.s[5], b.s[5]), fcMath_fdimf(a.s[6], b.s[6]), fcMath_fdimf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_floor(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_floorf(a.s[0]), fcMath_floorf(a.s[1]), fcMath_floorf(a.s[2]), fcMath_floorf(a.s[3]), fcMath_floorf(a.s[4]), fcMath_floorf(a.s[5]), fcMath_floorf(a.s[6]), fcMath_floorf(a.s[7]));
}

fcFloat8 fcFloat8_fma(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_fmaf(a.s[0], b.s[0], c.s[0]), fcMath_fmaf(a.s[1], b.s[1], c.s[1]), fcMath_fmaf(a.s[2], b.s[2], c.s[2]), fcMath_fmaf(a.s[3], b.s[3], c.s[3]), fcMath_fmaf(a.s[4], b.s[4], c.s[4]), fcMath_fmaf(a.s[5], b.s[5], c.s[5]), fcMath_fmaf(a.s[6], b.s[6], c.s[6]), fcMath_fmaf(a.s[7], b.s[7], c.s[7]));
}

fcFloat8 fcFloat8_fmod(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_fmodf(a.s[0], b.s[0]), fcMath_fmodf(a.s[1], b.s[1]), fcMath_fmodf(a.s[2], b.s[2]), fcMath_fmodf(a.s[3], b.s[3]), fcMath_fmodf(a.s[4], b.s[4]), fcMath_fmodf(a.s[5], b.s[5]), fcMath_fmodf(a.s[6], b.s[6]), fcMath_fmodf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_fract(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_fractf(a.s[0]), fcMath_fractf(a.s[1]), fcMath_fractf(a.s[2]), fcMath_fractf(a.s[3]), fcMath_fractf(a.s[4]), fcMath_fractf(a.s[5]), fcMath_fractf(a.s[6]), fcMath_fractf(a.s[7]));
}

fcFloat8 fcFloat8_frexp(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_frexpf(a.s[0]), fcMath_frexpf(a.s[1]), fcMath_frexpf(a.s[2]), fcMath_frexpf(a.s[3]), fcMath_frexpf(a.s[4]), fcMath_frexpf(a.s[5]), fcMath_frexpf(a.s[6]), fcMath_frexpf(a.s[7]));
}

fcFloat8 fcFloat8_getExponent(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_getExponentf(a.s[0]), fcMath_getExponentf(a.s[1]), fcMath_getExponentf(a.s[2]), fcMath_getExponentf(a.s[3]), fcMath_getExponentf(a.s[4]), fcMath_getExponentf(a.s[5]), fcMath_getExponentf(a.s[6]), fcMath_getExponentf(a.s[7]));
}

fcFloat8 fcFloat8_hypot(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_hypotf(a.s[0], b.s[0]), fcMath_hypotf(a.s[1], b.s[1]), fcMath_hypotf(a.s[2], b.s[2]), fcMath_hypotf(a.s[3], b.s[3]), fcMath_hypotf(a.s[4], b.s[4]), fcMath_hypotf(a.s[5], b.s[5]), fcMath_hypotf(a.s[6], b.s[6]), fcMath_hypotf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_lgamma(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_lgammaf(a.s[0]), fcMath_lgammaf(a.s[1]), fcMath_lgammaf(a.s[2]), fcMath_lgammaf(a.s[3]), fcMath_lgammaf(a.s[4]), fcMath_lgammaf(a.s[5]), fcMath_lgammaf(a.s[6]), fcMath_lgammaf(a.s[7]));
}

fcFloat8 fcFloat8_log(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_logf(a.s[0]), fcMath_logf(a.s[1]), fcMath_logf(a.s[2]), fcMath_logf(a.s[3]), fcMath_logf(a.s[4]), fcMath_logf(a.s[5]), fcMath_logf(a.s[6]), fcMath_logf(a.s[7]));
}

fcFloat8 fcFloat8_log10(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_log10f(a.s[0]), fcMath_log10f(a.s[1]), fcMath_log10f(a.s[2]), fcMath_log10f(a.s[3]), fcMath_log10f(a.s[4]), fcMath_log10f(a.s[5]), fcMath_log10f(a.s[6]), fcMath_log10f(a.s[7]));
}

fcFloat8 fcFloat8_log1p(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_log1pf(a.s[0]), fcMath_log1pf(a.s[1]), fcMath_log1pf(a.s[2]), fcMath_log1pf(a.s[3]), fcMath_log1pf(a.s[4]), fcMath_log1pf(a.s[5]), fcMath_log1pf(a.s[6]), fcMath_log1pf(a.s[7]));
}

fcFloat8 fcFloat8_log2(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_log2f(a.s[0]), fcMath_log2f(a.s[1]), fcMath_log2f(a.s[2]), fcMath_log2f(a.s[3]), fcMath_log2f(a.s[4]), fcMath_log2f(a.s[5]), fcMath_log2f(a.s[6]), fcMath_log2f(a.s[7]));
}

fcFloat8 fcFloat8_logb(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_logbf(a.s[0]), fcMath_logbf(a.s[1]), fcMath_logbf(a.s[2]), fcMath_logbf(a.s[3]), fcMath_logbf(a.s[4]), fcMath_logbf(a.s[5]), fcMath_logbf(a.s[6]), fcMath_logbf(a.s[7]));
}

fcFloat8 fcFloat8_mad(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_madf(a.s[0], b.s[0], c.s[0]), fcMath_madf(a.s[1], b.s[1], c.s[1]), fcMath_madf(a.s[2], b.s[2], c.s[2]), fcMath_madf(a.s[3], b.s[3], c.s[3]), fcMath_madf(a.s[4], b.s[4], c.s[4]), fcMath_madf(a.s[5], b.s[5], c.s[5]), fcMath_madf(a.s[6], b.s[6], c.s[6]), fcMath_madf(a.s[7], b.s[7], c.s[7]));
}

fcFloat8 fcFloat8_nextAfter(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_nextAfterf(a.s[0], b.s[0]), fcMath_nextAfterf(a.s[1], b.s[1]), fcMath_nextAfterf(a.s[2], b.s[2]), fcMath_nextAfterf(a.s[3], b.s[3]), fcMath_nextAfterf(a.s[4], b.s[4]), fcMath_nextAfterf(a.s[5], b.s[5]), fcMath_nextAfterf(a.s[6], b.s[6]), fcMath_nextAfterf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_pow(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_powf(a.s[0], b.s[0]), fcMath_powf(a.s[1], b.s[1]), fcMath_powf(a.s[2], b.s[2]), fcMath_powf(a.s[3], b.s[3]), fcMath_powf(a.s[4], b.s[4]), fcMath_powf(a.s[5], b.s[5]), fcMath_powf(a.s[6], b.s[6]), fcMath_powf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_powr(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_powrf(a.s[0], b.s[0]), fcMath_powrf(a.s[1], b.s[1]), fcMath_powrf(a.s[2], b.s[2]), fcMath_powrf(a.s[3], b.s[3]), fcMath_powrf(a.s[4], b.s[4]), fcMath_powrf(a.s[5], b.s[5]), fcMath_powrf(a.s[6], b.s[6]), fcMath_powrf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_remainder(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_remainderf(a.s[0], b.s[0]), fcMath_remainderf(a.s[1], b.s[1]), fcMath_remainderf(a.s[2], b.s[2]), fcMath_remainderf(a.s[3], b.s[3]), fcMath_remainderf(a.s[4], b.s[4]), fcMath_remainderf(a.s[5], b.s[5]), fcMath_remainderf(a.s[6], b.s[6]), fcMath_remainderf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_rint(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_rintf(a.s[0]), fcMath_rintf(a.s[1]), fcMath_rintf(a.s[2]), fcMath_rintf(a.s[3]), fcMath_rintf(a.s[4]), fcMath_rintf(a.s[5]), fcMath_rintf(a.s[6]), fcMath_rintf(a.s[7]));
}

fcFloat8 fcFloat8_round(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_roundf(a.s[0]), fcMath_roundf(a.s[1]), fcMath_roundf(a.s[2]), fcMath_roundf(a.s[3]), fcMath_roundf(a.s[4]), fcMath_roundf(a.s[5]), fcMath_roundf(a.s[6]), fcMath_roundf(a.s[7]));
}

fcFloat8 fcFloat8_rsqrt(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_rsqrtf(a.s[0]), fcMath_rsqrtf(a.s[1]), fcMath_rsqrtf(a.s[2]), fcMath_rsqrtf(a.s[3]), fcMath_rsqrtf(a.s[4]), fcMath_rsqrtf(a.s[5]), fcMath_rsqrtf(a.s[6]), fcMath_rsqrtf(a.s[7]));
}

fcFloat8 fcFloat8_signum(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_signumf(a.s[0]), fcMath_signumf(a.s[1]), fcMath_signumf(a.s[2]), fcMath_signumf(a.s[3]), fcMath_signumf(a.s[4]), fcMath_signumf(a.s[5]), fcMath_signumf(a.s[6]), fcMath_signumf(a.s[7]));
}

fcFloat8 fcFloat8_sin(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_sinf(a.s[0]), fcMath_sinf(a.s[1]), fcMath_sinf(a.s[2]), fcMath_sinf(a.s[3]), fcMath_sinf(a.s[4]), fcMath_sinf(a.s[5]), fcMath_sinf(a.s[6]), fcMath_sinf(a.s[7]));
}

fcFloat8 fcFloat8_sinh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_sinhf(a.s[0]), fcMath_sinhf(a.s[1]), fcMath_sinhf(a.s[2]), fcMath_sinhf(a.s[3]), fcMath_sinhf(a.s[4]), fcMath_sinhf(a.s[5]), fcMath_sinhf(a.s[6]), fcMath_sinhf(a.s[7]));
}

fcFloat8 fcFloat8_smoothStep(fcFloat8 a, fcFloat8 b, fcFloat8 c) {
  return fcFloat8_create11111111(fcMath_smoothStepf(a.s[0], b.s[0], c.s[0]), fcMath_smoothStepf(a.s[1], b.s[1], c.s[1]), fcMath_smoothStepf(a.s[2], b.s[2], c.s[2]), fcMath_smoothStepf(a.s[3], b.s[3], c.s[3]), fcMath_smoothStepf(a.s[4], b.s[4], c.s[4]), fcMath_smoothStepf(a.s[5], b.s[5], c.s[5]), fcMath_smoothStepf(a.s[6], b.s[6], c.s[6]), fcMath_smoothStepf(a.s[7], b.s[7], c.s[7]));
}

fcFloat8 fcFloat8_sqrt(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_sqrtf(a.s[0]), fcMath_sqrtf(a.s[1]), fcMath_sqrtf(a.s[2]), fcMath_sqrtf(a.s[3]), fcMath_sqrtf(a.s[4]), fcMath_sqrtf(a.s[5]), fcMath_sqrtf(a.s[6]), fcMath_sqrtf(a.s[7]));
}

fcFloat8 fcFloat8_step(fcFloat8 a, fcFloat8 b) {
  return fcFloat8_create11111111(fcMath_stepf(a.s[0], b.s[0]), fcMath_stepf(a.s[1], b.s[1]), fcMath_stepf(a.s[2], b.s[2]), fcMath_stepf(a.s[3], b.s[3]), fcMath_stepf(a.s[4], b.s[4]), fcMath_stepf(a.s[5], b.s[5]), fcMath_stepf(a.s[6], b.s[6]), fcMath_stepf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_tan(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_tanf(a.s[0]), fcMath_tanf(a.s[1]), fcMath_tanf(a.s[2]), fcMath_tanf(a.s[3]), fcMath_tanf(a.s[4]), fcMath_tanf(a.s[5]), fcMath_tanf(a.s[6]), fcMath_tanf(a.s[7]));
}

fcFloat8 fcFloat8_tanh(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_tanhf(a.s[0]), fcMath_tanhf(a.s[1]), fcMath_tanhf(a.s[2]), fcMath_tanhf(a.s[3]), fcMath_tanhf(a.s[4]), fcMath_tanhf(a.s[5]), fcMath_tanhf(a.s[6]), fcMath_tanhf(a.s[7]));
}

fcFloat8 fcFloat8_tgamma(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_tgammaf(a.s[0]), fcMath_tgammaf(a.s[1]), fcMath_tgammaf(a.s[2]), fcMath_tgammaf(a.s[3]), fcMath_tgammaf(a.s[4]), fcMath_tgammaf(a.s[5]), fcMath_tgammaf(a.s[6]), fcMath_tgammaf(a.s[7]));
}

fcFloat8 fcFloat8_toDegrees(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_toDegreesf(a.s[0]), fcMath_toDegreesf(a.s[1]), fcMath_toDegreesf(a.s[2]), fcMath_toDegreesf(a.s[3]), fcMath_toDegreesf(a.s[4]), fcMath_toDegreesf(a.s[5]), fcMath_toDegreesf(a.s[6]), fcMath_toDegreesf(a.s[7]));
}

fcFloat8 fcFloat8_toRadians(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_toRadiansf(a.s[0]), fcMath_toRadiansf(a.s[1]), fcMath_toRadiansf(a.s[2]), fcMath_toRadiansf(a.s[3]), fcMath_toRadiansf(a.s[4]), fcMath_toRadiansf(a.s[5]), fcMath_toRadiansf(a.s[6]), fcMath_toRadiansf(a.s[7]));
}

fcFloat8 fcFloat8_trunc(fcFloat8 a) {
  return fcFloat8_create11111111(fcMath_truncf(a.s[0]), fcMath_truncf(a.s[1]), fcMath_truncf(a.s[2]), fcMath_truncf(a.s[3]), fcMath_truncf(a.s[4]), fcMath_truncf(a.s[5]), fcMath_truncf(a.s[6]), fcMath_truncf(a.s[7]));
}

fcFloat8 fcFloat8_scalb(fcFloat8 a, fcInt8 n) {
  return fcFloat8_create11111111(fcMath_scalbf(a.s[0], n.s[0]), fcMath_scalbf(a.s[1], n.s[1]), fcMath_scalbf(a.s[2], n.s[2]), fcMath_scalbf(a.s[3], n.s[3]), fcMath_scalbf(a.s[4], n.s[4]), fcMath_scalbf(a.s[5], n.s[5]), fcMath_scalbf(a.s[6], n.s[6]), fcMath_scalbf(a.s[7], n.s[7]));
}

fcFloat8 fcFloat8_ldexp(fcFloat8 a, fcInt8 n) {
  return fcFloat8_create11111111(fcMath_ldexpf(a.s[0], n.s[0]), fcMath_ldexpf(a.s[1], n.s[1]), fcMath_ldexpf(a.s[2], n.s[2]), fcMath_ldexpf(a.s[3], n.s[3]), fcMath_ldexpf(a.s[4], n.s[4]), fcMath_ldexpf(a.s[5], n.s[5]), fcMath_ldexpf(a.s[6], n.s[6]), fcMath_ldexpf(a.s[7], n.s[7]));
}

fcFloat8 fcFloat8_pown(fcFloat8 a, fcInt8 b) {
  return fcFloat8_create11111111(fcMath_pownf(a.s[0], b.s[0]), fcMath_pownf(a.s[1], b.s[1]), fcMath_pownf(a.s[2], b.s[2]), fcMath_pownf(a.s[3], b.s[3]), fcMath_pownf(a.s[4], b.s[4]), fcMath_pownf(a.s[5], b.s[5]), fcMath_pownf(a.s[6], b.s[6]), fcMath_pownf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_rootn(fcFloat8 a, fcInt8 b) {
  return fcFloat8_create11111111(fcMath_rootnf(a.s[0], b.s[0]), fcMath_rootnf(a.s[1], b.s[1]), fcMath_rootnf(a.s[2], b.s[2]), fcMath_rootnf(a.s[3], b.s[3]), fcMath_rootnf(a.s[4], b.s[4]), fcMath_rootnf(a.s[5], b.s[5]), fcMath_rootnf(a.s[6], b.s[6]), fcMath_rootnf(a.s[7], b.s[7]));
}

fcFloat8 fcFloat8_smoothStepk(fcFloat8 a, fcFloat8 b, cl_float c) {
  return fcFloat8_create11111111(fcMath_smoothStepf(a.s[0], b.s[0], c), fcMath_smoothStepf(a.s[1], b.s[1], c), fcMath_smoothStepf(a.s[2], b.s[2], c), fcMath_smoothStepf(a.s[3], b.s[3], c), fcMath_smoothStepf(a.s[4], b.s[4], c), fcMath_smoothStepf(a.s[5], b.s[5], c), fcMath_smoothStepf(a.s[6], b.s[6], c), fcMath_smoothStepf(a.s[7], b.s[7], c));
}


//
// fcDouble2
//

fcDouble2 fcDouble2_create1(cl_double v) {
  return fcDouble2_create11(v, v);
}

void fcDouble2_set1(fcDouble2* self, cl_double v) {
  fcDouble2_set11(self, v, v);
}

fcDouble2 fcDouble2_create11(cl_double x, cl_double y) {
  fcDouble2 result;
  fcDouble2_set11(&result, x, y);
  return result;
}

void fcDouble2_set11(fcDouble2* self, cl_double x, cl_double y) {
  self->s[0] = x;
  self->s[1] = y;
}

fcDouble2 fcDouble2_create2(fcDouble2 vec1) {
  return fcDouble2_create11(vec1.s[0], vec1.s[1]);
}

void fcDouble2_set2(fcDouble2* self, fcDouble2 vec1) {
  fcDouble2_set11(self, vec1.s[0], vec1.s[1]);
}

fcByte2 fcDouble2_convertByte2(fcDouble2 a) {
  return fcByte2_create11((cl_byte)(a.s[0]), (cl_byte)(a.s[1]));
}

fcShort2 fcDouble2_convertShort2(fcDouble2 a) {
  return fcShort2_create11((cl_short)(a.s[0]), (cl_short)(a.s[1]));
}

fcInt2 fcDouble2_convertInt2(fcDouble2 a) {
  return fcInt2_create11((cl_int)(a.s[0]), (cl_int)(a.s[1]));
}

fcLong2 fcDouble2_convertLong2(fcDouble2 a) {
  return fcLong2_create11((cl_long)(a.s[0]), (cl_long)(a.s[1]));
}

fcFloat2 fcDouble2_convertFloat2(fcDouble2 a) {
  return fcFloat2_create11((cl_float)(a.s[0]), (cl_float)(a.s[1]));
}

fcInt2 fcDouble2_isEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0);
}

fcInt2 fcDouble2_isNotEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0);
}

fcInt2 fcDouble2_isGreater(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0);
}

fcInt2 fcDouble2_isGreaterEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0);
}

fcInt2 fcDouble2_isLess(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0);
}

fcInt2 fcDouble2_isLessEqual(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0);
}

fcDouble2 fcDouble2_select(fcDouble2 a, fcDouble2 b, fcInt2 c) {
  return fcDouble2_create11(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]));
}

fcInt2 fcDouble2_isFinite(fcDouble2 a) {
  return fcInt2_create11(fcMath_isFinite(a.s[0]), fcMath_isFinite(a.s[1]));
}

fcInt2 fcDouble2_isInf(fcDouble2 a) {
  return fcInt2_create11(fcMath_isInf(a.s[0]), fcMath_isInf(a.s[1]));
}

fcInt2 fcDouble2_isNaN(fcDouble2 a) {
  return fcInt2_create11(fcMath_isNaN(a.s[0]), fcMath_isNaN(a.s[1]));
}

fcInt2 fcDouble2_isNormal(fcDouble2 a) {
  return fcInt2_create11(fcMath_isNormal(a.s[0]), fcMath_isNormal(a.s[1]));
}

fcInt2 fcDouble2_isOrdered(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(fcMath_isOrdered(a.s[0], b.s[0]), fcMath_isOrdered(a.s[1], b.s[1]));
}

fcInt2 fcDouble2_isUnordered(fcDouble2 a, fcDouble2 b) {
  return fcInt2_create11(fcMath_isUnordered(a.s[0], b.s[0]), fcMath_isUnordered(a.s[1], b.s[1]));
}

cl_int fcDouble2_any(fcDouble2 a) {
  return a.s[0] != 0.0 || a.s[1] != 0.0;
}

cl_int fcDouble2_all(fcDouble2 a) {
  return !(a.s[0] == 0.0 || a.s[1] == 0.0);
}

fcDouble2 fcDouble2_neg(fcDouble2 a) {
  return fcDouble2_create11(-a.s[0], -a.s[1]);
}

fcDouble2 fcDouble2_add(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(a.s[0] + b.s[0], a.s[1] + b.s[1]);
}

fcDouble2 fcDouble2_sub(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(a.s[0] - b.s[0], a.s[1] - b.s[1]);
}

fcDouble2 fcDouble2_muld(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]));
}

fcFloat2 fcDouble2_mulf(fcDouble2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]));
}

fcDouble2 fcDouble2_mulkd(fcDouble2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k));
}

fcFloat2 fcDouble2_mulkf(fcDouble2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k));
}

fcDouble2 fcDouble2_divd(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]));
}

fcFloat2 fcDouble2_divf(fcDouble2 a, fcFloat2 b) {
  return fcFloat2_create11((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]));
}

fcDouble2 fcDouble2_divkd(fcDouble2 a, cl_double k) {
  return fcDouble2_create11((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k));
}

fcFloat2 fcDouble2_divkf(fcDouble2 a, cl_float k) {
  return fcFloat2_create11((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k));
}

cl_double fcDouble2_dot(fcDouble2 a, fcDouble2 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1];
}

cl_double fcDouble2_distance(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_length(fcDouble2_sub(a, b));
}

cl_double fcDouble2_length(fcDouble2 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1]);
}

fcDouble2 fcDouble2_normalize(fcDouble2 a) {
  cl_double len = fcDouble2_length(a);
  return fcDouble2_create11((cl_double)(a.s[0] / len), (cl_double)(a.s[1] / len));
}

fcDouble2 fcDouble2_abs(fcDouble2 a) {
  return fcDouble2_create11(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]));
}

fcDouble2 fcDouble2_clamp(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]));
}

fcDouble2 fcDouble2_max(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_maxMag(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_min(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_minMag(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_mix(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]));
}

fcDouble2 fcDouble2_clampk(fcDouble2 v, cl_double min, cl_double max) {
  return fcDouble2_create11(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max));
}

fcDouble2 fcDouble2_maxk(fcDouble2 x, cl_double y) {
  return fcDouble2_create11(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y));
}

fcDouble2 fcDouble2_mink(fcDouble2 x, cl_double y) {
  return fcDouble2_create11(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y));
}

fcDouble2 fcDouble2_mixk(fcDouble2 x, fcDouble2 y, cl_double a) {
  return fcDouble2_create11(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a));
}

fcDouble2 fcDouble2_acos(fcDouble2 a) {
  return fcDouble2_create11(fcMath_acos(a.s[0]), fcMath_acos(a.s[1]));
}

fcDouble2 fcDouble2_acosh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_acosh(a.s[0]), fcMath_acosh(a.s[1]));
}

fcDouble2 fcDouble2_asin(fcDouble2 a) {
  return fcDouble2_create11(fcMath_asin(a.s[0]), fcMath_asin(a.s[1]));
}

fcDouble2 fcDouble2_asinh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_asinh(a.s[0]), fcMath_asinh(a.s[1]));
}

fcDouble2 fcDouble2_atan(fcDouble2 a) {
  return fcDouble2_create11(fcMath_atan(a.s[0]), fcMath_atan(a.s[1]));
}

fcDouble2 fcDouble2_atan2(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_atan2(a.s[0], b.s[0]), fcMath_atan2(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_atanh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_atanh(a.s[0]), fcMath_atanh(a.s[1]));
}

fcDouble2 fcDouble2_cbrt(fcDouble2 a) {
  return fcDouble2_create11(fcMath_cbrt(a.s[0]), fcMath_cbrt(a.s[1]));
}

fcDouble2 fcDouble2_ceil(fcDouble2 a) {
  return fcDouble2_create11(fcMath_ceil(a.s[0]), fcMath_ceil(a.s[1]));
}

fcDouble2 fcDouble2_copySign(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_copySign(a.s[0], b.s[0]), fcMath_copySign(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_cos(fcDouble2 a) {
  return fcDouble2_create11(fcMath_cos(a.s[0]), fcMath_cos(a.s[1]));
}

fcDouble2 fcDouble2_cosh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_cosh(a.s[0]), fcMath_cosh(a.s[1]));
}

fcDouble2 fcDouble2_erf(fcDouble2 a) {
  return fcDouble2_create11(fcMath_erf(a.s[0]), fcMath_erf(a.s[1]));
}

fcDouble2 fcDouble2_erfc(fcDouble2 a) {
  return fcDouble2_create11(fcMath_erfc(a.s[0]), fcMath_erfc(a.s[1]));
}

fcDouble2 fcDouble2_exp(fcDouble2 a) {
  return fcDouble2_create11(fcMath_exp(a.s[0]), fcMath_exp(a.s[1]));
}

fcDouble2 fcDouble2_exp10(fcDouble2 a) {
  return fcDouble2_create11(fcMath_exp10(a.s[0]), fcMath_exp10(a.s[1]));
}

fcDouble2 fcDouble2_exp2(fcDouble2 a) {
  return fcDouble2_create11(fcMath_exp2(a.s[0]), fcMath_exp2(a.s[1]));
}

fcDouble2 fcDouble2_expm1(fcDouble2 a) {
  return fcDouble2_create11(fcMath_expm1(a.s[0]), fcMath_expm1(a.s[1]));
}

fcDouble2 fcDouble2_fdim(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_fdim(a.s[0], b.s[0]), fcMath_fdim(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_floor(fcDouble2 a) {
  return fcDouble2_create11(fcMath_floor(a.s[0]), fcMath_floor(a.s[1]));
}

fcDouble2 fcDouble2_fma(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_fma(a.s[0], b.s[0], c.s[0]), fcMath_fma(a.s[1], b.s[1], c.s[1]));
}

fcDouble2 fcDouble2_fmod(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_fmod(a.s[0], b.s[0]), fcMath_fmod(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_fract(fcDouble2 a) {
  return fcDouble2_create11(fcMath_fract(a.s[0]), fcMath_fract(a.s[1]));
}

fcDouble2 fcDouble2_frexp(fcDouble2 a) {
  return fcDouble2_create11(fcMath_frexp(a.s[0]), fcMath_frexp(a.s[1]));
}

fcDouble2 fcDouble2_getExponent(fcDouble2 a) {
  return fcDouble2_create11(fcMath_getExponent(a.s[0]), fcMath_getExponent(a.s[1]));
}

fcDouble2 fcDouble2_hypot(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_hypot(a.s[0], b.s[0]), fcMath_hypot(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_lgamma(fcDouble2 a) {
  return fcDouble2_create11(fcMath_lgamma(a.s[0]), fcMath_lgamma(a.s[1]));
}

fcDouble2 fcDouble2_log(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log(a.s[0]), fcMath_log(a.s[1]));
}

fcDouble2 fcDouble2_log10(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log10(a.s[0]), fcMath_log10(a.s[1]));
}

fcDouble2 fcDouble2_log1p(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log1p(a.s[0]), fcMath_log1p(a.s[1]));
}

fcDouble2 fcDouble2_log2(fcDouble2 a) {
  return fcDouble2_create11(fcMath_log2(a.s[0]), fcMath_log2(a.s[1]));
}

fcDouble2 fcDouble2_logb(fcDouble2 a) {
  return fcDouble2_create11(fcMath_logb(a.s[0]), fcMath_logb(a.s[1]));
}

fcDouble2 fcDouble2_mad(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_mad(a.s[0], b.s[0], c.s[0]), fcMath_mad(a.s[1], b.s[1], c.s[1]));
}

fcDouble2 fcDouble2_nextAfter(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_nextAfter(a.s[0], b.s[0]), fcMath_nextAfter(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_pow(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_pow(a.s[0], b.s[0]), fcMath_pow(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_powr(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_powr(a.s[0], b.s[0]), fcMath_powr(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_remainder(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_remainder(a.s[0], b.s[0]), fcMath_remainder(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_rint(fcDouble2 a) {
  return fcDouble2_create11(fcMath_rint(a.s[0]), fcMath_rint(a.s[1]));
}

fcDouble2 fcDouble2_round(fcDouble2 a) {
  return fcDouble2_create11(fcMath_round(a.s[0]), fcMath_round(a.s[1]));
}

fcDouble2 fcDouble2_rsqrt(fcDouble2 a) {
  return fcDouble2_create11(fcMath_rsqrt(a.s[0]), fcMath_rsqrt(a.s[1]));
}

fcDouble2 fcDouble2_signum(fcDouble2 a) {
  return fcDouble2_create11(fcMath_signum(a.s[0]), fcMath_signum(a.s[1]));
}

fcDouble2 fcDouble2_sin(fcDouble2 a) {
  return fcDouble2_create11(fcMath_sin(a.s[0]), fcMath_sin(a.s[1]));
}

fcDouble2 fcDouble2_sinh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_sinh(a.s[0]), fcMath_sinh(a.s[1]));
}

fcDouble2 fcDouble2_smoothStep(fcDouble2 a, fcDouble2 b, fcDouble2 c) {
  return fcDouble2_create11(fcMath_smoothStep(a.s[0], b.s[0], c.s[0]), fcMath_smoothStep(a.s[1], b.s[1], c.s[1]));
}

fcDouble2 fcDouble2_sqrt(fcDouble2 a) {
  return fcDouble2_create11(fcMath_sqrt(a.s[0]), fcMath_sqrt(a.s[1]));
}

fcDouble2 fcDouble2_step(fcDouble2 a, fcDouble2 b) {
  return fcDouble2_create11(fcMath_step(a.s[0], b.s[0]), fcMath_step(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_tan(fcDouble2 a) {
  return fcDouble2_create11(fcMath_tan(a.s[0]), fcMath_tan(a.s[1]));
}

fcDouble2 fcDouble2_tanh(fcDouble2 a) {
  return fcDouble2_create11(fcMath_tanh(a.s[0]), fcMath_tanh(a.s[1]));
}

fcDouble2 fcDouble2_tgamma(fcDouble2 a) {
  return fcDouble2_create11(fcMath_tgamma(a.s[0]), fcMath_tgamma(a.s[1]));
}

fcDouble2 fcDouble2_toDegrees(fcDouble2 a) {
  return fcDouble2_create11(fcMath_toDegrees(a.s[0]), fcMath_toDegrees(a.s[1]));
}

fcDouble2 fcDouble2_toRadians(fcDouble2 a) {
  return fcDouble2_create11(fcMath_toRadians(a.s[0]), fcMath_toRadians(a.s[1]));
}

fcDouble2 fcDouble2_trunc(fcDouble2 a) {
  return fcDouble2_create11(fcMath_trunc(a.s[0]), fcMath_trunc(a.s[1]));
}

fcDouble2 fcDouble2_scalb(fcDouble2 a, fcInt2 n) {
  return fcDouble2_create11(fcMath_scalb(a.s[0], n.s[0]), fcMath_scalb(a.s[1], n.s[1]));
}

fcDouble2 fcDouble2_ldexp(fcDouble2 a, fcInt2 n) {
  return fcDouble2_create11(fcMath_ldexp(a.s[0], n.s[0]), fcMath_ldexp(a.s[1], n.s[1]));
}

fcDouble2 fcDouble2_pown(fcDouble2 a, fcInt2 b) {
  return fcDouble2_create11(fcMath_pown(a.s[0], b.s[0]), fcMath_pown(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_rootn(fcDouble2 a, fcInt2 b) {
  return fcDouble2_create11(fcMath_rootn(a.s[0], b.s[0]), fcMath_rootn(a.s[1], b.s[1]));
}

fcDouble2 fcDouble2_smoothStepk(fcDouble2 a, fcDouble2 b, cl_double c) {
  return fcDouble2_create11(fcMath_smoothStep(a.s[0], b.s[0], c), fcMath_smoothStep(a.s[1], b.s[1], c));
}


//
// fcDouble3
//

fcDouble3 fcDouble3_create1(cl_double v) {
  return fcDouble3_create111(v, v, v);
}

void fcDouble3_set1(fcDouble3* self, cl_double v) {
  fcDouble3_set111(self, v, v, v);
}

fcDouble3 fcDouble3_create111(cl_double x, cl_double y, cl_double z) {
  fcDouble3 result;
  fcDouble3_set111(&result, x, y, z);
  return result;
}

void fcDouble3_set111(fcDouble3* self, cl_double x, cl_double y, cl_double z) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
}

fcDouble3 fcDouble3_create12(cl_double x, fcDouble2 vec1) {
  return fcDouble3_create111(x, vec1.s[0], vec1.s[1]);
}

void fcDouble3_set12(fcDouble3* self, cl_double x, fcDouble2 vec1) {
  fcDouble3_set111(self, x, vec1.s[0], vec1.s[1]);
}

fcDouble3 fcDouble3_create21(fcDouble2 vec1, cl_double z) {
  return fcDouble3_create111(vec1.s[0], vec1.s[1], z);
}

void fcDouble3_set21(fcDouble3* self, fcDouble2 vec1, cl_double z) {
  fcDouble3_set111(self, vec1.s[0], vec1.s[1], z);
}

fcDouble3 fcDouble3_create3(fcDouble3 vec1) {
  return fcDouble3_create111(vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcDouble3_set3(fcDouble3* self, fcDouble3 vec1) {
  fcDouble3_set111(self, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcByte3 fcDouble3_convertByte3(fcDouble3 a) {
  return fcByte3_create111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]));
}

fcShort3 fcDouble3_convertShort3(fcDouble3 a) {
  return fcShort3_create111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]));
}

fcInt3 fcDouble3_convertInt3(fcDouble3 a) {
  return fcInt3_create111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]));
}

fcLong3 fcDouble3_convertLong3(fcDouble3 a) {
  return fcLong3_create111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]));
}

fcFloat3 fcDouble3_convertFloat3(fcDouble3 a) {
  return fcFloat3_create111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]));
}

fcDouble2 fcDouble3_asDouble2(fcDouble3 a) {
  return fcDouble2_create11(a.s[0], a.s[1]);
}

fcInt3 fcDouble3_isEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0);
}

fcInt3 fcDouble3_isNotEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0);
}

fcInt3 fcDouble3_isGreater(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0);
}

fcInt3 fcDouble3_isGreaterEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0);
}

fcInt3 fcDouble3_isLess(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0);
}

fcInt3 fcDouble3_isLessEqual(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0);
}

fcDouble3 fcDouble3_select(fcDouble3 a, fcDouble3 b, fcInt3 c) {
  return fcDouble3_create111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]));
}

fcInt3 fcDouble3_isFinite(fcDouble3 a) {
  return fcInt3_create111(fcMath_isFinite(a.s[0]), fcMath_isFinite(a.s[1]), fcMath_isFinite(a.s[2]));
}

fcInt3 fcDouble3_isInf(fcDouble3 a) {
  return fcInt3_create111(fcMath_isInf(a.s[0]), fcMath_isInf(a.s[1]), fcMath_isInf(a.s[2]));
}

fcInt3 fcDouble3_isNaN(fcDouble3 a) {
  return fcInt3_create111(fcMath_isNaN(a.s[0]), fcMath_isNaN(a.s[1]), fcMath_isNaN(a.s[2]));
}

fcInt3 fcDouble3_isNormal(fcDouble3 a) {
  return fcInt3_create111(fcMath_isNormal(a.s[0]), fcMath_isNormal(a.s[1]), fcMath_isNormal(a.s[2]));
}

fcInt3 fcDouble3_isOrdered(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(fcMath_isOrdered(a.s[0], b.s[0]), fcMath_isOrdered(a.s[1], b.s[1]), fcMath_isOrdered(a.s[2], b.s[2]));
}

fcInt3 fcDouble3_isUnordered(fcDouble3 a, fcDouble3 b) {
  return fcInt3_create111(fcMath_isUnordered(a.s[0], b.s[0]), fcMath_isUnordered(a.s[1], b.s[1]), fcMath_isUnordered(a.s[2], b.s[2]));
}

cl_int fcDouble3_any(fcDouble3 a) {
  return a.s[0] != 0.0 || a.s[1] != 0.0 || a.s[2] != 0.0;
}

cl_int fcDouble3_all(fcDouble3 a) {
  return !(a.s[0] == 0.0 || a.s[1] == 0.0 || a.s[2] == 0.0);
}

fcDouble3 fcDouble3_neg(fcDouble3 a) {
  return fcDouble3_create111(-a.s[0], -a.s[1], -a.s[2]);
}

fcDouble3 fcDouble3_add(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2]);
}

fcDouble3 fcDouble3_sub(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2]);
}

fcDouble3 fcDouble3_muld(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]));
}

fcFloat3 fcDouble3_mulf(fcDouble3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]));
}

fcDouble3 fcDouble3_mulkd(fcDouble3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k));
}

fcFloat3 fcDouble3_mulkf(fcDouble3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k));
}

fcDouble3 fcDouble3_divd(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]));
}

fcFloat3 fcDouble3_divf(fcDouble3 a, fcFloat3 b) {
  return fcFloat3_create111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]));
}

fcDouble3 fcDouble3_divkd(fcDouble3 a, cl_double k) {
  return fcDouble3_create111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k));
}

fcFloat3 fcDouble3_divkf(fcDouble3 a, cl_float k) {
  return fcFloat3_create111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k));
}

fcDouble3 fcDouble3_cross(fcDouble3 a, fcDouble3 b) {
  cl_double resX = a.s[1] * b.s[2] - a.s[2] * b.s[1];
  cl_double resY = a.s[2] * b.s[0] - a.s[0] * b.s[2];
  cl_double resZ = a.s[0] * b.s[1] - a.s[1] * b.s[0];
  return fcDouble3_create111(resX, resY, resZ);
}

cl_double fcDouble3_dot(fcDouble3 a, fcDouble3 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2];
}

cl_double fcDouble3_distance(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_length(fcDouble3_sub(a, b));
}

cl_double fcDouble3_length(fcDouble3 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2]);
}

fcDouble3 fcDouble3_normalize(fcDouble3 a) {
  cl_double len = fcDouble3_length(a);
  return fcDouble3_create111((cl_double)(a.s[0] / len), (cl_double)(a.s[1] / len), (cl_double)(a.s[2] / len));
}

fcDouble3 fcDouble3_abs(fcDouble3 a) {
  return fcDouble3_create111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]));
}

fcDouble3 fcDouble3_clamp(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]));
}

fcDouble3 fcDouble3_max(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_maxMag(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_min(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_minMag(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_mix(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]));
}

fcDouble3 fcDouble3_clampk(fcDouble3 v, cl_double min, cl_double max) {
  return fcDouble3_create111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max));
}

fcDouble3 fcDouble3_maxk(fcDouble3 x, cl_double y) {
  return fcDouble3_create111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y));
}

fcDouble3 fcDouble3_mink(fcDouble3 x, cl_double y) {
  return fcDouble3_create111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y));
}

fcDouble3 fcDouble3_mixk(fcDouble3 x, fcDouble3 y, cl_double a) {
  return fcDouble3_create111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a));
}

fcDouble3 fcDouble3_acos(fcDouble3 a) {
  return fcDouble3_create111(fcMath_acos(a.s[0]), fcMath_acos(a.s[1]), fcMath_acos(a.s[2]));
}

fcDouble3 fcDouble3_acosh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_acosh(a.s[0]), fcMath_acosh(a.s[1]), fcMath_acosh(a.s[2]));
}

fcDouble3 fcDouble3_asin(fcDouble3 a) {
  return fcDouble3_create111(fcMath_asin(a.s[0]), fcMath_asin(a.s[1]), fcMath_asin(a.s[2]));
}

fcDouble3 fcDouble3_asinh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_asinh(a.s[0]), fcMath_asinh(a.s[1]), fcMath_asinh(a.s[2]));
}

fcDouble3 fcDouble3_atan(fcDouble3 a) {
  return fcDouble3_create111(fcMath_atan(a.s[0]), fcMath_atan(a.s[1]), fcMath_atan(a.s[2]));
}

fcDouble3 fcDouble3_atan2(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_atan2(a.s[0], b.s[0]), fcMath_atan2(a.s[1], b.s[1]), fcMath_atan2(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_atanh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_atanh(a.s[0]), fcMath_atanh(a.s[1]), fcMath_atanh(a.s[2]));
}

fcDouble3 fcDouble3_cbrt(fcDouble3 a) {
  return fcDouble3_create111(fcMath_cbrt(a.s[0]), fcMath_cbrt(a.s[1]), fcMath_cbrt(a.s[2]));
}

fcDouble3 fcDouble3_ceil(fcDouble3 a) {
  return fcDouble3_create111(fcMath_ceil(a.s[0]), fcMath_ceil(a.s[1]), fcMath_ceil(a.s[2]));
}

fcDouble3 fcDouble3_copySign(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_copySign(a.s[0], b.s[0]), fcMath_copySign(a.s[1], b.s[1]), fcMath_copySign(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_cos(fcDouble3 a) {
  return fcDouble3_create111(fcMath_cos(a.s[0]), fcMath_cos(a.s[1]), fcMath_cos(a.s[2]));
}

fcDouble3 fcDouble3_cosh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_cosh(a.s[0]), fcMath_cosh(a.s[1]), fcMath_cosh(a.s[2]));
}

fcDouble3 fcDouble3_erf(fcDouble3 a) {
  return fcDouble3_create111(fcMath_erf(a.s[0]), fcMath_erf(a.s[1]), fcMath_erf(a.s[2]));
}

fcDouble3 fcDouble3_erfc(fcDouble3 a) {
  return fcDouble3_create111(fcMath_erfc(a.s[0]), fcMath_erfc(a.s[1]), fcMath_erfc(a.s[2]));
}

fcDouble3 fcDouble3_exp(fcDouble3 a) {
  return fcDouble3_create111(fcMath_exp(a.s[0]), fcMath_exp(a.s[1]), fcMath_exp(a.s[2]));
}

fcDouble3 fcDouble3_exp10(fcDouble3 a) {
  return fcDouble3_create111(fcMath_exp10(a.s[0]), fcMath_exp10(a.s[1]), fcMath_exp10(a.s[2]));
}

fcDouble3 fcDouble3_exp2(fcDouble3 a) {
  return fcDouble3_create111(fcMath_exp2(a.s[0]), fcMath_exp2(a.s[1]), fcMath_exp2(a.s[2]));
}

fcDouble3 fcDouble3_expm1(fcDouble3 a) {
  return fcDouble3_create111(fcMath_expm1(a.s[0]), fcMath_expm1(a.s[1]), fcMath_expm1(a.s[2]));
}

fcDouble3 fcDouble3_fdim(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_fdim(a.s[0], b.s[0]), fcMath_fdim(a.s[1], b.s[1]), fcMath_fdim(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_floor(fcDouble3 a) {
  return fcDouble3_create111(fcMath_floor(a.s[0]), fcMath_floor(a.s[1]), fcMath_floor(a.s[2]));
}

fcDouble3 fcDouble3_fma(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_fma(a.s[0], b.s[0], c.s[0]), fcMath_fma(a.s[1], b.s[1], c.s[1]), fcMath_fma(a.s[2], b.s[2], c.s[2]));
}

fcDouble3 fcDouble3_fmod(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_fmod(a.s[0], b.s[0]), fcMath_fmod(a.s[1], b.s[1]), fcMath_fmod(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_fract(fcDouble3 a) {
  return fcDouble3_create111(fcMath_fract(a.s[0]), fcMath_fract(a.s[1]), fcMath_fract(a.s[2]));
}

fcDouble3 fcDouble3_frexp(fcDouble3 a) {
  return fcDouble3_create111(fcMath_frexp(a.s[0]), fcMath_frexp(a.s[1]), fcMath_frexp(a.s[2]));
}

fcDouble3 fcDouble3_getExponent(fcDouble3 a) {
  return fcDouble3_create111(fcMath_getExponent(a.s[0]), fcMath_getExponent(a.s[1]), fcMath_getExponent(a.s[2]));
}

fcDouble3 fcDouble3_hypot(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_hypot(a.s[0], b.s[0]), fcMath_hypot(a.s[1], b.s[1]), fcMath_hypot(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_lgamma(fcDouble3 a) {
  return fcDouble3_create111(fcMath_lgamma(a.s[0]), fcMath_lgamma(a.s[1]), fcMath_lgamma(a.s[2]));
}

fcDouble3 fcDouble3_log(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log(a.s[0]), fcMath_log(a.s[1]), fcMath_log(a.s[2]));
}

fcDouble3 fcDouble3_log10(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log10(a.s[0]), fcMath_log10(a.s[1]), fcMath_log10(a.s[2]));
}

fcDouble3 fcDouble3_log1p(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log1p(a.s[0]), fcMath_log1p(a.s[1]), fcMath_log1p(a.s[2]));
}

fcDouble3 fcDouble3_log2(fcDouble3 a) {
  return fcDouble3_create111(fcMath_log2(a.s[0]), fcMath_log2(a.s[1]), fcMath_log2(a.s[2]));
}

fcDouble3 fcDouble3_logb(fcDouble3 a) {
  return fcDouble3_create111(fcMath_logb(a.s[0]), fcMath_logb(a.s[1]), fcMath_logb(a.s[2]));
}

fcDouble3 fcDouble3_mad(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_mad(a.s[0], b.s[0], c.s[0]), fcMath_mad(a.s[1], b.s[1], c.s[1]), fcMath_mad(a.s[2], b.s[2], c.s[2]));
}

fcDouble3 fcDouble3_nextAfter(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_nextAfter(a.s[0], b.s[0]), fcMath_nextAfter(a.s[1], b.s[1]), fcMath_nextAfter(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_pow(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_pow(a.s[0], b.s[0]), fcMath_pow(a.s[1], b.s[1]), fcMath_pow(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_powr(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_powr(a.s[0], b.s[0]), fcMath_powr(a.s[1], b.s[1]), fcMath_powr(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_remainder(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_remainder(a.s[0], b.s[0]), fcMath_remainder(a.s[1], b.s[1]), fcMath_remainder(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_rint(fcDouble3 a) {
  return fcDouble3_create111(fcMath_rint(a.s[0]), fcMath_rint(a.s[1]), fcMath_rint(a.s[2]));
}

fcDouble3 fcDouble3_round(fcDouble3 a) {
  return fcDouble3_create111(fcMath_round(a.s[0]), fcMath_round(a.s[1]), fcMath_round(a.s[2]));
}

fcDouble3 fcDouble3_rsqrt(fcDouble3 a) {
  return fcDouble3_create111(fcMath_rsqrt(a.s[0]), fcMath_rsqrt(a.s[1]), fcMath_rsqrt(a.s[2]));
}

fcDouble3 fcDouble3_signum(fcDouble3 a) {
  return fcDouble3_create111(fcMath_signum(a.s[0]), fcMath_signum(a.s[1]), fcMath_signum(a.s[2]));
}

fcDouble3 fcDouble3_sin(fcDouble3 a) {
  return fcDouble3_create111(fcMath_sin(a.s[0]), fcMath_sin(a.s[1]), fcMath_sin(a.s[2]));
}

fcDouble3 fcDouble3_sinh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_sinh(a.s[0]), fcMath_sinh(a.s[1]), fcMath_sinh(a.s[2]));
}

fcDouble3 fcDouble3_smoothStep(fcDouble3 a, fcDouble3 b, fcDouble3 c) {
  return fcDouble3_create111(fcMath_smoothStep(a.s[0], b.s[0], c.s[0]), fcMath_smoothStep(a.s[1], b.s[1], c.s[1]), fcMath_smoothStep(a.s[2], b.s[2], c.s[2]));
}

fcDouble3 fcDouble3_sqrt(fcDouble3 a) {
  return fcDouble3_create111(fcMath_sqrt(a.s[0]), fcMath_sqrt(a.s[1]), fcMath_sqrt(a.s[2]));
}

fcDouble3 fcDouble3_step(fcDouble3 a, fcDouble3 b) {
  return fcDouble3_create111(fcMath_step(a.s[0], b.s[0]), fcMath_step(a.s[1], b.s[1]), fcMath_step(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_tan(fcDouble3 a) {
  return fcDouble3_create111(fcMath_tan(a.s[0]), fcMath_tan(a.s[1]), fcMath_tan(a.s[2]));
}

fcDouble3 fcDouble3_tanh(fcDouble3 a) {
  return fcDouble3_create111(fcMath_tanh(a.s[0]), fcMath_tanh(a.s[1]), fcMath_tanh(a.s[2]));
}

fcDouble3 fcDouble3_tgamma(fcDouble3 a) {
  return fcDouble3_create111(fcMath_tgamma(a.s[0]), fcMath_tgamma(a.s[1]), fcMath_tgamma(a.s[2]));
}

fcDouble3 fcDouble3_toDegrees(fcDouble3 a) {
  return fcDouble3_create111(fcMath_toDegrees(a.s[0]), fcMath_toDegrees(a.s[1]), fcMath_toDegrees(a.s[2]));
}

fcDouble3 fcDouble3_toRadians(fcDouble3 a) {
  return fcDouble3_create111(fcMath_toRadians(a.s[0]), fcMath_toRadians(a.s[1]), fcMath_toRadians(a.s[2]));
}

fcDouble3 fcDouble3_trunc(fcDouble3 a) {
  return fcDouble3_create111(fcMath_trunc(a.s[0]), fcMath_trunc(a.s[1]), fcMath_trunc(a.s[2]));
}

fcDouble3 fcDouble3_scalb(fcDouble3 a, fcInt3 n) {
  return fcDouble3_create111(fcMath_scalb(a.s[0], n.s[0]), fcMath_scalb(a.s[1], n.s[1]), fcMath_scalb(a.s[2], n.s[2]));
}

fcDouble3 fcDouble3_ldexp(fcDouble3 a, fcInt3 n) {
  return fcDouble3_create111(fcMath_ldexp(a.s[0], n.s[0]), fcMath_ldexp(a.s[1], n.s[1]), fcMath_ldexp(a.s[2], n.s[2]));
}

fcDouble3 fcDouble3_pown(fcDouble3 a, fcInt3 b) {
  return fcDouble3_create111(fcMath_pown(a.s[0], b.s[0]), fcMath_pown(a.s[1], b.s[1]), fcMath_pown(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_rootn(fcDouble3 a, fcInt3 b) {
  return fcDouble3_create111(fcMath_rootn(a.s[0], b.s[0]), fcMath_rootn(a.s[1], b.s[1]), fcMath_rootn(a.s[2], b.s[2]));
}

fcDouble3 fcDouble3_smoothStepk(fcDouble3 a, fcDouble3 b, cl_double c) {
  return fcDouble3_create111(fcMath_smoothStep(a.s[0], b.s[0], c), fcMath_smoothStep(a.s[1], b.s[1], c), fcMath_smoothStep(a.s[2], b.s[2], c));
}


//
// fcDouble4
//

fcDouble4 fcDouble4_create1(cl_double v) {
  return fcDouble4_create1111(v, v, v, v);
}

void fcDouble4_set1(fcDouble4* self, cl_double v) {
  fcDouble4_set1111(self, v, v, v, v);
}

fcDouble4 fcDouble4_create1111(cl_double x, cl_double y, cl_double z, cl_double w) {
  fcDouble4 result;
  fcDouble4_set1111(&result, x, y, z, w);
  return result;
}

void fcDouble4_set1111(fcDouble4* self, cl_double x, cl_double y, cl_double z, cl_double w) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
}

fcDouble4 fcDouble4_create112(cl_double x, cl_double y, fcDouble2 vec1) {
  return fcDouble4_create1111(x, y, vec1.s[0], vec1.s[1]);
}

void fcDouble4_set112(fcDouble4* self, cl_double x, cl_double y, fcDouble2 vec1) {
  fcDouble4_set1111(self, x, y, vec1.s[0], vec1.s[1]);
}

fcDouble4 fcDouble4_create121(cl_double x, fcDouble2 vec1, cl_double w) {
  return fcDouble4_create1111(x, vec1.s[0], vec1.s[1], w);
}

void fcDouble4_set121(fcDouble4* self, cl_double x, fcDouble2 vec1, cl_double w) {
  fcDouble4_set1111(self, x, vec1.s[0], vec1.s[1], w);
}

fcDouble4 fcDouble4_create13(cl_double x, fcDouble3 vec1) {
  return fcDouble4_create1111(x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcDouble4_set13(fcDouble4* self, cl_double x, fcDouble3 vec1) {
  fcDouble4_set1111(self, x, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcDouble4 fcDouble4_create211(fcDouble2 vec1, cl_double z, cl_double w) {
  return fcDouble4_create1111(vec1.s[0], vec1.s[1], z, w);
}

void fcDouble4_set211(fcDouble4* self, fcDouble2 vec1, cl_double z, cl_double w) {
  fcDouble4_set1111(self, vec1.s[0], vec1.s[1], z, w);
}

fcDouble4 fcDouble4_create22(fcDouble2 vec1, fcDouble2 vec2) {
  return fcDouble4_create1111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcDouble4_set22(fcDouble4* self, fcDouble2 vec1, fcDouble2 vec2) {
  fcDouble4_set1111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcDouble4 fcDouble4_create31(fcDouble3 vec1, cl_double w) {
  return fcDouble4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], w);
}

void fcDouble4_set31(fcDouble4* self, fcDouble3 vec1, cl_double w) {
  fcDouble4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], w);
}

fcDouble4 fcDouble4_create4(fcDouble4 vec1) {
  return fcDouble4_create1111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcDouble4_set4(fcDouble4* self, fcDouble4 vec1) {
  fcDouble4_set1111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcDouble2 fcDouble4_odd(fcDouble4 a) {
  return fcDouble2_create11(a.s[1], a.s[3]);
}

fcDouble2 fcDouble4_even(fcDouble4 a) {
  return fcDouble2_create11(a.s[0], a.s[2]);
}

fcByte4 fcDouble4_convertByte4(fcDouble4 a) {
  return fcByte4_create1111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]));
}

fcShort4 fcDouble4_convertShort4(fcDouble4 a) {
  return fcShort4_create1111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]));
}

fcInt4 fcDouble4_convertInt4(fcDouble4 a) {
  return fcInt4_create1111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]));
}

fcLong4 fcDouble4_convertLong4(fcDouble4 a) {
  return fcLong4_create1111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]));
}

fcFloat4 fcDouble4_convertFloat4(fcDouble4 a) {
  return fcFloat4_create1111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]));
}

fcDouble2 fcDouble4_asDouble2(fcDouble4 a) {
  return fcDouble2_create11(a.s[0], a.s[1]);
}

fcDouble3 fcDouble4_asDouble3(fcDouble4 a) {
  return fcDouble3_create111(a.s[0], a.s[1], a.s[2]);
}

fcInt4 fcDouble4_isEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
}

fcInt4 fcDouble4_isNotEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
}

fcInt4 fcDouble4_isGreater(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
}

fcInt4 fcDouble4_isGreaterEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
}

fcInt4 fcDouble4_isLess(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
}

fcInt4 fcDouble4_isLessEqual(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
}

fcDouble4 fcDouble4_select(fcDouble4 a, fcDouble4 b, fcInt4 c) {
  return fcDouble4_create1111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]));
}

fcInt4 fcDouble4_isFinite(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isFinite(a.s[0]), fcMath_isFinite(a.s[1]), fcMath_isFinite(a.s[2]), fcMath_isFinite(a.s[3]));
}

fcInt4 fcDouble4_isInf(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isInf(a.s[0]), fcMath_isInf(a.s[1]), fcMath_isInf(a.s[2]), fcMath_isInf(a.s[3]));
}

fcInt4 fcDouble4_isNaN(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isNaN(a.s[0]), fcMath_isNaN(a.s[1]), fcMath_isNaN(a.s[2]), fcMath_isNaN(a.s[3]));
}

fcInt4 fcDouble4_isNormal(fcDouble4 a) {
  return fcInt4_create1111(fcMath_isNormal(a.s[0]), fcMath_isNormal(a.s[1]), fcMath_isNormal(a.s[2]), fcMath_isNormal(a.s[3]));
}

fcInt4 fcDouble4_isOrdered(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(fcMath_isOrdered(a.s[0], b.s[0]), fcMath_isOrdered(a.s[1], b.s[1]), fcMath_isOrdered(a.s[2], b.s[2]), fcMath_isOrdered(a.s[3], b.s[3]));
}

fcInt4 fcDouble4_isUnordered(fcDouble4 a, fcDouble4 b) {
  return fcInt4_create1111(fcMath_isUnordered(a.s[0], b.s[0]), fcMath_isUnordered(a.s[1], b.s[1]), fcMath_isUnordered(a.s[2], b.s[2]), fcMath_isUnordered(a.s[3], b.s[3]));
}

cl_int fcDouble4_any(fcDouble4 a) {
  return a.s[0] != 0.0 || a.s[1] != 0.0 || a.s[2] != 0.0 || a.s[3] != 0.0;
}

cl_int fcDouble4_all(fcDouble4 a) {
  return !(a.s[0] == 0.0 || a.s[1] == 0.0 || a.s[2] == 0.0 || a.s[3] == 0.0);
}

fcDouble4 fcDouble4_neg(fcDouble4 a) {
  return fcDouble4_create1111(-a.s[0], -a.s[1], -a.s[2], -a.s[3]);
}

fcDouble4 fcDouble4_add(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3]);
}

fcDouble4 fcDouble4_sub(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3]);
}

fcDouble4 fcDouble4_muld(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]));
}

fcFloat4 fcDouble4_mulf(fcDouble4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]));
}

fcDouble4 fcDouble4_mulkd(fcDouble4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k));
}

fcFloat4 fcDouble4_mulkf(fcDouble4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k));
}

fcDouble4 fcDouble4_divd(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]));
}

fcFloat4 fcDouble4_divf(fcDouble4 a, fcFloat4 b) {
  return fcFloat4_create1111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]));
}

fcDouble4 fcDouble4_divkd(fcDouble4 a, cl_double k) {
  return fcDouble4_create1111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k));
}

fcFloat4 fcDouble4_divkf(fcDouble4 a, cl_float k) {
  return fcFloat4_create1111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k));
}

fcDouble4 fcDouble4_cross(fcDouble4 a, fcDouble4 b) {
  cl_double resX = a.s[1] * b.s[2] - a.s[2] * b.s[1];
  cl_double resY = a.s[2] * b.s[0] - a.s[0] * b.s[2];
  cl_double resZ = a.s[0] * b.s[1] - a.s[1] * b.s[0];
  return fcDouble4_create1111(resX, resY, resZ, 0.0);
}

cl_double fcDouble4_dot(fcDouble4 a, fcDouble4 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2] + a.s[3] * b.s[3];
}

cl_double fcDouble4_distance(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_length(fcDouble4_sub(a, b));
}

cl_double fcDouble4_length(fcDouble4 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2] + a.s[3] * a.s[3]);
}

fcDouble4 fcDouble4_normalize(fcDouble4 a) {
  cl_double len = fcDouble4_length(a);
  return fcDouble4_create1111((cl_double)(a.s[0] / len), (cl_double)(a.s[1] / len), (cl_double)(a.s[2] / len), (cl_double)(a.s[3] / len));
}

fcDouble4 fcDouble4_abs(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]));
}

fcDouble4 fcDouble4_clamp(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]));
}

fcDouble4 fcDouble4_max(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_maxMag(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_min(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_minMag(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_mix(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]));
}

fcDouble4 fcDouble4_clampk(fcDouble4 v, cl_double min, cl_double max) {
  return fcDouble4_create1111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max));
}

fcDouble4 fcDouble4_maxk(fcDouble4 x, cl_double y) {
  return fcDouble4_create1111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y));
}

fcDouble4 fcDouble4_mink(fcDouble4 x, cl_double y) {
  return fcDouble4_create1111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y));
}

fcDouble4 fcDouble4_mixk(fcDouble4 x, fcDouble4 y, cl_double a) {
  return fcDouble4_create1111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a));
}

fcDouble4 fcDouble4_acos(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_acos(a.s[0]), fcMath_acos(a.s[1]), fcMath_acos(a.s[2]), fcMath_acos(a.s[3]));
}

fcDouble4 fcDouble4_acosh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_acosh(a.s[0]), fcMath_acosh(a.s[1]), fcMath_acosh(a.s[2]), fcMath_acosh(a.s[3]));
}

fcDouble4 fcDouble4_asin(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_asin(a.s[0]), fcMath_asin(a.s[1]), fcMath_asin(a.s[2]), fcMath_asin(a.s[3]));
}

fcDouble4 fcDouble4_asinh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_asinh(a.s[0]), fcMath_asinh(a.s[1]), fcMath_asinh(a.s[2]), fcMath_asinh(a.s[3]));
}

fcDouble4 fcDouble4_atan(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_atan(a.s[0]), fcMath_atan(a.s[1]), fcMath_atan(a.s[2]), fcMath_atan(a.s[3]));
}

fcDouble4 fcDouble4_atan2(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_atan2(a.s[0], b.s[0]), fcMath_atan2(a.s[1], b.s[1]), fcMath_atan2(a.s[2], b.s[2]), fcMath_atan2(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_atanh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_atanh(a.s[0]), fcMath_atanh(a.s[1]), fcMath_atanh(a.s[2]), fcMath_atanh(a.s[3]));
}

fcDouble4 fcDouble4_cbrt(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_cbrt(a.s[0]), fcMath_cbrt(a.s[1]), fcMath_cbrt(a.s[2]), fcMath_cbrt(a.s[3]));
}

fcDouble4 fcDouble4_ceil(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_ceil(a.s[0]), fcMath_ceil(a.s[1]), fcMath_ceil(a.s[2]), fcMath_ceil(a.s[3]));
}

fcDouble4 fcDouble4_copySign(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_copySign(a.s[0], b.s[0]), fcMath_copySign(a.s[1], b.s[1]), fcMath_copySign(a.s[2], b.s[2]), fcMath_copySign(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_cos(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_cos(a.s[0]), fcMath_cos(a.s[1]), fcMath_cos(a.s[2]), fcMath_cos(a.s[3]));
}

fcDouble4 fcDouble4_cosh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_cosh(a.s[0]), fcMath_cosh(a.s[1]), fcMath_cosh(a.s[2]), fcMath_cosh(a.s[3]));
}

fcDouble4 fcDouble4_erf(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_erf(a.s[0]), fcMath_erf(a.s[1]), fcMath_erf(a.s[2]), fcMath_erf(a.s[3]));
}

fcDouble4 fcDouble4_erfc(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_erfc(a.s[0]), fcMath_erfc(a.s[1]), fcMath_erfc(a.s[2]), fcMath_erfc(a.s[3]));
}

fcDouble4 fcDouble4_exp(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_exp(a.s[0]), fcMath_exp(a.s[1]), fcMath_exp(a.s[2]), fcMath_exp(a.s[3]));
}

fcDouble4 fcDouble4_exp10(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_exp10(a.s[0]), fcMath_exp10(a.s[1]), fcMath_exp10(a.s[2]), fcMath_exp10(a.s[3]));
}

fcDouble4 fcDouble4_exp2(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_exp2(a.s[0]), fcMath_exp2(a.s[1]), fcMath_exp2(a.s[2]), fcMath_exp2(a.s[3]));
}

fcDouble4 fcDouble4_expm1(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_expm1(a.s[0]), fcMath_expm1(a.s[1]), fcMath_expm1(a.s[2]), fcMath_expm1(a.s[3]));
}

fcDouble4 fcDouble4_fdim(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_fdim(a.s[0], b.s[0]), fcMath_fdim(a.s[1], b.s[1]), fcMath_fdim(a.s[2], b.s[2]), fcMath_fdim(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_floor(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_floor(a.s[0]), fcMath_floor(a.s[1]), fcMath_floor(a.s[2]), fcMath_floor(a.s[3]));
}

fcDouble4 fcDouble4_fma(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_fma(a.s[0], b.s[0], c.s[0]), fcMath_fma(a.s[1], b.s[1], c.s[1]), fcMath_fma(a.s[2], b.s[2], c.s[2]), fcMath_fma(a.s[3], b.s[3], c.s[3]));
}

fcDouble4 fcDouble4_fmod(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_fmod(a.s[0], b.s[0]), fcMath_fmod(a.s[1], b.s[1]), fcMath_fmod(a.s[2], b.s[2]), fcMath_fmod(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_fract(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_fract(a.s[0]), fcMath_fract(a.s[1]), fcMath_fract(a.s[2]), fcMath_fract(a.s[3]));
}

fcDouble4 fcDouble4_frexp(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_frexp(a.s[0]), fcMath_frexp(a.s[1]), fcMath_frexp(a.s[2]), fcMath_frexp(a.s[3]));
}

fcDouble4 fcDouble4_getExponent(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_getExponent(a.s[0]), fcMath_getExponent(a.s[1]), fcMath_getExponent(a.s[2]), fcMath_getExponent(a.s[3]));
}

fcDouble4 fcDouble4_hypot(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_hypot(a.s[0], b.s[0]), fcMath_hypot(a.s[1], b.s[1]), fcMath_hypot(a.s[2], b.s[2]), fcMath_hypot(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_lgamma(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_lgamma(a.s[0]), fcMath_lgamma(a.s[1]), fcMath_lgamma(a.s[2]), fcMath_lgamma(a.s[3]));
}

fcDouble4 fcDouble4_log(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log(a.s[0]), fcMath_log(a.s[1]), fcMath_log(a.s[2]), fcMath_log(a.s[3]));
}

fcDouble4 fcDouble4_log10(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log10(a.s[0]), fcMath_log10(a.s[1]), fcMath_log10(a.s[2]), fcMath_log10(a.s[3]));
}

fcDouble4 fcDouble4_log1p(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log1p(a.s[0]), fcMath_log1p(a.s[1]), fcMath_log1p(a.s[2]), fcMath_log1p(a.s[3]));
}

fcDouble4 fcDouble4_log2(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_log2(a.s[0]), fcMath_log2(a.s[1]), fcMath_log2(a.s[2]), fcMath_log2(a.s[3]));
}

fcDouble4 fcDouble4_logb(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_logb(a.s[0]), fcMath_logb(a.s[1]), fcMath_logb(a.s[2]), fcMath_logb(a.s[3]));
}

fcDouble4 fcDouble4_mad(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_mad(a.s[0], b.s[0], c.s[0]), fcMath_mad(a.s[1], b.s[1], c.s[1]), fcMath_mad(a.s[2], b.s[2], c.s[2]), fcMath_mad(a.s[3], b.s[3], c.s[3]));
}

fcDouble4 fcDouble4_nextAfter(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_nextAfter(a.s[0], b.s[0]), fcMath_nextAfter(a.s[1], b.s[1]), fcMath_nextAfter(a.s[2], b.s[2]), fcMath_nextAfter(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_pow(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_pow(a.s[0], b.s[0]), fcMath_pow(a.s[1], b.s[1]), fcMath_pow(a.s[2], b.s[2]), fcMath_pow(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_powr(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_powr(a.s[0], b.s[0]), fcMath_powr(a.s[1], b.s[1]), fcMath_powr(a.s[2], b.s[2]), fcMath_powr(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_remainder(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_remainder(a.s[0], b.s[0]), fcMath_remainder(a.s[1], b.s[1]), fcMath_remainder(a.s[2], b.s[2]), fcMath_remainder(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_rint(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_rint(a.s[0]), fcMath_rint(a.s[1]), fcMath_rint(a.s[2]), fcMath_rint(a.s[3]));
}

fcDouble4 fcDouble4_round(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_round(a.s[0]), fcMath_round(a.s[1]), fcMath_round(a.s[2]), fcMath_round(a.s[3]));
}

fcDouble4 fcDouble4_rsqrt(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_rsqrt(a.s[0]), fcMath_rsqrt(a.s[1]), fcMath_rsqrt(a.s[2]), fcMath_rsqrt(a.s[3]));
}

fcDouble4 fcDouble4_signum(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_signum(a.s[0]), fcMath_signum(a.s[1]), fcMath_signum(a.s[2]), fcMath_signum(a.s[3]));
}

fcDouble4 fcDouble4_sin(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_sin(a.s[0]), fcMath_sin(a.s[1]), fcMath_sin(a.s[2]), fcMath_sin(a.s[3]));
}

fcDouble4 fcDouble4_sinh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_sinh(a.s[0]), fcMath_sinh(a.s[1]), fcMath_sinh(a.s[2]), fcMath_sinh(a.s[3]));
}

fcDouble4 fcDouble4_smoothStep(fcDouble4 a, fcDouble4 b, fcDouble4 c) {
  return fcDouble4_create1111(fcMath_smoothStep(a.s[0], b.s[0], c.s[0]), fcMath_smoothStep(a.s[1], b.s[1], c.s[1]), fcMath_smoothStep(a.s[2], b.s[2], c.s[2]), fcMath_smoothStep(a.s[3], b.s[3], c.s[3]));
}

fcDouble4 fcDouble4_sqrt(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_sqrt(a.s[0]), fcMath_sqrt(a.s[1]), fcMath_sqrt(a.s[2]), fcMath_sqrt(a.s[3]));
}

fcDouble4 fcDouble4_step(fcDouble4 a, fcDouble4 b) {
  return fcDouble4_create1111(fcMath_step(a.s[0], b.s[0]), fcMath_step(a.s[1], b.s[1]), fcMath_step(a.s[2], b.s[2]), fcMath_step(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_tan(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_tan(a.s[0]), fcMath_tan(a.s[1]), fcMath_tan(a.s[2]), fcMath_tan(a.s[3]));
}

fcDouble4 fcDouble4_tanh(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_tanh(a.s[0]), fcMath_tanh(a.s[1]), fcMath_tanh(a.s[2]), fcMath_tanh(a.s[3]));
}

fcDouble4 fcDouble4_tgamma(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_tgamma(a.s[0]), fcMath_tgamma(a.s[1]), fcMath_tgamma(a.s[2]), fcMath_tgamma(a.s[3]));
}

fcDouble4 fcDouble4_toDegrees(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_toDegrees(a.s[0]), fcMath_toDegrees(a.s[1]), fcMath_toDegrees(a.s[2]), fcMath_toDegrees(a.s[3]));
}

fcDouble4 fcDouble4_toRadians(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_toRadians(a.s[0]), fcMath_toRadians(a.s[1]), fcMath_toRadians(a.s[2]), fcMath_toRadians(a.s[3]));
}

fcDouble4 fcDouble4_trunc(fcDouble4 a) {
  return fcDouble4_create1111(fcMath_trunc(a.s[0]), fcMath_trunc(a.s[1]), fcMath_trunc(a.s[2]), fcMath_trunc(a.s[3]));
}

fcDouble4 fcDouble4_scalb(fcDouble4 a, fcInt4 n) {
  return fcDouble4_create1111(fcMath_scalb(a.s[0], n.s[0]), fcMath_scalb(a.s[1], n.s[1]), fcMath_scalb(a.s[2], n.s[2]), fcMath_scalb(a.s[3], n.s[3]));
}

fcDouble4 fcDouble4_ldexp(fcDouble4 a, fcInt4 n) {
  return fcDouble4_create1111(fcMath_ldexp(a.s[0], n.s[0]), fcMath_ldexp(a.s[1], n.s[1]), fcMath_ldexp(a.s[2], n.s[2]), fcMath_ldexp(a.s[3], n.s[3]));
}

fcDouble4 fcDouble4_pown(fcDouble4 a, fcInt4 b) {
  return fcDouble4_create1111(fcMath_pown(a.s[0], b.s[0]), fcMath_pown(a.s[1], b.s[1]), fcMath_pown(a.s[2], b.s[2]), fcMath_pown(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_rootn(fcDouble4 a, fcInt4 b) {
  return fcDouble4_create1111(fcMath_rootn(a.s[0], b.s[0]), fcMath_rootn(a.s[1], b.s[1]), fcMath_rootn(a.s[2], b.s[2]), fcMath_rootn(a.s[3], b.s[3]));
}

fcDouble4 fcDouble4_smoothStepk(fcDouble4 a, fcDouble4 b, cl_double c) {
  return fcDouble4_create1111(fcMath_smoothStep(a.s[0], b.s[0], c), fcMath_smoothStep(a.s[1], b.s[1], c), fcMath_smoothStep(a.s[2], b.s[2], c), fcMath_smoothStep(a.s[3], b.s[3], c));
}


//
// fcDouble8
//

fcDouble8 fcDouble8_create1(cl_double v) {
  return fcDouble8_create11111111(v, v, v, v, v, v, v, v);
}

void fcDouble8_set1(fcDouble8* self, cl_double v) {
  fcDouble8_set11111111(self, v, v, v, v, v, v, v, v);
}

fcDouble8 fcDouble8_create11111111(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8 result;
  fcDouble8_set11111111(&result, x, y, z, w, s4, s5, s6, s7);
  return result;
}

void fcDouble8_set11111111(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  self->s[0] = x;
  self->s[1] = y;
  self->s[2] = z;
  self->s[3] = w;
  self->s[4] = s4;
  self->s[5] = s5;
  self->s[6] = s6;
  self->s[7] = s7;
}

fcDouble8 fcDouble8_create1111112(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec1) {
  return fcDouble8_create11111111(x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

void fcDouble8_set1111112(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec1) {
  fcDouble8_set11111111(self, x, y, z, w, s4, s5, vec1.s[0], vec1.s[1]);
}

fcDouble8 fcDouble8_create1111121(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble2 vec1, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

void fcDouble8_set1111121(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble2 vec1, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], s7);
}

fcDouble8 fcDouble8_create111113(cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble3 vec1) {
  return fcDouble8_create11111111(x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

void fcDouble8_set111113(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, cl_double s4, fcDouble3 vec1) {
  fcDouble8_set11111111(self, x, y, z, w, s4, vec1.s[0], vec1.s[1], vec1.s[2]);
}

fcDouble8 fcDouble8_create1111211(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

void fcDouble8_set1111211(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], s6, s7);
}

fcDouble8 fcDouble8_create111122(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

void fcDouble8_set111122(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble2 vec1, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create111131(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble3 vec1, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

void fcDouble8_set111131(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble3 vec1, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], s7);
}

fcDouble8 fcDouble8_create11114(cl_double x, cl_double y, cl_double z, cl_double w, fcDouble4 vec1) {
  return fcDouble8_create11111111(x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

void fcDouble8_set11114(fcDouble8* self, cl_double x, cl_double y, cl_double z, cl_double w, fcDouble4 vec1) {
  fcDouble8_set11111111(self, x, y, z, w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
}

fcDouble8 fcDouble8_create1112111(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

void fcDouble8_set1112111(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, s6, s7);
}

fcDouble8 fcDouble8_create111212(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set111212(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create111221(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set111221(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create11123(cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set11123(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble2 vec1, fcDouble3 vec2) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create111311(cl_double x, cl_double y, cl_double z, fcDouble3 vec1, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

void fcDouble8_set111311(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble3 vec1, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], s6, s7);
}

fcDouble8 fcDouble8_create11132(cl_double x, cl_double y, cl_double z, fcDouble3 vec1, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

void fcDouble8_set11132(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble3 vec1, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create11141(cl_double x, cl_double y, cl_double z, fcDouble4 vec1, cl_double s7) {
  return fcDouble8_create11111111(x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

void fcDouble8_set11141(fcDouble8* self, cl_double x, cl_double y, cl_double z, fcDouble4 vec1, cl_double s7) {
  fcDouble8_set11111111(self, x, y, z, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s7);
}

fcDouble8 fcDouble8_create1121111(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

void fcDouble8_set1121111(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create112112(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set112112(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create112121(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set112121(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create11213(cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set11213(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, cl_double s4, fcDouble3 vec2) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create112211(cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

void fcDouble8_set112211(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s6, s7);
}

fcDouble8 fcDouble8_create11222(cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set11222(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create11231(cl_double x, cl_double y, fcDouble2 vec1, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcDouble8_set11231(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble3 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcDouble8 fcDouble8_create1124(cl_double x, cl_double y, fcDouble2 vec1, fcDouble4 vec2) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcDouble8_set1124(fcDouble8* self, cl_double x, cl_double y, fcDouble2 vec1, fcDouble4 vec2) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcDouble8 fcDouble8_create113111(cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

void fcDouble8_set113111(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, s6, s7);
}

fcDouble8 fcDouble8_create11312(cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set11312(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create11321(cl_double x, cl_double y, fcDouble3 vec1, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set11321(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create1133(cl_double x, cl_double y, fcDouble3 vec1, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set1133(fcDouble8* self, cl_double x, cl_double y, fcDouble3 vec1, fcDouble3 vec2) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create11411(cl_double x, cl_double y, fcDouble4 vec1, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

void fcDouble8_set11411(fcDouble8* self, cl_double x, cl_double y, fcDouble4 vec1, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s6, s7);
}

fcDouble8 fcDouble8_create1142(cl_double x, cl_double y, fcDouble4 vec1, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

void fcDouble8_set1142(fcDouble8* self, cl_double x, cl_double y, fcDouble4 vec1, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, y, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create1211111(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

void fcDouble8_set1211111(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create121112(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set121112(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create121121(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set121121(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create12113(cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set12113(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, cl_double s4, fcDouble3 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create121211(cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcDouble8_set121211(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcDouble8 fcDouble8_create12122(cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set12122(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create12131(cl_double x, fcDouble2 vec1, cl_double w, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcDouble8_set12131(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble3 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcDouble8 fcDouble8_create1214(cl_double x, fcDouble2 vec1, cl_double w, fcDouble4 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcDouble8_set1214(fcDouble8* self, cl_double x, fcDouble2 vec1, cl_double w, fcDouble4 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcDouble8 fcDouble8_create122111(cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcDouble8_set122111(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcDouble8 fcDouble8_create12212(cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcDouble8_set12212(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create12221(cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcDouble8_set12221(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcDouble8 fcDouble8_create1223(cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcDouble8_set1223(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcDouble8 fcDouble8_create12311(cl_double x, fcDouble2 vec1, fcDouble3 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcDouble8_set12311(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble3 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcDouble8 fcDouble8_create1232(cl_double x, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set1232(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create1241(cl_double x, fcDouble2 vec1, fcDouble4 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcDouble8_set1241(fcDouble8* self, cl_double x, fcDouble2 vec1, fcDouble4 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcDouble8 fcDouble8_create131111(cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

void fcDouble8_set131111(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create13112(cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set13112(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create13121(cl_double x, fcDouble3 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set13121(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create1313(cl_double x, fcDouble3 vec1, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set1313(fcDouble8* self, cl_double x, fcDouble3 vec1, cl_double s4, fcDouble3 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create13211(cl_double x, fcDouble3 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

void fcDouble8_set13211(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s6, s7);
}

fcDouble8 fcDouble8_create1322(cl_double x, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set1322(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create1331(cl_double x, fcDouble3 vec1, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcDouble8_set1331(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble3 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcDouble8 fcDouble8_create134(cl_double x, fcDouble3 vec1, fcDouble4 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcDouble8_set134(fcDouble8* self, cl_double x, fcDouble3 vec1, fcDouble4 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcDouble8 fcDouble8_create14111(cl_double x, fcDouble4 vec1, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

void fcDouble8_set14111(fcDouble8* self, cl_double x, fcDouble4 vec1, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, s6, s7);
}

fcDouble8 fcDouble8_create1412(cl_double x, fcDouble4 vec1, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set1412(fcDouble8* self, cl_double x, fcDouble4 vec1, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create1421(cl_double x, fcDouble4 vec1, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set1421(fcDouble8* self, cl_double x, fcDouble4 vec1, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create143(cl_double x, fcDouble4 vec1, fcDouble3 vec2) {
  return fcDouble8_create11111111(x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set143(fcDouble8* self, cl_double x, fcDouble4 vec1, fcDouble3 vec2) {
  fcDouble8_set11111111(self, x, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create2111111(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

void fcDouble8_set2111111(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create211112(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set211112(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create211121(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set211121(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create21113(fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set21113(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, cl_double s4, fcDouble3 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create211211(fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcDouble8_set211211(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], s6, s7);
}

fcDouble8 fcDouble8_create21122(fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set21122(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create21131(fcDouble2 vec1, cl_double z, cl_double w, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcDouble8_set21131(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble3 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcDouble8 fcDouble8_create2114(fcDouble2 vec1, cl_double z, cl_double w, fcDouble4 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcDouble8_set2114(fcDouble8* self, fcDouble2 vec1, cl_double z, cl_double w, fcDouble4 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcDouble8 fcDouble8_create212111(fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcDouble8_set212111(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcDouble8 fcDouble8_create21212(fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcDouble8_set21212(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create21221(fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcDouble8_set21221(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcDouble8 fcDouble8_create2123(fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcDouble8_set2123(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble2 vec2, fcDouble3 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcDouble8 fcDouble8_create21311(fcDouble2 vec1, cl_double z, fcDouble3 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcDouble8_set21311(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble3 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcDouble8 fcDouble8_create2132(fcDouble2 vec1, cl_double z, fcDouble3 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set2132(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble3 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create2141(fcDouble2 vec1, cl_double z, fcDouble4 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcDouble8_set2141(fcDouble8* self, fcDouble2 vec1, cl_double z, fcDouble4 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], z, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcDouble8 fcDouble8_create221111(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

void fcDouble8_set221111(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create22112(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

void fcDouble8_set22112(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, cl_double s5, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, s5, vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create22121(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

void fcDouble8_set22121(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble2 vec3, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], s7);
}

fcDouble8 fcDouble8_create2213(fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcDouble8_set2213(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, cl_double s4, fcDouble3 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], s4, vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcDouble8 fcDouble8_create22211(fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

void fcDouble8_set22211(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s6, s7);
}

fcDouble8 fcDouble8_create2222(fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, fcDouble2 vec4) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

void fcDouble8_set2222(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble2 vec3, fcDouble2 vec4) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec4.s[0], vec4.s[1]);
}

fcDouble8 fcDouble8_create2231(fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

void fcDouble8_set2231(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble3 vec3, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], s7);
}

fcDouble8 fcDouble8_create224(fcDouble2 vec1, fcDouble2 vec2, fcDouble4 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

void fcDouble8_set224(fcDouble8* self, fcDouble2 vec1, fcDouble2 vec2, fcDouble4 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2], vec3.s[3]);
}

fcDouble8 fcDouble8_create23111(fcDouble2 vec1, fcDouble3 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

void fcDouble8_set23111(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, s6, s7);
}

fcDouble8 fcDouble8_create2312(fcDouble2 vec1, fcDouble3 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

void fcDouble8_set2312(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, cl_double s5, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], s5, vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create2321(fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

void fcDouble8_set2321(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, fcDouble2 vec3, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], s7);
}

fcDouble8 fcDouble8_create233(fcDouble2 vec1, fcDouble3 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcDouble8_set233(fcDouble8* self, fcDouble2 vec1, fcDouble3 vec2, fcDouble3 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcDouble8 fcDouble8_create2411(fcDouble2 vec1, fcDouble4 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

void fcDouble8_set2411(fcDouble8* self, fcDouble2 vec1, fcDouble4 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s6, s7);
}

fcDouble8 fcDouble8_create242(fcDouble2 vec1, fcDouble4 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set242(fcDouble8* self, fcDouble2 vec1, fcDouble4 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create311111(fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

void fcDouble8_set311111(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create31112(fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set31112(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create31121(fcDouble3 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set31121(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create3113(fcDouble3 vec1, cl_double w, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set3113(fcDouble8* self, fcDouble3 vec1, cl_double w, cl_double s4, fcDouble3 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create31211(fcDouble3 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

void fcDouble8_set31211(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble2 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], s6, s7);
}

fcDouble8 fcDouble8_create3122(fcDouble3 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set3122(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble2 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create3131(fcDouble3 vec1, cl_double w, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcDouble8_set3131(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble3 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcDouble8 fcDouble8_create314(fcDouble3 vec1, cl_double w, fcDouble4 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcDouble8_set314(fcDouble8* self, fcDouble3 vec1, cl_double w, fcDouble4 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], w, vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcDouble8 fcDouble8_create32111(fcDouble3 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

void fcDouble8_set32111(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, s6, s7);
}

fcDouble8 fcDouble8_create3212(fcDouble3 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

void fcDouble8_set3212(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, cl_double s5, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], s5, vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create3221(fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

void fcDouble8_set3221(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, fcDouble2 vec3, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], s7);
}

fcDouble8 fcDouble8_create323(fcDouble3 vec1, fcDouble2 vec2, fcDouble3 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

void fcDouble8_set323(fcDouble8* self, fcDouble3 vec1, fcDouble2 vec2, fcDouble3 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1], vec3.s[2]);
}

fcDouble8 fcDouble8_create3311(fcDouble3 vec1, fcDouble3 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

void fcDouble8_set3311(fcDouble8* self, fcDouble3 vec1, fcDouble3 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], s6, s7);
}

fcDouble8 fcDouble8_create332(fcDouble3 vec1, fcDouble3 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set332(fcDouble8* self, fcDouble3 vec1, fcDouble3 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create341(fcDouble3 vec1, fcDouble4 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

void fcDouble8_set341(fcDouble8* self, fcDouble3 vec1, fcDouble4 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3], s7);
}

fcDouble8 fcDouble8_create41111(fcDouble4 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

void fcDouble8_set41111(fcDouble8* self, fcDouble4 vec1, cl_double s4, cl_double s5, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, s6, s7);
}

fcDouble8 fcDouble8_create4112(fcDouble4 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

void fcDouble8_set4112(fcDouble8* self, fcDouble4 vec1, cl_double s4, cl_double s5, fcDouble2 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, s5, vec2.s[0], vec2.s[1]);
}

fcDouble8 fcDouble8_create4121(fcDouble4 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

void fcDouble8_set4121(fcDouble8* self, fcDouble4 vec1, cl_double s4, fcDouble2 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], s7);
}

fcDouble8 fcDouble8_create413(fcDouble4 vec1, cl_double s4, fcDouble3 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

void fcDouble8_set413(fcDouble8* self, fcDouble4 vec1, cl_double s4, fcDouble3 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], s4, vec2.s[0], vec2.s[1], vec2.s[2]);
}

fcDouble8 fcDouble8_create4211(fcDouble4 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

void fcDouble8_set4211(fcDouble8* self, fcDouble4 vec1, fcDouble2 vec2, cl_double s6, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], s6, s7);
}

fcDouble8 fcDouble8_create422(fcDouble4 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

void fcDouble8_set422(fcDouble8* self, fcDouble4 vec1, fcDouble2 vec2, fcDouble2 vec3) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec3.s[0], vec3.s[1]);
}

fcDouble8 fcDouble8_create431(fcDouble4 vec1, fcDouble3 vec2, cl_double s7) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

void fcDouble8_set431(fcDouble8* self, fcDouble4 vec1, fcDouble3 vec2, cl_double s7) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], s7);
}

fcDouble8 fcDouble8_create44(fcDouble4 vec1, fcDouble4 vec2) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

void fcDouble8_set44(fcDouble8* self, fcDouble4 vec1, fcDouble4 vec2) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec2.s[0], vec2.s[1], vec2.s[2], vec2.s[3]);
}

fcDouble8 fcDouble8_create8(fcDouble8 vec1) {
  return fcDouble8_create11111111(vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

void fcDouble8_set8(fcDouble8* self, fcDouble8 vec1) {
  fcDouble8_set11111111(self, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3], vec1.s[4], vec1.s[5], vec1.s[6], vec1.s[7]);
}

fcDouble4 fcDouble8_odd(fcDouble8 a) {
  return fcDouble4_create1111(a.s[1], a.s[3], a.s[5], a.s[7]);
}

fcDouble4 fcDouble8_even(fcDouble8 a) {
  return fcDouble4_create1111(a.s[0], a.s[2], a.s[4], a.s[6]);
}

fcByte8 fcDouble8_convertByte8(fcDouble8 a) {
  return fcByte8_create11111111((cl_byte)(a.s[0]), (cl_byte)(a.s[1]), (cl_byte)(a.s[2]), (cl_byte)(a.s[3]), (cl_byte)(a.s[4]), (cl_byte)(a.s[5]), (cl_byte)(a.s[6]), (cl_byte)(a.s[7]));
}

fcShort8 fcDouble8_convertShort8(fcDouble8 a) {
  return fcShort8_create11111111((cl_short)(a.s[0]), (cl_short)(a.s[1]), (cl_short)(a.s[2]), (cl_short)(a.s[3]), (cl_short)(a.s[4]), (cl_short)(a.s[5]), (cl_short)(a.s[6]), (cl_short)(a.s[7]));
}

fcInt8 fcDouble8_convertInt8(fcDouble8 a) {
  return fcInt8_create11111111((cl_int)(a.s[0]), (cl_int)(a.s[1]), (cl_int)(a.s[2]), (cl_int)(a.s[3]), (cl_int)(a.s[4]), (cl_int)(a.s[5]), (cl_int)(a.s[6]), (cl_int)(a.s[7]));
}

fcLong8 fcDouble8_convertLong8(fcDouble8 a) {
  return fcLong8_create11111111((cl_long)(a.s[0]), (cl_long)(a.s[1]), (cl_long)(a.s[2]), (cl_long)(a.s[3]), (cl_long)(a.s[4]), (cl_long)(a.s[5]), (cl_long)(a.s[6]), (cl_long)(a.s[7]));
}

fcFloat8 fcDouble8_convertFloat8(fcDouble8 a) {
  return fcFloat8_create11111111((cl_float)(a.s[0]), (cl_float)(a.s[1]), (cl_float)(a.s[2]), (cl_float)(a.s[3]), (cl_float)(a.s[4]), (cl_float)(a.s[5]), (cl_float)(a.s[6]), (cl_float)(a.s[7]));
}

fcDouble2 fcDouble8_asDouble2(fcDouble8 a) {
  return fcDouble2_create11(a.s[0], a.s[1]);
}

fcDouble3 fcDouble8_asDouble3(fcDouble8 a) {
  return fcDouble3_create111(a.s[0], a.s[1], a.s[2]);
}

fcDouble4 fcDouble8_asDouble4(fcDouble8 a) {
  return fcDouble4_create1111(a.s[0], a.s[1], a.s[2], a.s[3]);
}

fcInt8 fcDouble8_isEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0, a.s[4] == b.s[4]? 1 : 0, a.s[5] == b.s[5]? 1 : 0, a.s[6] == b.s[6]? 1 : 0, a.s[7] == b.s[7]? 1 : 0);
}

fcInt8 fcDouble8_isNotEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0, a.s[4] != b.s[4]? 1 : 0, a.s[5] != b.s[5]? 1 : 0, a.s[6] != b.s[6]? 1 : 0, a.s[7] != b.s[7]? 1 : 0);
}

fcInt8 fcDouble8_isGreater(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0, a.s[4] > b.s[4]? 1 : 0, a.s[5] > b.s[5]? 1 : 0, a.s[6] > b.s[6]? 1 : 0, a.s[7] > b.s[7]? 1 : 0);
}

fcInt8 fcDouble8_isGreaterEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0, a.s[4] >= b.s[4]? 1 : 0, a.s[5] >= b.s[5]? 1 : 0, a.s[6] >= b.s[6]? 1 : 0, a.s[7] >= b.s[7]? 1 : 0);
}

fcInt8 fcDouble8_isLess(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0, a.s[4] < b.s[4]? 1 : 0, a.s[5] < b.s[5]? 1 : 0, a.s[6] < b.s[6]? 1 : 0, a.s[7] < b.s[7]? 1 : 0);
}

fcInt8 fcDouble8_isLessEqual(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0, a.s[4] <= b.s[4]? 1 : 0, a.s[5] <= b.s[5]? 1 : 0, a.s[6] <= b.s[6]? 1 : 0, a.s[7] <= b.s[7]? 1 : 0);
}

fcDouble8 fcDouble8_select(fcDouble8 a, fcDouble8 b, fcInt8 c) {
  return fcDouble8_create11111111(fcMath_select(a.s[0], b.s[0], c.s[0]), fcMath_select(a.s[1], b.s[1], c.s[1]), fcMath_select(a.s[2], b.s[2], c.s[2]), fcMath_select(a.s[3], b.s[3], c.s[3]), fcMath_select(a.s[4], b.s[4], c.s[4]), fcMath_select(a.s[5], b.s[5], c.s[5]), fcMath_select(a.s[6], b.s[6], c.s[6]), fcMath_select(a.s[7], b.s[7], c.s[7]));
}

fcInt8 fcDouble8_isFinite(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isFinite(a.s[0]), fcMath_isFinite(a.s[1]), fcMath_isFinite(a.s[2]), fcMath_isFinite(a.s[3]), fcMath_isFinite(a.s[4]), fcMath_isFinite(a.s[5]), fcMath_isFinite(a.s[6]), fcMath_isFinite(a.s[7]));
}

fcInt8 fcDouble8_isInf(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isInf(a.s[0]), fcMath_isInf(a.s[1]), fcMath_isInf(a.s[2]), fcMath_isInf(a.s[3]), fcMath_isInf(a.s[4]), fcMath_isInf(a.s[5]), fcMath_isInf(a.s[6]), fcMath_isInf(a.s[7]));
}

fcInt8 fcDouble8_isNaN(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isNaN(a.s[0]), fcMath_isNaN(a.s[1]), fcMath_isNaN(a.s[2]), fcMath_isNaN(a.s[3]), fcMath_isNaN(a.s[4]), fcMath_isNaN(a.s[5]), fcMath_isNaN(a.s[6]), fcMath_isNaN(a.s[7]));
}

fcInt8 fcDouble8_isNormal(fcDouble8 a) {
  return fcInt8_create11111111(fcMath_isNormal(a.s[0]), fcMath_isNormal(a.s[1]), fcMath_isNormal(a.s[2]), fcMath_isNormal(a.s[3]), fcMath_isNormal(a.s[4]), fcMath_isNormal(a.s[5]), fcMath_isNormal(a.s[6]), fcMath_isNormal(a.s[7]));
}

fcInt8 fcDouble8_isOrdered(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(fcMath_isOrdered(a.s[0], b.s[0]), fcMath_isOrdered(a.s[1], b.s[1]), fcMath_isOrdered(a.s[2], b.s[2]), fcMath_isOrdered(a.s[3], b.s[3]), fcMath_isOrdered(a.s[4], b.s[4]), fcMath_isOrdered(a.s[5], b.s[5]), fcMath_isOrdered(a.s[6], b.s[6]), fcMath_isOrdered(a.s[7], b.s[7]));
}

fcInt8 fcDouble8_isUnordered(fcDouble8 a, fcDouble8 b) {
  return fcInt8_create11111111(fcMath_isUnordered(a.s[0], b.s[0]), fcMath_isUnordered(a.s[1], b.s[1]), fcMath_isUnordered(a.s[2], b.s[2]), fcMath_isUnordered(a.s[3], b.s[3]), fcMath_isUnordered(a.s[4], b.s[4]), fcMath_isUnordered(a.s[5], b.s[5]), fcMath_isUnordered(a.s[6], b.s[6]), fcMath_isUnordered(a.s[7], b.s[7]));
}

cl_int fcDouble8_any(fcDouble8 a) {
  return a.s[0] != 0.0 || a.s[1] != 0.0 || a.s[2] != 0.0 || a.s[3] != 0.0 || a.s[4] != 0.0 || a.s[5] != 0.0 || a.s[6] != 0.0 || a.s[7] != 0.0;
}

cl_int fcDouble8_all(fcDouble8 a) {
  return !(a.s[0] == 0.0 || a.s[1] == 0.0 || a.s[2] == 0.0 || a.s[3] == 0.0 || a.s[4] == 0.0 || a.s[5] == 0.0 || a.s[6] == 0.0 || a.s[7] == 0.0);
}

fcDouble8 fcDouble8_neg(fcDouble8 a) {
  return fcDouble8_create11111111(-a.s[0], -a.s[1], -a.s[2], -a.s[3], -a.s[4], -a.s[5], -a.s[6], -a.s[7]);
}

fcDouble8 fcDouble8_add(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(a.s[0] + b.s[0], a.s[1] + b.s[1], a.s[2] + b.s[2], a.s[3] + b.s[3], a.s[4] + b.s[4], a.s[5] + b.s[5], a.s[6] + b.s[6], a.s[7] + b.s[7]);
}

fcDouble8 fcDouble8_sub(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(a.s[0] - b.s[0], a.s[1] - b.s[1], a.s[2] - b.s[2], a.s[3] - b.s[3], a.s[4] - b.s[4], a.s[5] - b.s[5], a.s[6] - b.s[6], a.s[7] - b.s[7]);
}

fcDouble8 fcDouble8_muld(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * b.s[0]), (cl_double)(a.s[1] * b.s[1]), (cl_double)(a.s[2] * b.s[2]), (cl_double)(a.s[3] * b.s[3]), (cl_double)(a.s[4] * b.s[4]), (cl_double)(a.s[5] * b.s[5]), (cl_double)(a.s[6] * b.s[6]), (cl_double)(a.s[7] * b.s[7]));
}

fcFloat8 fcDouble8_mulf(fcDouble8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * b.s[0]), (cl_float)(a.s[1] * b.s[1]), (cl_float)(a.s[2] * b.s[2]), (cl_float)(a.s[3] * b.s[3]), (cl_float)(a.s[4] * b.s[4]), (cl_float)(a.s[5] * b.s[5]), (cl_float)(a.s[6] * b.s[6]), (cl_float)(a.s[7] * b.s[7]));
}

fcDouble8 fcDouble8_mulkd(fcDouble8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] * k), (cl_double)(a.s[1] * k), (cl_double)(a.s[2] * k), (cl_double)(a.s[3] * k), (cl_double)(a.s[4] * k), (cl_double)(a.s[5] * k), (cl_double)(a.s[6] * k), (cl_double)(a.s[7] * k));
}

fcFloat8 fcDouble8_mulkf(fcDouble8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] * k), (cl_float)(a.s[1] * k), (cl_float)(a.s[2] * k), (cl_float)(a.s[3] * k), (cl_float)(a.s[4] * k), (cl_float)(a.s[5] * k), (cl_float)(a.s[6] * k), (cl_float)(a.s[7] * k));
}

fcDouble8 fcDouble8_divd(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / b.s[0]), (cl_double)(a.s[1] / b.s[1]), (cl_double)(a.s[2] / b.s[2]), (cl_double)(a.s[3] / b.s[3]), (cl_double)(a.s[4] / b.s[4]), (cl_double)(a.s[5] / b.s[5]), (cl_double)(a.s[6] / b.s[6]), (cl_double)(a.s[7] / b.s[7]));
}

fcFloat8 fcDouble8_divf(fcDouble8 a, fcFloat8 b) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / b.s[0]), (cl_float)(a.s[1] / b.s[1]), (cl_float)(a.s[2] / b.s[2]), (cl_float)(a.s[3] / b.s[3]), (cl_float)(a.s[4] / b.s[4]), (cl_float)(a.s[5] / b.s[5]), (cl_float)(a.s[6] / b.s[6]), (cl_float)(a.s[7] / b.s[7]));
}

fcDouble8 fcDouble8_divkd(fcDouble8 a, cl_double k) {
  return fcDouble8_create11111111((cl_double)(a.s[0] / k), (cl_double)(a.s[1] / k), (cl_double)(a.s[2] / k), (cl_double)(a.s[3] / k), (cl_double)(a.s[4] / k), (cl_double)(a.s[5] / k), (cl_double)(a.s[6] / k), (cl_double)(a.s[7] / k));
}

fcFloat8 fcDouble8_divkf(fcDouble8 a, cl_float k) {
  return fcFloat8_create11111111((cl_float)(a.s[0] / k), (cl_float)(a.s[1] / k), (cl_float)(a.s[2] / k), (cl_float)(a.s[3] / k), (cl_float)(a.s[4] / k), (cl_float)(a.s[5] / k), (cl_float)(a.s[6] / k), (cl_float)(a.s[7] / k));
}

cl_double fcDouble8_dot(fcDouble8 a, fcDouble8 b) {
  return a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2] + a.s[3] * b.s[3] + a.s[4] * b.s[4] + a.s[5] * b.s[5] + a.s[6] * b.s[6] + a.s[7] * b.s[7];
}

cl_double fcDouble8_distance(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_length(fcDouble8_sub(a, b));
}

cl_double fcDouble8_length(fcDouble8 a) {
  return fcMath_sqrt(a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2] + a.s[3] * a.s[3] + a.s[4] * a.s[4] + a.s[5] * a.s[5] + a.s[6] * a.s[6] + a.s[7] * a.s[7]);
}

fcDouble8 fcDouble8_normalize(fcDouble8 a) {
  cl_double len = fcDouble8_length(a);
  return fcDouble8_create11111111((cl_double)(a.s[0] / len), (cl_double)(a.s[1] / len), (cl_double)(a.s[2] / len), (cl_double)(a.s[3] / len), (cl_double)(a.s[4] / len), (cl_double)(a.s[5] / len), (cl_double)(a.s[6] / len), (cl_double)(a.s[7] / len));
}

fcDouble8 fcDouble8_abs(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_abs(a.s[0]), fcMath_abs(a.s[1]), fcMath_abs(a.s[2]), fcMath_abs(a.s[3]), fcMath_abs(a.s[4]), fcMath_abs(a.s[5]), fcMath_abs(a.s[6]), fcMath_abs(a.s[7]));
}

fcDouble8 fcDouble8_clamp(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_clamp(a.s[0], b.s[0], c.s[0]), fcMath_clamp(a.s[1], b.s[1], c.s[1]), fcMath_clamp(a.s[2], b.s[2], c.s[2]), fcMath_clamp(a.s[3], b.s[3], c.s[3]), fcMath_clamp(a.s[4], b.s[4], c.s[4]), fcMath_clamp(a.s[5], b.s[5], c.s[5]), fcMath_clamp(a.s[6], b.s[6], c.s[6]), fcMath_clamp(a.s[7], b.s[7], c.s[7]));
}

fcDouble8 fcDouble8_max(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_max(a.s[0], b.s[0]), fcMath_max(a.s[1], b.s[1]), fcMath_max(a.s[2], b.s[2]), fcMath_max(a.s[3], b.s[3]), fcMath_max(a.s[4], b.s[4]), fcMath_max(a.s[5], b.s[5]), fcMath_max(a.s[6], b.s[6]), fcMath_max(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_maxMag(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_maxMag(a.s[0], b.s[0]), fcMath_maxMag(a.s[1], b.s[1]), fcMath_maxMag(a.s[2], b.s[2]), fcMath_maxMag(a.s[3], b.s[3]), fcMath_maxMag(a.s[4], b.s[4]), fcMath_maxMag(a.s[5], b.s[5]), fcMath_maxMag(a.s[6], b.s[6]), fcMath_maxMag(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_min(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_min(a.s[0], b.s[0]), fcMath_min(a.s[1], b.s[1]), fcMath_min(a.s[2], b.s[2]), fcMath_min(a.s[3], b.s[3]), fcMath_min(a.s[4], b.s[4]), fcMath_min(a.s[5], b.s[5]), fcMath_min(a.s[6], b.s[6]), fcMath_min(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_minMag(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_minMag(a.s[0], b.s[0]), fcMath_minMag(a.s[1], b.s[1]), fcMath_minMag(a.s[2], b.s[2]), fcMath_minMag(a.s[3], b.s[3]), fcMath_minMag(a.s[4], b.s[4]), fcMath_minMag(a.s[5], b.s[5]), fcMath_minMag(a.s[6], b.s[6]), fcMath_minMag(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_mix(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_mix(a.s[0], b.s[0], c.s[0]), fcMath_mix(a.s[1], b.s[1], c.s[1]), fcMath_mix(a.s[2], b.s[2], c.s[2]), fcMath_mix(a.s[3], b.s[3], c.s[3]), fcMath_mix(a.s[4], b.s[4], c.s[4]), fcMath_mix(a.s[5], b.s[5], c.s[5]), fcMath_mix(a.s[6], b.s[6], c.s[6]), fcMath_mix(a.s[7], b.s[7], c.s[7]));
}

fcDouble8 fcDouble8_clampk(fcDouble8 v, cl_double min, cl_double max) {
  return fcDouble8_create11111111(fcMath_clamp(v.s[0], min, max), fcMath_clamp(v.s[1], min, max), fcMath_clamp(v.s[2], min, max), fcMath_clamp(v.s[3], min, max), fcMath_clamp(v.s[4], min, max), fcMath_clamp(v.s[5], min, max), fcMath_clamp(v.s[6], min, max), fcMath_clamp(v.s[7], min, max));
}

fcDouble8 fcDouble8_maxk(fcDouble8 x, cl_double y) {
  return fcDouble8_create11111111(fcMath_max(x.s[0], y), fcMath_max(x.s[1], y), fcMath_max(x.s[2], y), fcMath_max(x.s[3], y), fcMath_max(x.s[4], y), fcMath_max(x.s[5], y), fcMath_max(x.s[6], y), fcMath_max(x.s[7], y));
}

fcDouble8 fcDouble8_mink(fcDouble8 x, cl_double y) {
  return fcDouble8_create11111111(fcMath_min(x.s[0], y), fcMath_min(x.s[1], y), fcMath_min(x.s[2], y), fcMath_min(x.s[3], y), fcMath_min(x.s[4], y), fcMath_min(x.s[5], y), fcMath_min(x.s[6], y), fcMath_min(x.s[7], y));
}

fcDouble8 fcDouble8_mixk(fcDouble8 x, fcDouble8 y, cl_double a) {
  return fcDouble8_create11111111(fcMath_mix(x.s[0], y.s[0], a), fcMath_mix(x.s[1], y.s[1], a), fcMath_mix(x.s[2], y.s[2], a), fcMath_mix(x.s[3], y.s[3], a), fcMath_mix(x.s[4], y.s[4], a), fcMath_mix(x.s[5], y.s[5], a), fcMath_mix(x.s[6], y.s[6], a), fcMath_mix(x.s[7], y.s[7], a));
}

fcDouble8 fcDouble8_acos(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_acos(a.s[0]), fcMath_acos(a.s[1]), fcMath_acos(a.s[2]), fcMath_acos(a.s[3]), fcMath_acos(a.s[4]), fcMath_acos(a.s[5]), fcMath_acos(a.s[6]), fcMath_acos(a.s[7]));
}

fcDouble8 fcDouble8_acosh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_acosh(a.s[0]), fcMath_acosh(a.s[1]), fcMath_acosh(a.s[2]), fcMath_acosh(a.s[3]), fcMath_acosh(a.s[4]), fcMath_acosh(a.s[5]), fcMath_acosh(a.s[6]), fcMath_acosh(a.s[7]));
}

fcDouble8 fcDouble8_asin(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_asin(a.s[0]), fcMath_asin(a.s[1]), fcMath_asin(a.s[2]), fcMath_asin(a.s[3]), fcMath_asin(a.s[4]), fcMath_asin(a.s[5]), fcMath_asin(a.s[6]), fcMath_asin(a.s[7]));
}

fcDouble8 fcDouble8_asinh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_asinh(a.s[0]), fcMath_asinh(a.s[1]), fcMath_asinh(a.s[2]), fcMath_asinh(a.s[3]), fcMath_asinh(a.s[4]), fcMath_asinh(a.s[5]), fcMath_asinh(a.s[6]), fcMath_asinh(a.s[7]));
}

fcDouble8 fcDouble8_atan(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_atan(a.s[0]), fcMath_atan(a.s[1]), fcMath_atan(a.s[2]), fcMath_atan(a.s[3]), fcMath_atan(a.s[4]), fcMath_atan(a.s[5]), fcMath_atan(a.s[6]), fcMath_atan(a.s[7]));
}

fcDouble8 fcDouble8_atan2(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_atan2(a.s[0], b.s[0]), fcMath_atan2(a.s[1], b.s[1]), fcMath_atan2(a.s[2], b.s[2]), fcMath_atan2(a.s[3], b.s[3]), fcMath_atan2(a.s[4], b.s[4]), fcMath_atan2(a.s[5], b.s[5]), fcMath_atan2(a.s[6], b.s[6]), fcMath_atan2(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_atanh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_atanh(a.s[0]), fcMath_atanh(a.s[1]), fcMath_atanh(a.s[2]), fcMath_atanh(a.s[3]), fcMath_atanh(a.s[4]), fcMath_atanh(a.s[5]), fcMath_atanh(a.s[6]), fcMath_atanh(a.s[7]));
}

fcDouble8 fcDouble8_cbrt(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_cbrt(a.s[0]), fcMath_cbrt(a.s[1]), fcMath_cbrt(a.s[2]), fcMath_cbrt(a.s[3]), fcMath_cbrt(a.s[4]), fcMath_cbrt(a.s[5]), fcMath_cbrt(a.s[6]), fcMath_cbrt(a.s[7]));
}

fcDouble8 fcDouble8_ceil(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_ceil(a.s[0]), fcMath_ceil(a.s[1]), fcMath_ceil(a.s[2]), fcMath_ceil(a.s[3]), fcMath_ceil(a.s[4]), fcMath_ceil(a.s[5]), fcMath_ceil(a.s[6]), fcMath_ceil(a.s[7]));
}

fcDouble8 fcDouble8_copySign(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_copySign(a.s[0], b.s[0]), fcMath_copySign(a.s[1], b.s[1]), fcMath_copySign(a.s[2], b.s[2]), fcMath_copySign(a.s[3], b.s[3]), fcMath_copySign(a.s[4], b.s[4]), fcMath_copySign(a.s[5], b.s[5]), fcMath_copySign(a.s[6], b.s[6]), fcMath_copySign(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_cos(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_cos(a.s[0]), fcMath_cos(a.s[1]), fcMath_cos(a.s[2]), fcMath_cos(a.s[3]), fcMath_cos(a.s[4]), fcMath_cos(a.s[5]), fcMath_cos(a.s[6]), fcMath_cos(a.s[7]));
}

fcDouble8 fcDouble8_cosh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_cosh(a.s[0]), fcMath_cosh(a.s[1]), fcMath_cosh(a.s[2]), fcMath_cosh(a.s[3]), fcMath_cosh(a.s[4]), fcMath_cosh(a.s[5]), fcMath_cosh(a.s[6]), fcMath_cosh(a.s[7]));
}

fcDouble8 fcDouble8_erf(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_erf(a.s[0]), fcMath_erf(a.s[1]), fcMath_erf(a.s[2]), fcMath_erf(a.s[3]), fcMath_erf(a.s[4]), fcMath_erf(a.s[5]), fcMath_erf(a.s[6]), fcMath_erf(a.s[7]));
}

fcDouble8 fcDouble8_erfc(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_erfc(a.s[0]), fcMath_erfc(a.s[1]), fcMath_erfc(a.s[2]), fcMath_erfc(a.s[3]), fcMath_erfc(a.s[4]), fcMath_erfc(a.s[5]), fcMath_erfc(a.s[6]), fcMath_erfc(a.s[7]));
}

fcDouble8 fcDouble8_exp(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_exp(a.s[0]), fcMath_exp(a.s[1]), fcMath_exp(a.s[2]), fcMath_exp(a.s[3]), fcMath_exp(a.s[4]), fcMath_exp(a.s[5]), fcMath_exp(a.s[6]), fcMath_exp(a.s[7]));
}

fcDouble8 fcDouble8_exp10(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_exp10(a.s[0]), fcMath_exp10(a.s[1]), fcMath_exp10(a.s[2]), fcMath_exp10(a.s[3]), fcMath_exp10(a.s[4]), fcMath_exp10(a.s[5]), fcMath_exp10(a.s[6]), fcMath_exp10(a.s[7]));
}

fcDouble8 fcDouble8_exp2(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_exp2(a.s[0]), fcMath_exp2(a.s[1]), fcMath_exp2(a.s[2]), fcMath_exp2(a.s[3]), fcMath_exp2(a.s[4]), fcMath_exp2(a.s[5]), fcMath_exp2(a.s[6]), fcMath_exp2(a.s[7]));
}

fcDouble8 fcDouble8_expm1(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_expm1(a.s[0]), fcMath_expm1(a.s[1]), fcMath_expm1(a.s[2]), fcMath_expm1(a.s[3]), fcMath_expm1(a.s[4]), fcMath_expm1(a.s[5]), fcMath_expm1(a.s[6]), fcMath_expm1(a.s[7]));
}

fcDouble8 fcDouble8_fdim(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_fdim(a.s[0], b.s[0]), fcMath_fdim(a.s[1], b.s[1]), fcMath_fdim(a.s[2], b.s[2]), fcMath_fdim(a.s[3], b.s[3]), fcMath_fdim(a.s[4], b.s[4]), fcMath_fdim(a.s[5], b.s[5]), fcMath_fdim(a.s[6], b.s[6]), fcMath_fdim(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_floor(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_floor(a.s[0]), fcMath_floor(a.s[1]), fcMath_floor(a.s[2]), fcMath_floor(a.s[3]), fcMath_floor(a.s[4]), fcMath_floor(a.s[5]), fcMath_floor(a.s[6]), fcMath_floor(a.s[7]));
}

fcDouble8 fcDouble8_fma(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_fma(a.s[0], b.s[0], c.s[0]), fcMath_fma(a.s[1], b.s[1], c.s[1]), fcMath_fma(a.s[2], b.s[2], c.s[2]), fcMath_fma(a.s[3], b.s[3], c.s[3]), fcMath_fma(a.s[4], b.s[4], c.s[4]), fcMath_fma(a.s[5], b.s[5], c.s[5]), fcMath_fma(a.s[6], b.s[6], c.s[6]), fcMath_fma(a.s[7], b.s[7], c.s[7]));
}

fcDouble8 fcDouble8_fmod(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_fmod(a.s[0], b.s[0]), fcMath_fmod(a.s[1], b.s[1]), fcMath_fmod(a.s[2], b.s[2]), fcMath_fmod(a.s[3], b.s[3]), fcMath_fmod(a.s[4], b.s[4]), fcMath_fmod(a.s[5], b.s[5]), fcMath_fmod(a.s[6], b.s[6]), fcMath_fmod(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_fract(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_fract(a.s[0]), fcMath_fract(a.s[1]), fcMath_fract(a.s[2]), fcMath_fract(a.s[3]), fcMath_fract(a.s[4]), fcMath_fract(a.s[5]), fcMath_fract(a.s[6]), fcMath_fract(a.s[7]));
}

fcDouble8 fcDouble8_frexp(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_frexp(a.s[0]), fcMath_frexp(a.s[1]), fcMath_frexp(a.s[2]), fcMath_frexp(a.s[3]), fcMath_frexp(a.s[4]), fcMath_frexp(a.s[5]), fcMath_frexp(a.s[6]), fcMath_frexp(a.s[7]));
}

fcDouble8 fcDouble8_getExponent(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_getExponent(a.s[0]), fcMath_getExponent(a.s[1]), fcMath_getExponent(a.s[2]), fcMath_getExponent(a.s[3]), fcMath_getExponent(a.s[4]), fcMath_getExponent(a.s[5]), fcMath_getExponent(a.s[6]), fcMath_getExponent(a.s[7]));
}

fcDouble8 fcDouble8_hypot(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_hypot(a.s[0], b.s[0]), fcMath_hypot(a.s[1], b.s[1]), fcMath_hypot(a.s[2], b.s[2]), fcMath_hypot(a.s[3], b.s[3]), fcMath_hypot(a.s[4], b.s[4]), fcMath_hypot(a.s[5], b.s[5]), fcMath_hypot(a.s[6], b.s[6]), fcMath_hypot(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_lgamma(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_lgamma(a.s[0]), fcMath_lgamma(a.s[1]), fcMath_lgamma(a.s[2]), fcMath_lgamma(a.s[3]), fcMath_lgamma(a.s[4]), fcMath_lgamma(a.s[5]), fcMath_lgamma(a.s[6]), fcMath_lgamma(a.s[7]));
}

fcDouble8 fcDouble8_log(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log(a.s[0]), fcMath_log(a.s[1]), fcMath_log(a.s[2]), fcMath_log(a.s[3]), fcMath_log(a.s[4]), fcMath_log(a.s[5]), fcMath_log(a.s[6]), fcMath_log(a.s[7]));
}

fcDouble8 fcDouble8_log10(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log10(a.s[0]), fcMath_log10(a.s[1]), fcMath_log10(a.s[2]), fcMath_log10(a.s[3]), fcMath_log10(a.s[4]), fcMath_log10(a.s[5]), fcMath_log10(a.s[6]), fcMath_log10(a.s[7]));
}

fcDouble8 fcDouble8_log1p(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log1p(a.s[0]), fcMath_log1p(a.s[1]), fcMath_log1p(a.s[2]), fcMath_log1p(a.s[3]), fcMath_log1p(a.s[4]), fcMath_log1p(a.s[5]), fcMath_log1p(a.s[6]), fcMath_log1p(a.s[7]));
}

fcDouble8 fcDouble8_log2(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_log2(a.s[0]), fcMath_log2(a.s[1]), fcMath_log2(a.s[2]), fcMath_log2(a.s[3]), fcMath_log2(a.s[4]), fcMath_log2(a.s[5]), fcMath_log2(a.s[6]), fcMath_log2(a.s[7]));
}

fcDouble8 fcDouble8_logb(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_logb(a.s[0]), fcMath_logb(a.s[1]), fcMath_logb(a.s[2]), fcMath_logb(a.s[3]), fcMath_logb(a.s[4]), fcMath_logb(a.s[5]), fcMath_logb(a.s[6]), fcMath_logb(a.s[7]));
}

fcDouble8 fcDouble8_mad(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_mad(a.s[0], b.s[0], c.s[0]), fcMath_mad(a.s[1], b.s[1], c.s[1]), fcMath_mad(a.s[2], b.s[2], c.s[2]), fcMath_mad(a.s[3], b.s[3], c.s[3]), fcMath_mad(a.s[4], b.s[4], c.s[4]), fcMath_mad(a.s[5], b.s[5], c.s[5]), fcMath_mad(a.s[6], b.s[6], c.s[6]), fcMath_mad(a.s[7], b.s[7], c.s[7]));
}

fcDouble8 fcDouble8_nextAfter(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_nextAfter(a.s[0], b.s[0]), fcMath_nextAfter(a.s[1], b.s[1]), fcMath_nextAfter(a.s[2], b.s[2]), fcMath_nextAfter(a.s[3], b.s[3]), fcMath_nextAfter(a.s[4], b.s[4]), fcMath_nextAfter(a.s[5], b.s[5]), fcMath_nextAfter(a.s[6], b.s[6]), fcMath_nextAfter(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_pow(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_pow(a.s[0], b.s[0]), fcMath_pow(a.s[1], b.s[1]), fcMath_pow(a.s[2], b.s[2]), fcMath_pow(a.s[3], b.s[3]), fcMath_pow(a.s[4], b.s[4]), fcMath_pow(a.s[5], b.s[5]), fcMath_pow(a.s[6], b.s[6]), fcMath_pow(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_powr(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_powr(a.s[0], b.s[0]), fcMath_powr(a.s[1], b.s[1]), fcMath_powr(a.s[2], b.s[2]), fcMath_powr(a.s[3], b.s[3]), fcMath_powr(a.s[4], b.s[4]), fcMath_powr(a.s[5], b.s[5]), fcMath_powr(a.s[6], b.s[6]), fcMath_powr(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_remainder(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_remainder(a.s[0], b.s[0]), fcMath_remainder(a.s[1], b.s[1]), fcMath_remainder(a.s[2], b.s[2]), fcMath_remainder(a.s[3], b.s[3]), fcMath_remainder(a.s[4], b.s[4]), fcMath_remainder(a.s[5], b.s[5]), fcMath_remainder(a.s[6], b.s[6]), fcMath_remainder(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_rint(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_rint(a.s[0]), fcMath_rint(a.s[1]), fcMath_rint(a.s[2]), fcMath_rint(a.s[3]), fcMath_rint(a.s[4]), fcMath_rint(a.s[5]), fcMath_rint(a.s[6]), fcMath_rint(a.s[7]));
}

fcDouble8 fcDouble8_round(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_round(a.s[0]), fcMath_round(a.s[1]), fcMath_round(a.s[2]), fcMath_round(a.s[3]), fcMath_round(a.s[4]), fcMath_round(a.s[5]), fcMath_round(a.s[6]), fcMath_round(a.s[7]));
}

fcDouble8 fcDouble8_rsqrt(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_rsqrt(a.s[0]), fcMath_rsqrt(a.s[1]), fcMath_rsqrt(a.s[2]), fcMath_rsqrt(a.s[3]), fcMath_rsqrt(a.s[4]), fcMath_rsqrt(a.s[5]), fcMath_rsqrt(a.s[6]), fcMath_rsqrt(a.s[7]));
}

fcDouble8 fcDouble8_signum(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_signum(a.s[0]), fcMath_signum(a.s[1]), fcMath_signum(a.s[2]), fcMath_signum(a.s[3]), fcMath_signum(a.s[4]), fcMath_signum(a.s[5]), fcMath_signum(a.s[6]), fcMath_signum(a.s[7]));
}

fcDouble8 fcDouble8_sin(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_sin(a.s[0]), fcMath_sin(a.s[1]), fcMath_sin(a.s[2]), fcMath_sin(a.s[3]), fcMath_sin(a.s[4]), fcMath_sin(a.s[5]), fcMath_sin(a.s[6]), fcMath_sin(a.s[7]));
}

fcDouble8 fcDouble8_sinh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_sinh(a.s[0]), fcMath_sinh(a.s[1]), fcMath_sinh(a.s[2]), fcMath_sinh(a.s[3]), fcMath_sinh(a.s[4]), fcMath_sinh(a.s[5]), fcMath_sinh(a.s[6]), fcMath_sinh(a.s[7]));
}

fcDouble8 fcDouble8_smoothStep(fcDouble8 a, fcDouble8 b, fcDouble8 c) {
  return fcDouble8_create11111111(fcMath_smoothStep(a.s[0], b.s[0], c.s[0]), fcMath_smoothStep(a.s[1], b.s[1], c.s[1]), fcMath_smoothStep(a.s[2], b.s[2], c.s[2]), fcMath_smoothStep(a.s[3], b.s[3], c.s[3]), fcMath_smoothStep(a.s[4], b.s[4], c.s[4]), fcMath_smoothStep(a.s[5], b.s[5], c.s[5]), fcMath_smoothStep(a.s[6], b.s[6], c.s[6]), fcMath_smoothStep(a.s[7], b.s[7], c.s[7]));
}

fcDouble8 fcDouble8_sqrt(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_sqrt(a.s[0]), fcMath_sqrt(a.s[1]), fcMath_sqrt(a.s[2]), fcMath_sqrt(a.s[3]), fcMath_sqrt(a.s[4]), fcMath_sqrt(a.s[5]), fcMath_sqrt(a.s[6]), fcMath_sqrt(a.s[7]));
}

fcDouble8 fcDouble8_step(fcDouble8 a, fcDouble8 b) {
  return fcDouble8_create11111111(fcMath_step(a.s[0], b.s[0]), fcMath_step(a.s[1], b.s[1]), fcMath_step(a.s[2], b.s[2]), fcMath_step(a.s[3], b.s[3]), fcMath_step(a.s[4], b.s[4]), fcMath_step(a.s[5], b.s[5]), fcMath_step(a.s[6], b.s[6]), fcMath_step(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_tan(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_tan(a.s[0]), fcMath_tan(a.s[1]), fcMath_tan(a.s[2]), fcMath_tan(a.s[3]), fcMath_tan(a.s[4]), fcMath_tan(a.s[5]), fcMath_tan(a.s[6]), fcMath_tan(a.s[7]));
}

fcDouble8 fcDouble8_tanh(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_tanh(a.s[0]), fcMath_tanh(a.s[1]), fcMath_tanh(a.s[2]), fcMath_tanh(a.s[3]), fcMath_tanh(a.s[4]), fcMath_tanh(a.s[5]), fcMath_tanh(a.s[6]), fcMath_tanh(a.s[7]));
}

fcDouble8 fcDouble8_tgamma(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_tgamma(a.s[0]), fcMath_tgamma(a.s[1]), fcMath_tgamma(a.s[2]), fcMath_tgamma(a.s[3]), fcMath_tgamma(a.s[4]), fcMath_tgamma(a.s[5]), fcMath_tgamma(a.s[6]), fcMath_tgamma(a.s[7]));
}

fcDouble8 fcDouble8_toDegrees(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_toDegrees(a.s[0]), fcMath_toDegrees(a.s[1]), fcMath_toDegrees(a.s[2]), fcMath_toDegrees(a.s[3]), fcMath_toDegrees(a.s[4]), fcMath_toDegrees(a.s[5]), fcMath_toDegrees(a.s[6]), fcMath_toDegrees(a.s[7]));
}

fcDouble8 fcDouble8_toRadians(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_toRadians(a.s[0]), fcMath_toRadians(a.s[1]), fcMath_toRadians(a.s[2]), fcMath_toRadians(a.s[3]), fcMath_toRadians(a.s[4]), fcMath_toRadians(a.s[5]), fcMath_toRadians(a.s[6]), fcMath_toRadians(a.s[7]));
}

fcDouble8 fcDouble8_trunc(fcDouble8 a) {
  return fcDouble8_create11111111(fcMath_trunc(a.s[0]), fcMath_trunc(a.s[1]), fcMath_trunc(a.s[2]), fcMath_trunc(a.s[3]), fcMath_trunc(a.s[4]), fcMath_trunc(a.s[5]), fcMath_trunc(a.s[6]), fcMath_trunc(a.s[7]));
}

fcDouble8 fcDouble8_scalb(fcDouble8 a, fcInt8 n) {
  return fcDouble8_create11111111(fcMath_scalb(a.s[0], n.s[0]), fcMath_scalb(a.s[1], n.s[1]), fcMath_scalb(a.s[2], n.s[2]), fcMath_scalb(a.s[3], n.s[3]), fcMath_scalb(a.s[4], n.s[4]), fcMath_scalb(a.s[5], n.s[5]), fcMath_scalb(a.s[6], n.s[6]), fcMath_scalb(a.s[7], n.s[7]));
}

fcDouble8 fcDouble8_ldexp(fcDouble8 a, fcInt8 n) {
  return fcDouble8_create11111111(fcMath_ldexp(a.s[0], n.s[0]), fcMath_ldexp(a.s[1], n.s[1]), fcMath_ldexp(a.s[2], n.s[2]), fcMath_ldexp(a.s[3], n.s[3]), fcMath_ldexp(a.s[4], n.s[4]), fcMath_ldexp(a.s[5], n.s[5]), fcMath_ldexp(a.s[6], n.s[6]), fcMath_ldexp(a.s[7], n.s[7]));
}

fcDouble8 fcDouble8_pown(fcDouble8 a, fcInt8 b) {
  return fcDouble8_create11111111(fcMath_pown(a.s[0], b.s[0]), fcMath_pown(a.s[1], b.s[1]), fcMath_pown(a.s[2], b.s[2]), fcMath_pown(a.s[3], b.s[3]), fcMath_pown(a.s[4], b.s[4]), fcMath_pown(a.s[5], b.s[5]), fcMath_pown(a.s[6], b.s[6]), fcMath_pown(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_rootn(fcDouble8 a, fcInt8 b) {
  return fcDouble8_create11111111(fcMath_rootn(a.s[0], b.s[0]), fcMath_rootn(a.s[1], b.s[1]), fcMath_rootn(a.s[2], b.s[2]), fcMath_rootn(a.s[3], b.s[3]), fcMath_rootn(a.s[4], b.s[4]), fcMath_rootn(a.s[5], b.s[5]), fcMath_rootn(a.s[6], b.s[6]), fcMath_rootn(a.s[7], b.s[7]));
}

fcDouble8 fcDouble8_smoothStepk(fcDouble8 a, fcDouble8 b, cl_double c) {
  return fcDouble8_create11111111(fcMath_smoothStep(a.s[0], b.s[0], c), fcMath_smoothStep(a.s[1], b.s[1], c), fcMath_smoothStep(a.s[2], b.s[2], c), fcMath_smoothStep(a.s[3], b.s[3], c), fcMath_smoothStep(a.s[4], b.s[4], c), fcMath_smoothStep(a.s[5], b.s[5], c), fcMath_smoothStep(a.s[6], b.s[6], c), fcMath_smoothStep(a.s[7], b.s[7], c));
}



#endif  // _FANCIER_VECTOR_H_
