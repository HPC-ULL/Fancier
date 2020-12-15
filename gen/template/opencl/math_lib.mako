<%!
  vfields = vfields[:4] + [f's{i}' for i in range(4, vlens[-1])]
  types[0] = 'char'
  inttypes = types[:4]
%>\
#pragma OPENCL EXTENSION cl_khr_fp64 : enable

% for type in floattypes:
${type|l} ${typed_float_fname('scalb', type)}(${type|l} a, int scaleFactor) {
  return a * exp2((${type|l}) scaleFactor);
}

% for vlen in vlens:
${type|l}${vlen} ${type|l}${vlen}_scalb(${type|l}${vlen} a, int${vlen} scaleFactor) {
  return (${type|l}${vlen})(${', '.join([f'{typed_float_fname("scalb", type)}(a.{field}, scaleFactor.{field})' for field in vfields[:vlen]])});
}

% endfor
% endfor
% for type in inttypes:
## TODO clampi, so that builtin clamp is not shadowed
${type|l} ${typed_int_fname('clamp', type)}(${type|l} a, ${type|l} min, ${type|l} max) {
  return a < min? min : (a > max? max : a);
}

${type|l} ${typed_int_fname('mix', type)}(${type|l} x, ${type|l} y, ${type|l} a) {
  return x + (y - x) * a;
}

% for vlen in vlens:
${type|l}${vlen} ${type|l}${vlen}_clamp(${type|l}${vlen} a, ${type|l}${vlen} min, ${type|l}${vlen} max) {
  return (${type|l}${vlen})(${', '.join([f'{typed_int_fname("clamp", type)}(a.{field}, min.{field}, max.{field})' for field in vfields[:vlen]])});
}

${type|l}${vlen} ${type|l}${vlen}_mix(${type|l}${vlen} x, ${type|l}${vlen} y, ${type|l}${vlen} a) {
  return (${type|l}${vlen})(${', '.join([f'{typed_int_fname("mix", type)}(x.{field}, y.{field}, a.{field})' for field in vfields[:vlen]])});
}

% endfor
% endfor
