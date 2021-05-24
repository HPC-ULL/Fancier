package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Int2 {
  public int x;
  public int y;

  public Int2() {}

  public Int2(int x, int y) {
    set(x, y);
  }

  public void set(int x, int y) {
    this.x = x;
    this.y = y;
  }

  public Int2(int v) {
    this(v, v);
  }

  public void set(int v) {
    set(v, v);
  }

  public Int2(Int2 vec1) {
    this(vec1.x, vec1.y);
  }

  public void set(Int2 vec1) {
    set(vec1.x, vec1.y);
  }

  public Int2 value() {
    return new Int2(this);
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

  public static Int2 isEqual(Int2 a, Int2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static void isEqual(Int2 a, Int2 b, Int2 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
  }

  public static Int2 isNotEqual(Int2 a, Int2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static void isNotEqual(Int2 a, Int2 b, Int2 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
  }

  public static Int2 isGreater(Int2 a, Int2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static void isGreater(Int2 a, Int2 b, Int2 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
  }

  public static Int2 isGreaterEqual(Int2 a, Int2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static void isGreaterEqual(Int2 a, Int2 b, Int2 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
  }

  public static Int2 isLess(Int2 a, Int2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static void isLess(Int2 a, Int2 b, Int2 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
  }

  public static Int2 isLessEqual(Int2 a, Int2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static void isLessEqual(Int2 a, Int2 b, Int2 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
  }

  public static Int2 select(Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static void select(Int2 a, Int2 b, Int2 c, Int2 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
  }

  public static int any(Int2 a) {
    return (a.x != 0 || a.y != 0)? 1 : 0;
  }

  public static int all(Int2 a) {
    return (a.x == 0 || a.y == 0)? 0 : 1;
  }

  public static Int2 neg(Int2 a) {
    return new Int2((int)(-a.x), (int)(-a.y));
  }

  public static void neg(Int2 a, Int2 result) {
    result.x = (int)(-a.x);
    result.y = (int)(-a.y);
  }

  public static Int2 add(Int2 a, Int2 b) {
    return new Int2((int)(a.x + b.x), (int)(a.y + b.y));
  }

  public static void add(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x + b.x);
    result.y = (int)(a.y + b.y);
  }

  public static Int2 sub(Int2 a, Int2 b) {
    return new Int2((int)(a.x - b.x), (int)(a.y - b.y));
  }

  public static void sub(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x - b.x);
    result.y = (int)(a.y - b.y);
  }

  public static Double2 mul(Int2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static void mul(Int2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
  }

  public static Double2 mul(Int2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static void mul(Int2 a, double k, Double2 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
  }

  public static Float2 mul(Int2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static void mul(Int2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
  }

  public static Float2 mul(Int2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static void mul(Int2 a, float k, Float2 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
  }

  public static Int2 mul(Int2 a, Int2 b) {
    return new Int2((int)(a.x * b.x), (int)(a.y * b.y));
  }

  public static void mul(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x * b.x);
    result.y = (int)(a.y * b.y);
  }

  public static Int2 mul(Int2 a, int k) {
    return new Int2((int)(a.x * k), (int)(a.y * k));
  }

  public static void mul(Int2 a, int k, Int2 result) {
    result.x = (int)(a.x * k);
    result.y = (int)(a.y * k);
  }

  public static Double2 div(Int2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static void div(Int2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
  }

  public static Double2 div(Int2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static void div(Int2 a, double k, Double2 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
  }

  public static Float2 div(Int2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static void div(Int2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
  }

  public static Float2 div(Int2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static void div(Int2 a, float k, Float2 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
  }

  public static Int2 div(Int2 a, Int2 b) {
    return new Int2((int)(a.x / b.x), (int)(a.y / b.y));
  }

  public static void div(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x / b.x);
    result.y = (int)(a.y / b.y);
  }

  public static Int2 div(Int2 a, int k) {
    return new Int2((int)(a.x / k), (int)(a.y / k));
  }

  public static void div(Int2 a, int k, Int2 result) {
    result.x = (int)(a.x / k);
    result.y = (int)(a.y / k);
  }

  public static Int2 mod(Int2 a, Int2 b) {
    return new Int2((int)(a.x % b.x), (int)(a.y % b.y));
  }

  public static void mod(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x % b.x);
    result.y = (int)(a.y % b.y);
  }

  public static Int2 mod(Int2 a, int k) {
    return new Int2((int)(a.x % k), (int)(a.y % k));
  }

  public static void mod(Int2 a, int k, Int2 result) {
    result.x = (int)(a.x % k);
    result.y = (int)(a.y % k);
  }

  public static Int2 bitAnd(Int2 a, Int2 b) {
    return new Int2((int)(a.x & b.x), (int)(a.y & b.y));
  }

  public static void bitAnd(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x & b.x);
    result.y = (int)(a.y & b.y);
  }

  public static Int2 bitOr(Int2 a, Int2 b) {
    return new Int2((int)(a.x | b.x), (int)(a.y | b.y));
  }

  public static void bitOr(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x | b.x);
    result.y = (int)(a.y | b.y);
  }

  public static Int2 bitXor(Int2 a, Int2 b) {
    return new Int2((int)(a.x ^ b.x), (int)(a.y ^ b.y));
  }

  public static void bitXor(Int2 a, Int2 b, Int2 result) {
    result.x = (int)(a.x ^ b.x);
    result.y = (int)(a.y ^ b.y);
  }

  public static Int2 bitNot(Int2 a) {
    return new Int2((int)(~a.x), (int)(~a.y));
  }

  public static void bitNot(Int2 a, Int2 result) {
    result.x = (int)(~a.x);
    result.y = (int)(~a.y);
  }

  public static Int2 abs(Int2 a) {
    return new Int2(Math.abs(a.x), Math.abs(a.y));
  }

  public static void abs(Int2 a, Int2 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
  }

  public static Int2 clamp(Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static void clamp(Int2 a, Int2 b, Int2 c, Int2 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
  }

  public static Int2 max(Int2 a, Int2 b) {
    return new Int2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static void max(Int2 a, Int2 b, Int2 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
  }

  public static Int2 maxMag(Int2 a, Int2 b) {
    return new Int2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static void maxMag(Int2 a, Int2 b, Int2 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
  }

  public static Int2 min(Int2 a, Int2 b) {
    return new Int2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static void min(Int2 a, Int2 b, Int2 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
  }

  public static Int2 minMag(Int2 a, Int2 b) {
    return new Int2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static void minMag(Int2 a, Int2 b, Int2 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
  }

  public static Int2 mix(Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static void mix(Int2 a, Int2 b, Int2 c, Int2 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
  }

  public static Int2 clamp(Int2 v, int min, int max) {
    return new Int2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static void clamp(Int2 v, int min, int max, Int2 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
  }

  public static Int2 max(Int2 x, int y) {
    return new Int2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static void max(Int2 x, int y, Int2 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
  }

  public static Int2 min(Int2 x, int y) {
    return new Int2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static void min(Int2 x, int y, Int2 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
  }

  public static Int2 mix(Int2 x, Int2 y, int a) {
    return new Int2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static void mix(Int2 x, Int2 y, int a, Int2 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
  }

  public static Int2 absDiff(Int2 a, Int2 b) {
    return new Int2(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y));
  }

  public static void absDiff(Int2 a, Int2 b, Int2 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
  }

  public static Int2 addSat(Int2 a, Int2 b) {
    return new Int2(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y));
  }

  public static void addSat(Int2 a, Int2 b, Int2 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
  }

  public static Int2 clz(Int2 a) {
    return new Int2(Math.clz(a.x), Math.clz(a.y));
  }

  public static void clz(Int2 a, Int2 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
  }

  public static Int2 hadd(Int2 a, Int2 b) {
    return new Int2(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y));
  }

  public static void hadd(Int2 a, Int2 b, Int2 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
  }

  public static Int2 madHi(Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y));
  }

  public static void madHi(Int2 a, Int2 b, Int2 c, Int2 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
  }

  public static Int2 madSat(Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y));
  }

  public static void madSat(Int2 a, Int2 b, Int2 c, Int2 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
  }

  public static Int2 mulHi(Int2 a, Int2 b) {
    return new Int2(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y));
  }

  public static void mulHi(Int2 a, Int2 b, Int2 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
  }

  public static Int2 rhadd(Int2 a, Int2 b) {
    return new Int2(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y));
  }

  public static void rhadd(Int2 a, Int2 b, Int2 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
  }

  public static Int2 rotate(Int2 a, Int2 b) {
    return new Int2(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y));
  }

  public static void rotate(Int2 a, Int2 b, Int2 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
  }

  public static Int2 subSat(Int2 a, Int2 b) {
    return new Int2(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y));
  }

  public static void subSat(Int2 a, Int2 b, Int2 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
  }

  public static Int2 mad24(Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.mad24(a.x, b.x, c.x), Math.mad24(a.y, b.y, c.y));
  }

  public static void mad24(Int2 a, Int2 b, Int2 c, Int2 result) {
    result.x = Math.mad24(a.x, b.x, c.x);
    result.y = Math.mad24(a.y, b.y, c.y);
  }

  public static Int2 mul24(Int2 a, Int2 b) {
    return new Int2(Math.mul24(a.x, b.x), Math.mul24(a.y, b.y));
  }

  public static void mul24(Int2 a, Int2 b, Int2 result) {
    result.x = Math.mul24(a.x, b.x);
    result.y = Math.mul24(a.y, b.y);
  }
}
