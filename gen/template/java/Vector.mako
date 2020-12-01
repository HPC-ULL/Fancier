<%!
  import re

  defaults = {
    'float': '0.0f',
    'double': '0.0',
    'byte': '(byte) 0',
    'short': '(short) 0',
    'int': '0',
    'long': '0L'
  }

  def fill_params(target_size, prev_params=tuple(), current_size=0):
    if current_size == target_size:
      yield prev_params

    for vlen in range(1, (target_size - current_size) + 1):
      if vlen in vlens:
        params = prev_params + (vlen,)
        for alt in fill_params(target_size, params, current_size + vlen):
          yield alt

      params = prev_params + (1,) * vlen
      for alt in fill_params(target_size, params, current_size + vlen):
        yield alt

  def field_to_varname(field):
    return re.sub(r"\[|\]", '', field)

  def make_delegate_constructor(param_set, type):
    params = []
    args = []
    obj_index = arg_index = 0

    for param_len in param_set:
      if param_len == 1:
        param_name = field_to_varname(vfields[arg_index])
        params.append(f'{type.lower()} {param_name}')
        args.append(param_name)
      else:
        obj_index += 1
        other_len = f'{type.capitalize()}{param_len}'
        params.append(f'{other_len} vec{obj_index}')
        args += [f'vec{obj_index}.{vfields[i]}' for i in range(param_len)]

      arg_index += param_len

    return params, args
%>\
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
  public static ${type|c}${vlen} ${fname}(${', '.join(param_list)}) {
    return new ${type|c}${vlen}(${', '.join(native_calls)});
  }
% endif
</%def>\
package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class ${type|c}${vlen} {
  ## List of fields
% for field in vfields[:min(vlen, 4)]:
  public ${type|l} ${field};
% endfor
% if vlen > 4:
  public ${type|l}[] s = new ${type|l}[${vlen - 4}];
% endif

  ## Constructors
  public ${type|c}${vlen}(${', '.join([f'{type.lower()} {field_to_varname(field)}' for field in vfields[:vlen]])}) {
  % for field in vfields[:vlen]:
    this.${field} = ${field_to_varname(field)};
  % endfor
  }

  public ${type|c}${vlen}(${type|l} v) {
    this(${', '.join(['v'] * vlen)});
  }

  public ${type|c}${vlen}() {
    this((${type|l}) 0);
  }

  % for param_set in sorted(set(fill_params(vlen))):
  % if len(param_set) != vlen:
<% params, args = make_delegate_constructor(param_set, type) %>\
  public ${type|c}${vlen}(${', '.join(params)}) {
    this(${', '.join(args)});
  }

  % endif
  % endfor
  ## Indexing
  % if vlen > 2 and vlen % 2 == 0:
  public ${type|c}${vlen//2} lo() {
    return new ${type|c}${vlen//2}(${', '.join([field for field in vfields[:vlen//2]])});
  }

  public ${type|c}${vlen//2} hi() {
    return new ${type|c}${vlen//2}(${', '.join([field for field in vfields[vlen//2:vlen]])});
  }

  public ${type|c}${vlen//2} odd() {
    return new ${type|c}${vlen//2}(${', '.join([f'{vfields[i]}' for i in range(1, vlen, 2)])});
  }

  public ${type|c}${vlen//2} even() {
    return new ${type|c}${vlen//2}(${', '.join([f'{vfields[i]}' for i in range(0, vlen, 2)])});
  }

  % endif
  ## Conversion
  % for newtype in types:
  % if newtype != type.lower():
  public ${newtype|c}${vlen} convert${newtype|c}${vlen}() {
    return new ${newtype|c}${vlen}(${', '.join([f'({newtype.lower()}) {field}' for field in vfields[:vlen]])});
  }

  % endif
  % endfor
  % for newlen in vlens[:vlens.index(vlen)]:
  public ${type|c}${newlen} as${type|c}${newlen}() {
    return new ${type|c}${newlen}(${', '.join([field for field in vfields[:newlen]])});
  }

  % endfor
  ## Comparison operators
  % for fname, op in zip(['isEqual', 'isNotEqual', 'isGreater', 'isGreaterEqual', 'isLess', 'isLessEqual'], ['==', '!=', '>', '>=', '<', '<=']):
  public static Int${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new Int${vlen}(${', '.join([f'a.{field} {op} b.{field}? 1 : 0' for field in vfields[:vlen]])});
  }

  % endfor
  public static ${type|c}${vlen} select(${type|c}${vlen} a, ${type|c}${vlen} b, Int${vlen} c) {
    return new ${type|c}${vlen}(${', '.join(f'Math.select(a.{field}, b.{field}, c.{field})' for field in vfields[:vlen])});
  }

  % if type.lower() in floattypes:
  % for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
  public static Int${vlen} ${fname}(${type|c}${vlen} a) {
    return new Int${vlen}(${', '.join(f'Math.{fname}(a.{field})' for field in vfields[:vlen])});
  }

  % endfor
  % for fname in ('isOrdered', 'isUnordered'):
  public static Int${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new Int${vlen}(${', '.join(f'Math.{fname}(a.{field}, b.{field})' for field in vfields[:vlen])});
  }

  % endfor
  % endif
  ## Any/All vector evaluation
  public static int any(${type|c}${vlen} a) {
    return (${' || '.join([f'a.{field} != {defaults[type.lower()]}' for field in vfields[:vlen]])})? 1 : 0;
  }

  public static int all(${type|c}${vlen} a) {
    return (${' || '.join([f'a.{field} == {defaults[type.lower()]}' for field in vfields[:vlen]])})? 1 : 0;
  }

  ## Basic element-wise arithmetic operations
  % for fname, op in zip(['add', 'sub'], ['+', '-']):
  public static ${type|c}${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
  }

  % endfor
  ## Element-wise multiplication and division
  % for fname, op in zip(['mul', 'div'], ['*', '/']):
  % for param_type in sorted(set(floattypes + [type.lower()])):
  public static ${param_type|c}${vlen} ${fname}(${type|c}${vlen} a, ${param_type|c}${vlen} b) {
    return new ${param_type|c}${vlen}(${', '.join([f'({param_type.lower()})(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
  }

  public static ${param_type|c}${vlen} ${fname}(${type|c}${vlen} a, ${param_type|l} k) {
    return new ${param_type|c}${vlen}(${', '.join([f'({param_type.lower()})(a.{field} {op} k)' for field in vfields[:vlen]])});
  }

  % endfor
  % endfor
  % if type.lower() in floattypes:
  ## Vector cross product for vectors of length 3 and 4
  % if vlen in (3, 4):
  public static ${type|c}${vlen} cross(${type|c}${vlen} a, ${type|c}${vlen} b) {
    ${type|l} resX = a.y * b.z - a.z * b.y;
    ${type|l} resY = a.z * b.x - a.x * b.z;
    ${type|l} resZ = a.x * b.y - a.y * b.x;
    % if vlen == 3:
    return new ${type|c}${vlen}(resX, resY, resZ);
    % else:
    return new ${type|c}${vlen}(resX, resY, resZ, ${defaults[type.lower()]});
    % endif
  }

  % endif
  public static ${type|l} dot(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return (${type|l})(${' + '.join([f'a.{field} * b.{field}' for field in vfields[:vlen]])});
  }

  public static double distance(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return length(sub(a, b));
  }

  public static double length(${type|c}${vlen} a) {
    return Math.sqrt(${' + '.join([f'a.{field} * a.{field}' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} normalize(${type|c}${vlen} a) {
    double len = length(a);
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} / len)' for field in vfields[:vlen]])});
  }

  % elif type.lower() in inttypes:
  ## Module (%) operator
  public static ${type|c}${vlen} mod(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} % b.{field})' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} mod(${type|c}${vlen} a, ${type|l} k) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} % k)' for field in vfields[:vlen]])});
  }

  ## Bitwise operators
  % for fname, op in zip(['bitAnd', 'bitOr', 'bitXor'], ['&', '|', '^']):
  public static ${type|c}${vlen} ${fname}(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(a.{field} {op} b.{field})' for field in vfields[:vlen]])});
  }

  % endfor
  public static ${type|c}${vlen} bitNot(${type|c}${vlen} a) {
    return new ${type|c}${vlen}(${', '.join([f'({type.lower()})(~a.{field})' for field in vfields[:vlen]])});
  }
  % endif
  % for fname in sorted(math_alltype_functions):
${simple_elementwise(fname)}\
  % endfor

  public static ${type|c}${vlen} clamp(${type|c}${vlen} v, ${type|l} min, ${type|l} max) {
    return new ${type|c}${vlen}(${', '.join([f'Math.clamp(v.{field}, min, max)' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} max(${type|c}${vlen} x, ${type|l} y) {
    return new ${type|c}${vlen}(${', '.join([f'Math.max(x.{field}, y)' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} min(${type|c}${vlen} x, ${type|l} y) {
    return new ${type|c}${vlen}(${', '.join([f'Math.min(x.{field}, y)' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} mix(${type|c}${vlen} x, ${type|c}${vlen} y, ${type|l} a) {
    return new ${type|c}${vlen}(${', '.join([f'Math.mix(x.{field}, y.{field}, a)' for field in vfields[:vlen]])});
  }
  % if type.lower() in floattypes:
  % for fname in sorted(math_float_functions):
${simple_elementwise(fname)}\
  % endfor

  public static ${type|c}${vlen} scalb(${type|c}${vlen} a, Int${vlen} n) {
    return new ${type|c}${vlen}(${', '.join([f'Math.scalb(a.{field}, n.{field})' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} ldexp(${type|c}${vlen} a, Int${vlen} n) {
    return new ${type|c}${vlen}(${', '.join([f'Math.ldexp(a.{field}, n.{field})' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} pown(${type|c}${vlen} a, Int${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'Math.pown(a.{field}, b.{field})' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} rootn(${type|c}${vlen} a, Int${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'Math.pown(a.{field}, b.{field})' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} smoothStep(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|l} c) {
    return new ${type|c}${vlen}(${', '.join([f'Math.smoothStep(a.{field}, b.{field}, c)' for field in vfields[:vlen]])});
  }
  % elif type.lower() in inttypes:
  % for fname in sorted(math_int_functions):
${simple_elementwise(fname)}\
  % endfor
  % if type.lower() == 'int':

  public static ${type|c}${vlen} mad24(${type|c}${vlen} a, ${type|c}${vlen} b, ${type|c}${vlen} c) {
    return new ${type|c}${vlen}(${', '.join([f'Math.mad24(a.{field}, b.{field}, c.{field})' for field in vfields[:vlen]])});
  }

  public static ${type|c}${vlen} mul24(${type|c}${vlen} a, ${type|c}${vlen} b) {
    return new ${type|c}${vlen}(${', '.join([f'Math.mul24(a.{field}, b.{field})' for field in vfields[:vlen]])});
  }
  % endif
  % endif
}
