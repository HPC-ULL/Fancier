package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Long2 {
  public long x;
  public long y;

  public Long2() {}

  public Long2(long x, long y) {
    set(x, y);
  }

  public void set(long x, long y) {
    this.x = x;
    this.y = y;
  }

  public Long2(long v) {
    this(v, v);
  }

  public void set(long v) {
    set(v, v);
  }

  public Long2(Long2 vec1) {
    this(vec1.x, vec1.y);
  }

  public void set(Long2 vec1) {
    set(vec1.x, vec1.y);
  }

  public Byte2 convertByte2() {
    return new Byte2((byte)(x), (byte)(y));
  }

  public void convertByte2(Byte2 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
  }

  public Short2 convertShort2() {
    return new Short2((short)(x), (short)(y));
  }

  public void convertShort2(Short2 result) {
    result.x = (short)(x);
    result.y = (short)(y);
  }

  public Int2 convertInt2() {
    return new Int2((int)(x), (int)(y));
  }

  public void convertInt2(Int2 result) {
    result.x = (int)(x);
    result.y = (int)(y);
  }

  public Float2 convertFloat2() {
    return new Float2((float)(x), (float)(y));
  }

  public void convertFloat2(Float2 result) {
    result.x = (float)(x);
    result.y = (float)(y);
  }

  public Double2 convertDouble2() {
    return new Double2((double)(x), (double)(y));
  }

  public void convertDouble2(Double2 result) {
    result.x = (double)(x);
    result.y = (double)(y);
  }

  public static Int2 isEqual(Long2 a, Long2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static void isEqual(Long2 a, Long2 b, Int2 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
  }

  public static Int2 isNotEqual(Long2 a, Long2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static void isNotEqual(Long2 a, Long2 b, Int2 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
  }

  public static Int2 isGreater(Long2 a, Long2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static void isGreater(Long2 a, Long2 b, Int2 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
  }

  public static Int2 isGreaterEqual(Long2 a, Long2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static void isGreaterEqual(Long2 a, Long2 b, Int2 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
  }

  public static Int2 isLess(Long2 a, Long2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static void isLess(Long2 a, Long2 b, Int2 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
  }

  public static Int2 isLessEqual(Long2 a, Long2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static void isLessEqual(Long2 a, Long2 b, Int2 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
  }

  public static Long2 select(Long2 a, Long2 b, Int2 c) {
    return new Long2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static void select(Long2 a, Long2 b, Int2 c, Long2 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
  }

  public static int any(Long2 a) {
    return (a.x != 0L || a.y != 0L)? 1 : 0;
  }

  public static int all(Long2 a) {
    return (a.x == 0L || a.y == 0L)? 0 : 1;
  }

  public static Long2 neg(Long2 a) {
    return new Long2((long)(-a.x), (long)(-a.y));
  }

  public static void neg(Long2 a, Long2 result) {
    result.x = (long)(-a.x);
    result.y = (long)(-a.y);
  }

  public static Long2 add(Long2 a, Long2 b) {
    return new Long2((long)(a.x + b.x), (long)(a.y + b.y));
  }

  public static void add(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x + b.x);
    result.y = (long)(a.y + b.y);
  }

  public static Long2 sub(Long2 a, Long2 b) {
    return new Long2((long)(a.x - b.x), (long)(a.y - b.y));
  }

  public static void sub(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x - b.x);
    result.y = (long)(a.y - b.y);
  }

  public static Double2 mul(Long2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static void mul(Long2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
  }

  public static Double2 mul(Long2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static void mul(Long2 a, double k, Double2 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
  }

  public static Float2 mul(Long2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static void mul(Long2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
  }

  public static Float2 mul(Long2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static void mul(Long2 a, float k, Float2 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
  }

  public static Long2 mul(Long2 a, Long2 b) {
    return new Long2((long)(a.x * b.x), (long)(a.y * b.y));
  }

  public static void mul(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x * b.x);
    result.y = (long)(a.y * b.y);
  }

  public static Long2 mul(Long2 a, long k) {
    return new Long2((long)(a.x * k), (long)(a.y * k));
  }

  public static void mul(Long2 a, long k, Long2 result) {
    result.x = (long)(a.x * k);
    result.y = (long)(a.y * k);
  }

  public static Double2 div(Long2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static void div(Long2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
  }

  public static Double2 div(Long2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static void div(Long2 a, double k, Double2 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
  }

  public static Float2 div(Long2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static void div(Long2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
  }

  public static Float2 div(Long2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static void div(Long2 a, float k, Float2 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
  }

  public static Long2 div(Long2 a, Long2 b) {
    return new Long2((long)(a.x / b.x), (long)(a.y / b.y));
  }

  public static void div(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x / b.x);
    result.y = (long)(a.y / b.y);
  }

  public static Long2 div(Long2 a, long k) {
    return new Long2((long)(a.x / k), (long)(a.y / k));
  }

  public static void div(Long2 a, long k, Long2 result) {
    result.x = (long)(a.x / k);
    result.y = (long)(a.y / k);
  }

  public static Long2 mod(Long2 a, Long2 b) {
    return new Long2((long)(a.x % b.x), (long)(a.y % b.y));
  }

  public static void mod(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x % b.x);
    result.y = (long)(a.y % b.y);
  }

  public static Long2 mod(Long2 a, long k) {
    return new Long2((long)(a.x % k), (long)(a.y % k));
  }

  public static void mod(Long2 a, long k, Long2 result) {
    result.x = (long)(a.x % k);
    result.y = (long)(a.y % k);
  }

  public static Long2 bitAnd(Long2 a, Long2 b) {
    return new Long2((long)(a.x & b.x), (long)(a.y & b.y));
  }

  public static void bitAnd(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x & b.x);
    result.y = (long)(a.y & b.y);
  }

  public static Long2 bitOr(Long2 a, Long2 b) {
    return new Long2((long)(a.x | b.x), (long)(a.y | b.y));
  }

  public static void bitOr(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x | b.x);
    result.y = (long)(a.y | b.y);
  }

  public static Long2 bitXor(Long2 a, Long2 b) {
    return new Long2((long)(a.x ^ b.x), (long)(a.y ^ b.y));
  }

  public static void bitXor(Long2 a, Long2 b, Long2 result) {
    result.x = (long)(a.x ^ b.x);
    result.y = (long)(a.y ^ b.y);
  }

  public static Long2 bitNot(Long2 a) {
    return new Long2((long)(~a.x), (long)(~a.y));
  }

  public static void bitNot(Long2 a, Long2 result) {
    result.x = (long)(~a.x);
    result.y = (long)(~a.y);
  }

  public static Long2 abs(Long2 a) {
    return new Long2(Math.abs(a.x), Math.abs(a.y));
  }

  public static void abs(Long2 a, Long2 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
  }

  public static Long2 clamp(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static void clamp(Long2 a, Long2 b, Long2 c, Long2 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
  }

  public static Long2 max(Long2 a, Long2 b) {
    return new Long2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static void max(Long2 a, Long2 b, Long2 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
  }

  public static Long2 maxMag(Long2 a, Long2 b) {
    return new Long2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static void maxMag(Long2 a, Long2 b, Long2 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
  }

  public static Long2 min(Long2 a, Long2 b) {
    return new Long2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static void min(Long2 a, Long2 b, Long2 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
  }

  public static Long2 minMag(Long2 a, Long2 b) {
    return new Long2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static void minMag(Long2 a, Long2 b, Long2 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
  }

  public static Long2 mix(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static void mix(Long2 a, Long2 b, Long2 c, Long2 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
  }

  public static Long2 clamp(Long2 v, long min, long max) {
    return new Long2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static void clamp(Long2 v, long min, long max, Long2 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
  }

  public static Long2 max(Long2 x, long y) {
    return new Long2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static void max(Long2 x, long y, Long2 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
  }

  public static Long2 min(Long2 x, long y) {
    return new Long2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static void min(Long2 x, long y, Long2 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
  }

  public static Long2 mix(Long2 x, Long2 y, long a) {
    return new Long2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static void mix(Long2 x, Long2 y, long a, Long2 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
  }

  public static Long2 absDiff(Long2 a, Long2 b) {
    return new Long2(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y));
  }

  public static void absDiff(Long2 a, Long2 b, Long2 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
  }

  public static Long2 addSat(Long2 a, Long2 b) {
    return new Long2(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y));
  }

  public static void addSat(Long2 a, Long2 b, Long2 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
  }

  public static Long2 clz(Long2 a) {
    return new Long2(Math.clz(a.x), Math.clz(a.y));
  }

  public static void clz(Long2 a, Long2 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
  }

  public static Long2 hadd(Long2 a, Long2 b) {
    return new Long2(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y));
  }

  public static void hadd(Long2 a, Long2 b, Long2 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
  }

  public static Long2 madHi(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y));
  }

  public static void madHi(Long2 a, Long2 b, Long2 c, Long2 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
  }

  public static Long2 madSat(Long2 a, Long2 b, Long2 c) {
    return new Long2(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y));
  }

  public static void madSat(Long2 a, Long2 b, Long2 c, Long2 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
  }

  public static Long2 mulHi(Long2 a, Long2 b) {
    return new Long2(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y));
  }

  public static void mulHi(Long2 a, Long2 b, Long2 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
  }

  public static Long2 rhadd(Long2 a, Long2 b) {
    return new Long2(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y));
  }

  public static void rhadd(Long2 a, Long2 b, Long2 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
  }

  public static Long2 rotate(Long2 a, Long2 b) {
    return new Long2(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y));
  }

  public static void rotate(Long2 a, Long2 b, Long2 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
  }

  public static Long2 subSat(Long2 a, Long2 b) {
    return new Long2(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y));
  }

  public static void subSat(Long2 a, Long2 b, Long2 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
  }
}
