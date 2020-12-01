package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Long3 {
  public long x;
  public long y;
  public long z;

  public Long3(long x, long y, long z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Long3(long v) {
    this(v, v, v);
  }

  public Long3() {
    this((long) 0);
  }

  public Long3(long x, Long2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public Long3(Long2 vec1, long z) {
    this(vec1.x, vec1.y, z);
  }

  public Long3(Long3 vec1) {
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

  public Float3 convertFloat3() {
    return new Float3((float) x, (float) y, (float) z);
  }

  public Double3 convertDouble3() {
    return new Double3((double) x, (double) y, (double) z);
  }

  public Long2 asLong2() {
    return new Long2(x, y);
  }

  public static Int3 isEqual(Long3 a, Long3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static Int3 isNotEqual(Long3 a, Long3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static Int3 isGreater(Long3 a, Long3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static Int3 isGreaterEqual(Long3 a, Long3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static Int3 isLess(Long3 a, Long3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static Int3 isLessEqual(Long3 a, Long3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static Long3 select(Long3 a, Long3 b, Int3 c) {
    return new Long3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static int any(Long3 a) {
    return (a.x != 0L || a.y != 0L || a.z != 0L)? 1 : 0;
  }

  public static int all(Long3 a) {
    return (a.x == 0L || a.y == 0L || a.z == 0L)? 1 : 0;
  }

  public static Long3 add(Long3 a, Long3 b) {
    return new Long3((long)(a.x + b.x), (long)(a.y + b.y), (long)(a.z + b.z));
  }

  public static Long3 sub(Long3 a, Long3 b) {
    return new Long3((long)(a.x - b.x), (long)(a.y - b.y), (long)(a.z - b.z));
  }

  public static Double3 mul(Long3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static Double3 mul(Long3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static Float3 mul(Long3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static Float3 mul(Long3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static Long3 mul(Long3 a, Long3 b) {
    return new Long3((long)(a.x * b.x), (long)(a.y * b.y), (long)(a.z * b.z));
  }

  public static Long3 mul(Long3 a, long k) {
    return new Long3((long)(a.x * k), (long)(a.y * k), (long)(a.z * k));
  }

  public static Double3 div(Long3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static Double3 div(Long3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static Float3 div(Long3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static Float3 div(Long3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static Long3 div(Long3 a, Long3 b) {
    return new Long3((long)(a.x / b.x), (long)(a.y / b.y), (long)(a.z / b.z));
  }

  public static Long3 div(Long3 a, long k) {
    return new Long3((long)(a.x / k), (long)(a.y / k), (long)(a.z / k));
  }

  public static Long3 mod(Long3 a, Long3 b) {
    return new Long3((long)(a.x % b.x), (long)(a.y % b.y), (long)(a.z % b.z));
  }

  public static Long3 mod(Long3 a, long k) {
    return new Long3((long)(a.x % k), (long)(a.y % k), (long)(a.z % k));
  }

  public static Long3 bitAnd(Long3 a, Long3 b) {
    return new Long3((long)(a.x & b.x), (long)(a.y & b.y), (long)(a.z & b.z));
  }

  public static Long3 bitOr(Long3 a, Long3 b) {
    return new Long3((long)(a.x | b.x), (long)(a.y | b.y), (long)(a.z | b.z));
  }

  public static Long3 bitXor(Long3 a, Long3 b) {
    return new Long3((long)(a.x ^ b.x), (long)(a.y ^ b.y), (long)(a.z ^ b.z));
  }

  public static Long3 bitNot(Long3 a) {
    return new Long3((long)(~a.x), (long)(~a.y), (long)(~a.z));
  }

  public static Long3 abs(Long3 a) {
    return new Long3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static Long3 clamp(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static Long3 max(Long3 a, Long3 b) {
    return new Long3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static Long3 maxMag(Long3 a, Long3 b) {
    return new Long3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static Long3 min(Long3 a, Long3 b) {
    return new Long3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static Long3 minMag(Long3 a, Long3 b) {
    return new Long3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static Long3 mix(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static Long3 clamp(Long3 v, long min, long max) {
    return new Long3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static Long3 max(Long3 x, long y) {
    return new Long3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static Long3 min(Long3 x, long y) {
    return new Long3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static Long3 mix(Long3 x, Long3 y, long a) {
    return new Long3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static Long3 absDiff(Long3 a, Long3 b) {
    return new Long3(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z));
  }

  public static Long3 addSat(Long3 a, Long3 b) {
    return new Long3(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z));
  }

  public static Long3 clz(Long3 a) {
    return new Long3(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z));
  }

  public static Long3 hadd(Long3 a, Long3 b) {
    return new Long3(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z));
  }

  public static Long3 madHi(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z));
  }

  public static Long3 madSat(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z));
  }

  public static Long3 mulHi(Long3 a, Long3 b) {
    return new Long3(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z));
  }

  public static Long3 rhadd(Long3 a, Long3 b) {
    return new Long3(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z));
  }

  public static Long3 rotate(Long3 a, Long3 b) {
    return new Long3(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z));
  }

  public static Long3 subSat(Long3 a, Long3 b) {
    return new Long3(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z));
  }
}
