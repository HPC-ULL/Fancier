<%def name="simple_elementwise(fname, ftype, vlen)">\
<%
  fnum_params = 0
  if ftype.lower() in floattypes and fname in math_float_functions:
    fnum_params = math_float_functions[fname]
  elif ftype.lower() in inttypes and fname in math_int_functions:
    fnum_params = math_int_functions[fname]
  elif fname in math_alltype_functions:
    fnum_params = math_alltype_functions[fname]

  # Parameter list of the method (Float4 a, Float4 b, Float4 c, ...)
  param_list = [f'fc{ftype.capitalize()}{vlen} {param_name(i)}' for i in range(fnum_params)]
%>\
% if fnum_params > 0:
FANCIER_API fc${ftype|c}${vlen} fc${ftype|c}${vlen}_${fname} (${', '.join(param_list)});
% endif
</%def>\
#ifndef _FANCIER_VECTOR_H_
#define _FANCIER_VECTOR_H_

#include <fancier/platform.h>


// Type definitions

% for vlen in vlens:
typedef cl_char${vlen} cl_byte${vlen};
% endfor

% for type in types:
% for vlen in vlens:
typedef cl_${type|l}${vlen} fc${type|c}${vlen};
% endfor

% endfor

// Java references

% for type in types:
% for vlen in vlens:
extern jclass fc${type|c}${vlen}_class;
extern jmethodID fc${type|c}${vlen}_constructor;
% endfor

% endfor

// Module initialization

FANCIER_API jint fcVector_initJNI(JNIEnv* env);
FANCIER_API void fcVector_releaseJNI(JNIEnv* env);

// Java interface

% for type in types:
% for vlen in vlens:
FANCIER_API fc${type|c}${vlen}* fc${type|c}${vlen}_getJava (JNIEnv* env, jobject obj);
FANCIER_API jobject fc${type|c}${vlen}_wrap (JNIEnv* env, fc${type|c}${vlen} vec);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_unwrap (JNIEnv* env, jobject vec, int* err);

% endfor
% endfor

// Native interface

% for type in types:
% for vlen in vlens:
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_create (${', '.join([f'cl_{type.lower()} {param_name(i)}' for i in range(vlen)])});

% if vlen > 2 and vlen % 2 == 0:
FANCIER_API fc${type|c}${vlen//2} fc${type|c}${vlen}_odd (fc${type|c}${vlen} a);
FANCIER_API fc${type|c}${vlen//2} fc${type|c}${vlen}_even (fc${type|c}${vlen} a);

% endif
% for othertype in types:
% if othertype != type:
FANCIER_API fc${othertype|c}${vlen} fc${type|c}${vlen}_convert${othertype|c}${vlen} (fc${type|c}${vlen} a);
% endif
% endfor
% for otherlen in vlens[:vlens.index(vlen)]:
FANCIER_API fc${type|c}${otherlen} fc${type|c}${vlen}_as${type|c}${otherlen} (fc${type|c}${vlen} a);
% endfor

% for fname in ('isEqual', 'isNotEqual', 'isGreater', 'isGreaterEqual', 'isLess', 'isLessEqual'):
FANCIER_API fcInt${vlen} fc${type|c}${vlen}_${fname} (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endfor
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_select (fc${type|c}${vlen} a, fc${type|c}${vlen} b, fcInt${vlen} c);
% if type.lower() in floattypes:
% for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
FANCIER_API fcInt${vlen} fc${type|c}${vlen}_${fname} (fc${type|c}${vlen} a);
% endfor
% for fname in ('isOrdered', 'isUnordered'):
FANCIER_API fcInt${vlen} fc${type|c}${vlen}_${fname} (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endfor
% endif

FANCIER_API cl_int fc${type|c}${vlen}_any (fc${type|c}${vlen} a);
FANCIER_API cl_int fc${type|c}${vlen}_all (fc${type|c}${vlen} a);

FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_add (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_sub (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% for fname in ['mul', 'div']:
% if type.lower() not in floattypes:
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_${fname} (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endif
FANCIER_API fcDouble${vlen} fc${type|c}${vlen}_${fname}d (fc${type|c}${vlen} a, fcDouble${vlen} b);
FANCIER_API fcFloat${vlen} fc${type|c}${vlen}_${fname}f (fc${type|c}${vlen} a, fcFloat${vlen} b);
% if type.lower() not in floattypes:
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_${fname}k (fc${type|c}${vlen} a, cl_${type|l} k);
% endif
FANCIER_API fcDouble${vlen} fc${type|c}${vlen}_${fname}kd (fc${type|c}${vlen} a, cl_double k);
FANCIER_API fcFloat${vlen} fc${type|c}${vlen}_${fname}kf (fc${type|c}${vlen} a, cl_float k);
% endfor
% if type.lower() in floattypes:
% if vlen in (3, 4):
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_cross (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endif
FANCIER_API cl_${type|l} fc${type|c}${vlen}_dot (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API cl_double fc${type|c}${vlen}_distance (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API cl_double fc${type|c}${vlen}_length (fc${type|c}${vlen} a);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_normalize (fc${type|c}${vlen} a);
% elif type.lower() in inttypes:
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_mod (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_modk (fc${type|c}${vlen} a, cl_${type|l} k);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_bitAnd (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_bitOr (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_bitXor (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_bitNot (fc${type|c}${vlen} a);
% endif

% for fname in sorted(math_alltype_functions):
${simple_elementwise(fname, type, vlen)}\
% endfor
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_clampk (fc${type|c}${vlen} v, cl_${type|l} min, cl_${type|l} max);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_maxk (fc${type|c}${vlen} x, cl_${type|l} y);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_mink (fc${type|c}${vlen} x, cl_${type|l} y);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_mixk (fc${type|c}${vlen} x, fc${type|c}${vlen} y, cl_${type|l} a);
% if type.lower() in floattypes:
% for fname in sorted(math_float_functions):
${simple_elementwise(fname, type, vlen)}\
% endfor
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_scalb (fc${type|c}${vlen} a, fcInt${vlen} n);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_ldexp (fc${type|c}${vlen} a, fcInt${vlen} n);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_pown (fc${type|c}${vlen} a, fcInt${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_rootn (fc${type|c}${vlen} a, fcInt${vlen} b);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_smoothStepk (fc${type|c}${vlen} a, fc${type|c}${vlen} b, cl_${type|l} c);
% endif
% if type.lower() in inttypes:
% for fname in sorted(math_int_functions):
${simple_elementwise(fname, type, vlen)}\
% endfor
% if type.lower() == 'int':
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_mad24 (fc${type|c}${vlen} a, fc${type|c}${vlen} b, fc${type|c}${vlen} c);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_mul24 (fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endif
% endif

% endfor
% endfor

#endif // _FANCIER_VECTOR_H_
