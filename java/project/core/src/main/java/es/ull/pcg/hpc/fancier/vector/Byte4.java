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

import es.ull.pcg.hpc.fancier.Translatable;


public class Byte4 {
  @Translatable
  public byte x;
  @Translatable
  public byte y;
  @Translatable
  public byte z;
  @Translatable
  public byte w;

  @Translatable
  public Byte4() {}

  @Translatable
  public Byte4(byte x, byte y, byte z, byte w) {
    set(x, y, z, w);
  }

  @Translatable
  public void set(byte x, byte y, byte z, byte w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  @Translatable
  public Byte4(byte v) {
    this(v, v, v, v);
  }

  @Translatable
  public void set(byte v) {
    set(v, v, v, v);
  }

  @Translatable
  public Byte4(byte x, byte y, Byte2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  @Translatable
  public void set(byte x, byte y, Byte2 vec1) {
    set(x, y, vec1.x, vec1.y);
  }

  @Translatable
  public Byte4(byte x, Byte2 vec1, byte w) {
    this(x, vec1.x, vec1.y, w);
  }

  @Translatable
  public void set(byte x, Byte2 vec1, byte w) {
    set(x, vec1.x, vec1.y, w);
  }

  @Translatable
  public Byte4(byte x, Byte3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  @Translatable
  public void set(byte x, Byte3 vec1) {
    set(x, vec1.x, vec1.y, vec1.z);
  }

  @Translatable
  public Byte4(Byte2 vec1, byte z, byte w) {
    this(vec1.x, vec1.y, z, w);
  }

  @Translatable
  public void set(Byte2 vec1, byte z, byte w) {
    set(vec1.x, vec1.y, z, w);
  }

  @Translatable
  public Byte4(Byte2 vec1, Byte2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  @Translatable
  public void set(Byte2 vec1, Byte2 vec2) {
    set(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  @Translatable
  public Byte4(Byte3 vec1, byte w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  @Translatable
  public void set(Byte3 vec1, byte w) {
    set(vec1.x, vec1.y, vec1.z, w);
  }

  @Translatable
  public Byte4(Byte4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  @Translatable
  public void set(Byte4 vec1) {
    set(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  @Translatable
  public Byte4 value() {
    return new Byte4(this);
  }

  @Translatable
  public Byte2 lo() {
    return new Byte2(x, y);
  }

  public void lo(Byte2 result) {
    result.x = x;
    result.y = y;
  }

  @Translatable
  public Byte2 hi() {
    return new Byte2(z, w);
  }

  public void hi(Byte2 result) {
    result.x = z;
    result.y = w;
  }

  @Translatable
  public Byte2 odd() {
    return new Byte2(y, w);
  }

  public void odd(Byte2 result) {
    result.x = y;
    result.y = w;
  }

  @Translatable
  public Byte2 even() {
    return new Byte2(x, z);
  }

  public void even(Byte2 result) {
    result.x = x;
    result.y = z;
  }

  @Translatable
  public Short4 convertShort4() {
    return new Short4((short)(x & 0xff), (short)(y & 0xff), (short)(z & 0xff), (short)(w & 0xff));
  }

  public void convertShort4(Short4 result) {
    result.x = (short)(x & 0xff);
    result.y = (short)(y & 0xff);
    result.z = (short)(z & 0xff);
    result.w = (short)(w & 0xff);
  }

  @Translatable
  public Int4 convertInt4() {
    return new Int4((int)(x & 0xff), (int)(y & 0xff), (int)(z & 0xff), (int)(w & 0xff));
  }

  public void convertInt4(Int4 result) {
    result.x = (int)(x & 0xff);
    result.y = (int)(y & 0xff);
    result.z = (int)(z & 0xff);
    result.w = (int)(w & 0xff);
  }

  @Translatable
  public Long4 convertLong4() {
    return new Long4((long)(x & 0xff), (long)(y & 0xff), (long)(z & 0xff), (long)(w & 0xff));
  }

  public void convertLong4(Long4 result) {
    result.x = (long)(x & 0xff);
    result.y = (long)(y & 0xff);
    result.z = (long)(z & 0xff);
    result.w = (long)(w & 0xff);
  }

  @Translatable
  public Float4 convertFloat4() {
    return new Float4((float)(x & 0xff), (float)(y & 0xff), (float)(z & 0xff), (float)(w & 0xff));
  }

  public void convertFloat4(Float4 result) {
    result.x = (float)(x & 0xff);
    result.y = (float)(y & 0xff);
    result.z = (float)(z & 0xff);
    result.w = (float)(w & 0xff);
  }

  @Translatable
  public Double4 convertDouble4() {
    return new Double4((double)(x & 0xff), (double)(y & 0xff), (double)(z & 0xff), (double)(w & 0xff));
  }

  public void convertDouble4(Double4 result) {
    result.x = (double)(x & 0xff);
    result.y = (double)(y & 0xff);
    result.z = (double)(z & 0xff);
    result.w = (double)(w & 0xff);
  }

  @Translatable
  public Byte2 asByte2() {
    return new Byte2(x, y);
  }

  public void asByte2(Byte2 result) {
    result.x = x;
    result.y = y;
  }

  @Translatable
  public Byte3 asByte3() {
    return new Byte3(x, y, z);
  }

  public void asByte3(Byte3 result) {
    result.x = x;
    result.y = y;
    result.z = z;
  }

  @Translatable
  public static Int4 isEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static void isEqual(Byte4 a, Byte4 b, Int4 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
    result.w = a.w == b.w? 1 : 0;
  }

  @Translatable
  public static Int4 isNotEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static void isNotEqual(Byte4 a, Byte4 b, Int4 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
    result.w = a.w != b.w? 1 : 0;
  }

  @Translatable
  public static Int4 isGreater(Byte4 a, Byte4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static void isGreater(Byte4 a, Byte4 b, Int4 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
    result.w = a.w > b.w? 1 : 0;
  }

  @Translatable
  public static Int4 isGreaterEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static void isGreaterEqual(Byte4 a, Byte4 b, Int4 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
    result.w = a.w >= b.w? 1 : 0;
  }

  @Translatable
  public static Int4 isLess(Byte4 a, Byte4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static void isLess(Byte4 a, Byte4 b, Int4 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
    result.w = a.w < b.w? 1 : 0;
  }

  @Translatable
  public static Int4 isLessEqual(Byte4 a, Byte4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static void isLessEqual(Byte4 a, Byte4 b, Int4 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
    result.w = a.w <= b.w? 1 : 0;
  }

  @Translatable
  public static Byte4 select(Byte4 a, Byte4 b, Int4 c) {
    return new Byte4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static void select(Byte4 a, Byte4 b, Int4 c, Byte4 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
    result.w = Math.select(a.w, b.w, c.w);
  }

  @Translatable
  public static int any(Byte4 a) {
    return (a.x != (byte) 0 || a.y != (byte) 0 || a.z != (byte) 0 || a.w != (byte) 0)? 1 : 0;
  }

  @Translatable
  public static int all(Byte4 a) {
    return (a.x == (byte) 0 || a.y == (byte) 0 || a.z == (byte) 0 || a.w == (byte) 0)? 0 : 1;
  }

  @Translatable
  public static Byte4 neg(Byte4 a) {
    return new Byte4((byte)(-a.x), (byte)(-a.y), (byte)(-a.z), (byte)(-a.w));
  }

  public static void neg(Byte4 a, Byte4 result) {
    result.x = (byte)(-a.x);
    result.y = (byte)(-a.y);
    result.z = (byte)(-a.z);
    result.w = (byte)(-a.w);
  }

  @Translatable
  public static Byte4 add(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x + b.x), (byte)(a.y + b.y), (byte)(a.z + b.z), (byte)(a.w + b.w));
  }

  public static void add(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x + b.x);
    result.y = (byte)(a.y + b.y);
    result.z = (byte)(a.z + b.z);
    result.w = (byte)(a.w + b.w);
  }

  @Translatable
  public static Byte4 sub(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x - b.x), (byte)(a.y - b.y), (byte)(a.z - b.z), (byte)(a.w - b.w));
  }

  public static void sub(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x - b.x);
    result.y = (byte)(a.y - b.y);
    result.z = (byte)(a.z - b.z);
    result.w = (byte)(a.w - b.w);
  }

  @Translatable
  public static Byte4 mul(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x * b.x), (byte)(a.y * b.y), (byte)(a.z * b.z), (byte)(a.w * b.w));
  }

  public static void mul(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x * b.x);
    result.y = (byte)(a.y * b.y);
    result.z = (byte)(a.z * b.z);
    result.w = (byte)(a.w * b.w);
  }

  @Translatable
  public static Byte4 mul(Byte4 a, byte k) {
    return new Byte4((byte)(a.x * k), (byte)(a.y * k), (byte)(a.z * k), (byte)(a.w * k));
  }

  public static void mul(Byte4 a, byte k, Byte4 result) {
    result.x = (byte)(a.x * k);
    result.y = (byte)(a.y * k);
    result.z = (byte)(a.z * k);
    result.w = (byte)(a.w * k);
  }

  @Translatable
  public static Double4 mul(Byte4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static void mul(Byte4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
    result.w = (double)(a.w * b.w);
  }

  @Translatable
  public static Double4 mul(Byte4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static void mul(Byte4 a, double k, Double4 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
    result.w = (double)(a.w * k);
  }

  @Translatable
  public static Float4 mul(Byte4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static void mul(Byte4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
    result.w = (float)(a.w * b.w);
  }

  @Translatable
  public static Float4 mul(Byte4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static void mul(Byte4 a, float k, Float4 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
    result.w = (float)(a.w * k);
  }

  @Translatable
  public static Byte4 div(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x / b.x), (byte)(a.y / b.y), (byte)(a.z / b.z), (byte)(a.w / b.w));
  }

  public static void div(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x / b.x);
    result.y = (byte)(a.y / b.y);
    result.z = (byte)(a.z / b.z);
    result.w = (byte)(a.w / b.w);
  }

  @Translatable
  public static Byte4 div(Byte4 a, byte k) {
    return new Byte4((byte)(a.x / k), (byte)(a.y / k), (byte)(a.z / k), (byte)(a.w / k));
  }

  public static void div(Byte4 a, byte k, Byte4 result) {
    result.x = (byte)(a.x / k);
    result.y = (byte)(a.y / k);
    result.z = (byte)(a.z / k);
    result.w = (byte)(a.w / k);
  }

  @Translatable
  public static Double4 div(Byte4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static void div(Byte4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
    result.w = (double)(a.w / b.w);
  }

  @Translatable
  public static Double4 div(Byte4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static void div(Byte4 a, double k, Double4 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
    result.w = (double)(a.w / k);
  }

  @Translatable
  public static Float4 div(Byte4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static void div(Byte4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
    result.w = (float)(a.w / b.w);
  }

  @Translatable
  public static Float4 div(Byte4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static void div(Byte4 a, float k, Float4 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
    result.w = (float)(a.w / k);
  }

  @Translatable
  public static Byte4 mod(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x % b.x), (byte)(a.y % b.y), (byte)(a.z % b.z), (byte)(a.w % b.w));
  }

  public static void mod(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x % b.x);
    result.y = (byte)(a.y % b.y);
    result.z = (byte)(a.z % b.z);
    result.w = (byte)(a.w % b.w);
  }

  @Translatable
  public static Byte4 mod(Byte4 a, byte k) {
    return new Byte4((byte)(a.x % k), (byte)(a.y % k), (byte)(a.z % k), (byte)(a.w % k));
  }

  public static void mod(Byte4 a, byte k, Byte4 result) {
    result.x = (byte)(a.x % k);
    result.y = (byte)(a.y % k);
    result.z = (byte)(a.z % k);
    result.w = (byte)(a.w % k);
  }

  @Translatable
  public static Byte4 bitAnd(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x & b.x), (byte)(a.y & b.y), (byte)(a.z & b.z), (byte)(a.w & b.w));
  }

  public static void bitAnd(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x & b.x);
    result.y = (byte)(a.y & b.y);
    result.z = (byte)(a.z & b.z);
    result.w = (byte)(a.w & b.w);
  }

  @Translatable
  public static Byte4 bitOr(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x | b.x), (byte)(a.y | b.y), (byte)(a.z | b.z), (byte)(a.w | b.w));
  }

  public static void bitOr(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x | b.x);
    result.y = (byte)(a.y | b.y);
    result.z = (byte)(a.z | b.z);
    result.w = (byte)(a.w | b.w);
  }

  @Translatable
  public static Byte4 bitXor(Byte4 a, Byte4 b) {
    return new Byte4((byte)(a.x ^ b.x), (byte)(a.y ^ b.y), (byte)(a.z ^ b.z), (byte)(a.w ^ b.w));
  }

  public static void bitXor(Byte4 a, Byte4 b, Byte4 result) {
    result.x = (byte)(a.x ^ b.x);
    result.y = (byte)(a.y ^ b.y);
    result.z = (byte)(a.z ^ b.z);
    result.w = (byte)(a.w ^ b.w);
  }

  @Translatable
  public static Byte4 bitNot(Byte4 a) {
    return new Byte4((byte)(~a.x), (byte)(~a.y), (byte)(~a.z), (byte)(~a.w));
  }

  public static void bitNot(Byte4 a, Byte4 result) {
    result.x = (byte)(~a.x);
    result.y = (byte)(~a.y);
    result.z = (byte)(~a.z);
    result.w = (byte)(~a.w);
  }

  @Translatable
  public static Byte4 abs(Byte4 a) {
    return new Byte4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static void abs(Byte4 a, Byte4 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
    result.w = Math.abs(a.w);
  }

  @Translatable
  public static Byte4 clamp(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static void clamp(Byte4 a, Byte4 b, Byte4 c, Byte4 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
    result.w = Math.clamp(a.w, b.w, c.w);
  }

  @Translatable
  public static Byte4 max(Byte4 a, Byte4 b) {
    return new Byte4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static void max(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
    result.w = Math.max(a.w, b.w);
  }

  @Translatable
  public static Byte4 maxMag(Byte4 a, Byte4 b) {
    return new Byte4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static void maxMag(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
    result.w = Math.maxMag(a.w, b.w);
  }

  @Translatable
  public static Byte4 min(Byte4 a, Byte4 b) {
    return new Byte4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static void min(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
    result.w = Math.min(a.w, b.w);
  }

  @Translatable
  public static Byte4 minMag(Byte4 a, Byte4 b) {
    return new Byte4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static void minMag(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
    result.w = Math.minMag(a.w, b.w);
  }

  @Translatable
  public static Byte4 mix(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static void mix(Byte4 a, Byte4 b, Byte4 c, Byte4 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
    result.w = Math.mix(a.w, b.w, c.w);
  }

  @Translatable
  public static Byte4 clamp(Byte4 v, byte min, byte max) {
    return new Byte4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static void clamp(Byte4 v, byte min, byte max, Byte4 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
    result.w = Math.clamp(v.w, min, max);
  }

  @Translatable
  public static Byte4 max(Byte4 x, byte y) {
    return new Byte4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static void max(Byte4 x, byte y, Byte4 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
    result.w = Math.max(x.w, y);
  }

  @Translatable
  public static Byte4 min(Byte4 x, byte y) {
    return new Byte4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static void min(Byte4 x, byte y, Byte4 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
    result.w = Math.min(x.w, y);
  }

  @Translatable
  public static Byte4 mix(Byte4 x, Byte4 y, byte a) {
    return new Byte4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static void mix(Byte4 x, Byte4 y, byte a, Byte4 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
    result.w = Math.mix(x.w, y.w, a);
  }

  @Translatable
  public static Byte4 absDiff(Byte4 a, Byte4 b) {
    return new Byte4(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w));
  }

  public static void absDiff(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
    result.w = Math.absDiff(a.w, b.w);
  }

  @Translatable
  public static Byte4 addSat(Byte4 a, Byte4 b) {
    return new Byte4(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w));
  }

  public static void addSat(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
    result.w = Math.addSat(a.w, b.w);
  }

  @Translatable
  public static Byte4 clz(Byte4 a) {
    return new Byte4(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w));
  }

  public static void clz(Byte4 a, Byte4 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
    result.w = Math.clz(a.w);
  }

  @Translatable
  public static Byte4 hadd(Byte4 a, Byte4 b) {
    return new Byte4(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w));
  }

  public static void hadd(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
    result.w = Math.hadd(a.w, b.w);
  }

  @Translatable
  public static Byte4 madHi(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w));
  }

  public static void madHi(Byte4 a, Byte4 b, Byte4 c, Byte4 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
    result.w = Math.madHi(a.w, b.w, c.w);
  }

  @Translatable
  public static Byte4 madSat(Byte4 a, Byte4 b, Byte4 c) {
    return new Byte4(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w));
  }

  public static void madSat(Byte4 a, Byte4 b, Byte4 c, Byte4 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
    result.w = Math.madSat(a.w, b.w, c.w);
  }

  @Translatable
  public static Byte4 mulHi(Byte4 a, Byte4 b) {
    return new Byte4(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w));
  }

  public static void mulHi(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
    result.w = Math.mulHi(a.w, b.w);
  }

  @Translatable
  public static Byte4 rhadd(Byte4 a, Byte4 b) {
    return new Byte4(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w));
  }

  public static void rhadd(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
    result.w = Math.rhadd(a.w, b.w);
  }

  @Translatable
  public static Byte4 rotate(Byte4 a, Byte4 b) {
    return new Byte4(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w));
  }

  public static void rotate(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
    result.w = Math.rotate(a.w, b.w);
  }

  @Translatable
  public static Byte4 subSat(Byte4 a, Byte4 b) {
    return new Byte4(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w));
  }

  public static void subSat(Byte4 a, Byte4 b, Byte4 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
    result.w = Math.subSat(a.w, b.w);
  }
}
