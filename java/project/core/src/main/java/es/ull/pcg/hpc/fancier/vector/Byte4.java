package es.ull.pcg.hpc.fancier.vector;

import java.nio.ByteBuffer;

import es.ull.pcg.hpc.fancier.Math;

public class Byte4 {
  public byte x;
  public byte y;
  public byte z;
  public byte w;

  public Byte4(byte x, byte y, byte z, byte w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Byte4(byte v) {
    this(v, v, v, v);
  }

  public Byte4() {
    this((byte) 0);
  }

  public Byte4(byte x, byte y, Byte2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public Byte4(byte x, Byte2 vec1, byte w) {
    this(x, vec1.x, vec1.y, w);
  }

  public Byte4(byte x, Byte3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public Byte4(Byte2 vec1, byte z, byte w) {
    this(vec1.x, vec1.y, z, w);
  }

  public Byte4(Byte2 vec1, Byte2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Byte4(Byte3 vec1, byte w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public Byte4(Byte4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public static Byte4 fromBuffer(ByteBuffer buffer) {
    Byte4 result = new Byte4();

    result.x = buffer.get();
    result.y = buffer.get();
    result.z = buffer.get();
    result.w = buffer.get();

    return result;
  }

  public void toBuffer(ByteBuffer buffer) {
    buffer.put(this.x);
    buffer.put(this.y);
    buffer.put(this.z);
    buffer.put(this.w);
  }
  public Byte2 lo() {
    return new Byte2(x, y);
  }

  public Byte2 hi() {
    return new Byte2(z, w);
  }

  public Byte2 odd() {
    return new Byte2(y, w);
  }

  public Byte2 even() {
    return new Byte2(x, z);
  }

  public Short4 convertShort4() {
    return new Short4((short) x, (short) y, (short) z, (short) w);
  }

  public Int4 convertInt4() {
    return new Int4((int) x, (int) y, (int) z, (int) w);
  }

  public Long4 convertLong4() {
    return new Long4((long) x, (long) y, (long) z, (long) w);
  }

  public Float4 convertFloat4() {
    return new Float4((float) x, (float) y, (float) z, (float) w);
  }

  public Double4 convertDouble4() {
    return new Double4((double) x, (double) y, (double) z, (double) w);
  }

  public Byte2 asByte2() {
    return new Byte2(x, y);
  }

  public Byte3 asByte3() {
    return new Byte3(x, y, z);
  }

  public static Int4 isEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static Int4 isNotEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static Int4 isGreater(Byte4 a, Byte4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static Int4 isGreaterEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static Int4 isLess(Byte4 a, Byte4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static Int4 isLessEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static Byte4 select(Byte4 a, Byte4 b, Int4 c) {
    return new Byte4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static int any(Byte4 a) {
    return (a.x != (byte) 0 || a.y != (byte) 0 || a.z != (byte) 0 || a.w != (byte) 0)? 1 : 0;
  }

  public static int all(Byte4 a) {
    return (a.x == (byte) 0 || a.y == (byte) 0 || a.z == (byte) 0 || a.w == (byte) 0)? 0 : 1;
  }

  public static Byte4 add(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x + b.x), (byte)(a.y + b.y), (byte)(a.z + b.z), (byte)(a.w + b.w));
  }

  public static Byte4 sub(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x - b.x), (byte)(a.y - b.y), (byte)(a.z - b.z), (byte)(a.w - b.w));
  }

  public static Byte4 mul(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x * b.x), (byte)(a.y * b.y), (byte)(a.z * b.z), (byte)(a.w * b.w));
  }

  public static Byte4 mul(Byte4 a, byte k) {
    return new Byte4((byte)(a.x * k), (byte)(a.y * k), (byte)(a.z * k), (byte)(a.w * k));
  }

  public static Double4 mul(Byte4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static Double4 mul(Byte4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static Float4 mul(Byte4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static Float4 mul(Byte4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static Byte4 div(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x / b.x), (byte)(a.y / b.y), (byte)(a.z / b.z), (byte)(a.w / b.w));
  }

  public static Byte4 div(Byte4 a, byte k) {
    return new Byte4((byte)(a.x / k), (byte)(a.y / k), (byte)(a.z / k), (byte)(a.w / k));
  }

  public static Double4 div(Byte4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static Double4 div(Byte4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static Float4 div(Byte4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static Float4 div(Byte4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static Byte4 mod(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x % b.x), (byte)(a.y % b.y), (byte)(a.z % b.z), (byte)(a.w % b.w));
  }

  public static Byte4 mod(Byte4 a, byte k) {
    return new Byte4((byte)(a.x % k), (byte)(a.y % k), (byte)(a.z % k), (byte)(a.w % k));
  }

  public static Byte4 bitAnd(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x & b.x), (byte)(a.y & b.y), (byte)(a.z & b.z), (byte)(a.w & b.w));
  }

  public static Byte4 bitOr(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x | b.x), (byte)(a.y | b.y), (byte)(a.z | b.z), (byte)(a.w | b.w));
  }

  public static Byte4 bitXor(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x ^ b.x), (byte)(a.y ^ b.y), (byte)(a.z ^ b.z), (byte)(a.w ^ b.w));
  }

  public static Byte4 bitNot(Byte4 a) {
    return new Byte4((byte)(~a.x), (byte)(~a.y), (byte)(~a.z), (byte)(~a.w));
  }

  public static Byte4 abs(Byte4 a) {
    return new Byte4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static Byte4 clamp(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static Byte4 max(Byte4 a, Byte4 b) {
    return new Byte4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static Byte4 maxMag(Byte4 a, Byte4 b) {
    return new Byte4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static Byte4 min(Byte4 a, Byte4 b) {
    return new Byte4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static Byte4 minMag(Byte4 a, Byte4 b) {
    return new Byte4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static Byte4 mix(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static Byte4 clamp(Byte4 v, byte min, byte max) {
    return new Byte4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static Byte4 max(Byte4 x, byte y) {
    return new Byte4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static Byte4 min(Byte4 x, byte y) {
    return new Byte4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static Byte4 mix(Byte4 x, Byte4 y, byte a) {
    return new Byte4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static Byte4 absDiff(Byte4 a, Byte4 b) {
    return new Byte4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static Byte4 addSat(Byte4 a, Byte4 b) {
    return new Byte4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static Byte4 clz(Byte4 a) {
    return new Byte4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static Byte4 hadd(Byte4 a, Byte4 b) {
    return new Byte4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static Byte4 madHi(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static Byte4 madSat(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static Byte4 mulHi(Byte4 a, Byte4 b) {
    return new Byte4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static Byte4 rhadd(Byte4 a, Byte4 b) {
    return new Byte4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static Byte4 rotate(Byte4 a, Byte4 b) {
    return new Byte4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static Byte4 subSat(Byte4 a, Byte4 b) {
    return new Byte4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }
}
