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
  types[0] = 'char'
  inttypes = types[:4]

  def typed_int_builtin_fname(fname, type):
    if type.lower() == 'int':
      return fname + 'i'
    else:
      return typed_int_fname(fname, type)
%>\
<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
#ifdef cl_khr_fp64
#pragma OPENCL EXTENSION cl_khr_fp64 : enable
#endif // cl_khr_fp64

#if defined(__EMBEDDED_PROFILE__) && defined(cles_khr_int64)
#pragma OPENCL EXTENSION cles_khr_int64 : enable
#endif // __EMBEDDED_PROFILE__ && cles_khr_int64

% for type in floattypes:
% if type.lower() == 'double':
#ifdef cl_khr_fp64
% endif
${type|l} ${typed_float_fname('scalb', type)}(${type|l} a, int scaleFactor) {
  return a * exp2((${type|l}) scaleFactor);
}

% for vlen in vlens:
${type|l}${vlen} ${type|l}${vlen}_scalb(${type|l}${vlen} a, int${vlen} scaleFactor) {
  return (${type|l}${vlen})(${', '.join([f'{typed_float_fname("scalb", type)}(a.{field}, scaleFactor.{field})' for field in vfields[:vlen]])});
}
% endfor

% for vlen in vlens:
${type|l}${vlen} ${type|l}${vlen}_smoothstep(${type|l}${vlen} a, ${type|l}${vlen} b, ${type|l} c) {
  return (${type|l}${vlen})(${', '.join([f'smoothstep(a.{field}, b.{field}, c)' for field in vfields[:vlen]])});
}
% endfor

% if type.lower() == 'double':
#endif // cl_khr_fp64
% endif

% endfor
% for type in inttypes:
% if type.lower() == 'long':
#if !defined(__EMBEDDED_PROFILE__) || defined(cles_khr_int64)
% endif
${type|l} ${typed_int_builtin_fname('clamp', type)}(${type|l} a, ${type|l} min, ${type|l} max) {
  return a < min? min : (a > max? max : a);
}

${type|l} ${typed_int_builtin_fname('mix', type)}(${type|l} x, ${type|l} y, ${type|l} a) {
  return x + (y - x) * a;
}

${type|l} ${typed_int_builtin_fname('maxmag', type)}(${type|l} a, ${type|l} b) {
  return abs(a) > abs(b) ? a : b;
}

${type|l} ${typed_int_builtin_fname('minmag', type)}(${type|l} a, ${type|l} b) {
  return abs(a) < abs(b) ? a : b;
}

% for vlen in vlens:
${type|l}${vlen} ${type|l}${vlen}_clamp(${type|l}${vlen} a, ${type|l}${vlen} min, ${type|l}${vlen} max) {
  return (${type|l}${vlen})(${', '.join([f'{typed_int_builtin_fname("clamp", type)}(a.{field}, min.{field}, max.{field})' for field in vfields[:vlen]])});
}

${type|l}${vlen} ${type|l}${vlen}_mix(${type|l}${vlen} x, ${type|l}${vlen} y, ${type|l}${vlen} a) {
  return (${type|l}${vlen})(${', '.join([f'{typed_int_builtin_fname("mix", type)}(x.{field}, y.{field}, a.{field})' for field in vfields[:vlen]])});
}

${type|l}${vlen} ${type|l}${vlen}_maxmag(${type|l}${vlen} a, ${type|l}${vlen} b) {
  return (${type|l}${vlen})(${', '.join([f'{typed_int_builtin_fname("maxmag", type)}(a.{field}, b.{field})' for field in vfields[:vlen]])});
}

${type|l}${vlen} ${type|l}${vlen}_minmag(${type|l}${vlen} a, ${type|l}${vlen} b) {
  return (${type|l}${vlen})(${', '.join([f'{typed_int_builtin_fname("minmag", type)}(a.{field}, b.{field})' for field in vfields[:vlen]])});
}

% endfor
% if type.lower() == 'long':
#endif // !__EMBEDDED_PROFILE__ || cles_khr_int64
% endif
% endfor
