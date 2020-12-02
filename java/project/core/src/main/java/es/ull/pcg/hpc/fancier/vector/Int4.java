package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Int4 {
  public int x;
  public int y;
  public int z;
  public int w;

  public Int4(int x, int y, int z, int w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Int4(int v) {
    this(v, v, v, v);
  }

  public Int4() {
    this((int) 0);
  }

  public Int4(int x, int y, Int2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public Int4(int x, Int2 vec1, int w) {
    this(x, vec1.x, vec1.y, w);
  }

  public Int4(int x, Int3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public Int4(Int2 vec1, int z, int w) {
    this(vec1.x, vec1.y, z, w);
  }

  public Int4(Int2 vec1, Int2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Int4(Int3 vec1, int w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public Int4(Int4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Int2 lo() {
    return new Int2(x, y);
  }

  public Int2 hi() {
    return new Int2(z, w);
  }

  public Int2 odd() {
    return new Int2(y, w);
  }

  public Int2 even() {
    return new Int2(x, z);
  }

  public Byte4 convertByte4() {
    return new Byte4((byte) x, (byte) y, (byte) z, (byte) w);
  }

  public Short4 convertShort4() {
    return new Short4((short) x, (short) y, (short) z, (short) w);
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

  public Int2 asInt2() {
    return new Int2(x, y);
  }

  public Int3 asInt3() {
    return new Int3(x, y, z);
  }

  public static Int4 isEqual(Int4 a, Int4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static Int4 isNotEqual(Int4 a, Int4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static Int4 isGreater(Int4 a, Int4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static Int4 isGreaterEqual(Int4 a, Int4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static Int4 isLess(Int4 a, Int4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static Int4 isLessEqual(Int4 a, Int4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static Int4 select(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static int any(Int4 a) {
    return (a.x != 0 || a.y != 0 || a.z != 0 || a.w != 0)? 1 : 0;
  }

  public static int all(Int4 a) {
    return (a.x == 0 || a.y == 0 || a.z == 0 || a.w == 0)? 0 : 1;
  }

  public static Int4 add(Int4 a, Int4 b) {
    return new Int4((int)(a.x + b.x), (int)(a.y + b.y), (int)(a.z + b.z), (int)(a.w + b.w));
  }

  public static Int4 sub(Int4 a, Int4 b) {
    return new Int4((int)(a.x - b.x), (int)(a.y - b.y), (int)(a.z - b.z), (int)(a.w - b.w));
  }

  public static Double4 mul(Int4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static Double4 mul(Int4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static Float4 mul(Int4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static Float4 mul(Int4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static Int4 mul(Int4 a, Int4 b) {
    return new Int4((int)(a.x * b.x), (int)(a.y * b.y), (int)(a.z * b.z), (int)(a.w * b.w));
  }

  public static Int4 mul(Int4 a, int k) {
    return new Int4((int)(a.x * k), (int)(a.y * k), (int)(a.z * k), (int)(a.w * k));
  }

  public static Double4 div(Int4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static Double4 div(Int4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static Float4 div(Int4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static Float4 div(Int4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static Int4 div(Int4 a, Int4 b) {
    return new Int4((int)(a.x / b.x), (int)(a.y / b.y), (int)(a.z / b.z), (int)(a.w / b.w));
  }

  public static Int4 div(Int4 a, int k) {
    return new Int4((int)(a.x / k), (int)(a.y / k), (int)(a.z / k), (int)(a.w / k));
  }

  public static Int4 mod(Int4 a, Int4 b) {
    return new Int4((int)(a.x % b.x), (int)(a.y % b.y), (int)(a.z % b.z), (int)(a.w % b.w));
  }

  public static Int4 mod(Int4 a, int k) {
    return new Int4((int)(a.x % k), (int)(a.y % k), (int)(a.z % k), (int)(a.w % k));
  }

  public static Int4 bitAnd(Int4 a, Int4 b) {
    return new Int4((int)(a.x & b.x), (int)(a.y & b.y), (int)(a.z & b.z), (int)(a.w & b.w));
  }

  public static Int4 bitOr(Int4 a, Int4 b) {
    return new Int4((int)(a.x | b.x), (int)(a.y | b.y), (int)(a.z | b.z), (int)(a.w | b.w));
  }

  public static Int4 bitXor(Int4 a, Int4 b) {
    return new Int4((int)(a.x ^ b.x), (int)(a.y ^ b.y), (int)(a.z ^ b.z), (int)(a.w ^ b.w));
  }

  public static Int4 bitNot(Int4 a) {
    return new Int4((int)(~a.x), (int)(~a.y), (int)(~a.z), (int)(~a.w));
  }

  public static Int4 abs(Int4 a) {
    return new Int4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static Int4 clamp(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static Int4 max(Int4 a, Int4 b) {
    return new Int4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static Int4 maxMag(Int4 a, Int4 b) {
    return new Int4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static Int4 min(Int4 a, Int4 b) {
    return new Int4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static Int4 minMag(Int4 a, Int4 b) {
    return new Int4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static Int4 mix(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static Int4 clamp(Int4 v, int min, int max) {
    return new Int4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static Int4 max(Int4 x, int y) {
    return new Int4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static Int4 min(Int4 x, int y) {
    return new Int4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static Int4 mix(Int4 x, Int4 y, int a) {
    return new Int4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static Int4 absDiff(Int4 a, Int4 b) {
    return new Int4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static Int4 addSat(Int4 a, Int4 b) {
    return new Int4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static Int4 clz(Int4 a) {
    return new Int4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static Int4 hadd(Int4 a, Int4 b) {
    return new Int4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static Int4 madHi(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static Int4 madSat(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static Int4 mulHi(Int4 a, Int4 b) {
    return new Int4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static Int4 rhadd(Int4 a, Int4 b) {
    return new Int4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static Int4 rotate(Int4 a, Int4 b) {
    return new Int4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static Int4 subSat(Int4 a, Int4 b) {
    return new Int4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }

  public static Int4 mad24(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.mad24(a.x, b.x, c.x), Math.mad24(a.y, b.y, c.y), Math.mad24(a.z, b.z, c.z), Math.mad24(a.w, b.w, c.w));
  }

  public static Int4 mul24(Int4 a, Int4 b) {
    return new Int4(Math.mul24(a.x, b.x), Math.mul24(a.y, b.y), Math.mul24(a.z, b.z), Math.mul24(a.w, b.w));
  }
}
