package es.ull.pcg.hpc.fancier.vector;

import java.nio.ByteBuffer;

import es.ull.pcg.hpc.fancier.Math;

public class Int3 {
  public int x;
  public int y;
  public int z;

  public Int3(int x, int y, int z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Int3(int v) {
    this(v, v, v);
  }

  public Int3() {
    this((int) 0);
  }

  public Int3(int x, Int2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public Int3(Int2 vec1, int z) {
    this(vec1.x, vec1.y, z);
  }

  public Int3(Int3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public static Int3 fromBuffer(ByteBuffer buffer) {
    Int3 result = new Int3();

    result.x = buffer.getInt();
    result.y = buffer.getInt();
    result.z = buffer.getInt();
    // Advance index to compensate for memory alignment
    buffer.getInt();

    return result;
  }

  public void toBuffer(ByteBuffer buffer) {
    buffer.putInt(this.x);
    buffer.putInt(this.y);
    buffer.putInt(this.z);
    // Advance index to compensate for memory alignment
    buffer.getInt();
  }
  public Byte3 convertByte3() {
    return new Byte3((byte) x, (byte) y, (byte) z);
  }

  public Short3 convertShort3() {
    return new Short3((short) x, (short) y, (short) z);
  }

  public Long3 convertLong3() {
    return new Long3((long) x, (long) y, (long) z);
  }

  public Float3 convertFloat3() {
    return new Float3((float) x, (float) y, (float) z);
  }

  public Double3 convertDouble3() {
    return new Double3((double) x, (double) y, (double) z);
  }

  public Int2 asInt2() {
    return new Int2(x, y);
  }

  public static Int3 isEqual(Int3 a, Int3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static Int3 isNotEqual(Int3 a, Int3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static Int3 isGreater(Int3 a, Int3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static Int3 isGreaterEqual(Int3 a, Int3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static Int3 isLess(Int3 a, Int3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static Int3 isLessEqual(Int3 a, Int3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static Int3 select(Int3 a, Int3 b, Int3 c) {
    return new Int3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static int any(Int3 a) {
    return (a.x != 0 || a.y != 0 || a.z != 0)? 1 : 0;
  }

  public static int all(Int3 a) {
    return (a.x == 0 || a.y == 0 || a.z == 0)? 0 : 1;
  }

  public static Int3 add(Int3 a, Int3 b) {
    return new Int3((int)(a.x + b.x), (int)(a.y + b.y), (int)(a.z + b.z));
  }

  public static Int3 sub(Int3 a, Int3 b) {
    return new Int3((int)(a.x - b.x), (int)(a.y - b.y), (int)(a.z - b.z));
  }

  public static Double3 mul(Int3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static Double3 mul(Int3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static Float3 mul(Int3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static Float3 mul(Int3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static Int3 mul(Int3 a, Int3 b) {
    return new Int3((int)(a.x * b.x), (int)(a.y * b.y), (int)(a.z * b.z));
  }

  public static Int3 mul(Int3 a, int k) {
    return new Int3((int)(a.x * k), (int)(a.y * k), (int)(a.z * k));
  }

  public static Double3 div(Int3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static Double3 div(Int3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static Float3 div(Int3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static Float3 div(Int3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static Int3 div(Int3 a, Int3 b) {
    return new Int3((int)(a.x / b.x), (int)(a.y / b.y), (int)(a.z / b.z));
  }

  public static Int3 div(Int3 a, int k) {
    return new Int3((int)(a.x / k), (int)(a.y / k), (int)(a.z / k));
  }

  public static Int3 mod(Int3 a, Int3 b) {
    return new Int3((int)(a.x % b.x), (int)(a.y % b.y), (int)(a.z % b.z));
  }

  public static Int3 mod(Int3 a, int k) {
    return new Int3((int)(a.x % k), (int)(a.y % k), (int)(a.z % k));
  }

  public static Int3 bitAnd(Int3 a, Int3 b) {
    return new Int3((int)(a.x & b.x), (int)(a.y & b.y), (int)(a.z & b.z));
  }

  public static Int3 bitOr(Int3 a, Int3 b) {
    return new Int3((int)(a.x | b.x), (int)(a.y | b.y), (int)(a.z | b.z));
  }

  public static Int3 bitXor(Int3 a, Int3 b) {
    return new Int3((int)(a.x ^ b.x), (int)(a.y ^ b.y), (int)(a.z ^ b.z));
  }

  public static Int3 bitNot(Int3 a) {
    return new Int3((int)(~a.x), (int)(~a.y), (int)(~a.z));
  }

  public static Int3 abs(Int3 a) {
    return new Int3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static Int3 clamp(Int3 a, Int3 b, Int3 c) {
    return new Int3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static Int3 max(Int3 a, Int3 b) {
    return new Int3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static Int3 maxMag(Int3 a, Int3 b) {
    return new Int3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static Int3 min(Int3 a, Int3 b) {
    return new Int3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static Int3 minMag(Int3 a, Int3 b) {
    return new Int3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static Int3 mix(Int3 a, Int3 b, Int3 c) {
    return new Int3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static Int3 clamp(Int3 v, int min, int max) {
    return new Int3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static Int3 max(Int3 x, int y) {
    return new Int3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static Int3 min(Int3 x, int y) {
    return new Int3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static Int3 mix(Int3 x, Int3 y, int a) {
    return new Int3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static Int3 absDiff(Int3 a, Int3 b) {
    return new Int3(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z));
  }

  public static Int3 addSat(Int3 a, Int3 b) {
    return new Int3(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z));
  }

  public static Int3 clz(Int3 a) {
    return new Int3(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z));
  }

  public static Int3 hadd(Int3 a, Int3 b) {
    return new Int3(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z));
  }

  public static Int3 madHi(Int3 a, Int3 b, Int3 c) {
    return new Int3(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z));
  }

  public static Int3 madSat(Int3 a, Int3 b, Int3 c) {
    return new Int3(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z));
  }

  public static Int3 mulHi(Int3 a, Int3 b) {
    return new Int3(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z));
  }

  public static Int3 rhadd(Int3 a, Int3 b) {
    return new Int3(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z));
  }

  public static Int3 rotate(Int3 a, Int3 b) {
    return new Int3(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z));
  }

  public static Int3 subSat(Int3 a, Int3 b) {
    return new Int3(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z));
  }

  public static Int3 mad24(Int3 a, Int3 b, Int3 c) {
    return new Int3(Math.mad24(a.x, b.x, c.x), Math.mad24(a.y, b.y, c.y), Math.mad24(a.z, b.z, c.z));
  }

  public static Int3 mul24(Int3 a, Int3 b) {
    return new Int3(Math.mul24(a.x, b.x), Math.mul24(a.y, b.y), Math.mul24(a.z, b.z));
  }
}
