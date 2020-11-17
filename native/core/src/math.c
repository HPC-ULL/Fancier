#include <fancier/math.h>

#include <assert.h>
#include <math.h>
#include <stdlib.h>


//
// Java interface
//


JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_abs__B (JNIEnv* env, jclass cls, jbyte a) {
  return fcMath_abs(a);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_abs__S (JNIEnv* env, jclass cls, jshort a) {
  return fcMath_abs(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_abs__I (JNIEnv* env, jclass cls, jint a) {
  return fcMath_abs(a);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_abs__J (JNIEnv* env, jclass cls, jlong a) {
  return fcMath_abs(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_abs__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_abs(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_abs__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_abs(a);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_max__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_max(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_max__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_max(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_max__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_max(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_max__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_max(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_max__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_max(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_max__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_max(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_min__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_min(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_min__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_min(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_min__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_min(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_min__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_min(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_min__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_min(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_min__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_min(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clamp__BBB (JNIEnv* env, jclass cls, jbyte a, jbyte b, jbyte c) {
  return fcMath_clamp(a, b, c);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clamp__SSS (JNIEnv* env, jclass cls, jshort a, jshort b, jshort c) {
  return fcMath_clamp(a, b, c);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clamp__III (JNIEnv* env, jclass cls, jint a, jint b, jint c) {
  return fcMath_clamp(a, b, c);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clamp__JJJ (JNIEnv* env, jclass cls, jlong a, jlong b, jlong c) {
  return fcMath_clamp(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clamp__FFF (JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_clamp(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clamp__DDD (JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_clamp(a, b, c);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mix__BBB (JNIEnv* env, jclass cls, jbyte a, jbyte b, jbyte c) {
  return fcMath_mix(a, b, c);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mix__SSS (JNIEnv* env, jclass cls, jshort a, jshort b, jshort c) {
  return fcMath_mix(a, b, c);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mix__III (JNIEnv* env, jclass cls, jint a, jint b, jint c) {
  return fcMath_mix(a, b, c);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mix__JJJ (JNIEnv* env, jclass cls, jlong a, jlong b, jlong c) {
  return fcMath_mix(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mix__FFF (JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_mix(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mix__DDD (JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_mix(a, b, c);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_absDiff__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_absDiff(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_absDiff__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_absDiff(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_absDiff__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_absDiff(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_absDiff__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_absDiff(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_maxMag__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_maxMag(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_maxMag__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_maxMag(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_maxMag__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_maxMag(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_maxMag__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_maxMag(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_maxMag__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_maxMag(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_maxMag__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_maxMag(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_minMag__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_minMag(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_minMag__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_minMag(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_minMag__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_minMag(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_minMag__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_minMag(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_minMag__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_minMag(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_minMag__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_minMag(a, b);
}


JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acos__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_acosf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acos__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_acos(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asin__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_asinf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asin__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_asin(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_atanf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_atan(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan2__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_atan2f(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan2__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_atan2(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cbrt__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_cbrtf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cbrt__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_cbrt(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ceil__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_ceilf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ceil__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_ceil(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_copySign__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_copySignf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_copySign__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_copySign(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cos__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_cosf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cos__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_cos(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cosh__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_coshf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cosh__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_cosh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_expf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_exp(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_expm1__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_expm1f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_expm1__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_expm1(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_floor__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_floorf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_floor__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_floor(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_getExponent__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_getExponentf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_getExponent__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_getExponent(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hypot__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_hypotf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hypot__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_hypot(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_remainder__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_remainderf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_remainder__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_remainder(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_logf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log10__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_log10f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log10__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log10(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log1p__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_log1pf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log1p__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log1p(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_nextAfter__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_nextAfterf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_nextAfter__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_nextAfter(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pow__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_powf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pow__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_pow(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rint__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_rintf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rint__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_rint(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_round__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_roundf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_round__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_round(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_signum__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_signumf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_signum__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_signum(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sin__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_sinf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sin__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_sin(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sinh__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_sinhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sinh__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_sinh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sqrt__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_sqrtf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sqrt__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_sqrt(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tan__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_tanf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tan__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_tan(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tanh__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_tanhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tanh__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_tanh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toDegrees__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_toDegreesf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toDegrees__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_toDegrees(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toRadians__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_toRadiansf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toRadians__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_toRadians(a);
}


JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_smoothStep__FFF (JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_smoothStepf(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_smoothStep__DDD (JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_smoothStep(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_step__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_stepf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_step__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_step(a, b);
}


JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_addSatc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_addSats(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_addSat(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_addSatl(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__B (JNIEnv* env, jclass cls, jbyte a) {
  return fcMath_clzc(a);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__S (JNIEnv* env, jclass cls, jshort a) {
  return fcMath_clzs(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__I (JNIEnv* env, jclass cls, jint a) {
  return fcMath_clz(a);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__J (JNIEnv* env, jclass cls, jlong a) {
  return fcMath_clzl(a);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_haddc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_hadds(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_hadd(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_haddl(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__BBB (JNIEnv* env, jclass cls, jbyte a, jbyte b, jbyte c) {
  return fcMath_madHic(a, b, c);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__SSS (JNIEnv* env, jclass cls, jshort a, jshort b, jshort c) {
  return fcMath_madHis(a, b, c);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__III (JNIEnv* env, jclass cls, jint a, jint b, jint c) {
  return fcMath_madHi(a, b, c);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__JJJ (JNIEnv* env, jclass cls, jlong a, jlong b, jlong c) {
  return fcMath_madHil(a, b, c);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__BBB (JNIEnv* env, jclass cls, jbyte a, jbyte b, jbyte c) {
  return fcMath_madSatc(a, b, c);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__SSS (JNIEnv* env, jclass cls, jshort a, jshort b, jshort c) {
  return fcMath_madSats(a, b, c);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__III (JNIEnv* env, jclass cls, jint a, jint b, jint c) {
  return fcMath_madSat(a, b, c);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__JJJ (JNIEnv* env, jclass cls, jlong a, jlong b, jlong c) {
  return fcMath_madSatl(a, b, c);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_mulHic(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_mulHis(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_mulHi(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_mulHil(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_rhaddc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_rhadds(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_rhadd(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_rhaddl(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_rotatec(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_rotates(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_rotate(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_rotatel(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__BB (JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_subSatc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__SS (JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_subSats(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__II (JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_subSat(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__JJ (JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_subSatl(a, b);
}


JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acosh__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_acoshf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acosh__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_acosh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asinh__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_asinhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asinh__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_asinh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atanh__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_atanhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atanh__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_atanh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erf__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_erff(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erf__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_erf(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erfc__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_erfcf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erfc__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_erfc(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp2__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_exp2f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp2__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_exp2(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp10__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_exp10f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp10__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_exp10(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fdim__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_fdimf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fdim__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_fdim(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fma__FFF (JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_fmaf(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fma__DDD (JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_fma(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fmod__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_fmodf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fmod__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_fmod(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fract__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_fractf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fract__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_fract(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_frexp__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_frexpf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_frexp__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_frexp(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_lgamma__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_lgammaf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_lgamma__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_lgamma(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log2__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_log2f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log2__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log2(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_logb__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_logbf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_logb__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_logb(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad__FFF (JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_madf(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad__DDD (JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_mad(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_powr__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_powrf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_powr__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_powr(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rsqrt__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_rsqrtf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rsqrt__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_rsqrt(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tgamma__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_tgammaf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tgamma__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_tgamma(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_trunc__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_truncf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_trunc__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_trunc(a);
}


JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isFinite__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isFinitef(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isFinite__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isFinite(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isInf__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isInff(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isInf__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isInf(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNaN__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isNaNf(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNaN__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isNaN(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNormal__F (JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isNormalf(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNormal__D (JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isNormal(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isOrdered__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_isOrderedf(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isOrdered__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_isOrdered(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isUnordered__FF (JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_isUnorderedf(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isUnordered__DD (JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_isUnordered(a, b);
}


JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad24 (JNIEnv* env, jclass cls, jint x, jint y, jint z) {
  return fcMath_mad24(x, y, z);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mul24 (JNIEnv* env, jclass cls, jint x, jint y) {
  return fcMath_mul24(x, y);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_scalb__FI (JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_scalbf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_scalb__DI (JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_scalb(x, n);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ldexp__FI (JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_ldexpf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ldexp__DI (JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_ldexp(x, n);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pown__FI (JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_pownf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pown__DI (JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_pown(x, n);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rootn__FI (JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_rootnf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rootn__DI (JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_rootn(x, n);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__BBI (JNIEnv* env, jclass cls, jbyte x, jbyte y, jint z) {
  return fcMath_select(x, y, z);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__SSI (JNIEnv* env, jclass cls, jshort x, jshort y, jint z) {
  return fcMath_select(x, y, z);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__III (JNIEnv* env, jclass cls, jint x, jint y, jint z) {
  return fcMath_select(x, y, z);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__JJI (JNIEnv* env, jclass cls, jlong x, jlong y, jint z) {
  return fcMath_select(x, y, z);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__FFI (JNIEnv* env, jclass cls, jfloat x, jfloat y, jint z) {
  return fcMath_select(x, y, z);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__DDI (JNIEnv* env, jclass cls, jdouble x, jdouble y, jint z) {
  return fcMath_select(x, y, z);
}


//
// Native Interface
//


// Java Math

cl_float fcMath_acosf (cl_float a) {
  return acosf(a);
}

cl_float fcMath_asinf (cl_float a) {
  return asinf(a);
}

cl_float fcMath_atanf (cl_float a) {
  return atanf(a);
}

cl_float fcMath_atan2f (cl_float y, cl_float x) {
  return atan2f(y, x);
}

cl_float fcMath_cbrtf (cl_float a) {
  return cbrtf(a);
}

cl_float fcMath_ceilf (cl_float a) {
  return ceilf(a);
}

cl_float fcMath_copySignf (cl_float magnitude, cl_float sign) {
  return copysignf(magnitude, sign);
}

cl_float fcMath_cosf (cl_float a) {
  return cosf(a);
}

cl_float fcMath_coshf (cl_float x) {
  return coshf(x);
}

cl_float fcMath_expf (cl_float a) {
  return expf(a);
}

cl_float fcMath_expm1f (cl_float x) {
  return expm1f(x);
}

cl_float fcMath_floorf (cl_float a) {
  return floorf(a);
}

cl_int fcMath_getExponentf (cl_float d) {
  return ilogbf(d);
}

cl_float fcMath_hypotf (cl_float x, cl_float y) {
  return hypotf(x, y);
}

cl_float fcMath_remainderf (cl_float f1, cl_float f2) {
  return remainderf(f1, f2);
}

cl_float fcMath_logf (cl_float a) {
  return logf(a);
}

cl_float fcMath_log10f (cl_float a) {
  return log10f(a);
}

cl_float fcMath_log1pf (cl_float a) {
  return log1pf(a);
}

cl_float fcMath_nextAfterf (cl_float start, cl_float direction) {
  return nextafterf(start, direction);
}

cl_float fcMath_powf (cl_float a, cl_float b) {
  return powf(a, b);
}

cl_float fcMath_rintf (cl_float a) {
  return rintf(a);
}

cl_float fcMath_roundf (cl_float a) {
  return roundf(a);
}

cl_float fcMath_scalbf (cl_float a, cl_int scaleFactor) {
  return ldexpf(a, scaleFactor);
}

cl_float fcMath_signumf (cl_float d) {
  return d == 0.0f? 0.0f : (d < 0.0f? -1.0f : 1.0f);
}

cl_float fcMath_sinf (cl_float a) {
  return sinf(a);
}

cl_float fcMath_sinhf (cl_float x) {
  return sinhf(x);
}

cl_float fcMath_sqrtf (cl_float a) {
  return sqrtf(a);
}

cl_float fcMath_tanf (cl_float a) {
  return tanf(a);
}

cl_float fcMath_tanhf (cl_float x) {
  return tanhf(x);
}

cl_float fcMath_toDegreesf (cl_float angrad) {
  return angrad * (180 / CL_M_PI_F);
}

cl_float fcMath_toRadiansf (cl_float angdeg) {
  return angdeg * (CL_M_PI_F / 180);
}

cl_double fcMath_acos (cl_double a) {
  return acos(a);
}

cl_double fcMath_asin (cl_double a) {
  return asin(a);
}

cl_double fcMath_atan (cl_double a) {
  return atan(a);
}

cl_double fcMath_atan2 (cl_double y, cl_double x) {
  return atan2(y, x);
}

cl_double fcMath_cbrt (cl_double a) {
  return cbrt(a);
}

cl_double fcMath_ceil (cl_double a) {
  return ceil(a);
}

cl_double fcMath_copySign (cl_double magnitude, cl_double sign) {
  return copysign(magnitude, sign);
}

cl_double fcMath_cos (cl_double a) {
  return cos(a);
}

cl_double fcMath_cosh (cl_double x) {
  return cosh(x);
}

cl_double fcMath_exp (cl_double a) {
  return exp(a);
}

cl_double fcMath_expm1 (cl_double x) {
  return expm1(x);
}

cl_double fcMath_floor (cl_double a) {
  return floor(a);
}

cl_int fcMath_getExponent (cl_double d) {
  return ilogb(d);
}

cl_double fcMath_hypot (cl_double x, cl_double y) {
  return hypot(x, y);
}

cl_double fcMath_remainder (cl_double f1, cl_double f2) {
  return remainder(f1, f2);
}

cl_double fcMath_log (cl_double a) {
  return log(a);
}

cl_double fcMath_log10 (cl_double a) {
  return log10(a);
}

cl_double fcMath_log1p (cl_double a) {
  return log1p(a);
}

cl_double fcMath_nextAfter (cl_double start, cl_double direction) {
  return nextafter(start, direction);
}

cl_double fcMath_pow (cl_double a, cl_double b) {
  return pow(a, b);
}

cl_double fcMath_rint (cl_double a) {
  return rint(a);
}

cl_double fcMath_round (cl_double a) {
  return round(a);
}

cl_double fcMath_scalb (cl_double a, cl_int scaleFactor) {
  return ldexp(a, scaleFactor);
}

cl_double fcMath_signum (cl_double d) {
  return d == 0.0? 0.0 : (d < 0.0? -1.0 : 1.0);
}

cl_double fcMath_sin (cl_double a) {
  return sin(a);
}

cl_double fcMath_sinh (cl_double x) {
  return sinh(x);
}

cl_double fcMath_sqrt (cl_double a) {
  return sqrt(a);
}

cl_double fcMath_tan (cl_double a) {
  return tan(a);
}

cl_double fcMath_tanh (cl_double x) {
  return tanh(x);
}

cl_double fcMath_toDegrees (cl_double angrad) {
  return angrad * (180 / CL_M_PI);
}

cl_double fcMath_toRadians (cl_double angdeg) {
  return angdeg * (CL_M_PI / 180);
}


// OpenCL Common

cl_float fcMath_smoothStepf (cl_float edge0, cl_float edge1, cl_float x) {
  // TODO Implement function
  return 0.0f;
}

cl_float fcMath_stepf (cl_float edge, cl_float x) {
  // TODO Implement function
  return 0.0f;
}

cl_double fcMath_smoothStep (cl_double edge0, cl_double edge1, cl_double x) {
  // TODO Implement function
  return 0.0;
}

cl_double fcMath_step (cl_double edge, cl_double x) {
  // TODO Implement function
  return 0.0;
}


// OpenCL Integer

cl_byte fcMath_addSatc (cl_byte x, cl_byte y) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_clzc (cl_byte x) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_haddc (cl_byte x, cl_byte y) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_madHic (cl_byte a, cl_byte b, cl_byte c) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_madSatc (cl_byte a, cl_byte b, cl_byte c) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_mulHic (cl_byte x, cl_byte y) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_rhaddc (cl_byte x, cl_byte y) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_rotatec (cl_byte v, cl_byte i) {
  // TODO Implement function
  return '\0';
}

cl_byte fcMath_subSatc (cl_byte x, cl_byte y) {
  // TODO Implement function
  return '\0';
}

cl_short fcMath_addSats (cl_short x, cl_short y) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_clzs (cl_short x) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_hadds (cl_short x, cl_short y) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_madHis (cl_short a, cl_short b, cl_short c) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_madSats (cl_short a, cl_short b, cl_short c) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_mulHis (cl_short x, cl_short y) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_rhadds (cl_short x, cl_short y) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_rotates (cl_short v, cl_short i) {
  // TODO Implement function
  return 0;
}

cl_short fcMath_subSats (cl_short x, cl_short y) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_addSat (cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_clz (cl_int x) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_hadd (cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_madHi (cl_int a, cl_int b, cl_int c) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_madSat (cl_int a, cl_int b, cl_int c) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_mulHi (cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_rhadd (cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_rotate (cl_int v, cl_int i) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_subSat (cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}

cl_long fcMath_addSatl (cl_long x, cl_long y) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_clzl (cl_long x) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_haddl (cl_long x, cl_long y) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_madHil (cl_long a, cl_long b, cl_long c) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_madSatl (cl_long a, cl_long b, cl_long c) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_mulHil (cl_long x, cl_long y) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_rhaddl (cl_long x, cl_long y) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_rotatel (cl_long v, cl_long i) {
  // TODO Implement function
  return 0L;
}

cl_long fcMath_subSatl (cl_long x, cl_long y) {
  // TODO Implement function
  return 0L;
}

cl_int fcMath_mad24 (cl_int x, cl_int y, cl_int z) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_mul24 (cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}


// OpenCL Math

cl_float fcMath_acoshf (cl_float x) {
  return acoshf(x);
}

cl_float fcMath_asinhf (cl_float x) {
  return asinhf(x);
}

cl_float fcMath_atanhf (cl_float x) {
  return atanhf(x);
}

cl_float fcMath_erff (cl_float x) {
  return erff(x);
}

cl_float fcMath_erfcf (cl_float x) {
  return erfcf(x);
}

cl_float fcMath_exp2f (cl_float x) {
  return exp2f(x);
}

cl_float fcMath_exp10f (cl_float x) {
  return powf(10, x);
}

cl_float fcMath_fdimf (cl_float x, cl_float y) {
  return fdimf(x, y);
}

cl_float fcMath_fmaf (cl_float a, cl_float b, cl_float c) {
  return fmaf(a, b, c);
}

cl_float fcMath_fmodf (cl_float x, cl_float y) {
  return fmodf(x, y);
}

cl_float fcMath_fractf (cl_float x) {
  return fcMath_min(x - floorf(x), CL_FLT_MAX);
}

cl_float fcMath_frexpf (cl_float x) {
  return frexpf(x, NULL);
}

cl_float fcMath_ldexpf (cl_float x, cl_int n) {
  return ldexpf(x, n);
}

cl_float fcMath_lgammaf (cl_float x) {
  return lgammaf(x);
}

cl_float fcMath_log2f (cl_float x) {
  return log2f(x);
}

cl_float fcMath_logbf (cl_float x) {
  return logbf(x);
}

cl_float fcMath_madf (cl_float a, cl_float b, cl_float c) {
  return fmaf(a, b, c);
}

cl_float fcMath_pownf (cl_float x, cl_int y) {
  return powf(x, y);
}

cl_float fcMath_powrf (cl_float x, cl_float y) {
  assert(isgreaterequal(x, 0.0f));
  return powf(x, y);
}

cl_float fcMath_rootnf (cl_float x, cl_int y) {
  return powf(x, 1 / (cl_float) y);
}

cl_float fcMath_rsqrtf (cl_float x) {
  // TODO Implement function
  return 0.0f;
}

cl_float fcMath_tgammaf (cl_float x) {
  return tgammaf(x);
}

cl_float fcMath_truncf (cl_float x) {
  return truncf(x);
}

cl_double fcMath_acosh (cl_double x) {
  return acosh(x);
}

cl_double fcMath_asinh (cl_double x) {
  return asinh(x);
}

cl_double fcMath_atanh (cl_double x) {
  return atanh(x);
}

cl_double fcMath_erf (cl_double x) {
  return erf(x);
}

cl_double fcMath_erfc (cl_double x) {
  return erfc(x);
}

cl_double fcMath_exp2 (cl_double x) {
  return exp2(x);
}

cl_double fcMath_exp10 (cl_double x) {
  return pow(10, x);
}

cl_double fcMath_fdim (cl_double x, cl_double y) {
  return fdim(x, y);
}

cl_double fcMath_fma (cl_double a, cl_double b, cl_double c) {
  return fma(a, b, c);
}

cl_double fcMath_fmod (cl_double x, cl_double y) {
  return fmod(x, y);
}

cl_double fcMath_fract (cl_double x) {
  return fcMath_min(x - floor(x), CL_DBL_MAX);
}

cl_double fcMath_frexp (cl_double x) {
  return frexp(x, NULL);
}

cl_double fcMath_ldexp (cl_double x, cl_int n) {
  return ldexp(x, n);
}

cl_double fcMath_lgamma (cl_double x) {
  return lgamma(x);
}

cl_double fcMath_log2 (cl_double x) {
  return log2(x);
}

cl_double fcMath_logb (cl_double x) {
  return logb(x);
}

cl_double fcMath_mad (cl_double a, cl_double b, cl_double c) {
  return fma(a, b, c);
}

cl_double fcMath_pown (cl_double x, cl_int y) {
  return pow(x, y);
}

cl_double fcMath_powr (cl_double x, cl_double y) {
  assert(isgreaterequal(x, 0.0));
  return pow(x, y);
}

cl_double fcMath_rootn (cl_double x, cl_int y) {
  return pow(x, 1 / (cl_double) y);
}

cl_double fcMath_rsqrt (cl_double x) {
  // TODO Implement function
  return 0.0;
}

cl_double fcMath_tgamma (cl_double x) {
  return tgamma(x);
}

cl_double fcMath_trunc (cl_double x) {
  return trunc(x);
}


// OpenCL Relational

cl_int fcMath_isFinitef (cl_float x) {
  return isfinite(x);
}

cl_int fcMath_isInff (cl_float x) {
  return isinf(x);
}

cl_int fcMath_isNaNf (cl_float x) {
  return isnan(x);
}

cl_int fcMath_isNormalf (cl_float x) {
  return isnormal(x);
}

cl_int fcMath_isOrderedf (cl_float x, cl_float y) {
  return !isunordered(x, y);
}

cl_int fcMath_isUnorderedf (cl_float x, cl_float y) {
  return isunordered(x, y);
}

cl_int fcMath_isFinite (cl_double x) {
  return isfinite(x);
}

cl_int fcMath_isInf (cl_double x) {
  return isinf(x);
}

cl_int fcMath_isNaN (cl_double x) {
  return isnan(x);
}

cl_int fcMath_isNormal (cl_double x) {
  return isnormal(x);
}

cl_int fcMath_isOrdered (cl_double x, cl_double y) {
  return !isunordered(x, y);
}

cl_int fcMath_isUnordered (cl_double x, cl_double y) {
  return isunordered(x, y);
}

