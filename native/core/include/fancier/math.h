#ifndef _FANCIER_MATH_H_
#define _FANCIER_MATH_H_

#include <fancier/platform.h>


/**
 * @name Functions from Java's \c Math class.
 * @{
 */

#define fcMath_abs(x) ((x) < 0? -(x) : (x)) // OpenCL abs() | fabs()
#define fcMath_max(x, y) ((x) > (y)? (x) : (y)) // OpenCL max() | fmax()
#define fcMath_min(x, y) ((x) < (y)? (x) : (y)) // OpenCL min() | fmin()

FANCIER_API cl_double fcMath_acos (cl_double a);
FANCIER_API cl_float fcMath_acosf (cl_float a);
FANCIER_API cl_double fcMath_asin (cl_double a);
FANCIER_API cl_float fcMath_asinf (cl_float a);
FANCIER_API cl_double fcMath_atan (cl_double a);
FANCIER_API cl_float fcMath_atanf (cl_float a);
FANCIER_API cl_double fcMath_atan2 (cl_double y, cl_double x);
FANCIER_API cl_float fcMath_atan2f (cl_float y, cl_float x);
FANCIER_API cl_double fcMath_cbrt (cl_double a);
FANCIER_API cl_float fcMath_cbrtf (cl_float a);
FANCIER_API cl_double fcMath_ceil (cl_double a);
FANCIER_API cl_float fcMath_ceilf (cl_float a);
FANCIER_API cl_double fcMath_copySign (cl_double magnitude, cl_double sign); // OpenCL copysign()
FANCIER_API cl_float fcMath_copySignf (cl_float magnitude, cl_float sign);
FANCIER_API cl_double fcMath_cos (cl_double a);
FANCIER_API cl_float fcMath_cosf (cl_float a);
FANCIER_API cl_double fcMath_cosh (cl_double x);
FANCIER_API cl_float fcMath_coshf (cl_float x);
FANCIER_API cl_double fcMath_exp (cl_double a);
FANCIER_API cl_float fcMath_expf (cl_float a);
FANCIER_API cl_double fcMath_expm1 (cl_double x);
FANCIER_API cl_float fcMath_expm1f (cl_float x);
FANCIER_API cl_double fcMath_floor (cl_double a);
FANCIER_API cl_float fcMath_floorf (cl_float a);
FANCIER_API cl_int fcMath_getExponent (cl_double d); // OpenCL ilogb()
FANCIER_API cl_int fcMath_getExponentf (cl_float f);
FANCIER_API cl_double fcMath_hypot (cl_double x, cl_double y);
FANCIER_API cl_float fcMath_hypotf (cl_float x, cl_float y);
FANCIER_API cl_double fcMath_remainder (cl_double f1, cl_double f2);
FANCIER_API cl_float fcMath_remainderf (cl_float f1, cl_float f2);
FANCIER_API cl_double fcMath_log (cl_double a);
FANCIER_API cl_float fcMath_logf (cl_float a);
FANCIER_API cl_double fcMath_log10 (cl_double a);
FANCIER_API cl_float fcMath_log10f (cl_float a);
FANCIER_API cl_double fcMath_log1p (cl_double a);
FANCIER_API cl_float fcMath_log1pf (cl_float a);
FANCIER_API cl_double fcMath_nextAfter (cl_double start, cl_double direction); // OpenCL nextafter()
FANCIER_API cl_float fcMath_nextAfterf (cl_float start, cl_float direction);
FANCIER_API cl_double fcMath_pow (cl_double a, cl_double b);
FANCIER_API cl_float fcMath_powf (cl_float a, cl_float b);
FANCIER_API cl_double fcMath_rint (cl_double a);
FANCIER_API cl_float fcMath_rintf (cl_float a);
FANCIER_API cl_double fcMath_round (cl_double a);
FANCIER_API cl_float fcMath_roundf (cl_float a);
FANCIER_API cl_double fcMath_scalb (cl_double a, cl_int scaleFactor); // OpenCL ldexp()
FANCIER_API cl_float fcMath_scalbf (cl_float a, cl_int scaleFactor);
FANCIER_API cl_double fcMath_signum (cl_double d); // OpenCL sign()
FANCIER_API cl_float fcMath_signumf (cl_float f);
FANCIER_API cl_double fcMath_sin (cl_double a);
FANCIER_API cl_float fcMath_sinf (cl_float a);
FANCIER_API cl_double fcMath_sinh (cl_double x);
FANCIER_API cl_float fcMath_sinhf (cl_float x);
FANCIER_API cl_double fcMath_sqrt (cl_double a);
FANCIER_API cl_float fcMath_sqrtf (cl_float a);
FANCIER_API cl_double fcMath_tan (cl_double a);
FANCIER_API cl_float fcMath_tanf (cl_float a);
FANCIER_API cl_double fcMath_tanh (cl_double x);
FANCIER_API cl_float fcMath_tanhf (cl_float x);
FANCIER_API cl_double fcMath_toDegrees (cl_double angrad); // OpenCL degrees()
FANCIER_API cl_float fcMath_toDegreesf (cl_float angrad);
FANCIER_API cl_double fcMath_toRadians (cl_double angdeg); // OpenCL radians()
FANCIER_API cl_float fcMath_toRadiansf (cl_float angdeg);

/**
 * @}
 */

/**
 * @name Built-in OpenCL functions.
 * @{
 */

// Common functions

#define fcMath_clamp(v, min, max) ((v) < (min)? (min) : ((v) > (max)? (max) : (v)))
#define fcMath_mix(x, y, a) ((x) + ((y) - (x)) * (a))

// OpenCL smoothstep
FANCIER_API cl_double fcMath_smoothStep (cl_double edge0, cl_double edge1, cl_double x);
FANCIER_API cl_float fcMath_smoothStepf (cl_float edge0, cl_float edge1, cl_float x);
FANCIER_API cl_double fcMath_step (cl_double edge, cl_double x);
FANCIER_API cl_float fcMath_stepf (cl_float edge, cl_float x);

// Integer functions

#define fcMath_absDiff(x, y) (fcMath_abs((x) - (y))) // OpenCL abs_diff()

FANCIER_API cl_int fcMath_addSat (cl_int x, cl_int y); // OpenCL add_sat()
FANCIER_API cl_byte fcMath_addSatc (cl_byte x, cl_byte y);
FANCIER_API cl_short fcMath_addSats (cl_short x, cl_short y);
FANCIER_API cl_long fcMath_addSatl (cl_long x, cl_long y);
FANCIER_API cl_int fcMath_clz (cl_int x);
FANCIER_API cl_byte fcMath_clzc (cl_byte x);
FANCIER_API cl_short fcMath_clzs (cl_short x);
FANCIER_API cl_long fcMath_clzl (cl_long x);
FANCIER_API cl_int fcMath_hadd (cl_int x, cl_int y);
FANCIER_API cl_byte fcMath_haddc (cl_byte x, cl_byte y);
FANCIER_API cl_short fcMath_hadds (cl_short x, cl_short y);
FANCIER_API cl_long fcMath_haddl (cl_long x, cl_long y);
FANCIER_API cl_int fcMath_mad24 (cl_int x, cl_int y, cl_int z);
FANCIER_API cl_int fcMath_madHi (cl_int a, cl_int b, cl_int c); // OpenCL mad_hi()
FANCIER_API cl_byte fcMath_madHic (cl_byte a, cl_byte b, cl_byte c);
FANCIER_API cl_short fcMath_madHis (cl_short a, cl_short b, cl_short c);
FANCIER_API cl_long fcMath_madHil (cl_long a, cl_long b, cl_long c);
FANCIER_API cl_int fcMath_madSat (cl_int a, cl_int b, cl_int c); // OpenCL mad_sat()
FANCIER_API cl_byte fcMath_madSatc (cl_byte a, cl_byte b, cl_byte c);
FANCIER_API cl_short fcMath_madSats (cl_short a, cl_short b, cl_short c);
FANCIER_API cl_long fcMath_madSatl (cl_long a, cl_long b, cl_long c);
FANCIER_API cl_int fcMath_mul24 (cl_int x, cl_int y);
FANCIER_API cl_int fcMath_mulHi (cl_int x, cl_int y);
FANCIER_API cl_byte fcMath_mulHic (cl_byte x, cl_byte y); // OpenCL mul_hi()
FANCIER_API cl_short fcMath_mulHis (cl_short x, cl_short y);
FANCIER_API cl_long fcMath_mulHil (cl_long x, cl_long y);
FANCIER_API cl_int fcMath_rhadd (cl_int x, cl_int y);
FANCIER_API cl_byte fcMath_rhaddc (cl_byte x, cl_byte y);
FANCIER_API cl_short fcMath_rhadds (cl_short x, cl_short y);
FANCIER_API cl_long fcMath_rhaddl (cl_long x, cl_long y);
FANCIER_API cl_int fcMath_rotate (cl_int v, cl_int i);
FANCIER_API cl_byte fcMath_rotatec (cl_byte v, cl_byte i);
FANCIER_API cl_short fcMath_rotates (cl_short v, cl_short i);
FANCIER_API cl_long fcMath_rotatel (cl_long v, cl_long i);
FANCIER_API cl_int fcMath_subSat (cl_int x, cl_int y); // OpenCL sub_sat()
FANCIER_API cl_byte fcMath_subSatc (cl_byte x, cl_byte y);
FANCIER_API cl_short fcMath_subSats (cl_short x, cl_short y);
FANCIER_API cl_long fcMath_subSatl (cl_long x, cl_long y);

// Math functions

#define fcMath_maxMag(x, y) (fcMath_abs(x) > fcMath_abs(y)? x : y) // OpenCL maxmag()
#define fcMath_minMag(x, y) (fcMath_abs(x) < fcMath_abs(y)? x : y) // OpenCL minmag()

FANCIER_API cl_double fcMath_acosh (cl_double x);
FANCIER_API cl_float fcMath_acoshf (cl_float x);
FANCIER_API cl_double fcMath_asinh (cl_double x);
FANCIER_API cl_float fcMath_asinhf (cl_float x);
FANCIER_API cl_double fcMath_atanh (cl_double x);
FANCIER_API cl_float fcMath_atanhf (cl_float x);
FANCIER_API cl_double fcMath_erf (cl_double x);
FANCIER_API cl_float fcMath_erff (cl_float x);
FANCIER_API cl_double fcMath_erfc (cl_double x);
FANCIER_API cl_float fcMath_erfcf (cl_float x);
FANCIER_API cl_double fcMath_exp2 (cl_double x);
FANCIER_API cl_float fcMath_exp2f (cl_float x);
FANCIER_API cl_double fcMath_exp10 (cl_double x);
FANCIER_API cl_float fcMath_exp10f (cl_float x);
FANCIER_API cl_double fcMath_fdim (cl_double x, cl_double y);
FANCIER_API cl_float fcMath_fdimf (cl_float x, cl_float y);
FANCIER_API cl_double fcMath_fma (cl_double a, cl_double b, cl_double c);
FANCIER_API cl_float fcMath_fmaf (cl_float a, cl_float b, cl_float c);
FANCIER_API cl_double fcMath_fmod (cl_double x, cl_double y);
FANCIER_API cl_float fcMath_fmodf (cl_float x, cl_float y);
FANCIER_API cl_double fcMath_fract (cl_double x);
FANCIER_API cl_float fcMath_fractf (cl_float x);
FANCIER_API cl_double fcMath_frexp (cl_double x);
FANCIER_API cl_float fcMath_frexpf (cl_float x);
FANCIER_API cl_double fcMath_ldexp (cl_double x, cl_int n);
FANCIER_API cl_float fcMath_ldexpf (cl_float x, cl_int n);
FANCIER_API cl_double fcMath_lgamma (cl_double x);
FANCIER_API cl_float fcMath_lgammaf (cl_float x);
FANCIER_API cl_double fcMath_log2 (cl_double x);
FANCIER_API cl_float fcMath_log2f (cl_float x);
FANCIER_API cl_double fcMath_logb (cl_double x);
FANCIER_API cl_float fcMath_logbf (cl_float x);
FANCIER_API cl_double fcMath_mad (cl_double a, cl_double b, cl_double c);
FANCIER_API cl_float fcMath_madf (cl_float a, cl_float b, cl_float c);
FANCIER_API cl_double fcMath_pown (cl_double x, cl_int y);
FANCIER_API cl_float fcMath_pownf (cl_float x, cl_int y);
FANCIER_API cl_double fcMath_powr (cl_double x, cl_double y);
FANCIER_API cl_float fcMath_powrf (cl_float x, cl_float y);
FANCIER_API cl_double fcMath_rootn (cl_double x, cl_int y);
FANCIER_API cl_float fcMath_rootnf (cl_float x, cl_int y);
FANCIER_API cl_double fcMath_rsqrt (cl_double x);
FANCIER_API cl_float fcMath_rsqrtf (cl_float x);
FANCIER_API cl_double fcMath_tgamma (cl_double x);
FANCIER_API cl_float fcMath_tgammaf (cl_float x);
FANCIER_API cl_double fcMath_trunc (cl_double x);
FANCIER_API cl_float fcMath_truncf (cl_float x);

// Relational functions

#define fcMath_select(a, b, c) ((c)? (b) : (a))

FANCIER_API cl_int fcMath_isFinite (cl_double x); // OpenCL isfinite()
FANCIER_API cl_int fcMath_isFinitef (cl_float x);
FANCIER_API cl_int fcMath_isInf (cl_double x); // OpenCL isinf()
FANCIER_API cl_int fcMath_isInff (cl_float x);
FANCIER_API cl_int fcMath_isNaN (cl_double x); // OpenCL isnan()
FANCIER_API cl_int fcMath_isNaNf (cl_float x);
FANCIER_API cl_int fcMath_isNormal (cl_double x); // OpenCL isnormal()
FANCIER_API cl_int fcMath_isNormalf (cl_float x);
FANCIER_API cl_int fcMath_isOrdered (cl_double x, cl_double y); // OpenCL isordered()
FANCIER_API cl_int fcMath_isOrderedf (cl_float x, cl_float y);
FANCIER_API cl_int fcMath_isUnordered (cl_double x, cl_double y); // OpenCL isunordered()
FANCIER_API cl_int fcMath_isUnorderedf (cl_float x, cl_float y);

/**
 * @}
 */

#endif // _FANCIER_MATH_H_
