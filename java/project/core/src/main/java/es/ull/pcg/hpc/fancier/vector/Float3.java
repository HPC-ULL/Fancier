package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Float3 {
  public float x;
  public float y;
  public float z;

  public Float3(float x, float y, float z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Float3(float v) {
    this(v, v, v);
  }

  public Float3() {
    this((float) 0);
  }

  public Float3(float x, Float2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public Float3(Float2 vec1, float z) {
    this(vec1.x, vec1.y, z);
  }

  public Float3(Float3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public Byte3 convertByte3() {
    return new Byte3((byte) x, (byte) y, (byte) z);
  }

  public Short3 convertShort3() {
    return new Short3((short) x, (short) y, (short) z);
  }

  public Int3 convertInt3() {
    return new Int3((int) x, (int) y, (int) z);
  }

  public Long3 convertLong3() {
    return new Long3((long) x, (long) y, (long) z);
  }

  public Double3 convertDouble3() {
    return new Double3((double) x, (double) y, (double) z);
  }

  public Float2 asFloat2() {
    return new Float2(x, y);
  }

  public static Int3 isEqual(Float3 a, Float3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static Int3 isNotEqual(Float3 a, Float3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static Int3 isGreater(Float3 a, Float3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static Int3 isGreaterEqual(Float3 a, Float3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static Int3 isLess(Float3 a, Float3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static Int3 isLessEqual(Float3 a, Float3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static Float3 select(Float3 a, Float3 b, Int3 c) {
    return new Float3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static Int3 isFinite(Float3 a) {
    return new Int3(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z));
  }

  public static Int3 isInf(Float3 a) {
    return new Int3(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z));
  }

  public static Int3 isNaN(Float3 a) {
    return new Int3(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z));
  }

  public static Int3 isNormal(Float3 a) {
    return new Int3(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z));
  }

  public static Int3 isOrdered(Float3 a, Float3 b) {
    return new Int3(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z));
  }

  public static Int3 isUnordered(Float3 a, Float3 b) {
    return new Int3(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z));
  }

  public static int any(Float3 a) {
    return (a.x != 0.0f || a.y != 0.0f || a.z != 0.0f)? 1 : 0;
  }

  public static int all(Float3 a) {
    return (a.x == 0.0f || a.y == 0.0f || a.z == 0.0f)? 0 : 1;
  }

  public static Float3 add(Float3 a, Float3 b) {
    return new Float3((float)(a.x + b.x), (float)(a.y + b.y), (float)(a.z + b.z));
  }

  public static Float3 sub(Float3 a, Float3 b) {
    return new Float3((float)(a.x - b.x), (float)(a.y - b.y), (float)(a.z - b.z));
  }

  public static Double3 mul(Float3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static Double3 mul(Float3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static Float3 mul(Float3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static Float3 mul(Float3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static Double3 div(Float3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static Double3 div(Float3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static Float3 div(Float3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static Float3 div(Float3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static Float3 cross(Float3 a, Float3 b) {
    float resX = a.y * b.z - a.z * b.y;
    float resY = a.z * b.x - a.x * b.z;
    float resZ = a.x * b.y - a.y * b.x;
    return new Float3(resX, resY, resZ);
  }

  public static float dot(Float3 a, Float3 b) {
    return (float)(a.x * b.x + a.y * b.y + a.z * b.z);
  }

  public static double distance(Float3 a, Float3 b) {
    return length(sub(a, b));
  }

  public static double length(Float3 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
  }

  public static Float3 normalize(Float3 a) {
    double len = length(a);
    return new Float3((float)(a.x / len), (float)(a.y / len), (float)(a.z / len));
  }


  public static Float3 abs(Float3 a) {
    return new Float3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static Float3 clamp(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static Float3 max(Float3 a, Float3 b) {
    return new Float3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static Float3 maxMag(Float3 a, Float3 b) {
    return new Float3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static Float3 min(Float3 a, Float3 b) {
    return new Float3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static Float3 minMag(Float3 a, Float3 b) {
    return new Float3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static Float3 mix(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static Float3 clamp(Float3 v, float min, float max) {
    return new Float3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static Float3 max(Float3 x, float y) {
    return new Float3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static Float3 min(Float3 x, float y) {
    return new Float3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static Float3 mix(Float3 x, Float3 y, float a) {
    return new Float3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static Float3 acos(Float3 a) {
    return new Float3(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z));
  }

  public static Float3 acosh(Float3 a) {
    return new Float3(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z));
  }

  public static Float3 asin(Float3 a) {
    return new Float3(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z));
  }

  public static Float3 asinh(Float3 a) {
    return new Float3(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z));
  }

  public static Float3 atan(Float3 a) {
    return new Float3(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z));
  }

  public static Float3 atan2(Float3 a, Float3 b) {
    return new Float3(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z));
  }

  public static Float3 atanh(Float3 a) {
    return new Float3(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z));
  }

  public static Float3 cbrt(Float3 a) {
    return new Float3(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z));
  }

  public static Float3 ceil(Float3 a) {
    return new Float3(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z));
  }

  public static Float3 copySign(Float3 a, Float3 b) {
    return new Float3(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z));
  }

  public static Float3 cos(Float3 a) {
    return new Float3(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z));
  }

  public static Float3 cosh(Float3 a) {
    return new Float3(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z));
  }

  public static Float3 erf(Float3 a) {
    return new Float3(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z));
  }

  public static Float3 erfc(Float3 a) {
    return new Float3(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z));
  }

  public static Float3 exp(Float3 a) {
    return new Float3(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z));
  }

  public static Float3 exp10(Float3 a) {
    return new Float3(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z));
  }

  public static Float3 exp2(Float3 a) {
    return new Float3(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z));
  }

  public static Float3 expm1(Float3 a) {
    return new Float3(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z));
  }

  public static Float3 fdim(Float3 a, Float3 b) {
    return new Float3(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z));
  }

  public static Float3 floor(Float3 a) {
    return new Float3(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z));
  }

  public static Float3 fma(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z));
  }

  public static Float3 fmod(Float3 a, Float3 b) {
    return new Float3(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z));
  }

  public static Float3 fract(Float3 a) {
    return new Float3(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z));
  }

  public static Float3 frexp(Float3 a) {
    return new Float3(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z));
  }

  public static Float3 getExponent(Float3 a) {
    return new Float3(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z));
  }

  public static Float3 hypot(Float3 a, Float3 b) {
    return new Float3(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z));
  }

  public static Float3 lgamma(Float3 a) {
    return new Float3(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z));
  }

  public static Float3 log(Float3 a) {
    return new Float3(Math.log(a.x), Math.log(a.y), Math.log(a.z));
  }

  public static Float3 log10(Float3 a) {
    return new Float3(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z));
  }

  public static Float3 log1p(Float3 a) {
    return new Float3(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z));
  }

  public static Float3 log2(Float3 a) {
    return new Float3(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z));
  }

  public static Float3 logb(Float3 a) {
    return new Float3(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z));
  }

  public static Float3 mad(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z));
  }

  public static Float3 nextAfter(Float3 a, Float3 b) {
    return new Float3(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z));
  }

  public static Float3 pow(Float3 a, Float3 b) {
    return new Float3(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z));
  }

  public static Float3 powr(Float3 a, Float3 b) {
    return new Float3(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z));
  }

  public static Float3 remainder(Float3 a, Float3 b) {
    return new Float3(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z));
  }

  public static Float3 rint(Float3 a) {
    return new Float3(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z));
  }

  public static Float3 round(Float3 a) {
    return new Float3(Math.round(a.x), Math.round(a.y), Math.round(a.z));
  }

  public static Float3 rsqrt(Float3 a) {
    return new Float3(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z));
  }

  public static Float3 signum(Float3 a) {
    return new Float3(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z));
  }

  public static Float3 sin(Float3 a) {
    return new Float3(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z));
  }

  public static Float3 sinh(Float3 a) {
    return new Float3(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z));
  }

  public static Float3 smoothStep(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z));
  }

  public static Float3 sqrt(Float3 a) {
    return new Float3(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z));
  }

  public static Float3 step(Float3 a, Float3 b) {
    return new Float3(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z));
  }

  public static Float3 tan(Float3 a) {
    return new Float3(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z));
  }

  public static Float3 tanh(Float3 a) {
    return new Float3(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z));
  }

  public static Float3 tgamma(Float3 a) {
    return new Float3(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z));
  }

  public static Float3 toDegrees(Float3 a) {
    return new Float3(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z));
  }

  public static Float3 toRadians(Float3 a) {
    return new Float3(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z));
  }

  public static Float3 trunc(Float3 a) {
    return new Float3(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z));
  }

  public static Float3 scalb(Float3 a, Int3 n) {
    return new Float3(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z));
  }

  public static Float3 ldexp(Float3 a, Int3 n) {
    return new Float3(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z));
  }

  public static Float3 pown(Float3 a, Int3 b) {
    return new Float3(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z));
  }

  public static Float3 rootn(Float3 a, Int3 b) {
    return new Float3(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z));
  }

  public static Float3 smoothStep(Float3 a, Float3 b, float c) {
    return new Float3(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c));
  }
}
