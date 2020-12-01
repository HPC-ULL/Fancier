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


${jni_macro('abs', types, 1)}\
${jni_macro('max', types, 2)}\
${jni_macro('min', types, 2)}\
${jni_macro('clamp', types, 3)}\
${jni_macro('mix', types, 3)}\
${jni_macro('absDiff', inttypes, 2)}\
${jni_macro('maxMag', types, 2)}\
${jni_macro('minMag', types, 2)}\
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
% for type in types:
JNIEXPORT j${type} JNICALL
Java_es_ull_pcg_hpc_fancier_Math_select__${signatures[type] * 2}I(JNIEnv* env, jclass cls, j${type} x, j${type} y, jint z) {
  return fcMath_select(x, y, z);
}

% endfor

//
// Native Interface
//


// Java Math

% for type in floattypes:
cl_${type} fcMath_${typed_fname('acos', type)}(cl_${type} a) {
  return ${typed_fname('acos', type)}(a);
}

cl_${type} fcMath_${typed_fname('asin', type)}(cl_${type} a) {
  return ${typed_fname('asin', type)}(a);
}

cl_${type} fcMath_${typed_fname('atan', type)}(cl_${type} a) {
  return ${typed_fname('atan', type)}(a);
}

cl_${type} fcMath_${typed_fname('atan2', type)}(cl_${type} y, cl_${type} x) {
  return ${typed_fname('atan2', type)}(y, x);
}

cl_${type} fcMath_${typed_fname('cbrt', type)}(cl_${type} a) {
  return ${typed_fname('cbrt', type)}(a);
}

cl_${type} fcMath_${typed_fname('ceil', type)}(cl_${type} a) {
  return ${typed_fname('ceil', type)}(a);
}

cl_${type} fcMath_${typed_fname('copySign', type)}(cl_${type} magnitude, cl_${type} sign) {
  return ${typed_fname('copysign', type)}(magnitude, sign);
}

cl_${type} fcMath_${typed_fname('cos', type)}(cl_${type} a) {
  return ${typed_fname('cos', type)}(a);
}

cl_${type} fcMath_${typed_fname('cosh', type)}(cl_${type} x) {
  return ${typed_fname('cosh', type)}(x);
}

cl_${type} fcMath_${typed_fname('exp', type)}(cl_${type} a) {
  return ${typed_fname('exp', type)}(a);
}

cl_${type} fcMath_${typed_fname('expm1', type)}(cl_${type} x) {
  return ${typed_fname('expm1', type)}(x);
}

cl_${type} fcMath_${typed_fname('floor', type)}(cl_${type} a) {
  return ${typed_fname('floor', type)}(a);
}

cl_int fcMath_${typed_fname('getExponent', type)}(cl_${type} d) {
  return ${typed_fname('ilogb', type)}(d);
}

cl_${type} fcMath_${typed_fname('hypot', type)}(cl_${type} x, cl_${type} y) {
  return ${typed_fname('hypot', type)}(x, y);
}

cl_${type} fcMath_${typed_fname('remainder', type)}(cl_${type} f1, cl_${type} f2) {
  return ${typed_fname('remainder', type)}(f1, f2);
}

cl_${type} fcMath_${typed_fname('log', type)}(cl_${type} a) {
  return ${typed_fname('log', type)}(a);
}

cl_${type} fcMath_${typed_fname('log10', type)}(cl_${type} a) {
  return ${typed_fname('log10', type)}(a);
}

cl_${type} fcMath_${typed_fname('log1p', type)}(cl_${type} a) {
  return ${typed_fname('log1p', type)}(a);
}

cl_${type} fcMath_${typed_fname('nextAfter', type)}(cl_${type} start, cl_${type} direction) {
  return ${typed_fname('nextafter', type)}(start, direction);
}

cl_${type} fcMath_${typed_fname('pow', type)}(cl_${type} a, cl_${type} b) {
  return ${typed_fname('pow', type)}(a, b);
}

cl_${type} fcMath_${typed_fname('rint', type)}(cl_${type} a) {
  return ${typed_fname('rint', type)}(a);
}

cl_${type} fcMath_${typed_fname('round', type)}(cl_${type} a) {
  return ${typed_fname('round', type)}(a);
}

cl_${type} fcMath_${typed_fname('scalb', type)}(cl_${type} a, cl_int scaleFactor) {
  return ${typed_fname('ldexp', type)}(a, scaleFactor);
}

cl_${type} fcMath_${typed_fname('signum', type)}(cl_${type} d) {
  return d == ${defaults[type]} ? 0.0${literal_suf[type]} : (d < ${defaults[type]} ? -1.0${literal_suf[type]} : 1.0${literal_suf[type]});
}

cl_${type} fcMath_${typed_fname('sin', type)}(cl_${type} a) {
  return ${typed_fname('sin', type)}(a);
}

cl_${type} fcMath_${typed_fname('sinh', type)}(cl_${type} x) {
  return ${typed_fname('sinh', type)}(x);
}

cl_${type} fcMath_${typed_fname('sqrt', type)}(cl_${type} a) {
  return ${typed_fname('sqrt', type)}(a);
}

cl_${type} fcMath_${typed_fname('tan', type)}(cl_${type} a) {
  return ${typed_fname('tan', type)}(a);
}

cl_${type} fcMath_${typed_fname('tanh', type)}(cl_${type} x) {
  return ${typed_fname('tanh', type)}(x);
}

<% suffix = '_F' if type == 'float' else ''%>\
cl_${type} fcMath_${typed_fname('toDegrees', type)}(cl_${type} angrad) {
  return angrad * (180 / CL_M_PI${suffix});
}

cl_${type} fcMath_${typed_fname('toRadians', type)}(cl_${type} angdeg) {
  return angdeg * (CL_M_PI${suffix} / 180);
}

% endfor

// OpenCL Common

% for type in floattypes:
cl_${type} fcMath_${typed_fname('smoothStep', type)}(cl_${type} edge0, cl_${type} edge1, cl_${type} x) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('step', type)}(cl_${type} edge, cl_${type} x) {
  // TODO Implement function
  return ${defaults[type]};
}

% endfor

// OpenCL Integer

% for type in inttypes:
cl_${type} fcMath_${typed_fname('addSat', type)}(cl_${type} x, cl_${type} y) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('clz', type)}(cl_${type} x) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('hadd', type)}(cl_${type} x, cl_${type} y) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('madHi', type)}(cl_${type} a, cl_${type} b, cl_${type} c) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('madSat', type)}(cl_${type} a, cl_${type} b, cl_${type} c) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('mulHi', type)}(cl_${type} x, cl_${type} y) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('rhadd', type)}(cl_${type} x, cl_${type} y) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('rotate', type)}(cl_${type} v, cl_${type} i) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('subSat', type)}(cl_${type} x, cl_${type} y) {
  // TODO Implement function
  return ${defaults[type]};
}

% endfor
cl_int fcMath_mad24(cl_int x, cl_int y, cl_int z) {
  // TODO Implement function
  return 0;
}

cl_int fcMath_mul24(cl_int x, cl_int y) {
  // TODO Implement function
  return 0;
}


// OpenCL Math

% for type in floattypes:
cl_${type} fcMath_${typed_fname('acosh', type)}(cl_${type} x) {
  return ${typed_fname('acosh', type)}(x);
}

cl_${type} fcMath_${typed_fname('asinh', type)}(cl_${type} x) {
  return ${typed_fname('asinh', type)}(x);
}

cl_${type} fcMath_${typed_fname('atanh', type)}(cl_${type} x) {
  return ${typed_fname('atanh', type)}(x);
}

cl_${type} fcMath_${typed_fname('erf', type)}(cl_${type} x) {
  return ${typed_fname('erf', type)}(x);
}

cl_${type} fcMath_${typed_fname('erfc', type)}(cl_${type} x) {
  return ${typed_fname('erfc', type)}(x);
}

cl_${type} fcMath_${typed_fname('exp2', type)}(cl_${type} x) {
  return ${typed_fname('exp2', type)}(x);
}

cl_${type} fcMath_${typed_fname('exp10', type)}(cl_${type} x) {
  return ${typed_fname('pow', type)}(10, x);
}

cl_${type} fcMath_${typed_fname('fdim', type)}(cl_${type} x, cl_${type} y) {
  return ${typed_fname('fdim', type)}(x, y);
}

cl_${type} fcMath_${typed_fname('fma', type)}(cl_${type} a, cl_${type} b, cl_${type} c) {
  return ${typed_fname('fma', type)}(a, b, c);
}

cl_${type} fcMath_${typed_fname('fmod', type)}(cl_${type} x, cl_${type} y) {
  return ${typed_fname('fmod', type)}(x, y);
}

cl_${type} fcMath_${typed_fname('fract', type)}(cl_${type} x) {
<% literal = 'CL_FLT_MAX' if type == 'float' else 'CL_DBL_MAX' %>\
  return fcMath_min(x - ${typed_fname('floor', type)}(x), ${literal});
}

cl_${type} fcMath_${typed_fname('frexp', type)}(cl_${type} x) {
  return ${typed_fname('frexp', type)}(x, NULL);
}

cl_${type} fcMath_${typed_fname('ldexp', type)}(cl_${type} x, cl_int n) {
  return ${typed_fname('ldexp', type)}(x, n);
}

cl_${type} fcMath_${typed_fname('lgamma', type)}(cl_${type} x) {
  return ${typed_fname('lgamma', type)}(x);
}

cl_${type} fcMath_${typed_fname('log2', type)}(cl_${type} x) {
  return ${typed_fname('log2', type)}(x);
}

cl_${type} fcMath_${typed_fname('logb', type)}(cl_${type} x) {
  return ${typed_fname('logb', type)}(x);
}

cl_${type} fcMath_${typed_fname('mad', type)}(cl_${type} a, cl_${type} b, cl_${type} c) {
  return ${typed_fname('fma', type)}(a, b, c);
}

cl_${type} fcMath_${typed_fname('pown', type)}(cl_${type} x, cl_int y) {
  return ${typed_fname('pow', type)}(x, y);
}

cl_${type} fcMath_${typed_fname('powr', type)}(cl_${type} x, cl_${type} y) {
  assert(isgreaterequal(x, 0.0${literal_suf[type]}));
  return ${typed_fname('pow', type)}(x, y);
}

cl_${type} fcMath_${typed_fname('rootn', type)}(cl_${type} x, cl_int y) {
  return ${typed_fname('pow', type)}(x, 1 / (cl_${type}) y);
}

cl_${type} fcMath_${typed_fname('rsqrt', type)}(cl_${type} x) {
  // TODO Implement function
  return ${defaults[type]};
}

cl_${type} fcMath_${typed_fname('tgamma', type)}(cl_${type} x) {
  return ${typed_fname('tgamma', type)}(x);
}

cl_${type} fcMath_${typed_fname('trunc', type)}(cl_${type} x) {
  return ${typed_fname('trunc', type)}(x);
}

% endfor

// OpenCL Relational

% for type in floattypes:
cl_int fcMath_${typed_fname('isFinite', type)}(cl_${type} x) {
  return isfinite(x);
}

cl_int fcMath_${typed_fname('isInf', type)}(cl_${type} x) {
  return isinf(x);
}

cl_int fcMath_${typed_fname('isNaN', type)}(cl_${type} x) {
  return isnan(x);
}

cl_int fcMath_${typed_fname('isNormal', type)}(cl_${type} x) {
  return isnormal(x);
}

cl_int fcMath_${typed_fname('isOrdered', type)}(cl_${type} x, cl_${type} y) {
  return !isunordered(x, y);
}

cl_int fcMath_${typed_fname('isUnordered', type)}(cl_${type} x, cl_${type} y) {
  return isunordered(x, y);
}

% endfor
