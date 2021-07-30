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

public class Int4 {
  public int x;
  public int y;
  public int z;
  public int w;

  public Int4() {}

  public Int4(int x, int y, int z, int w) {
    set(x, y, z, w);
  }

  public void set(int x, int y, int z, int w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Int4(int v) {
    this(v, v, v, v);
  }

  public void set(int v) {
    set(v, v, v, v);
  }

  public Int4(int x, int y, Int2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public void set(int x, int y, Int2 vec1) {
    set(x, y, vec1.x, vec1.y);
  }

  public Int4(int x, Int2 vec1, int w) {
    this(x, vec1.x, vec1.y, w);
  }

  public void set(int x, Int2 vec1, int w) {
    set(x, vec1.x, vec1.y, w);
  }

  public Int4(int x, Int3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public void set(int x, Int3 vec1) {
    set(x, vec1.x, vec1.y, vec1.z);
  }

  public Int4(Int2 vec1, int z, int w) {
    this(vec1.x, vec1.y, z, w);
  }

  public void set(Int2 vec1, int z, int w) {
    set(vec1.x, vec1.y, z, w);
  }

  public Int4(Int2 vec1, Int2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public void set(Int2 vec1, Int2 vec2) {
    set(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Int4(Int3 vec1, int w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public void set(Int3 vec1, int w) {
    set(vec1.x, vec1.y, vec1.z, w);
  }

  public Int4(Int4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public void set(Int4 vec1) {
    set(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Int4 value() {
    return new Int4(this);
  }

  public Int2 lo() {
    return new Int2(x, y);
  }

  public void lo(Int2 result) {
    result.x = x;
    result.y = y;
  }

  public Int2 hi() {
    return new Int2(z, w);
  }

  public void hi(Int2 result) {
    result.x = z;
    result.y = w;
  }

  public Int2 odd() {
    return new Int2(y, w);
  }

  public void odd(Int2 result) {
    result.x = y;
    result.y = w;
  }

  public Int2 even() {
    return new Int2(x, z);
  }

  public void even(Int2 result) {
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

  public Long4 convertLong4() {
    return new Long4((long)(x), (long)(y), (long)(z), (long)(w));
  }

  public void convertLong4(Long4 result) {
    result.x = (long)(x);
    result.y = (long)(y);
    result.z = (long)(z);
    result.w = (long)(w);
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

  public Int2 asInt2() {
    return new Int2(x, y);
  }

  public void asInt2(Int2 result) {
    result.x = x;
    result.y = y;
  }

  public Int3 asInt3() {
    return new Int3(x, y, z);
  }

  public void asInt3(Int3 result) {
    result.x = x;
    result.y = y;
    result.z = z;
  }

  public static Int4 isEqual(Int4 a, Int4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static void isEqual(Int4 a, Int4 b, Int4 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
    result.w = a.w == b.w? 1 : 0;
  }

  public static Int4 isNotEqual(Int4 a, Int4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static void isNotEqual(Int4 a, Int4 b, Int4 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
    result.w = a.w != b.w? 1 : 0;
  }

  public static Int4 isGreater(Int4 a, Int4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static void isGreater(Int4 a, Int4 b, Int4 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
    result.w = a.w > b.w? 1 : 0;
  }

  public static Int4 isGreaterEqual(Int4 a, Int4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static void isGreaterEqual(Int4 a, Int4 b, Int4 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
    result.w = a.w >= b.w? 1 : 0;
  }

  public static Int4 isLess(Int4 a, Int4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static void isLess(Int4 a, Int4 b, Int4 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
    result.w = a.w < b.w? 1 : 0;
  }

  public static Int4 isLessEqual(Int4 a, Int4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static void isLessEqual(Int4 a, Int4 b, Int4 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
    result.w = a.w <= b.w? 1 : 0;
  }

  public static Int4 select(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static void select(Int4 a, Int4 b, Int4 c, Int4 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
    result.w = Math.select(a.w, b.w, c.w);
  }

  public static int any(Int4 a) {
    return (a.x != 0 || a.y != 0 || a.z != 0 || a.w != 0)? 1 : 0;
  }

  public static int all(Int4 a) {
    return (a.x == 0 || a.y == 0 || a.z == 0 || a.w == 0)? 0 : 1;
  }

  public static Int4 neg(Int4 a) {
    return new Int4((int)(-a.x), (int)(-a.y), (int)(-a.z), (int)(-a.w));
  }

  public static void neg(Int4 a, Int4 result) {
    result.x = (int)(-a.x);
    result.y = (int)(-a.y);
    result.z = (int)(-a.z);
    result.w = (int)(-a.w);
  }

  public static Int4 add(Int4 a, Int4 b) {
    return new Int4((int)(a.x + b.x), (int)(a.y + b.y), (int)(a.z + b.z), (int)(a.w + b.w));
  }

  public static void add(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x + b.x);
    result.y = (int)(a.y + b.y);
    result.z = (int)(a.z + b.z);
    result.w = (int)(a.w + b.w);
  }

  public static Int4 sub(Int4 a, Int4 b) {
    return new Int4((int)(a.x - b.x), (int)(a.y - b.y), (int)(a.z - b.z), (int)(a.w - b.w));
  }

  public static void sub(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x - b.x);
    result.y = (int)(a.y - b.y);
    result.z = (int)(a.z - b.z);
    result.w = (int)(a.w - b.w);
  }

  public static Double4 mul(Int4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static void mul(Int4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
    result.w = (double)(a.w * b.w);
  }

  public static Double4 mul(Int4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static void mul(Int4 a, double k, Double4 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
    result.w = (double)(a.w * k);
  }

  public static Float4 mul(Int4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static void mul(Int4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
    result.w = (float)(a.w * b.w);
  }

  public static Float4 mul(Int4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static void mul(Int4 a, float k, Float4 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
    result.w = (float)(a.w * k);
  }

  public static Int4 mul(Int4 a, Int4 b) {
    return new Int4((int)(a.x * b.x), (int)(a.y * b.y), (int)(a.z * b.z), (int)(a.w * b.w));
  }

  public static void mul(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x * b.x);
    result.y = (int)(a.y * b.y);
    result.z = (int)(a.z * b.z);
    result.w = (int)(a.w * b.w);
  }

  public static Int4 mul(Int4 a, int k) {
    return new Int4((int)(a.x * k), (int)(a.y * k), (int)(a.z * k), (int)(a.w * k));
  }

  public static void mul(Int4 a, int k, Int4 result) {
    result.x = (int)(a.x * k);
    result.y = (int)(a.y * k);
    result.z = (int)(a.z * k);
    result.w = (int)(a.w * k);
  }

  public static Double4 div(Int4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static void div(Int4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
    result.w = (double)(a.w / b.w);
  }

  public static Double4 div(Int4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static void div(Int4 a, double k, Double4 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
    result.w = (double)(a.w / k);
  }

  public static Float4 div(Int4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static void div(Int4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
    result.w = (float)(a.w / b.w);
  }

  public static Float4 div(Int4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static void div(Int4 a, float k, Float4 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
    result.w = (float)(a.w / k);
  }

  public static Int4 div(Int4 a, Int4 b) {
    return new Int4((int)(a.x / b.x), (int)(a.y / b.y), (int)(a.z / b.z), (int)(a.w / b.w));
  }

  public static void div(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x / b.x);
    result.y = (int)(a.y / b.y);
    result.z = (int)(a.z / b.z);
    result.w = (int)(a.w / b.w);
  }

  public static Int4 div(Int4 a, int k) {
    return new Int4((int)(a.x / k), (int)(a.y / k), (int)(a.z / k), (int)(a.w / k));
  }

  public static void div(Int4 a, int k, Int4 result) {
    result.x = (int)(a.x / k);
    result.y = (int)(a.y / k);
    result.z = (int)(a.z / k);
    result.w = (int)(a.w / k);
  }

  public static Int4 mod(Int4 a, Int4 b) {
    return new Int4((int)(a.x % b.x), (int)(a.y % b.y), (int)(a.z % b.z), (int)(a.w % b.w));
  }

  public static void mod(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x % b.x);
    result.y = (int)(a.y % b.y);
    result.z = (int)(a.z % b.z);
    result.w = (int)(a.w % b.w);
  }

  public static Int4 mod(Int4 a, int k) {
    return new Int4((int)(a.x % k), (int)(a.y % k), (int)(a.z % k), (int)(a.w % k));
  }

  public static void mod(Int4 a, int k, Int4 result) {
    result.x = (int)(a.x % k);
    result.y = (int)(a.y % k);
    result.z = (int)(a.z % k);
    result.w = (int)(a.w % k);
  }

  public static Int4 bitAnd(Int4 a, Int4 b) {
    return new Int4((int)(a.x & b.x), (int)(a.y & b.y), (int)(a.z & b.z), (int)(a.w & b.w));
  }

  public static void bitAnd(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x & b.x);
    result.y = (int)(a.y & b.y);
    result.z = (int)(a.z & b.z);
    result.w = (int)(a.w & b.w);
  }

  public static Int4 bitOr(Int4 a, Int4 b) {
    return new Int4((int)(a.x | b.x), (int)(a.y | b.y), (int)(a.z | b.z), (int)(a.w | b.w));
  }

  public static void bitOr(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x | b.x);
    result.y = (int)(a.y | b.y);
    result.z = (int)(a.z | b.z);
    result.w = (int)(a.w | b.w);
  }

  public static Int4 bitXor(Int4 a, Int4 b) {
    return new Int4((int)(a.x ^ b.x), (int)(a.y ^ b.y), (int)(a.z ^ b.z), (int)(a.w ^ b.w));
  }

  public static void bitXor(Int4 a, Int4 b, Int4 result) {
    result.x = (int)(a.x ^ b.x);
    result.y = (int)(a.y ^ b.y);
    result.z = (int)(a.z ^ b.z);
    result.w = (int)(a.w ^ b.w);
  }

  public static Int4 bitNot(Int4 a) {
    return new Int4((int)(~a.x), (int)(~a.y), (int)(~a.z), (int)(~a.w));
  }

  public static void bitNot(Int4 a, Int4 result) {
    result.x = (int)(~a.x);
    result.y = (int)(~a.y);
    result.z = (int)(~a.z);
    result.w = (int)(~a.w);
  }

  public static Int4 abs(Int4 a) {
    return new Int4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static void abs(Int4 a, Int4 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
    result.w = Math.abs(a.w);
  }

  public static Int4 clamp(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static void clamp(Int4 a, Int4 b, Int4 c, Int4 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
    result.w = Math.clamp(a.w, b.w, c.w);
  }

  public static Int4 max(Int4 a, Int4 b) {
    return new Int4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static void max(Int4 a, Int4 b, Int4 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
    result.w = Math.max(a.w, b.w);
  }

  public static Int4 maxMag(Int4 a, Int4 b) {
    return new Int4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static void maxMag(Int4 a, Int4 b, Int4 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
    result.w = Math.maxMag(a.w, b.w);
  }

  public static Int4 min(Int4 a, Int4 b) {
    return new Int4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static void min(Int4 a, Int4 b, Int4 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
    result.w = Math.min(a.w, b.w);
  }

  public static Int4 minMag(Int4 a, Int4 b) {
    return new Int4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static void minMag(Int4 a, Int4 b, Int4 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
    result.w = Math.minMag(a.w, b.w);
  }

  public static Int4 mix(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static void mix(Int4 a, Int4 b, Int4 c, Int4 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
    result.w = Math.mix(a.w, b.w, c.w);
  }

  public static Int4 clamp(Int4 v, int min, int max) {
    return new Int4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static void clamp(Int4 v, int min, int max, Int4 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
    result.w = Math.clamp(v.w, min, max);
  }

  public static Int4 max(Int4 x, int y) {
    return new Int4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static void max(Int4 x, int y, Int4 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
    result.w = Math.max(x.w, y);
  }

  public static Int4 min(Int4 x, int y) {
    return new Int4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static void min(Int4 x, int y, Int4 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
    result.w = Math.min(x.w, y);
  }

  public static Int4 mix(Int4 x, Int4 y, int a) {
    return new Int4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static void mix(Int4 x, Int4 y, int a, Int4 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
    result.w = Math.mix(x.w, y.w, a);
  }

  public static Int4 absDiff(Int4 a, Int4 b) {
    return new Int4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static void absDiff(Int4 a, Int4 b, Int4 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
    result.w = Math.absDiff(a.w, b.w);
  }

  public static Int4 addSat(Int4 a, Int4 b) {
    return new Int4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static void addSat(Int4 a, Int4 b, Int4 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
    result.w = Math.addSat(a.w, b.w);
  }

  public static Int4 clz(Int4 a) {
    return new Int4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static void clz(Int4 a, Int4 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
    result.w = Math.clz(a.w);
  }

  public static Int4 hadd(Int4 a, Int4 b) {
    return new Int4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static void hadd(Int4 a, Int4 b, Int4 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
    result.w = Math.hadd(a.w, b.w);
  }

  public static Int4 madHi(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static void madHi(Int4 a, Int4 b, Int4 c, Int4 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
    result.w = Math.madHi(a.w, b.w, c.w);
  }

  public static Int4 madSat(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static void madSat(Int4 a, Int4 b, Int4 c, Int4 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
    result.w = Math.madSat(a.w, b.w, c.w);
  }

  public static Int4 mulHi(Int4 a, Int4 b) {
    return new Int4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static void mulHi(Int4 a, Int4 b, Int4 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
    result.w = Math.mulHi(a.w, b.w);
  }

  public static Int4 rhadd(Int4 a, Int4 b) {
    return new Int4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static void rhadd(Int4 a, Int4 b, Int4 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
    result.w = Math.rhadd(a.w, b.w);
  }

  public static Int4 rotate(Int4 a, Int4 b) {
    return new Int4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static void rotate(Int4 a, Int4 b, Int4 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
    result.w = Math.rotate(a.w, b.w);
  }

  public static Int4 subSat(Int4 a, Int4 b) {
    return new Int4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }

  public static void subSat(Int4 a, Int4 b, Int4 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
    result.w = Math.subSat(a.w, b.w);
  }

  public static Int4 mad24(Int4 a, Int4 b, Int4 c) {
    return new Int4(Math.mad24(a.x, b.x, c.x), Math.mad24(a.y, b.y, c.y), Math.mad24(a.z, b.z, c.z), Math.mad24(a.w, b.w, c.w));
  }

  public static void mad24(Int4 a, Int4 b, Int4 c, Int4 result) {
    result.x = Math.mad24(a.x, b.x, c.x);
    result.y = Math.mad24(a.y, b.y, c.y);
    result.z = Math.mad24(a.z, b.z, c.z);
    result.w = Math.mad24(a.w, b.w, c.w);
  }

  public static Int4 mul24(Int4 a, Int4 b) {
    return new Int4(Math.mul24(a.x, b.x), Math.mul24(a.y, b.y), Math.mul24(a.z, b.z), Math.mul24(a.w, b.w));
  }

  public static void mul24(Int4 a, Int4 b, Int4 result) {
    result.x = Math.mul24(a.x, b.x);
    result.y = Math.mul24(a.y, b.y);
    result.z = Math.mul24(a.z, b.z);
    result.w = Math.mul24(a.w, b.w);
  }
}
