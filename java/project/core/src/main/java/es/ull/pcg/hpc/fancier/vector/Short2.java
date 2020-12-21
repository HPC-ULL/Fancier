package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Short2 {
  public short x;
  public short y;

  public Short2() {}

  public Short2(short x, short y) {
    set(x, y);
  }

  public void set(short x, short y) {
    this.x = x;
    this.y = y;
  }

  public Short2(short v) {
    this(v, v);
  }

  public void set(short v) {
    set(v, v);
  }

  public Short2(Short2 vec1) {
    this(vec1.x, vec1.y);
  }

  public void set(Short2 vec1) {
    set(vec1.x, vec1.y);
  }

  public Byte2 convertByte2() {
    return new Byte2((byte)(x), (byte)(y));
  }

  public void convertByte2(Byte2 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
  }

  public Int2 convertInt2() {
    return new Int2((int)(x), (int)(y));
  }

  public void convertInt2(Int2 result) {
    result.x = (int)(x);
    result.y = (int)(y);
  }

  public Long2 convertLong2() {
    return new Long2((long)(x), (long)(y));
  }

  public void convertLong2(Long2 result) {
    result.x = (long)(x);
    result.y = (long)(y);
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

  public static Int2 isEqual(Short2 a, Short2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static void isEqual(Short2 a, Short2 b, Int2 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
  }

  public static Int2 isNotEqual(Short2 a, Short2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static void isNotEqual(Short2 a, Short2 b, Int2 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
  }

  public static Int2 isGreater(Short2 a, Short2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static void isGreater(Short2 a, Short2 b, Int2 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
  }

  public static Int2 isGreaterEqual(Short2 a, Short2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static void isGreaterEqual(Short2 a, Short2 b, Int2 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
  }

  public static Int2 isLess(Short2 a, Short2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static void isLess(Short2 a, Short2 b, Int2 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
  }

  public static Int2 isLessEqual(Short2 a, Short2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static void isLessEqual(Short2 a, Short2 b, Int2 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
  }

  public static Short2 select(Short2 a, Short2 b, Int2 c) {
    return new Short2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static void select(Short2 a, Short2 b, Int2 c, Short2 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
  }

  public static int any(Short2 a) {
    return (a.x != (short) 0 || a.y != (short) 0)? 1 : 0;
  }

  public static int all(Short2 a) {
    return (a.x == (short) 0 || a.y == (short) 0)? 0 : 1;
  }

  public static Short2 neg(Short2 a) {
    return new Short2((short)(-a.x), (short)(-a.y));
  }

  public static void neg(Short2 a, Short2 result) {
    result.x = (short)(-a.x);
    result.y = (short)(-a.y);
  }

  public static Short2 add(Short2 a, Short2 b) {
    return new Short2((short)(a.x + b.x), (short)(a.y + b.y));
  }

  public static void add(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x + b.x);
    result.y = (short)(a.y + b.y);
  }

  public static Short2 sub(Short2 a, Short2 b) {
    return new Short2((short)(a.x - b.x), (short)(a.y - b.y));
  }

  public static void sub(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x - b.x);
    result.y = (short)(a.y - b.y);
  }

  public static Double2 mul(Short2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static void mul(Short2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
  }

  public static Double2 mul(Short2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static void mul(Short2 a, double k, Double2 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
  }

  public static Float2 mul(Short2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static void mul(Short2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
  }

  public static Float2 mul(Short2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static void mul(Short2 a, float k, Float2 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
  }

  public static Short2 mul(Short2 a, Short2 b) {
    return new Short2((short)(a.x * b.x), (short)(a.y * b.y));
  }

  public static void mul(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x * b.x);
    result.y = (short)(a.y * b.y);
  }

  public static Short2 mul(Short2 a, short k) {
    return new Short2((short)(a.x * k), (short)(a.y * k));
  }

  public static void mul(Short2 a, short k, Short2 result) {
    result.x = (short)(a.x * k);
    result.y = (short)(a.y * k);
  }

  public static Double2 div(Short2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static void div(Short2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
  }

  public static Double2 div(Short2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static void div(Short2 a, double k, Double2 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
  }

  public static Float2 div(Short2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static void div(Short2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
  }

  public static Float2 div(Short2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static void div(Short2 a, float k, Float2 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
  }

  public static Short2 div(Short2 a, Short2 b) {
    return new Short2((short)(a.x / b.x), (short)(a.y / b.y));
  }

  public static void div(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x / b.x);
    result.y = (short)(a.y / b.y);
  }

  public static Short2 div(Short2 a, short k) {
    return new Short2((short)(a.x / k), (short)(a.y / k));
  }

  public static void div(Short2 a, short k, Short2 result) {
    result.x = (short)(a.x / k);
    result.y = (short)(a.y / k);
  }

  public static Short2 mod(Short2 a, Short2 b) {
    return new Short2((short)(a.x % b.x), (short)(a.y % b.y));
  }

  public static void mod(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x % b.x);
    result.y = (short)(a.y % b.y);
  }

  public static Short2 mod(Short2 a, short k) {
    return new Short2((short)(a.x % k), (short)(a.y % k));
  }

  public static void mod(Short2 a, short k, Short2 result) {
    result.x = (short)(a.x % k);
    result.y = (short)(a.y % k);
  }

  public static Short2 bitAnd(Short2 a, Short2 b) {
    return new Short2((short)(a.x & b.x), (short)(a.y & b.y));
  }

  public static void bitAnd(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x & b.x);
    result.y = (short)(a.y & b.y);
  }

  public static Short2 bitOr(Short2 a, Short2 b) {
    return new Short2((short)(a.x | b.x), (short)(a.y | b.y));
  }

  public static void bitOr(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x | b.x);
    result.y = (short)(a.y | b.y);
  }

  public static Short2 bitXor(Short2 a, Short2 b) {
    return new Short2((short)(a.x ^ b.x), (short)(a.y ^ b.y));
  }

  public static void bitXor(Short2 a, Short2 b, Short2 result) {
    result.x = (short)(a.x ^ b.x);
    result.y = (short)(a.y ^ b.y);
  }

  public static Short2 bitNot(Short2 a) {
    return new Short2((short)(~a.x), (short)(~a.y));
  }

  public static void bitNot(Short2 a, Short2 result) {
    result.x = (short)(~a.x);
    result.y = (short)(~a.y);
  }

  public static Short2 abs(Short2 a) {
    return new Short2(Math.abs(a.x), Math.abs(a.y));
  }

  public static void abs(Short2 a, Short2 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
  }

  public static Short2 clamp(Short2 a, Short2 b, Short2 c) {
    return new Short2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static void clamp(Short2 a, Short2 b, Short2 c, Short2 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
  }

  public static Short2 max(Short2 a, Short2 b) {
    return new Short2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static void max(Short2 a, Short2 b, Short2 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
  }

  public static Short2 maxMag(Short2 a, Short2 b) {
    return new Short2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static void maxMag(Short2 a, Short2 b, Short2 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
  }

  public static Short2 min(Short2 a, Short2 b) {
    return new Short2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static void min(Short2 a, Short2 b, Short2 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
  }

  public static Short2 minMag(Short2 a, Short2 b) {
    return new Short2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static void minMag(Short2 a, Short2 b, Short2 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
  }

  public static Short2 mix(Short2 a, Short2 b, Short2 c) {
    return new Short2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static void mix(Short2 a, Short2 b, Short2 c, Short2 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
  }

  public static Short2 clamp(Short2 v, short min, short max) {
    return new Short2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static void clamp(Short2 v, short min, short max, Short2 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
  }

  public static Short2 max(Short2 x, short y) {
    return new Short2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static void max(Short2 x, short y, Short2 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
  }

  public static Short2 min(Short2 x, short y) {
    return new Short2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static void min(Short2 x, short y, Short2 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
  }

  public static Short2 mix(Short2 x, Short2 y, short a) {
    return new Short2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static void mix(Short2 x, Short2 y, short a, Short2 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
  }

  public static Short2 absDiff(Short2 a, Short2 b) {
    return new Short2(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y));
  }

  public static void absDiff(Short2 a, Short2 b, Short2 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
  }

  public static Short2 addSat(Short2 a, Short2 b) {
    return new Short2(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y));
  }

  public static void addSat(Short2 a, Short2 b, Short2 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
  }

  public static Short2 clz(Short2 a) {
    return new Short2(Math.clz(a.x), Math.clz(a.y));
  }

  public static void clz(Short2 a, Short2 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
  }

  public static Short2 hadd(Short2 a, Short2 b) {
    return new Short2(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y));
  }

  public static void hadd(Short2 a, Short2 b, Short2 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
  }

  public static Short2 madHi(Short2 a, Short2 b, Short2 c) {
    return new Short2(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y));
  }

  public static void madHi(Short2 a, Short2 b, Short2 c, Short2 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
  }

  public static Short2 madSat(Short2 a, Short2 b, Short2 c) {
    return new Short2(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y));
  }

  public static void madSat(Short2 a, Short2 b, Short2 c, Short2 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
  }

  public static Short2 mulHi(Short2 a, Short2 b) {
    return new Short2(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y));
  }

  public static void mulHi(Short2 a, Short2 b, Short2 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
  }

  public static Short2 rhadd(Short2 a, Short2 b) {
    return new Short2(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y));
  }

  public static void rhadd(Short2 a, Short2 b, Short2 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
  }

  public static Short2 rotate(Short2 a, Short2 b) {
    return new Short2(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y));
  }

  public static void rotate(Short2 a, Short2 b, Short2 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
  }

  public static Short2 subSat(Short2 a, Short2 b) {
    return new Short2(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y));
  }

  public static void subSat(Short2 a, Short2 b, Short2 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
  }
}
