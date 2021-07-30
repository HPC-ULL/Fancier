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

#ifndef _FANCIER_MATH_H_
#define _FANCIER_MATH_H_

#include <fancier/platform.h>


/**
 * @name Functions from Java's \c Math class.
 * @{
 */

#define fcMath_abs(x)    ((x) < 0 ? -(x) : (x))   // OpenCL abs() | fabs()
#define fcMath_max(x, y) ((x) > (y) ? (x) : (y))  // OpenCL max() | fmax()
#define fcMath_min(x, y) ((x) < (y) ? (x) : (y))  // OpenCL min() | fmin()

FANCIER_API fcDouble fcMath_acos(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_acosf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_asin(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_asinf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_atan(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_atanf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_atan2(fcDouble y, fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_atan2f(fcFloat y, fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_cbrt(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_cbrtf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_ceil(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_ceilf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_copySign(fcDouble magnitude, fcDouble sign) FC_PURE;  // OpenCL copysign()
FANCIER_API fcFloat fcMath_copySignf(fcFloat magnitude, fcFloat sign) FC_PURE;
FANCIER_API fcDouble fcMath_cos(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_cosf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_cosh(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_coshf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_exp(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_expf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_expm1(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_expm1f(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_floor(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_floorf(fcFloat a) FC_PURE;
FANCIER_API fcInt fcMath_getExponent(fcDouble d) FC_PURE;  // OpenCL ilogb()
FANCIER_API fcInt fcMath_getExponentf(fcFloat f) FC_PURE;
FANCIER_API fcDouble fcMath_hypot(fcDouble x, fcDouble y) FC_PURE;
FANCIER_API fcFloat fcMath_hypotf(fcFloat x, fcFloat y) FC_PURE;
FANCIER_API fcDouble fcMath_remainder(fcDouble f1, fcDouble f2) FC_PURE;
FANCIER_API fcFloat fcMath_remainderf(fcFloat f1, fcFloat f2) FC_PURE;
FANCIER_API fcDouble fcMath_log(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_logf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_log10(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_log10f(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_log1p(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_log1pf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_nextAfter(fcDouble start, fcDouble direction) FC_PURE;  // OpenCL nextafter()
FANCIER_API fcFloat fcMath_nextAfterf(fcFloat start, fcFloat direction) FC_PURE;
FANCIER_API fcDouble fcMath_pow(fcDouble a, fcDouble b) FC_PURE;
FANCIER_API fcFloat fcMath_powf(fcFloat a, fcFloat b) FC_PURE;
FANCIER_API fcDouble fcMath_rint(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_rintf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_round(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_roundf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_scalb(fcDouble a, fcInt scaleFactor) FC_PURE;  // OpenCL ldexp()
FANCIER_API fcFloat fcMath_scalbf(fcFloat a, fcInt scaleFactor) FC_PURE;
FANCIER_API fcDouble fcMath_signum(fcDouble d) FC_PURE;  // OpenCL sign()
FANCIER_API fcFloat fcMath_signumf(fcFloat f) FC_PURE;
FANCIER_API fcDouble fcMath_sin(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_sinf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_sinh(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_sinhf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_sqrt(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_sqrtf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_tan(fcDouble a) FC_PURE;
FANCIER_API fcFloat fcMath_tanf(fcFloat a) FC_PURE;
FANCIER_API fcDouble fcMath_tanh(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_tanhf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_toDegrees(fcDouble angrad) FC_PURE;  // OpenCL degrees()
FANCIER_API fcFloat fcMath_toDegreesf(fcFloat angrad) FC_PURE;
FANCIER_API fcDouble fcMath_toRadians(fcDouble angdeg) FC_PURE;  // OpenCL radians()
FANCIER_API fcFloat fcMath_toRadiansf(fcFloat angdeg) FC_PURE;

/**
 * @}
 */

/**
 * @name Built-in OpenCL functions.
 * @{
 */

// Common functions

#define fcMath_clamp(v, min, max) ((v) < (min) ? (min) : ((v) > (max) ? (max) : (v)))
#define fcMath_mix(x, y, a)       ((x) + ((y) - (x)) * (a))

// OpenCL smoothstep
FANCIER_API fcDouble fcMath_smoothStep(fcDouble edge0, fcDouble edge1, fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_smoothStepf(fcFloat edge0, fcFloat edge1, fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_step(fcDouble edge, fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_stepf(fcFloat edge, fcFloat x) FC_PURE;

// Integer functions

#define fcMath_absDiff(x, y) (fcMath_abs((x) - (y)))  // OpenCL abs_diff()

FANCIER_API fcInt fcMath_addSat(fcInt x, fcInt y) FC_PURE;  // OpenCL add_sat()
FANCIER_API fcByte fcMath_addSatc(fcByte x, fcByte y) FC_PURE;
FANCIER_API fcShort fcMath_addSats(fcShort x, fcShort y) FC_PURE;
FANCIER_API fcLong fcMath_addSatl(fcLong x, fcLong y) FC_PURE;
FANCIER_API fcInt fcMath_clz(fcInt x) FC_PURE;
FANCIER_API fcByte fcMath_clzc(fcByte x) FC_PURE;
FANCIER_API fcShort fcMath_clzs(fcShort x) FC_PURE;
FANCIER_API fcLong fcMath_clzl(fcLong x) FC_PURE;
FANCIER_API fcInt fcMath_hadd(fcInt x, fcInt y) FC_PURE;
FANCIER_API fcByte fcMath_haddc(fcByte x, fcByte y) FC_PURE;
FANCIER_API fcShort fcMath_hadds(fcShort x, fcShort y) FC_PURE;
FANCIER_API fcLong fcMath_haddl(fcLong x, fcLong y) FC_PURE;
FANCIER_API fcInt fcMath_mad24(fcInt x, fcInt y, fcInt z) FC_PURE;
FANCIER_API fcInt fcMath_madHi(fcInt a, fcInt b, fcInt c) FC_PURE;  // OpenCL mad_hi()
FANCIER_API fcByte fcMath_madHic(fcByte a, fcByte b, fcByte c) FC_PURE;
FANCIER_API fcShort fcMath_madHis(fcShort a, fcShort b, fcShort c) FC_PURE;
FANCIER_API fcLong fcMath_madHil(fcLong a, fcLong b, fcLong c) FC_PURE;
FANCIER_API fcInt fcMath_madSat(fcInt a, fcInt b, fcInt c) FC_PURE;  // OpenCL mad_sat()
FANCIER_API fcByte fcMath_madSatc(fcByte a, fcByte b, fcByte c) FC_PURE;
FANCIER_API fcShort fcMath_madSats(fcShort a, fcShort b, fcShort c) FC_PURE;
FANCIER_API fcLong fcMath_madSatl(fcLong a, fcLong b, fcLong c) FC_PURE;
FANCIER_API fcInt fcMath_mul24(fcInt x, fcInt y) FC_PURE;
FANCIER_API fcInt fcMath_mulHi(fcInt x, fcInt y) FC_PURE;
FANCIER_API fcByte fcMath_mulHic(fcByte x, fcByte y) FC_PURE;  // OpenCL mul_hi()
FANCIER_API fcShort fcMath_mulHis(fcShort x, fcShort y) FC_PURE;
FANCIER_API fcLong fcMath_mulHil(fcLong x, fcLong y) FC_PURE;
FANCIER_API fcInt fcMath_rhadd(fcInt x, fcInt y) FC_PURE;
FANCIER_API fcByte fcMath_rhaddc(fcByte x, fcByte y) FC_PURE;
FANCIER_API fcShort fcMath_rhadds(fcShort x, fcShort y) FC_PURE;
FANCIER_API fcLong fcMath_rhaddl(fcLong x, fcLong y) FC_PURE;
FANCIER_API fcInt fcMath_rotate(fcInt v, fcInt i) FC_PURE;
FANCIER_API fcByte fcMath_rotatec(fcByte v, fcByte i) FC_PURE;
FANCIER_API fcShort fcMath_rotates(fcShort v, fcShort i) FC_PURE;
FANCIER_API fcLong fcMath_rotatel(fcLong v, fcLong i) FC_PURE;
FANCIER_API fcInt fcMath_subSat(fcInt x, fcInt y) FC_PURE;  // OpenCL sub_sat()
FANCIER_API fcByte fcMath_subSatc(fcByte x, fcByte y) FC_PURE;
FANCIER_API fcShort fcMath_subSats(fcShort x, fcShort y) FC_PURE;
FANCIER_API fcLong fcMath_subSatl(fcLong x, fcLong y) FC_PURE;

// Math functions

#define fcMath_maxMag(x, y) (fcMath_abs(x) > fcMath_abs(y) ? x : y)  // OpenCL maxmag()
#define fcMath_minMag(x, y) (fcMath_abs(x) < fcMath_abs(y) ? x : y)  // OpenCL minmag()

FANCIER_API fcDouble fcMath_acosh(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_acoshf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_asinh(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_asinhf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_atanh(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_atanhf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_erf(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_erff(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_erfc(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_erfcf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_exp2(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_exp2f(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_exp10(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_exp10f(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_fdim(fcDouble x, fcDouble y) FC_PURE;
FANCIER_API fcFloat fcMath_fdimf(fcFloat x, fcFloat y) FC_PURE;
FANCIER_API fcDouble fcMath_fma(fcDouble a, fcDouble b, fcDouble c) FC_PURE;
FANCIER_API fcFloat fcMath_fmaf(fcFloat a, fcFloat b, fcFloat c) FC_PURE;
FANCIER_API fcDouble fcMath_fmod(fcDouble x, fcDouble y) FC_PURE;
FANCIER_API fcFloat fcMath_fmodf(fcFloat x, fcFloat y) FC_PURE;
FANCIER_API fcDouble fcMath_fract(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_fractf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_frexp(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_frexpf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_ldexp(fcDouble x, fcInt n) FC_PURE;
FANCIER_API fcFloat fcMath_ldexpf(fcFloat x, fcInt n) FC_PURE;
FANCIER_API fcDouble fcMath_lgamma(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_lgammaf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_log2(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_log2f(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_logb(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_logbf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_mad(fcDouble a, fcDouble b, fcDouble c) FC_PURE;
FANCIER_API fcFloat fcMath_madf(fcFloat a, fcFloat b, fcFloat c) FC_PURE;
FANCIER_API fcDouble fcMath_pown(fcDouble x, fcInt y) FC_PURE;
FANCIER_API fcFloat fcMath_pownf(fcFloat x, fcInt y) FC_PURE;
FANCIER_API fcDouble fcMath_powr(fcDouble x, fcDouble y) FC_PURE;
FANCIER_API fcFloat fcMath_powrf(fcFloat x, fcFloat y) FC_PURE;
FANCIER_API fcDouble fcMath_rootn(fcDouble x, fcInt y) FC_PURE;
FANCIER_API fcFloat fcMath_rootnf(fcFloat x, fcInt y) FC_PURE;
FANCIER_API fcDouble fcMath_rsqrt(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_rsqrtf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_tgamma(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_tgammaf(fcFloat x) FC_PURE;
FANCIER_API fcDouble fcMath_trunc(fcDouble x) FC_PURE;
FANCIER_API fcFloat fcMath_truncf(fcFloat x) FC_PURE;

// Relational functions

#define fcMath_select(a, b, c) ((c) ? (b) : (a))

FANCIER_API fcInt fcMath_isFinite(fcDouble x) FC_PURE;  // OpenCL isfinite()
FANCIER_API fcInt fcMath_isFinitef(fcFloat x) FC_PURE;
FANCIER_API fcInt fcMath_isInf(fcDouble x) FC_PURE;  // OpenCL isinf()
FANCIER_API fcInt fcMath_isInff(fcFloat x) FC_PURE;
FANCIER_API fcInt fcMath_isNaN(fcDouble x) FC_PURE;  // OpenCL isnan()
FANCIER_API fcInt fcMath_isNaNf(fcFloat x) FC_PURE;
FANCIER_API fcInt fcMath_isNormal(fcDouble x) FC_PURE;  // OpenCL isnormal()
FANCIER_API fcInt fcMath_isNormalf(fcFloat x) FC_PURE;
FANCIER_API fcInt fcMath_isOrdered(fcDouble x, fcDouble y) FC_PURE;  // OpenCL isordered()
FANCIER_API fcInt fcMath_isOrderedf(fcFloat x, fcFloat y) FC_PURE;
FANCIER_API fcInt fcMath_isUnordered(fcDouble x, fcDouble y) FC_PURE;  // OpenCL isunordered()
FANCIER_API fcInt fcMath_isUnorderedf(fcFloat x, fcFloat y) FC_PURE;

/**
 * @}
 */

#endif  // _FANCIER_MATH_H_
