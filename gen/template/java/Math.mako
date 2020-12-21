package es.ull.pcg.hpc.fancier;

public class Math {
  public static final int CHAR_BIT = Byte.SIZE;
  public static final byte SCHAR_MAX = Byte.MAX_VALUE;
  public static final byte SCHAR_MIN = Byte.MIN_VALUE;
  public static final byte CHAR_MAX = SCHAR_MAX;
  public static final byte CHAR_MIN = SCHAR_MIN;
  public static final short SHRT_MAX = Short.MAX_VALUE;
  public static final short SHRT_MIN = Short.MIN_VALUE;
  public static final int INT_MAX = Integer.MAX_VALUE;
  public static final int INT_MIN = Integer.MIN_VALUE;
  public static final long LONG_MAX = Long.MAX_VALUE;
  public static final long LONG_MIN = Long.MIN_VALUE;

  public static final int FLT_DIG =        6;
  public static final int FLT_MANT_DIG =   24;
  public static final int FLT_MAX_10_EXP = +38;
  public static final int FLT_MAX_EXP =    +128;
  public static final int FLT_MIN_10_EXP = -37;
  public static final int FLT_MIN_EXP =    -125;
  public static final int FLT_RADIX =      2;
  public static final float FLT_MAX =      Float.MAX_VALUE;
  public static final float FLT_MIN =      Float.MIN_NORMAL;
  public static final float FLT_EPSILON =  0x1.0p-23f;

  public static final int DBL_DIG =        15;
  public static final int DBL_MANT_DIG =   53;
  public static final int DBL_MAX_10_EXP = +308;
  public static final int DBL_MAX_EXP =    +1024;
  public static final int DBL_MIN_10_EXP = -307;
  public static final int DBL_MIN_EXP =    -1021;
  public static final int DBL_RADIX =      2;
  public static final double DBL_MAX =     Double.MAX_VALUE;
  public static final double DBL_MIN =     Double.MIN_NORMAL;
  public static final double DBL_EPSILON = 0x1.0p-52;

  public static final float M_E_F =        2.71828174591064f;
  public static final float M_LOG2E_F =    1.44269502162933f;
  public static final float M_LOG10E_F =   0.43429449200630f;
  public static final float M_LN2_F =      0.69314718246460f;
  public static final float M_LN10_F =     2.30258512496948f;
  public static final float M_PI_F =       3.14159274101257f;
  public static final float M_PI_2_F =     1.57079637050629f;
  public static final float M_PI_4_F =     0.78539818525314f;
  public static final float M_1_PI_F =     0.31830987334251f;
  public static final float M_2_PI_F =     0.63661974668503f;
  public static final float M_2_SQRTPI_F = 1.12837922573090f;
  public static final float M_SQRT2_F =    1.41421353816986f;
  public static final float M_SQRT1_2_F =  0.70710676908493f;

  public static final double M_E =        2.718281828459045090796;
  public static final double M_LOG2E =    1.442695040888963387005;
  public static final double M_LOG10E =   0.434294481903251816668;
  public static final double M_LN2 =      0.693147180559945286227;
  public static final double M_LN10 =     2.302585092994045901094;
  public static final double M_PI =       3.141592653589793115998;
  public static final double M_PI_2 =     1.570796326794896557999;
  public static final double M_PI_4 =     0.785398163397448278999;
  public static final double M_1_PI =     0.318309886183790691216;
  public static final double M_2_PI =     0.636619772367581382433;
  public static final double M_2_SQRTPI = 1.128379167095512558561;
  public static final double M_SQRT2 =    1.414213562373095145475;
  public static final double M_SQRT1_2 =  0.707106781186547572737;

  public static final float MAXFLOAT =  Float.MAX_VALUE;
  public static final float HUGE_VALF = Float.POSITIVE_INFINITY;
  public static final double HUGE_VAL = Double.POSITIVE_INFINITY;
  public static final float INFINITY =  Float.POSITIVE_INFINITY;
  public static final float NAN =       Float.NaN;

  // All types

% for type in types:
  public static ${type|l} abs(${type|l} a) {
    return a < ${defaults[type.lower()]}? (${type|l}) -a : a;
  }

  public static ${type|l} max(${type|l} a, ${type|l} b) {
    return a > b? a : b;
  }

  public static ${type|l} min(${type|l} a, ${type|l} b) {
    return a < b? a : b;
  }

  public static ${type|l} clamp(${type|l} a, ${type|l} b, ${type|l} c) {
    return a < b? b : (a > c? c : a);
  }

  public static ${type|l} mix(${type|l} a, ${type|l} b, ${type|l} c) {
    return (${type|l}) (a + (b - a) * c);
  }

  public static ${type|l} maxMag(${type|l} a, ${type|l} b) {
    return abs(a) > abs(b)? a : b;
  }

  public static ${type|l} minMag(${type|l} a, ${type|l} b) {
    return abs(a) < abs(b)? a : b;
  }

  public static ${type|l} select(${type|l} a, ${type|l} b, int c) {
    return c == 0? a : b;
  }
% endfor

  // Int types

% for fname, num_params in math_int_functions.items():
% for type in inttypes:
  public static native ${type|l} ${fname}(${', '.join([f'{type.lower()} {chr(i + ord("a"))}' for i in range(num_params)])});
% endfor
% endfor
  public static native int mad24 (int a, int b, int c);
  public static native int mul24 (int a, int b);

  // Float types

% for fname, num_params in math_float_functions.items():
% for type in floattypes:
  public static native ${type|l} ${fname}(${', '.join([f'{type.lower()} {chr(i + ord("a"))}' for i in range(num_params)])});
% endfor
% endfor
% for fname in ('scalb', 'ldexp', 'pown', 'rootn'):
% for type in floattypes:
  public static native ${type|l} ${fname}(${type|l} a, int n);
% endfor
% endfor
% for fname in ('isFinite', 'isInf', 'isNaN', 'isNormal'):
% for type in floattypes:
  public static native int ${fname}(${type|l} x);
% endfor
% endfor
% for fname in ('isOrdered', 'isUnordered'):
% for type in floattypes:
  public static native int ${fname}(${type|l} x, ${type|l} y);
% endfor
% endfor
}
