package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Float2 {
  public float x;
  public float y;

  public Float2 (float x, float y) {
    this.x = x;
    this.y = y;
  }

  public Float2 (float v) {
    this(v, v);
  }

  public Float2 () {
    this((float) 0);
  }

  public Float2 (Float2 vec1) {
    this(vec1.x, vec1.y);
  }

  public Byte2 convertByte2 () {
    return new Byte2((byte) x, (byte) y);
  }

  public Short2 convertShort2 () {
    return new Short2((short) x, (short) y);
  }

  public Int2 convertInt2 () {
    return new Int2((int) x, (int) y);
  }

  public Long2 convertLong2 () {
    return new Long2((long) x, (long) y);
  }

  public Double2 convertDouble2 () {
    return new Double2((double) x, (double) y);
  }

  public static Int2 isEqual (Float2 a, Float2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static Int2 isNotEqual (Float2 a, Float2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static Int2 isGreater (Float2 a, Float2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static Int2 isGreaterEqual (Float2 a, Float2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static Int2 isLess (Float2 a, Float2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static Int2 isLessEqual (Float2 a, Float2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static Float2 select (Float2 a, Float2 b, Int2 c) {
    return new Float2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static Int2 isFinite (Float2 a) {
    return new Int2(Math.isFinite(a.x), Math.isFinite(a.y));
  }

  public static Int2 isInf (Float2 a) {
    return new Int2(Math.isInf(a.x), Math.isInf(a.y));
  }

  public static Int2 isNaN (Float2 a) {
    return new Int2(Math.isNaN(a.x), Math.isNaN(a.y));
  }

  public static Int2 isNormal (Float2 a) {
    return new Int2(Math.isNormal(a.x), Math.isNormal(a.y));
  }

  public static Int2 isOrdered (Float2 a, Float2 b) {
    return new Int2(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y));
  }

  public static Int2 isUnordered (Float2 a, Float2 b) {
    return new Int2(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y));
  }

  public static int any (Float2 a) {
    return (a.x != 0.0f || a.y != 0.0f)? 1 : 0;
  }

  public static int all (Float2 a) {
    return (a.x == 0.0f || a.y == 0.0f)? 1 : 0;
  }

  public static Float2 add (Float2 a, Float2 b) {
    return new Float2((float)(a.x + b.x), (float)(a.y + b.y));
  }

  public static Float2 sub (Float2 a, Float2 b) {
    return new Float2((float)(a.x - b.x), (float)(a.y - b.y));
  }

  public static Double2 mul (Float2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static Double2 mul (Float2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static Float2 mul (Float2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static Float2 mul (Float2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static Double2 div (Float2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static Double2 div (Float2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static Float2 div (Float2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static Float2 div (Float2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static float dot (Float2 a, Float2 b) {
    return (float)(a.x * b.x + a.y * b.y);
  }

  public static double distance (Float2 a, Float2 b) {
    return length(sub(a, b));
  }

  public static double length (Float2 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y);
  }

  public static Float2 normalize (Float2 a) {
    double len = length(a);
    return new Float2((float)(a.x / len), (float)(a.y / len));
  }


  public static Float2 abs (Float2 a) {
    return new Float2(Math.abs(a.x), Math.abs(a.y));
  }

  public static Float2 clamp (Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static Float2 max (Float2 a, Float2 b) {
    return new Float2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static Float2 maxMag (Float2 a, Float2 b) {
    return new Float2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static Float2 min (Float2 a, Float2 b) {
    return new Float2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static Float2 minMag (Float2 a, Float2 b) {
    return new Float2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static Float2 mix (Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static Float2 clamp (Float2 v, float min, float max) {
    return new Float2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static Float2 max (Float2 x, float y) {
    return new Float2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static Float2 min (Float2 x, float y) {
    return new Float2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static Float2 mix (Float2 x, Float2 y, float a) {
    return new Float2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static Float2 acos (Float2 a) {
    return new Float2(Math.acos(a.x), Math.acos(a.y));
  }

  public static Float2 acosh (Float2 a) {
    return new Float2(Math.acosh(a.x), Math.acosh(a.y));
  }

  public static Float2 asin (Float2 a) {
    return new Float2(Math.asin(a.x), Math.asin(a.y));
  }

  public static Float2 asinh (Float2 a) {
    return new Float2(Math.asinh(a.x), Math.asinh(a.y));
  }

  public static Float2 atan (Float2 a) {
    return new Float2(Math.atan(a.x), Math.atan(a.y));
  }

  public static Float2 atan2 (Float2 a, Float2 b) {
    return new Float2(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y));
  }

  public static Float2 atanh (Float2 a) {
    return new Float2(Math.atanh(a.x), Math.atanh(a.y));
  }

  public static Float2 cbrt (Float2 a) {
    return new Float2(Math.cbrt(a.x), Math.cbrt(a.y));
  }

  public static Float2 ceil (Float2 a) {
    return new Float2(Math.ceil(a.x), Math.ceil(a.y));
  }

  public static Float2 copySign (Float2 a, Float2 b) {
    return new Float2(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y));
  }

  public static Float2 cos (Float2 a) {
    return new Float2(Math.cos(a.x), Math.cos(a.y));
  }

  public static Float2 cosh (Float2 a) {
    return new Float2(Math.cosh(a.x), Math.cosh(a.y));
  }

  public static Float2 erf (Float2 a) {
    return new Float2(Math.erf(a.x), Math.erf(a.y));
  }

  public static Float2 erfc (Float2 a) {
    return new Float2(Math.erfc(a.x), Math.erfc(a.y));
  }

  public static Float2 exp (Float2 a) {
    return new Float2(Math.exp(a.x), Math.exp(a.y));
  }

  public static Float2 exp10 (Float2 a) {
    return new Float2(Math.exp10(a.x), Math.exp10(a.y));
  }

  public static Float2 exp2 (Float2 a) {
    return new Float2(Math.exp2(a.x), Math.exp2(a.y));
  }

  public static Float2 expm1 (Float2 a) {
    return new Float2(Math.expm1(a.x), Math.expm1(a.y));
  }

  public static Float2 fdim (Float2 a, Float2 b) {
    return new Float2(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y));
  }

  public static Float2 floor (Float2 a) {
    return new Float2(Math.floor(a.x), Math.floor(a.y));
  }

  public static Float2 fma (Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y));
  }

  public static Float2 fmod (Float2 a, Float2 b) {
    return new Float2(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y));
  }

  public static Float2 fract (Float2 a) {
    return new Float2(Math.fract(a.x), Math.fract(a.y));
  }

  public static Float2 frexp (Float2 a) {
    return new Float2(Math.frexp(a.x), Math.frexp(a.y));
  }

  public static Float2 getExponent (Float2 a) {
    return new Float2(Math.getExponent(a.x), Math.getExponent(a.y));
  }

  public static Float2 hypot (Float2 a, Float2 b) {
    return new Float2(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y));
  }

  public static Float2 lgamma (Float2 a) {
    return new Float2(Math.lgamma(a.x), Math.lgamma(a.y));
  }

  public static Float2 log (Float2 a) {
    return new Float2(Math.log(a.x), Math.log(a.y));
  }

  public static Float2 log10 (Float2 a) {
    return new Float2(Math.log10(a.x), Math.log10(a.y));
  }

  public static Float2 log1p (Float2 a) {
    return new Float2(Math.log1p(a.x), Math.log1p(a.y));
  }

  public static Float2 log2 (Float2 a) {
    return new Float2(Math.log2(a.x), Math.log2(a.y));
  }

  public static Float2 logb (Float2 a) {
    return new Float2(Math.logb(a.x), Math.logb(a.y));
  }

  public static Float2 mad (Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y));
  }

  public static Float2 nextAfter (Float2 a, Float2 b) {
    return new Float2(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y));
  }

  public static Float2 pow (Float2 a, Float2 b) {
    return new Float2(Math.pow(a.x, b.x), Math.pow(a.y, b.y));
  }

  public static Float2 powr (Float2 a, Float2 b) {
    return new Float2(Math.powr(a.x, b.x), Math.powr(a.y, b.y));
  }

  public static Float2 remainder (Float2 a, Float2 b) {
    return new Float2(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y));
  }

  public static Float2 rint (Float2 a) {
    return new Float2(Math.rint(a.x), Math.rint(a.y));
  }

  public static Float2 round (Float2 a) {
    return new Float2(Math.round(a.x), Math.round(a.y));
  }

  public static Float2 rsqrt (Float2 a) {
    return new Float2(Math.rsqrt(a.x), Math.rsqrt(a.y));
  }

  public static Float2 signum (Float2 a) {
    return new Float2(Math.signum(a.x), Math.signum(a.y));
  }

  public static Float2 sin (Float2 a) {
    return new Float2(Math.sin(a.x), Math.sin(a.y));
  }

  public static Float2 sinh (Float2 a) {
    return new Float2(Math.sinh(a.x), Math.sinh(a.y));
  }

  public static Float2 smoothStep (Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y));
  }

  public static Float2 sqrt (Float2 a) {
    return new Float2(Math.sqrt(a.x), Math.sqrt(a.y));
  }

  public static Float2 step (Float2 a, Float2 b) {
    return new Float2(Math.step(a.x, b.x), Math.step(a.y, b.y));
  }

  public static Float2 tan (Float2 a) {
    return new Float2(Math.tan(a.x), Math.tan(a.y));
  }

  public static Float2 tanh (Float2 a) {
    return new Float2(Math.tanh(a.x), Math.tanh(a.y));
  }

  public static Float2 tgamma (Float2 a) {
    return new Float2(Math.tgamma(a.x), Math.tgamma(a.y));
  }

  public static Float2 toDegrees (Float2 a) {
    return new Float2(Math.toDegrees(a.x), Math.toDegrees(a.y));
  }

  public static Float2 toRadians (Float2 a) {
    return new Float2(Math.toRadians(a.x), Math.toRadians(a.y));
  }

  public static Float2 trunc (Float2 a) {
    return new Float2(Math.trunc(a.x), Math.trunc(a.y));
  }

  public static Float2 scalb (Float2 a, Int2 n) {
    return new Float2(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y));
  }

  public static Float2 ldexp (Float2 a, Int2 n) {
    return new Float2(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y));
  }

  public static Float2 pown (Float2 a, Int2 b) {
    return new Float2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static Float2 rootn (Float2 a, Int2 b) {
    return new Float2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static Float2 smoothStep (Float2 a, Float2 b, float c) {
    return new Float2(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c));
  }
}
