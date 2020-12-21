<%!
  vfields = vfields[:4] + [f's{i}' for i in range(4, vlens[-1])]
  macros = set(('abs', 'max', 'min', 'clamp', 'mix', 'absDiff', 'maxMag', 'minMag', 'select'))
%>\
<%def name="simple_elementwise(fname, ftype, vlen)">\
<%
  fnum_params = 0
  if ftype.lower() in floattypes and fname in math_float_functions:
    fnum_params = math_float_functions[fname]
    math_fname = typed_float_fname(fname, ftype)
  elif ftype.lower() in inttypes and fname in math_int_functions:
    fnum_params = math_int_functions[fname]
    math_fname = typed_int_fname(fname, ftype)
  elif fname in math_alltype_functions:
    fnum_params = math_alltype_functions[fname]
    math_fname = fname

  if fname in macros:
    math_fname = fname

  # Parameter list of the Java method (fcFloat4 a, fcFloat4 b, fcFloat4 c, ...)
  param_list = [f'fc{ftype.capitalize()}{vlen} {param_name(i)}' for i in range(fnum_params)]

  # Argument list of the constructor (fcMath_fname(a.x, b.x, c.x, ...), fcMath_fname(a.y, b.y, c.y, ...), ...);
  native_calls = [f'fcMath_{math_fname}(' + (', '.join([f'{param_name(i)}.{field}' for i in range(fnum_params)])) + ')' for field in vfields[:vlen]]
%>\
% if fnum_params > 0:
fc${ftype|c}${vlen} fc${ftype|c}${vlen}_${fname}(${', '.join(param_list)}) {
  return fc${ftype|c}${vlen}_create${'1' * vlen}(${', '.join(native_calls)});
}
% endif
</%def>\
#include <fancier/vector.h>

#include <fancier/exception.h>
#include <fancier/math.h>

#include <fancier/internal/snippets.inc>


#define INIT_FIELD(_env, _result, _cls, _field, _signature, _func, _ret)\
  if (!_result) {\
    _result = FC_JNI_CALL(_env, GetFieldID, _cls, #_field, _signature);\
    if (!_result || FC_JNI_CALL(_env, ExceptionCheck)) {\
      fcException_throwWrappedNative(_env, __FILE__, __LINE__, _func, FC_JNI_CALL(_env, ExceptionOccurred));\
      *err = _ret;\
      return result;\
    }\
  } else ((void) 0)


//
// Global Java References
//

% for type in types:
% for vlen in vlens:
jclass fc${type|c}${vlen}_class = NULL;
jmethodID fc${type|c}${vlen}_constructor = NULL;
% endfor
% endfor

//
// Global Java Initialization / Destruction
//

jint fcVector_initJNI(JNIEnv* env) {
% for type in types:
% for vlen in vlens:
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/${type|c}${vlen}", fc${type|c}${vlen}_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fc${type|c}${vlen}_constructor, fc${type|c}${vlen}_class, "${f'{signatures[type.lower()]}' * vlen}",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
% endfor

% endfor
  return FC_EXCEPTION_SUCCESS;
}

void fcVector_releaseJNI(JNIEnv* env) {
% for type in types:
% for vlen in vlens:
  FC_FREE_CLASS_REF(env, fc${type|c}${vlen}_class);
  fc${type|c}${vlen}_constructor = NULL;
% endfor

% endfor
}

//
// Java Interface
//

% for type in types:
% for vlen in vlens:
//
// fc${type|c}${vlen}
//

jobject fc${type|c}${vlen}_wrap(JNIEnv* env, fc${type|c}${vlen} vec) {
  return FC_JNI_CALL(env, NewObject, fc${type|c}${vlen}_class, fc${type|c}${vlen}_constructor, ${', '.join([f'vec.{field}' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fc${type|c}${vlen} result = {.s = {${defaults[type]}}};

% for field in vfields[:min(vlen, 4)]:
  static jfieldID field_${field} = NULL;
  INIT_FIELD(env, field_${field}, fc${type|c}${vlen}_class, ${field}, "${signatures[type.lower()]}", "fc${type|c}${vlen}_unwrap", FC_EXCEPTION_INVALID_STATE);
  j${type|l} ${field} = FC_JNI_CALL(env, Get${type|c}Field, vec, field_${field});

% endfor
% if vlen > 4:
  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fc${type|c}${vlen}_class, s, "[${signatures[type.lower()]}", "fc${type|c}${vlen}_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  j${type|l}Array* s_arr = (j${type|l}Array*) &s_obj;
  j${type|l}* s = FC_JNI_CALL(env, Get${type|c}ArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

% endif
% for field in vfields[:min(vlen, 4)]:
  result.${field} = ${field};
% endfor
% for index in range(4, vlen):
  result.${vfields[index]} = s[${index-4}];
% endfor

% if vlen > 4:
  FC_JNI_CALL(env, Release${type|c}ArrayElements, *s_arr, s, JNI_ABORT);
% endif
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

% endfor
% endfor

//
// Native Interface
//

% for type in types:
% for vlen in vlens:
//
// fc${type|c}${vlen}
//

fc${type|c}${vlen} fc${type|c}${vlen}_create1(cl_${type|l} v) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join('v' * vlen)});
}

void fc${type|c}${vlen}_set1(fc${type|c}${vlen}* self, cl_${type|l} v) {
  fc${type|c}${vlen}_set${'1' * vlen}(self, ${', '.join('v' * vlen)});
}

fc${type|c}${vlen} fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'cl_{type.lower()} {field}' for field in vfields[:vlen]])}) {
  fc${type|c}${vlen} result;
  fc${type|c}${vlen}_set${'1' * vlen}(&result, ${', '.join([f'{field}' for field in vfields[:vlen]])});
  return result;
}

void fc${type|c}${vlen}_set${'1' * vlen}(fc${type|c}${vlen}* self, ${', '.join([f'cl_{type.lower()} {field}' for field in vfields[:vlen]])}) {
  % for field in vfields[:vlen]:
  self->${field} = ${field};
  % endfor
}

% for param_set in sorted(set(fill_params(vlen))):
% if len(param_set) != vlen:
<%
  params, args = make_delegate_constructor(param_set, type, vfields, True)
  ctor_sig = ''.join([str(param_len) for param_len in param_set])
%>\
fc${type|c}${vlen} fc${type|c}${vlen}_create${ctor_sig}(${', '.join(params)}) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(args)});
}

void fc${type|c}${vlen}_set${ctor_sig}(fc${type|c}${vlen}* self, ${', '.join(params)}) {
  fc${type|c}${vlen}_set${'1' * vlen}(self, ${', '.join(args)});
}

% endif
% endfor
% if vlen > 2 and vlen % 2 == 0:
fc${type|c}${vlen//2} fc${type|c}${vlen}_odd(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen//2}_create${'1' * (vlen//2)}(${', '.join([f'a.{vfields[i]}' for i in range(1, vlen, 2)])});
}

fc${type|c}${vlen//2} fc${type|c}${vlen}_even(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen//2}_create${'1' * (vlen//2)}(${', '.join([f'a.{vfields[i]}' for i in range(0, vlen, 2)])});
}

% endif
% for newtype in types:
% if newtype != type:
fc${newtype|c}${vlen} fc${type|c}${vlen}_convert${newtype|c}${vlen}(fc${type|c}${vlen} a) {
  return fc${newtype|c}${vlen}_create${'1' * vlen}(${', '.join([f'(cl_{newtype.lower()}) a.{field}' for field in vfields[:vlen]])});
}

% endif
% endfor
% for newlen in vlens[:vlens.index(vlen)]:
fc${type|c}${newlen} fc${type|c}${vlen}_as${type|c}${newlen}(fc${type|c}${vlen} a) {
  return fc${type|c}${newlen}_create${'1' * newlen}(${', '.join([f'a.{field}' for field in vfields[:newlen]])});
}

% endfor
% for fname, op in zip(['isEqual', 'isNotEqual', 'isGreater', 'isGreaterEqual', 'isLess', 'isLessEqual'], ['==', '!=', '>', '>=', '<', '<=']):
fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join([f'a.{field} {op} b.{field}? 1 : 0' for field in vfields[:vlen]])});
}

% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_select(fc${type|c}${vlen} a, fc${type|c}${vlen} b, fcInt${vlen} c) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(f'fcMath_select(a.{field}, b.{field}, c.{field})' for field in vfields[:vlen])});
}

% if type.lower() in floattypes:
% for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join(f'fcMath_{typed_float_fname(fname, type)}(a.{field})' for field in vfields[:vlen])});
}

% endfor
% for fname in ('isOrdered', 'isUnordered'):
fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join(f'fcMath_{typed_float_fname(fname, type)}(a.{field}, b.{field})' for field in vfields[:vlen])});
}

% endfor
% endif
cl_int fc${type|c}${vlen}_any(fc${type|c}${vlen} a) {
  return ${' || '.join([f'a.{field} != {defaults[type.lower()]}' for field in vfields[:vlen]])};
}

cl_int fc${type|c}${vlen}_all(fc${type|c}${vlen} a) {
  return !(${' || '.join([f'a.{field} == {defaults[type.lower()]}' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_neg(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'-a.{field}' for field in vfields[:vlen]])});
}

% for fname, op in zip(['add', 'sub'], ['+', '-']):
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{field} {op} b.{field}' for field in vfields[:vlen]])});
}

% endfor
% for fname, op in zip(['mul', 'div'], ['*', '/']):
% if type.lower() not in floattypes:
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{field} {op} b.{field}' for field in vfields[:vlen]])});
}

% endif
fcDouble${vlen} fc${type|c}${vlen}_${fname}d(fc${type|c}${vlen} a, fcDouble${vlen} b) {
  return fcDouble${vlen}_create${'1' * vlen}(${', '.join([f'(cl_double)(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
}

fcFloat${vlen} fc${type|c}${vlen}_${fname}f(fc${type|c}${vlen} a, fcFloat${vlen} b) {
  return fcFloat${vlen}_create${'1' * vlen}(${', '.join([f'(cl_float)(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
}

% if type.lower() not in floattypes:
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}k(fc${type|c}${vlen} a, cl_${type|l} k) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{field} {op} k' for field in vfields[:vlen]])});
}

% endif
fcDouble${vlen} fc${type|c}${vlen}_${fname}kd(fc${type|c}${vlen} a, cl_double k) {
  return fcDouble${vlen}_create${'1' * vlen}(${', '.join([f'(cl_double)(a.{field} {op} k)' for field in vfields[:vlen]])});
}

fcFloat${vlen} fc${type|c}${vlen}_${fname}kf(fc${type|c}${vlen} a, cl_float k) {
  return fcFloat${vlen}_create${'1' * vlen}(${', '.join([f'(cl_float)(a.{field} {op} k)' for field in vfields[:vlen]])});
}

% endfor
% if type.lower() in floattypes:
% if vlen in (3, 4):
fc${type|c}${vlen} fc${type|c}${vlen}_cross(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  cl_${type|l} resX = a.y * b.z - a.z * b.y;
  cl_${type|l} resY = a.z * b.x - a.x * b.z;
  cl_${type|l} resZ = a.x * b.y - a.y * b.x;
  % if vlen == 3:
  return fc${type|c}${vlen}_create${'1' * vlen}(resX, resY, resZ);
  % else:
  return fc${type|c}${vlen}_create${'1' * vlen}(resX, resY, resZ, ${defaults[type.lower()]});
  % endif
}

% endif
cl_${type|l} fc${type|c}${vlen}_dot(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return ${' + '.join([f'a.{field} * b.{field}' for field in vfields[:vlen]])};
}

cl_double fc${type|c}${vlen}_distance(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_length(fc${type|c}${vlen}_sub(a, b));
}

cl_double fc${type|c}${vlen}_length(fc${type|c}${vlen} a) {
  return fcMath_sqrt(${' + '.join([f'a.{field} * a.{field}' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_normalize(fc${type|c}${vlen} a) {
  cl_double len = fc${type|c}${vlen}_length(a);
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'(cl_{type.lower()})(a.{field} / len)' for field in vfields[:vlen]])});
}

% elif type.lower() in inttypes:
fc${type|c}${vlen} fc${type|c}${vlen}_mod(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(f'a.{field} % b.{field}' for field in vfields[:vlen])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_modk(fc${type|c}${vlen} a, cl_${type|l} k) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(f'a.{field} % k' for field in vfields[:vlen])});
}

% for fname, op in zip(['bitAnd', 'bitOr', 'bitXor'], ['&', '|', '^']):
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{field} {op} b.{field}' for field in vfields[:vlen]])});
}

% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_bitNot(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'~a.{field}' for field in vfields[:vlen]])});
}

% endif
% for fname in sorted(math_alltype_functions):
${simple_elementwise(fname, type, vlen)}
% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_clampk(fc${type|c}${vlen} v, cl_${type|l} min, cl_${type|l} max) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_clamp(v.{field}, min, max)' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_maxk(fc${type|c}${vlen} x, cl_${type|l} y) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_max(x.{field}, y)' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_mink(fc${type|c}${vlen} x, cl_${type|l} y) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_min(x.{field}, y)' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_mixk(fc${type|c}${vlen} x, fc${type|c}${vlen} y, cl_${type|l} a) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_mix(x.{field}, y.{field}, a)' for field in vfields[:vlen]])});
}

% if type.lower() in floattypes:
% for fname in sorted(math_float_functions):
${simple_elementwise(fname, type, vlen)}
% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_scalb(fc${type|c}${vlen} a, fcInt${vlen} n) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("scalb", type)}(a.{field}, n.{field})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_ldexp(fc${type|c}${vlen} a, fcInt${vlen} n) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("ldexp", type)}(a.{field}, n.{field})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_pown(fc${type|c}${vlen} a, fcInt${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("pown", type)}(a.{field}, b.{field})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_rootn(fc${type|c}${vlen} a, fcInt${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("rootn", type)}(a.{field}, b.{field})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_smoothStepk(fc${type|c}${vlen} a, fc${type|c}${vlen} b, cl_${type|l} c) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("smoothStep", type)}(a.{field}, b.{field}, c)' for field in vfields[:vlen]])});
}

% endif
% if type.lower() in inttypes:
% for fname in sorted(math_int_functions):
${simple_elementwise(fname, type, vlen)}
% endfor
% if type.lower() == 'int':
fcInt${vlen} fcInt${vlen}_mad24(fcInt${vlen} a, fcInt${vlen} b, fcInt${vlen} c) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join([f"fcMath_mad24(a.{field}, b.{field}, c.{field})" for field in vfields[:vlen]])});
}

fcInt${vlen} fcInt${vlen}_mul24(fcInt${vlen} a, fcInt${vlen} b) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join([f"fcMath_mul24(a.{field}, b.{field})" for field in vfields[:vlen]])});
}

% endif
% endif

% endfor
% endfor
