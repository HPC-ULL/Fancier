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
  defaults = {
    'float': '0.0f',
    'double': '0.0',
    'byte': '(byte) 0',
    'short': '(short) 0',
    'int': '0',
    'long': '0L'
  }
%>\
<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
<%def name="simple_elementwise(fname)">
<%
  fnum_params = 0
  if type.lower() in floattypes and fname in math_float_functions:
    fnum_params = math_float_functions[fname]
  elif type.lower() in inttypes and fname in math_int_functions:
    fnum_params = math_int_functions[fname]
  elif fname in math_alltype_functions:
    fnum_params = math_alltype_functions[fname]

  # Parameter list of the Java method (Float4 a, Float4 b, Float4 c, ...)
  param_list = [f'{type.capitalize()}{vlen} {param_name(i)}' for i in range(fnum_params)]

  # Argument list of the constructor (Math.fname(a.x, b.x, c.x, ...), Math.fname(a.y, b.y, c.y, ...), ...);
  native_calls = [f'Math.{fname}(' + (', '.join([f'{param_name(i)}.{field}' for i in range(fnum_params)])) + ')' for field in vfields[:vlen]]
%>\
% if fnum_params > 0:
  @Translatable
  public static ${type|c}${vlen} ${fname}(${', '.join(param_list)}) {
    return new ${type|c}${vlen}(${', '.join(native_calls)});
  }

  public static void ${fname}(${', '.join(param_list)}, ${type|c}${vlen} result) {
    % for field, value in zip(vfields[:vlen], native_calls):
    result.${field} = ${value};
    % endfor
  }
% endif
</%def>\
package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

import es.ull.pcg.hpc.fancier.Translatable;


public class ${type|c}${vlen} {
  ## List of fields
% for field in vfields[:min(vlen, 4)]:
  @Translatable
  public ${type|l} ${field};
% endfor
% if vlen > 4:
  @Translatable
  public ${type|l}[] s = new ${type|l}[${vlen - 4}];
% endif

  ## Constructors
  @Translatable
  public ${type|c}${vlen}() {}

  @Translatable
  public ${type|c}${vlen}(${', '.join([f'{type.lower()} {field_to_varname(field)}' for field in vfields[:vlen]])}) {
    set(${', '.join([f'{field_to_varname(field)}' for field in vfields[:vlen]])});
  }

  @Translatable
  public void set(${', '.join([f'{type.lower()} {field_to_varname(field)}' for field in vfields[:vlen]])}) {
    % for field in vfields[:vlen]:
    this.${field} = ${field_to_varname(field)};
    % endfor
  }

  @Translatable
  public ${type|c}${vlen}(${type|l} v) {
    this(${', '.join(['v'] * vlen)});
  }

  @Translatable
  public void set(${type|l} v) {
    set(${', '.join(['v'] * vlen)});
  }

  % for param_set in sorted(set(fill_params(vlen))):
  % if len(param_set) != vlen:
<% params, args = make_delegate_constructor(param_set, type, vfields) %>\
  @Translatable
  public ${type|c}${vlen}(${', '.join(params)}) {
    this(${', '.join(args)});
  }

  @Translatable
  public void set(${', '.join(params)}) {
    set(${', '.join(args)});
  }

  % endif
  % endfor
  ## Passing as value parameter
  @Translatable
  public ${type|c}${vlen} value() {
    return new ${type|c}${vlen}(this);
  }

  ## Indexing
  % if vlen > 2 and vlen % 2 == 0:
  @Translatable
  public ${type|c}${vlen//2} lo() {
    return new ${type|c}${vlen//2}(${', '.join([field for field in vfields[:vlen//2]])});
  }

  public void lo(${type|c}${vlen//2} result) {
    % for field in vfields[:vlen//2]:
    result.${field} = ${field};
    % endfor
  }

  @Translatable
  public ${type|c}${vlen//2} hi() {
    return new ${type|c}${vlen//2}(${', '.join([field for field in vfields[vlen//2:vlen]])});
  }

  public void hi(${type|c}${vlen//2} result) {
    % for field, ofield in zip(vfields[:vlen//2], vfields[vlen//2:vlen]):
    result.${field} = ${ofield};
    % endfor
  }

  @Translatable
  public ${type|c}${vlen//2} odd() {
    return new ${type|c}${vlen//2}(${', '.join([f'{vfields[i]}' for i in range(1, vlen, 2)])});
  }

  public void odd(${type|c}${vlen//2} result) {
    % for field, ofield in zip(vfields[:vlen//2], [vfields[i] for i in range (1, vlen, 2)]):
    result.${field} = ${ofield};
    % endfor
  }

  @Translatable
  public ${type|c}${vlen//2} even() {
    return new ${type|c}${vlen//2}(${', '.join([f'{vfields[i]}' for i in range(0, vlen, 2)])});
  }

  public void even(${type|c}${vlen//2} result) {
    % for field, ofield in zip(vfields[:vlen//2], [vfields[i] for i in range (0, vlen, 2)]):
    result.${field} = ${ofield};
    % endfor
  }

  % endif
  ## Conversion
<% cast_mask = ' & 0xff' if type.lower() == 'byte' else '' %>\
  % for newtype in types:
  % if newtype.lower() != type.lower():
  @Translatable
  public ${newtype|c}${vlen} convert${newtype|c}${vlen}() {
    return new ${newtype|c}${vlen}(${', '.join([f'({newtype.lower()})({field}{cast_mask})' for field in vfields[:vlen]])});
  }

  public void convert${newtype|c}${vlen}(${newtype|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${newtype|l})(${field}${cast_mask});
    % endfor
  }

  % endif
  % endfor
  % for newlen in vlens[:vlens.index(vlen)]:
  @Translatable
  public ${type|c}${newlen} as${type|c}${newlen}() {
    return new ${type|c}${newlen}(${', '.join([field for field in vfields[:newlen]])});
  }

  public void as${type|c}${newlen}(${type|c}${newlen} result) {
    % for field in vfields[:newlen]:
    result.${field} = ${field};
    % endfor
  }

  % endfor
  ## Comparison operators
  % for fname, op in zip(['isEqual', 'isNotEqual', 'isGreater', 'isGreaterEqual', 'isLess', 'isLessEqual'], ['==', '!=', '>', '>=', '<', '<=']):
  @Translatable
  public static Int${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new Int${vlen}(${', '.join([f'a.{field} {op} b.{field}? 1 : 0' for field in vfields[:vlen]])});
  }

  public static void ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b, Int${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = a.${field} ${op} b.${field}? 1 : 0;
    % endfor
  }

  % endfor
  @Translatable
  public static ${type|c}${vlen} select(${type|c}${vlen} a, ${type|c}${vlen} b, Int${vlen} c) {
    return new ${type|c}${vlen}(${', '.join(f'Math.select(a.{field}, b.{field}, c.{field})' for field in vfields[:vlen])});
  }

  public static void select(${type|c}${vlen} a, ${type|c}${vlen} b, Int${vlen} c, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.select(a.${field}, b.${field}, c.${field});
    % endfor
  }

  % if type.lower() in floattypes:
  % for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
  @Translatable
  public static Int${vlen} ${fname}(${type|c}${vlen} a) {
    return new Int${vlen}(${', '.join(f'Math.{fname}(a.{field})' for field in vfields[:vlen])});
  }

  public static void ${fname}(${type|c}${vlen} a, Int${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.${fname}(a.${field});
    % endfor
  }

  % endfor
  % for fname in ('isOrdered', 'isUnordered'):
  @Translatable
  public static Int${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new Int${vlen}(${', '.join(f'Math.{fname}(a.{field}, b.{field})' for field in vfields[:vlen])});
  }

  public static void ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b, Int${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.${fname}(a.${field}, b.${field});
    % endfor
  }

  % endfor
  % endif
  ## Any/All vector evaluation
  @Translatable
  public static int any(${type|c}${vlen} a) {
    return (${' || '.join([f'a.{field} != {defaults[type.lower()]}' for field in vfields[:vlen]])})? 1 : 0;
  }

  @Translatable
  public static int all(${type|c}${vlen} a) {
    return (${' || '.join([f'a.{field} == {defaults[type.lower()]}' for field in vfields[:vlen]])})? 0 : 1;
  }

  ## Basic element-wise arithmetic operations
  @Translatable
  public static ${type|c}${vlen} neg(${type|c}${vlen} a) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(-a.{field})' for field in vfields[:vlen]])});
  }

  public static void neg(${type|c}${vlen} a, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(-a.${field});
    % endfor
  }

  % for fname, op in zip(['add', 'sub'], ['+', '-']):
  @Translatable
  public static ${type|c}${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
  }

  public static void ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(a.${field} ${op} b.${field});
    % endfor
  }

  % endfor
  ## Element-wise multiplication and division
  % for fname, op in zip(['mul', 'div'], ['*', '/']):
  % for param_type in sorted(set(floattypes + [type.lower()])):
  @Translatable
  public static ${param_type|c}${vlen} ${fname}(${type|c}${vlen} a, ${param_type|c}${vlen} b) {
    return new ${param_type|c}${vlen}(${', '.join([f'({param_type.lower()})(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
  }

  public static void ${fname}(${type|c}${vlen} a, ${param_type|c}${vlen} b, ${param_type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${param_type|l})(a.${field} ${op} b.${field});
    % endfor
  }

  @Translatable
  public static ${param_type|c}${vlen} ${fname}(${type|c}${vlen} a, ${param_type|l} k) {
    return new ${param_type|c}${vlen}(${', '.join([f'({param_type.lower()})(a.{field} {op} k)' for field in vfields[:vlen]])});
  }

  public static void ${fname}(${type|c}${vlen} a, ${param_type|l} k, ${param_type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${param_type|l})(a.${field} ${op} k);
    % endfor
  }

  % endfor
  % endfor
  % if type.lower() in floattypes:
  ## Vector cross product for vectors of length 3 and 4
  % if vlen in (3, 4):
  @Translatable
  public static ${type|c}${vlen} cross(${type|c}${vlen} a, ${type|c}${vlen} b) {
    ${type|c}${vlen} result = new ${type|c}${vlen}();
    cross(a, b, result);
    return result;
  }

  public static void cross(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} result) {
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    % if vlen == 4:
    result.w = ${defaults[type.lower()]};
    % endif
  }

  % endif
  @Translatable
  public static ${type|l} dot(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return (${type|l})(${' + '.join([f'a.{field} * b.{field}' for field in vfields[:vlen]])});
  }

  @Translatable
  public static double distance(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return distance(a, b, new ${type|c}${vlen}());
  }

  @Translatable
  public static double distance(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} tmp) {
    sub(a, b, tmp);
    return length(tmp);
  }

  @Translatable
  public static double length(${type|c}${vlen} a) {
    return Math.sqrt(${' + '.join([f'a.{field} * a.{field}' for field in vfields[:vlen]])});
  }

  @Translatable
  public static ${type|c}${vlen} normalize(${type|c}${vlen} a) {
    ${type|c}${vlen} result = new ${type|c}${vlen}();
    normalize(a, result);
    return result;
  }

  public static void normalize(${type|c}${vlen} a, ${type|c}${vlen} result) {
    double len = length(a);
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(a.${field} / len);
    % endfor
  }
  % elif type.lower() in inttypes:
  ## Module (%) operator
  @Translatable
  public static ${type|c}${vlen} mod(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} % b.{field})' for field in vfields[:vlen]])});
  }

  public static void mod(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(a.${field} % b.${field});
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} mod(${type|c}${vlen} a, ${type|l} k) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} % k)' for field in vfields[:vlen]])});
  }

  public static void mod(${type|c}${vlen} a, ${type|l} k, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(a.${field} % k);
    % endfor
  }

  ## Bitwise operators
  % for fname, op in zip(['bitAnd', 'bitOr', 'bitXor'], ['&', '|', '^']):
  @Translatable
  public static ${type|c}${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
  }

  public static void ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(a.${field} ${op} b.${field});
    % endfor
  }

  % endfor
  @Translatable
  public static ${type|c}${vlen} bitNot(${type|c}${vlen} a) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(~a.{field})' for field in vfields[:vlen]])});
  }

  public static void bitNot(${type|c}${vlen} a, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = (${type|l})(~a.${field});
    % endfor
  }
  % endif
  % for fname in sorted(math_alltype_functions):
${simple_elementwise(fname)}\
  % endfor

  @Translatable
  public static ${type|c}${vlen} clamp(${type|c}${vlen} v, ${type|l} min, ${type|l} max) {
    return new ${type|c}${vlen}(${', '.join([f'Math.clamp(v.{field}, min, max)' for field in vfields[:vlen]])});
  }

  public static void clamp(${type|c}${vlen} v, ${type|l} min, ${type|l} max, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.clamp(v.${field}, min, max);
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} max(${type|c}${vlen} x, ${type|l} y) {
    return new ${type|c}${vlen}(${', '.join([f'Math.max(x.{field}, y)' for field in vfields[:vlen]])});
  }

  public static void max(${type|c}${vlen} x, ${type|l} y, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.max(x.${field}, y);
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} min(${type|c}${vlen} x, ${type|l} y) {
    return new ${type|c}${vlen}(${', '.join([f'Math.min(x.{field}, y)' for field in vfields[:vlen]])});
  }

  public static void min(${type|c}${vlen} x, ${type|l} y, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.min(x.${field}, y);
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} mix(${type|c}${vlen} x, ${type|c}${vlen} y, ${type|l} a) {
    return new ${type|c}${vlen}(${', '.join([f'Math.mix(x.{field}, y.{field}, a)' for field in vfields[:vlen]])});
  }

  public static void mix(${type|c}${vlen} x, ${type|c}${vlen} y, ${type|l} a, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.mix(x.${field}, y.${field}, a);
    % endfor
  }
  % if type.lower() in floattypes:
  % for fname in sorted(math_float_functions):
${simple_elementwise(fname)}\
  % endfor

  @Translatable
  public static ${type|c}${vlen} scalb(${type|c}${vlen} a, Int${vlen} n) {
    return new ${type|c}${vlen}(${', '.join([f'Math.scalb(a.{field}, n.{field})' for field in vfields[:vlen]])});
  }

  public static void scalb(${type|c}${vlen} a, Int${vlen} n, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.scalb(a.${field}, n.${field});
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} ldexp(${type|c}${vlen} a, Int${vlen} n) {
    return new ${type|c}${vlen}(${', '.join([f'Math.ldexp(a.{field}, n.{field})' for field in vfields[:vlen]])});
  }

  public static void ldexp(${type|c}${vlen} a, Int${vlen} n, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.ldexp(a.${field}, n.${field});
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} pown(${type|c}${vlen} a, Int${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'Math.pown(a.{field}, b.{field})' for field in vfields[:vlen]])});
  }

  public static void pown(${type|c}${vlen} a, Int${vlen} b, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.pown(a.${field}, b.${field});
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} rootn(${type|c}${vlen} a, Int${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'Math.pown(a.{field}, b.{field})' for field in vfields[:vlen]])});
  }

  public static void rootn(${type|c}${vlen} a, Int${vlen} b, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.pown(a.${field}, b.${field});
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} smoothStep(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|l} c) {
    return new ${type|c}${vlen}(${', '.join([f'Math.smoothStep(a.{field}, b.{field}, c)' for field in vfields[:vlen]])});
  }

  public static void smoothStep(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|l} c, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.smoothStep(a.${field}, b.${field}, c);
    % endfor
  }
  % elif type.lower() in inttypes:
  % for fname in sorted(math_int_functions):
${simple_elementwise(fname)}\
  % endfor
  % if type.lower() == 'int':

  @Translatable
  public static ${type|c}${vlen} mad24(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} c) {
    return new ${type|c}${vlen}(${', '.join([f'Math.mad24(a.{field}, b.{field}, c.{field})' for field in vfields[:vlen]])});
  }

  public static void mad24(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} c, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.mad24(a.${field}, b.${field}, c.${field});
    % endfor
  }

  @Translatable
  public static ${type|c}${vlen} mul24(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'Math.mul24(a.{field}, b.{field})' for field in vfields[:vlen]])});
  }

  public static void mul24(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} result) {
    % for field in vfields[:vlen]:
    result.${field} = Math.mul24(a.${field}, b.${field});
    % endfor
  }
  % endif
  % endif
}
