package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Float4 {
  public float x;
  public float y;
  public float z;
  public float w;

  public Float4(float x, float y, float z, float w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Float4(float v) {
    this(v, v, v, v);
  }

  public Float4() {
    this((float) 0);
  }

  public Float4(float x, float y, Float2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public Float4(float x, Float2 vec1, float w) {
    this(x, vec1.x, vec1.y, w);
  }

  public Float4(float x, Float3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public Float4(Float2 vec1, float z, float w) {
    this(vec1.x, vec1.y, z, w);
  }

  public Float4(Float2 vec1, Float2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Float4(Float3 vec1, float w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public Float4(Float4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Float2 lo() {
    return new Float2(x, y);
  }

  public Float2 hi() {
    return new Float2(z, w);
  }

  public Float2 odd() {
    return new Float2(y, w);
  }

  public Float2 even() {
    return new Float2(x, z);
  }

  public Byte4 convertByte4() {
    return new Byte4((byte) x, (byte) y, (byte) z, (byte) w);
  }

  public Short4 convertShort4() {
    return new Short4((short) x, (short) y, (short) z, (short) w);
  }

  public Int4 convertInt4() {
    return new Int4((int) x, (int) y, (int) z, (int) w);
  }

  public Long4 convertLong4() {
    return new Long4((long) x, (long) y, (long) z, (long) w);
  }

  public Double4 convertDouble4() {
    return new Double4((double) x, (double) y, (double) z, (double) w);
  }

  public Float2 asFloat2() {
    return new Float2(x, y);
  }

  public Float3 asFloat3() {
    return new Float3(x, y, z);
  }

  public static Int4 isEqual(Float4 a, Float4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static Int4 isNotEqual(Float4 a, Float4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static Int4 isGreater(Float4 a, Float4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static Int4 isGreaterEqual(Float4 a, Float4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static Int4 isLess(Float4 a, Float4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static Int4 isLessEqual(Float4 a, Float4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static Float4 select(Float4 a, Float4 b, Int4 c) {
    return new Float4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static Int4 isFinite(Float4 a) {
    return new Int4(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z), Math.isFinite(a.w));
  }

  public static Int4 isInf(Float4 a) {
    return new Int4(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z), Math.isInf(a.w));
  }

  public static Int4 isNaN(Float4 a) {
    return new Int4(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z), Math.isNaN(a.w));
  }

  public static Int4 isNormal(Float4 a) {
    return new Int4(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z), Math.isNormal(a.w));
  }

  public static Int4 isOrdered(Float4 a, Float4 b) {
    return new Int4(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z), Math.isOrdered(a.w, b.w));
  }

  public static Int4 isUnordered(Float4 a, Float4 b) {
    return new Int4(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z), Math.isUnordered(a.w, b.w));
  }

  public static int any(Float4 a) {
    return (a.x != 0.0f || a.y != 0.0f || a.z != 0.0f || a.w != 0.0f)? 1 : 0;
  }

  public static int all(Float4 a) {
    return (a.x == 0.0f || a.y == 0.0f || a.z == 0.0f || a.w == 0.0f)? 1 : 0;
  }

  public static Float4 add(Float4 a, Float4 b) {
    return new Float4((float)(a.x + b.x), (float)(a.y + b.y), (float)(a.z + b.z), (float)(a.w + b.w));
  }

  public static Float4 sub(Float4 a, Float4 b) {
    return new Float4((float)(a.x - b.x), (float)(a.y - b.y), (float)(a.z - b.z), (float)(a.w - b.w));
  }

  public static Double4 mul(Float4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static Double4 mul(Float4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static Float4 mul(Float4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static Float4 mul(Float4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static Double4 div(Float4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static Double4 div(Float4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static Float4 div(Float4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static Float4 div(Float4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static Float4 cross(Float4 a, Float4 b) {
    float resX = a.y * b.z - a.z * b.y;
    float resY = a.z * b.x - a.x * b.z;
    float resZ = a.x * b.y - a.y * b.x;
    return new Float4(resX, resY, resZ, 0.0f);
  }

  public static float dot(Float4 a, Float4 b) {
    return (float)(a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
  }

  public static double distance(Float4 a, Float4 b) {
    return length(sub(a, b));
  }

  public static double length(Float4 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
  }

  public static Float4 normalize(Float4 a) {
    double len = length(a);
    return new Float4((float)(a.x / len), (float)(a.y / len), (float)(a.z / len), (float)(a.w / len));
  }


  public static Float4 abs(Float4 a) {
    return new Float4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static Float4 clamp(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static Float4 max(Float4 a, Float4 b) {
    return new Float4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static Float4 maxMag(Float4 a, Float4 b) {
    return new Float4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static Float4 min(Float4 a, Float4 b) {
    return new Float4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static Float4 minMag(Float4 a, Float4 b) {
    return new Float4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static Float4 mix(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static Float4 clamp(Float4 v, float min, float max) {
    return new Float4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static Float4 max(Float4 x, float y) {
    return new Float4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static Float4 min(Float4 x, float y) {
    return new Float4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static Float4 mix(Float4 x, Float4 y, float a) {
    return new Float4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static Float4 acos(Float4 a) {
    return new Float4(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z), Math.acos(a.w));
  }

  public static Float4 acosh(Float4 a) {
    return new Float4(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z), Math.acosh(a.w));
  }

  public static Float4 asin(Float4 a) {
    return new Float4(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z), Math.asin(a.w));
  }

  public static Float4 asinh(Float4 a) {
    return new Float4(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z), Math.asinh(a.w));
  }

  public static Float4 atan(Float4 a) {
    return new Float4(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z), Math.atan(a.w));
  }

  public static Float4 atan2(Float4 a, Float4 b) {
    return new Float4(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z), Math.atan2(a.w, b.w));
  }

  public static Float4 atanh(Float4 a) {
    return new Float4(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z), Math.atanh(a.w));
  }

  public static Float4 cbrt(Float4 a) {
    return new Float4(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z), Math.cbrt(a.w));
  }

  public static Float4 ceil(Float4 a) {
    return new Float4(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z), Math.ceil(a.w));
  }

  public static Float4 copySign(Float4 a, Float4 b) {
    return new Float4(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z), Math.copySign(a.w, b.w));
  }

  public static Float4 cos(Float4 a) {
    return new Float4(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z), Math.cos(a.w));
  }

  public static Float4 cosh(Float4 a) {
    return new Float4(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z), Math.cosh(a.w));
  }

  public static Float4 erf(Float4 a) {
    return new Float4(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z), Math.erf(a.w));
  }

  public static Float4 erfc(Float4 a) {
    return new Float4(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z), Math.erfc(a.w));
  }

  public static Float4 exp(Float4 a) {
    return new Float4(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z), Math.exp(a.w));
  }

  public static Float4 exp10(Float4 a) {
    return new Float4(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z), Math.exp10(a.w));
  }

  public static Float4 exp2(Float4 a) {
    return new Float4(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z), Math.exp2(a.w));
  }

  public static Float4 expm1(Float4 a) {
    return new Float4(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z), Math.expm1(a.w));
  }

  public static Float4 fdim(Float4 a, Float4 b) {
    return new Float4(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z), Math.fdim(a.w, b.w));
  }

  public static Float4 floor(Float4 a) {
    return new Float4(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z), Math.floor(a.w));
  }

  public static Float4 fma(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z), Math.fma(a.w, b.w, c.w));
  }

  public static Float4 fmod(Float4 a, Float4 b) {
    return new Float4(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z), Math.fmod(a.w, b.w));
  }

  public static Float4 fract(Float4 a) {
    return new Float4(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z), Math.fract(a.w));
  }

  public static Float4 frexp(Float4 a) {
    return new Float4(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z), Math.frexp(a.w));
  }

  public static Float4 getExponent(Float4 a) {
    return new Float4(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z), Math.getExponent(a.w));
  }

  public static Float4 hypot(Float4 a, Float4 b) {
    return new Float4(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z), Math.hypot(a.w, b.w));
  }

  public static Float4 lgamma(Float4 a) {
    return new Float4(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z), Math.lgamma(a.w));
  }

  public static Float4 log(Float4 a) {
    return new Float4(Math.log(a.x), Math.log(a.y), Math.log(a.z), Math.log(a.w));
  }

  public static Float4 log10(Float4 a) {
    return new Float4(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z), Math.log10(a.w));
  }

  public static Float4 log1p(Float4 a) {
    return new Float4(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z), Math.log1p(a.w));
  }

  public static Float4 log2(Float4 a) {
    return new Float4(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z), Math.log2(a.w));
  }

  public static Float4 logb(Float4 a) {
    return new Float4(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z), Math.logb(a.w));
  }

  public static Float4 mad(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z), Math.mad(a.w, b.w, c.w));
  }

  public static Float4 nextAfter(Float4 a, Float4 b) {
    return new Float4(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z), Math.nextAfter(a.w, b.w));
  }

  public static Float4 pow(Float4 a, Float4 b) {
    return new Float4(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z), Math.pow(a.w, b.w));
  }

  public static Float4 powr(Float4 a, Float4 b) {
    return new Float4(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z), Math.powr(a.w, b.w));
  }

  public static Float4 remainder(Float4 a, Float4 b) {
    return new Float4(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z), Math.remainder(a.w, b.w));
  }

  public static Float4 rint(Float4 a) {
    return new Float4(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z), Math.rint(a.w));
  }

  public static Float4 round(Float4 a) {
    return new Float4(Math.round(a.x), Math.round(a.y), Math.round(a.z), Math.round(a.w));
  }

  public static Float4 rsqrt(Float4 a) {
    return new Float4(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z), Math.rsqrt(a.w));
  }

  public static Float4 signum(Float4 a) {
    return new Float4(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z), Math.signum(a.w));
  }

  public static Float4 sin(Float4 a) {
    return new Float4(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z), Math.sin(a.w));
  }

  public static Float4 sinh(Float4 a) {
    return new Float4(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z), Math.sinh(a.w));
  }

  public static Float4 smoothStep(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z), Math.smoothStep(a.w, b.w, c.w));
  }

  public static Float4 sqrt(Float4 a) {
    return new Float4(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z), Math.sqrt(a.w));
  }

  public static Float4 step(Float4 a, Float4 b) {
    return new Float4(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z), Math.step(a.w, b.w));
  }

  public static Float4 tan(Float4 a) {
    return new Float4(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z), Math.tan(a.w));
  }

  public static Float4 tanh(Float4 a) {
    return new Float4(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z), Math.tanh(a.w));
  }

  public static Float4 tgamma(Float4 a) {
    return new Float4(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z), Math.tgamma(a.w));
  }

  public static Float4 toDegrees(Float4 a) {
    return new Float4(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z), Math.toDegrees(a.w));
  }

  public static Float4 toRadians(Float4 a) {
    return new Float4(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z), Math.toRadians(a.w));
  }

  public static Float4 trunc(Float4 a) {
    return new Float4(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z), Math.trunc(a.w));
  }

  public static Float4 scalb(Float4 a, Int4 n) {
    return new Float4(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z), Math.scalb(a.w, n.w));
  }

  public static Float4 ldexp(Float4 a, Int4 n) {
    return new Float4(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z), Math.ldexp(a.w, n.w));
  }

  public static Float4 pown(Float4 a, Int4 b) {
    return new Float4(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w));
  }

  public static Float4 rootn(Float4 a, Int4 b) {
    return new Float4(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w));
  }

  public static Float4 smoothStep(Float4 a, Float4 b, float c) {
    return new Float4(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c), Math.smoothStep(a.w, b.w, c));
  }
}
