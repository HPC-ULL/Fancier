/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * DO NOT MANUALLY EDIT THIS FILE!
 * This file has been automatically generated, any modifications will be lost
 * when generating the Fancier library. Any modifications to this file must be
 * done via the corresponding template.
 */

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

  @Translatable
  public static byte abs(byte a) {
    return a < '\0'? (byte) -a : a;
  }

  @Translatable
  public static byte max(byte a, byte b) {
    return a > b? a : b;
  }

  @Translatable
  public static byte min(byte a, byte b) {
    return a < b? a : b;
  }

  @Translatable
  public static byte clamp(byte a, byte b, byte c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static byte mix(byte a, byte b, byte c) {
    return (byte) (a + (b - a) * c);
  }

  @Translatable
  public static byte maxMag(byte a, byte b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static byte minMag(byte a, byte b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static byte select(byte a, byte b, int c) {
    return c == 0? a : b;
  }
  @Translatable
  public static short abs(short a) {
    return a < 0? (short) -a : a;
  }

  @Translatable
  public static short max(short a, short b) {
    return a > b? a : b;
  }

  @Translatable
  public static short min(short a, short b) {
    return a < b? a : b;
  }

  @Translatable
  public static short clamp(short a, short b, short c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static short mix(short a, short b, short c) {
    return (short) (a + (b - a) * c);
  }

  @Translatable
  public static short maxMag(short a, short b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static short minMag(short a, short b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static short select(short a, short b, int c) {
    return c == 0? a : b;
  }
  @Translatable
  public static int abs(int a) {
    return a < 0? (int) -a : a;
  }

  @Translatable
  public static int max(int a, int b) {
    return a > b? a : b;
  }

  @Translatable
  public static int min(int a, int b) {
    return a < b? a : b;
  }

  @Translatable
  public static int clamp(int a, int b, int c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static int mix(int a, int b, int c) {
    return (int) (a + (b - a) * c);
  }

  @Translatable
  public static int maxMag(int a, int b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static int minMag(int a, int b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static int select(int a, int b, int c) {
    return c == 0? a : b;
  }
  @Translatable
  public static long abs(long a) {
    return a < 0L? (long) -a : a;
  }

  @Translatable
  public static long max(long a, long b) {
    return a > b? a : b;
  }

  @Translatable
  public static long min(long a, long b) {
    return a < b? a : b;
  }

  @Translatable
  public static long clamp(long a, long b, long c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static long mix(long a, long b, long c) {
    return (long) (a + (b - a) * c);
  }

  @Translatable
  public static long maxMag(long a, long b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static long minMag(long a, long b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static long select(long a, long b, int c) {
    return c == 0? a : b;
  }
  @Translatable
  public static float abs(float a) {
    return a < 0.0f? (float) -a : a;
  }

  @Translatable
  public static float max(float a, float b) {
    return a > b? a : b;
  }

  @Translatable
  public static float min(float a, float b) {
    return a < b? a : b;
  }

  @Translatable
  public static float clamp(float a, float b, float c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static float mix(float a, float b, float c) {
    return (float) (a + (b - a) * c);
  }

  @Translatable
  public static float maxMag(float a, float b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static float minMag(float a, float b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static float select(float a, float b, int c) {
    return c == 0? a : b;
  }
  @Translatable
  public static double abs(double a) {
    return a < 0.0? (double) -a : a;
  }

  @Translatable
  public static double max(double a, double b) {
    return a > b? a : b;
  }

  @Translatable
  public static double min(double a, double b) {
    return a < b? a : b;
  }

  @Translatable
  public static double clamp(double a, double b, double c) {
    return a < b? b : (a > c? c : a);
  }

  @Translatable
  public static double mix(double a, double b, double c) {
    return (double) (a + (b - a) * c);
  }

  @Translatable
  public static double maxMag(double a, double b) {
    return abs(a) > abs(b)? a : b;
  }

  @Translatable
  public static double minMag(double a, double b) {
    return abs(a) < abs(b)? a : b;
  }

  @Translatable
  public static double select(double a, double b, int c) {
    return c == 0? a : b;
  }

  // Int types

  @Translatable
  public static native byte absDiff(byte a, byte b);
  @Translatable
  public static native short absDiff(short a, short b);
  @Translatable
  public static native int absDiff(int a, int b);
  @Translatable
  public static native long absDiff(long a, long b);
  @Translatable
  public static native byte addSat(byte a, byte b);
  @Translatable
  public static native short addSat(short a, short b);
  @Translatable
  public static native int addSat(int a, int b);
  @Translatable
  public static native long addSat(long a, long b);
  @Translatable
  public static native byte clz(byte a);
  @Translatable
  public static native short clz(short a);
  @Translatable
  public static native int clz(int a);
  @Translatable
  public static native long clz(long a);
  @Translatable
  public static native byte hadd(byte a, byte b);
  @Translatable
  public static native short hadd(short a, short b);
  @Translatable
  public static native int hadd(int a, int b);
  @Translatable
  public static native long hadd(long a, long b);
  @Translatable
  public static native byte madHi(byte a, byte b, byte c);
  @Translatable
  public static native short madHi(short a, short b, short c);
  @Translatable
  public static native int madHi(int a, int b, int c);
  @Translatable
  public static native long madHi(long a, long b, long c);
  @Translatable
  public static native byte madSat(byte a, byte b, byte c);
  @Translatable
  public static native short madSat(short a, short b, short c);
  @Translatable
  public static native int madSat(int a, int b, int c);
  @Translatable
  public static native long madSat(long a, long b, long c);
  @Translatable
  public static native byte mulHi(byte a, byte b);
  @Translatable
  public static native short mulHi(short a, short b);
  @Translatable
  public static native int mulHi(int a, int b);
  @Translatable
  public static native long mulHi(long a, long b);
  @Translatable
  public static native byte rhadd(byte a, byte b);
  @Translatable
  public static native short rhadd(short a, short b);
  @Translatable
  public static native int rhadd(int a, int b);
  @Translatable
  public static native long rhadd(long a, long b);
  @Translatable
  public static native byte rotate(byte a, byte b);
  @Translatable
  public static native short rotate(short a, short b);
  @Translatable
  public static native int rotate(int a, int b);
  @Translatable
  public static native long rotate(long a, long b);
  @Translatable
  public static native byte subSat(byte a, byte b);
  @Translatable
  public static native short subSat(short a, short b);
  @Translatable
  public static native int subSat(int a, int b);
  @Translatable
  public static native long subSat(long a, long b);
  @Translatable
  public static native int mad24 (int a, int b, int c);
  @Translatable
  public static native int mul24 (int a, int b);

  // Float types

  @Translatable
  public static native float acos(float a);
  @Translatable
  public static native double acos(double a);
  @Translatable
  public static native float asin(float a);
  @Translatable
  public static native double asin(double a);
  @Translatable
  public static native float atan(float a);
  @Translatable
  public static native double atan(double a);
  @Translatable
  public static native float atan2(float a, float b);
  @Translatable
  public static native double atan2(double a, double b);
  @Translatable
  public static native float cbrt(float a);
  @Translatable
  public static native double cbrt(double a);
  @Translatable
  public static native float ceil(float a);
  @Translatable
  public static native double ceil(double a);
  @Translatable
  public static native float copySign(float a, float b);
  @Translatable
  public static native double copySign(double a, double b);
  @Translatable
  public static native float cos(float a);
  @Translatable
  public static native double cos(double a);
  @Translatable
  public static native float cosh(float a);
  @Translatable
  public static native double cosh(double a);
  @Translatable
  public static native float exp(float a);
  @Translatable
  public static native double exp(double a);
  @Translatable
  public static native float expm1(float a);
  @Translatable
  public static native double expm1(double a);
  @Translatable
  public static native float floor(float a);
  @Translatable
  public static native double floor(double a);
  @Translatable
  public static native float getExponent(float a);
  @Translatable
  public static native double getExponent(double a);
  @Translatable
  public static native float hypot(float a, float b);
  @Translatable
  public static native double hypot(double a, double b);
  @Translatable
  public static native float remainder(float a, float b);
  @Translatable
  public static native double remainder(double a, double b);
  @Translatable
  public static native float log(float a);
  @Translatable
  public static native double log(double a);
  @Translatable
  public static native float log10(float a);
  @Translatable
  public static native double log10(double a);
  @Translatable
  public static native float log1p(float a);
  @Translatable
  public static native double log1p(double a);
  @Translatable
  public static native float nextAfter(float a, float b);
  @Translatable
  public static native double nextAfter(double a, double b);
  @Translatable
  public static native float pow(float a, float b);
  @Translatable
  public static native double pow(double a, double b);
  @Translatable
  public static native float rint(float a);
  @Translatable
  public static native double rint(double a);
  @Translatable
  public static native float round(float a);
  @Translatable
  public static native double round(double a);
  @Translatable
  public static native float signum(float a);
  @Translatable
  public static native double signum(double a);
  @Translatable
  public static native float sin(float a);
  @Translatable
  public static native double sin(double a);
  @Translatable
  public static native float sinh(float a);
  @Translatable
  public static native double sinh(double a);
  @Translatable
  public static native float sqrt(float a);
  @Translatable
  public static native double sqrt(double a);
  @Translatable
  public static native float tan(float a);
  @Translatable
  public static native double tan(double a);
  @Translatable
  public static native float tanh(float a);
  @Translatable
  public static native double tanh(double a);
  @Translatable
  public static native float toDegrees(float a);
  @Translatable
  public static native double toDegrees(double a);
  @Translatable
  public static native float toRadians(float a);
  @Translatable
  public static native double toRadians(double a);
  @Translatable
  public static native float smoothStep(float a, float b, float c);
  @Translatable
  public static native double smoothStep(double a, double b, double c);
  @Translatable
  public static native float step(float a, float b);
  @Translatable
  public static native double step(double a, double b);
  @Translatable
  public static native float acosh(float a);
  @Translatable
  public static native double acosh(double a);
  @Translatable
  public static native float asinh(float a);
  @Translatable
  public static native double asinh(double a);
  @Translatable
  public static native float atanh(float a);
  @Translatable
  public static native double atanh(double a);
  @Translatable
  public static native float erf(float a);
  @Translatable
  public static native double erf(double a);
  @Translatable
  public static native float erfc(float a);
  @Translatable
  public static native double erfc(double a);
  @Translatable
  public static native float exp2(float a);
  @Translatable
  public static native double exp2(double a);
  @Translatable
  public static native float exp10(float a);
  @Translatable
  public static native double exp10(double a);
  @Translatable
  public static native float fdim(float a, float b);
  @Translatable
  public static native double fdim(double a, double b);
  @Translatable
  public static native float fma(float a, float b, float c);
  @Translatable
  public static native double fma(double a, double b, double c);
  @Translatable
  public static native float fmod(float a, float b);
  @Translatable
  public static native double fmod(double a, double b);
  @Translatable
  public static native float fract(float a);
  @Translatable
  public static native double fract(double a);
  @Translatable
  public static native float frexp(float a);
  @Translatable
  public static native double frexp(double a);
  @Translatable
  public static native float lgamma(float a);
  @Translatable
  public static native double lgamma(double a);
  @Translatable
  public static native float log2(float a);
  @Translatable
  public static native double log2(double a);
  @Translatable
  public static native float logb(float a);
  @Translatable
  public static native double logb(double a);
  @Translatable
  public static native float mad(float a, float b, float c);
  @Translatable
  public static native double mad(double a, double b, double c);
  @Translatable
  public static native float powr(float a, float b);
  @Translatable
  public static native double powr(double a, double b);
  @Translatable
  public static native float rsqrt(float a);
  @Translatable
  public static native double rsqrt(double a);
  @Translatable
  public static native float tgamma(float a);
  @Translatable
  public static native double tgamma(double a);
  @Translatable
  public static native float trunc(float a);
  @Translatable
  public static native double trunc(double a);
  @Translatable
  public static native float scalb(float a, int n);
  @Translatable
  public static native double scalb(double a, int n);
  @Translatable
  public static native float ldexp(float a, int n);
  @Translatable
  public static native double ldexp(double a, int n);
  @Translatable
  public static native float pown(float a, int n);
  @Translatable
  public static native double pown(double a, int n);
  @Translatable
  public static native float rootn(float a, int n);
  @Translatable
  public static native double rootn(double a, int n);
  @Translatable
  public static native int isFinite(float x);
  @Translatable
  public static native int isFinite(double x);
  @Translatable
  public static native int isInf(float x);
  @Translatable
  public static native int isInf(double x);
  @Translatable
  public static native int isNaN(float x);
  @Translatable
  public static native int isNaN(double x);
  @Translatable
  public static native int isNormal(float x);
  @Translatable
  public static native int isNormal(double x);
  @Translatable
  public static native int isOrdered(float x, float y);
  @Translatable
  public static native int isOrdered(double x, double y);
  @Translatable
  public static native int isUnordered(float x, float y);
  @Translatable
  public static native int isUnordered(double x, double y);
}
