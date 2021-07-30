/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * DO NOT MANUALLY EDIT THIS FILE!
 * This file has been automatically generated, any modifications will be lost
 * when generating the Fancier library. Any modifications to this file must be
 * done via the corresponding template.
 */

package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Long3 {
  public long x;
  public long y;
  public long z;

  public Long3() {}

  public Long3(long x, long y, long z) {
    set(x, y, z);
  }

  public void set(long x, long y, long z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  public Long3(long v) {
    this(v, v, v);
  }

  public void set(long v) {
    set(v, v, v);
  }

  public Long3(long x, Long2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  public void set(long x, Long2 vec1) {
    set(x, vec1.x, vec1.y);
  }

  public Long3(Long2 vec1, long z) {
    this(vec1.x, vec1.y, z);
  }

  public void set(Long2 vec1, long z) {
    set(vec1.x, vec1.y, z);
  }

  public Long3(Long3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  public void set(Long3 vec1) {
    set(vec1.x, vec1.y, vec1.z);
  }

  public Long3 value() {
    return new Long3(this);
  }

  public Byte3 convertByte3() {
    return new Byte3((byte)(x), (byte)(y), (byte)(z));
  }

  public void convertByte3(Byte3 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
    result.z = (byte)(z);
  }

  public Short3 convertShort3() {
    return new Short3((short)(x), (short)(y), (short)(z));
  }

  public void convertShort3(Short3 result) {
    result.x = (short)(x);
    result.y = (short)(y);
    result.z = (short)(z);
  }

  public Int3 convertInt3() {
    return new Int3((int)(x), (int)(y), (int)(z));
  }

  public void convertInt3(Int3 result) {
    result.x = (int)(x);
    result.y = (int)(y);
    result.z = (int)(z);
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

  public Long2 asLong2() {
    return new Long2(x, y);
  }

  public void asLong2(Long2 result) {
    result.x = x;
    result.y = y;
  }

  public static Int3 isEqual(Long3 a, Long3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static void isEqual(Long3 a, Long3 b, Int3 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
  }

  public static Int3 isNotEqual(Long3 a, Long3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static void isNotEqual(Long3 a, Long3 b, Int3 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
  }

  public static Int3 isGreater(Long3 a, Long3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static void isGreater(Long3 a, Long3 b, Int3 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
  }

  public static Int3 isGreaterEqual(Long3 a, Long3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static void isGreaterEqual(Long3 a, Long3 b, Int3 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
  }

  public static Int3 isLess(Long3 a, Long3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static void isLess(Long3 a, Long3 b, Int3 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
  }

  public static Int3 isLessEqual(Long3 a, Long3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static void isLessEqual(Long3 a, Long3 b, Int3 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
  }

  public static Long3 select(Long3 a, Long3 b, Int3 c) {
    return new Long3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static void select(Long3 a, Long3 b, Int3 c, Long3 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
  }

  public static int any(Long3 a) {
    return (a.x != 0L || a.y != 0L || a.z != 0L)? 1 : 0;
  }

  public static int all(Long3 a) {
    return (a.x == 0L || a.y == 0L || a.z == 0L)? 0 : 1;
  }

  public static Long3 neg(Long3 a) {
    return new Long3((long)(-a.x), (long)(-a.y), (long)(-a.z));
  }

  public static void neg(Long3 a, Long3 result) {
    result.x = (long)(-a.x);
    result.y = (long)(-a.y);
    result.z = (long)(-a.z);
  }

  public static Long3 add(Long3 a, Long3 b) {
    return new Long3((long)(a.x + b.x), (long)(a.y + b.y), (long)(a.z + b.z));
  }

  public static void add(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x + b.x);
    result.y = (long)(a.y + b.y);
    result.z = (long)(a.z + b.z);
  }

  public static Long3 sub(Long3 a, Long3 b) {
    return new Long3((long)(a.x - b.x), (long)(a.y - b.y), (long)(a.z - b.z));
  }

  public static void sub(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x - b.x);
    result.y = (long)(a.y - b.y);
    result.z = (long)(a.z - b.z);
  }

  public static Double3 mul(Long3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static void mul(Long3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
  }

  public static Double3 mul(Long3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static void mul(Long3 a, double k, Double3 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
  }

  public static Float3 mul(Long3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static void mul(Long3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
  }

  public static Float3 mul(Long3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static void mul(Long3 a, float k, Float3 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
  }

  public static Long3 mul(Long3 a, Long3 b) {
    return new Long3((long)(a.x * b.x), (long)(a.y * b.y), (long)(a.z * b.z));
  }

  public static void mul(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x * b.x);
    result.y = (long)(a.y * b.y);
    result.z = (long)(a.z * b.z);
  }

  public static Long3 mul(Long3 a, long k) {
    return new Long3((long)(a.x * k), (long)(a.y * k), (long)(a.z * k));
  }

  public static void mul(Long3 a, long k, Long3 result) {
    result.x = (long)(a.x * k);
    result.y = (long)(a.y * k);
    result.z = (long)(a.z * k);
  }

  public static Double3 div(Long3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static void div(Long3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
  }

  public static Double3 div(Long3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static void div(Long3 a, double k, Double3 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
  }

  public static Float3 div(Long3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static void div(Long3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
  }

  public static Float3 div(Long3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static void div(Long3 a, float k, Float3 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
  }

  public static Long3 div(Long3 a, Long3 b) {
    return new Long3((long)(a.x / b.x), (long)(a.y / b.y), (long)(a.z / b.z));
  }

  public static void div(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x / b.x);
    result.y = (long)(a.y / b.y);
    result.z = (long)(a.z / b.z);
  }

  public static Long3 div(Long3 a, long k) {
    return new Long3((long)(a.x / k), (long)(a.y / k), (long)(a.z / k));
  }

  public static void div(Long3 a, long k, Long3 result) {
    result.x = (long)(a.x / k);
    result.y = (long)(a.y / k);
    result.z = (long)(a.z / k);
  }

  public static Long3 mod(Long3 a, Long3 b) {
    return new Long3((long)(a.x % b.x), (long)(a.y % b.y), (long)(a.z % b.z));
  }

  public static void mod(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x % b.x);
    result.y = (long)(a.y % b.y);
    result.z = (long)(a.z % b.z);
  }

  public static Long3 mod(Long3 a, long k) {
    return new Long3((long)(a.x % k), (long)(a.y % k), (long)(a.z % k));
  }

  public static void mod(Long3 a, long k, Long3 result) {
    result.x = (long)(a.x % k);
    result.y = (long)(a.y % k);
    result.z = (long)(a.z % k);
  }

  public static Long3 bitAnd(Long3 a, Long3 b) {
    return new Long3((long)(a.x & b.x), (long)(a.y & b.y), (long)(a.z & b.z));
  }

  public static void bitAnd(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x & b.x);
    result.y = (long)(a.y & b.y);
    result.z = (long)(a.z & b.z);
  }

  public static Long3 bitOr(Long3 a, Long3 b) {
    return new Long3((long)(a.x | b.x), (long)(a.y | b.y), (long)(a.z | b.z));
  }

  public static void bitOr(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x | b.x);
    result.y = (long)(a.y | b.y);
    result.z = (long)(a.z | b.z);
  }

  public static Long3 bitXor(Long3 a, Long3 b) {
    return new Long3((long)(a.x ^ b.x), (long)(a.y ^ b.y), (long)(a.z ^ b.z));
  }

  public static void bitXor(Long3 a, Long3 b, Long3 result) {
    result.x = (long)(a.x ^ b.x);
    result.y = (long)(a.y ^ b.y);
    result.z = (long)(a.z ^ b.z);
  }

  public static Long3 bitNot(Long3 a) {
    return new Long3((long)(~a.x), (long)(~a.y), (long)(~a.z));
  }

  public static void bitNot(Long3 a, Long3 result) {
    result.x = (long)(~a.x);
    result.y = (long)(~a.y);
    result.z = (long)(~a.z);
  }

  public static Long3 abs(Long3 a) {
    return new Long3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static void abs(Long3 a, Long3 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
  }

  public static Long3 clamp(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static void clamp(Long3 a, Long3 b, Long3 c, Long3 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
  }

  public static Long3 max(Long3 a, Long3 b) {
    return new Long3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static void max(Long3 a, Long3 b, Long3 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
  }

  public static Long3 maxMag(Long3 a, Long3 b) {
    return new Long3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static void maxMag(Long3 a, Long3 b, Long3 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
  }

  public static Long3 min(Long3 a, Long3 b) {
    return new Long3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static void min(Long3 a, Long3 b, Long3 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
  }

  public static Long3 minMag(Long3 a, Long3 b) {
    return new Long3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static void minMag(Long3 a, Long3 b, Long3 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
  }

  public static Long3 mix(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static void mix(Long3 a, Long3 b, Long3 c, Long3 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
  }

  public static Long3 clamp(Long3 v, long min, long max) {
    return new Long3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static void clamp(Long3 v, long min, long max, Long3 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
  }

  public static Long3 max(Long3 x, long y) {
    return new Long3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static void max(Long3 x, long y, Long3 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
  }

  public static Long3 min(Long3 x, long y) {
    return new Long3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static void min(Long3 x, long y, Long3 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
  }

  public static Long3 mix(Long3 x, Long3 y, long a) {
    return new Long3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static void mix(Long3 x, Long3 y, long a, Long3 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
  }

  public static Long3 absDiff(Long3 a, Long3 b) {
    return new Long3(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z));
  }

  public static void absDiff(Long3 a, Long3 b, Long3 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
  }

  public static Long3 addSat(Long3 a, Long3 b) {
    return new Long3(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z));
  }

  public static void addSat(Long3 a, Long3 b, Long3 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
  }

  public static Long3 clz(Long3 a) {
    return new Long3(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z));
  }

  public static void clz(Long3 a, Long3 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
  }

  public static Long3 hadd(Long3 a, Long3 b) {
    return new Long3(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z));
  }

  public static void hadd(Long3 a, Long3 b, Long3 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
  }

  public static Long3 madHi(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z));
  }

  public static void madHi(Long3 a, Long3 b, Long3 c, Long3 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
  }

  public static Long3 madSat(Long3 a, Long3 b, Long3 c) {
    return new Long3(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z));
  }

  public static void madSat(Long3 a, Long3 b, Long3 c, Long3 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
  }

  public static Long3 mulHi(Long3 a, Long3 b) {
    return new Long3(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z));
  }

  public static void mulHi(Long3 a, Long3 b, Long3 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
  }

  public static Long3 rhadd(Long3 a, Long3 b) {
    return new Long3(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z));
  }

  public static void rhadd(Long3 a, Long3 b, Long3 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
  }

  public static Long3 rotate(Long3 a, Long3 b) {
    return new Long3(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z));
  }

  public static void rotate(Long3 a, Long3 b, Long3 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
  }

  public static Long3 subSat(Long3 a, Long3 b) {
    return new Long3(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z));
  }

  public static void subSat(Long3 a, Long3 b, Long3 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
  }
}
