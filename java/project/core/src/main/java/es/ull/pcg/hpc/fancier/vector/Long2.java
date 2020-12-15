package es.ull.pcg.hpc.fancier.vector;

import java.nio.ByteBuffer;

import es.ull.pcg.hpc.fancier.Math;

public class Long2 {
  public long x;
  public long y;

  public Long2(long x, long y) {
    this.x = x;
    this.y = y;
  }

  public Long2(long v) {
    this(v, v);
  }

  public Long2() {
    this((long) 0);
  }

  public Long2(Long2 vec1) {
    this(vec1.x, vec1.y);
  }

  public static Long2 fromBuffer(ByteBuffer buffer) {
    Long2 result = new Long2();

    result.x = buffer.getLong();
    result.y = buffer.getLong();

    return result;
  }

  public void toBuffer(ByteBuffer buffer) {
    buffer.putLong(this.x);
    buffer.putLong(this.y);
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

  public Float2 convertFloat2() {
    return new Float2((float) x, (float) y);
  }

  public Double2 convertDouble2() {
    return new Double2((double) x, (double) y);
  }

  public static Int2 isEqual(Long2 a, Long2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static Int2 isNotEqual(Long2 a, Long2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static Int2 isGreater(Long2 a, Long2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static Int2 isGreaterEqual(Long2 a, Long2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static Int2 isLess(Long2 a, Long2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static Int2 isLessEqual(Long2 a, Long2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static Long2 select(Long2 a, Long2 b, Int2 c) {
    return new Long2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static int any(Long2 a) {
    return (a.x != 0L || a.y != 0L)? 1 : 0;
  }

  public static int all(Long2 a) {
    return (a.x == 0L || a.y == 0L)? 0 : 1;
  }

  public static Long2 add(Long2 a, Long2 b) {
    return new Long2((long)(a.x + b.x), (long)(a.y + b.y));
  }

  public static Long2 sub(Long2 a, Long2 b) {
    return new Long2((long)(a.x - b.x), (long)(a.y - b.y));
  }

  public static Double2 mul(Long2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static Double2 mul(Long2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static Float2 mul(Long2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static Float2 mul(Long2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static Long2 mul(Long2 a, Long2 b) {
    return new Long2((long)(a.x * b.x), (long)(a.y * b.y));
  }

  public static Long2 mul(Long2 a, long k) {
    return new Long2((long)(a.x * k), (long)(a.y * k));
  }

  public static Double2 div(Long2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static Double2 div(Long2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static Float2 div(Long2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static Float2 div(Long2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static Long2 div(Long2 a, Long2 b) {
    return new Long2((long)(a.x / b.x), (long)(a.y / b.y));
  }

  public static Long2 div(Long2 a, long k) {
    return new Long2((long)(a.x / k), (long)(a.y / k));
  }

  public static Long2 mod(Long2 a, Long2 b) {
    return new Long2((long)(a.x % b.x), (long)(a.y % b.y));
  }

  public static Long2 mod(Long2 a, long k) {
    return new Long2((long)(a.x % k), (long)(a.y % k));
  }

  public static Long2 bitAnd(Long2 a, Long2 b) {
    return new Long2((long)(a.x & b.x), (long)(a.y & b.y));
  }

  public static Long2 bitOr(Long2 a, Long2 b) {
    return new Long2((long)(a.x | b.x), (long)(a.y | b.y));
  }

  public static Long2 bitXor(Long2 a, Long2 b) {
    return new Long2((long)(a.x ^ b.x), (long)(a.y ^ b.y));
  }

  public static Long2 bitNot(Long2 a) {
    return new Long2((long)(~a.x), (long)(~a.y));
  }

  public static Long2 abs(Long2 a) {
    return new Long2(Math.abs(a.x), Math.abs(a.y));
  }

  public static Long2 clamp(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static Long2 max(Long2 a, Long2 b) {
    return new Long2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static Long2 maxMag(Long2 a, Long2 b) {
    return new Long2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static Long2 min(Long2 a, Long2 b) {
    return new Long2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static Long2 minMag(Long2 a, Long2 b) {
    return new Long2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static Long2 mix(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static Long2 clamp(Long2 v, long min, long max) {
    return new Long2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static Long2 max(Long2 x, long y) {
    return new Long2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static Long2 min(Long2 x, long y) {
    return new Long2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static Long2 mix(Long2 x, Long2 y, long a) {
    return new Long2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static Long2 absDiff(Long2 a, Long2 b) {
    return new Long2(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y));
  }

  public static Long2 addSat(Long2 a, Long2 b) {
    return new Long2(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y));
  }

  public static Long2 clz(Long2 a) {
    return new Long2(Math.clz(a.x), Math.clz(a.y));
  }

  public static Long2 hadd(Long2 a, Long2 b) {
    return new Long2(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y));
  }

  public static Long2 madHi(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y));
  }

  public static Long2 madSat(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y));
  }

  public static Long2 mulHi(Long2 a, Long2 b) {
    return new Long2(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y));
  }

  public static Long2 rhadd(Long2 a, Long2 b) {
    return new Long2(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y));
  }

  public static Long2 rotate(Long2 a, Long2 b) {
    return new Long2(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y));
  }

  public static Long2 subSat(Long2 a, Long2 b) {
    return new Long2(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y));
  }
}
