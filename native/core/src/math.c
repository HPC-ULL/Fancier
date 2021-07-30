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

#include <fancier/math.h>

#include <assert.h>
#include <math.h>
#include <stdlib.h>


//
// Java interface
//


JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acos__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_acosf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acos__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_acos(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asin__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_asinf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asin__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_asin(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_atanf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_atan(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan2__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_atan2f(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atan2__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_atan2(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cbrt__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_cbrtf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cbrt__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_cbrt(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ceil__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_ceilf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ceil__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_ceil(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_copySign__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_copySignf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_copySign__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_copySign(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cos__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_cosf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cos__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_cos(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cosh__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_coshf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_cosh__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_cosh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_expf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_exp(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_expm1__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_expm1f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_expm1__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_expm1(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_floor__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_floorf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_floor__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_floor(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_getExponent__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_getExponentf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_getExponent__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_getExponent(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hypot__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_hypotf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hypot__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_hypot(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_remainder__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_remainderf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_remainder__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_remainder(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_logf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log10__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_log10f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log10__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log10(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log1p__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_log1pf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log1p__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log1p(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_nextAfter__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_nextAfterf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_nextAfter__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_nextAfter(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pow__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_powf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pow__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_pow(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rint__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_rintf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rint__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_rint(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_round__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_roundf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_round__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_round(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_signum__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_signumf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_signum__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_signum(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sin__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_sinf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sin__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_sin(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sinh__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_sinhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sinh__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_sinh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sqrt__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_sqrtf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_sqrt__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_sqrt(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tan__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_tanf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tan__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_tan(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tanh__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_tanhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tanh__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_tanh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toDegrees__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_toDegreesf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toDegrees__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_toDegrees(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toRadians__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_toRadiansf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_toRadians__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_toRadians(a);
}


JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_smoothStep__FFF(JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_smoothStepf(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_smoothStep__DDD(JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_smoothStep(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_step__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_stepf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_step__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_step(a, b);
}


JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__BB(JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_addSatc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__SS(JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_addSats(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__II(JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_addSat(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_addSat__JJ(JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_addSatl(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__B(JNIEnv* env, jclass cls, jbyte a) {
  return fcMath_clzc(a);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__S(JNIEnv* env, jclass cls, jshort a) {
  return fcMath_clzs(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__I(JNIEnv* env, jclass cls, jint a) {
  return fcMath_clz(a);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_clz__J(JNIEnv* env, jclass cls, jlong a) {
  return fcMath_clzl(a);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__BB(JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_haddc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__SS(JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_hadds(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__II(JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_hadd(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_hadd__JJ(JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_haddl(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__BBB(JNIEnv* env, jclass cls, jbyte a, jbyte b, jbyte c) {
  return fcMath_madHic(a, b, c);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__SSS(JNIEnv* env, jclass cls, jshort a, jshort b, jshort c) {
  return fcMath_madHis(a, b, c);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__III(JNIEnv* env, jclass cls, jint a, jint b, jint c) {
  return fcMath_madHi(a, b, c);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madHi__JJJ(JNIEnv* env, jclass cls, jlong a, jlong b, jlong c) {
  return fcMath_madHil(a, b, c);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__BBB(JNIEnv* env, jclass cls, jbyte a, jbyte b, jbyte c) {
  return fcMath_madSatc(a, b, c);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__SSS(JNIEnv* env, jclass cls, jshort a, jshort b, jshort c) {
  return fcMath_madSats(a, b, c);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__III(JNIEnv* env, jclass cls, jint a, jint b, jint c) {
  return fcMath_madSat(a, b, c);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_madSat__JJJ(JNIEnv* env, jclass cls, jlong a, jlong b, jlong c) {
  return fcMath_madSatl(a, b, c);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__BB(JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_mulHic(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__SS(JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_mulHis(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__II(JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_mulHi(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mulHi__JJ(JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_mulHil(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__BB(JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_rhaddc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__SS(JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_rhadds(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__II(JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_rhadd(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rhadd__JJ(JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_rhaddl(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__BB(JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_rotatec(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__SS(JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_rotates(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__II(JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_rotate(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rotate__JJ(JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_rotatel(a, b);
}

JNIEXPORT jbyte JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__BB(JNIEnv* env, jclass cls, jbyte a, jbyte b) {
  return fcMath_subSatc(a, b);
}

JNIEXPORT jshort JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__SS(JNIEnv* env, jclass cls, jshort a, jshort b) {
  return fcMath_subSats(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__II(JNIEnv* env, jclass cls, jint a, jint b) {
  return fcMath_subSat(a, b);
}

JNIEXPORT jlong JNICALL
Java_es_ull_pcg_hpc_fancier_Math_subSat__JJ(JNIEnv* env, jclass cls, jlong a, jlong b) {
  return fcMath_subSatl(a, b);
}


JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acosh__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_acoshf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_acosh__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_acosh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asinh__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_asinhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_asinh__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_asinh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atanh__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_atanhf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_atanh__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_atanh(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erf__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_erff(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erf__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_erf(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erfc__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_erfcf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_erfc__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_erfc(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp2__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_exp2f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp2__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_exp2(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp10__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_exp10f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_exp10__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_exp10(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fdim__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_fdimf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fdim__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_fdim(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fma__FFF(JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_fmaf(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fma__DDD(JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_fma(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fmod__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_fmodf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fmod__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_fmod(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fract__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_fractf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_fract__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_fract(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_frexp__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_frexpf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_frexp__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_frexp(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_lgamma__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_lgammaf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_lgamma__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_lgamma(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log2__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_log2f(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_log2__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_log2(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_logb__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_logbf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_logb__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_logb(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad__FFF(JNIEnv* env, jclass cls, jfloat a, jfloat b, jfloat c) {
  return fcMath_madf(a, b, c);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad__DDD(JNIEnv* env, jclass cls, jdouble a, jdouble b, jdouble c) {
  return fcMath_mad(a, b, c);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_powr__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_powrf(a, b);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_powr__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_powr(a, b);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rsqrt__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_rsqrtf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rsqrt__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_rsqrt(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tgamma__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_tgammaf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_tgamma__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_tgamma(a);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_trunc__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_truncf(a);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_trunc__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_trunc(a);
}


JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isFinite__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isFinitef(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isFinite__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isFinite(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isInf__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isInff(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isInf__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isInf(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNaN__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isNaNf(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNaN__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isNaN(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNormal__F(JNIEnv* env, jclass cls, jfloat a) {
  return fcMath_isNormalf(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isNormal__D(JNIEnv* env, jclass cls, jdouble a) {
  return fcMath_isNormal(a);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isOrdered__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_isOrderedf(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isOrdered__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_isOrdered(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isUnordered__FF(JNIEnv* env, jclass cls, jfloat a, jfloat b) {
  return fcMath_isUnorderedf(a, b);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_isUnordered__DD(JNIEnv* env, jclass cls, jdouble a, jdouble b) {
  return fcMath_isUnordered(a, b);
}


JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad24(JNIEnv* env, jclass cls, jint x, jint y, jint z) {
  return fcMath_mad24(x, y, z);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mul24(JNIEnv* env, jclass cls, jint x, jint y) {
  return fcMath_mul24(x, y);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_scalb__FI(JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_scalbf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_scalb__DI(JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_scalb(x, n);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ldexp__FI(JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_ldexpf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_ldexp__DI(JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_ldexp(x, n);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pown__FI(JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_pownf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_pown__DI(JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_pown(x, n);
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rootn__FI(JNIEnv* env, jclass cls, jfloat x, jint n) {
  return fcMath_rootnf(x, n);
}

JNIEXPORT jdouble JNICALL
Java_es_ull_pcg_hpc_fancier_Math_rootn__DI(JNIEnv* env, jclass cls, jdouble x, jint n) {
  return fcMath_rootn(x, n);
}


//
// Native Interface
//


// Java Math

fcFloat fcMath_acosf(fcFloat a) {
  return acosf(a);
}

fcFloat fcMath_asinf(fcFloat a) {
  return asinf(a);
}

fcFloat fcMath_atanf(fcFloat a) {
  return atanf(a);
}

fcFloat fcMath_atan2f(fcFloat y, fcFloat x) {
  return atan2f(y, x);
}

fcFloat fcMath_cbrtf(fcFloat a) {
  return cbrtf(a);
}

fcFloat fcMath_ceilf(fcFloat a) {
  return ceilf(a);
}

fcFloat fcMath_copySignf(fcFloat magnitude, fcFloat sign) {
  return copysignf(magnitude, sign);
}

fcFloat fcMath_cosf(fcFloat a) {
  return cosf(a);
}

fcFloat fcMath_coshf(fcFloat x) {
  return coshf(x);
}

fcFloat fcMath_expf(fcFloat a) {
  return expf(a);
}

fcFloat fcMath_expm1f(fcFloat x) {
  return expm1f(x);
}

fcFloat fcMath_floorf(fcFloat a) {
  return floorf(a);
}

fcInt fcMath_getExponentf(fcFloat d) {
  return ilogbf(d);
}

fcFloat fcMath_hypotf(fcFloat x, fcFloat y) {
  return hypotf(x, y);
}

fcFloat fcMath_remainderf(fcFloat f1, fcFloat f2) {
  return remainderf(f1, f2);
}

fcFloat fcMath_logf(fcFloat a) {
  return logf(a);
}

fcFloat fcMath_log10f(fcFloat a) {
  return log10f(a);
}

fcFloat fcMath_log1pf(fcFloat a) {
  return log1pf(a);
}

fcFloat fcMath_nextAfterf(fcFloat start, fcFloat direction) {
  return nextafterf(start, direction);
}

fcFloat fcMath_powf(fcFloat a, fcFloat b) {
  return powf(a, b);
}

fcFloat fcMath_rintf(fcFloat a) {
  return rintf(a);
}

fcFloat fcMath_roundf(fcFloat a) {
  return roundf(a);
}

fcFloat fcMath_scalbf(fcFloat a, fcInt scaleFactor) {
  return ldexpf(a, scaleFactor);
}

fcFloat fcMath_signumf(fcFloat d) {
  return d == 0.0f ? 0.0f : (d < 0.0f ? -1.0f : 1.0f);
}

fcFloat fcMath_sinf(fcFloat a) {
  return sinf(a);
}

fcFloat fcMath_sinhf(fcFloat x) {
  return sinhf(x);
}

fcFloat fcMath_sqrtf(fcFloat a) {
  return sqrtf(a);
}

fcFloat fcMath_tanf(fcFloat a) {
  return tanf(a);
}

fcFloat fcMath_tanhf(fcFloat x) {
  return tanhf(x);
}

fcFloat fcMath_toDegreesf(fcFloat angrad) {
  return angrad * (180 / CL_M_PI_F);
}

fcFloat fcMath_toRadiansf(fcFloat angdeg) {
  return angdeg * (CL_M_PI_F / 180);
}

fcDouble fcMath_acos(fcDouble a) {
  return acos(a);
}

fcDouble fcMath_asin(fcDouble a) {
  return asin(a);
}

fcDouble fcMath_atan(fcDouble a) {
  return atan(a);
}

fcDouble fcMath_atan2(fcDouble y, fcDouble x) {
  return atan2(y, x);
}

fcDouble fcMath_cbrt(fcDouble a) {
  return cbrt(a);
}

fcDouble fcMath_ceil(fcDouble a) {
  return ceil(a);
}

fcDouble fcMath_copySign(fcDouble magnitude, fcDouble sign) {
  return copysign(magnitude, sign);
}

fcDouble fcMath_cos(fcDouble a) {
  return cos(a);
}

fcDouble fcMath_cosh(fcDouble x) {
  return cosh(x);
}

fcDouble fcMath_exp(fcDouble a) {
  return exp(a);
}

fcDouble fcMath_expm1(fcDouble x) {
  return expm1(x);
}

fcDouble fcMath_floor(fcDouble a) {
  return floor(a);
}

fcInt fcMath_getExponent(fcDouble d) {
  return ilogb(d);
}

fcDouble fcMath_hypot(fcDouble x, fcDouble y) {
  return hypot(x, y);
}

fcDouble fcMath_remainder(fcDouble f1, fcDouble f2) {
  return remainder(f1, f2);
}

fcDouble fcMath_log(fcDouble a) {
  return log(a);
}

fcDouble fcMath_log10(fcDouble a) {
  return log10(a);
}

fcDouble fcMath_log1p(fcDouble a) {
  return log1p(a);
}

fcDouble fcMath_nextAfter(fcDouble start, fcDouble direction) {
  return nextafter(start, direction);
}

fcDouble fcMath_pow(fcDouble a, fcDouble b) {
  return pow(a, b);
}

fcDouble fcMath_rint(fcDouble a) {
  return rint(a);
}

fcDouble fcMath_round(fcDouble a) {
  return round(a);
}

fcDouble fcMath_scalb(fcDouble a, fcInt scaleFactor) {
  return ldexp(a, scaleFactor);
}

fcDouble fcMath_signum(fcDouble d) {
  return d == 0.0 ? 0.0 : (d < 0.0 ? -1.0 : 1.0);
}

fcDouble fcMath_sin(fcDouble a) {
  return sin(a);
}

fcDouble fcMath_sinh(fcDouble x) {
  return sinh(x);
}

fcDouble fcMath_sqrt(fcDouble a) {
  return sqrt(a);
}

fcDouble fcMath_tan(fcDouble a) {
  return tan(a);
}

fcDouble fcMath_tanh(fcDouble x) {
  return tanh(x);
}

fcDouble fcMath_toDegrees(fcDouble angrad) {
  return angrad * (180 / CL_M_PI);
}

fcDouble fcMath_toRadians(fcDouble angdeg) {
  return angdeg * (CL_M_PI / 180);
}


// OpenCL Common

fcFloat fcMath_smoothStepf(fcFloat edge0, fcFloat edge1, fcFloat x) {
  // TODO Implement function
  return 0.0f;
}

fcFloat fcMath_stepf(fcFloat edge, fcFloat x) {
  // TODO Implement function
  return 0.0f;
}

fcDouble fcMath_smoothStep(fcDouble edge0, fcDouble edge1, fcDouble x) {
  // TODO Implement function
  return 0.0;
}

fcDouble fcMath_step(fcDouble edge, fcDouble x) {
  // TODO Implement function
  return 0.0;
}


// OpenCL Integer

fcByte fcMath_addSatc(fcByte x, fcByte y) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_clzc(fcByte x) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_haddc(fcByte x, fcByte y) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_madHic(fcByte a, fcByte b, fcByte c) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_madSatc(fcByte a, fcByte b, fcByte c) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_mulHic(fcByte x, fcByte y) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_rhaddc(fcByte x, fcByte y) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_rotatec(fcByte v, fcByte i) {
  // TODO Implement function
  return '\0';
}

fcByte fcMath_subSatc(fcByte x, fcByte y) {
  // TODO Implement function
  return '\0';
}

fcShort fcMath_addSats(fcShort x, fcShort y) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_clzs(fcShort x) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_hadds(fcShort x, fcShort y) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_madHis(fcShort a, fcShort b, fcShort c) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_madSats(fcShort a, fcShort b, fcShort c) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_mulHis(fcShort x, fcShort y) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_rhadds(fcShort x, fcShort y) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_rotates(fcShort v, fcShort i) {
  // TODO Implement function
  return 0;
}

fcShort fcMath_subSats(fcShort x, fcShort y) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_addSat(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_clz(fcInt x) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_hadd(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_madHi(fcInt a, fcInt b, fcInt c) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_madSat(fcInt a, fcInt b, fcInt c) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_mulHi(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_rhadd(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_rotate(fcInt v, fcInt i) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_subSat(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}

fcLong fcMath_addSatl(fcLong x, fcLong y) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_clzl(fcLong x) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_haddl(fcLong x, fcLong y) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_madHil(fcLong a, fcLong b, fcLong c) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_madSatl(fcLong a, fcLong b, fcLong c) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_mulHil(fcLong x, fcLong y) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_rhaddl(fcLong x, fcLong y) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_rotatel(fcLong v, fcLong i) {
  // TODO Implement function
  return 0L;
}

fcLong fcMath_subSatl(fcLong x, fcLong y) {
  // TODO Implement function
  return 0L;
}

fcInt fcMath_mad24(fcInt x, fcInt y, fcInt z) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_mul24(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}


// OpenCL Math

fcFloat fcMath_acoshf(fcFloat x) {
  return acoshf(x);
}

fcFloat fcMath_asinhf(fcFloat x) {
  return asinhf(x);
}

fcFloat fcMath_atanhf(fcFloat x) {
  return atanhf(x);
}

fcFloat fcMath_erff(fcFloat x) {
  return erff(x);
}

fcFloat fcMath_erfcf(fcFloat x) {
  return erfcf(x);
}

fcFloat fcMath_exp2f(fcFloat x) {
  return exp2f(x);
}

fcFloat fcMath_exp10f(fcFloat x) {
  return powf(10, x);
}

fcFloat fcMath_fdimf(fcFloat x, fcFloat y) {
  return fdimf(x, y);
}

fcFloat fcMath_fmaf(fcFloat a, fcFloat b, fcFloat c) {
  return fmaf(a, b, c);
}

fcFloat fcMath_fmodf(fcFloat x, fcFloat y) {
  return fmodf(x, y);
}

fcFloat fcMath_fractf(fcFloat x) {
  return fcMath_min(x - floorf(x), CL_FLT_MAX);
}

fcFloat fcMath_frexpf(fcFloat x) {
  return frexpf(x, NULL);
}

fcFloat fcMath_ldexpf(fcFloat x, fcInt n) {
  return ldexpf(x, n);
}

fcFloat fcMath_lgammaf(fcFloat x) {
  return lgammaf(x);
}

fcFloat fcMath_log2f(fcFloat x) {
  return log2f(x);
}

fcFloat fcMath_logbf(fcFloat x) {
  return logbf(x);
}

fcFloat fcMath_madf(fcFloat a, fcFloat b, fcFloat c) {
  return fmaf(a, b, c);
}

fcFloat fcMath_pownf(fcFloat x, fcInt y) {
  return powf(x, y);
}

fcFloat fcMath_powrf(fcFloat x, fcFloat y) {
  assert(isgreaterequal(x, 0.0f));
  return powf(x, y);
}

fcFloat fcMath_rootnf(fcFloat x, fcInt y) {
  return powf(x, 1 / (fcFloat) y);
}

fcFloat fcMath_rsqrtf(fcFloat x) {
  return fcMath_powf(x, -0.5);
}

fcFloat fcMath_tgammaf(fcFloat x) {
  return tgammaf(x);
}

fcFloat fcMath_truncf(fcFloat x) {
  return truncf(x);
}

fcDouble fcMath_acosh(fcDouble x) {
  return acosh(x);
}

fcDouble fcMath_asinh(fcDouble x) {
  return asinh(x);
}

fcDouble fcMath_atanh(fcDouble x) {
  return atanh(x);
}

fcDouble fcMath_erf(fcDouble x) {
  return erf(x);
}

fcDouble fcMath_erfc(fcDouble x) {
  return erfc(x);
}

fcDouble fcMath_exp2(fcDouble x) {
  return exp2(x);
}

fcDouble fcMath_exp10(fcDouble x) {
  return pow(10, x);
}

fcDouble fcMath_fdim(fcDouble x, fcDouble y) {
  return fdim(x, y);
}

fcDouble fcMath_fma(fcDouble a, fcDouble b, fcDouble c) {
  return fma(a, b, c);
}

fcDouble fcMath_fmod(fcDouble x, fcDouble y) {
  return fmod(x, y);
}

fcDouble fcMath_fract(fcDouble x) {
  return fcMath_min(x - floor(x), CL_DBL_MAX);
}

fcDouble fcMath_frexp(fcDouble x) {
  return frexp(x, NULL);
}

fcDouble fcMath_ldexp(fcDouble x, fcInt n) {
  return ldexp(x, n);
}

fcDouble fcMath_lgamma(fcDouble x) {
  return lgamma(x);
}

fcDouble fcMath_log2(fcDouble x) {
  return log2(x);
}

fcDouble fcMath_logb(fcDouble x) {
  return logb(x);
}

fcDouble fcMath_mad(fcDouble a, fcDouble b, fcDouble c) {
  return fma(a, b, c);
}

fcDouble fcMath_pown(fcDouble x, fcInt y) {
  return pow(x, y);
}

fcDouble fcMath_powr(fcDouble x, fcDouble y) {
  assert(isgreaterequal(x, 0.0));
  return pow(x, y);
}

fcDouble fcMath_rootn(fcDouble x, fcInt y) {
  return pow(x, 1 / (fcDouble) y);
}

fcDouble fcMath_rsqrt(fcDouble x) {
  return fcMath_pow(x, -0.5);
}

fcDouble fcMath_tgamma(fcDouble x) {
  return tgamma(x);
}

fcDouble fcMath_trunc(fcDouble x) {
  return trunc(x);
}


// OpenCL Relational

fcInt fcMath_isFinitef(fcFloat x) {
  return isfinite(x);
}

fcInt fcMath_isInff(fcFloat x) {
  return isinf(x);
}

fcInt fcMath_isNaNf(fcFloat x) {
  return isnan(x);
}

fcInt fcMath_isNormalf(fcFloat x) {
  return isnormal(x);
}

fcInt fcMath_isOrderedf(fcFloat x, fcFloat y) {
  return !isunordered(x, y);
}

fcInt fcMath_isUnorderedf(fcFloat x, fcFloat y) {
  return isunordered(x, y);
}

fcInt fcMath_isFinite(fcDouble x) {
  return isfinite(x);
}

fcInt fcMath_isInf(fcDouble x) {
  return isinf(x);
}

fcInt fcMath_isNaN(fcDouble x) {
  return isnan(x);
}

fcInt fcMath_isNormal(fcDouble x) {
  return isnormal(x);
}

fcInt fcMath_isOrdered(fcDouble x, fcDouble y) {
  return !isunordered(x, y);
}

fcInt fcMath_isUnordered(fcDouble x, fcDouble y) {
  return isunordered(x, y);
}

