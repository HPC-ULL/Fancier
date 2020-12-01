package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Long4 {
  public long x;
  public long y;
  public long z;
  public long w;

  public Long4(long x, long y, long z, long w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Long4(long v) {
    this(v, v, v, v);
  }

  public Long4() {
    this((long) 0);
  }

  public Long4(long x, long y, Long2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public Long4(long x, Long2 vec1, long w) {
    this(x, vec1.x, vec1.y, w);
  }

  public Long4(long x, Long3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public Long4(Long2 vec1, long z, long w) {
    this(vec1.x, vec1.y, z, w);
  }

  public Long4(Long2 vec1, Long2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Long4(Long3 vec1, long w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public Long4(Long4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Long2 lo() {
    return new Long2(x, y);
  }

  public Long2 hi() {
    return new Long2(z, w);
  }

  public Long2 odd() {
    return new Long2(y, w);
  }

  public Long2 even() {
    return new Long2(x, z);
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

  public Float4 convertFloat4() {
    return new Float4((float) x, (float) y, (float) z, (float) w);
  }

  public Double4 convertDouble4() {
    return new Double4((double) x, (double) y, (double) z, (double) w);
  }

  public Long2 asLong2() {
    return new Long2(x, y);
  }

  public Long3 asLong3() {
    return new Long3(x, y, z);
  }

  public static Int4 isEqual(Long4 a, Long4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static Int4 isNotEqual(Long4 a, Long4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static Int4 isGreater(Long4 a, Long4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static Int4 isGreaterEqual(Long4 a, Long4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static Int4 isLess(Long4 a, Long4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static Int4 isLessEqual(Long4 a, Long4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static Long4 select(Long4 a, Long4 b, Int4 c) {
    return new Long4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static int any(Long4 a) {
    return (a.x != 0L || a.y != 0L || a.z != 0L || a.w != 0L)? 1 : 0;
  }

  public static int all(Long4 a) {
    return (a.x == 0L || a.y == 0L || a.z == 0L || a.w == 0L)? 1 : 0;
  }

  public static Long4 add(Long4 a, Long4 b) {
    return new Long4((long)(a.x + b.x), (long)(a.y + b.y), (long)(a.z + b.z), (long)(a.w + b.w));
  }

  public static Long4 sub(Long4 a, Long4 b) {
    return new Long4((long)(a.x - b.x), (long)(a.y - b.y), (long)(a.z - b.z), (long)(a.w - b.w));
  }

  public static Double4 mul(Long4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static Double4 mul(Long4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static Float4 mul(Long4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static Float4 mul(Long4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static Long4 mul(Long4 a, Long4 b) {
    return new Long4((long)(a.x * b.x), (long)(a.y * b.y), (long)(a.z * b.z), (long)(a.w * b.w));
  }

  public static Long4 mul(Long4 a, long k) {
    return new Long4((long)(a.x * k), (long)(a.y * k), (long)(a.z * k), (long)(a.w * k));
  }

  public static Double4 div(Long4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static Double4 div(Long4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static Float4 div(Long4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static Float4 div(Long4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static Long4 div(Long4 a, Long4 b) {
    return new Long4((long)(a.x / b.x), (long)(a.y / b.y), (long)(a.z / b.z), (long)(a.w / b.w));
  }

  public static Long4 div(Long4 a, long k) {
    return new Long4((long)(a.x / k), (long)(a.y / k), (long)(a.z / k), (long)(a.w / k));
  }

  public static Long4 mod(Long4 a, Long4 b) {
    return new Long4((long)(a.x % b.x), (long)(a.y % b.y), (long)(a.z % b.z), (long)(a.w % b.w));
  }

  public static Long4 mod(Long4 a, long k) {
    return new Long4((long)(a.x % k), (long)(a.y % k), (long)(a.z % k), (long)(a.w % k));
  }

  public static Long4 bitAnd(Long4 a, Long4 b) {
    return new Long4((long)(a.x & b.x), (long)(a.y & b.y), (long)(a.z & b.z), (long)(a.w & b.w));
  }

  public static Long4 bitOr(Long4 a, Long4 b) {
    return new Long4((long)(a.x | b.x), (long)(a.y | b.y), (long)(a.z | b.z), (long)(a.w | b.w));
  }

  public static Long4 bitXor(Long4 a, Long4 b) {
    return new Long4((long)(a.x ^ b.x), (long)(a.y ^ b.y), (long)(a.z ^ b.z), (long)(a.w ^ b.w));
  }

  public static Long4 bitNot(Long4 a) {
    return new Long4((long)(~a.x), (long)(~a.y), (long)(~a.z), (long)(~a.w));
  }

  public static Long4 abs(Long4 a) {
    return new Long4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static Long4 clamp(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static Long4 max(Long4 a, Long4 b) {
    return new Long4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static Long4 maxMag(Long4 a, Long4 b) {
    return new Long4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static Long4 min(Long4 a, Long4 b) {
    return new Long4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static Long4 minMag(Long4 a, Long4 b) {
    return new Long4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static Long4 mix(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static Long4 clamp(Long4 v, long min, long max) {
    return new Long4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static Long4 max(Long4 x, long y) {
    return new Long4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static Long4 min(Long4 x, long y) {
    return new Long4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static Long4 mix(Long4 x, Long4 y, long a) {
    return new Long4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static Long4 absDiff(Long4 a, Long4 b) {
    return new Long4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static Long4 addSat(Long4 a, Long4 b) {
    return new Long4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static Long4 clz(Long4 a) {
    return new Long4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static Long4 hadd(Long4 a, Long4 b) {
    return new Long4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static Long4 madHi(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static Long4 madSat(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static Long4 mulHi(Long4 a, Long4 b) {
    return new Long4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static Long4 rhadd(Long4 a, Long4 b) {
    return new Long4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static Long4 rotate(Long4 a, Long4 b) {
    return new Long4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static Long4 subSat(Long4 a, Long4 b) {
    return new Long4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }
}
