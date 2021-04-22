<%def name="jni_macro(fname, types, nparams)">\
% for type in types:
JNIEXPORT j${type|l} JNICALL
Java_es_ull_pcg_hpc_fancier_Math_${fname}__${signatures[type] * nparams}(JNIEnv* env, jclass cls, ${', '.join([f'j{type.lower()} {param_name(i)}' for i in range(nparams)])}) {
  return fcMath_${fname}(${', '.join([param_name(i) for i in range(nparams)])});
}

% endfor
</%def>\
<%def name="jni_relational(fname, types, nparams)">\
% for type in types:
JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_${fname}__${signatures[type] * nparams}(JNIEnv* env, jclass cls, ${', '.join([f'j{type.lower()} {param_name(i)}' for i in range(nparams)])}) {
  return fcMath_${typed_fname(fname, type)}(${', '.join([param_name(i) for i in range(nparams)])});
}

% endfor
</%def>\
<%def name="jni(fname, types, nparams)">\
% for type in types:
JNIEXPORT j${type|l} JNICALL
Java_es_ull_pcg_hpc_fancier_Math_${fname}__${signatures[type] * nparams}(JNIEnv* env, jclass cls, ${', '.join([f'j{type.lower()} {param_name(i)}' for i in range(nparams)])}) {
  return fcMath_${typed_fname(fname, type)}(${', '.join([param_name(i) for i in range(nparams)])});
}

% endfor
</%def>\
#include <fancier/math.h>

#include <assert.h>
#include <math.h>
#include <stdlib.h>


//
// Java interface
//


${jni('acos', floattypes, 1)}\
${jni('asin', floattypes, 1)}\
${jni('atan', floattypes, 1)}\
${jni('atan2', floattypes, 2)}\
${jni('cbrt', floattypes, 1)}\
${jni('ceil', floattypes, 1)}\
${jni('copySign', floattypes, 2)}\
${jni('cos', floattypes, 1)}\
${jni('cosh', floattypes, 1)}\
${jni('exp', floattypes, 1)}\
${jni('expm1', floattypes, 1)}\
${jni('floor', floattypes, 1)}\
${jni('getExponent', floattypes, 1)}\
${jni('hypot', floattypes, 2)}\
${jni('remainder', floattypes, 2)}\
${jni('log', floattypes, 1)}\
${jni('log10', floattypes, 1)}\
${jni('log1p', floattypes, 1)}\
${jni('nextAfter', floattypes, 2)}\
${jni('pow', floattypes, 2)}\
${jni('rint', floattypes, 1)}\
${jni('round', floattypes, 1)}\
${jni('signum', floattypes, 1)}\
${jni('sin', floattypes, 1)}\
${jni('sinh', floattypes, 1)}\
${jni('sqrt', floattypes, 1)}\
${jni('tan', floattypes, 1)}\
${jni('tanh', floattypes, 1)}\
${jni('toDegrees', floattypes, 1)}\
${jni('toRadians', floattypes, 1)}\

${jni('smoothStep', floattypes, 3)}\
${jni('step', floattypes, 2)}\

${jni('addSat', inttypes, 2)}\
${jni('clz', inttypes, 1)}\
${jni('hadd', inttypes, 2)}\
${jni('madHi', inttypes, 3)}\
${jni('madSat', inttypes, 3)}\
${jni('mulHi', inttypes, 2)}\
${jni('rhadd', inttypes, 2)}\
${jni('rotate', inttypes, 2)}\
${jni('subSat', inttypes, 2)}\

${jni('acosh', floattypes, 1)}\
${jni('asinh', floattypes, 1)}\
${jni('atanh', floattypes, 1)}\
${jni('erf', floattypes, 1)}\
${jni('erfc', floattypes, 1)}\
${jni('exp2', floattypes, 1)}\
${jni('exp10', floattypes, 1)}\
${jni('fdim', floattypes, 2)}\
${jni('fma', floattypes, 3)}\
${jni('fmod', floattypes, 2)}\
${jni('fract', floattypes, 1)}\
${jni('frexp', floattypes, 1)}\
${jni('lgamma', floattypes, 1)}\
${jni('log2', floattypes, 1)}\
${jni('logb', floattypes, 1)}\
${jni('mad', floattypes, 3)}\
${jni('powr', floattypes, 2)}\
${jni('rsqrt', floattypes, 1)}\
${jni('tgamma', floattypes, 1)}\
${jni('trunc', floattypes, 1)}\

${jni_relational('isFinite', floattypes, 1)}\
${jni_relational('isInf', floattypes, 1)}\
${jni_relational('isNaN', floattypes, 1)}\
${jni_relational('isNormal', floattypes, 1)}\
${jni_relational('isOrdered', floattypes, 2)}\
${jni_relational('isUnordered', floattypes, 2)}\

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mad24(JNIEnv* env, jclass cls, jint x, jint y, jint z) {
  return fcMath_mad24(x, y, z);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_Math_mul24(JNIEnv* env, jclass cls, jint x, jint y) {
  return fcMath_mul24(x, y);
}

% for fname in ['scalb', 'ldexp', 'pown', 'rootn']:
% for type in floattypes:
JNIEXPORT j${type} JNICALL
Java_es_ull_pcg_hpc_fancier_Math_${fname}__${signatures[type]}I(JNIEnv* env, jclass cls, j${type} x, jint n) {
  return fcMath_${typed_fname(fname, type)}(x, n);
}

% endfor
% endfor

//
// Native Interface
//


// Java Math

% for type in floattypes:
fc${type|c} fcMath_${typed_fname('acos', type)}(fc${type|c} a) {
  return ${typed_fname('acos', type)}(a);
}

fc${type|c} fcMath_${typed_fname('asin', type)}(fc${type|c} a) {
  return ${typed_fname('asin', type)}(a);
}

fc${type|c} fcMath_${typed_fname('atan', type)}(fc${type|c} a) {
  return ${typed_fname('atan', type)}(a);
}

fc${type|c} fcMath_${typed_fname('atan2', type)}(fc${type|c} y, fc${type|c} x) {
  return ${typed_fname('atan2', type)}(y, x);
}

fc${type|c} fcMath_${typed_fname('cbrt', type)}(fc${type|c} a) {
  return ${typed_fname('cbrt', type)}(a);
}

fc${type|c} fcMath_${typed_fname('ceil', type)}(fc${type|c} a) {
  return ${typed_fname('ceil', type)}(a);
}

fc${type|c} fcMath_${typed_fname('copySign', type)}(fc${type|c} magnitude, fc${type|c} sign) {
  return ${typed_fname('copysign', type)}(magnitude, sign);
}

fc${type|c} fcMath_${typed_fname('cos', type)}(fc${type|c} a) {
  return ${typed_fname('cos', type)}(a);
}

fc${type|c} fcMath_${typed_fname('cosh', type)}(fc${type|c} x) {
  return ${typed_fname('cosh', type)}(x);
}

fc${type|c} fcMath_${typed_fname('exp', type)}(fc${type|c} a) {
  return ${typed_fname('exp', type)}(a);
}

fc${type|c} fcMath_${typed_fname('expm1', type)}(fc${type|c} x) {
  return ${typed_fname('expm1', type)}(x);
}

fc${type|c} fcMath_${typed_fname('floor', type)}(fc${type|c} a) {
  return ${typed_fname('floor', type)}(a);
}

fcInt fcMath_${typed_fname('getExponent', type)}(fc${type|c} d) {
  return ${typed_fname('ilogb', type)}(d);
}

fc${type|c} fcMath_${typed_fname('hypot', type)}(fc${type|c} x, fc${type|c} y) {
  return ${typed_fname('hypot', type)}(x, y);
}

fc${type|c} fcMath_${typed_fname('remainder', type)}(fc${type|c} f1, fc${type|c} f2) {
  return ${typed_fname('remainder', type)}(f1, f2);
}

fc${type|c} fcMath_${typed_fname('log', type)}(fc${type|c} a) {
  return ${typed_fname('log', type)}(a);
}

fc${type|c} fcMath_${typed_fname('log10', type)}(fc${type|c} a) {
  return ${typed_fname('log10', type)}(a);
}

fc${type|c} fcMath_${typed_fname('log1p', type)}(fc${type|c} a) {
  return ${typed_fname('log1p', type)}(a);
}

fc${type|c} fcMath_${typed_fname('nextAfter', type)}(fc${type|c} start, fc${type|c} direction) {
  return ${typed_fname('nextafter', type)}(start, direction);
}

fc${type|c} fcMath_${typed_fname('pow', type)}(fc${type|c} a, fc${type|c} b) {
  return ${typed_fname('pow', type)}(a, b);
}

fc${type|c} fcMath_${typed_fname('rint', type)}(fc${type|c} a) {
  return ${typed_fname('rint', type)}(a);
}

fc${type|c} fcMath_${typed_fname('round', type)}(fc${type|c} a) {
  return ${typed_fname('round', type)}(a);
}

fc${type|c} fcMath_${typed_fname('scalb', type)}(fc${type|c} a, fcInt scaleFactor) {
  return ${typed_fname('ldexp', type)}(a, scaleFactor);
}

fc${type|c} fcMath_${typed_fname('signum', type)}(fc${type|c} d) {
  return d == ${defaults[type]} ? 0.0${literal_suf[type]} : (d < ${defaults[type]} ? -1.0${literal_suf[type]} : 1.0${literal_suf[type]});
}

fc${type|c} fcMath_${typed_fname('sin', type)}(fc${type|c} a) {
  return ${typed_fname('sin', type)}(a);
}

fc${type|c} fcMath_${typed_fname('sinh', type)}(fc${type|c} x) {
  return ${typed_fname('sinh', type)}(x);
}

fc${type|c} fcMath_${typed_fname('sqrt', type)}(fc${type|c} a) {
  return ${typed_fname('sqrt', type)}(a);
}

fc${type|c} fcMath_${typed_fname('tan', type)}(fc${type|c} a) {
  return ${typed_fname('tan', type)}(a);
}

fc${type|c} fcMath_${typed_fname('tanh', type)}(fc${type|c} x) {
  return ${typed_fname('tanh', type)}(x);
}

<% suffix = '_F' if type.lower() == 'float' else ''%>\
fc${type|c} fcMath_${typed_fname('toDegrees', type)}(fc${type|c} angrad) {
  return angrad * (180 / CL_M_PI${suffix});
}

fc${type|c} fcMath_${typed_fname('toRadians', type)}(fc${type|c} angdeg) {
  return angdeg * (CL_M_PI${suffix} / 180);
}

% endfor

// OpenCL Common

% for type in floattypes:
fc${type|c} fcMath_${typed_fname('smoothStep', type)}(fc${type|c} edge0, fc${type|c} edge1, fc${type|c} x) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('step', type)}(fc${type|c} edge, fc${type|c} x) {
  // TODO Implement function
  return ${defaults[type]};
}

% endfor

// OpenCL Integer

% for type in inttypes:
fc${type|c} fcMath_${typed_fname('addSat', type)}(fc${type|c} x, fc${type|c} y) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('clz', type)}(fc${type|c} x) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('hadd', type)}(fc${type|c} x, fc${type|c} y) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('madHi', type)}(fc${type|c} a, fc${type|c} b, fc${type|c} c) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('madSat', type)}(fc${type|c} a, fc${type|c} b, fc${type|c} c) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('mulHi', type)}(fc${type|c} x, fc${type|c} y) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('rhadd', type)}(fc${type|c} x, fc${type|c} y) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('rotate', type)}(fc${type|c} v, fc${type|c} i) {
  // TODO Implement function
  return ${defaults[type]};
}

fc${type|c} fcMath_${typed_fname('subSat', type)}(fc${type|c} x, fc${type|c} y) {
  // TODO Implement function
  return ${defaults[type]};
}

% endfor
fcInt fcMath_mad24(fcInt x, fcInt y, fcInt z) {
  // TODO Implement function
  return 0;
}

fcInt fcMath_mul24(fcInt x, fcInt y) {
  // TODO Implement function
  return 0;
}


// OpenCL Math

% for type in floattypes:
fc${type|c} fcMath_${typed_fname('acosh', type)}(fc${type|c} x) {
  return ${typed_fname('acosh', type)}(x);
}

fc${type|c} fcMath_${typed_fname('asinh', type)}(fc${type|c} x) {
  return ${typed_fname('asinh', type)}(x);
}

fc${type|c} fcMath_${typed_fname('atanh', type)}(fc${type|c} x) {
  return ${typed_fname('atanh', type)}(x);
}

fc${type|c} fcMath_${typed_fname('erf', type)}(fc${type|c} x) {
  return ${typed_fname('erf', type)}(x);
}

fc${type|c} fcMath_${typed_fname('erfc', type)}(fc${type|c} x) {
  return ${typed_fname('erfc', type)}(x);
}

fc${type|c} fcMath_${typed_fname('exp2', type)}(fc${type|c} x) {
  return ${typed_fname('exp2', type)}(x);
}

fc${type|c} fcMath_${typed_fname('exp10', type)}(fc${type|c} x) {
  return ${typed_fname('pow', type)}(10, x);
}

fc${type|c} fcMath_${typed_fname('fdim', type)}(fc${type|c} x, fc${type|c} y) {
  return ${typed_fname('fdim', type)}(x, y);
}

fc${type|c} fcMath_${typed_fname('fma', type)}(fc${type|c} a, fc${type|c} b, fc${type|c} c) {
  return ${typed_fname('fma', type)}(a, b, c);
}

fc${type|c} fcMath_${typed_fname('fmod', type)}(fc${type|c} x, fc${type|c} y) {
  return ${typed_fname('fmod', type)}(x, y);
}

fc${type|c} fcMath_${typed_fname('fract', type)}(fc${type|c} x) {
<% literal = 'CL_FLT_MAX' if type.lower() == 'float' else 'CL_DBL_MAX' %>\
  return fcMath_min(x - ${typed_fname('floor', type)}(x), ${literal});
}

fc${type|c} fcMath_${typed_fname('frexp', type)}(fc${type|c} x) {
  return ${typed_fname('frexp', type)}(x, NULL);
}

fc${type|c} fcMath_${typed_fname('ldexp', type)}(fc${type|c} x, fcInt n) {
  return ${typed_fname('ldexp', type)}(x, n);
}

fc${type|c} fcMath_${typed_fname('lgamma', type)}(fc${type|c} x) {
  return ${typed_fname('lgamma', type)}(x);
}

fc${type|c} fcMath_${typed_fname('log2', type)}(fc${type|c} x) {
  return ${typed_fname('log2', type)}(x);
}

fc${type|c} fcMath_${typed_fname('logb', type)}(fc${type|c} x) {
  return ${typed_fname('logb', type)}(x);
}

fc${type|c} fcMath_${typed_fname('mad', type)}(fc${type|c} a, fc${type|c} b, fc${type|c} c) {
  return ${typed_fname('fma', type)}(a, b, c);
}

fc${type|c} fcMath_${typed_fname('pown', type)}(fc${type|c} x, fcInt y) {
  return ${typed_fname('pow', type)}(x, y);
}

fc${type|c} fcMath_${typed_fname('powr', type)}(fc${type|c} x, fc${type|c} y) {
  assert(isgreaterequal(x, 0.0${literal_suf[type]}));
  return ${typed_fname('pow', type)}(x, y);
}

fc${type|c} fcMath_${typed_fname('rootn', type)}(fc${type|c} x, fcInt y) {
  return ${typed_fname('pow', type)}(x, 1 / (fc${type|c}) y);
}

fc${type|c} fcMath_${typed_fname('rsqrt', type)}(fc${type|c} x) {
  return fcMath_${typed_fname('pow', type)}(x, -0.5);
}

fc${type|c} fcMath_${typed_fname('tgamma', type)}(fc${type|c} x) {
  return ${typed_fname('tgamma', type)}(x);
}

fc${type|c} fcMath_${typed_fname('trunc', type)}(fc${type|c} x) {
  return ${typed_fname('trunc', type)}(x);
}

% endfor

// OpenCL Relational

% for type in floattypes:
fcInt fcMath_${typed_fname('isFinite', type)}(fc${type|c} x) {
  return isfinite(x);
}

fcInt fcMath_${typed_fname('isInf', type)}(fc${type|c} x) {
  return isinf(x);
}

fcInt fcMath_${typed_fname('isNaN', type)}(fc${type|c} x) {
  return isnan(x);
}

fcInt fcMath_${typed_fname('isNormal', type)}(fc${type|c} x) {
  return isnormal(x);
}

fcInt fcMath_${typed_fname('isOrdered', type)}(fc${type|c} x, fc${type|c} y) {
  return !isunordered(x, y);
}

fcInt fcMath_${typed_fname('isUnordered', type)}(fc${type|c} x, fc${type|c} y) {
  return isunordered(x, y);
}

% endfor
