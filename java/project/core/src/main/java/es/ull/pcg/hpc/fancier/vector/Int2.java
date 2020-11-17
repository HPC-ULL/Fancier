package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Int2 {
  public int x;
  public int y;

  public Int2 (int x, int y) {
    this.x = x;
    this.y = y;
  }

  public Int2 (int v) {
    this(v, v);
  }

  public Int2 () {
    this((int) 0);
  }

  public Int2 (Int2 vec1) {
    this(vec1.x, vec1.y);
  }

  public Byte2 convertByte2 () {
    return new Byte2((byte) x, (byte) y);
  }

  public Short2 convertShort2 () {
    return new Short2((short) x, (short) y);
  }

  public Long2 convertLong2 () {
    return new Long2((long) x, (long) y);
  }

  public Float2 convertFloat2 () {
    return new Float2((float) x, (float) y);
  }

  public Double2 convertDouble2 () {
    return new Double2((double) x, (double) y);
  }

  public static Int2 isEqual (Int2 a, Int2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static Int2 isNotEqual (Int2 a, Int2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static Int2 isGreater (Int2 a, Int2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static Int2 isGreaterEqual (Int2 a, Int2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static Int2 isLess (Int2 a, Int2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static Int2 isLessEqual (Int2 a, Int2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static Int2 select (Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static int any (Int2 a) {
    return (a.x != 0 || a.y != 0)? 1 : 0;
  }

  public static int all (Int2 a) {
    return (a.x == 0 || a.y == 0)? 1 : 0;
  }

  public static Int2 add (Int2 a, Int2 b) {
    return new Int2((int)(a.x + b.x), (int)(a.y + b.y));
  }

  public static Int2 sub (Int2 a, Int2 b) {
    return new Int2((int)(a.x - b.x), (int)(a.y - b.y));
  }

  public static Double2 mul (Int2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static Double2 mul (Int2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static Float2 mul (Int2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static Float2 mul (Int2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static Int2 mul (Int2 a, Int2 b) {
    return new Int2((int)(a.x * b.x), (int)(a.y * b.y));
  }

  public static Int2 mul (Int2 a, int k) {
    return new Int2((int)(a.x * k), (int)(a.y * k));
  }

  public static Double2 div (Int2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static Double2 div (Int2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static Float2 div (Int2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static Float2 div (Int2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static Int2 div (Int2 a, Int2 b) {
    return new Int2((int)(a.x / b.x), (int)(a.y / b.y));
  }

  public static Int2 div (Int2 a, int k) {
    return new Int2((int)(a.x / k), (int)(a.y / k));
  }

  public static Int2 mod (Int2 a, Int2 b) {
    return new Int2((int)(a.x % b.x), (int)(a.y % b.y));
  }

  public static Int2 mod (Int2 a, int k) {
    return new Int2((int)(a.x % k), (int)(a.y % k));
  }

  public static Int2 bitAnd (Int2 a, Int2 b) {
    return new Int2((int)(a.x & b.x), (int)(a.y & b.y));
  }

  public static Int2 bitOr (Int2 a, Int2 b) {
    return new Int2((int)(a.x | b.x), (int)(a.y | b.y));
  }

  public static Int2 bitXor (Int2 a, Int2 b) {
    return new Int2((int)(a.x ^ b.x), (int)(a.y ^ b.y));
  }

  public static Int2 bitNot (Int2 a) {
    return new Int2((int)(~a.x), (int)(~a.y));
  }

  public static Int2 abs (Int2 a) {
    return new Int2(Math.abs(a.x), Math.abs(a.y));
  }

  public static Int2 clamp (Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static Int2 max (Int2 a, Int2 b) {
    return new Int2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static Int2 maxMag (Int2 a, Int2 b) {
    return new Int2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static Int2 min (Int2 a, Int2 b) {
    return new Int2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static Int2 minMag (Int2 a, Int2 b) {
    return new Int2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static Int2 mix (Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static Int2 clamp (Int2 v, int min, int max) {
    return new Int2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static Int2 max (Int2 x, int y) {
    return new Int2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static Int2 min (Int2 x, int y) {
    return new Int2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static Int2 mix (Int2 x, Int2 y, int a) {
    return new Int2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static Int2 absDiff (Int2 a, Int2 b) {
    return new Int2(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y));
  }

  public static Int2 addSat (Int2 a, Int2 b) {
    return new Int2(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y));
  }

  public static Int2 clz (Int2 a) {
    return new Int2(Math.clz(a.x), Math.clz(a.y));
  }

  public static Int2 hadd (Int2 a, Int2 b) {
    return new Int2(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y));
  }

  public static Int2 madHi (Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y));
  }

  public static Int2 madSat (Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y));
  }

  public static Int2 mulHi (Int2 a, Int2 b) {
    return new Int2(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y));
  }

  public static Int2 rhadd (Int2 a, Int2 b) {
    return new Int2(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y));
  }

  public static Int2 rotate (Int2 a, Int2 b) {
    return new Int2(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y));
  }

  public static Int2 subSat (Int2 a, Int2 b) {
    return new Int2(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y));
  }

  public static Int2 mad24 (Int2 a, Int2 b, Int2 c) {
    return new Int2(Math.mad24(a.x, b.x, c.x), Math.mad24(a.y, b.y, c.y));
  }

  public static Int2 mul24 (Int2 a, Int2 b) {
    return new Int2(Math.mul24(a.x, b.x), Math.mul24(a.y, b.y));
  }
}
