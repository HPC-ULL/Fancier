package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Byte2 {
  public byte x;
  public byte y;

  public Byte2() {}

  public Byte2(byte x, byte y) {
    set(x, y);
  }

  public void set(byte x, byte y) {
    this.x = x;
    this.y = y;
  }

  public Byte2(byte v) {
    this(v, v);
  }

  public void set(byte v) {
    set(v, v);
  }

  public Byte2(Byte2 vec1) {
    this(vec1.x, vec1.y);
  }

  public void set(Byte2 vec1) {
    set(vec1.x, vec1.y);
  }

  public Short2 convertShort2() {
    return new Short2((short)(x & 0xff), (short)(y & 0xff));
  }

  public void convertShort2(Short2 result) {
    result.x = (short)(x & 0xff);
    result.y = (short)(y & 0xff);
  }

  public Int2 convertInt2() {
    return new Int2((int)(x & 0xff), (int)(y & 0xff));
  }

  public void convertInt2(Int2 result) {
    result.x = (int)(x & 0xff);
    result.y = (int)(y & 0xff);
  }

  public Long2 convertLong2() {
    return new Long2((long)(x & 0xff), (long)(y & 0xff));
  }

  public void convertLong2(Long2 result) {
    result.x = (long)(x & 0xff);
    result.y = (long)(y & 0xff);
  }

  public Float2 convertFloat2() {
    return new Float2((float)(x & 0xff), (float)(y & 0xff));
  }

  public void convertFloat2(Float2 result) {
    result.x = (float)(x & 0xff);
    result.y = (float)(y & 0xff);
  }

  public Double2 convertDouble2() {
    return new Double2((double)(x & 0xff), (double)(y & 0xff));
  }

  public void convertDouble2(Double2 result) {
    result.x = (double)(x & 0xff);
    result.y = (double)(y & 0xff);
  }

  public static Int2 isEqual(Byte2 a, Byte2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static void isEqual(Byte2 a, Byte2 b, Int2 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
  }

  public static Int2 isNotEqual(Byte2 a, Byte2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static void isNotEqual(Byte2 a, Byte2 b, Int2 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
  }

  public static Int2 isGreater(Byte2 a, Byte2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static void isGreater(Byte2 a, Byte2 b, Int2 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
  }

  public static Int2 isGreaterEqual(Byte2 a, Byte2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static void isGreaterEqual(Byte2 a, Byte2 b, Int2 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
  }

  public static Int2 isLess(Byte2 a, Byte2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static void isLess(Byte2 a, Byte2 b, Int2 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
  }

  public static Int2 isLessEqual(Byte2 a, Byte2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static void isLessEqual(Byte2 a, Byte2 b, Int2 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
  }

  public static Byte2 select(Byte2 a, Byte2 b, Int2 c) {
    return new Byte2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static void select(Byte2 a, Byte2 b, Int2 c, Byte2 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
  }

  public static int any(Byte2 a) {
    return (a.x != (byte) 0 || a.y != (byte) 0)? 1 : 0;
  }

  public static int all(Byte2 a) {
    return (a.x == (byte) 0 || a.y == (byte) 0)? 0 : 1;
  }

  public static Byte2 neg(Byte2 a) {
    return new Byte2((byte)(-a.x), (byte)(-a.y));
  }

  public static void neg(Byte2 a, Byte2 result) {
    result.x = (byte)(-a.x);
    result.y = (byte)(-a.y);
  }

  public static Byte2 add(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x + b.x), (byte)(a.y + b.y));
  }

  public static void add(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x + b.x);
    result.y = (byte)(a.y + b.y);
  }

  public static Byte2 sub(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x - b.x), (byte)(a.y - b.y));
  }

  public static void sub(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x - b.x);
    result.y = (byte)(a.y - b.y);
  }

  public static Byte2 mul(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x * b.x), (byte)(a.y * b.y));
  }

  public static void mul(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x * b.x);
    result.y = (byte)(a.y * b.y);
  }

  public static Byte2 mul(Byte2 a, byte k) {
    return new Byte2((byte)(a.x * k), (byte)(a.y * k));
  }

  public static void mul(Byte2 a, byte k, Byte2 result) {
    result.x = (byte)(a.x * k);
    result.y = (byte)(a.y * k);
  }

  public static Double2 mul(Byte2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static void mul(Byte2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
  }

  public static Double2 mul(Byte2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static void mul(Byte2 a, double k, Double2 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
  }

  public static Float2 mul(Byte2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static void mul(Byte2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
  }

  public static Float2 mul(Byte2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static void mul(Byte2 a, float k, Float2 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
  }

  public static Byte2 div(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x / b.x), (byte)(a.y / b.y));
  }

  public static void div(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x / b.x);
    result.y = (byte)(a.y / b.y);
  }

  public static Byte2 div(Byte2 a, byte k) {
    return new Byte2((byte)(a.x / k), (byte)(a.y / k));
  }

  public static void div(Byte2 a, byte k, Byte2 result) {
    result.x = (byte)(a.x / k);
    result.y = (byte)(a.y / k);
  }

  public static Double2 div(Byte2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static void div(Byte2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
  }

  public static Double2 div(Byte2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static void div(Byte2 a, double k, Double2 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
  }

  public static Float2 div(Byte2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static void div(Byte2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
  }

  public static Float2 div(Byte2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static void div(Byte2 a, float k, Float2 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
  }

  public static Byte2 mod(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x % b.x), (byte)(a.y % b.y));
  }

  public static void mod(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x % b.x);
    result.y = (byte)(a.y % b.y);
  }

  public static Byte2 mod(Byte2 a, byte k) {
    return new Byte2((byte)(a.x % k), (byte)(a.y % k));
  }

  public static void mod(Byte2 a, byte k, Byte2 result) {
    result.x = (byte)(a.x % k);
    result.y = (byte)(a.y % k);
  }

  public static Byte2 bitAnd(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x & b.x), (byte)(a.y & b.y));
  }

  public static void bitAnd(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x & b.x);
    result.y = (byte)(a.y & b.y);
  }

  public static Byte2 bitOr(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x | b.x), (byte)(a.y | b.y));
  }

  public static void bitOr(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x | b.x);
    result.y = (byte)(a.y | b.y);
  }

  public static Byte2 bitXor(Byte2 a, Byte2 b) {
    return new Byte2((byte)(a.x ^ b.x), (byte)(a.y ^ b.y));
  }

  public static void bitXor(Byte2 a, Byte2 b, Byte2 result) {
    result.x = (byte)(a.x ^ b.x);
    result.y = (byte)(a.y ^ b.y);
  }

  public static Byte2 bitNot(Byte2 a) {
    return new Byte2((byte)(~a.x), (byte)(~a.y));
  }

  public static void bitNot(Byte2 a, Byte2 result) {
    result.x = (byte)(~a.x);
    result.y = (byte)(~a.y);
  }

  public static Byte2 abs(Byte2 a) {
    return new Byte2(Math.abs(a.x), Math.abs(a.y));
  }

  public static void abs(Byte2 a, Byte2 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
  }

  public static Byte2 clamp(Byte2 a, Byte2 b, Byte2 c) {
    return new Byte2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static void clamp(Byte2 a, Byte2 b, Byte2 c, Byte2 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
  }

  public static Byte2 max(Byte2 a, Byte2 b) {
    return new Byte2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static void max(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
  }

  public static Byte2 maxMag(Byte2 a, Byte2 b) {
    return new Byte2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static void maxMag(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
  }

  public static Byte2 min(Byte2 a, Byte2 b) {
    return new Byte2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static void min(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
  }

  public static Byte2 minMag(Byte2 a, Byte2 b) {
    return new Byte2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static void minMag(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
  }

  public static Byte2 mix(Byte2 a, Byte2 b, Byte2 c) {
    return new Byte2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static void mix(Byte2 a, Byte2 b, Byte2 c, Byte2 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
  }

  public static Byte2 clamp(Byte2 v, byte min, byte max) {
    return new Byte2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static void clamp(Byte2 v, byte min, byte max, Byte2 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
  }

  public static Byte2 max(Byte2 x, byte y) {
    return new Byte2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static void max(Byte2 x, byte y, Byte2 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
  }

  public static Byte2 min(Byte2 x, byte y) {
    return new Byte2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static void min(Byte2 x, byte y, Byte2 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
  }

  public static Byte2 mix(Byte2 x, Byte2 y, byte a) {
    return new Byte2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static void mix(Byte2 x, Byte2 y, byte a, Byte2 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
  }

  public static Byte2 absDiff(Byte2 a, Byte2 b) {
    return new Byte2(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y));
  }

  public static void absDiff(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
  }

  public static Byte2 addSat(Byte2 a, Byte2 b) {
    return new Byte2(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y));
  }

  public static void addSat(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
  }

  public static Byte2 clz(Byte2 a) {
    return new Byte2(Math.clz(a.x), Math.clz(a.y));
  }

  public static void clz(Byte2 a, Byte2 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
  }

  public static Byte2 hadd(Byte2 a, Byte2 b) {
    return new Byte2(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y));
  }

  public static void hadd(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
  }

  public static Byte2 madHi(Byte2 a, Byte2 b, Byte2 c) {
    return new Byte2(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y));
  }

  public static void madHi(Byte2 a, Byte2 b, Byte2 c, Byte2 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
  }

  public static Byte2 madSat(Byte2 a, Byte2 b, Byte2 c) {
    return new Byte2(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y));
  }

  public static void madSat(Byte2 a, Byte2 b, Byte2 c, Byte2 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
  }

  public static Byte2 mulHi(Byte2 a, Byte2 b) {
    return new Byte2(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y));
  }

  public static void mulHi(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
  }

  public static Byte2 rhadd(Byte2 a, Byte2 b) {
    return new Byte2(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y));
  }

  public static void rhadd(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
  }

  public static Byte2 rotate(Byte2 a, Byte2 b) {
    return new Byte2(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y));
  }

  public static void rotate(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
  }

  public static Byte2 subSat(Byte2 a, Byte2 b) {
    return new Byte2(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y));
  }

  public static void subSat(Byte2 a, Byte2 b, Byte2 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
  }
}
