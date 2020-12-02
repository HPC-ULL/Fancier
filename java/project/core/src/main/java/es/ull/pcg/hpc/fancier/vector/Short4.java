package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Short4 {
  public short x;
  public short y;
  public short z;
  public short w;

  public Short4(short x, short y, short z, short w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Short4(short v) {
    this(v, v, v, v);
  }

  public Short4() {
    this((short) 0);
  }

  public Short4(short x, short y, Short2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public Short4(short x, Short2 vec1, short w) {
    this(x, vec1.x, vec1.y, w);
  }

  public Short4(short x, Short3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public Short4(Short2 vec1, short z, short w) {
    this(vec1.x, vec1.y, z, w);
  }

  public Short4(Short2 vec1, Short2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Short4(Short3 vec1, short w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public Short4(Short4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Short2 lo() {
    return new Short2(x, y);
  }

  public Short2 hi() {
    return new Short2(z, w);
  }

  public Short2 odd() {
    return new Short2(y, w);
  }

  public Short2 even() {
    return new Short2(x, z);
  }

  public Byte4 convertByte4() {
    return new Byte4((byte) x, (byte) y, (byte) z, (byte) w);
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

  public Double4 convertDouble4() {
    return new Double4((double) x, (double) y, (double) z, (double) w);
  }

  public Short2 asShort2() {
    return new Short2(x, y);
  }

  public Short3 asShort3() {
    return new Short3(x, y, z);
  }

  public static Int4 isEqual(Short4 a, Short4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static Int4 isNotEqual(Short4 a, Short4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static Int4 isGreater(Short4 a, Short4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static Int4 isGreaterEqual(Short4 a, Short4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static Int4 isLess(Short4 a, Short4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static Int4 isLessEqual(Short4 a, Short4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static Short4 select(Short4 a, Short4 b, Int4 c) {
    return new Short4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static int any(Short4 a) {
    return (a.x != (short) 0 || a.y != (short) 0 || a.z != (short) 0 || a.w != (short) 0)? 1 : 0;
  }

  public static int all(Short4 a) {
    return (a.x == (short) 0 || a.y == (short) 0 || a.z == (short) 0 || a.w == (short) 0)? 0 : 1;
  }

  public static Short4 add(Short4 a, Short4 b) {
    return new Short4((short)(a.x + b.x), (short)(a.y + b.y), (short)(a.z + b.z), (short)(a.w + b.w));
  }

  public static Short4 sub(Short4 a, Short4 b) {
    return new Short4((short)(a.x - b.x), (short)(a.y - b.y), (short)(a.z - b.z), (short)(a.w - b.w));
  }

  public static Double4 mul(Short4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static Double4 mul(Short4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static Float4 mul(Short4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static Float4 mul(Short4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static Short4 mul(Short4 a, Short4 b) {
    return new Short4((short)(a.x * b.x), (short)(a.y * b.y), (short)(a.z * b.z), (short)(a.w * b.w));
  }

  public static Short4 mul(Short4 a, short k) {
    return new Short4((short)(a.x * k), (short)(a.y * k), (short)(a.z * k), (short)(a.w * k));
  }

  public static Double4 div(Short4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static Double4 div(Short4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static Float4 div(Short4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static Float4 div(Short4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static Short4 div(Short4 a, Short4 b) {
    return new Short4((short)(a.x / b.x), (short)(a.y / b.y), (short)(a.z / b.z), (short)(a.w / b.w));
  }

  public static Short4 div(Short4 a, short k) {
    return new Short4((short)(a.x / k), (short)(a.y / k), (short)(a.z / k), (short)(a.w / k));
  }

  public static Short4 mod(Short4 a, Short4 b) {
    return new Short4((short)(a.x % b.x), (short)(a.y % b.y), (short)(a.z % b.z), (short)(a.w % b.w));
  }

  public static Short4 mod(Short4 a, short k) {
    return new Short4((short)(a.x % k), (short)(a.y % k), (short)(a.z % k), (short)(a.w % k));
  }

  public static Short4 bitAnd(Short4 a, Short4 b) {
    return new Short4((short)(a.x & b.x), (short)(a.y & b.y), (short)(a.z & b.z), (short)(a.w & b.w));
  }

  public static Short4 bitOr(Short4 a, Short4 b) {
    return new Short4((short)(a.x | b.x), (short)(a.y | b.y), (short)(a.z | b.z), (short)(a.w | b.w));
  }

  public static Short4 bitXor(Short4 a, Short4 b) {
    return new Short4((short)(a.x ^ b.x), (short)(a.y ^ b.y), (short)(a.z ^ b.z), (short)(a.w ^ b.w));
  }

  public static Short4 bitNot(Short4 a) {
    return new Short4((short)(~a.x), (short)(~a.y), (short)(~a.z), (short)(~a.w));
  }

  public static Short4 abs(Short4 a) {
    return new Short4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static Short4 clamp(Short4 a, Short4 b, Short4 c) {
    return new Short4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static Short4 max(Short4 a, Short4 b) {
    return new Short4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static Short4 maxMag(Short4 a, Short4 b) {
    return new Short4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static Short4 min(Short4 a, Short4 b) {
    return new Short4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static Short4 minMag(Short4 a, Short4 b) {
    return new Short4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static Short4 mix(Short4 a, Short4 b, Short4 c) {
    return new Short4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static Short4 clamp(Short4 v, short min, short max) {
    return new Short4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static Short4 max(Short4 x, short y) {
    return new Short4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static Short4 min(Short4 x, short y) {
    return new Short4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static Short4 mix(Short4 x, Short4 y, short a) {
    return new Short4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static Short4 absDiff(Short4 a, Short4 b) {
    return new Short4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static Short4 addSat(Short4 a, Short4 b) {
    return new Short4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static Short4 clz(Short4 a) {
    return new Short4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static Short4 hadd(Short4 a, Short4 b) {
    return new Short4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static Short4 madHi(Short4 a, Short4 b, Short4 c) {
    return new Short4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static Short4 madSat(Short4 a, Short4 b, Short4 c) {
    return new Short4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static Short4 mulHi(Short4 a, Short4 b) {
    return new Short4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static Short4 rhadd(Short4 a, Short4 b) {
    return new Short4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static Short4 rotate(Short4 a, Short4 b) {
    return new Short4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static Short4 subSat(Short4 a, Short4 b) {
    return new Short4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }
}
