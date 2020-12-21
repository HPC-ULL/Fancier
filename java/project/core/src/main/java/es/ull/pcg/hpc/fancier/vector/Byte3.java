package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Byte3 {
  public byte x;
  public byte y;
  public byte z;

  public Byte3() {}

  public Byte3(byte x, byte y, byte z) {
    set(x, y, z);
  }

  public void set(byte x, byte y, byte z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Byte3(byte v) {
    this(v, v, v);
  }

  public void set(byte v) {
    set(v, v, v);
  }

  public Byte3(byte x, Byte2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public void set(byte x, Byte2 vec1) {
    set(x, vec1.x, vec1.y);
  }

  public Byte3(Byte2 vec1, byte z) {
    this(vec1.x, vec1.y, z);
  }

  public void set(Byte2 vec1, byte z) {
    set(vec1.x, vec1.y, z);
  }

  public Byte3(Byte3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public void set(Byte3 vec1) {
    set(vec1.x, vec1.y, vec1.z);
  }

  public Short3 convertShort3() {
    return new Short3((short)(x & 0xff), (short)(y & 0xff), (short)(z & 0xff));
  }

  public void convertShort3(Short3 result) {
    result.x = (short)(x & 0xff);
    result.y = (short)(y & 0xff);
    result.z = (short)(z & 0xff);
  }

  public Int3 convertInt3() {
    return new Int3((int)(x & 0xff), (int)(y & 0xff), (int)(z & 0xff));
  }

  public void convertInt3(Int3 result) {
    result.x = (int)(x & 0xff);
    result.y = (int)(y & 0xff);
    result.z = (int)(z & 0xff);
  }

  public Long3 convertLong3() {
    return new Long3((long)(x & 0xff), (long)(y & 0xff), (long)(z & 0xff));
  }

  public void convertLong3(Long3 result) {
    result.x = (long)(x & 0xff);
    result.y = (long)(y & 0xff);
    result.z = (long)(z & 0xff);
  }

  public Float3 convertFloat3() {
    return new Float3((float)(x & 0xff), (float)(y & 0xff), (float)(z & 0xff));
  }

  public void convertFloat3(Float3 result) {
    result.x = (float)(x & 0xff);
    result.y = (float)(y & 0xff);
    result.z = (float)(z & 0xff);
  }

  public Double3 convertDouble3() {
    return new Double3((double)(x & 0xff), (double)(y & 0xff), (double)(z & 0xff));
  }

  public void convertDouble3(Double3 result) {
    result.x = (double)(x & 0xff);
    result.y = (double)(y & 0xff);
    result.z = (double)(z & 0xff);
  }

  public Byte2 asByte2() {
    return new Byte2(x, y);
  }

  public void asByte2(Byte2 result) {
    result.x = x;
    result.y = y;
  }

  public static Int3 isEqual(Byte3 a, Byte3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static void isEqual(Byte3 a, Byte3 b, Int3 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
  }

  public static Int3 isNotEqual(Byte3 a, Byte3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static void isNotEqual(Byte3 a, Byte3 b, Int3 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
  }

  public static Int3 isGreater(Byte3 a, Byte3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static void isGreater(Byte3 a, Byte3 b, Int3 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
  }

  public static Int3 isGreaterEqual(Byte3 a, Byte3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static void isGreaterEqual(Byte3 a, Byte3 b, Int3 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
  }

  public static Int3 isLess(Byte3 a, Byte3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static void isLess(Byte3 a, Byte3 b, Int3 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
  }

  public static Int3 isLessEqual(Byte3 a, Byte3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static void isLessEqual(Byte3 a, Byte3 b, Int3 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
  }

  public static Byte3 select(Byte3 a, Byte3 b, Int3 c) {
    return new Byte3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static void select(Byte3 a, Byte3 b, Int3 c, Byte3 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
  }

  public static int any(Byte3 a) {
    return (a.x != (byte) 0 || a.y != (byte) 0 || a.z != (byte) 0)? 1 : 0;
  }

  public static int all(Byte3 a) {
    return (a.x == (byte) 0 || a.y == (byte) 0 || a.z == (byte) 0)? 0 : 1;
  }

  public static Byte3 neg(Byte3 a) {
    return new Byte3((byte)(-a.x), (byte)(-a.y), (byte)(-a.z));
  }

  public static void neg(Byte3 a, Byte3 result) {
    result.x = (byte)(-a.x);
    result.y = (byte)(-a.y);
    result.z = (byte)(-a.z);
  }

  public static Byte3 add(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x + b.x), (byte)(a.y + b.y), (byte)(a.z + b.z));
  }

  public static void add(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x + b.x);
    result.y = (byte)(a.y + b.y);
    result.z = (byte)(a.z + b.z);
  }

  public static Byte3 sub(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x - b.x), (byte)(a.y - b.y), (byte)(a.z - b.z));
  }

  public static void sub(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x - b.x);
    result.y = (byte)(a.y - b.y);
    result.z = (byte)(a.z - b.z);
  }

  public static Byte3 mul(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x * b.x), (byte)(a.y * b.y), (byte)(a.z * b.z));
  }

  public static void mul(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x * b.x);
    result.y = (byte)(a.y * b.y);
    result.z = (byte)(a.z * b.z);
  }

  public static Byte3 mul(Byte3 a, byte k) {
    return new Byte3((byte)(a.x * k), (byte)(a.y * k), (byte)(a.z * k));
  }

  public static void mul(Byte3 a, byte k, Byte3 result) {
    result.x = (byte)(a.x * k);
    result.y = (byte)(a.y * k);
    result.z = (byte)(a.z * k);
  }

  public static Double3 mul(Byte3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static void mul(Byte3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
  }

  public static Double3 mul(Byte3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static void mul(Byte3 a, double k, Double3 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
  }

  public static Float3 mul(Byte3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static void mul(Byte3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
  }

  public static Float3 mul(Byte3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static void mul(Byte3 a, float k, Float3 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
  }

  public static Byte3 div(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x / b.x), (byte)(a.y / b.y), (byte)(a.z / b.z));
  }

  public static void div(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x / b.x);
    result.y = (byte)(a.y / b.y);
    result.z = (byte)(a.z / b.z);
  }

  public static Byte3 div(Byte3 a, byte k) {
    return new Byte3((byte)(a.x / k), (byte)(a.y / k), (byte)(a.z / k));
  }

  public static void div(Byte3 a, byte k, Byte3 result) {
    result.x = (byte)(a.x / k);
    result.y = (byte)(a.y / k);
    result.z = (byte)(a.z / k);
  }

  public static Double3 div(Byte3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static void div(Byte3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
  }

  public static Double3 div(Byte3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static void div(Byte3 a, double k, Double3 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
  }

  public static Float3 div(Byte3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static void div(Byte3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
  }

  public static Float3 div(Byte3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static void div(Byte3 a, float k, Float3 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
  }

  public static Byte3 mod(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x % b.x), (byte)(a.y % b.y), (byte)(a.z % b.z));
  }

  public static void mod(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x % b.x);
    result.y = (byte)(a.y % b.y);
    result.z = (byte)(a.z % b.z);
  }

  public static Byte3 mod(Byte3 a, byte k) {
    return new Byte3((byte)(a.x % k), (byte)(a.y % k), (byte)(a.z % k));
  }

  public static void mod(Byte3 a, byte k, Byte3 result) {
    result.x = (byte)(a.x % k);
    result.y = (byte)(a.y % k);
    result.z = (byte)(a.z % k);
  }

  public static Byte3 bitAnd(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x & b.x), (byte)(a.y & b.y), (byte)(a.z & b.z));
  }

  public static void bitAnd(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x & b.x);
    result.y = (byte)(a.y & b.y);
    result.z = (byte)(a.z & b.z);
  }

  public static Byte3 bitOr(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x | b.x), (byte)(a.y | b.y), (byte)(a.z | b.z));
  }

  public static void bitOr(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x | b.x);
    result.y = (byte)(a.y | b.y);
    result.z = (byte)(a.z | b.z);
  }

  public static Byte3 bitXor(Byte3 a, Byte3 b) {
    return new Byte3((byte)(a.x ^ b.x), (byte)(a.y ^ b.y), (byte)(a.z ^ b.z));
  }

  public static void bitXor(Byte3 a, Byte3 b, Byte3 result) {
    result.x = (byte)(a.x ^ b.x);
    result.y = (byte)(a.y ^ b.y);
    result.z = (byte)(a.z ^ b.z);
  }

  public static Byte3 bitNot(Byte3 a) {
    return new Byte3((byte)(~a.x), (byte)(~a.y), (byte)(~a.z));
  }

  public static void bitNot(Byte3 a, Byte3 result) {
    result.x = (byte)(~a.x);
    result.y = (byte)(~a.y);
    result.z = (byte)(~a.z);
  }

  public static Byte3 abs(Byte3 a) {
    return new Byte3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static void abs(Byte3 a, Byte3 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
  }

  public static Byte3 clamp(Byte3 a, Byte3 b, Byte3 c) {
    return new Byte3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static void clamp(Byte3 a, Byte3 b, Byte3 c, Byte3 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
  }

  public static Byte3 max(Byte3 a, Byte3 b) {
    return new Byte3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static void max(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
  }

  public static Byte3 maxMag(Byte3 a, Byte3 b) {
    return new Byte3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static void maxMag(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
  }

  public static Byte3 min(Byte3 a, Byte3 b) {
    return new Byte3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static void min(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
  }

  public static Byte3 minMag(Byte3 a, Byte3 b) {
    return new Byte3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static void minMag(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
  }

  public static Byte3 mix(Byte3 a, Byte3 b, Byte3 c) {
    return new Byte3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static void mix(Byte3 a, Byte3 b, Byte3 c, Byte3 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
  }

  public static Byte3 clamp(Byte3 v, byte min, byte max) {
    return new Byte3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static void clamp(Byte3 v, byte min, byte max, Byte3 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
  }

  public static Byte3 max(Byte3 x, byte y) {
    return new Byte3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static void max(Byte3 x, byte y, Byte3 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
  }

  public static Byte3 min(Byte3 x, byte y) {
    return new Byte3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static void min(Byte3 x, byte y, Byte3 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
  }

  public static Byte3 mix(Byte3 x, Byte3 y, byte a) {
    return new Byte3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static void mix(Byte3 x, Byte3 y, byte a, Byte3 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
  }

  public static Byte3 absDiff(Byte3 a, Byte3 b) {
    return new Byte3(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z));
  }

  public static void absDiff(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
  }

  public static Byte3 addSat(Byte3 a, Byte3 b) {
    return new Byte3(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z));
  }

  public static void addSat(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
  }

  public static Byte3 clz(Byte3 a) {
    return new Byte3(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z));
  }

  public static void clz(Byte3 a, Byte3 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
  }

  public static Byte3 hadd(Byte3 a, Byte3 b) {
    return new Byte3(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z));
  }

  public static void hadd(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
  }

  public static Byte3 madHi(Byte3 a, Byte3 b, Byte3 c) {
    return new Byte3(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z));
  }

  public static void madHi(Byte3 a, Byte3 b, Byte3 c, Byte3 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
  }

  public static Byte3 madSat(Byte3 a, Byte3 b, Byte3 c) {
    return new Byte3(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z));
  }

  public static void madSat(Byte3 a, Byte3 b, Byte3 c, Byte3 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
  }

  public static Byte3 mulHi(Byte3 a, Byte3 b) {
    return new Byte3(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z));
  }

  public static void mulHi(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
  }

  public static Byte3 rhadd(Byte3 a, Byte3 b) {
    return new Byte3(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z));
  }

  public static void rhadd(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
  }

  public static Byte3 rotate(Byte3 a, Byte3 b) {
    return new Byte3(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z));
  }

  public static void rotate(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
  }

  public static Byte3 subSat(Byte3 a, Byte3 b) {
    return new Byte3(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z));
  }

  public static void subSat(Byte3 a, Byte3 b, Byte3 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
  }
}
