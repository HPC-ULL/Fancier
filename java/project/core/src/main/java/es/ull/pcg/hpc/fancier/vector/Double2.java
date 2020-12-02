package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Double2 {
  public double x;
  public double y;

  public Double2(double x, double y) {
    this.x = x;
    this.y = y;
  }

  public Double2(double v) {
    this(v, v);
  }

  public Double2() {
    this((double) 0);
  }

  public Double2(Double2 vec1) {
    this(vec1.x, vec1.y);
  }

  public Byte2 convertByte2() {
    return new Byte2((byte) x, (byte) y);
  }

  public Short2 convertShort2() {
    return new Short2((short) x, (short) y);
  }

  public Int2 convertInt2() {
    return new Int2((int) x, (int) y);
  }

  public Long2 convertLong2() {
    return new Long2((long) x, (long) y);
  }

  public Float2 convertFloat2() {
    return new Float2((float) x, (float) y);
  }

  public static Int2 isEqual(Double2 a, Double2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static Int2 isNotEqual(Double2 a, Double2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static Int2 isGreater(Double2 a, Double2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static Int2 isGreaterEqual(Double2 a, Double2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static Int2 isLess(Double2 a, Double2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static Int2 isLessEqual(Double2 a, Double2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static Double2 select(Double2 a, Double2 b, Int2 c) {
    return new Double2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static Int2 isFinite(Double2 a) {
    return new Int2(Math.isFinite(a.x), Math.isFinite(a.y));
  }

  public static Int2 isInf(Double2 a) {
    return new Int2(Math.isInf(a.x), Math.isInf(a.y));
  }

  public static Int2 isNaN(Double2 a) {
    return new Int2(Math.isNaN(a.x), Math.isNaN(a.y));
  }

  public static Int2 isNormal(Double2 a) {
    return new Int2(Math.isNormal(a.x), Math.isNormal(a.y));
  }

  public static Int2 isOrdered(Double2 a, Double2 b) {
    return new Int2(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y));
  }

  public static Int2 isUnordered(Double2 a, Double2 b) {
    return new Int2(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y));
  }

  public static int any(Double2 a) {
    return (a.x != 0.0 || a.y != 0.0)? 1 : 0;
  }

  public static int all(Double2 a) {
    return (a.x == 0.0 || a.y == 0.0)? 0 : 1;
  }

  public static Double2 add(Double2 a, Double2 b) {
    return new Double2((double)(a.x + b.x), (double)(a.y + b.y));
  }

  public static Double2 sub(Double2 a, Double2 b) {
    return new Double2((double)(a.x - b.x), (double)(a.y - b.y));
  }

  public static Double2 mul(Double2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static Double2 mul(Double2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static Float2 mul(Double2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static Float2 mul(Double2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static Double2 div(Double2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static Double2 div(Double2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static Float2 div(Double2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static Float2 div(Double2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static double dot(Double2 a, Double2 b) {
    return (double)(a.x * b.x + a.y * b.y);
  }

  public static double distance(Double2 a, Double2 b) {
    return length(sub(a, b));
  }

  public static double length(Double2 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y);
  }

  public static Double2 normalize(Double2 a) {
    double len = length(a);
    return new Double2((double)(a.x / len), (double)(a.y / len));
  }


  public static Double2 abs(Double2 a) {
    return new Double2(Math.abs(a.x), Math.abs(a.y));
  }

  public static Double2 clamp(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static Double2 max(Double2 a, Double2 b) {
    return new Double2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static Double2 maxMag(Double2 a, Double2 b) {
    return new Double2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static Double2 min(Double2 a, Double2 b) {
    return new Double2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static Double2 minMag(Double2 a, Double2 b) {
    return new Double2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static Double2 mix(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static Double2 clamp(Double2 v, double min, double max) {
    return new Double2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static Double2 max(Double2 x, double y) {
    return new Double2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static Double2 min(Double2 x, double y) {
    return new Double2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static Double2 mix(Double2 x, Double2 y, double a) {
    return new Double2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static Double2 acos(Double2 a) {
    return new Double2(Math.acos(a.x), Math.acos(a.y));
  }

  public static Double2 acosh(Double2 a) {
    return new Double2(Math.acosh(a.x), Math.acosh(a.y));
  }

  public static Double2 asin(Double2 a) {
    return new Double2(Math.asin(a.x), Math.asin(a.y));
  }

  public static Double2 asinh(Double2 a) {
    return new Double2(Math.asinh(a.x), Math.asinh(a.y));
  }

  public static Double2 atan(Double2 a) {
    return new Double2(Math.atan(a.x), Math.atan(a.y));
  }

  public static Double2 atan2(Double2 a, Double2 b) {
    return new Double2(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y));
  }

  public static Double2 atanh(Double2 a) {
    return new Double2(Math.atanh(a.x), Math.atanh(a.y));
  }

  public static Double2 cbrt(Double2 a) {
    return new Double2(Math.cbrt(a.x), Math.cbrt(a.y));
  }

  public static Double2 ceil(Double2 a) {
    return new Double2(Math.ceil(a.x), Math.ceil(a.y));
  }

  public static Double2 copySign(Double2 a, Double2 b) {
    return new Double2(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y));
  }

  public static Double2 cos(Double2 a) {
    return new Double2(Math.cos(a.x), Math.cos(a.y));
  }

  public static Double2 cosh(Double2 a) {
    return new Double2(Math.cosh(a.x), Math.cosh(a.y));
  }

  public static Double2 erf(Double2 a) {
    return new Double2(Math.erf(a.x), Math.erf(a.y));
  }

  public static Double2 erfc(Double2 a) {
    return new Double2(Math.erfc(a.x), Math.erfc(a.y));
  }

  public static Double2 exp(Double2 a) {
    return new Double2(Math.exp(a.x), Math.exp(a.y));
  }

  public static Double2 exp10(Double2 a) {
    return new Double2(Math.exp10(a.x), Math.exp10(a.y));
  }

  public static Double2 exp2(Double2 a) {
    return new Double2(Math.exp2(a.x), Math.exp2(a.y));
  }

  public static Double2 expm1(Double2 a) {
    return new Double2(Math.expm1(a.x), Math.expm1(a.y));
  }

  public static Double2 fdim(Double2 a, Double2 b) {
    return new Double2(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y));
  }

  public static Double2 floor(Double2 a) {
    return new Double2(Math.floor(a.x), Math.floor(a.y));
  }

  public static Double2 fma(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y));
  }

  public static Double2 fmod(Double2 a, Double2 b) {
    return new Double2(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y));
  }

  public static Double2 fract(Double2 a) {
    return new Double2(Math.fract(a.x), Math.fract(a.y));
  }

  public static Double2 frexp(Double2 a) {
    return new Double2(Math.frexp(a.x), Math.frexp(a.y));
  }

  public static Double2 getExponent(Double2 a) {
    return new Double2(Math.getExponent(a.x), Math.getExponent(a.y));
  }

  public static Double2 hypot(Double2 a, Double2 b) {
    return new Double2(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y));
  }

  public static Double2 lgamma(Double2 a) {
    return new Double2(Math.lgamma(a.x), Math.lgamma(a.y));
  }

  public static Double2 log(Double2 a) {
    return new Double2(Math.log(a.x), Math.log(a.y));
  }

  public static Double2 log10(Double2 a) {
    return new Double2(Math.log10(a.x), Math.log10(a.y));
  }

  public static Double2 log1p(Double2 a) {
    return new Double2(Math.log1p(a.x), Math.log1p(a.y));
  }

  public static Double2 log2(Double2 a) {
    return new Double2(Math.log2(a.x), Math.log2(a.y));
  }

  public static Double2 logb(Double2 a) {
    return new Double2(Math.logb(a.x), Math.logb(a.y));
  }

  public static Double2 mad(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y));
  }

  public static Double2 nextAfter(Double2 a, Double2 b) {
    return new Double2(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y));
  }

  public static Double2 pow(Double2 a, Double2 b) {
    return new Double2(Math.pow(a.x, b.x), Math.pow(a.y, b.y));
  }

  public static Double2 powr(Double2 a, Double2 b) {
    return new Double2(Math.powr(a.x, b.x), Math.powr(a.y, b.y));
  }

  public static Double2 remainder(Double2 a, Double2 b) {
    return new Double2(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y));
  }

  public static Double2 rint(Double2 a) {
    return new Double2(Math.rint(a.x), Math.rint(a.y));
  }

  public static Double2 round(Double2 a) {
    return new Double2(Math.round(a.x), Math.round(a.y));
  }

  public static Double2 rsqrt(Double2 a) {
    return new Double2(Math.rsqrt(a.x), Math.rsqrt(a.y));
  }

  public static Double2 signum(Double2 a) {
    return new Double2(Math.signum(a.x), Math.signum(a.y));
  }

  public static Double2 sin(Double2 a) {
    return new Double2(Math.sin(a.x), Math.sin(a.y));
  }

  public static Double2 sinh(Double2 a) {
    return new Double2(Math.sinh(a.x), Math.sinh(a.y));
  }

  public static Double2 smoothStep(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y));
  }

  public static Double2 sqrt(Double2 a) {
    return new Double2(Math.sqrt(a.x), Math.sqrt(a.y));
  }

  public static Double2 step(Double2 a, Double2 b) {
    return new Double2(Math.step(a.x, b.x), Math.step(a.y, b.y));
  }

  public static Double2 tan(Double2 a) {
    return new Double2(Math.tan(a.x), Math.tan(a.y));
  }

  public static Double2 tanh(Double2 a) {
    return new Double2(Math.tanh(a.x), Math.tanh(a.y));
  }

  public static Double2 tgamma(Double2 a) {
    return new Double2(Math.tgamma(a.x), Math.tgamma(a.y));
  }

  public static Double2 toDegrees(Double2 a) {
    return new Double2(Math.toDegrees(a.x), Math.toDegrees(a.y));
  }

  public static Double2 toRadians(Double2 a) {
    return new Double2(Math.toRadians(a.x), Math.toRadians(a.y));
  }

  public static Double2 trunc(Double2 a) {
    return new Double2(Math.trunc(a.x), Math.trunc(a.y));
  }

  public static Double2 scalb(Double2 a, Int2 n) {
    return new Double2(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y));
  }

  public static Double2 ldexp(Double2 a, Int2 n) {
    return new Double2(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y));
  }

  public static Double2 pown(Double2 a, Int2 b) {
    return new Double2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static Double2 rootn(Double2 a, Int2 b) {
    return new Double2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static Double2 smoothStep(Double2 a, Double2 b, double c) {
    return new Double2(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c));
  }
}
