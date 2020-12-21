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

  public static byte abs(byte a) {
    return a < '\0'? (byte) -a : a;
  }

  public static byte max(byte a, byte b) {
    return a > b? a : b;
  }

  public static byte min(byte a, byte b) {
    return a < b? a : b;
  }

  public static byte clamp(byte a, byte b, byte c) {
    return a < b? b : (a > c? c : a);
  }

  public static byte mix(byte a, byte b, byte c) {
    return (byte) (a + (b - a) * c);
  }

  public static byte maxMag(byte a, byte b) {
    return abs(a) > abs(b)? a : b;
  }

  public static byte minMag(byte a, byte b) {
    return abs(a) < abs(b)? a : b;
  }

  public static byte select(byte a, byte b, int c) {
    return c == 0? a : b;
  }
  public static short abs(short a) {
    return a < 0? (short) -a : a;
  }

  public static short max(short a, short b) {
    return a > b? a : b;
  }

  public static short min(short a, short b) {
    return a < b? a : b;
  }

  public static short clamp(short a, short b, short c) {
    return a < b? b : (a > c? c : a);
  }

  public static short mix(short a, short b, short c) {
    return (short) (a + (b - a) * c);
  }

  public static short maxMag(short a, short b) {
    return abs(a) > abs(b)? a : b;
  }

  public static short minMag(short a, short b) {
    return abs(a) < abs(b)? a : b;
  }

  public static short select(short a, short b, int c) {
    return c == 0? a : b;
  }
  public static int abs(int a) {
    return a < 0? (int) -a : a;
  }

  public static int max(int a, int b) {
    return a > b? a : b;
  }

  public static int min(int a, int b) {
    return a < b? a : b;
  }

  public static int clamp(int a, int b, int c) {
    return a < b? b : (a > c? c : a);
  }

  public static int mix(int a, int b, int c) {
    return (int) (a + (b - a) * c);
  }

  public static int maxMag(int a, int b) {
    return abs(a) > abs(b)? a : b;
  }

  public static int minMag(int a, int b) {
    return abs(a) < abs(b)? a : b;
  }

  public static int select(int a, int b, int c) {
    return c == 0? a : b;
  }
  public static long abs(long a) {
    return a < 0L? (long) -a : a;
  }

  public static long max(long a, long b) {
    return a > b? a : b;
  }

  public static long min(long a, long b) {
    return a < b? a : b;
  }

  public static long clamp(long a, long b, long c) {
    return a < b? b : (a > c? c : a);
  }

  public static long mix(long a, long b, long c) {
    return (long) (a + (b - a) * c);
  }

  public static long maxMag(long a, long b) {
    return abs(a) > abs(b)? a : b;
  }

  public static long minMag(long a, long b) {
    return abs(a) < abs(b)? a : b;
  }

  public static long select(long a, long b, int c) {
    return c == 0? a : b;
  }
  public static float abs(float a) {
    return a < 0.0f? (float) -a : a;
  }

  public static float max(float a, float b) {
    return a > b? a : b;
  }

  public static float min(float a, float b) {
    return a < b? a : b;
  }

  public static float clamp(float a, float b, float c) {
    return a < b? b : (a > c? c : a);
  }

  public static float mix(float a, float b, float c) {
    return (float) (a + (b - a) * c);
  }

  public static float maxMag(float a, float b) {
    return abs(a) > abs(b)? a : b;
  }

  public static float minMag(float a, float b) {
    return abs(a) < abs(b)? a : b;
  }

  public static float select(float a, float b, int c) {
    return c == 0? a : b;
  }
  public static double abs(double a) {
    return a < 0.0? (double) -a : a;
  }

  public static double max(double a, double b) {
    return a > b? a : b;
  }

  public static double min(double a, double b) {
    return a < b? a : b;
  }

  public static double clamp(double a, double b, double c) {
    return a < b? b : (a > c? c : a);
  }

  public static double mix(double a, double b, double c) {
    return (double) (a + (b - a) * c);
  }

  public static double maxMag(double a, double b) {
    return abs(a) > abs(b)? a : b;
  }

  public static double minMag(double a, double b) {
    return abs(a) < abs(b)? a : b;
  }

  public static double select(double a, double b, int c) {
    return c == 0? a : b;
  }

  // Int types

  public static native byte absDiff(byte a, byte b);
  public static native short absDiff(short a, short b);
  public static native int absDiff(int a, int b);
  public static native long absDiff(long a, long b);
  public static native byte addSat(byte a, byte b);
  public static native short addSat(short a, short b);
  public static native int addSat(int a, int b);
  public static native long addSat(long a, long b);
  public static native byte clz(byte a);
  public static native short clz(short a);
  public static native int clz(int a);
  public static native long clz(long a);
  public static native byte hadd(byte a, byte b);
  public static native short hadd(short a, short b);
  public static native int hadd(int a, int b);
  public static native long hadd(long a, long b);
  public static native byte madHi(byte a, byte b, byte c);
  public static native short madHi(short a, short b, short c);
  public static native int madHi(int a, int b, int c);
  public static native long madHi(long a, long b, long c);
  public static native byte madSat(byte a, byte b, byte c);
  public static native short madSat(short a, short b, short c);
  public static native int madSat(int a, int b, int c);
  public static native long madSat(long a, long b, long c);
  public static native byte mulHi(byte a, byte b);
  public static native short mulHi(short a, short b);
  public static native int mulHi(int a, int b);
  public static native long mulHi(long a, long b);
  public static native byte rhadd(byte a, byte b);
  public static native short rhadd(short a, short b);
  public static native int rhadd(int a, int b);
  public static native long rhadd(long a, long b);
  public static native byte rotate(byte a, byte b);
  public static native short rotate(short a, short b);
  public static native int rotate(int a, int b);
  public static native long rotate(long a, long b);
  public static native byte subSat(byte a, byte b);
  public static native short subSat(short a, short b);
  public static native int subSat(int a, int b);
  public static native long subSat(long a, long b);
  public static native int mad24 (int a, int b, int c);
  public static native int mul24 (int a, int b);

  // Float types

  public static native float acos(float a);
  public static native double acos(double a);
  public static native float asin(float a);
  public static native double asin(double a);
  public static native float atan(float a);
  public static native double atan(double a);
  public static native float atan2(float a, float b);
  public static native double atan2(double a, double b);
  public static native float cbrt(float a);
  public static native double cbrt(double a);
  public static native float ceil(float a);
  public static native double ceil(double a);
  public static native float copySign(float a, float b);
  public static native double copySign(double a, double b);
  public static native float cos(float a);
  public static native double cos(double a);
  public static native float cosh(float a);
  public static native double cosh(double a);
  public static native float exp(float a);
  public static native double exp(double a);
  public static native float expm1(float a);
  public static native double expm1(double a);
  public static native float floor(float a);
  public static native double floor(double a);
  public static native float getExponent(float a);
  public static native double getExponent(double a);
  public static native float hypot(float a, float b);
  public static native double hypot(double a, double b);
  public static native float remainder(float a, float b);
  public static native double remainder(double a, double b);
  public static native float log(float a);
  public static native double log(double a);
  public static native float log10(float a);
  public static native double log10(double a);
  public static native float log1p(float a);
  public static native double log1p(double a);
  public static native float nextAfter(float a, float b);
  public static native double nextAfter(double a, double b);
  public static native float pow(float a, float b);
  public static native double pow(double a, double b);
  public static native float rint(float a);
  public static native double rint(double a);
  public static native float round(float a);
  public static native double round(double a);
  public static native float signum(float a);
  public static native double signum(double a);
  public static native float sin(float a);
  public static native double sin(double a);
  public static native float sinh(float a);
  public static native double sinh(double a);
  public static native float sqrt(float a);
  public static native double sqrt(double a);
  public static native float tan(float a);
  public static native double tan(double a);
  public static native float tanh(float a);
  public static native double tanh(double a);
  public static native float toDegrees(float a);
  public static native double toDegrees(double a);
  public static native float toRadians(float a);
  public static native double toRadians(double a);
  public static native float smoothStep(float a, float b, float c);
  public static native double smoothStep(double a, double b, double c);
  public static native float step(float a, float b);
  public static native double step(double a, double b);
  public static native float acosh(float a);
  public static native double acosh(double a);
  public static native float asinh(float a);
  public static native double asinh(double a);
  public static native float atanh(float a);
  public static native double atanh(double a);
  public static native float erf(float a);
  public static native double erf(double a);
  public static native float erfc(float a);
  public static native double erfc(double a);
  public static native float exp2(float a);
  public static native double exp2(double a);
  public static native float exp10(float a);
  public static native double exp10(double a);
  public static native float fdim(float a, float b);
  public static native double fdim(double a, double b);
  public static native float fma(float a, float b, float c);
  public static native double fma(double a, double b, double c);
  public static native float fmod(float a, float b);
  public static native double fmod(double a, double b);
  public static native float fract(float a);
  public static native double fract(double a);
  public static native float frexp(float a);
  public static native double frexp(double a);
  public static native float lgamma(float a);
  public static native double lgamma(double a);
  public static native float log2(float a);
  public static native double log2(double a);
  public static native float logb(float a);
  public static native double logb(double a);
  public static native float mad(float a, float b, float c);
  public static native double mad(double a, double b, double c);
  public static native float powr(float a, float b);
  public static native double powr(double a, double b);
  public static native float rsqrt(float a);
  public static native double rsqrt(double a);
  public static native float tgamma(float a);
  public static native double tgamma(double a);
  public static native float trunc(float a);
  public static native double trunc(double a);
  public static native float scalb(float a, int n);
  public static native double scalb(double a, int n);
  public static native float ldexp(float a, int n);
  public static native double ldexp(double a, int n);
  public static native float pown(float a, int n);
  public static native double pown(double a, int n);
  public static native float rootn(float a, int n);
  public static native double rootn(double a, int n);
  public static native int isFinite(float x);
  public static native int isFinite(double x);
  public static native int isInf(float x);
  public static native int isInf(double x);
  public static native int isNaN(float x);
  public static native int isNaN(double x);
  public static native int isNormal(float x);
  public static native int isNormal(double x);
  public static native int isOrdered(float x, float y);
  public static native int isOrdered(double x, double y);
  public static native int isUnordered(float x, float y);
  public static native int isUnordered(double x, double y);
}
