package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Short3 {
  public short x;
  public short y;
  public short z;

  public Short3() {}

  public Short3(short x, short y, short z) {
    set(x, y, z);
  }

  public void set(short x, short y, short z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Short3(short v) {
    this(v, v, v);
  }

  public void set(short v) {
    set(v, v, v);
  }

  public Short3(short x, Short2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public void set(short x, Short2 vec1) {
    set(x, vec1.x, vec1.y);
  }

  public Short3(Short2 vec1, short z) {
    this(vec1.x, vec1.y, z);
  }

  public void set(Short2 vec1, short z) {
    set(vec1.x, vec1.y, z);
  }

  public Short3(Short3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public void set(Short3 vec1) {
    set(vec1.x, vec1.y, vec1.z);
  }

  public Byte3 convertByte3() {
    return new Byte3((byte)(x), (byte)(y), (byte)(z));
  }

  public void convertByte3(Byte3 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
    result.z = (byte)(z);
  }

  public Int3 convertInt3() {
    return new Int3((int)(x), (int)(y), (int)(z));
  }

  public void convertInt3(Int3 result) {
    result.x = (int)(x);
    result.y = (int)(y);
    result.z = (int)(z);
  }

  public Long3 convertLong3() {
    return new Long3((long)(x), (long)(y), (long)(z));
  }

  public void convertLong3(Long3 result) {
    result.x = (long)(x);
    result.y = (long)(y);
    result.z = (long)(z);
  }

  public Float3 convertFloat3() {
    return new Float3((float)(x), (float)(y), (float)(z));
  }

  public void convertFloat3(Float3 result) {
    result.x = (float)(x);
    result.y = (float)(y);
    result.z = (float)(z);
  }

  public Double3 convertDouble3() {
    return new Double3((double)(x), (double)(y), (double)(z));
  }

  public void convertDouble3(Double3 result) {
    result.x = (double)(x);
    result.y = (double)(y);
    result.z = (double)(z);
  }

  public Short2 asShort2() {
    return new Short2(x, y);
  }

  public void asShort2(Short2 result) {
    result.x = x;
    result.y = y;
  }

  public static Int3 isEqual(Short3 a, Short3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static void isEqual(Short3 a, Short3 b, Int3 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
  }

  public static Int3 isNotEqual(Short3 a, Short3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static void isNotEqual(Short3 a, Short3 b, Int3 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
  }

  public static Int3 isGreater(Short3 a, Short3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static void isGreater(Short3 a, Short3 b, Int3 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
  }

  public static Int3 isGreaterEqual(Short3 a, Short3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static void isGreaterEqual(Short3 a, Short3 b, Int3 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
  }

  public static Int3 isLess(Short3 a, Short3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static void isLess(Short3 a, Short3 b, Int3 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
  }

  public static Int3 isLessEqual(Short3 a, Short3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static void isLessEqual(Short3 a, Short3 b, Int3 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
  }

  public static Short3 select(Short3 a, Short3 b, Int3 c) {
    return new Short3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static void select(Short3 a, Short3 b, Int3 c, Short3 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
  }

  public static int any(Short3 a) {
    return (a.x != (short) 0 || a.y != (short) 0 || a.z != (short) 0)? 1 : 0;
  }

  public static int all(Short3 a) {
    return (a.x == (short) 0 || a.y == (short) 0 || a.z == (short) 0)? 0 : 1;
  }

  public static Short3 neg(Short3 a) {
    return new Short3((short)(-a.x), (short)(-a.y), (short)(-a.z));
  }

  public static void neg(Short3 a, Short3 result) {
    result.x = (short)(-a.x);
    result.y = (short)(-a.y);
    result.z = (short)(-a.z);
  }

  public static Short3 add(Short3 a, Short3 b) {
    return new Short3((short)(a.x + b.x), (short)(a.y + b.y), (short)(a.z + b.z));
  }

  public static void add(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x + b.x);
    result.y = (short)(a.y + b.y);
    result.z = (short)(a.z + b.z);
  }

  public static Short3 sub(Short3 a, Short3 b) {
    return new Short3((short)(a.x - b.x), (short)(a.y - b.y), (short)(a.z - b.z));
  }

  public static void sub(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x - b.x);
    result.y = (short)(a.y - b.y);
    result.z = (short)(a.z - b.z);
  }

  public static Double3 mul(Short3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static void mul(Short3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
  }

  public static Double3 mul(Short3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static void mul(Short3 a, double k, Double3 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
  }

  public static Float3 mul(Short3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static void mul(Short3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
  }

  public static Float3 mul(Short3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static void mul(Short3 a, float k, Float3 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
  }

  public static Short3 mul(Short3 a, Short3 b) {
    return new Short3((short)(a.x * b.x), (short)(a.y * b.y), (short)(a.z * b.z));
  }

  public static void mul(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x * b.x);
    result.y = (short)(a.y * b.y);
    result.z = (short)(a.z * b.z);
  }

  public static Short3 mul(Short3 a, short k) {
    return new Short3((short)(a.x * k), (short)(a.y * k), (short)(a.z * k));
  }

  public static void mul(Short3 a, short k, Short3 result) {
    result.x = (short)(a.x * k);
    result.y = (short)(a.y * k);
    result.z = (short)(a.z * k);
  }

  public static Double3 div(Short3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static void div(Short3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
  }

  public static Double3 div(Short3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static void div(Short3 a, double k, Double3 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
  }

  public static Float3 div(Short3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static void div(Short3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
  }

  public static Float3 div(Short3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static void div(Short3 a, float k, Float3 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
  }

  public static Short3 div(Short3 a, Short3 b) {
    return new Short3((short)(a.x / b.x), (short)(a.y / b.y), (short)(a.z / b.z));
  }

  public static void div(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x / b.x);
    result.y = (short)(a.y / b.y);
    result.z = (short)(a.z / b.z);
  }

  public static Short3 div(Short3 a, short k) {
    return new Short3((short)(a.x / k), (short)(a.y / k), (short)(a.z / k));
  }

  public static void div(Short3 a, short k, Short3 result) {
    result.x = (short)(a.x / k);
    result.y = (short)(a.y / k);
    result.z = (short)(a.z / k);
  }

  public static Short3 mod(Short3 a, Short3 b) {
    return new Short3((short)(a.x % b.x), (short)(a.y % b.y), (short)(a.z % b.z));
  }

  public static void mod(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x % b.x);
    result.y = (short)(a.y % b.y);
    result.z = (short)(a.z % b.z);
  }

  public static Short3 mod(Short3 a, short k) {
    return new Short3((short)(a.x % k), (short)(a.y % k), (short)(a.z % k));
  }

  public static void mod(Short3 a, short k, Short3 result) {
    result.x = (short)(a.x % k);
    result.y = (short)(a.y % k);
    result.z = (short)(a.z % k);
  }

  public static Short3 bitAnd(Short3 a, Short3 b) {
    return new Short3((short)(a.x & b.x), (short)(a.y & b.y), (short)(a.z & b.z));
  }

  public static void bitAnd(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x & b.x);
    result.y = (short)(a.y & b.y);
    result.z = (short)(a.z & b.z);
  }

  public static Short3 bitOr(Short3 a, Short3 b) {
    return new Short3((short)(a.x | b.x), (short)(a.y | b.y), (short)(a.z | b.z));
  }

  public static void bitOr(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x | b.x);
    result.y = (short)(a.y | b.y);
    result.z = (short)(a.z | b.z);
  }

  public static Short3 bitXor(Short3 a, Short3 b) {
    return new Short3((short)(a.x ^ b.x), (short)(a.y ^ b.y), (short)(a.z ^ b.z));
  }

  public static void bitXor(Short3 a, Short3 b, Short3 result) {
    result.x = (short)(a.x ^ b.x);
    result.y = (short)(a.y ^ b.y);
    result.z = (short)(a.z ^ b.z);
  }

  public static Short3 bitNot(Short3 a) {
    return new Short3((short)(~a.x), (short)(~a.y), (short)(~a.z));
  }

  public static void bitNot(Short3 a, Short3 result) {
    result.x = (short)(~a.x);
    result.y = (short)(~a.y);
    result.z = (short)(~a.z);
  }

  public static Short3 abs(Short3 a) {
    return new Short3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static void abs(Short3 a, Short3 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
  }

  public static Short3 clamp(Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static void clamp(Short3 a, Short3 b, Short3 c, Short3 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
  }

  public static Short3 max(Short3 a, Short3 b) {
    return new Short3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static void max(Short3 a, Short3 b, Short3 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
  }

  public static Short3 maxMag(Short3 a, Short3 b) {
    return new Short3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static void maxMag(Short3 a, Short3 b, Short3 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
  }

  public static Short3 min(Short3 a, Short3 b) {
    return new Short3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static void min(Short3 a, Short3 b, Short3 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
  }

  public static Short3 minMag(Short3 a, Short3 b) {
    return new Short3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static void minMag(Short3 a, Short3 b, Short3 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
  }

  public static Short3 mix(Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static void mix(Short3 a, Short3 b, Short3 c, Short3 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
  }

  public static Short3 clamp(Short3 v, short min, short max) {
    return new Short3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static void clamp(Short3 v, short min, short max, Short3 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
  }

  public static Short3 max(Short3 x, short y) {
    return new Short3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static void max(Short3 x, short y, Short3 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
  }

  public static Short3 min(Short3 x, short y) {
    return new Short3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static void min(Short3 x, short y, Short3 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
  }

  public static Short3 mix(Short3 x, Short3 y, short a) {
    return new Short3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static void mix(Short3 x, Short3 y, short a, Short3 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
  }

  public static Short3 absDiff(Short3 a, Short3 b) {
    return new Short3(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z));
  }

  public static void absDiff(Short3 a, Short3 b, Short3 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
  }

  public static Short3 addSat(Short3 a, Short3 b) {
    return new Short3(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z));
  }

  public static void addSat(Short3 a, Short3 b, Short3 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
  }

  public static Short3 clz(Short3 a) {
    return new Short3(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z));
  }

  public static void clz(Short3 a, Short3 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
  }

  public static Short3 hadd(Short3 a, Short3 b) {
    return new Short3(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z));
  }

  public static void hadd(Short3 a, Short3 b, Short3 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
  }

  public static Short3 madHi(Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z));
  }

  public static void madHi(Short3 a, Short3 b, Short3 c, Short3 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
  }

  public static Short3 madSat(Short3 a, Short3 b, Short3 c) {
    return new Short3(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z));
  }

  public static void madSat(Short3 a, Short3 b, Short3 c, Short3 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
  }

  public static Short3 mulHi(Short3 a, Short3 b) {
    return new Short3(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z));
  }

  public static void mulHi(Short3 a, Short3 b, Short3 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
  }

  public static Short3 rhadd(Short3 a, Short3 b) {
    return new Short3(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z));
  }

  public static void rhadd(Short3 a, Short3 b, Short3 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
  }

  public static Short3 rotate(Short3 a, Short3 b) {
    return new Short3(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z));
  }

  public static void rotate(Short3 a, Short3 b, Short3 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
  }

  public static Short3 subSat(Short3 a, Short3 b) {
    return new Short3(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z));
  }

  public static void subSat(Short3 a, Short3 b, Short3 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
  }
}
