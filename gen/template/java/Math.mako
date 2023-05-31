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
<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
package es.ull.pcg.hpc.fancier;


public class Math {
  @Translatable
  public static final int CHAR_BIT = Byte.SIZE;
  @Translatable
  public static final byte SCHAR_MAX = Byte.MAX_VALUE;
  @Translatable
  public static final byte SCHAR_MIN = Byte.MIN_VALUE;
  @Translatable
  public static final byte CHAR_MAX = SCHAR_MAX;
  @Translatable
  public static final byte CHAR_MIN = SCHAR_MIN;
  @Translatable
  public static final short SHRT_MAX = Short.MAX_VALUE;
  @Translatable
  public static final short SHRT_MIN = Short.MIN_VALUE;
  @Translatable
  public static final int INT_MAX = Integer.MAX_VALUE;
  @Translatable
  public static final int INT_MIN = Integer.MIN_VALUE;
  @Translatable
  public static final long LONG_MAX = Long.MAX_VALUE;
  @Translatable
  public static final long LONG_MIN = Long.MIN_VALUE;

  @Translatable
  public static final int FLT_DIG =        6;
  @Translatable
  public static final int FLT_MANT_DIG =   24;
  @Translatable
  public static final int FLT_MAX_10_EXP = +38;
  @Translatable
  public static final int FLT_MAX_EXP =    +128;
  @Translatable
  public static final int FLT_MIN_10_EXP = -37;
  @Translatable
  public static final int FLT_MIN_EXP =    -125;
  @Translatable
  public static final int FLT_RADIX =      2;
  @Translatable
  public static final float FLT_MAX =      Float.MAX_VALUE;
  @Translatable
  public static final float FLT_MIN =      Float.MIN_NORMAL;
  @Translatable
  public static final float FLT_EPSILON =  0x1.0p-23f;

  @Translatable
  public static final int DBL_DIG =        15;
  @Translatable
  public static final int DBL_MANT_DIG =   53;
  @Translatable
  public static final int DBL_MAX_10_EXP = +308;
  @Translatable
  public static final int DBL_MAX_EXP =    +1024;
  @Translatable
  public static final int DBL_MIN_10_EXP = -307;
  @Translatable
  public static final int DBL_MIN_EXP =    -1021;
  @Translatable
  public static final int DBL_RADIX =      2;
  @Translatable
  public static final double DBL_MAX =     Double.MAX_VALUE;
  @Translatable
  public static final double DBL_MIN =     Double.MIN_NORMAL;
  @Translatable
  public static final double DBL_EPSILON = 0x1.0p-52;

  @Translatable
  public static final float M_E_F =        2.71828174591064f;
  @Translatable
  public static final float M_LOG2E_F =    1.44269502162933f;
  @Translatable
  public static final float M_LOG10E_F =   0.43429449200630f;
  @Translatable
  public static final float M_LN2_F =      0.69314718246460f;
  @Translatable
  public static final float M_LN10_F =     2.30258512496948f;
  @Translatable
  public static final float M_PI_F =       3.14159274101257f;
  @Translatable
  public static final float M_PI_2_F =     1.57079637050629f;
  @Translatable
  public static final float M_PI_4_F =     0.78539818525314f;
  @Translatable
  public static final float M_1_PI_F =     0.31830987334251f;
  @Translatable
  public static final float M_2_PI_F =     0.63661974668503f;
  @Translatable
  public static final float M_2_SQRTPI_F = 1.12837922573090f;
  @Translatable
  public static final float M_SQRT2_F =    1.41421353816986f;
  @Translatable
  public static final float M_SQRT1_2_F =  0.70710676908493f;

  @Translatable
  public static final double M_E =        2.718281828459045090796;
  @Translatable
  public static final double M_LOG2E =    1.442695040888963387005;
  @Translatable
  public static final double M_LOG10E =   0.434294481903251816668;
  @Translatable
  public static final double M_LN2 =      0.693147180559945286227;
  @Translatable
  public static final double M_LN10 =     2.302585092994045901094;
  @Translatable
  public static final double M_PI =       3.141592653589793115998;
  @Translatable
  public static final double M_PI_2 =     1.570796326794896557999;
  @Translatable
  public static final double M_PI_4 =     0.785398163397448278999;
  @Translatable
  public static final double M_1_PI =     0.318309886183790691216;
  @Translatable
  public static final double M_2_PI =     0.636619772367581382433;
  @Translatable
  public static final double M_2_SQRTPI = 1.128379167095512558561;
  @Translatable
  public static final double M_SQRT2 =    1.414213562373095145475;
  @Translatable
  public static final double M_SQRT1_2 =  0.707106781186547572737;

  @Translatable
  public static final float MAXFLOAT =  Float.MAX_VALUE;
  @Translatable
  public static final float HUGE_VALF = Float.POSITIVE_INFINITY;
  @Translatable
  public static final double HUGE_VAL = Double.POSITIVE_INFINITY;
  @Translatable
  public static final float INFINITY =  Float.POSITIVE_INFINITY;
  @Translatable
  public static final float NAN =       Float.NaN;

  // All types

% for type in types:
  @Translatable
  public static ${type|l} abs(${type|l} a) {
    return a < ${defaults[type.lower()]}? (${type|l}) -a : a;
  }

  @Translatable
  public static ${type|l} max(${type|l} a, ${type|l} b) {
    return a > b? a : b;
  }

  @Translatable
  public static ${type|l} min(${type|l} a, ${type|l} b) {
    return a < b? a : b;
  }

  @Translatable
  public static ${type|l} clamp(${type|l} a, ${type|l} b, ${type|l} c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static ${type|l} mix(${type|l} a, ${type|l} b, ${type|l} c) {
    return (${type|l}) (a + (b - a) * c);
  }

  @Translatable
  public static ${type|l} maxMag(${type|l} a, ${type|l} b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static ${type|l} minMag(${type|l} a, ${type|l} b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static ${type|l} select(${type|l} a, ${type|l} b, int c) {
    return c == 0? a : b;
  }
% endfor

  // Int types

% for fname, num_params in math_int_functions.items():
% for type in inttypes:
  @Translatable
  public static native ${type|l} ${fname}(${', '.join([f'{type.lower()} {chr(i + ord("a"))}' for i in range(num_params)])});
% endfor
% endfor
  @Translatable
  public static native int mad24 (int a, int b, int c);
  @Translatable
  public static native int mul24 (int a, int b);

  // Float types

% for fname, num_params in math_float_functions.items():
% for type in floattypes:
  @Translatable
  public static native ${type|l} ${fname}(${', '.join([f'{type.lower()} {chr(i + ord("a"))}' for i in range(num_params)])});
% endfor
% endfor
% for fname in ('scalb', 'ldexp', 'pown', 'rootn'):
% for type in floattypes:
  @Translatable
  public static native ${type|l} ${fname}(${type|l} a, int n);
% endfor
% endfor
% for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
% for type in floattypes:
  @Translatable
  public static native int ${fname}(${type|l} x);
% endfor
% endfor
% for fname in ('isOrdered', 'isUnordered'):
% for type in floattypes:
  @Translatable
  public static native int ${fname}(${type|l} x, ${type|l} y);
% endfor
% endfor
}
