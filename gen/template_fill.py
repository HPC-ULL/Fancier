import argparse, re, sys
from mako.template import Template


# Shared functions

def l(value):
  return value.lower()

def c(value):
  return value.capitalize()

def param_name(i):
  return chr(ord('a') + i)

def typed_int_fname(fname, ftype):
  ftype = ftype.lower()

  if ftype == 'byte' or ftype == 'char':
    return fname + 'c'
  elif ftype == 'short':
    return fname + 's'
  elif ftype == 'long':
    return fname + 'l'
  else:
    return fname

def typed_float_fname(fname, ftype):
  ftype = ftype.lower()

  if ftype == 'float':
    return fname + 'f'
  else:
    return fname

def typed_fname(fname, ftype):
  return typed_int_fname(typed_float_fname(fname, ftype), ftype)

def vwidth(vlen):
  return vlen if vlen != 3 else 4

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

def make_delegate_constructor(param_set, type, vfields, native=False):
  params = []
  args = []
  obj_index = arg_index = 0

  for param_len in param_set:
    if param_len == 1:
      param_name = field_to_varname(vfields[arg_index])
      if native:
        params.append(f'cl_{type.lower()} {param_name}')
      else:
        params.append(f'{type.lower()} {param_name}')
      args.append(param_name)
    else:
      obj_index += 1
      other_len = f'{type.capitalize()}{param_len}'
      if native:
        other_len = 'fc' + other_len

      params.append(f'{other_len} vec{obj_index}')
      args += [f'vec{obj_index}.{vfields[i]}' for i in range(param_len)]

    arg_index += param_len

  return params, args

# Shared constants

vlens = [2, 3, 4, 8]

types = ['byte', 'short', 'int', 'long', 'float', 'double']
inttypes = types[:4]
floattypes = types[4:]

signatures = {
  'byte': 'B',
  'char': 'B',
  'double': 'D',
  'float': 'F',
  'int': 'I',
  'long': 'J',
  'short': 'S'
}

defaults = {
  'byte': "'\\0'",
  'char': "'\\0'",
  'double': '0.0',
  'float': '0.0f',
  'int': '0',
  'long': '0L',
  'short': '0'
}

literal_suf = {
  'byte': '',
  'char': '',
  'double': '',
  'float': 'f',
  'int': '',
  'long': 'L',
  'short': ''
}

vfields = ['x', 'y', 'z', 'w'] + [f's[{i}]' for i in range(vlens[-1] - 4)]

# List of simple math element-wise vector functions with their given number of parameters

math_alltype_functions = { 'abs': 1, 'max': 2, 'min': 2, 'clamp': 3, 'mix': 3, 'maxMag': 2, 'minMag': 2 }

math_int_functions = { 'absDiff': 2, 'addSat': 2, 'clz': 1, 'hadd': 2, 'madHi': 3,
  'madSat': 3, 'mulHi': 2, 'rhadd': 2, 'rotate': 2, 'subSat': 2 }

math_float_functions = { 'acos': 1, 'asin': 1, 'atan': 1, 'atan2': 2, 'cbrt': 1, 'ceil': 1,
  'copySign': 2, 'cos': 1, 'cosh': 1, 'exp': 1, 'expm1': 1, 'floor': 1, 'getExponent': 1,
  'hypot': 2, 'remainder': 2, 'log': 1, 'log10': 1, 'log1p': 1, 'nextAfter': 2, 'pow': 2,
  'rint': 1, 'round': 1, 'signum': 1, 'sin': 1, 'sinh': 1, 'sqrt': 1,
  'tan': 1, 'tanh': 1, 'toDegrees': 1, 'toRadians': 1, 'smoothStep': 3,
  'step': 2, 'acosh': 1, 'asinh': 1, 'atanh': 1, 'erf': 1, 'erfc': 1, 'exp2': 1,
  'exp10': 1, 'fdim': 2, 'fma': 3, 'fmod': 2, 'fract': 1, 'frexp': 1, 'lgamma': 1,
  'log2': 1, 'logb': 1, 'mad': 3, 'powr': 2, 'rsqrt': 1, 'tgamma': 1, 'trunc': 1 }

# Input processing

def __process_param(param):
  if param == 'True':
    return True
  elif param == 'False':
    return False
  else:
    try:
      iparam = int(param)
      return iparam
    except ValueError:
      try:
        fparam = float(param)
        return fparam
      except ValueError:
        return param

def __process_format(format_arg):
  fmt = {}

  # Read the format elements
  for fmt_elem in format_arg:
    kv = fmt_elem.split('=')
    fmt[kv[0]] = __process_param(kv[1])

  return fmt


# Entry point

if __name__ == "__main__":
  p = argparse.ArgumentParser(description="Generate source code through the use of a template file")
  p.add_argument('input', help="the input template file")
  p.add_argument('output', help="the output code file")
  p.add_argument('format', nargs='*', help="substitution element, in the format <field>=<value>")
  args = p.parse_args()

  template = Template(filename=args.input, imports=['from template_fill import l, c, vlens, ' +
      'types, inttypes, floattypes, signatures, defaults, literal_suf, vfields, ' +
      'math_alltype_functions, math_int_functions, math_float_functions, param_name, ' +
      'typed_int_fname, typed_float_fname, typed_fname, vwidth, fill_params, field_to_varname, ' +
      'make_delegate_constructor'])
  fmt = __process_format(args.format)

  fmt_display = ' '.join([f'{fmt_k}={fmt_v}' for fmt_k, fmt_v in fmt.items()])
  print(f'Template: "{args.input}"')
  print(f'Output:   "{args.output}"')
  print(f'Format:   {fmt_display}\n')

  with open(args.output, 'w') as output:
    output.write(template.render(**fmt))
