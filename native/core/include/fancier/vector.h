#ifndef _FANCIER_VECTOR_H_
#define _FANCIER_VECTOR_H_

#include <fancier/platform.h>


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

FANCIER_API fcByte2* fcByte2_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte2_wrap (JNIEnv* env, fcByte2 vec);
FANCIER_API fcByte2 fcByte2_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcByte3* fcByte3_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte3_wrap (JNIEnv* env, fcByte3 vec);
FANCIER_API fcByte3 fcByte3_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcByte4* fcByte4_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte4_wrap (JNIEnv* env, fcByte4 vec);
FANCIER_API fcByte4 fcByte4_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcByte8* fcByte8_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcByte8_wrap (JNIEnv* env, fcByte8 vec);
FANCIER_API fcByte8 fcByte8_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort2* fcShort2_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort2_wrap (JNIEnv* env, fcShort2 vec);
FANCIER_API fcShort2 fcShort2_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort3* fcShort3_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort3_wrap (JNIEnv* env, fcShort3 vec);
FANCIER_API fcShort3 fcShort3_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort4* fcShort4_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort4_wrap (JNIEnv* env, fcShort4 vec);
FANCIER_API fcShort4 fcShort4_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcShort8* fcShort8_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcShort8_wrap (JNIEnv* env, fcShort8 vec);
FANCIER_API fcShort8 fcShort8_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt2* fcInt2_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt2_wrap (JNIEnv* env, fcInt2 vec);
FANCIER_API fcInt2 fcInt2_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt3* fcInt3_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt3_wrap (JNIEnv* env, fcInt3 vec);
FANCIER_API fcInt3 fcInt3_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt4* fcInt4_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt4_wrap (JNIEnv* env, fcInt4 vec);
FANCIER_API fcInt4 fcInt4_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcInt8* fcInt8_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcInt8_wrap (JNIEnv* env, fcInt8 vec);
FANCIER_API fcInt8 fcInt8_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong2* fcLong2_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong2_wrap (JNIEnv* env, fcLong2 vec);
FANCIER_API fcLong2 fcLong2_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong3* fcLong3_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong3_wrap (JNIEnv* env, fcLong3 vec);
FANCIER_API fcLong3 fcLong3_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong4* fcLong4_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong4_wrap (JNIEnv* env, fcLong4 vec);
FANCIER_API fcLong4 fcLong4_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcLong8* fcLong8_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcLong8_wrap (JNIEnv* env, fcLong8 vec);
FANCIER_API fcLong8 fcLong8_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat2* fcFloat2_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat2_wrap (JNIEnv* env, fcFloat2 vec);
FANCIER_API fcFloat2 fcFloat2_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat3* fcFloat3_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat3_wrap (JNIEnv* env, fcFloat3 vec);
FANCIER_API fcFloat3 fcFloat3_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat4* fcFloat4_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat4_wrap (JNIEnv* env, fcFloat4 vec);
FANCIER_API fcFloat4 fcFloat4_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcFloat8* fcFloat8_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcFloat8_wrap (JNIEnv* env, fcFloat8 vec);
FANCIER_API fcFloat8 fcFloat8_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble2* fcDouble2_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble2_wrap (JNIEnv* env, fcDouble2 vec);
FANCIER_API fcDouble2 fcDouble2_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble3* fcDouble3_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble3_wrap (JNIEnv* env, fcDouble3 vec);
FANCIER_API fcDouble3 fcDouble3_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble4* fcDouble4_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble4_wrap (JNIEnv* env, fcDouble4 vec);
FANCIER_API fcDouble4 fcDouble4_unwrap (JNIEnv* env, jobject vec, int* err);

FANCIER_API fcDouble8* fcDouble8_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fcDouble8_wrap (JNIEnv* env, fcDouble8 vec);
FANCIER_API fcDouble8 fcDouble8_unwrap (JNIEnv* env, jobject vec, int* err);


// Native interface

FANCIER_API fcByte2 fcByte2_create (cl_byte a, cl_byte b);

FANCIER_API fcShort2 fcByte2_convertShort2 (fcByte2 a);
FANCIER_API fcInt2 fcByte2_convertInt2 (fcByte2 a);
FANCIER_API fcLong2 fcByte2_convertLong2 (fcByte2 a);
FANCIER_API fcFloat2 fcByte2_convertFloat2 (fcByte2 a);
FANCIER_API fcDouble2 fcByte2_convertDouble2 (fcByte2 a);

FANCIER_API fcInt2 fcByte2_isEqual (fcByte2 a, fcByte2 b);
FANCIER_API fcInt2 fcByte2_isNotEqual (fcByte2 a, fcByte2 b);
FANCIER_API fcInt2 fcByte2_isGreater (fcByte2 a, fcByte2 b);
FANCIER_API fcInt2 fcByte2_isGreaterEqual (fcByte2 a, fcByte2 b);
FANCIER_API fcInt2 fcByte2_isLess (fcByte2 a, fcByte2 b);
FANCIER_API fcInt2 fcByte2_isLessEqual (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_select (fcByte2 a, fcByte2 b, fcInt2 c);

FANCIER_API cl_int fcByte2_any (fcByte2 a);
FANCIER_API cl_int fcByte2_all (fcByte2 a);

FANCIER_API fcByte2 fcByte2_add (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_sub (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_mul (fcByte2 a, fcByte2 b);
FANCIER_API fcDouble2 fcByte2_muld (fcByte2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcByte2_mulf (fcByte2 a, fcFloat2 b);
FANCIER_API fcByte2 fcByte2_mulk (fcByte2 a, cl_byte k);
FANCIER_API fcDouble2 fcByte2_mulkd (fcByte2 a, cl_double k);
FANCIER_API fcFloat2 fcByte2_mulkf (fcByte2 a, cl_float k);
FANCIER_API fcByte2 fcByte2_div (fcByte2 a, fcByte2 b);
FANCIER_API fcDouble2 fcByte2_divd (fcByte2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcByte2_divf (fcByte2 a, fcFloat2 b);
FANCIER_API fcByte2 fcByte2_divk (fcByte2 a, cl_byte k);
FANCIER_API fcDouble2 fcByte2_divkd (fcByte2 a, cl_double k);
FANCIER_API fcFloat2 fcByte2_divkf (fcByte2 a, cl_float k);
FANCIER_API fcByte2 fcByte2_mod (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_modk (fcByte2 a, cl_byte k);
FANCIER_API fcByte2 fcByte2_bitAnd (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_bitOr (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_bitXor (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_bitNot (fcByte2 a);

FANCIER_API fcByte2 fcByte2_abs (fcByte2 a);
FANCIER_API fcByte2 fcByte2_clamp (fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_API fcByte2 fcByte2_max (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_maxMag (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_min (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_minMag (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_mix (fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_API fcByte2 fcByte2_clampk (fcByte2 v, cl_byte min, cl_byte max);
FANCIER_API fcByte2 fcByte2_maxk (fcByte2 x, cl_byte y);
FANCIER_API fcByte2 fcByte2_mink (fcByte2 x, cl_byte y);
FANCIER_API fcByte2 fcByte2_mixk (fcByte2 x, fcByte2 y, cl_byte a);
FANCIER_API fcByte2 fcByte2_absDiff (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_addSat (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_clz (fcByte2 a);
FANCIER_API fcByte2 fcByte2_hadd (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_madHi (fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_API fcByte2 fcByte2_madSat (fcByte2 a, fcByte2 b, fcByte2 c);
FANCIER_API fcByte2 fcByte2_mulHi (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_rhadd (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_rotate (fcByte2 a, fcByte2 b);
FANCIER_API fcByte2 fcByte2_subSat (fcByte2 a, fcByte2 b);

FANCIER_API fcByte3 fcByte3_create (cl_byte a, cl_byte b, cl_byte c);

FANCIER_API fcShort3 fcByte3_convertShort3 (fcByte3 a);
FANCIER_API fcInt3 fcByte3_convertInt3 (fcByte3 a);
FANCIER_API fcLong3 fcByte3_convertLong3 (fcByte3 a);
FANCIER_API fcFloat3 fcByte3_convertFloat3 (fcByte3 a);
FANCIER_API fcDouble3 fcByte3_convertDouble3 (fcByte3 a);
FANCIER_API fcByte2 fcByte3_asByte2 (fcByte3 a);

FANCIER_API fcInt3 fcByte3_isEqual (fcByte3 a, fcByte3 b);
FANCIER_API fcInt3 fcByte3_isNotEqual (fcByte3 a, fcByte3 b);
FANCIER_API fcInt3 fcByte3_isGreater (fcByte3 a, fcByte3 b);
FANCIER_API fcInt3 fcByte3_isGreaterEqual (fcByte3 a, fcByte3 b);
FANCIER_API fcInt3 fcByte3_isLess (fcByte3 a, fcByte3 b);
FANCIER_API fcInt3 fcByte3_isLessEqual (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_select (fcByte3 a, fcByte3 b, fcInt3 c);

FANCIER_API cl_int fcByte3_any (fcByte3 a);
FANCIER_API cl_int fcByte3_all (fcByte3 a);

FANCIER_API fcByte3 fcByte3_add (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_sub (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_mul (fcByte3 a, fcByte3 b);
FANCIER_API fcDouble3 fcByte3_muld (fcByte3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcByte3_mulf (fcByte3 a, fcFloat3 b);
FANCIER_API fcByte3 fcByte3_mulk (fcByte3 a, cl_byte k);
FANCIER_API fcDouble3 fcByte3_mulkd (fcByte3 a, cl_double k);
FANCIER_API fcFloat3 fcByte3_mulkf (fcByte3 a, cl_float k);
FANCIER_API fcByte3 fcByte3_div (fcByte3 a, fcByte3 b);
FANCIER_API fcDouble3 fcByte3_divd (fcByte3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcByte3_divf (fcByte3 a, fcFloat3 b);
FANCIER_API fcByte3 fcByte3_divk (fcByte3 a, cl_byte k);
FANCIER_API fcDouble3 fcByte3_divkd (fcByte3 a, cl_double k);
FANCIER_API fcFloat3 fcByte3_divkf (fcByte3 a, cl_float k);
FANCIER_API fcByte3 fcByte3_mod (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_modk (fcByte3 a, cl_byte k);
FANCIER_API fcByte3 fcByte3_bitAnd (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_bitOr (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_bitXor (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_bitNot (fcByte3 a);

FANCIER_API fcByte3 fcByte3_abs (fcByte3 a);
FANCIER_API fcByte3 fcByte3_clamp (fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_API fcByte3 fcByte3_max (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_maxMag (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_min (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_minMag (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_mix (fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_API fcByte3 fcByte3_clampk (fcByte3 v, cl_byte min, cl_byte max);
FANCIER_API fcByte3 fcByte3_maxk (fcByte3 x, cl_byte y);
FANCIER_API fcByte3 fcByte3_mink (fcByte3 x, cl_byte y);
FANCIER_API fcByte3 fcByte3_mixk (fcByte3 x, fcByte3 y, cl_byte a);
FANCIER_API fcByte3 fcByte3_absDiff (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_addSat (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_clz (fcByte3 a);
FANCIER_API fcByte3 fcByte3_hadd (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_madHi (fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_API fcByte3 fcByte3_madSat (fcByte3 a, fcByte3 b, fcByte3 c);
FANCIER_API fcByte3 fcByte3_mulHi (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_rhadd (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_rotate (fcByte3 a, fcByte3 b);
FANCIER_API fcByte3 fcByte3_subSat (fcByte3 a, fcByte3 b);

FANCIER_API fcByte4 fcByte4_create (cl_byte a, cl_byte b, cl_byte c, cl_byte d);

FANCIER_API fcByte2 fcByte4_odd (fcByte4 a);
FANCIER_API fcByte2 fcByte4_even (fcByte4 a);

FANCIER_API fcShort4 fcByte4_convertShort4 (fcByte4 a);
FANCIER_API fcInt4 fcByte4_convertInt4 (fcByte4 a);
FANCIER_API fcLong4 fcByte4_convertLong4 (fcByte4 a);
FANCIER_API fcFloat4 fcByte4_convertFloat4 (fcByte4 a);
FANCIER_API fcDouble4 fcByte4_convertDouble4 (fcByte4 a);
FANCIER_API fcByte2 fcByte4_asByte2 (fcByte4 a);
FANCIER_API fcByte3 fcByte4_asByte3 (fcByte4 a);

FANCIER_API fcInt4 fcByte4_isEqual (fcByte4 a, fcByte4 b);
FANCIER_API fcInt4 fcByte4_isNotEqual (fcByte4 a, fcByte4 b);
FANCIER_API fcInt4 fcByte4_isGreater (fcByte4 a, fcByte4 b);
FANCIER_API fcInt4 fcByte4_isGreaterEqual (fcByte4 a, fcByte4 b);
FANCIER_API fcInt4 fcByte4_isLess (fcByte4 a, fcByte4 b);
FANCIER_API fcInt4 fcByte4_isLessEqual (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_select (fcByte4 a, fcByte4 b, fcInt4 c);

FANCIER_API cl_int fcByte4_any (fcByte4 a);
FANCIER_API cl_int fcByte4_all (fcByte4 a);

FANCIER_API fcByte4 fcByte4_add (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_sub (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_mul (fcByte4 a, fcByte4 b);
FANCIER_API fcDouble4 fcByte4_muld (fcByte4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcByte4_mulf (fcByte4 a, fcFloat4 b);
FANCIER_API fcByte4 fcByte4_mulk (fcByte4 a, cl_byte k);
FANCIER_API fcDouble4 fcByte4_mulkd (fcByte4 a, cl_double k);
FANCIER_API fcFloat4 fcByte4_mulkf (fcByte4 a, cl_float k);
FANCIER_API fcByte4 fcByte4_div (fcByte4 a, fcByte4 b);
FANCIER_API fcDouble4 fcByte4_divd (fcByte4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcByte4_divf (fcByte4 a, fcFloat4 b);
FANCIER_API fcByte4 fcByte4_divk (fcByte4 a, cl_byte k);
FANCIER_API fcDouble4 fcByte4_divkd (fcByte4 a, cl_double k);
FANCIER_API fcFloat4 fcByte4_divkf (fcByte4 a, cl_float k);
FANCIER_API fcByte4 fcByte4_mod (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_modk (fcByte4 a, cl_byte k);
FANCIER_API fcByte4 fcByte4_bitAnd (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_bitOr (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_bitXor (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_bitNot (fcByte4 a);

FANCIER_API fcByte4 fcByte4_abs (fcByte4 a);
FANCIER_API fcByte4 fcByte4_clamp (fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_API fcByte4 fcByte4_max (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_maxMag (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_min (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_minMag (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_mix (fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_API fcByte4 fcByte4_clampk (fcByte4 v, cl_byte min, cl_byte max);
FANCIER_API fcByte4 fcByte4_maxk (fcByte4 x, cl_byte y);
FANCIER_API fcByte4 fcByte4_mink (fcByte4 x, cl_byte y);
FANCIER_API fcByte4 fcByte4_mixk (fcByte4 x, fcByte4 y, cl_byte a);
FANCIER_API fcByte4 fcByte4_absDiff (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_addSat (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_clz (fcByte4 a);
FANCIER_API fcByte4 fcByte4_hadd (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_madHi (fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_API fcByte4 fcByte4_madSat (fcByte4 a, fcByte4 b, fcByte4 c);
FANCIER_API fcByte4 fcByte4_mulHi (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_rhadd (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_rotate (fcByte4 a, fcByte4 b);
FANCIER_API fcByte4 fcByte4_subSat (fcByte4 a, fcByte4 b);

FANCIER_API fcByte8 fcByte8_create (cl_byte a, cl_byte b, cl_byte c, cl_byte d, cl_byte e, cl_byte f, cl_byte g, cl_byte h);

FANCIER_API fcByte4 fcByte8_odd (fcByte8 a);
FANCIER_API fcByte4 fcByte8_even (fcByte8 a);

FANCIER_API fcShort8 fcByte8_convertShort8 (fcByte8 a);
FANCIER_API fcInt8 fcByte8_convertInt8 (fcByte8 a);
FANCIER_API fcLong8 fcByte8_convertLong8 (fcByte8 a);
FANCIER_API fcFloat8 fcByte8_convertFloat8 (fcByte8 a);
FANCIER_API fcDouble8 fcByte8_convertDouble8 (fcByte8 a);
FANCIER_API fcByte2 fcByte8_asByte2 (fcByte8 a);
FANCIER_API fcByte3 fcByte8_asByte3 (fcByte8 a);
FANCIER_API fcByte4 fcByte8_asByte4 (fcByte8 a);

FANCIER_API fcInt8 fcByte8_isEqual (fcByte8 a, fcByte8 b);
FANCIER_API fcInt8 fcByte8_isNotEqual (fcByte8 a, fcByte8 b);
FANCIER_API fcInt8 fcByte8_isGreater (fcByte8 a, fcByte8 b);
FANCIER_API fcInt8 fcByte8_isGreaterEqual (fcByte8 a, fcByte8 b);
FANCIER_API fcInt8 fcByte8_isLess (fcByte8 a, fcByte8 b);
FANCIER_API fcInt8 fcByte8_isLessEqual (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_select (fcByte8 a, fcByte8 b, fcInt8 c);

FANCIER_API cl_int fcByte8_any (fcByte8 a);
FANCIER_API cl_int fcByte8_all (fcByte8 a);

FANCIER_API fcByte8 fcByte8_add (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_sub (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_mul (fcByte8 a, fcByte8 b);
FANCIER_API fcDouble8 fcByte8_muld (fcByte8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcByte8_mulf (fcByte8 a, fcFloat8 b);
FANCIER_API fcByte8 fcByte8_mulk (fcByte8 a, cl_byte k);
FANCIER_API fcDouble8 fcByte8_mulkd (fcByte8 a, cl_double k);
FANCIER_API fcFloat8 fcByte8_mulkf (fcByte8 a, cl_float k);
FANCIER_API fcByte8 fcByte8_div (fcByte8 a, fcByte8 b);
FANCIER_API fcDouble8 fcByte8_divd (fcByte8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcByte8_divf (fcByte8 a, fcFloat8 b);
FANCIER_API fcByte8 fcByte8_divk (fcByte8 a, cl_byte k);
FANCIER_API fcDouble8 fcByte8_divkd (fcByte8 a, cl_double k);
FANCIER_API fcFloat8 fcByte8_divkf (fcByte8 a, cl_float k);
FANCIER_API fcByte8 fcByte8_mod (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_modk (fcByte8 a, cl_byte k);
FANCIER_API fcByte8 fcByte8_bitAnd (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_bitOr (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_bitXor (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_bitNot (fcByte8 a);

FANCIER_API fcByte8 fcByte8_abs (fcByte8 a);
FANCIER_API fcByte8 fcByte8_clamp (fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_API fcByte8 fcByte8_max (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_maxMag (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_min (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_minMag (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_mix (fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_API fcByte8 fcByte8_clampk (fcByte8 v, cl_byte min, cl_byte max);
FANCIER_API fcByte8 fcByte8_maxk (fcByte8 x, cl_byte y);
FANCIER_API fcByte8 fcByte8_mink (fcByte8 x, cl_byte y);
FANCIER_API fcByte8 fcByte8_mixk (fcByte8 x, fcByte8 y, cl_byte a);
FANCIER_API fcByte8 fcByte8_absDiff (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_addSat (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_clz (fcByte8 a);
FANCIER_API fcByte8 fcByte8_hadd (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_madHi (fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_API fcByte8 fcByte8_madSat (fcByte8 a, fcByte8 b, fcByte8 c);
FANCIER_API fcByte8 fcByte8_mulHi (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_rhadd (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_rotate (fcByte8 a, fcByte8 b);
FANCIER_API fcByte8 fcByte8_subSat (fcByte8 a, fcByte8 b);

FANCIER_API fcShort2 fcShort2_create (cl_short a, cl_short b);

FANCIER_API fcByte2 fcShort2_convertByte2 (fcShort2 a);
FANCIER_API fcInt2 fcShort2_convertInt2 (fcShort2 a);
FANCIER_API fcLong2 fcShort2_convertLong2 (fcShort2 a);
FANCIER_API fcFloat2 fcShort2_convertFloat2 (fcShort2 a);
FANCIER_API fcDouble2 fcShort2_convertDouble2 (fcShort2 a);

FANCIER_API fcInt2 fcShort2_isEqual (fcShort2 a, fcShort2 b);
FANCIER_API fcInt2 fcShort2_isNotEqual (fcShort2 a, fcShort2 b);
FANCIER_API fcInt2 fcShort2_isGreater (fcShort2 a, fcShort2 b);
FANCIER_API fcInt2 fcShort2_isGreaterEqual (fcShort2 a, fcShort2 b);
FANCIER_API fcInt2 fcShort2_isLess (fcShort2 a, fcShort2 b);
FANCIER_API fcInt2 fcShort2_isLessEqual (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_select (fcShort2 a, fcShort2 b, fcInt2 c);

FANCIER_API cl_int fcShort2_any (fcShort2 a);
FANCIER_API cl_int fcShort2_all (fcShort2 a);

FANCIER_API fcShort2 fcShort2_add (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_sub (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_mul (fcShort2 a, fcShort2 b);
FANCIER_API fcDouble2 fcShort2_muld (fcShort2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcShort2_mulf (fcShort2 a, fcFloat2 b);
FANCIER_API fcShort2 fcShort2_mulk (fcShort2 a, cl_short k);
FANCIER_API fcDouble2 fcShort2_mulkd (fcShort2 a, cl_double k);
FANCIER_API fcFloat2 fcShort2_mulkf (fcShort2 a, cl_float k);
FANCIER_API fcShort2 fcShort2_div (fcShort2 a, fcShort2 b);
FANCIER_API fcDouble2 fcShort2_divd (fcShort2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcShort2_divf (fcShort2 a, fcFloat2 b);
FANCIER_API fcShort2 fcShort2_divk (fcShort2 a, cl_short k);
FANCIER_API fcDouble2 fcShort2_divkd (fcShort2 a, cl_double k);
FANCIER_API fcFloat2 fcShort2_divkf (fcShort2 a, cl_float k);
FANCIER_API fcShort2 fcShort2_mod (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_modk (fcShort2 a, cl_short k);
FANCIER_API fcShort2 fcShort2_bitAnd (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_bitOr (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_bitXor (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_bitNot (fcShort2 a);

FANCIER_API fcShort2 fcShort2_abs (fcShort2 a);
FANCIER_API fcShort2 fcShort2_clamp (fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_API fcShort2 fcShort2_max (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_maxMag (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_min (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_minMag (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_mix (fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_API fcShort2 fcShort2_clampk (fcShort2 v, cl_short min, cl_short max);
FANCIER_API fcShort2 fcShort2_maxk (fcShort2 x, cl_short y);
FANCIER_API fcShort2 fcShort2_mink (fcShort2 x, cl_short y);
FANCIER_API fcShort2 fcShort2_mixk (fcShort2 x, fcShort2 y, cl_short a);
FANCIER_API fcShort2 fcShort2_absDiff (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_addSat (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_clz (fcShort2 a);
FANCIER_API fcShort2 fcShort2_hadd (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_madHi (fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_API fcShort2 fcShort2_madSat (fcShort2 a, fcShort2 b, fcShort2 c);
FANCIER_API fcShort2 fcShort2_mulHi (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_rhadd (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_rotate (fcShort2 a, fcShort2 b);
FANCIER_API fcShort2 fcShort2_subSat (fcShort2 a, fcShort2 b);

FANCIER_API fcShort3 fcShort3_create (cl_short a, cl_short b, cl_short c);

FANCIER_API fcByte3 fcShort3_convertByte3 (fcShort3 a);
FANCIER_API fcInt3 fcShort3_convertInt3 (fcShort3 a);
FANCIER_API fcLong3 fcShort3_convertLong3 (fcShort3 a);
FANCIER_API fcFloat3 fcShort3_convertFloat3 (fcShort3 a);
FANCIER_API fcDouble3 fcShort3_convertDouble3 (fcShort3 a);
FANCIER_API fcShort2 fcShort3_asShort2 (fcShort3 a);

FANCIER_API fcInt3 fcShort3_isEqual (fcShort3 a, fcShort3 b);
FANCIER_API fcInt3 fcShort3_isNotEqual (fcShort3 a, fcShort3 b);
FANCIER_API fcInt3 fcShort3_isGreater (fcShort3 a, fcShort3 b);
FANCIER_API fcInt3 fcShort3_isGreaterEqual (fcShort3 a, fcShort3 b);
FANCIER_API fcInt3 fcShort3_isLess (fcShort3 a, fcShort3 b);
FANCIER_API fcInt3 fcShort3_isLessEqual (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_select (fcShort3 a, fcShort3 b, fcInt3 c);

FANCIER_API cl_int fcShort3_any (fcShort3 a);
FANCIER_API cl_int fcShort3_all (fcShort3 a);

FANCIER_API fcShort3 fcShort3_add (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_sub (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_mul (fcShort3 a, fcShort3 b);
FANCIER_API fcDouble3 fcShort3_muld (fcShort3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcShort3_mulf (fcShort3 a, fcFloat3 b);
FANCIER_API fcShort3 fcShort3_mulk (fcShort3 a, cl_short k);
FANCIER_API fcDouble3 fcShort3_mulkd (fcShort3 a, cl_double k);
FANCIER_API fcFloat3 fcShort3_mulkf (fcShort3 a, cl_float k);
FANCIER_API fcShort3 fcShort3_div (fcShort3 a, fcShort3 b);
FANCIER_API fcDouble3 fcShort3_divd (fcShort3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcShort3_divf (fcShort3 a, fcFloat3 b);
FANCIER_API fcShort3 fcShort3_divk (fcShort3 a, cl_short k);
FANCIER_API fcDouble3 fcShort3_divkd (fcShort3 a, cl_double k);
FANCIER_API fcFloat3 fcShort3_divkf (fcShort3 a, cl_float k);
FANCIER_API fcShort3 fcShort3_mod (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_modk (fcShort3 a, cl_short k);
FANCIER_API fcShort3 fcShort3_bitAnd (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_bitOr (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_bitXor (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_bitNot (fcShort3 a);

FANCIER_API fcShort3 fcShort3_abs (fcShort3 a);
FANCIER_API fcShort3 fcShort3_clamp (fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_API fcShort3 fcShort3_max (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_maxMag (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_min (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_minMag (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_mix (fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_API fcShort3 fcShort3_clampk (fcShort3 v, cl_short min, cl_short max);
FANCIER_API fcShort3 fcShort3_maxk (fcShort3 x, cl_short y);
FANCIER_API fcShort3 fcShort3_mink (fcShort3 x, cl_short y);
FANCIER_API fcShort3 fcShort3_mixk (fcShort3 x, fcShort3 y, cl_short a);
FANCIER_API fcShort3 fcShort3_absDiff (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_addSat (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_clz (fcShort3 a);
FANCIER_API fcShort3 fcShort3_hadd (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_madHi (fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_API fcShort3 fcShort3_madSat (fcShort3 a, fcShort3 b, fcShort3 c);
FANCIER_API fcShort3 fcShort3_mulHi (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_rhadd (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_rotate (fcShort3 a, fcShort3 b);
FANCIER_API fcShort3 fcShort3_subSat (fcShort3 a, fcShort3 b);

FANCIER_API fcShort4 fcShort4_create (cl_short a, cl_short b, cl_short c, cl_short d);

FANCIER_API fcShort2 fcShort4_odd (fcShort4 a);
FANCIER_API fcShort2 fcShort4_even (fcShort4 a);

FANCIER_API fcByte4 fcShort4_convertByte4 (fcShort4 a);
FANCIER_API fcInt4 fcShort4_convertInt4 (fcShort4 a);
FANCIER_API fcLong4 fcShort4_convertLong4 (fcShort4 a);
FANCIER_API fcFloat4 fcShort4_convertFloat4 (fcShort4 a);
FANCIER_API fcDouble4 fcShort4_convertDouble4 (fcShort4 a);
FANCIER_API fcShort2 fcShort4_asShort2 (fcShort4 a);
FANCIER_API fcShort3 fcShort4_asShort3 (fcShort4 a);

FANCIER_API fcInt4 fcShort4_isEqual (fcShort4 a, fcShort4 b);
FANCIER_API fcInt4 fcShort4_isNotEqual (fcShort4 a, fcShort4 b);
FANCIER_API fcInt4 fcShort4_isGreater (fcShort4 a, fcShort4 b);
FANCIER_API fcInt4 fcShort4_isGreaterEqual (fcShort4 a, fcShort4 b);
FANCIER_API fcInt4 fcShort4_isLess (fcShort4 a, fcShort4 b);
FANCIER_API fcInt4 fcShort4_isLessEqual (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_select (fcShort4 a, fcShort4 b, fcInt4 c);

FANCIER_API cl_int fcShort4_any (fcShort4 a);
FANCIER_API cl_int fcShort4_all (fcShort4 a);

FANCIER_API fcShort4 fcShort4_add (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_sub (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_mul (fcShort4 a, fcShort4 b);
FANCIER_API fcDouble4 fcShort4_muld (fcShort4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcShort4_mulf (fcShort4 a, fcFloat4 b);
FANCIER_API fcShort4 fcShort4_mulk (fcShort4 a, cl_short k);
FANCIER_API fcDouble4 fcShort4_mulkd (fcShort4 a, cl_double k);
FANCIER_API fcFloat4 fcShort4_mulkf (fcShort4 a, cl_float k);
FANCIER_API fcShort4 fcShort4_div (fcShort4 a, fcShort4 b);
FANCIER_API fcDouble4 fcShort4_divd (fcShort4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcShort4_divf (fcShort4 a, fcFloat4 b);
FANCIER_API fcShort4 fcShort4_divk (fcShort4 a, cl_short k);
FANCIER_API fcDouble4 fcShort4_divkd (fcShort4 a, cl_double k);
FANCIER_API fcFloat4 fcShort4_divkf (fcShort4 a, cl_float k);
FANCIER_API fcShort4 fcShort4_mod (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_modk (fcShort4 a, cl_short k);
FANCIER_API fcShort4 fcShort4_bitAnd (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_bitOr (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_bitXor (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_bitNot (fcShort4 a);

FANCIER_API fcShort4 fcShort4_abs (fcShort4 a);
FANCIER_API fcShort4 fcShort4_clamp (fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_API fcShort4 fcShort4_max (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_maxMag (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_min (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_minMag (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_mix (fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_API fcShort4 fcShort4_clampk (fcShort4 v, cl_short min, cl_short max);
FANCIER_API fcShort4 fcShort4_maxk (fcShort4 x, cl_short y);
FANCIER_API fcShort4 fcShort4_mink (fcShort4 x, cl_short y);
FANCIER_API fcShort4 fcShort4_mixk (fcShort4 x, fcShort4 y, cl_short a);
FANCIER_API fcShort4 fcShort4_absDiff (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_addSat (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_clz (fcShort4 a);
FANCIER_API fcShort4 fcShort4_hadd (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_madHi (fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_API fcShort4 fcShort4_madSat (fcShort4 a, fcShort4 b, fcShort4 c);
FANCIER_API fcShort4 fcShort4_mulHi (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_rhadd (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_rotate (fcShort4 a, fcShort4 b);
FANCIER_API fcShort4 fcShort4_subSat (fcShort4 a, fcShort4 b);

FANCIER_API fcShort8 fcShort8_create (cl_short a, cl_short b, cl_short c, cl_short d, cl_short e, cl_short f, cl_short g, cl_short h);

FANCIER_API fcShort4 fcShort8_odd (fcShort8 a);
FANCIER_API fcShort4 fcShort8_even (fcShort8 a);

FANCIER_API fcByte8 fcShort8_convertByte8 (fcShort8 a);
FANCIER_API fcInt8 fcShort8_convertInt8 (fcShort8 a);
FANCIER_API fcLong8 fcShort8_convertLong8 (fcShort8 a);
FANCIER_API fcFloat8 fcShort8_convertFloat8 (fcShort8 a);
FANCIER_API fcDouble8 fcShort8_convertDouble8 (fcShort8 a);
FANCIER_API fcShort2 fcShort8_asShort2 (fcShort8 a);
FANCIER_API fcShort3 fcShort8_asShort3 (fcShort8 a);
FANCIER_API fcShort4 fcShort8_asShort4 (fcShort8 a);

FANCIER_API fcInt8 fcShort8_isEqual (fcShort8 a, fcShort8 b);
FANCIER_API fcInt8 fcShort8_isNotEqual (fcShort8 a, fcShort8 b);
FANCIER_API fcInt8 fcShort8_isGreater (fcShort8 a, fcShort8 b);
FANCIER_API fcInt8 fcShort8_isGreaterEqual (fcShort8 a, fcShort8 b);
FANCIER_API fcInt8 fcShort8_isLess (fcShort8 a, fcShort8 b);
FANCIER_API fcInt8 fcShort8_isLessEqual (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_select (fcShort8 a, fcShort8 b, fcInt8 c);

FANCIER_API cl_int fcShort8_any (fcShort8 a);
FANCIER_API cl_int fcShort8_all (fcShort8 a);

FANCIER_API fcShort8 fcShort8_add (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_sub (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_mul (fcShort8 a, fcShort8 b);
FANCIER_API fcDouble8 fcShort8_muld (fcShort8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcShort8_mulf (fcShort8 a, fcFloat8 b);
FANCIER_API fcShort8 fcShort8_mulk (fcShort8 a, cl_short k);
FANCIER_API fcDouble8 fcShort8_mulkd (fcShort8 a, cl_double k);
FANCIER_API fcFloat8 fcShort8_mulkf (fcShort8 a, cl_float k);
FANCIER_API fcShort8 fcShort8_div (fcShort8 a, fcShort8 b);
FANCIER_API fcDouble8 fcShort8_divd (fcShort8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcShort8_divf (fcShort8 a, fcFloat8 b);
FANCIER_API fcShort8 fcShort8_divk (fcShort8 a, cl_short k);
FANCIER_API fcDouble8 fcShort8_divkd (fcShort8 a, cl_double k);
FANCIER_API fcFloat8 fcShort8_divkf (fcShort8 a, cl_float k);
FANCIER_API fcShort8 fcShort8_mod (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_modk (fcShort8 a, cl_short k);
FANCIER_API fcShort8 fcShort8_bitAnd (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_bitOr (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_bitXor (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_bitNot (fcShort8 a);

FANCIER_API fcShort8 fcShort8_abs (fcShort8 a);
FANCIER_API fcShort8 fcShort8_clamp (fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_API fcShort8 fcShort8_max (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_maxMag (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_min (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_minMag (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_mix (fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_API fcShort8 fcShort8_clampk (fcShort8 v, cl_short min, cl_short max);
FANCIER_API fcShort8 fcShort8_maxk (fcShort8 x, cl_short y);
FANCIER_API fcShort8 fcShort8_mink (fcShort8 x, cl_short y);
FANCIER_API fcShort8 fcShort8_mixk (fcShort8 x, fcShort8 y, cl_short a);
FANCIER_API fcShort8 fcShort8_absDiff (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_addSat (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_clz (fcShort8 a);
FANCIER_API fcShort8 fcShort8_hadd (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_madHi (fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_API fcShort8 fcShort8_madSat (fcShort8 a, fcShort8 b, fcShort8 c);
FANCIER_API fcShort8 fcShort8_mulHi (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_rhadd (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_rotate (fcShort8 a, fcShort8 b);
FANCIER_API fcShort8 fcShort8_subSat (fcShort8 a, fcShort8 b);

FANCIER_API fcInt2 fcInt2_create (cl_int a, cl_int b);

FANCIER_API fcByte2 fcInt2_convertByte2 (fcInt2 a);
FANCIER_API fcShort2 fcInt2_convertShort2 (fcInt2 a);
FANCIER_API fcLong2 fcInt2_convertLong2 (fcInt2 a);
FANCIER_API fcFloat2 fcInt2_convertFloat2 (fcInt2 a);
FANCIER_API fcDouble2 fcInt2_convertDouble2 (fcInt2 a);

FANCIER_API fcInt2 fcInt2_isEqual (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_isNotEqual (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_isGreater (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_isGreaterEqual (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_isLess (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_isLessEqual (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_select (fcInt2 a, fcInt2 b, fcInt2 c);

FANCIER_API cl_int fcInt2_any (fcInt2 a);
FANCIER_API cl_int fcInt2_all (fcInt2 a);

FANCIER_API fcInt2 fcInt2_add (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_sub (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_mul (fcInt2 a, fcInt2 b);
FANCIER_API fcDouble2 fcInt2_muld (fcInt2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcInt2_mulf (fcInt2 a, fcFloat2 b);
FANCIER_API fcInt2 fcInt2_mulk (fcInt2 a, cl_int k);
FANCIER_API fcDouble2 fcInt2_mulkd (fcInt2 a, cl_double k);
FANCIER_API fcFloat2 fcInt2_mulkf (fcInt2 a, cl_float k);
FANCIER_API fcInt2 fcInt2_div (fcInt2 a, fcInt2 b);
FANCIER_API fcDouble2 fcInt2_divd (fcInt2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcInt2_divf (fcInt2 a, fcFloat2 b);
FANCIER_API fcInt2 fcInt2_divk (fcInt2 a, cl_int k);
FANCIER_API fcDouble2 fcInt2_divkd (fcInt2 a, cl_double k);
FANCIER_API fcFloat2 fcInt2_divkf (fcInt2 a, cl_float k);
FANCIER_API fcInt2 fcInt2_mod (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_modk (fcInt2 a, cl_int k);
FANCIER_API fcInt2 fcInt2_bitAnd (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_bitOr (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_bitXor (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_bitNot (fcInt2 a);

FANCIER_API fcInt2 fcInt2_abs (fcInt2 a);
FANCIER_API fcInt2 fcInt2_clamp (fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_API fcInt2 fcInt2_max (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_maxMag (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_min (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_minMag (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_mix (fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_API fcInt2 fcInt2_clampk (fcInt2 v, cl_int min, cl_int max);
FANCIER_API fcInt2 fcInt2_maxk (fcInt2 x, cl_int y);
FANCIER_API fcInt2 fcInt2_mink (fcInt2 x, cl_int y);
FANCIER_API fcInt2 fcInt2_mixk (fcInt2 x, fcInt2 y, cl_int a);
FANCIER_API fcInt2 fcInt2_absDiff (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_addSat (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_clz (fcInt2 a);
FANCIER_API fcInt2 fcInt2_hadd (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_madHi (fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_API fcInt2 fcInt2_madSat (fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_API fcInt2 fcInt2_mulHi (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_rhadd (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_rotate (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_subSat (fcInt2 a, fcInt2 b);
FANCIER_API fcInt2 fcInt2_mad24 (fcInt2 a, fcInt2 b, fcInt2 c);
FANCIER_API fcInt2 fcInt2_mul24 (fcInt2 a, fcInt2 b);

FANCIER_API fcInt3 fcInt3_create (cl_int a, cl_int b, cl_int c);

FANCIER_API fcByte3 fcInt3_convertByte3 (fcInt3 a);
FANCIER_API fcShort3 fcInt3_convertShort3 (fcInt3 a);
FANCIER_API fcLong3 fcInt3_convertLong3 (fcInt3 a);
FANCIER_API fcFloat3 fcInt3_convertFloat3 (fcInt3 a);
FANCIER_API fcDouble3 fcInt3_convertDouble3 (fcInt3 a);
FANCIER_API fcInt2 fcInt3_asInt2 (fcInt3 a);

FANCIER_API fcInt3 fcInt3_isEqual (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_isNotEqual (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_isGreater (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_isGreaterEqual (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_isLess (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_isLessEqual (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_select (fcInt3 a, fcInt3 b, fcInt3 c);

FANCIER_API cl_int fcInt3_any (fcInt3 a);
FANCIER_API cl_int fcInt3_all (fcInt3 a);

FANCIER_API fcInt3 fcInt3_add (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_sub (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_mul (fcInt3 a, fcInt3 b);
FANCIER_API fcDouble3 fcInt3_muld (fcInt3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcInt3_mulf (fcInt3 a, fcFloat3 b);
FANCIER_API fcInt3 fcInt3_mulk (fcInt3 a, cl_int k);
FANCIER_API fcDouble3 fcInt3_mulkd (fcInt3 a, cl_double k);
FANCIER_API fcFloat3 fcInt3_mulkf (fcInt3 a, cl_float k);
FANCIER_API fcInt3 fcInt3_div (fcInt3 a, fcInt3 b);
FANCIER_API fcDouble3 fcInt3_divd (fcInt3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcInt3_divf (fcInt3 a, fcFloat3 b);
FANCIER_API fcInt3 fcInt3_divk (fcInt3 a, cl_int k);
FANCIER_API fcDouble3 fcInt3_divkd (fcInt3 a, cl_double k);
FANCIER_API fcFloat3 fcInt3_divkf (fcInt3 a, cl_float k);
FANCIER_API fcInt3 fcInt3_mod (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_modk (fcInt3 a, cl_int k);
FANCIER_API fcInt3 fcInt3_bitAnd (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_bitOr (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_bitXor (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_bitNot (fcInt3 a);

FANCIER_API fcInt3 fcInt3_abs (fcInt3 a);
FANCIER_API fcInt3 fcInt3_clamp (fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_API fcInt3 fcInt3_max (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_maxMag (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_min (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_minMag (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_mix (fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_API fcInt3 fcInt3_clampk (fcInt3 v, cl_int min, cl_int max);
FANCIER_API fcInt3 fcInt3_maxk (fcInt3 x, cl_int y);
FANCIER_API fcInt3 fcInt3_mink (fcInt3 x, cl_int y);
FANCIER_API fcInt3 fcInt3_mixk (fcInt3 x, fcInt3 y, cl_int a);
FANCIER_API fcInt3 fcInt3_absDiff (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_addSat (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_clz (fcInt3 a);
FANCIER_API fcInt3 fcInt3_hadd (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_madHi (fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_API fcInt3 fcInt3_madSat (fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_API fcInt3 fcInt3_mulHi (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_rhadd (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_rotate (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_subSat (fcInt3 a, fcInt3 b);
FANCIER_API fcInt3 fcInt3_mad24 (fcInt3 a, fcInt3 b, fcInt3 c);
FANCIER_API fcInt3 fcInt3_mul24 (fcInt3 a, fcInt3 b);

FANCIER_API fcInt4 fcInt4_create (cl_int a, cl_int b, cl_int c, cl_int d);

FANCIER_API fcInt2 fcInt4_odd (fcInt4 a);
FANCIER_API fcInt2 fcInt4_even (fcInt4 a);

FANCIER_API fcByte4 fcInt4_convertByte4 (fcInt4 a);
FANCIER_API fcShort4 fcInt4_convertShort4 (fcInt4 a);
FANCIER_API fcLong4 fcInt4_convertLong4 (fcInt4 a);
FANCIER_API fcFloat4 fcInt4_convertFloat4 (fcInt4 a);
FANCIER_API fcDouble4 fcInt4_convertDouble4 (fcInt4 a);
FANCIER_API fcInt2 fcInt4_asInt2 (fcInt4 a);
FANCIER_API fcInt3 fcInt4_asInt3 (fcInt4 a);

FANCIER_API fcInt4 fcInt4_isEqual (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_isNotEqual (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_isGreater (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_isGreaterEqual (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_isLess (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_isLessEqual (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_select (fcInt4 a, fcInt4 b, fcInt4 c);

FANCIER_API cl_int fcInt4_any (fcInt4 a);
FANCIER_API cl_int fcInt4_all (fcInt4 a);

FANCIER_API fcInt4 fcInt4_add (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_sub (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_mul (fcInt4 a, fcInt4 b);
FANCIER_API fcDouble4 fcInt4_muld (fcInt4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcInt4_mulf (fcInt4 a, fcFloat4 b);
FANCIER_API fcInt4 fcInt4_mulk (fcInt4 a, cl_int k);
FANCIER_API fcDouble4 fcInt4_mulkd (fcInt4 a, cl_double k);
FANCIER_API fcFloat4 fcInt4_mulkf (fcInt4 a, cl_float k);
FANCIER_API fcInt4 fcInt4_div (fcInt4 a, fcInt4 b);
FANCIER_API fcDouble4 fcInt4_divd (fcInt4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcInt4_divf (fcInt4 a, fcFloat4 b);
FANCIER_API fcInt4 fcInt4_divk (fcInt4 a, cl_int k);
FANCIER_API fcDouble4 fcInt4_divkd (fcInt4 a, cl_double k);
FANCIER_API fcFloat4 fcInt4_divkf (fcInt4 a, cl_float k);
FANCIER_API fcInt4 fcInt4_mod (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_modk (fcInt4 a, cl_int k);
FANCIER_API fcInt4 fcInt4_bitAnd (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_bitOr (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_bitXor (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_bitNot (fcInt4 a);

FANCIER_API fcInt4 fcInt4_abs (fcInt4 a);
FANCIER_API fcInt4 fcInt4_clamp (fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_API fcInt4 fcInt4_max (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_maxMag (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_min (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_minMag (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_mix (fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_API fcInt4 fcInt4_clampk (fcInt4 v, cl_int min, cl_int max);
FANCIER_API fcInt4 fcInt4_maxk (fcInt4 x, cl_int y);
FANCIER_API fcInt4 fcInt4_mink (fcInt4 x, cl_int y);
FANCIER_API fcInt4 fcInt4_mixk (fcInt4 x, fcInt4 y, cl_int a);
FANCIER_API fcInt4 fcInt4_absDiff (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_addSat (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_clz (fcInt4 a);
FANCIER_API fcInt4 fcInt4_hadd (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_madHi (fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_API fcInt4 fcInt4_madSat (fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_API fcInt4 fcInt4_mulHi (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_rhadd (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_rotate (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_subSat (fcInt4 a, fcInt4 b);
FANCIER_API fcInt4 fcInt4_mad24 (fcInt4 a, fcInt4 b, fcInt4 c);
FANCIER_API fcInt4 fcInt4_mul24 (fcInt4 a, fcInt4 b);

FANCIER_API fcInt8 fcInt8_create (cl_int a, cl_int b, cl_int c, cl_int d, cl_int e, cl_int f, cl_int g, cl_int h);

FANCIER_API fcInt4 fcInt8_odd (fcInt8 a);
FANCIER_API fcInt4 fcInt8_even (fcInt8 a);

FANCIER_API fcByte8 fcInt8_convertByte8 (fcInt8 a);
FANCIER_API fcShort8 fcInt8_convertShort8 (fcInt8 a);
FANCIER_API fcLong8 fcInt8_convertLong8 (fcInt8 a);
FANCIER_API fcFloat8 fcInt8_convertFloat8 (fcInt8 a);
FANCIER_API fcDouble8 fcInt8_convertDouble8 (fcInt8 a);
FANCIER_API fcInt2 fcInt8_asInt2 (fcInt8 a);
FANCIER_API fcInt3 fcInt8_asInt3 (fcInt8 a);
FANCIER_API fcInt4 fcInt8_asInt4 (fcInt8 a);

FANCIER_API fcInt8 fcInt8_isEqual (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_isNotEqual (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_isGreater (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_isGreaterEqual (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_isLess (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_isLessEqual (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_select (fcInt8 a, fcInt8 b, fcInt8 c);

FANCIER_API cl_int fcInt8_any (fcInt8 a);
FANCIER_API cl_int fcInt8_all (fcInt8 a);

FANCIER_API fcInt8 fcInt8_add (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_sub (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_mul (fcInt8 a, fcInt8 b);
FANCIER_API fcDouble8 fcInt8_muld (fcInt8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcInt8_mulf (fcInt8 a, fcFloat8 b);
FANCIER_API fcInt8 fcInt8_mulk (fcInt8 a, cl_int k);
FANCIER_API fcDouble8 fcInt8_mulkd (fcInt8 a, cl_double k);
FANCIER_API fcFloat8 fcInt8_mulkf (fcInt8 a, cl_float k);
FANCIER_API fcInt8 fcInt8_div (fcInt8 a, fcInt8 b);
FANCIER_API fcDouble8 fcInt8_divd (fcInt8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcInt8_divf (fcInt8 a, fcFloat8 b);
FANCIER_API fcInt8 fcInt8_divk (fcInt8 a, cl_int k);
FANCIER_API fcDouble8 fcInt8_divkd (fcInt8 a, cl_double k);
FANCIER_API fcFloat8 fcInt8_divkf (fcInt8 a, cl_float k);
FANCIER_API fcInt8 fcInt8_mod (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_modk (fcInt8 a, cl_int k);
FANCIER_API fcInt8 fcInt8_bitAnd (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_bitOr (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_bitXor (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_bitNot (fcInt8 a);

FANCIER_API fcInt8 fcInt8_abs (fcInt8 a);
FANCIER_API fcInt8 fcInt8_clamp (fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_API fcInt8 fcInt8_max (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_maxMag (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_min (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_minMag (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_mix (fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_API fcInt8 fcInt8_clampk (fcInt8 v, cl_int min, cl_int max);
FANCIER_API fcInt8 fcInt8_maxk (fcInt8 x, cl_int y);
FANCIER_API fcInt8 fcInt8_mink (fcInt8 x, cl_int y);
FANCIER_API fcInt8 fcInt8_mixk (fcInt8 x, fcInt8 y, cl_int a);
FANCIER_API fcInt8 fcInt8_absDiff (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_addSat (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_clz (fcInt8 a);
FANCIER_API fcInt8 fcInt8_hadd (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_madHi (fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_API fcInt8 fcInt8_madSat (fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_API fcInt8 fcInt8_mulHi (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_rhadd (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_rotate (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_subSat (fcInt8 a, fcInt8 b);
FANCIER_API fcInt8 fcInt8_mad24 (fcInt8 a, fcInt8 b, fcInt8 c);
FANCIER_API fcInt8 fcInt8_mul24 (fcInt8 a, fcInt8 b);

FANCIER_API fcLong2 fcLong2_create (cl_long a, cl_long b);

FANCIER_API fcByte2 fcLong2_convertByte2 (fcLong2 a);
FANCIER_API fcShort2 fcLong2_convertShort2 (fcLong2 a);
FANCIER_API fcInt2 fcLong2_convertInt2 (fcLong2 a);
FANCIER_API fcFloat2 fcLong2_convertFloat2 (fcLong2 a);
FANCIER_API fcDouble2 fcLong2_convertDouble2 (fcLong2 a);

FANCIER_API fcInt2 fcLong2_isEqual (fcLong2 a, fcLong2 b);
FANCIER_API fcInt2 fcLong2_isNotEqual (fcLong2 a, fcLong2 b);
FANCIER_API fcInt2 fcLong2_isGreater (fcLong2 a, fcLong2 b);
FANCIER_API fcInt2 fcLong2_isGreaterEqual (fcLong2 a, fcLong2 b);
FANCIER_API fcInt2 fcLong2_isLess (fcLong2 a, fcLong2 b);
FANCIER_API fcInt2 fcLong2_isLessEqual (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_select (fcLong2 a, fcLong2 b, fcInt2 c);

FANCIER_API cl_int fcLong2_any (fcLong2 a);
FANCIER_API cl_int fcLong2_all (fcLong2 a);

FANCIER_API fcLong2 fcLong2_add (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_sub (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_mul (fcLong2 a, fcLong2 b);
FANCIER_API fcDouble2 fcLong2_muld (fcLong2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcLong2_mulf (fcLong2 a, fcFloat2 b);
FANCIER_API fcLong2 fcLong2_mulk (fcLong2 a, cl_long k);
FANCIER_API fcDouble2 fcLong2_mulkd (fcLong2 a, cl_double k);
FANCIER_API fcFloat2 fcLong2_mulkf (fcLong2 a, cl_float k);
FANCIER_API fcLong2 fcLong2_div (fcLong2 a, fcLong2 b);
FANCIER_API fcDouble2 fcLong2_divd (fcLong2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcLong2_divf (fcLong2 a, fcFloat2 b);
FANCIER_API fcLong2 fcLong2_divk (fcLong2 a, cl_long k);
FANCIER_API fcDouble2 fcLong2_divkd (fcLong2 a, cl_double k);
FANCIER_API fcFloat2 fcLong2_divkf (fcLong2 a, cl_float k);
FANCIER_API fcLong2 fcLong2_mod (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_modk (fcLong2 a, cl_long k);
FANCIER_API fcLong2 fcLong2_bitAnd (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_bitOr (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_bitXor (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_bitNot (fcLong2 a);

FANCIER_API fcLong2 fcLong2_abs (fcLong2 a);
FANCIER_API fcLong2 fcLong2_clamp (fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_API fcLong2 fcLong2_max (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_maxMag (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_min (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_minMag (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_mix (fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_API fcLong2 fcLong2_clampk (fcLong2 v, cl_long min, cl_long max);
FANCIER_API fcLong2 fcLong2_maxk (fcLong2 x, cl_long y);
FANCIER_API fcLong2 fcLong2_mink (fcLong2 x, cl_long y);
FANCIER_API fcLong2 fcLong2_mixk (fcLong2 x, fcLong2 y, cl_long a);
FANCIER_API fcLong2 fcLong2_absDiff (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_addSat (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_clz (fcLong2 a);
FANCIER_API fcLong2 fcLong2_hadd (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_madHi (fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_API fcLong2 fcLong2_madSat (fcLong2 a, fcLong2 b, fcLong2 c);
FANCIER_API fcLong2 fcLong2_mulHi (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_rhadd (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_rotate (fcLong2 a, fcLong2 b);
FANCIER_API fcLong2 fcLong2_subSat (fcLong2 a, fcLong2 b);

FANCIER_API fcLong3 fcLong3_create (cl_long a, cl_long b, cl_long c);

FANCIER_API fcByte3 fcLong3_convertByte3 (fcLong3 a);
FANCIER_API fcShort3 fcLong3_convertShort3 (fcLong3 a);
FANCIER_API fcInt3 fcLong3_convertInt3 (fcLong3 a);
FANCIER_API fcFloat3 fcLong3_convertFloat3 (fcLong3 a);
FANCIER_API fcDouble3 fcLong3_convertDouble3 (fcLong3 a);
FANCIER_API fcLong2 fcLong3_asLong2 (fcLong3 a);

FANCIER_API fcInt3 fcLong3_isEqual (fcLong3 a, fcLong3 b);
FANCIER_API fcInt3 fcLong3_isNotEqual (fcLong3 a, fcLong3 b);
FANCIER_API fcInt3 fcLong3_isGreater (fcLong3 a, fcLong3 b);
FANCIER_API fcInt3 fcLong3_isGreaterEqual (fcLong3 a, fcLong3 b);
FANCIER_API fcInt3 fcLong3_isLess (fcLong3 a, fcLong3 b);
FANCIER_API fcInt3 fcLong3_isLessEqual (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_select (fcLong3 a, fcLong3 b, fcInt3 c);

FANCIER_API cl_int fcLong3_any (fcLong3 a);
FANCIER_API cl_int fcLong3_all (fcLong3 a);

FANCIER_API fcLong3 fcLong3_add (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_sub (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_mul (fcLong3 a, fcLong3 b);
FANCIER_API fcDouble3 fcLong3_muld (fcLong3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcLong3_mulf (fcLong3 a, fcFloat3 b);
FANCIER_API fcLong3 fcLong3_mulk (fcLong3 a, cl_long k);
FANCIER_API fcDouble3 fcLong3_mulkd (fcLong3 a, cl_double k);
FANCIER_API fcFloat3 fcLong3_mulkf (fcLong3 a, cl_float k);
FANCIER_API fcLong3 fcLong3_div (fcLong3 a, fcLong3 b);
FANCIER_API fcDouble3 fcLong3_divd (fcLong3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcLong3_divf (fcLong3 a, fcFloat3 b);
FANCIER_API fcLong3 fcLong3_divk (fcLong3 a, cl_long k);
FANCIER_API fcDouble3 fcLong3_divkd (fcLong3 a, cl_double k);
FANCIER_API fcFloat3 fcLong3_divkf (fcLong3 a, cl_float k);
FANCIER_API fcLong3 fcLong3_mod (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_modk (fcLong3 a, cl_long k);
FANCIER_API fcLong3 fcLong3_bitAnd (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_bitOr (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_bitXor (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_bitNot (fcLong3 a);

FANCIER_API fcLong3 fcLong3_abs (fcLong3 a);
FANCIER_API fcLong3 fcLong3_clamp (fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_API fcLong3 fcLong3_max (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_maxMag (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_min (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_minMag (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_mix (fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_API fcLong3 fcLong3_clampk (fcLong3 v, cl_long min, cl_long max);
FANCIER_API fcLong3 fcLong3_maxk (fcLong3 x, cl_long y);
FANCIER_API fcLong3 fcLong3_mink (fcLong3 x, cl_long y);
FANCIER_API fcLong3 fcLong3_mixk (fcLong3 x, fcLong3 y, cl_long a);
FANCIER_API fcLong3 fcLong3_absDiff (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_addSat (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_clz (fcLong3 a);
FANCIER_API fcLong3 fcLong3_hadd (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_madHi (fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_API fcLong3 fcLong3_madSat (fcLong3 a, fcLong3 b, fcLong3 c);
FANCIER_API fcLong3 fcLong3_mulHi (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_rhadd (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_rotate (fcLong3 a, fcLong3 b);
FANCIER_API fcLong3 fcLong3_subSat (fcLong3 a, fcLong3 b);

FANCIER_API fcLong4 fcLong4_create (cl_long a, cl_long b, cl_long c, cl_long d);

FANCIER_API fcLong2 fcLong4_odd (fcLong4 a);
FANCIER_API fcLong2 fcLong4_even (fcLong4 a);

FANCIER_API fcByte4 fcLong4_convertByte4 (fcLong4 a);
FANCIER_API fcShort4 fcLong4_convertShort4 (fcLong4 a);
FANCIER_API fcInt4 fcLong4_convertInt4 (fcLong4 a);
FANCIER_API fcFloat4 fcLong4_convertFloat4 (fcLong4 a);
FANCIER_API fcDouble4 fcLong4_convertDouble4 (fcLong4 a);
FANCIER_API fcLong2 fcLong4_asLong2 (fcLong4 a);
FANCIER_API fcLong3 fcLong4_asLong3 (fcLong4 a);

FANCIER_API fcInt4 fcLong4_isEqual (fcLong4 a, fcLong4 b);
FANCIER_API fcInt4 fcLong4_isNotEqual (fcLong4 a, fcLong4 b);
FANCIER_API fcInt4 fcLong4_isGreater (fcLong4 a, fcLong4 b);
FANCIER_API fcInt4 fcLong4_isGreaterEqual (fcLong4 a, fcLong4 b);
FANCIER_API fcInt4 fcLong4_isLess (fcLong4 a, fcLong4 b);
FANCIER_API fcInt4 fcLong4_isLessEqual (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_select (fcLong4 a, fcLong4 b, fcInt4 c);

FANCIER_API cl_int fcLong4_any (fcLong4 a);
FANCIER_API cl_int fcLong4_all (fcLong4 a);

FANCIER_API fcLong4 fcLong4_add (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_sub (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_mul (fcLong4 a, fcLong4 b);
FANCIER_API fcDouble4 fcLong4_muld (fcLong4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcLong4_mulf (fcLong4 a, fcFloat4 b);
FANCIER_API fcLong4 fcLong4_mulk (fcLong4 a, cl_long k);
FANCIER_API fcDouble4 fcLong4_mulkd (fcLong4 a, cl_double k);
FANCIER_API fcFloat4 fcLong4_mulkf (fcLong4 a, cl_float k);
FANCIER_API fcLong4 fcLong4_div (fcLong4 a, fcLong4 b);
FANCIER_API fcDouble4 fcLong4_divd (fcLong4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcLong4_divf (fcLong4 a, fcFloat4 b);
FANCIER_API fcLong4 fcLong4_divk (fcLong4 a, cl_long k);
FANCIER_API fcDouble4 fcLong4_divkd (fcLong4 a, cl_double k);
FANCIER_API fcFloat4 fcLong4_divkf (fcLong4 a, cl_float k);
FANCIER_API fcLong4 fcLong4_mod (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_modk (fcLong4 a, cl_long k);
FANCIER_API fcLong4 fcLong4_bitAnd (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_bitOr (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_bitXor (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_bitNot (fcLong4 a);

FANCIER_API fcLong4 fcLong4_abs (fcLong4 a);
FANCIER_API fcLong4 fcLong4_clamp (fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_API fcLong4 fcLong4_max (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_maxMag (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_min (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_minMag (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_mix (fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_API fcLong4 fcLong4_clampk (fcLong4 v, cl_long min, cl_long max);
FANCIER_API fcLong4 fcLong4_maxk (fcLong4 x, cl_long y);
FANCIER_API fcLong4 fcLong4_mink (fcLong4 x, cl_long y);
FANCIER_API fcLong4 fcLong4_mixk (fcLong4 x, fcLong4 y, cl_long a);
FANCIER_API fcLong4 fcLong4_absDiff (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_addSat (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_clz (fcLong4 a);
FANCIER_API fcLong4 fcLong4_hadd (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_madHi (fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_API fcLong4 fcLong4_madSat (fcLong4 a, fcLong4 b, fcLong4 c);
FANCIER_API fcLong4 fcLong4_mulHi (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_rhadd (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_rotate (fcLong4 a, fcLong4 b);
FANCIER_API fcLong4 fcLong4_subSat (fcLong4 a, fcLong4 b);

FANCIER_API fcLong8 fcLong8_create (cl_long a, cl_long b, cl_long c, cl_long d, cl_long e, cl_long f, cl_long g, cl_long h);

FANCIER_API fcLong4 fcLong8_odd (fcLong8 a);
FANCIER_API fcLong4 fcLong8_even (fcLong8 a);

FANCIER_API fcByte8 fcLong8_convertByte8 (fcLong8 a);
FANCIER_API fcShort8 fcLong8_convertShort8 (fcLong8 a);
FANCIER_API fcInt8 fcLong8_convertInt8 (fcLong8 a);
FANCIER_API fcFloat8 fcLong8_convertFloat8 (fcLong8 a);
FANCIER_API fcDouble8 fcLong8_convertDouble8 (fcLong8 a);
FANCIER_API fcLong2 fcLong8_asLong2 (fcLong8 a);
FANCIER_API fcLong3 fcLong8_asLong3 (fcLong8 a);
FANCIER_API fcLong4 fcLong8_asLong4 (fcLong8 a);

FANCIER_API fcInt8 fcLong8_isEqual (fcLong8 a, fcLong8 b);
FANCIER_API fcInt8 fcLong8_isNotEqual (fcLong8 a, fcLong8 b);
FANCIER_API fcInt8 fcLong8_isGreater (fcLong8 a, fcLong8 b);
FANCIER_API fcInt8 fcLong8_isGreaterEqual (fcLong8 a, fcLong8 b);
FANCIER_API fcInt8 fcLong8_isLess (fcLong8 a, fcLong8 b);
FANCIER_API fcInt8 fcLong8_isLessEqual (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_select (fcLong8 a, fcLong8 b, fcInt8 c);

FANCIER_API cl_int fcLong8_any (fcLong8 a);
FANCIER_API cl_int fcLong8_all (fcLong8 a);

FANCIER_API fcLong8 fcLong8_add (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_sub (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_mul (fcLong8 a, fcLong8 b);
FANCIER_API fcDouble8 fcLong8_muld (fcLong8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcLong8_mulf (fcLong8 a, fcFloat8 b);
FANCIER_API fcLong8 fcLong8_mulk (fcLong8 a, cl_long k);
FANCIER_API fcDouble8 fcLong8_mulkd (fcLong8 a, cl_double k);
FANCIER_API fcFloat8 fcLong8_mulkf (fcLong8 a, cl_float k);
FANCIER_API fcLong8 fcLong8_div (fcLong8 a, fcLong8 b);
FANCIER_API fcDouble8 fcLong8_divd (fcLong8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcLong8_divf (fcLong8 a, fcFloat8 b);
FANCIER_API fcLong8 fcLong8_divk (fcLong8 a, cl_long k);
FANCIER_API fcDouble8 fcLong8_divkd (fcLong8 a, cl_double k);
FANCIER_API fcFloat8 fcLong8_divkf (fcLong8 a, cl_float k);
FANCIER_API fcLong8 fcLong8_mod (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_modk (fcLong8 a, cl_long k);
FANCIER_API fcLong8 fcLong8_bitAnd (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_bitOr (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_bitXor (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_bitNot (fcLong8 a);

FANCIER_API fcLong8 fcLong8_abs (fcLong8 a);
FANCIER_API fcLong8 fcLong8_clamp (fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_API fcLong8 fcLong8_max (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_maxMag (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_min (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_minMag (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_mix (fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_API fcLong8 fcLong8_clampk (fcLong8 v, cl_long min, cl_long max);
FANCIER_API fcLong8 fcLong8_maxk (fcLong8 x, cl_long y);
FANCIER_API fcLong8 fcLong8_mink (fcLong8 x, cl_long y);
FANCIER_API fcLong8 fcLong8_mixk (fcLong8 x, fcLong8 y, cl_long a);
FANCIER_API fcLong8 fcLong8_absDiff (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_addSat (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_clz (fcLong8 a);
FANCIER_API fcLong8 fcLong8_hadd (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_madHi (fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_API fcLong8 fcLong8_madSat (fcLong8 a, fcLong8 b, fcLong8 c);
FANCIER_API fcLong8 fcLong8_mulHi (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_rhadd (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_rotate (fcLong8 a, fcLong8 b);
FANCIER_API fcLong8 fcLong8_subSat (fcLong8 a, fcLong8 b);

FANCIER_API fcFloat2 fcFloat2_create (cl_float a, cl_float b);

FANCIER_API fcByte2 fcFloat2_convertByte2 (fcFloat2 a);
FANCIER_API fcShort2 fcFloat2_convertShort2 (fcFloat2 a);
FANCIER_API fcInt2 fcFloat2_convertInt2 (fcFloat2 a);
FANCIER_API fcLong2 fcFloat2_convertLong2 (fcFloat2 a);
FANCIER_API fcDouble2 fcFloat2_convertDouble2 (fcFloat2 a);

FANCIER_API fcInt2 fcFloat2_isEqual (fcFloat2 a, fcFloat2 b);
FANCIER_API fcInt2 fcFloat2_isNotEqual (fcFloat2 a, fcFloat2 b);
FANCIER_API fcInt2 fcFloat2_isGreater (fcFloat2 a, fcFloat2 b);
FANCIER_API fcInt2 fcFloat2_isGreaterEqual (fcFloat2 a, fcFloat2 b);
FANCIER_API fcInt2 fcFloat2_isLess (fcFloat2 a, fcFloat2 b);
FANCIER_API fcInt2 fcFloat2_isLessEqual (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_select (fcFloat2 a, fcFloat2 b, fcInt2 c);
FANCIER_API fcInt2 fcFloat2_isFinite (fcFloat2 a);
FANCIER_API fcInt2 fcFloat2_isInf (fcFloat2 a);
FANCIER_API fcInt2 fcFloat2_isNaN (fcFloat2 a);
FANCIER_API fcInt2 fcFloat2_isNormal (fcFloat2 a);
FANCIER_API fcInt2 fcFloat2_isOrdered (fcFloat2 a, fcFloat2 b);
FANCIER_API fcInt2 fcFloat2_isUnordered (fcFloat2 a, fcFloat2 b);

FANCIER_API cl_int fcFloat2_any (fcFloat2 a);
FANCIER_API cl_int fcFloat2_all (fcFloat2 a);

FANCIER_API fcFloat2 fcFloat2_add (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_sub (fcFloat2 a, fcFloat2 b);
FANCIER_API fcDouble2 fcFloat2_muld (fcFloat2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcFloat2_mulf (fcFloat2 a, fcFloat2 b);
FANCIER_API fcDouble2 fcFloat2_mulkd (fcFloat2 a, cl_double k);
FANCIER_API fcFloat2 fcFloat2_mulkf (fcFloat2 a, cl_float k);
FANCIER_API fcDouble2 fcFloat2_divd (fcFloat2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcFloat2_divf (fcFloat2 a, fcFloat2 b);
FANCIER_API fcDouble2 fcFloat2_divkd (fcFloat2 a, cl_double k);
FANCIER_API fcFloat2 fcFloat2_divkf (fcFloat2 a, cl_float k);
FANCIER_API cl_float fcFloat2_dot (fcFloat2 a, fcFloat2 b);
FANCIER_API cl_double fcFloat2_distance (fcFloat2 a, fcFloat2 b);
FANCIER_API cl_double fcFloat2_length (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_normalize (fcFloat2 a);

FANCIER_API fcFloat2 fcFloat2_abs (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_clamp (fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_API fcFloat2 fcFloat2_max (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_maxMag (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_min (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_minMag (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_mix (fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_API fcFloat2 fcFloat2_clampk (fcFloat2 v, cl_float min, cl_float max);
FANCIER_API fcFloat2 fcFloat2_maxk (fcFloat2 x, cl_float y);
FANCIER_API fcFloat2 fcFloat2_mink (fcFloat2 x, cl_float y);
FANCIER_API fcFloat2 fcFloat2_mixk (fcFloat2 x, fcFloat2 y, cl_float a);
FANCIER_API fcFloat2 fcFloat2_acos (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_acosh (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_asin (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_asinh (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_atan (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_atan2 (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_atanh (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_cbrt (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_ceil (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_copySign (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_cos (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_cosh (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_erf (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_erfc (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_exp (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_exp10 (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_exp2 (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_expm1 (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_fdim (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_floor (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_fma (fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_API fcFloat2 fcFloat2_fmod (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_fract (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_frexp (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_getExponent (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_hypot (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_lgamma (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_log (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_log10 (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_log1p (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_log2 (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_logb (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_mad (fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_API fcFloat2 fcFloat2_nextAfter (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_pow (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_powr (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_remainder (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_rint (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_round (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_rsqrt (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_signum (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_sin (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_sinh (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_smoothStep (fcFloat2 a, fcFloat2 b, fcFloat2 c);
FANCIER_API fcFloat2 fcFloat2_sqrt (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_step (fcFloat2 a, fcFloat2 b);
FANCIER_API fcFloat2 fcFloat2_tan (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_tanh (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_tgamma (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_toDegrees (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_toRadians (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_trunc (fcFloat2 a);
FANCIER_API fcFloat2 fcFloat2_scalb (fcFloat2 a, fcInt2 n);
FANCIER_API fcFloat2 fcFloat2_ldexp (fcFloat2 a, fcInt2 n);
FANCIER_API fcFloat2 fcFloat2_pown (fcFloat2 a, fcInt2 b);
FANCIER_API fcFloat2 fcFloat2_rootn (fcFloat2 a, fcInt2 b);
FANCIER_API fcFloat2 fcFloat2_smoothStepk (fcFloat2 a, fcFloat2 b, cl_float c);

FANCIER_API fcFloat3 fcFloat3_create (cl_float a, cl_float b, cl_float c);

FANCIER_API fcByte3 fcFloat3_convertByte3 (fcFloat3 a);
FANCIER_API fcShort3 fcFloat3_convertShort3 (fcFloat3 a);
FANCIER_API fcInt3 fcFloat3_convertInt3 (fcFloat3 a);
FANCIER_API fcLong3 fcFloat3_convertLong3 (fcFloat3 a);
FANCIER_API fcDouble3 fcFloat3_convertDouble3 (fcFloat3 a);
FANCIER_API fcFloat2 fcFloat3_asFloat2 (fcFloat3 a);

FANCIER_API fcInt3 fcFloat3_isEqual (fcFloat3 a, fcFloat3 b);
FANCIER_API fcInt3 fcFloat3_isNotEqual (fcFloat3 a, fcFloat3 b);
FANCIER_API fcInt3 fcFloat3_isGreater (fcFloat3 a, fcFloat3 b);
FANCIER_API fcInt3 fcFloat3_isGreaterEqual (fcFloat3 a, fcFloat3 b);
FANCIER_API fcInt3 fcFloat3_isLess (fcFloat3 a, fcFloat3 b);
FANCIER_API fcInt3 fcFloat3_isLessEqual (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_select (fcFloat3 a, fcFloat3 b, fcInt3 c);
FANCIER_API fcInt3 fcFloat3_isFinite (fcFloat3 a);
FANCIER_API fcInt3 fcFloat3_isInf (fcFloat3 a);
FANCIER_API fcInt3 fcFloat3_isNaN (fcFloat3 a);
FANCIER_API fcInt3 fcFloat3_isNormal (fcFloat3 a);
FANCIER_API fcInt3 fcFloat3_isOrdered (fcFloat3 a, fcFloat3 b);
FANCIER_API fcInt3 fcFloat3_isUnordered (fcFloat3 a, fcFloat3 b);

FANCIER_API cl_int fcFloat3_any (fcFloat3 a);
FANCIER_API cl_int fcFloat3_all (fcFloat3 a);

FANCIER_API fcFloat3 fcFloat3_add (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_sub (fcFloat3 a, fcFloat3 b);
FANCIER_API fcDouble3 fcFloat3_muld (fcFloat3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcFloat3_mulf (fcFloat3 a, fcFloat3 b);
FANCIER_API fcDouble3 fcFloat3_mulkd (fcFloat3 a, cl_double k);
FANCIER_API fcFloat3 fcFloat3_mulkf (fcFloat3 a, cl_float k);
FANCIER_API fcDouble3 fcFloat3_divd (fcFloat3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcFloat3_divf (fcFloat3 a, fcFloat3 b);
FANCIER_API fcDouble3 fcFloat3_divkd (fcFloat3 a, cl_double k);
FANCIER_API fcFloat3 fcFloat3_divkf (fcFloat3 a, cl_float k);
FANCIER_API fcFloat3 fcFloat3_cross (fcFloat3 a, fcFloat3 b);
FANCIER_API cl_float fcFloat3_dot (fcFloat3 a, fcFloat3 b);
FANCIER_API cl_double fcFloat3_distance (fcFloat3 a, fcFloat3 b);
FANCIER_API cl_double fcFloat3_length (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_normalize (fcFloat3 a);

FANCIER_API fcFloat3 fcFloat3_abs (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_clamp (fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_API fcFloat3 fcFloat3_max (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_maxMag (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_min (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_minMag (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_mix (fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_API fcFloat3 fcFloat3_clampk (fcFloat3 v, cl_float min, cl_float max);
FANCIER_API fcFloat3 fcFloat3_maxk (fcFloat3 x, cl_float y);
FANCIER_API fcFloat3 fcFloat3_mink (fcFloat3 x, cl_float y);
FANCIER_API fcFloat3 fcFloat3_mixk (fcFloat3 x, fcFloat3 y, cl_float a);
FANCIER_API fcFloat3 fcFloat3_acos (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_acosh (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_asin (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_asinh (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_atan (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_atan2 (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_atanh (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_cbrt (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_ceil (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_copySign (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_cos (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_cosh (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_erf (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_erfc (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_exp (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_exp10 (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_exp2 (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_expm1 (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_fdim (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_floor (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_fma (fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_API fcFloat3 fcFloat3_fmod (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_fract (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_frexp (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_getExponent (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_hypot (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_lgamma (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_log (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_log10 (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_log1p (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_log2 (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_logb (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_mad (fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_API fcFloat3 fcFloat3_nextAfter (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_pow (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_powr (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_remainder (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_rint (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_round (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_rsqrt (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_signum (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_sin (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_sinh (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_smoothStep (fcFloat3 a, fcFloat3 b, fcFloat3 c);
FANCIER_API fcFloat3 fcFloat3_sqrt (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_step (fcFloat3 a, fcFloat3 b);
FANCIER_API fcFloat3 fcFloat3_tan (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_tanh (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_tgamma (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_toDegrees (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_toRadians (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_trunc (fcFloat3 a);
FANCIER_API fcFloat3 fcFloat3_scalb (fcFloat3 a, fcInt3 n);
FANCIER_API fcFloat3 fcFloat3_ldexp (fcFloat3 a, fcInt3 n);
FANCIER_API fcFloat3 fcFloat3_pown (fcFloat3 a, fcInt3 b);
FANCIER_API fcFloat3 fcFloat3_rootn (fcFloat3 a, fcInt3 b);
FANCIER_API fcFloat3 fcFloat3_smoothStepk (fcFloat3 a, fcFloat3 b, cl_float c);

FANCIER_API fcFloat4 fcFloat4_create (cl_float a, cl_float b, cl_float c, cl_float d);

FANCIER_API fcFloat2 fcFloat4_odd (fcFloat4 a);
FANCIER_API fcFloat2 fcFloat4_even (fcFloat4 a);

FANCIER_API fcByte4 fcFloat4_convertByte4 (fcFloat4 a);
FANCIER_API fcShort4 fcFloat4_convertShort4 (fcFloat4 a);
FANCIER_API fcInt4 fcFloat4_convertInt4 (fcFloat4 a);
FANCIER_API fcLong4 fcFloat4_convertLong4 (fcFloat4 a);
FANCIER_API fcDouble4 fcFloat4_convertDouble4 (fcFloat4 a);
FANCIER_API fcFloat2 fcFloat4_asFloat2 (fcFloat4 a);
FANCIER_API fcFloat3 fcFloat4_asFloat3 (fcFloat4 a);

FANCIER_API fcInt4 fcFloat4_isEqual (fcFloat4 a, fcFloat4 b);
FANCIER_API fcInt4 fcFloat4_isNotEqual (fcFloat4 a, fcFloat4 b);
FANCIER_API fcInt4 fcFloat4_isGreater (fcFloat4 a, fcFloat4 b);
FANCIER_API fcInt4 fcFloat4_isGreaterEqual (fcFloat4 a, fcFloat4 b);
FANCIER_API fcInt4 fcFloat4_isLess (fcFloat4 a, fcFloat4 b);
FANCIER_API fcInt4 fcFloat4_isLessEqual (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_select (fcFloat4 a, fcFloat4 b, fcInt4 c);
FANCIER_API fcInt4 fcFloat4_isFinite (fcFloat4 a);
FANCIER_API fcInt4 fcFloat4_isInf (fcFloat4 a);
FANCIER_API fcInt4 fcFloat4_isNaN (fcFloat4 a);
FANCIER_API fcInt4 fcFloat4_isNormal (fcFloat4 a);
FANCIER_API fcInt4 fcFloat4_isOrdered (fcFloat4 a, fcFloat4 b);
FANCIER_API fcInt4 fcFloat4_isUnordered (fcFloat4 a, fcFloat4 b);

FANCIER_API cl_int fcFloat4_any (fcFloat4 a);
FANCIER_API cl_int fcFloat4_all (fcFloat4 a);

FANCIER_API fcFloat4 fcFloat4_add (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_sub (fcFloat4 a, fcFloat4 b);
FANCIER_API fcDouble4 fcFloat4_muld (fcFloat4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcFloat4_mulf (fcFloat4 a, fcFloat4 b);
FANCIER_API fcDouble4 fcFloat4_mulkd (fcFloat4 a, cl_double k);
FANCIER_API fcFloat4 fcFloat4_mulkf (fcFloat4 a, cl_float k);
FANCIER_API fcDouble4 fcFloat4_divd (fcFloat4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcFloat4_divf (fcFloat4 a, fcFloat4 b);
FANCIER_API fcDouble4 fcFloat4_divkd (fcFloat4 a, cl_double k);
FANCIER_API fcFloat4 fcFloat4_divkf (fcFloat4 a, cl_float k);
FANCIER_API fcFloat4 fcFloat4_cross (fcFloat4 a, fcFloat4 b);
FANCIER_API cl_float fcFloat4_dot (fcFloat4 a, fcFloat4 b);
FANCIER_API cl_double fcFloat4_distance (fcFloat4 a, fcFloat4 b);
FANCIER_API cl_double fcFloat4_length (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_normalize (fcFloat4 a);

FANCIER_API fcFloat4 fcFloat4_abs (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_clamp (fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_API fcFloat4 fcFloat4_max (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_maxMag (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_min (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_minMag (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_mix (fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_API fcFloat4 fcFloat4_clampk (fcFloat4 v, cl_float min, cl_float max);
FANCIER_API fcFloat4 fcFloat4_maxk (fcFloat4 x, cl_float y);
FANCIER_API fcFloat4 fcFloat4_mink (fcFloat4 x, cl_float y);
FANCIER_API fcFloat4 fcFloat4_mixk (fcFloat4 x, fcFloat4 y, cl_float a);
FANCIER_API fcFloat4 fcFloat4_acos (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_acosh (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_asin (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_asinh (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_atan (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_atan2 (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_atanh (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_cbrt (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_ceil (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_copySign (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_cos (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_cosh (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_erf (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_erfc (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_exp (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_exp10 (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_exp2 (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_expm1 (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_fdim (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_floor (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_fma (fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_API fcFloat4 fcFloat4_fmod (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_fract (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_frexp (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_getExponent (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_hypot (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_lgamma (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_log (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_log10 (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_log1p (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_log2 (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_logb (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_mad (fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_API fcFloat4 fcFloat4_nextAfter (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_pow (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_powr (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_remainder (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_rint (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_round (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_rsqrt (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_signum (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_sin (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_sinh (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_smoothStep (fcFloat4 a, fcFloat4 b, fcFloat4 c);
FANCIER_API fcFloat4 fcFloat4_sqrt (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_step (fcFloat4 a, fcFloat4 b);
FANCIER_API fcFloat4 fcFloat4_tan (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_tanh (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_tgamma (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_toDegrees (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_toRadians (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_trunc (fcFloat4 a);
FANCIER_API fcFloat4 fcFloat4_scalb (fcFloat4 a, fcInt4 n);
FANCIER_API fcFloat4 fcFloat4_ldexp (fcFloat4 a, fcInt4 n);
FANCIER_API fcFloat4 fcFloat4_pown (fcFloat4 a, fcInt4 b);
FANCIER_API fcFloat4 fcFloat4_rootn (fcFloat4 a, fcInt4 b);
FANCIER_API fcFloat4 fcFloat4_smoothStepk (fcFloat4 a, fcFloat4 b, cl_float c);

FANCIER_API fcFloat8 fcFloat8_create (cl_float a, cl_float b, cl_float c, cl_float d, cl_float e, cl_float f, cl_float g, cl_float h);

FANCIER_API fcFloat4 fcFloat8_odd (fcFloat8 a);
FANCIER_API fcFloat4 fcFloat8_even (fcFloat8 a);

FANCIER_API fcByte8 fcFloat8_convertByte8 (fcFloat8 a);
FANCIER_API fcShort8 fcFloat8_convertShort8 (fcFloat8 a);
FANCIER_API fcInt8 fcFloat8_convertInt8 (fcFloat8 a);
FANCIER_API fcLong8 fcFloat8_convertLong8 (fcFloat8 a);
FANCIER_API fcDouble8 fcFloat8_convertDouble8 (fcFloat8 a);
FANCIER_API fcFloat2 fcFloat8_asFloat2 (fcFloat8 a);
FANCIER_API fcFloat3 fcFloat8_asFloat3 (fcFloat8 a);
FANCIER_API fcFloat4 fcFloat8_asFloat4 (fcFloat8 a);

FANCIER_API fcInt8 fcFloat8_isEqual (fcFloat8 a, fcFloat8 b);
FANCIER_API fcInt8 fcFloat8_isNotEqual (fcFloat8 a, fcFloat8 b);
FANCIER_API fcInt8 fcFloat8_isGreater (fcFloat8 a, fcFloat8 b);
FANCIER_API fcInt8 fcFloat8_isGreaterEqual (fcFloat8 a, fcFloat8 b);
FANCIER_API fcInt8 fcFloat8_isLess (fcFloat8 a, fcFloat8 b);
FANCIER_API fcInt8 fcFloat8_isLessEqual (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_select (fcFloat8 a, fcFloat8 b, fcInt8 c);
FANCIER_API fcInt8 fcFloat8_isFinite (fcFloat8 a);
FANCIER_API fcInt8 fcFloat8_isInf (fcFloat8 a);
FANCIER_API fcInt8 fcFloat8_isNaN (fcFloat8 a);
FANCIER_API fcInt8 fcFloat8_isNormal (fcFloat8 a);
FANCIER_API fcInt8 fcFloat8_isOrdered (fcFloat8 a, fcFloat8 b);
FANCIER_API fcInt8 fcFloat8_isUnordered (fcFloat8 a, fcFloat8 b);

FANCIER_API cl_int fcFloat8_any (fcFloat8 a);
FANCIER_API cl_int fcFloat8_all (fcFloat8 a);

FANCIER_API fcFloat8 fcFloat8_add (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_sub (fcFloat8 a, fcFloat8 b);
FANCIER_API fcDouble8 fcFloat8_muld (fcFloat8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcFloat8_mulf (fcFloat8 a, fcFloat8 b);
FANCIER_API fcDouble8 fcFloat8_mulkd (fcFloat8 a, cl_double k);
FANCIER_API fcFloat8 fcFloat8_mulkf (fcFloat8 a, cl_float k);
FANCIER_API fcDouble8 fcFloat8_divd (fcFloat8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcFloat8_divf (fcFloat8 a, fcFloat8 b);
FANCIER_API fcDouble8 fcFloat8_divkd (fcFloat8 a, cl_double k);
FANCIER_API fcFloat8 fcFloat8_divkf (fcFloat8 a, cl_float k);
FANCIER_API cl_float fcFloat8_dot (fcFloat8 a, fcFloat8 b);
FANCIER_API cl_double fcFloat8_distance (fcFloat8 a, fcFloat8 b);
FANCIER_API cl_double fcFloat8_length (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_normalize (fcFloat8 a);

FANCIER_API fcFloat8 fcFloat8_abs (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_clamp (fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_API fcFloat8 fcFloat8_max (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_maxMag (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_min (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_minMag (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_mix (fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_API fcFloat8 fcFloat8_clampk (fcFloat8 v, cl_float min, cl_float max);
FANCIER_API fcFloat8 fcFloat8_maxk (fcFloat8 x, cl_float y);
FANCIER_API fcFloat8 fcFloat8_mink (fcFloat8 x, cl_float y);
FANCIER_API fcFloat8 fcFloat8_mixk (fcFloat8 x, fcFloat8 y, cl_float a);
FANCIER_API fcFloat8 fcFloat8_acos (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_acosh (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_asin (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_asinh (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_atan (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_atan2 (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_atanh (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_cbrt (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_ceil (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_copySign (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_cos (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_cosh (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_erf (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_erfc (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_exp (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_exp10 (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_exp2 (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_expm1 (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_fdim (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_floor (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_fma (fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_API fcFloat8 fcFloat8_fmod (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_fract (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_frexp (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_getExponent (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_hypot (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_lgamma (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_log (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_log10 (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_log1p (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_log2 (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_logb (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_mad (fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_API fcFloat8 fcFloat8_nextAfter (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_pow (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_powr (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_remainder (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_rint (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_round (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_rsqrt (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_signum (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_sin (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_sinh (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_smoothStep (fcFloat8 a, fcFloat8 b, fcFloat8 c);
FANCIER_API fcFloat8 fcFloat8_sqrt (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_step (fcFloat8 a, fcFloat8 b);
FANCIER_API fcFloat8 fcFloat8_tan (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_tanh (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_tgamma (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_toDegrees (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_toRadians (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_trunc (fcFloat8 a);
FANCIER_API fcFloat8 fcFloat8_scalb (fcFloat8 a, fcInt8 n);
FANCIER_API fcFloat8 fcFloat8_ldexp (fcFloat8 a, fcInt8 n);
FANCIER_API fcFloat8 fcFloat8_pown (fcFloat8 a, fcInt8 b);
FANCIER_API fcFloat8 fcFloat8_rootn (fcFloat8 a, fcInt8 b);
FANCIER_API fcFloat8 fcFloat8_smoothStepk (fcFloat8 a, fcFloat8 b, cl_float c);

FANCIER_API fcDouble2 fcDouble2_create (cl_double a, cl_double b);

FANCIER_API fcByte2 fcDouble2_convertByte2 (fcDouble2 a);
FANCIER_API fcShort2 fcDouble2_convertShort2 (fcDouble2 a);
FANCIER_API fcInt2 fcDouble2_convertInt2 (fcDouble2 a);
FANCIER_API fcLong2 fcDouble2_convertLong2 (fcDouble2 a);
FANCIER_API fcFloat2 fcDouble2_convertFloat2 (fcDouble2 a);

FANCIER_API fcInt2 fcDouble2_isEqual (fcDouble2 a, fcDouble2 b);
FANCIER_API fcInt2 fcDouble2_isNotEqual (fcDouble2 a, fcDouble2 b);
FANCIER_API fcInt2 fcDouble2_isGreater (fcDouble2 a, fcDouble2 b);
FANCIER_API fcInt2 fcDouble2_isGreaterEqual (fcDouble2 a, fcDouble2 b);
FANCIER_API fcInt2 fcDouble2_isLess (fcDouble2 a, fcDouble2 b);
FANCIER_API fcInt2 fcDouble2_isLessEqual (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_select (fcDouble2 a, fcDouble2 b, fcInt2 c);
FANCIER_API fcInt2 fcDouble2_isFinite (fcDouble2 a);
FANCIER_API fcInt2 fcDouble2_isInf (fcDouble2 a);
FANCIER_API fcInt2 fcDouble2_isNaN (fcDouble2 a);
FANCIER_API fcInt2 fcDouble2_isNormal (fcDouble2 a);
FANCIER_API fcInt2 fcDouble2_isOrdered (fcDouble2 a, fcDouble2 b);
FANCIER_API fcInt2 fcDouble2_isUnordered (fcDouble2 a, fcDouble2 b);

FANCIER_API cl_int fcDouble2_any (fcDouble2 a);
FANCIER_API cl_int fcDouble2_all (fcDouble2 a);

FANCIER_API fcDouble2 fcDouble2_add (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_sub (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_muld (fcDouble2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcDouble2_mulf (fcDouble2 a, fcFloat2 b);
FANCIER_API fcDouble2 fcDouble2_mulkd (fcDouble2 a, cl_double k);
FANCIER_API fcFloat2 fcDouble2_mulkf (fcDouble2 a, cl_float k);
FANCIER_API fcDouble2 fcDouble2_divd (fcDouble2 a, fcDouble2 b);
FANCIER_API fcFloat2 fcDouble2_divf (fcDouble2 a, fcFloat2 b);
FANCIER_API fcDouble2 fcDouble2_divkd (fcDouble2 a, cl_double k);
FANCIER_API fcFloat2 fcDouble2_divkf (fcDouble2 a, cl_float k);
FANCIER_API cl_double fcDouble2_dot (fcDouble2 a, fcDouble2 b);
FANCIER_API cl_double fcDouble2_distance (fcDouble2 a, fcDouble2 b);
FANCIER_API cl_double fcDouble2_length (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_normalize (fcDouble2 a);

FANCIER_API fcDouble2 fcDouble2_abs (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_clamp (fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_API fcDouble2 fcDouble2_max (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_maxMag (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_min (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_minMag (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_mix (fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_API fcDouble2 fcDouble2_clampk (fcDouble2 v, cl_double min, cl_double max);
FANCIER_API fcDouble2 fcDouble2_maxk (fcDouble2 x, cl_double y);
FANCIER_API fcDouble2 fcDouble2_mink (fcDouble2 x, cl_double y);
FANCIER_API fcDouble2 fcDouble2_mixk (fcDouble2 x, fcDouble2 y, cl_double a);
FANCIER_API fcDouble2 fcDouble2_acos (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_acosh (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_asin (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_asinh (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_atan (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_atan2 (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_atanh (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_cbrt (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_ceil (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_copySign (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_cos (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_cosh (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_erf (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_erfc (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_exp (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_exp10 (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_exp2 (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_expm1 (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_fdim (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_floor (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_fma (fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_API fcDouble2 fcDouble2_fmod (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_fract (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_frexp (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_getExponent (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_hypot (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_lgamma (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_log (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_log10 (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_log1p (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_log2 (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_logb (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_mad (fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_API fcDouble2 fcDouble2_nextAfter (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_pow (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_powr (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_remainder (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_rint (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_round (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_rsqrt (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_signum (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_sin (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_sinh (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_smoothStep (fcDouble2 a, fcDouble2 b, fcDouble2 c);
FANCIER_API fcDouble2 fcDouble2_sqrt (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_step (fcDouble2 a, fcDouble2 b);
FANCIER_API fcDouble2 fcDouble2_tan (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_tanh (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_tgamma (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_toDegrees (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_toRadians (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_trunc (fcDouble2 a);
FANCIER_API fcDouble2 fcDouble2_scalb (fcDouble2 a, fcInt2 n);
FANCIER_API fcDouble2 fcDouble2_ldexp (fcDouble2 a, fcInt2 n);
FANCIER_API fcDouble2 fcDouble2_pown (fcDouble2 a, fcInt2 b);
FANCIER_API fcDouble2 fcDouble2_rootn (fcDouble2 a, fcInt2 b);
FANCIER_API fcDouble2 fcDouble2_smoothStepk (fcDouble2 a, fcDouble2 b, cl_double c);

FANCIER_API fcDouble3 fcDouble3_create (cl_double a, cl_double b, cl_double c);

FANCIER_API fcByte3 fcDouble3_convertByte3 (fcDouble3 a);
FANCIER_API fcShort3 fcDouble3_convertShort3 (fcDouble3 a);
FANCIER_API fcInt3 fcDouble3_convertInt3 (fcDouble3 a);
FANCIER_API fcLong3 fcDouble3_convertLong3 (fcDouble3 a);
FANCIER_API fcFloat3 fcDouble3_convertFloat3 (fcDouble3 a);
FANCIER_API fcDouble2 fcDouble3_asDouble2 (fcDouble3 a);

FANCIER_API fcInt3 fcDouble3_isEqual (fcDouble3 a, fcDouble3 b);
FANCIER_API fcInt3 fcDouble3_isNotEqual (fcDouble3 a, fcDouble3 b);
FANCIER_API fcInt3 fcDouble3_isGreater (fcDouble3 a, fcDouble3 b);
FANCIER_API fcInt3 fcDouble3_isGreaterEqual (fcDouble3 a, fcDouble3 b);
FANCIER_API fcInt3 fcDouble3_isLess (fcDouble3 a, fcDouble3 b);
FANCIER_API fcInt3 fcDouble3_isLessEqual (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_select (fcDouble3 a, fcDouble3 b, fcInt3 c);
FANCIER_API fcInt3 fcDouble3_isFinite (fcDouble3 a);
FANCIER_API fcInt3 fcDouble3_isInf (fcDouble3 a);
FANCIER_API fcInt3 fcDouble3_isNaN (fcDouble3 a);
FANCIER_API fcInt3 fcDouble3_isNormal (fcDouble3 a);
FANCIER_API fcInt3 fcDouble3_isOrdered (fcDouble3 a, fcDouble3 b);
FANCIER_API fcInt3 fcDouble3_isUnordered (fcDouble3 a, fcDouble3 b);

FANCIER_API cl_int fcDouble3_any (fcDouble3 a);
FANCIER_API cl_int fcDouble3_all (fcDouble3 a);

FANCIER_API fcDouble3 fcDouble3_add (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_sub (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_muld (fcDouble3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcDouble3_mulf (fcDouble3 a, fcFloat3 b);
FANCIER_API fcDouble3 fcDouble3_mulkd (fcDouble3 a, cl_double k);
FANCIER_API fcFloat3 fcDouble3_mulkf (fcDouble3 a, cl_float k);
FANCIER_API fcDouble3 fcDouble3_divd (fcDouble3 a, fcDouble3 b);
FANCIER_API fcFloat3 fcDouble3_divf (fcDouble3 a, fcFloat3 b);
FANCIER_API fcDouble3 fcDouble3_divkd (fcDouble3 a, cl_double k);
FANCIER_API fcFloat3 fcDouble3_divkf (fcDouble3 a, cl_float k);
FANCIER_API fcDouble3 fcDouble3_cross (fcDouble3 a, fcDouble3 b);
FANCIER_API cl_double fcDouble3_dot (fcDouble3 a, fcDouble3 b);
FANCIER_API cl_double fcDouble3_distance (fcDouble3 a, fcDouble3 b);
FANCIER_API cl_double fcDouble3_length (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_normalize (fcDouble3 a);

FANCIER_API fcDouble3 fcDouble3_abs (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_clamp (fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_API fcDouble3 fcDouble3_max (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_maxMag (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_min (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_minMag (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_mix (fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_API fcDouble3 fcDouble3_clampk (fcDouble3 v, cl_double min, cl_double max);
FANCIER_API fcDouble3 fcDouble3_maxk (fcDouble3 x, cl_double y);
FANCIER_API fcDouble3 fcDouble3_mink (fcDouble3 x, cl_double y);
FANCIER_API fcDouble3 fcDouble3_mixk (fcDouble3 x, fcDouble3 y, cl_double a);
FANCIER_API fcDouble3 fcDouble3_acos (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_acosh (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_asin (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_asinh (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_atan (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_atan2 (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_atanh (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_cbrt (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_ceil (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_copySign (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_cos (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_cosh (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_erf (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_erfc (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_exp (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_exp10 (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_exp2 (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_expm1 (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_fdim (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_floor (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_fma (fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_API fcDouble3 fcDouble3_fmod (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_fract (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_frexp (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_getExponent (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_hypot (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_lgamma (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_log (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_log10 (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_log1p (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_log2 (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_logb (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_mad (fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_API fcDouble3 fcDouble3_nextAfter (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_pow (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_powr (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_remainder (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_rint (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_round (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_rsqrt (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_signum (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_sin (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_sinh (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_smoothStep (fcDouble3 a, fcDouble3 b, fcDouble3 c);
FANCIER_API fcDouble3 fcDouble3_sqrt (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_step (fcDouble3 a, fcDouble3 b);
FANCIER_API fcDouble3 fcDouble3_tan (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_tanh (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_tgamma (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_toDegrees (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_toRadians (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_trunc (fcDouble3 a);
FANCIER_API fcDouble3 fcDouble3_scalb (fcDouble3 a, fcInt3 n);
FANCIER_API fcDouble3 fcDouble3_ldexp (fcDouble3 a, fcInt3 n);
FANCIER_API fcDouble3 fcDouble3_pown (fcDouble3 a, fcInt3 b);
FANCIER_API fcDouble3 fcDouble3_rootn (fcDouble3 a, fcInt3 b);
FANCIER_API fcDouble3 fcDouble3_smoothStepk (fcDouble3 a, fcDouble3 b, cl_double c);

FANCIER_API fcDouble4 fcDouble4_create (cl_double a, cl_double b, cl_double c, cl_double d);

FANCIER_API fcDouble2 fcDouble4_odd (fcDouble4 a);
FANCIER_API fcDouble2 fcDouble4_even (fcDouble4 a);

FANCIER_API fcByte4 fcDouble4_convertByte4 (fcDouble4 a);
FANCIER_API fcShort4 fcDouble4_convertShort4 (fcDouble4 a);
FANCIER_API fcInt4 fcDouble4_convertInt4 (fcDouble4 a);
FANCIER_API fcLong4 fcDouble4_convertLong4 (fcDouble4 a);
FANCIER_API fcFloat4 fcDouble4_convertFloat4 (fcDouble4 a);
FANCIER_API fcDouble2 fcDouble4_asDouble2 (fcDouble4 a);
FANCIER_API fcDouble3 fcDouble4_asDouble3 (fcDouble4 a);

FANCIER_API fcInt4 fcDouble4_isEqual (fcDouble4 a, fcDouble4 b);
FANCIER_API fcInt4 fcDouble4_isNotEqual (fcDouble4 a, fcDouble4 b);
FANCIER_API fcInt4 fcDouble4_isGreater (fcDouble4 a, fcDouble4 b);
FANCIER_API fcInt4 fcDouble4_isGreaterEqual (fcDouble4 a, fcDouble4 b);
FANCIER_API fcInt4 fcDouble4_isLess (fcDouble4 a, fcDouble4 b);
FANCIER_API fcInt4 fcDouble4_isLessEqual (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_select (fcDouble4 a, fcDouble4 b, fcInt4 c);
FANCIER_API fcInt4 fcDouble4_isFinite (fcDouble4 a);
FANCIER_API fcInt4 fcDouble4_isInf (fcDouble4 a);
FANCIER_API fcInt4 fcDouble4_isNaN (fcDouble4 a);
FANCIER_API fcInt4 fcDouble4_isNormal (fcDouble4 a);
FANCIER_API fcInt4 fcDouble4_isOrdered (fcDouble4 a, fcDouble4 b);
FANCIER_API fcInt4 fcDouble4_isUnordered (fcDouble4 a, fcDouble4 b);

FANCIER_API cl_int fcDouble4_any (fcDouble4 a);
FANCIER_API cl_int fcDouble4_all (fcDouble4 a);

FANCIER_API fcDouble4 fcDouble4_add (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_sub (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_muld (fcDouble4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcDouble4_mulf (fcDouble4 a, fcFloat4 b);
FANCIER_API fcDouble4 fcDouble4_mulkd (fcDouble4 a, cl_double k);
FANCIER_API fcFloat4 fcDouble4_mulkf (fcDouble4 a, cl_float k);
FANCIER_API fcDouble4 fcDouble4_divd (fcDouble4 a, fcDouble4 b);
FANCIER_API fcFloat4 fcDouble4_divf (fcDouble4 a, fcFloat4 b);
FANCIER_API fcDouble4 fcDouble4_divkd (fcDouble4 a, cl_double k);
FANCIER_API fcFloat4 fcDouble4_divkf (fcDouble4 a, cl_float k);
FANCIER_API fcDouble4 fcDouble4_cross (fcDouble4 a, fcDouble4 b);
FANCIER_API cl_double fcDouble4_dot (fcDouble4 a, fcDouble4 b);
FANCIER_API cl_double fcDouble4_distance (fcDouble4 a, fcDouble4 b);
FANCIER_API cl_double fcDouble4_length (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_normalize (fcDouble4 a);

FANCIER_API fcDouble4 fcDouble4_abs (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_clamp (fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_API fcDouble4 fcDouble4_max (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_maxMag (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_min (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_minMag (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_mix (fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_API fcDouble4 fcDouble4_clampk (fcDouble4 v, cl_double min, cl_double max);
FANCIER_API fcDouble4 fcDouble4_maxk (fcDouble4 x, cl_double y);
FANCIER_API fcDouble4 fcDouble4_mink (fcDouble4 x, cl_double y);
FANCIER_API fcDouble4 fcDouble4_mixk (fcDouble4 x, fcDouble4 y, cl_double a);
FANCIER_API fcDouble4 fcDouble4_acos (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_acosh (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_asin (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_asinh (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_atan (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_atan2 (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_atanh (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_cbrt (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_ceil (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_copySign (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_cos (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_cosh (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_erf (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_erfc (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_exp (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_exp10 (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_exp2 (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_expm1 (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_fdim (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_floor (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_fma (fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_API fcDouble4 fcDouble4_fmod (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_fract (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_frexp (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_getExponent (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_hypot (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_lgamma (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_log (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_log10 (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_log1p (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_log2 (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_logb (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_mad (fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_API fcDouble4 fcDouble4_nextAfter (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_pow (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_powr (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_remainder (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_rint (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_round (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_rsqrt (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_signum (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_sin (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_sinh (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_smoothStep (fcDouble4 a, fcDouble4 b, fcDouble4 c);
FANCIER_API fcDouble4 fcDouble4_sqrt (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_step (fcDouble4 a, fcDouble4 b);
FANCIER_API fcDouble4 fcDouble4_tan (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_tanh (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_tgamma (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_toDegrees (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_toRadians (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_trunc (fcDouble4 a);
FANCIER_API fcDouble4 fcDouble4_scalb (fcDouble4 a, fcInt4 n);
FANCIER_API fcDouble4 fcDouble4_ldexp (fcDouble4 a, fcInt4 n);
FANCIER_API fcDouble4 fcDouble4_pown (fcDouble4 a, fcInt4 b);
FANCIER_API fcDouble4 fcDouble4_rootn (fcDouble4 a, fcInt4 b);
FANCIER_API fcDouble4 fcDouble4_smoothStepk (fcDouble4 a, fcDouble4 b, cl_double c);

FANCIER_API fcDouble8 fcDouble8_create (cl_double a, cl_double b, cl_double c, cl_double d, cl_double e, cl_double f, cl_double g, cl_double h);

FANCIER_API fcDouble4 fcDouble8_odd (fcDouble8 a);
FANCIER_API fcDouble4 fcDouble8_even (fcDouble8 a);

FANCIER_API fcByte8 fcDouble8_convertByte8 (fcDouble8 a);
FANCIER_API fcShort8 fcDouble8_convertShort8 (fcDouble8 a);
FANCIER_API fcInt8 fcDouble8_convertInt8 (fcDouble8 a);
FANCIER_API fcLong8 fcDouble8_convertLong8 (fcDouble8 a);
FANCIER_API fcFloat8 fcDouble8_convertFloat8 (fcDouble8 a);
FANCIER_API fcDouble2 fcDouble8_asDouble2 (fcDouble8 a);
FANCIER_API fcDouble3 fcDouble8_asDouble3 (fcDouble8 a);
FANCIER_API fcDouble4 fcDouble8_asDouble4 (fcDouble8 a);

FANCIER_API fcInt8 fcDouble8_isEqual (fcDouble8 a, fcDouble8 b);
FANCIER_API fcInt8 fcDouble8_isNotEqual (fcDouble8 a, fcDouble8 b);
FANCIER_API fcInt8 fcDouble8_isGreater (fcDouble8 a, fcDouble8 b);
FANCIER_API fcInt8 fcDouble8_isGreaterEqual (fcDouble8 a, fcDouble8 b);
FANCIER_API fcInt8 fcDouble8_isLess (fcDouble8 a, fcDouble8 b);
FANCIER_API fcInt8 fcDouble8_isLessEqual (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_select (fcDouble8 a, fcDouble8 b, fcInt8 c);
FANCIER_API fcInt8 fcDouble8_isFinite (fcDouble8 a);
FANCIER_API fcInt8 fcDouble8_isInf (fcDouble8 a);
FANCIER_API fcInt8 fcDouble8_isNaN (fcDouble8 a);
FANCIER_API fcInt8 fcDouble8_isNormal (fcDouble8 a);
FANCIER_API fcInt8 fcDouble8_isOrdered (fcDouble8 a, fcDouble8 b);
FANCIER_API fcInt8 fcDouble8_isUnordered (fcDouble8 a, fcDouble8 b);

FANCIER_API cl_int fcDouble8_any (fcDouble8 a);
FANCIER_API cl_int fcDouble8_all (fcDouble8 a);

FANCIER_API fcDouble8 fcDouble8_add (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_sub (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_muld (fcDouble8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcDouble8_mulf (fcDouble8 a, fcFloat8 b);
FANCIER_API fcDouble8 fcDouble8_mulkd (fcDouble8 a, cl_double k);
FANCIER_API fcFloat8 fcDouble8_mulkf (fcDouble8 a, cl_float k);
FANCIER_API fcDouble8 fcDouble8_divd (fcDouble8 a, fcDouble8 b);
FANCIER_API fcFloat8 fcDouble8_divf (fcDouble8 a, fcFloat8 b);
FANCIER_API fcDouble8 fcDouble8_divkd (fcDouble8 a, cl_double k);
FANCIER_API fcFloat8 fcDouble8_divkf (fcDouble8 a, cl_float k);
FANCIER_API cl_double fcDouble8_dot (fcDouble8 a, fcDouble8 b);
FANCIER_API cl_double fcDouble8_distance (fcDouble8 a, fcDouble8 b);
FANCIER_API cl_double fcDouble8_length (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_normalize (fcDouble8 a);

FANCIER_API fcDouble8 fcDouble8_abs (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_clamp (fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_API fcDouble8 fcDouble8_max (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_maxMag (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_min (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_minMag (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_mix (fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_API fcDouble8 fcDouble8_clampk (fcDouble8 v, cl_double min, cl_double max);
FANCIER_API fcDouble8 fcDouble8_maxk (fcDouble8 x, cl_double y);
FANCIER_API fcDouble8 fcDouble8_mink (fcDouble8 x, cl_double y);
FANCIER_API fcDouble8 fcDouble8_mixk (fcDouble8 x, fcDouble8 y, cl_double a);
FANCIER_API fcDouble8 fcDouble8_acos (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_acosh (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_asin (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_asinh (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_atan (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_atan2 (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_atanh (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_cbrt (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_ceil (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_copySign (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_cos (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_cosh (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_erf (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_erfc (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_exp (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_exp10 (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_exp2 (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_expm1 (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_fdim (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_floor (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_fma (fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_API fcDouble8 fcDouble8_fmod (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_fract (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_frexp (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_getExponent (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_hypot (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_lgamma (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_log (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_log10 (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_log1p (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_log2 (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_logb (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_mad (fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_API fcDouble8 fcDouble8_nextAfter (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_pow (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_powr (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_remainder (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_rint (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_round (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_rsqrt (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_signum (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_sin (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_sinh (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_smoothStep (fcDouble8 a, fcDouble8 b, fcDouble8 c);
FANCIER_API fcDouble8 fcDouble8_sqrt (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_step (fcDouble8 a, fcDouble8 b);
FANCIER_API fcDouble8 fcDouble8_tan (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_tanh (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_tgamma (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_toDegrees (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_toRadians (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_trunc (fcDouble8 a);
FANCIER_API fcDouble8 fcDouble8_scalb (fcDouble8 a, fcInt8 n);
FANCIER_API fcDouble8 fcDouble8_ldexp (fcDouble8 a, fcInt8 n);
FANCIER_API fcDouble8 fcDouble8_pown (fcDouble8 a, fcInt8 b);
FANCIER_API fcDouble8 fcDouble8_rootn (fcDouble8 a, fcInt8 b);
FANCIER_API fcDouble8 fcDouble8_smoothStepk (fcDouble8 a, fcDouble8 b, cl_double c);


#endif // _FANCIER_VECTOR_H_
