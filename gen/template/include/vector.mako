## Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
## Copyright (C) 2021 Universidad de La Laguna.
##
## Fancier is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## Fancier is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
##
<%!
  vfields = vfields[:4] + [f's{i}' for i in range(4, vlens[-1])]
  macros = set(('abs', 'max', 'min', 'clamp', 'mix', 'absDiff', 'maxMag', 'minMag', 'select'))
%>\
<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
<%def name="simple_ew_function(fname, ftype, vlen, header=True)">\
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

  # Parameter list of the method (fcFloat4 a, fcFloat4 b, fcFloat4 c, ...)
  param_list = [f'fc{ftype.capitalize()}{vlen} {param_name(i)}' for i in range(fnum_params)]

  # Argument list of the method (fcMath_fname(a.x, b.x, c.x, ...), fcMath_fname(a.y, b.y, c.y, ...), ...);
  native_calls = [f'fcMath_{math_fname}(' + (', '.join([f'{param_name(i)}.{var_to_cpp_field(field)}' for i in range(fnum_params)])) + ')' for field in vfields[:vlen]]
%>\
% if fnum_params > 0:
% if header:
FANCIER_STATIC fc${ftype|c}${vlen} fc${ftype|c}${vlen}_${fname}(${', '.join(param_list)});
% else:
fc${ftype|c}${vlen} fc${ftype|c}${vlen}_${fname}(${', '.join(param_list)}) {
  return fc${ftype|c}${vlen}_create${'1' * vlen}(${', '.join(native_calls)});
}
% endif
% endif
</%def>\
#ifndef _FANCIER_VECTOR_H_
#define _FANCIER_VECTOR_H_

#include <fancier/platform.h>
#include <fancier/math.h>


// Type definitions

% for vlen in vlens:
typedef cl_char${vlen} fcByte${vlen};
% endfor

% for type in types:
% if type.lower() != 'byte':
% for vlen in vlens:
typedef cl_${type|l}${vlen} fc${type|c}${vlen};
% endfor

% endif
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
FANCIER_API fc${type|c}${vlen}* fc${type|c}${vlen}_getJava(JNIEnv* env, jobject obj);
FANCIER_API jobject fc${type|c}${vlen}_wrap(JNIEnv* env, fc${type|c}${vlen} vec);
FANCIER_API fc${type|c}${vlen} fc${type|c}${vlen}_unwrap(JNIEnv* env, jobject vec, fcError* err);

% endfor
% endfor

// Native interface

% for type in types:
% for vlen in vlens:
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_create1(fc${type|c} v);
FANCIER_STATIC void fc${type|c}${vlen}_set1(fc${type|c}${vlen}* self, fc${type|c} v);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fc{type.capitalize()} {param_name(i)}' for i in range(vlen)])});
FANCIER_STATIC void fc${type|c}${vlen}_set${'1' * vlen}(fc${type|c}${vlen}* self, ${', '.join([f'fc{type.capitalize()} {param_name(i)}' for i in range(vlen)])});
% for param_set in sorted(set(fill_params(vlen))):
% if len(param_set) != vlen:
<%
  params, args = make_delegate_constructor(param_set, type, vfields, True)
  ctor_sig = ''.join([str(param_len) for param_len in param_set])
%>\
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_create${ctor_sig}(${', '.join(params)});
FANCIER_STATIC void fc${type|c}${vlen}_set${ctor_sig}(fc${type|c}${vlen}* self, ${', '.join(params)});
% endif
% endfor

% if vlen > 2 and vlen % 2 == 0:
FANCIER_STATIC fc${type|c}${vlen//2} fc${type|c}${vlen}_odd(fc${type|c}${vlen} a);
FANCIER_STATIC fc${type|c}${vlen//2} fc${type|c}${vlen}_even(fc${type|c}${vlen} a);

% endif
% for othertype in types:
% if othertype.lower() != type.lower():
FANCIER_STATIC fc${othertype|c}${vlen} fc${type|c}${vlen}_convert${othertype|c}${vlen}(fc${type|c}${vlen} a);
% endif
% endfor
% for otherlen in vlens[:vlens.index(vlen)]:
FANCIER_STATIC fc${type|c}${otherlen} fc${type|c}${vlen}_as${type|c}${otherlen}(fc${type|c}${vlen} a);
% endfor

% for fname in ('isEqual', 'isNotEqual', 'isGreater', 'isGreaterEqual', 'isLess', 'isLessEqual'):
FANCIER_STATIC fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endfor
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_select(fc${type|c}${vlen} a, fc${type|c}${vlen} b, fcInt${vlen} c);
% if type.lower() in floattypes:
% for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
FANCIER_STATIC fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a);
% endfor
% for fname in ('isOrdered', 'isUnordered'):
FANCIER_STATIC fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endfor
% endif

FANCIER_STATIC fcInt fc${type|c}${vlen}_any(fc${type|c}${vlen} a);
FANCIER_STATIC fcInt fc${type|c}${vlen}_all(fc${type|c}${vlen} a);

FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_neg(fc${type|c}${vlen} a);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_add(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_sub(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% for fname in ['mul', 'div']:
% if type.lower() not in floattypes:
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endif
FANCIER_STATIC fcDouble${vlen} fc${type|c}${vlen}_${fname}d(fc${type|c}${vlen} a, fcDouble${vlen} b);
FANCIER_STATIC fcFloat${vlen} fc${type|c}${vlen}_${fname}f(fc${type|c}${vlen} a, fcFloat${vlen} b);
% if type.lower() not in floattypes:
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_${fname}k(fc${type|c}${vlen} a, fc${type|c} k);
% endif
FANCIER_STATIC fcDouble${vlen} fc${type|c}${vlen}_${fname}kd(fc${type|c}${vlen} a, fcDouble k);
FANCIER_STATIC fcFloat${vlen} fc${type|c}${vlen}_${fname}kf(fc${type|c}${vlen} a, fcFloat k);
% endfor
% if type.lower() in floattypes:
% if vlen in (3, 4):
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_cross(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endif
FANCIER_STATIC fc${type|c} fc${type|c}${vlen}_dot(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fcDouble fc${type|c}${vlen}_distance(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fcDouble fc${type|c}${vlen}_length(fc${type|c}${vlen} a);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_normalize(fc${type|c}${vlen} a);
% elif type.lower() in inttypes:
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_mod(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_modk(fc${type|c}${vlen} a, fc${type|c} k);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_bitAnd(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_bitOr(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_bitXor(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_bitNot(fc${type|c}${vlen} a);
% endif

% for fname in sorted(math_alltype_functions):
${simple_ew_function(fname, type, vlen)}\
% endfor
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_clampk(fc${type|c}${vlen} v, fc${type|c} min, fc${type|c} max);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_maxk(fc${type|c}${vlen} x, fc${type|c} y);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_mink(fc${type|c}${vlen} x, fc${type|c} y);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_mixk(fc${type|c}${vlen} x, fc${type|c}${vlen} y, fc${type|c} a);
% if type.lower() in floattypes:
% for fname in sorted(math_float_functions):
${simple_ew_function(fname, type, vlen)}\
% endfor
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_scalb(fc${type|c}${vlen} a, fcInt${vlen} n);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_ldexp(fc${type|c}${vlen} a, fcInt${vlen} n);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_pown(fc${type|c}${vlen} a, fcInt${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_rootn(fc${type|c}${vlen} a, fcInt${vlen} b);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_smoothStepk(fc${type|c}${vlen} a, fc${type|c}${vlen} b, fc${type|c} c);
% endif
% if type.lower() in inttypes:
% for fname in sorted(math_int_functions):
${simple_ew_function(fname, type, vlen)}\
% endfor
% if type.lower() == 'int':
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_mad24(fc${type|c}${vlen} a, fc${type|c}${vlen} b, fc${type|c}${vlen} c);
FANCIER_STATIC fc${type|c}${vlen} fc${type|c}${vlen}_mul24(fc${type|c}${vlen} a, fc${type|c}${vlen} b);
% endif
% endif

% endfor
% endfor

// Native implementations

% for type in types:
% for vlen in vlens:
//
// fc${type|c}${vlen}
//

fc${type|c}${vlen} fc${type|c}${vlen}_create1(fc${type|c} v) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join('v' * vlen)});
}

void fc${type|c}${vlen}_set1(fc${type|c}${vlen}* self, fc${type|c} v) {
  fc${type|c}${vlen}_set${'1' * vlen}(self, ${', '.join('v' * vlen)});
}

fc${type|c}${vlen} fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fc{type.capitalize()} {field}' for field in vfields[:vlen]])}) {
  fc${type|c}${vlen} result = {{${', '.join([f'{field}' for field in vfields[:vlen]])}}};
  return result;
}

void fc${type|c}${vlen}_set${'1' * vlen}(fc${type|c}${vlen}* self, ${', '.join([f'fc{type.capitalize()} {field}' for field in vfields[:vlen]])}) {
  % for field in vfields[:vlen]:
  self->${var_to_cpp_field(field)} = ${field};
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
  return fc${type|c}${vlen//2}_create${'1' * (vlen//2)}(${', '.join([f'a.{var_to_cpp_field(vfields[i])}' for i in range(1, vlen, 2)])});
}

fc${type|c}${vlen//2} fc${type|c}${vlen}_even(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen//2}_create${'1' * (vlen//2)}(${', '.join([f'a.{var_to_cpp_field(vfields[i])}' for i in range(0, vlen, 2)])});
}

% endif
<% cast_mask = ' & 0xff' if type.lower() == 'byte' else '' %>\
% for newtype in types:
% if newtype.lower() != type.lower():
fc${newtype|c}${vlen} fc${type|c}${vlen}_convert${newtype|c}${vlen}(fc${type|c}${vlen} a) {
  return fc${newtype|c}${vlen}_create${'1' * vlen}(${', '.join([f'(fc{newtype.capitalize()})(a.{var_to_cpp_field(field)}{cast_mask})' for field in vfields[:vlen]])});
}

% endif
% endfor
% for newlen in vlens[:vlens.index(vlen)]:
fc${type|c}${newlen} fc${type|c}${vlen}_as${type|c}${newlen}(fc${type|c}${vlen} a) {
  return fc${type|c}${newlen}_create${'1' * newlen}(${', '.join([f'a.{var_to_cpp_field(field)}' for field in vfields[:newlen]])});
}

% endfor
% for fname, op in zip(['isEqual', 'isNotEqual', 'isGreater', 'isGreaterEqual', 'isLess', 'isLessEqual'], ['==', '!=', '>', '>=', '<', '<=']):
fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join([f'a.{var_to_cpp_field(field)} {op} b.{var_to_cpp_field(field)}? 1 : 0' for field in vfields[:vlen]])});
}

% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_select(fc${type|c}${vlen} a, fc${type|c}${vlen} b, fcInt${vlen} c) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(f'fcMath_select(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)}, c.{var_to_cpp_field(field)})' for field in vfields[:vlen])});
}

% if type.lower() in floattypes:
% for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join(f'fcMath_{typed_float_fname(fname, type)}(a.{var_to_cpp_field(field)})' for field in vfields[:vlen])});
}

% endfor
% for fname in ('isOrdered', 'isUnordered'):
fcInt${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join(f'fcMath_{typed_float_fname(fname, type)}(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)})' for field in vfields[:vlen])});
}

% endfor
% endif
fcInt fc${type|c}${vlen}_any(fc${type|c}${vlen} a) {
  return ${' || '.join([f'a.{var_to_cpp_field(field)} != {defaults[type.lower()]}' for field in vfields[:vlen]])};
}

fcInt fc${type|c}${vlen}_all(fc${type|c}${vlen} a) {
  return !(${' || '.join([f'a.{var_to_cpp_field(field)} == {defaults[type.lower()]}' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_neg(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'-a.{var_to_cpp_field(field)}' for field in vfields[:vlen]])});
}

% for fname, op in zip(['add', 'sub'], ['+', '-']):
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{var_to_cpp_field(field)} {op} b.{var_to_cpp_field(field)}' for field in vfields[:vlen]])});
}

% endfor
% for fname, op in zip(['mul', 'div'], ['*', '/']):
% if type.lower() not in floattypes:
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{var_to_cpp_field(field)} {op} b.{var_to_cpp_field(field)}' for field in vfields[:vlen]])});
}

% endif
fcDouble${vlen} fc${type|c}${vlen}_${fname}d(fc${type|c}${vlen} a, fcDouble${vlen} b) {
  return fcDouble${vlen}_create${'1' * vlen}(${', '.join([f'(fcDouble)(a.{var_to_cpp_field(field)} {op} b.{var_to_cpp_field(field)})' for field in vfields[:vlen]])});
}

fcFloat${vlen} fc${type|c}${vlen}_${fname}f(fc${type|c}${vlen} a, fcFloat${vlen} b) {
  return fcFloat${vlen}_create${'1' * vlen}(${', '.join([f'(fcFloat)(a.{var_to_cpp_field(field)} {op} b.{var_to_cpp_field(field)})' for field in vfields[:vlen]])});
}

% if type.lower() not in floattypes:
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}k(fc${type|c}${vlen} a, fc${type|c} k) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{var_to_cpp_field(field)} {op} k' for field in vfields[:vlen]])});
}

% endif
fcDouble${vlen} fc${type|c}${vlen}_${fname}kd(fc${type|c}${vlen} a, fcDouble k) {
  return fcDouble${vlen}_create${'1' * vlen}(${', '.join([f'(fcDouble)(a.{var_to_cpp_field(field)} {op} k)' for field in vfields[:vlen]])});
}

fcFloat${vlen} fc${type|c}${vlen}_${fname}kf(fc${type|c}${vlen} a, fcFloat k) {
  return fcFloat${vlen}_create${'1' * vlen}(${', '.join([f'(fcFloat)(a.{var_to_cpp_field(field)} {op} k)' for field in vfields[:vlen]])});
}

% endfor
% if type.lower() in floattypes:
% if vlen in (3, 4):
fc${type|c}${vlen} fc${type|c}${vlen}_cross(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  fc${type|c} resX = a.s[1] * b.s[2] - a.s[2] * b.s[1];
  fc${type|c} resY = a.s[2] * b.s[0] - a.s[0] * b.s[2];
  fc${type|c} resZ = a.s[0] * b.s[1] - a.s[1] * b.s[0];
  % if vlen == 3:
  return fc${type|c}${vlen}_create${'1' * vlen}(resX, resY, resZ);
  % else:
  return fc${type|c}${vlen}_create${'1' * vlen}(resX, resY, resZ, ${defaults[type.lower()]});
  % endif
}

% endif
fc${type|c} fc${type|c}${vlen}_dot(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return ${' + '.join([f'a.{var_to_cpp_field(field)} * b.{var_to_cpp_field(field)}' for field in vfields[:vlen]])};
}

fcDouble fc${type|c}${vlen}_distance(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_length(fc${type|c}${vlen}_sub(a, b));
}

fcDouble fc${type|c}${vlen}_length(fc${type|c}${vlen} a) {
  return fcMath_sqrt(${' + '.join([f'a.{var_to_cpp_field(field)} * a.{var_to_cpp_field(field)}' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_normalize(fc${type|c}${vlen} a) {
  fcDouble len = fc${type|c}${vlen}_length(a);
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'(fc{type.capitalize()})(a.{var_to_cpp_field(field)} / len)' for field in vfields[:vlen]])});
}

% elif type.lower() in inttypes:
fc${type|c}${vlen} fc${type|c}${vlen}_mod(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(f'a.{var_to_cpp_field(field)} % b.{var_to_cpp_field(field)}' for field in vfields[:vlen])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_modk(fc${type|c}${vlen} a, fc${type|c} k) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join(f'a.{var_to_cpp_field(field)} % k' for field in vfields[:vlen])});
}

% for fname, op in zip(['bitAnd', 'bitOr', 'bitXor'], ['&', '|', '^']):
fc${type|c}${vlen} fc${type|c}${vlen}_${fname}(fc${type|c}${vlen} a, fc${type|c}${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'a.{var_to_cpp_field(field)} {op} b.{var_to_cpp_field(field)}' for field in vfields[:vlen]])});
}

% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_bitNot(fc${type|c}${vlen} a) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'~a.{var_to_cpp_field(field)}' for field in vfields[:vlen]])});
}

% endif
% for fname in sorted(math_alltype_functions):
${simple_ew_function(fname, type, vlen, False)}
% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_clampk(fc${type|c}${vlen} v, fc${type|c} min, fc${type|c} max) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_clamp(v.{var_to_cpp_field(field)}, min, max)' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_maxk(fc${type|c}${vlen} x, fc${type|c} y) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_max(x.{var_to_cpp_field(field)}, y)' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_mink(fc${type|c}${vlen} x, fc${type|c} y) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_min(x.{var_to_cpp_field(field)}, y)' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_mixk(fc${type|c}${vlen} x, fc${type|c}${vlen} y, fc${type|c} a) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_mix(x.{var_to_cpp_field(field)}, y.{var_to_cpp_field(field)}, a)' for field in vfields[:vlen]])});
}

% if type.lower() in floattypes:
% for fname in sorted(math_float_functions):
${simple_ew_function(fname, type, vlen, False)}
% endfor
fc${type|c}${vlen} fc${type|c}${vlen}_scalb(fc${type|c}${vlen} a, fcInt${vlen} n) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("scalb", type)}(a.{var_to_cpp_field(field)}, n.{var_to_cpp_field(field)})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_ldexp(fc${type|c}${vlen} a, fcInt${vlen} n) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("ldexp", type)}(a.{var_to_cpp_field(field)}, n.{var_to_cpp_field(field)})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_pown(fc${type|c}${vlen} a, fcInt${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("pown", type)}(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_rootn(fc${type|c}${vlen} a, fcInt${vlen} b) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("rootn", type)}(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)})' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_smoothStepk(fc${type|c}${vlen} a, fc${type|c}${vlen} b, fc${type|c} c) {
  return fc${type|c}${vlen}_create${'1' * vlen}(${', '.join([f'fcMath_{typed_float_fname("smoothStep", type)}(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)}, c)' for field in vfields[:vlen]])});
}

% endif
% if type.lower() in inttypes:
% for fname in sorted(math_int_functions):
${simple_ew_function(fname, type, vlen, False)}
% endfor
% if type.lower() == 'int':
fcInt${vlen} fcInt${vlen}_mad24(fcInt${vlen} a, fcInt${vlen} b, fcInt${vlen} c) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join([f"fcMath_mad24(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)}, c.{var_to_cpp_field(field)})" for field in vfields[:vlen]])});
}

fcInt${vlen} fcInt${vlen}_mul24(fcInt${vlen} a, fcInt${vlen} b) {
  return fcInt${vlen}_create${'1' * vlen}(${', '.join([f"fcMath_mul24(a.{var_to_cpp_field(field)}, b.{var_to_cpp_field(field)})" for field in vfields[:vlen]])});
}

% endif
% endif

% endfor
% endfor

#endif  // _FANCIER_VECTOR_H_
