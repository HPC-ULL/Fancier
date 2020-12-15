package es.ull.pcg.hpc.fancier.vector;

import java.nio.ByteBuffer;

import es.ull.pcg.hpc.fancier.Math;

public class Double4 {
  public double x;
  public double y;
  public double z;
  public double w;

  public Double4(double x, double y, double z, double w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Double4(double v) {
    this(v, v, v, v);
  }

  public Double4() {
    this((double) 0);
  }

  public Double4(double x, double y, Double2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public Double4(double x, Double2 vec1, double w) {
    this(x, vec1.x, vec1.y, w);
  }

  public Double4(double x, Double3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public Double4(Double2 vec1, double z, double w) {
    this(vec1.x, vec1.y, z, w);
  }

  public Double4(Double2 vec1, Double2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Double4(Double3 vec1, double w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public Double4(Double4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public static Double4 fromBuffer(ByteBuffer buffer) {
    Double4 result = new Double4();

    result.x = buffer.getDouble();
    result.y = buffer.getDouble();
    result.z = buffer.getDouble();
    result.w = buffer.getDouble();

    return result;
  }

  public void toBuffer(ByteBuffer buffer) {
    buffer.putDouble(this.x);
    buffer.putDouble(this.y);
    buffer.putDouble(this.z);
    buffer.putDouble(this.w);
  }
  public Double2 lo() {
    return new Double2(x, y);
  }

  public Double2 hi() {
    return new Double2(z, w);
  }

  public Double2 odd() {
    return new Double2(y, w);
  }

  public Double2 even() {
    return new Double2(x, z);
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

  public Float4 convertFloat4() {
    return new Float4((float) x, (float) y, (float) z, (float) w);
  }

  public Double2 asDouble2() {
    return new Double2(x, y);
  }

  public Double3 asDouble3() {
    return new Double3(x, y, z);
  }

  public static Int4 isEqual(Double4 a, Double4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static Int4 isNotEqual(Double4 a, Double4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static Int4 isGreater(Double4 a, Double4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static Int4 isGreaterEqual(Double4 a, Double4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static Int4 isLess(Double4 a, Double4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static Int4 isLessEqual(Double4 a, Double4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static Double4 select(Double4 a, Double4 b, Int4 c) {
    return new Double4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static Int4 isFinite(Double4 a) {
    return new Int4(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z), Math.isFinite(a.w));
  }

  public static Int4 isInf(Double4 a) {
    return new Int4(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z), Math.isInf(a.w));
  }

  public static Int4 isNaN(Double4 a) {
    return new Int4(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z), Math.isNaN(a.w));
  }

  public static Int4 isNormal(Double4 a) {
    return new Int4(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z), Math.isNormal(a.w));
  }

  public static Int4 isOrdered(Double4 a, Double4 b) {
    return new Int4(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z), Math.isOrdered(a.w, b.w));
  }

  public static Int4 isUnordered(Double4 a, Double4 b) {
    return new Int4(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z), Math.isUnordered(a.w, b.w));
  }

  public static int any(Double4 a) {
    return (a.x != 0.0 || a.y != 0.0 || a.z != 0.0 || a.w != 0.0)? 1 : 0;
  }

  public static int all(Double4 a) {
    return (a.x == 0.0 || a.y == 0.0 || a.z == 0.0 || a.w == 0.0)? 0 : 1;
  }

  public static Double4 add(Double4 a, Double4 b) {
    return new Double4((double)(a.x + b.x), (double)(a.y + b.y), (double)(a.z + b.z), (double)(a.w + b.w));
  }

  public static Double4 sub(Double4 a, Double4 b) {
    return new Double4((double)(a.x - b.x), (double)(a.y - b.y), (double)(a.z - b.z), (double)(a.w - b.w));
  }

  public static Double4 mul(Double4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static Double4 mul(Double4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static Float4 mul(Double4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static Float4 mul(Double4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static Double4 div(Double4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static Double4 div(Double4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static Float4 div(Double4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static Float4 div(Double4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static Double4 cross(Double4 a, Double4 b) {
    double resX = a.y * b.z - a.z * b.y;
    double resY = a.z * b.x - a.x * b.z;
    double resZ = a.x * b.y - a.y * b.x;
    return new Double4(resX, resY, resZ, 0.0);
  }

  public static double dot(Double4 a, Double4 b) {
    return (double)(a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
  }

  public static double distance(Double4 a, Double4 b) {
    return length(sub(a, b));
  }

  public static double length(Double4 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
  }

  public static Double4 normalize(Double4 a) {
    double len = length(a);
    return new Double4((double)(a.x / len), (double)(a.y / len), (double)(a.z / len), (double)(a.w / len));
  }


  public static Double4 abs(Double4 a) {
    return new Double4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static Double4 clamp(Double4 a, Double4 b, Double4 c) {
    return new Double4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static Double4 max(Double4 a, Double4 b) {
    return new Double4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static Double4 maxMag(Double4 a, Double4 b) {
    return new Double4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static Double4 min(Double4 a, Double4 b) {
    return new Double4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static Double4 minMag(Double4 a, Double4 b) {
    return new Double4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static Double4 mix(Double4 a, Double4 b, Double4 c) {
    return new Double4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static Double4 clamp(Double4 v, double min, double max) {
    return new Double4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static Double4 max(Double4 x, double y) {
    return new Double4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static Double4 min(Double4 x, double y) {
    return new Double4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static Double4 mix(Double4 x, Double4 y, double a) {
    return new Double4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static Double4 acos(Double4 a) {
    return new Double4(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z), Math.acos(a.w));
  }

  public static Double4 acosh(Double4 a) {
    return new Double4(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z), Math.acosh(a.w));
  }

  public static Double4 asin(Double4 a) {
    return new Double4(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z), Math.asin(a.w));
  }

  public static Double4 asinh(Double4 a) {
    return new Double4(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z), Math.asinh(a.w));
  }

  public static Double4 atan(Double4 a) {
    return new Double4(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z), Math.atan(a.w));
  }

  public static Double4 atan2(Double4 a, Double4 b) {
    return new Double4(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z), Math.atan2(a.w, b.w));
  }

  public static Double4 atanh(Double4 a) {
    return new Double4(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z), Math.atanh(a.w));
  }

  public static Double4 cbrt(Double4 a) {
    return new Double4(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z), Math.cbrt(a.w));
  }

  public static Double4 ceil(Double4 a) {
    return new Double4(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z), Math.ceil(a.w));
  }

  public static Double4 copySign(Double4 a, Double4 b) {
    return new Double4(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z), Math.copySign(a.w, b.w));
  }

  public static Double4 cos(Double4 a) {
    return new Double4(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z), Math.cos(a.w));
  }

  public static Double4 cosh(Double4 a) {
    return new Double4(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z), Math.cosh(a.w));
  }

  public static Double4 erf(Double4 a) {
    return new Double4(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z), Math.erf(a.w));
  }

  public static Double4 erfc(Double4 a) {
    return new Double4(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z), Math.erfc(a.w));
  }

  public static Double4 exp(Double4 a) {
    return new Double4(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z), Math.exp(a.w));
  }

  public static Double4 exp10(Double4 a) {
    return new Double4(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z), Math.exp10(a.w));
  }

  public static Double4 exp2(Double4 a) {
    return new Double4(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z), Math.exp2(a.w));
  }

  public static Double4 expm1(Double4 a) {
    return new Double4(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z), Math.expm1(a.w));
  }

  public static Double4 fdim(Double4 a, Double4 b) {
    return new Double4(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z), Math.fdim(a.w, b.w));
  }

  public static Double4 floor(Double4 a) {
    return new Double4(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z), Math.floor(a.w));
  }

  public static Double4 fma(Double4 a, Double4 b, Double4 c) {
    return new Double4(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z), Math.fma(a.w, b.w, c.w));
  }

  public static Double4 fmod(Double4 a, Double4 b) {
    return new Double4(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z), Math.fmod(a.w, b.w));
  }

  public static Double4 fract(Double4 a) {
    return new Double4(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z), Math.fract(a.w));
  }

  public static Double4 frexp(Double4 a) {
    return new Double4(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z), Math.frexp(a.w));
  }

  public static Double4 getExponent(Double4 a) {
    return new Double4(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z), Math.getExponent(a.w));
  }

  public static Double4 hypot(Double4 a, Double4 b) {
    return new Double4(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z), Math.hypot(a.w, b.w));
  }

  public static Double4 lgamma(Double4 a) {
    return new Double4(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z), Math.lgamma(a.w));
  }

  public static Double4 log(Double4 a) {
    return new Double4(Math.log(a.x), Math.log(a.y), Math.log(a.z), Math.log(a.w));
  }

  public static Double4 log10(Double4 a) {
    return new Double4(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z), Math.log10(a.w));
  }

  public static Double4 log1p(Double4 a) {
    return new Double4(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z), Math.log1p(a.w));
  }

  public static Double4 log2(Double4 a) {
    return new Double4(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z), Math.log2(a.w));
  }

  public static Double4 logb(Double4 a) {
    return new Double4(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z), Math.logb(a.w));
  }

  public static Double4 mad(Double4 a, Double4 b, Double4 c) {
    return new Double4(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z), Math.mad(a.w, b.w, c.w));
  }

  public static Double4 nextAfter(Double4 a, Double4 b) {
    return new Double4(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z), Math.nextAfter(a.w, b.w));
  }

  public static Double4 pow(Double4 a, Double4 b) {
    return new Double4(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z), Math.pow(a.w, b.w));
  }

  public static Double4 powr(Double4 a, Double4 b) {
    return new Double4(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z), Math.powr(a.w, b.w));
  }

  public static Double4 remainder(Double4 a, Double4 b) {
    return new Double4(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z), Math.remainder(a.w, b.w));
  }

  public static Double4 rint(Double4 a) {
    return new Double4(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z), Math.rint(a.w));
  }

  public static Double4 round(Double4 a) {
    return new Double4(Math.round(a.x), Math.round(a.y), Math.round(a.z), Math.round(a.w));
  }

  public static Double4 rsqrt(Double4 a) {
    return new Double4(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z), Math.rsqrt(a.w));
  }

  public static Double4 signum(Double4 a) {
    return new Double4(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z), Math.signum(a.w));
  }

  public static Double4 sin(Double4 a) {
    return new Double4(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z), Math.sin(a.w));
  }

  public static Double4 sinh(Double4 a) {
    return new Double4(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z), Math.sinh(a.w));
  }

  public static Double4 smoothStep(Double4 a, Double4 b, Double4 c) {
    return new Double4(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z), Math.smoothStep(a.w, b.w, c.w));
  }

  public static Double4 sqrt(Double4 a) {
    return new Double4(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z), Math.sqrt(a.w));
  }

  public static Double4 step(Double4 a, Double4 b) {
    return new Double4(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z), Math.step(a.w, b.w));
  }

  public static Double4 tan(Double4 a) {
    return new Double4(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z), Math.tan(a.w));
  }

  public static Double4 tanh(Double4 a) {
    return new Double4(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z), Math.tanh(a.w));
  }

  public static Double4 tgamma(Double4 a) {
    return new Double4(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z), Math.tgamma(a.w));
  }

  public static Double4 toDegrees(Double4 a) {
    return new Double4(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z), Math.toDegrees(a.w));
  }

  public static Double4 toRadians(Double4 a) {
    return new Double4(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z), Math.toRadians(a.w));
  }

  public static Double4 trunc(Double4 a) {
    return new Double4(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z), Math.trunc(a.w));
  }

  public static Double4 scalb(Double4 a, Int4 n) {
    return new Double4(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z), Math.scalb(a.w, n.w));
  }

  public static Double4 ldexp(Double4 a, Int4 n) {
    return new Double4(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z), Math.ldexp(a.w, n.w));
  }

  public static Double4 pown(Double4 a, Int4 b) {
    return new Double4(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w));
  }

  public static Double4 rootn(Double4 a, Int4 b) {
    return new Double4(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w));
  }

  public static Double4 smoothStep(Double4 a, Double4 b, double c) {
    return new Double4(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c), Math.smoothStep(a.w, b.w, c));
  }
}
