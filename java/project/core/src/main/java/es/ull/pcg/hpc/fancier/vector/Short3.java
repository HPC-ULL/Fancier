package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Short3 {
  public short x;
  public short y;
  public short z;

  public Short3 (short x, short y, short z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Short3 (short v) {
    this(v, v, v);
  }

  public Short3 () {
    this((short) 0);
  }

  public Short3 (short x, Short2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public Short3 (Short2 vec1, short z) {
    this(vec1.x, vec1.y, z);
  }

  public Short3 (Short3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public Byte3 convertByte3 () {
    return new Byte3((byte) x, (byte) y, (byte) z);
  }

  public Int3 convertInt3 () {
    return new Int3((int) x, (int) y, (int) z);
  }

  public Long3 convertLong3 () {
    return new Long3((long) x, (long) y, (long) z);
  }

  public Float3 convertFloat3 () {
    return new Float3((float) x, (float) y, (float) z);
  }

  public Double3 convertDouble3 () {
    return new Double3((double) x, (double) y, (double) z);
  }

  public Short2 asShort2 () {
    return new Short2(x, y);
  }

  public static Int3 isEqual (Short3 a, Short3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static Int3 isNotEqual (Short3 a, Short3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static Int3 isGreater (Short3 a, Short3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static Int3 isGreaterEqual (Short3 a, Short3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static Int3 isLess (Short3 a, Short3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static Int3 isLessEqual (Short3 a, Short3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static Short3 select (Short3 a, Short3 b, Int3 c) {
    return new Short3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static int any (Short3 a) {
    return (a.x != (short) 0 || a.y != (short) 0 || a.z != (short) 0)? 1 : 0;
  }

  public static int all (Short3 a) {
    return (a.x == (short) 0 || a.y == (short) 0 || a.z == (short) 0)? 1 : 0;
  }

  public static Short3 add (Short3 a, Short3 b) {
    return new Short3((short)(a.x + b.x), (short)(a.y + b.y), (short)(a.z + b.z));
  }

  public static Short3 sub (Short3 a, Short3 b) {
    return new Short3((short)(a.x - b.x), (short)(a.y - b.y), (short)(a.z - b.z));
  }

  public static Double3 mul (Short3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static Double3 mul (Short3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static Float3 mul (Short3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static Float3 mul (Short3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static Short3 mul (Short3 a, Short3 b) {
    return new Short3((short)(a.x * b.x), (short)(a.y * b.y), (short)(a.z * b.z));
  }

  public static Short3 mul (Short3 a, short k) {
    return new Short3((short)(a.x * k), (short)(a.y * k), (short)(a.z * k));
  }

  public static Double3 div (Short3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static Double3 div (Short3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static Float3 div (Short3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static Float3 div (Short3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static Short3 div (Short3 a, Short3 b) {
    return new Short3((short)(a.x / b.x), (short)(a.y / b.y), (short)(a.z / b.z));
  }

  public static Short3 div (Short3 a, short k) {
    return new Short3((short)(a.x / k), (short)(a.y / k), (short)(a.z / k));
  }

  public static Short3 mod (Short3 a, Short3 b) {
    return new Short3((short)(a.x % b.x), (short)(a.y % b.y), (short)(a.z % b.z));
  }

  public static Short3 mod (Short3 a, short k) {
    return new Short3((short)(a.x % k), (short)(a.y % k), (short)(a.z % k));
  }

  public static Short3 bitAnd (Short3 a, Short3 b) {
    return new Short3((short)(a.x & b.x), (short)(a.y & b.y), (short)(a.z & b.z));
  }

  public static Short3 bitOr (Short3 a, Short3 b) {
    return new Short3((short)(a.x | b.x), (short)(a.y | b.y), (short)(a.z | b.z));
  }

  public static Short3 bitXor (Short3 a, Short3 b) {
    return new Short3((short)(a.x ^ b.x), (short)(a.y ^ b.y), (short)(a.z ^ b.z));
  }

  public static Short3 bitNot (Short3 a) {
    return new Short3((short)(~a.x), (short)(~a.y), (short)(~a.z));
  }

  public static Short3 abs (Short3 a) {
    return new Short3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static Short3 clamp (Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static Short3 max (Short3 a, Short3 b) {
    return new Short3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static Short3 maxMag (Short3 a, Short3 b) {
    return new Short3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static Short3 min (Short3 a, Short3 b) {
    return new Short3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static Short3 minMag (Short3 a, Short3 b) {
    return new Short3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static Short3 mix (Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static Short3 clamp (Short3 v, short min, short max) {
    return new Short3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static Short3 max (Short3 x, short y) {
    return new Short3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static Short3 min (Short3 x, short y) {
    return new Short3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static Short3 mix (Short3 x, Short3 y, short a) {
    return new Short3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static Short3 absDiff (Short3 a, Short3 b) {
    return new Short3(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z));
  }

  public static Short3 addSat (Short3 a, Short3 b) {
    return new Short3(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z));
  }

  public static Short3 clz (Short3 a) {
    return new Short3(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z));
  }

  public static Short3 hadd (Short3 a, Short3 b) {
    return new Short3(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z));
  }

  public static Short3 madHi (Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z));
  }

  public static Short3 madSat (Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z));
  }

  public static Short3 mulHi (Short3 a, Short3 b) {
    return new Short3(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z));
  }

  public static Short3 rhadd (Short3 a, Short3 b) {
    return new Short3(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z));
  }

  public static Short3 rotate (Short3 a, Short3 b) {
    return new Short3(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z));
  }

  public static Short3 subSat (Short3 a, Short3 b) {
    return new Short3(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z));
  }
}
