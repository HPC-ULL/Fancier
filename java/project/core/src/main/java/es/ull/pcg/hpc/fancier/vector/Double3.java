package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Double3 {
  public double x;
  public double y;
  public double z;

  public Double3 (double x, double y, double z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Double3 (double v) {
    this(v, v, v);
  }

  public Double3 () {
    this((double) 0);
  }

  public Double3 (double x, Double2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public Double3 (Double2 vec1, double z) {
    this(vec1.x, vec1.y, z);
  }

  public Double3 (Double3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public Byte3 convertByte3 () {
    return new Byte3((byte) x, (byte) y, (byte) z);
  }

  public Short3 convertShort3 () {
    return new Short3((short) x, (short) y, (short) z);
  }

  public Int3 convertInt3 () {
    return new Int3((int) x, (int) y, (int) z);
  }

  public Long3 convertLong3 () {
    return new Long3((long) x, (long) y, (long) z);
  }

  public Float3 convertFloat3 () {
    return new Float3((float) x, (float) y, (float) z);
  }

  public Double2 asDouble2 () {
    return new Double2(x, y);
  }

  public static Int3 isEqual (Double3 a, Double3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static Int3 isNotEqual (Double3 a, Double3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static Int3 isGreater (Double3 a, Double3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static Int3 isGreaterEqual (Double3 a, Double3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static Int3 isLess (Double3 a, Double3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static Int3 isLessEqual (Double3 a, Double3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static Double3 select (Double3 a, Double3 b, Int3 c) {
    return new Double3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static Int3 isFinite (Double3 a) {
    return new Int3(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z));
  }

  public static Int3 isInf (Double3 a) {
    return new Int3(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z));
  }

  public static Int3 isNaN (Double3 a) {
    return new Int3(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z));
  }

  public static Int3 isNormal (Double3 a) {
    return new Int3(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z));
  }

  public static Int3 isOrdered (Double3 a, Double3 b) {
    return new Int3(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z));
  }

  public static Int3 isUnordered (Double3 a, Double3 b) {
    return new Int3(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z));
  }

  public static int any (Double3 a) {
    return (a.x != 0.0 || a.y != 0.0 || a.z != 0.0)? 1 : 0;
  }

  public static int all (Double3 a) {
    return (a.x == 0.0 || a.y == 0.0 || a.z == 0.0)? 1 : 0;
  }

  public static Double3 add (Double3 a, Double3 b) {
    return new Double3((double)(a.x + b.x), (double)(a.y + b.y), (double)(a.z + b.z));
  }

  public static Double3 sub (Double3 a, Double3 b) {
    return new Double3((double)(a.x - b.x), (double)(a.y - b.y), (double)(a.z - b.z));
  }

  public static Double3 mul (Double3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static Double3 mul (Double3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static Float3 mul (Double3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static Float3 mul (Double3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static Double3 div (Double3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static Double3 div (Double3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static Float3 div (Double3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static Float3 div (Double3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static Double3 cross (Double3 a, Double3 b) {
    double resX = a.y * b.z - a.z * b.y;
    double resY = a.z * b.x - a.x * b.z;
    double resZ = a.x * b.y - a.y * b.x;
    return new Double3(resX, resY, resZ);
  }

  public static double dot (Double3 a, Double3 b) {
    return (double)(a.x * b.x + a.y * b.y + a.z * b.z);
  }

  public static double distance (Double3 a, Double3 b) {
    return length(sub(a, b));
  }

  public static double length (Double3 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
  }

  public static Double3 normalize (Double3 a) {
    double len = length(a);
    return new Double3((double)(a.x / len), (double)(a.y / len), (double)(a.z / len));
  }


  public static Double3 abs (Double3 a) {
    return new Double3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static Double3 clamp (Double3 a, Double3 b, Double3 c) {
    return new Double3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static Double3 max (Double3 a, Double3 b) {
    return new Double3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static Double3 maxMag (Double3 a, Double3 b) {
    return new Double3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static Double3 min (Double3 a, Double3 b) {
    return new Double3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static Double3 minMag (Double3 a, Double3 b) {
    return new Double3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static Double3 mix (Double3 a, Double3 b, Double3 c) {
    return new Double3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static Double3 clamp (Double3 v, double min, double max) {
    return new Double3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static Double3 max (Double3 x, double y) {
    return new Double3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static Double3 min (Double3 x, double y) {
    return new Double3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static Double3 mix (Double3 x, Double3 y, double a) {
    return new Double3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static Double3 acos (Double3 a) {
    return new Double3(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z));
  }

  public static Double3 acosh (Double3 a) {
    return new Double3(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z));
  }

  public static Double3 asin (Double3 a) {
    return new Double3(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z));
  }

  public static Double3 asinh (Double3 a) {
    return new Double3(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z));
  }

  public static Double3 atan (Double3 a) {
    return new Double3(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z));
  }

  public static Double3 atan2 (Double3 a, Double3 b) {
    return new Double3(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z));
  }

  public static Double3 atanh (Double3 a) {
    return new Double3(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z));
  }

  public static Double3 cbrt (Double3 a) {
    return new Double3(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z));
  }

  public static Double3 ceil (Double3 a) {
    return new Double3(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z));
  }

  public static Double3 copySign (Double3 a, Double3 b) {
    return new Double3(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z));
  }

  public static Double3 cos (Double3 a) {
    return new Double3(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z));
  }

  public static Double3 cosh (Double3 a) {
    return new Double3(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z));
  }

  public static Double3 erf (Double3 a) {
    return new Double3(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z));
  }

  public static Double3 erfc (Double3 a) {
    return new Double3(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z));
  }

  public static Double3 exp (Double3 a) {
    return new Double3(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z));
  }

  public static Double3 exp10 (Double3 a) {
    return new Double3(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z));
  }

  public static Double3 exp2 (Double3 a) {
    return new Double3(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z));
  }

  public static Double3 expm1 (Double3 a) {
    return new Double3(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z));
  }

  public static Double3 fdim (Double3 a, Double3 b) {
    return new Double3(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z));
  }

  public static Double3 floor (Double3 a) {
    return new Double3(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z));
  }

  public static Double3 fma (Double3 a, Double3 b, Double3 c) {
    return new Double3(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z));
  }

  public static Double3 fmod (Double3 a, Double3 b) {
    return new Double3(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z));
  }

  public static Double3 fract (Double3 a) {
    return new Double3(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z));
  }

  public static Double3 frexp (Double3 a) {
    return new Double3(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z));
  }

  public static Double3 getExponent (Double3 a) {
    return new Double3(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z));
  }

  public static Double3 hypot (Double3 a, Double3 b) {
    return new Double3(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z));
  }

  public static Double3 lgamma (Double3 a) {
    return new Double3(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z));
  }

  public static Double3 log (Double3 a) {
    return new Double3(Math.log(a.x), Math.log(a.y), Math.log(a.z));
  }

  public static Double3 log10 (Double3 a) {
    return new Double3(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z));
  }

  public static Double3 log1p (Double3 a) {
    return new Double3(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z));
  }

  public static Double3 log2 (Double3 a) {
    return new Double3(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z));
  }

  public static Double3 logb (Double3 a) {
    return new Double3(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z));
  }

  public static Double3 mad (Double3 a, Double3 b, Double3 c) {
    return new Double3(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z));
  }

  public static Double3 nextAfter (Double3 a, Double3 b) {
    return new Double3(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z));
  }

  public static Double3 pow (Double3 a, Double3 b) {
    return new Double3(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z));
  }

  public static Double3 powr (Double3 a, Double3 b) {
    return new Double3(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z));
  }

  public static Double3 remainder (Double3 a, Double3 b) {
    return new Double3(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z));
  }

  public static Double3 rint (Double3 a) {
    return new Double3(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z));
  }

  public static Double3 round (Double3 a) {
    return new Double3(Math.round(a.x), Math.round(a.y), Math.round(a.z));
  }

  public static Double3 rsqrt (Double3 a) {
    return new Double3(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z));
  }

  public static Double3 signum (Double3 a) {
    return new Double3(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z));
  }

  public static Double3 sin (Double3 a) {
    return new Double3(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z));
  }

  public static Double3 sinh (Double3 a) {
    return new Double3(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z));
  }

  public static Double3 smoothStep (Double3 a, Double3 b, Double3 c) {
    return new Double3(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z));
  }

  public static Double3 sqrt (Double3 a) {
    return new Double3(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z));
  }

  public static Double3 step (Double3 a, Double3 b) {
    return new Double3(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z));
  }

  public static Double3 tan (Double3 a) {
    return new Double3(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z));
  }

  public static Double3 tanh (Double3 a) {
    return new Double3(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z));
  }

  public static Double3 tgamma (Double3 a) {
    return new Double3(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z));
  }

  public static Double3 toDegrees (Double3 a) {
    return new Double3(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z));
  }

  public static Double3 toRadians (Double3 a) {
    return new Double3(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z));
  }

  public static Double3 trunc (Double3 a) {
    return new Double3(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z));
  }

  public static Double3 scalb (Double3 a, Int3 n) {
    return new Double3(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z));
  }

  public static Double3 ldexp (Double3 a, Int3 n) {
    return new Double3(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z));
  }

  public static Double3 pown (Double3 a, Int3 b) {
    return new Double3(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z));
  }

  public static Double3 rootn (Double3 a, Int3 b) {
    return new Double3(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z));
  }

  public static Double3 smoothStep (Double3 a, Double3 b, double c) {
    return new Double3(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c));
  }
}
