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

public class Long4 {
  public long x;
  public long y;
  public long z;
  public long w;

  public Long4() {}

  public Long4(long x, long y, long z, long w) {
    set(x, y, z, w);
  }

  public void set(long x, long y, long z, long w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Long4(long v) {
    this(v, v, v, v);
  }

  public void set(long v) {
    set(v, v, v, v);
  }

  public Long4(long x, long y, Long2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public void set(long x, long y, Long2 vec1) {
    set(x, y, vec1.x, vec1.y);
  }

  public Long4(long x, Long2 vec1, long w) {
    this(x, vec1.x, vec1.y, w);
  }

  public void set(long x, Long2 vec1, long w) {
    set(x, vec1.x, vec1.y, w);
  }

  public Long4(long x, Long3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public void set(long x, Long3 vec1) {
    set(x, vec1.x, vec1.y, vec1.z);
  }

  public Long4(Long2 vec1, long z, long w) {
    this(vec1.x, vec1.y, z, w);
  }

  public void set(Long2 vec1, long z, long w) {
    set(vec1.x, vec1.y, z, w);
  }

  public Long4(Long2 vec1, Long2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public void set(Long2 vec1, Long2 vec2) {
    set(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Long4(Long3 vec1, long w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public void set(Long3 vec1, long w) {
    set(vec1.x, vec1.y, vec1.z, w);
  }

  public Long4(Long4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public void set(Long4 vec1) {
    set(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Long4 value() {
    return new Long4(this);
  }

  public Long2 lo() {
    return new Long2(x, y);
  }

  public void lo(Long2 result) {
    result.x = x;
    result.y = y;
  }

  public Long2 hi() {
    return new Long2(z, w);
  }

  public void hi(Long2 result) {
    result.x = z;
    result.y = w;
  }

  public Long2 odd() {
    return new Long2(y, w);
  }

  public void odd(Long2 result) {
    result.x = y;
    result.y = w;
  }

  public Long2 even() {
    return new Long2(x, z);
  }

  public void even(Long2 result) {
    result.x = x;
    result.y = z;
  }

  public Byte4 convertByte4() {
    return new Byte4((byte)(x), (byte)(y), (byte)(z), (byte)(w));
  }

  public void convertByte4(Byte4 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
    result.z = (byte)(z);
    result.w = (byte)(w);
  }

  public Short4 convertShort4() {
    return new Short4((short)(x), (short)(y), (short)(z), (short)(w));
  }

  public void convertShort4(Short4 result) {
    result.x = (short)(x);
    result.y = (short)(y);
    result.z = (short)(z);
    result.w = (short)(w);
  }

  public Int4 convertInt4() {
    return new Int4((int)(x), (int)(y), (int)(z), (int)(w));
  }

  public void convertInt4(Int4 result) {
    result.x = (int)(x);
    result.y = (int)(y);
    result.z = (int)(z);
    result.w = (int)(w);
  }

  public Float4 convertFloat4() {
    return new Float4((float)(x), (float)(y), (float)(z), (float)(w));
  }

  public void convertFloat4(Float4 result) {
    result.x = (float)(x);
    result.y = (float)(y);
    result.z = (float)(z);
    result.w = (float)(w);
  }

  public Double4 convertDouble4() {
    return new Double4((double)(x), (double)(y), (double)(z), (double)(w));
  }

  public void convertDouble4(Double4 result) {
    result.x = (double)(x);
    result.y = (double)(y);
    result.z = (double)(z);
    result.w = (double)(w);
  }

  public Long2 asLong2() {
    return new Long2(x, y);
  }

  public void asLong2(Long2 result) {
    result.x = x;
    result.y = y;
  }

  public Long3 asLong3() {
    return new Long3(x, y, z);
  }

  public void asLong3(Long3 result) {
    result.x = x;
    result.y = y;
    result.z = z;
  }

  public static Int4 isEqual(Long4 a, Long4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static void isEqual(Long4 a, Long4 b, Int4 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
    result.w = a.w == b.w? 1 : 0;
  }

  public static Int4 isNotEqual(Long4 a, Long4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static void isNotEqual(Long4 a, Long4 b, Int4 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
    result.w = a.w != b.w? 1 : 0;
  }

  public static Int4 isGreater(Long4 a, Long4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static void isGreater(Long4 a, Long4 b, Int4 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
    result.w = a.w > b.w? 1 : 0;
  }

  public static Int4 isGreaterEqual(Long4 a, Long4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static void isGreaterEqual(Long4 a, Long4 b, Int4 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
    result.w = a.w >= b.w? 1 : 0;
  }

  public static Int4 isLess(Long4 a, Long4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static void isLess(Long4 a, Long4 b, Int4 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
    result.w = a.w < b.w? 1 : 0;
  }

  public static Int4 isLessEqual(Long4 a, Long4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static void isLessEqual(Long4 a, Long4 b, Int4 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
    result.w = a.w <= b.w? 1 : 0;
  }

  public static Long4 select(Long4 a, Long4 b, Int4 c) {
    return new Long4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static void select(Long4 a, Long4 b, Int4 c, Long4 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
    result.w = Math.select(a.w, b.w, c.w);
  }

  public static int any(Long4 a) {
    return (a.x != 0L || a.y != 0L || a.z != 0L || a.w != 0L)? 1 : 0;
  }

  public static int all(Long4 a) {
    return (a.x == 0L || a.y == 0L || a.z == 0L || a.w == 0L)? 0 : 1;
  }

  public static Long4 neg(Long4 a) {
    return new Long4((long)(-a.x), (long)(-a.y), (long)(-a.z), (long)(-a.w));
  }

  public static void neg(Long4 a, Long4 result) {
    result.x = (long)(-a.x);
    result.y = (long)(-a.y);
    result.z = (long)(-a.z);
    result.w = (long)(-a.w);
  }

  public static Long4 add(Long4 a, Long4 b) {
    return new Long4((long)(a.x + b.x), (long)(a.y + b.y), (long)(a.z + b.z), (long)(a.w + b.w));
  }

  public static void add(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x + b.x);
    result.y = (long)(a.y + b.y);
    result.z = (long)(a.z + b.z);
    result.w = (long)(a.w + b.w);
  }

  public static Long4 sub(Long4 a, Long4 b) {
    return new Long4((long)(a.x - b.x), (long)(a.y - b.y), (long)(a.z - b.z), (long)(a.w - b.w));
  }

  public static void sub(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x - b.x);
    result.y = (long)(a.y - b.y);
    result.z = (long)(a.z - b.z);
    result.w = (long)(a.w - b.w);
  }

  public static Double4 mul(Long4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static void mul(Long4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
    result.w = (double)(a.w * b.w);
  }

  public static Double4 mul(Long4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static void mul(Long4 a, double k, Double4 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
    result.w = (double)(a.w * k);
  }

  public static Float4 mul(Long4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static void mul(Long4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
    result.w = (float)(a.w * b.w);
  }

  public static Float4 mul(Long4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static void mul(Long4 a, float k, Float4 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
    result.w = (float)(a.w * k);
  }

  public static Long4 mul(Long4 a, Long4 b) {
    return new Long4((long)(a.x * b.x), (long)(a.y * b.y), (long)(a.z * b.z), (long)(a.w * b.w));
  }

  public static void mul(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x * b.x);
    result.y = (long)(a.y * b.y);
    result.z = (long)(a.z * b.z);
    result.w = (long)(a.w * b.w);
  }

  public static Long4 mul(Long4 a, long k) {
    return new Long4((long)(a.x * k), (long)(a.y * k), (long)(a.z * k), (long)(a.w * k));
  }

  public static void mul(Long4 a, long k, Long4 result) {
    result.x = (long)(a.x * k);
    result.y = (long)(a.y * k);
    result.z = (long)(a.z * k);
    result.w = (long)(a.w * k);
  }

  public static Double4 div(Long4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static void div(Long4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
    result.w = (double)(a.w / b.w);
  }

  public static Double4 div(Long4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static void div(Long4 a, double k, Double4 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
    result.w = (double)(a.w / k);
  }

  public static Float4 div(Long4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static void div(Long4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
    result.w = (float)(a.w / b.w);
  }

  public static Float4 div(Long4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static void div(Long4 a, float k, Float4 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
    result.w = (float)(a.w / k);
  }

  public static Long4 div(Long4 a, Long4 b) {
    return new Long4((long)(a.x / b.x), (long)(a.y / b.y), (long)(a.z / b.z), (long)(a.w / b.w));
  }

  public static void div(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x / b.x);
    result.y = (long)(a.y / b.y);
    result.z = (long)(a.z / b.z);
    result.w = (long)(a.w / b.w);
  }

  public static Long4 div(Long4 a, long k) {
    return new Long4((long)(a.x / k), (long)(a.y / k), (long)(a.z / k), (long)(a.w / k));
  }

  public static void div(Long4 a, long k, Long4 result) {
    result.x = (long)(a.x / k);
    result.y = (long)(a.y / k);
    result.z = (long)(a.z / k);
    result.w = (long)(a.w / k);
  }

  public static Long4 mod(Long4 a, Long4 b) {
    return new Long4((long)(a.x % b.x), (long)(a.y % b.y), (long)(a.z % b.z), (long)(a.w % b.w));
  }

  public static void mod(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x % b.x);
    result.y = (long)(a.y % b.y);
    result.z = (long)(a.z % b.z);
    result.w = (long)(a.w % b.w);
  }

  public static Long4 mod(Long4 a, long k) {
    return new Long4((long)(a.x % k), (long)(a.y % k), (long)(a.z % k), (long)(a.w % k));
  }

  public static void mod(Long4 a, long k, Long4 result) {
    result.x = (long)(a.x % k);
    result.y = (long)(a.y % k);
    result.z = (long)(a.z % k);
    result.w = (long)(a.w % k);
  }

  public static Long4 bitAnd(Long4 a, Long4 b) {
    return new Long4((long)(a.x & b.x), (long)(a.y & b.y), (long)(a.z & b.z), (long)(a.w & b.w));
  }

  public static void bitAnd(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x & b.x);
    result.y = (long)(a.y & b.y);
    result.z = (long)(a.z & b.z);
    result.w = (long)(a.w & b.w);
  }

  public static Long4 bitOr(Long4 a, Long4 b) {
    return new Long4((long)(a.x | b.x), (long)(a.y | b.y), (long)(a.z | b.z), (long)(a.w | b.w));
  }

  public static void bitOr(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x | b.x);
    result.y = (long)(a.y | b.y);
    result.z = (long)(a.z | b.z);
    result.w = (long)(a.w | b.w);
  }

  public static Long4 bitXor(Long4 a, Long4 b) {
    return new Long4((long)(a.x ^ b.x), (long)(a.y ^ b.y), (long)(a.z ^ b.z), (long)(a.w ^ b.w));
  }

  public static void bitXor(Long4 a, Long4 b, Long4 result) {
    result.x = (long)(a.x ^ b.x);
    result.y = (long)(a.y ^ b.y);
    result.z = (long)(a.z ^ b.z);
    result.w = (long)(a.w ^ b.w);
  }

  public static Long4 bitNot(Long4 a) {
    return new Long4((long)(~a.x), (long)(~a.y), (long)(~a.z), (long)(~a.w));
  }

  public static void bitNot(Long4 a, Long4 result) {
    result.x = (long)(~a.x);
    result.y = (long)(~a.y);
    result.z = (long)(~a.z);
    result.w = (long)(~a.w);
  }

  public static Long4 abs(Long4 a) {
    return new Long4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static void abs(Long4 a, Long4 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
    result.w = Math.abs(a.w);
  }

  public static Long4 clamp(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static void clamp(Long4 a, Long4 b, Long4 c, Long4 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
    result.w = Math.clamp(a.w, b.w, c.w);
  }

  public static Long4 max(Long4 a, Long4 b) {
    return new Long4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static void max(Long4 a, Long4 b, Long4 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
    result.w = Math.max(a.w, b.w);
  }

  public static Long4 maxMag(Long4 a, Long4 b) {
    return new Long4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static void maxMag(Long4 a, Long4 b, Long4 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
    result.w = Math.maxMag(a.w, b.w);
  }

  public static Long4 min(Long4 a, Long4 b) {
    return new Long4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static void min(Long4 a, Long4 b, Long4 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
    result.w = Math.min(a.w, b.w);
  }

  public static Long4 minMag(Long4 a, Long4 b) {
    return new Long4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static void minMag(Long4 a, Long4 b, Long4 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
    result.w = Math.minMag(a.w, b.w);
  }

  public static Long4 mix(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static void mix(Long4 a, Long4 b, Long4 c, Long4 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
    result.w = Math.mix(a.w, b.w, c.w);
  }

  public static Long4 clamp(Long4 v, long min, long max) {
    return new Long4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static void clamp(Long4 v, long min, long max, Long4 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
    result.w = Math.clamp(v.w, min, max);
  }

  public static Long4 max(Long4 x, long y) {
    return new Long4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static void max(Long4 x, long y, Long4 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
    result.w = Math.max(x.w, y);
  }

  public static Long4 min(Long4 x, long y) {
    return new Long4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static void min(Long4 x, long y, Long4 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
    result.w = Math.min(x.w, y);
  }

  public static Long4 mix(Long4 x, Long4 y, long a) {
    return new Long4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static void mix(Long4 x, Long4 y, long a, Long4 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
    result.w = Math.mix(x.w, y.w, a);
  }

  public static Long4 absDiff(Long4 a, Long4 b) {
    return new Long4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static void absDiff(Long4 a, Long4 b, Long4 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
    result.w = Math.absDiff(a.w, b.w);
  }

  public static Long4 addSat(Long4 a, Long4 b) {
    return new Long4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static void addSat(Long4 a, Long4 b, Long4 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
    result.w = Math.addSat(a.w, b.w);
  }

  public static Long4 clz(Long4 a) {
    return new Long4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static void clz(Long4 a, Long4 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
    result.w = Math.clz(a.w);
  }

  public static Long4 hadd(Long4 a, Long4 b) {
    return new Long4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static void hadd(Long4 a, Long4 b, Long4 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
    result.w = Math.hadd(a.w, b.w);
  }

  public static Long4 madHi(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static void madHi(Long4 a, Long4 b, Long4 c, Long4 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
    result.w = Math.madHi(a.w, b.w, c.w);
  }

  public static Long4 madSat(Long4 a, Long4 b, Long4 c) {
    return new Long4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static void madSat(Long4 a, Long4 b, Long4 c, Long4 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
    result.w = Math.madSat(a.w, b.w, c.w);
  }

  public static Long4 mulHi(Long4 a, Long4 b) {
    return new Long4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static void mulHi(Long4 a, Long4 b, Long4 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
    result.w = Math.mulHi(a.w, b.w);
  }

  public static Long4 rhadd(Long4 a, Long4 b) {
    return new Long4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static void rhadd(Long4 a, Long4 b, Long4 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
    result.w = Math.rhadd(a.w, b.w);
  }

  public static Long4 rotate(Long4 a, Long4 b) {
    return new Long4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static void rotate(Long4 a, Long4 b, Long4 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
    result.w = Math.rotate(a.w, b.w);
  }

  public static Long4 subSat(Long4 a, Long4 b) {
    return new Long4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }

  public static void subSat(Long4 a, Long4 b, Long4 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
    result.w = Math.subSat(a.w, b.w);
  }
}
