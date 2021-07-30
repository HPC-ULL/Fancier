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

public class Float4 {
  public float x;
  public float y;
  public float z;
  public float w;

  public Float4() {}

  public Float4(float x, float y, float z, float w) {
    set(x, y, z, w);
  }

  public void set(float x, float y, float z, float w) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
  }

  public Float4(float v) {
    this(v, v, v, v);
  }

  public void set(float v) {
    set(v, v, v, v);
  }

  public Float4(float x, float y, Float2 vec1) {
    this(x, y, vec1.x, vec1.y);
  }

  public void set(float x, float y, Float2 vec1) {
    set(x, y, vec1.x, vec1.y);
  }

  public Float4(float x, Float2 vec1, float w) {
    this(x, vec1.x, vec1.y, w);
  }

  public void set(float x, Float2 vec1, float w) {
    set(x, vec1.x, vec1.y, w);
  }

  public Float4(float x, Float3 vec1) {
    this(x, vec1.x, vec1.y, vec1.z);
  }

  public void set(float x, Float3 vec1) {
    set(x, vec1.x, vec1.y, vec1.z);
  }

  public Float4(Float2 vec1, float z, float w) {
    this(vec1.x, vec1.y, z, w);
  }

  public void set(Float2 vec1, float z, float w) {
    set(vec1.x, vec1.y, z, w);
  }

  public Float4(Float2 vec1, Float2 vec2) {
    this(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public void set(Float2 vec1, Float2 vec2) {
    set(vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Float4(Float3 vec1, float w) {
    this(vec1.x, vec1.y, vec1.z, w);
  }

  public void set(Float3 vec1, float w) {
    set(vec1.x, vec1.y, vec1.z, w);
  }

  public Float4(Float4 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public void set(Float4 vec1) {
    set(vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Float4 value() {
    return new Float4(this);
  }

  public Float2 lo() {
    return new Float2(x, y);
  }

  public void lo(Float2 result) {
    result.x = x;
    result.y = y;
  }

  public Float2 hi() {
    return new Float2(z, w);
  }

  public void hi(Float2 result) {
    result.x = z;
    result.y = w;
  }

  public Float2 odd() {
    return new Float2(y, w);
  }

  public void odd(Float2 result) {
    result.x = y;
    result.y = w;
  }

  public Float2 even() {
    return new Float2(x, z);
  }

  public void even(Float2 result) {
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

  public Long4 convertLong4() {
    return new Long4((long)(x), (long)(y), (long)(z), (long)(w));
  }

  public void convertLong4(Long4 result) {
    result.x = (long)(x);
    result.y = (long)(y);
    result.z = (long)(z);
    result.w = (long)(w);
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

  public Float2 asFloat2() {
    return new Float2(x, y);
  }

  public void asFloat2(Float2 result) {
    result.x = x;
    result.y = y;
  }

  public Float3 asFloat3() {
    return new Float3(x, y, z);
  }

  public void asFloat3(Float3 result) {
    result.x = x;
    result.y = y;
    result.z = z;
  }

  public static Int4 isEqual(Float4 a, Float4 b) {
    return new Int4(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0);
  }

  public static void isEqual(Float4 a, Float4 b, Int4 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
    result.w = a.w == b.w? 1 : 0;
  }

  public static Int4 isNotEqual(Float4 a, Float4 b) {
    return new Int4(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0);
  }

  public static void isNotEqual(Float4 a, Float4 b, Int4 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
    result.w = a.w != b.w? 1 : 0;
  }

  public static Int4 isGreater(Float4 a, Float4 b) {
    return new Int4(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0);
  }

  public static void isGreater(Float4 a, Float4 b, Int4 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
    result.w = a.w > b.w? 1 : 0;
  }

  public static Int4 isGreaterEqual(Float4 a, Float4 b) {
    return new Int4(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0);
  }

  public static void isGreaterEqual(Float4 a, Float4 b, Int4 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
    result.w = a.w >= b.w? 1 : 0;
  }

  public static Int4 isLess(Float4 a, Float4 b) {
    return new Int4(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0);
  }

  public static void isLess(Float4 a, Float4 b, Int4 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
    result.w = a.w < b.w? 1 : 0;
  }

  public static Int4 isLessEqual(Float4 a, Float4 b) {
    return new Int4(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0);
  }

  public static void isLessEqual(Float4 a, Float4 b, Int4 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
    result.w = a.w <= b.w? 1 : 0;
  }

  public static Float4 select(Float4 a, Float4 b, Int4 c) {
    return new Float4(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w));
  }

  public static void select(Float4 a, Float4 b, Int4 c, Float4 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
    result.w = Math.select(a.w, b.w, c.w);
  }

  public static Int4 isFinite(Float4 a) {
    return new Int4(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z), Math.isFinite(a.w));
  }

  public static void isFinite(Float4 a, Int4 result) {
    result.x = Math.isFinite(a.x);
    result.y = Math.isFinite(a.y);
    result.z = Math.isFinite(a.z);
    result.w = Math.isFinite(a.w);
  }

  public static Int4 isInf(Float4 a) {
    return new Int4(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z), Math.isInf(a.w));
  }

  public static void isInf(Float4 a, Int4 result) {
    result.x = Math.isInf(a.x);
    result.y = Math.isInf(a.y);
    result.z = Math.isInf(a.z);
    result.w = Math.isInf(a.w);
  }

  public static Int4 isNaN(Float4 a) {
    return new Int4(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z), Math.isNaN(a.w));
  }

  public static void isNaN(Float4 a, Int4 result) {
    result.x = Math.isNaN(a.x);
    result.y = Math.isNaN(a.y);
    result.z = Math.isNaN(a.z);
    result.w = Math.isNaN(a.w);
  }

  public static Int4 isNormal(Float4 a) {
    return new Int4(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z), Math.isNormal(a.w));
  }

  public static void isNormal(Float4 a, Int4 result) {
    result.x = Math.isNormal(a.x);
    result.y = Math.isNormal(a.y);
    result.z = Math.isNormal(a.z);
    result.w = Math.isNormal(a.w);
  }

  public static Int4 isOrdered(Float4 a, Float4 b) {
    return new Int4(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z), Math.isOrdered(a.w, b.w));
  }

  public static void isOrdered(Float4 a, Float4 b, Int4 result) {
    result.x = Math.isOrdered(a.x, b.x);
    result.y = Math.isOrdered(a.y, b.y);
    result.z = Math.isOrdered(a.z, b.z);
    result.w = Math.isOrdered(a.w, b.w);
  }

  public static Int4 isUnordered(Float4 a, Float4 b) {
    return new Int4(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z), Math.isUnordered(a.w, b.w));
  }

  public static void isUnordered(Float4 a, Float4 b, Int4 result) {
    result.x = Math.isUnordered(a.x, b.x);
    result.y = Math.isUnordered(a.y, b.y);
    result.z = Math.isUnordered(a.z, b.z);
    result.w = Math.isUnordered(a.w, b.w);
  }

  public static int any(Float4 a) {
    return (a.x != 0.0f || a.y != 0.0f || a.z != 0.0f || a.w != 0.0f)? 1 : 0;
  }

  public static int all(Float4 a) {
    return (a.x == 0.0f || a.y == 0.0f || a.z == 0.0f || a.w == 0.0f)? 0 : 1;
  }

  public static Float4 neg(Float4 a) {
    return new Float4((float)(-a.x), (float)(-a.y), (float)(-a.z), (float)(-a.w));
  }

  public static void neg(Float4 a, Float4 result) {
    result.x = (float)(-a.x);
    result.y = (float)(-a.y);
    result.z = (float)(-a.z);
    result.w = (float)(-a.w);
  }

  public static Float4 add(Float4 a, Float4 b) {
    return new Float4((float)(a.x + b.x), (float)(a.y + b.y), (float)(a.z + b.z), (float)(a.w + b.w));
  }

  public static void add(Float4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x + b.x);
    result.y = (float)(a.y + b.y);
    result.z = (float)(a.z + b.z);
    result.w = (float)(a.w + b.w);
  }

  public static Float4 sub(Float4 a, Float4 b) {
    return new Float4((float)(a.x - b.x), (float)(a.y - b.y), (float)(a.z - b.z), (float)(a.w - b.w));
  }

  public static void sub(Float4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x - b.x);
    result.y = (float)(a.y - b.y);
    result.z = (float)(a.z - b.z);
    result.w = (float)(a.w - b.w);
  }

  public static Double4 mul(Float4 a, Double4 b) {
    return new Double4((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w));
  }

  public static void mul(Float4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
    result.w = (double)(a.w * b.w);
  }

  public static Double4 mul(Float4 a, double k) {
    return new Double4((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k));
  }

  public static void mul(Float4 a, double k, Double4 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
    result.w = (double)(a.w * k);
  }

  public static Float4 mul(Float4 a, Float4 b) {
    return new Float4((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w));
  }

  public static void mul(Float4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
    result.w = (float)(a.w * b.w);
  }

  public static Float4 mul(Float4 a, float k) {
    return new Float4((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k));
  }

  public static void mul(Float4 a, float k, Float4 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
    result.w = (float)(a.w * k);
  }

  public static Double4 div(Float4 a, Double4 b) {
    return new Double4((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w));
  }

  public static void div(Float4 a, Double4 b, Double4 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
    result.w = (double)(a.w / b.w);
  }

  public static Double4 div(Float4 a, double k) {
    return new Double4((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k));
  }

  public static void div(Float4 a, double k, Double4 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
    result.w = (double)(a.w / k);
  }

  public static Float4 div(Float4 a, Float4 b) {
    return new Float4((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w));
  }

  public static void div(Float4 a, Float4 b, Float4 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
    result.w = (float)(a.w / b.w);
  }

  public static Float4 div(Float4 a, float k) {
    return new Float4((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k));
  }

  public static void div(Float4 a, float k, Float4 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
    result.w = (float)(a.w / k);
  }

  public static Float4 cross(Float4 a, Float4 b) {
    Float4 result = new Float4();
    cross(a, b, result);
    return result;
  }

  public static void cross(Float4 a, Float4 b, Float4 result) {
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    result.w = 0.0f;
  }

  public static float dot(Float4 a, Float4 b) {
    return (float)(a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
  }

  public static double distance(Float4 a, Float4 b) {
    return distance(a, b, new Float4());
  }

  public static double distance(Float4 a, Float4 b, Float4 tmp) {
    sub(a, b, tmp);
    return length(tmp);
  }

  public static double length(Float4 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
  }

  public static Float4 normalize(Float4 a) {
    Float4 result = new Float4();
    normalize(a, result);
    return result;
  }

  public static void normalize(Float4 a, Float4 result) {
    double len = length(a);
    result.x = (float)(a.x / len);
    result.y = (float)(a.y / len);
    result.z = (float)(a.z / len);
    result.w = (float)(a.w / len);
  }

  public static Float4 abs(Float4 a) {
    return new Float4(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w));
  }

  public static void abs(Float4 a, Float4 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
    result.w = Math.abs(a.w);
  }

  public static Float4 clamp(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w));
  }

  public static void clamp(Float4 a, Float4 b, Float4 c, Float4 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
    result.w = Math.clamp(a.w, b.w, c.w);
  }

  public static Float4 max(Float4 a, Float4 b) {
    return new Float4(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w));
  }

  public static void max(Float4 a, Float4 b, Float4 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
    result.w = Math.max(a.w, b.w);
  }

  public static Float4 maxMag(Float4 a, Float4 b) {
    return new Float4(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w));
  }

  public static void maxMag(Float4 a, Float4 b, Float4 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
    result.w = Math.maxMag(a.w, b.w);
  }

  public static Float4 min(Float4 a, Float4 b) {
    return new Float4(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w));
  }

  public static void min(Float4 a, Float4 b, Float4 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
    result.w = Math.min(a.w, b.w);
  }

  public static Float4 minMag(Float4 a, Float4 b) {
    return new Float4(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w));
  }

  public static void minMag(Float4 a, Float4 b, Float4 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
    result.w = Math.minMag(a.w, b.w);
  }

  public static Float4 mix(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w));
  }

  public static void mix(Float4 a, Float4 b, Float4 c, Float4 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
    result.w = Math.mix(a.w, b.w, c.w);
  }

  public static Float4 clamp(Float4 v, float min, float max) {
    return new Float4(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max));
  }

  public static void clamp(Float4 v, float min, float max, Float4 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
    result.w = Math.clamp(v.w, min, max);
  }

  public static Float4 max(Float4 x, float y) {
    return new Float4(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y));
  }

  public static void max(Float4 x, float y, Float4 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
    result.w = Math.max(x.w, y);
  }

  public static Float4 min(Float4 x, float y) {
    return new Float4(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y));
  }

  public static void min(Float4 x, float y, Float4 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
    result.w = Math.min(x.w, y);
  }

  public static Float4 mix(Float4 x, Float4 y, float a) {
    return new Float4(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a));
  }

  public static void mix(Float4 x, Float4 y, float a, Float4 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
    result.w = Math.mix(x.w, y.w, a);
  }

  public static Float4 acos(Float4 a) {
    return new Float4(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z), Math.acos(a.w));
  }

  public static void acos(Float4 a, Float4 result) {
    result.x = Math.acos(a.x);
    result.y = Math.acos(a.y);
    result.z = Math.acos(a.z);
    result.w = Math.acos(a.w);
  }

  public static Float4 acosh(Float4 a) {
    return new Float4(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z), Math.acosh(a.w));
  }

  public static void acosh(Float4 a, Float4 result) {
    result.x = Math.acosh(a.x);
    result.y = Math.acosh(a.y);
    result.z = Math.acosh(a.z);
    result.w = Math.acosh(a.w);
  }

  public static Float4 asin(Float4 a) {
    return new Float4(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z), Math.asin(a.w));
  }

  public static void asin(Float4 a, Float4 result) {
    result.x = Math.asin(a.x);
    result.y = Math.asin(a.y);
    result.z = Math.asin(a.z);
    result.w = Math.asin(a.w);
  }

  public static Float4 asinh(Float4 a) {
    return new Float4(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z), Math.asinh(a.w));
  }

  public static void asinh(Float4 a, Float4 result) {
    result.x = Math.asinh(a.x);
    result.y = Math.asinh(a.y);
    result.z = Math.asinh(a.z);
    result.w = Math.asinh(a.w);
  }

  public static Float4 atan(Float4 a) {
    return new Float4(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z), Math.atan(a.w));
  }

  public static void atan(Float4 a, Float4 result) {
    result.x = Math.atan(a.x);
    result.y = Math.atan(a.y);
    result.z = Math.atan(a.z);
    result.w = Math.atan(a.w);
  }

  public static Float4 atan2(Float4 a, Float4 b) {
    return new Float4(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z), Math.atan2(a.w, b.w));
  }

  public static void atan2(Float4 a, Float4 b, Float4 result) {
    result.x = Math.atan2(a.x, b.x);
    result.y = Math.atan2(a.y, b.y);
    result.z = Math.atan2(a.z, b.z);
    result.w = Math.atan2(a.w, b.w);
  }

  public static Float4 atanh(Float4 a) {
    return new Float4(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z), Math.atanh(a.w));
  }

  public static void atanh(Float4 a, Float4 result) {
    result.x = Math.atanh(a.x);
    result.y = Math.atanh(a.y);
    result.z = Math.atanh(a.z);
    result.w = Math.atanh(a.w);
  }

  public static Float4 cbrt(Float4 a) {
    return new Float4(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z), Math.cbrt(a.w));
  }

  public static void cbrt(Float4 a, Float4 result) {
    result.x = Math.cbrt(a.x);
    result.y = Math.cbrt(a.y);
    result.z = Math.cbrt(a.z);
    result.w = Math.cbrt(a.w);
  }

  public static Float4 ceil(Float4 a) {
    return new Float4(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z), Math.ceil(a.w));
  }

  public static void ceil(Float4 a, Float4 result) {
    result.x = Math.ceil(a.x);
    result.y = Math.ceil(a.y);
    result.z = Math.ceil(a.z);
    result.w = Math.ceil(a.w);
  }

  public static Float4 copySign(Float4 a, Float4 b) {
    return new Float4(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z), Math.copySign(a.w, b.w));
  }

  public static void copySign(Float4 a, Float4 b, Float4 result) {
    result.x = Math.copySign(a.x, b.x);
    result.y = Math.copySign(a.y, b.y);
    result.z = Math.copySign(a.z, b.z);
    result.w = Math.copySign(a.w, b.w);
  }

  public static Float4 cos(Float4 a) {
    return new Float4(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z), Math.cos(a.w));
  }

  public static void cos(Float4 a, Float4 result) {
    result.x = Math.cos(a.x);
    result.y = Math.cos(a.y);
    result.z = Math.cos(a.z);
    result.w = Math.cos(a.w);
  }

  public static Float4 cosh(Float4 a) {
    return new Float4(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z), Math.cosh(a.w));
  }

  public static void cosh(Float4 a, Float4 result) {
    result.x = Math.cosh(a.x);
    result.y = Math.cosh(a.y);
    result.z = Math.cosh(a.z);
    result.w = Math.cosh(a.w);
  }

  public static Float4 erf(Float4 a) {
    return new Float4(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z), Math.erf(a.w));
  }

  public static void erf(Float4 a, Float4 result) {
    result.x = Math.erf(a.x);
    result.y = Math.erf(a.y);
    result.z = Math.erf(a.z);
    result.w = Math.erf(a.w);
  }

  public static Float4 erfc(Float4 a) {
    return new Float4(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z), Math.erfc(a.w));
  }

  public static void erfc(Float4 a, Float4 result) {
    result.x = Math.erfc(a.x);
    result.y = Math.erfc(a.y);
    result.z = Math.erfc(a.z);
    result.w = Math.erfc(a.w);
  }

  public static Float4 exp(Float4 a) {
    return new Float4(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z), Math.exp(a.w));
  }

  public static void exp(Float4 a, Float4 result) {
    result.x = Math.exp(a.x);
    result.y = Math.exp(a.y);
    result.z = Math.exp(a.z);
    result.w = Math.exp(a.w);
  }

  public static Float4 exp10(Float4 a) {
    return new Float4(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z), Math.exp10(a.w));
  }

  public static void exp10(Float4 a, Float4 result) {
    result.x = Math.exp10(a.x);
    result.y = Math.exp10(a.y);
    result.z = Math.exp10(a.z);
    result.w = Math.exp10(a.w);
  }

  public static Float4 exp2(Float4 a) {
    return new Float4(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z), Math.exp2(a.w));
  }

  public static void exp2(Float4 a, Float4 result) {
    result.x = Math.exp2(a.x);
    result.y = Math.exp2(a.y);
    result.z = Math.exp2(a.z);
    result.w = Math.exp2(a.w);
  }

  public static Float4 expm1(Float4 a) {
    return new Float4(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z), Math.expm1(a.w));
  }

  public static void expm1(Float4 a, Float4 result) {
    result.x = Math.expm1(a.x);
    result.y = Math.expm1(a.y);
    result.z = Math.expm1(a.z);
    result.w = Math.expm1(a.w);
  }

  public static Float4 fdim(Float4 a, Float4 b) {
    return new Float4(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z), Math.fdim(a.w, b.w));
  }

  public static void fdim(Float4 a, Float4 b, Float4 result) {
    result.x = Math.fdim(a.x, b.x);
    result.y = Math.fdim(a.y, b.y);
    result.z = Math.fdim(a.z, b.z);
    result.w = Math.fdim(a.w, b.w);
  }

  public static Float4 floor(Float4 a) {
    return new Float4(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z), Math.floor(a.w));
  }

  public static void floor(Float4 a, Float4 result) {
    result.x = Math.floor(a.x);
    result.y = Math.floor(a.y);
    result.z = Math.floor(a.z);
    result.w = Math.floor(a.w);
  }

  public static Float4 fma(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z), Math.fma(a.w, b.w, c.w));
  }

  public static void fma(Float4 a, Float4 b, Float4 c, Float4 result) {
    result.x = Math.fma(a.x, b.x, c.x);
    result.y = Math.fma(a.y, b.y, c.y);
    result.z = Math.fma(a.z, b.z, c.z);
    result.w = Math.fma(a.w, b.w, c.w);
  }

  public static Float4 fmod(Float4 a, Float4 b) {
    return new Float4(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z), Math.fmod(a.w, b.w));
  }

  public static void fmod(Float4 a, Float4 b, Float4 result) {
    result.x = Math.fmod(a.x, b.x);
    result.y = Math.fmod(a.y, b.y);
    result.z = Math.fmod(a.z, b.z);
    result.w = Math.fmod(a.w, b.w);
  }

  public static Float4 fract(Float4 a) {
    return new Float4(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z), Math.fract(a.w));
  }

  public static void fract(Float4 a, Float4 result) {
    result.x = Math.fract(a.x);
    result.y = Math.fract(a.y);
    result.z = Math.fract(a.z);
    result.w = Math.fract(a.w);
  }

  public static Float4 frexp(Float4 a) {
    return new Float4(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z), Math.frexp(a.w));
  }

  public static void frexp(Float4 a, Float4 result) {
    result.x = Math.frexp(a.x);
    result.y = Math.frexp(a.y);
    result.z = Math.frexp(a.z);
    result.w = Math.frexp(a.w);
  }

  public static Float4 getExponent(Float4 a) {
    return new Float4(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z), Math.getExponent(a.w));
  }

  public static void getExponent(Float4 a, Float4 result) {
    result.x = Math.getExponent(a.x);
    result.y = Math.getExponent(a.y);
    result.z = Math.getExponent(a.z);
    result.w = Math.getExponent(a.w);
  }

  public static Float4 hypot(Float4 a, Float4 b) {
    return new Float4(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z), Math.hypot(a.w, b.w));
  }

  public static void hypot(Float4 a, Float4 b, Float4 result) {
    result.x = Math.hypot(a.x, b.x);
    result.y = Math.hypot(a.y, b.y);
    result.z = Math.hypot(a.z, b.z);
    result.w = Math.hypot(a.w, b.w);
  }

  public static Float4 lgamma(Float4 a) {
    return new Float4(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z), Math.lgamma(a.w));
  }

  public static void lgamma(Float4 a, Float4 result) {
    result.x = Math.lgamma(a.x);
    result.y = Math.lgamma(a.y);
    result.z = Math.lgamma(a.z);
    result.w = Math.lgamma(a.w);
  }

  public static Float4 log(Float4 a) {
    return new Float4(Math.log(a.x), Math.log(a.y), Math.log(a.z), Math.log(a.w));
  }

  public static void log(Float4 a, Float4 result) {
    result.x = Math.log(a.x);
    result.y = Math.log(a.y);
    result.z = Math.log(a.z);
    result.w = Math.log(a.w);
  }

  public static Float4 log10(Float4 a) {
    return new Float4(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z), Math.log10(a.w));
  }

  public static void log10(Float4 a, Float4 result) {
    result.x = Math.log10(a.x);
    result.y = Math.log10(a.y);
    result.z = Math.log10(a.z);
    result.w = Math.log10(a.w);
  }

  public static Float4 log1p(Float4 a) {
    return new Float4(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z), Math.log1p(a.w));
  }

  public static void log1p(Float4 a, Float4 result) {
    result.x = Math.log1p(a.x);
    result.y = Math.log1p(a.y);
    result.z = Math.log1p(a.z);
    result.w = Math.log1p(a.w);
  }

  public static Float4 log2(Float4 a) {
    return new Float4(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z), Math.log2(a.w));
  }

  public static void log2(Float4 a, Float4 result) {
    result.x = Math.log2(a.x);
    result.y = Math.log2(a.y);
    result.z = Math.log2(a.z);
    result.w = Math.log2(a.w);
  }

  public static Float4 logb(Float4 a) {
    return new Float4(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z), Math.logb(a.w));
  }

  public static void logb(Float4 a, Float4 result) {
    result.x = Math.logb(a.x);
    result.y = Math.logb(a.y);
    result.z = Math.logb(a.z);
    result.w = Math.logb(a.w);
  }

  public static Float4 mad(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z), Math.mad(a.w, b.w, c.w));
  }

  public static void mad(Float4 a, Float4 b, Float4 c, Float4 result) {
    result.x = Math.mad(a.x, b.x, c.x);
    result.y = Math.mad(a.y, b.y, c.y);
    result.z = Math.mad(a.z, b.z, c.z);
    result.w = Math.mad(a.w, b.w, c.w);
  }

  public static Float4 nextAfter(Float4 a, Float4 b) {
    return new Float4(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z), Math.nextAfter(a.w, b.w));
  }

  public static void nextAfter(Float4 a, Float4 b, Float4 result) {
    result.x = Math.nextAfter(a.x, b.x);
    result.y = Math.nextAfter(a.y, b.y);
    result.z = Math.nextAfter(a.z, b.z);
    result.w = Math.nextAfter(a.w, b.w);
  }

  public static Float4 pow(Float4 a, Float4 b) {
    return new Float4(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z), Math.pow(a.w, b.w));
  }

  public static void pow(Float4 a, Float4 b, Float4 result) {
    result.x = Math.pow(a.x, b.x);
    result.y = Math.pow(a.y, b.y);
    result.z = Math.pow(a.z, b.z);
    result.w = Math.pow(a.w, b.w);
  }

  public static Float4 powr(Float4 a, Float4 b) {
    return new Float4(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z), Math.powr(a.w, b.w));
  }

  public static void powr(Float4 a, Float4 b, Float4 result) {
    result.x = Math.powr(a.x, b.x);
    result.y = Math.powr(a.y, b.y);
    result.z = Math.powr(a.z, b.z);
    result.w = Math.powr(a.w, b.w);
  }

  public static Float4 remainder(Float4 a, Float4 b) {
    return new Float4(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z), Math.remainder(a.w, b.w));
  }

  public static void remainder(Float4 a, Float4 b, Float4 result) {
    result.x = Math.remainder(a.x, b.x);
    result.y = Math.remainder(a.y, b.y);
    result.z = Math.remainder(a.z, b.z);
    result.w = Math.remainder(a.w, b.w);
  }

  public static Float4 rint(Float4 a) {
    return new Float4(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z), Math.rint(a.w));
  }

  public static void rint(Float4 a, Float4 result) {
    result.x = Math.rint(a.x);
    result.y = Math.rint(a.y);
    result.z = Math.rint(a.z);
    result.w = Math.rint(a.w);
  }

  public static Float4 round(Float4 a) {
    return new Float4(Math.round(a.x), Math.round(a.y), Math.round(a.z), Math.round(a.w));
  }

  public static void round(Float4 a, Float4 result) {
    result.x = Math.round(a.x);
    result.y = Math.round(a.y);
    result.z = Math.round(a.z);
    result.w = Math.round(a.w);
  }

  public static Float4 rsqrt(Float4 a) {
    return new Float4(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z), Math.rsqrt(a.w));
  }

  public static void rsqrt(Float4 a, Float4 result) {
    result.x = Math.rsqrt(a.x);
    result.y = Math.rsqrt(a.y);
    result.z = Math.rsqrt(a.z);
    result.w = Math.rsqrt(a.w);
  }

  public static Float4 signum(Float4 a) {
    return new Float4(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z), Math.signum(a.w));
  }

  public static void signum(Float4 a, Float4 result) {
    result.x = Math.signum(a.x);
    result.y = Math.signum(a.y);
    result.z = Math.signum(a.z);
    result.w = Math.signum(a.w);
  }

  public static Float4 sin(Float4 a) {
    return new Float4(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z), Math.sin(a.w));
  }

  public static void sin(Float4 a, Float4 result) {
    result.x = Math.sin(a.x);
    result.y = Math.sin(a.y);
    result.z = Math.sin(a.z);
    result.w = Math.sin(a.w);
  }

  public static Float4 sinh(Float4 a) {
    return new Float4(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z), Math.sinh(a.w));
  }

  public static void sinh(Float4 a, Float4 result) {
    result.x = Math.sinh(a.x);
    result.y = Math.sinh(a.y);
    result.z = Math.sinh(a.z);
    result.w = Math.sinh(a.w);
  }

  public static Float4 smoothStep(Float4 a, Float4 b, Float4 c) {
    return new Float4(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z), Math.smoothStep(a.w, b.w, c.w));
  }

  public static void smoothStep(Float4 a, Float4 b, Float4 c, Float4 result) {
    result.x = Math.smoothStep(a.x, b.x, c.x);
    result.y = Math.smoothStep(a.y, b.y, c.y);
    result.z = Math.smoothStep(a.z, b.z, c.z);
    result.w = Math.smoothStep(a.w, b.w, c.w);
  }

  public static Float4 sqrt(Float4 a) {
    return new Float4(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z), Math.sqrt(a.w));
  }

  public static void sqrt(Float4 a, Float4 result) {
    result.x = Math.sqrt(a.x);
    result.y = Math.sqrt(a.y);
    result.z = Math.sqrt(a.z);
    result.w = Math.sqrt(a.w);
  }

  public static Float4 step(Float4 a, Float4 b) {
    return new Float4(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z), Math.step(a.w, b.w));
  }

  public static void step(Float4 a, Float4 b, Float4 result) {
    result.x = Math.step(a.x, b.x);
    result.y = Math.step(a.y, b.y);
    result.z = Math.step(a.z, b.z);
    result.w = Math.step(a.w, b.w);
  }

  public static Float4 tan(Float4 a) {
    return new Float4(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z), Math.tan(a.w));
  }

  public static void tan(Float4 a, Float4 result) {
    result.x = Math.tan(a.x);
    result.y = Math.tan(a.y);
    result.z = Math.tan(a.z);
    result.w = Math.tan(a.w);
  }

  public static Float4 tanh(Float4 a) {
    return new Float4(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z), Math.tanh(a.w));
  }

  public static void tanh(Float4 a, Float4 result) {
    result.x = Math.tanh(a.x);
    result.y = Math.tanh(a.y);
    result.z = Math.tanh(a.z);
    result.w = Math.tanh(a.w);
  }

  public static Float4 tgamma(Float4 a) {
    return new Float4(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z), Math.tgamma(a.w));
  }

  public static void tgamma(Float4 a, Float4 result) {
    result.x = Math.tgamma(a.x);
    result.y = Math.tgamma(a.y);
    result.z = Math.tgamma(a.z);
    result.w = Math.tgamma(a.w);
  }

  public static Float4 toDegrees(Float4 a) {
    return new Float4(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z), Math.toDegrees(a.w));
  }

  public static void toDegrees(Float4 a, Float4 result) {
    result.x = Math.toDegrees(a.x);
    result.y = Math.toDegrees(a.y);
    result.z = Math.toDegrees(a.z);
    result.w = Math.toDegrees(a.w);
  }

  public static Float4 toRadians(Float4 a) {
    return new Float4(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z), Math.toRadians(a.w));
  }

  public static void toRadians(Float4 a, Float4 result) {
    result.x = Math.toRadians(a.x);
    result.y = Math.toRadians(a.y);
    result.z = Math.toRadians(a.z);
    result.w = Math.toRadians(a.w);
  }

  public static Float4 trunc(Float4 a) {
    return new Float4(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z), Math.trunc(a.w));
  }

  public static void trunc(Float4 a, Float4 result) {
    result.x = Math.trunc(a.x);
    result.y = Math.trunc(a.y);
    result.z = Math.trunc(a.z);
    result.w = Math.trunc(a.w);
  }

  public static Float4 scalb(Float4 a, Int4 n) {
    return new Float4(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z), Math.scalb(a.w, n.w));
  }

  public static void scalb(Float4 a, Int4 n, Float4 result) {
    result.x = Math.scalb(a.x, n.x);
    result.y = Math.scalb(a.y, n.y);
    result.z = Math.scalb(a.z, n.z);
    result.w = Math.scalb(a.w, n.w);
  }

  public static Float4 ldexp(Float4 a, Int4 n) {
    return new Float4(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z), Math.ldexp(a.w, n.w));
  }

  public static void ldexp(Float4 a, Int4 n, Float4 result) {
    result.x = Math.ldexp(a.x, n.x);
    result.y = Math.ldexp(a.y, n.y);
    result.z = Math.ldexp(a.z, n.z);
    result.w = Math.ldexp(a.w, n.w);
  }

  public static Float4 pown(Float4 a, Int4 b) {
    return new Float4(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w));
  }

  public static void pown(Float4 a, Int4 b, Float4 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
    result.z = Math.pown(a.z, b.z);
    result.w = Math.pown(a.w, b.w);
  }

  public static Float4 rootn(Float4 a, Int4 b) {
    return new Float4(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w));
  }

  public static void rootn(Float4 a, Int4 b, Float4 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
    result.z = Math.pown(a.z, b.z);
    result.w = Math.pown(a.w, b.w);
  }

  public static Float4 smoothStep(Float4 a, Float4 b, float c) {
    return new Float4(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c), Math.smoothStep(a.w, b.w, c));
  }

  public static void smoothStep(Float4 a, Float4 b, float c, Float4 result) {
    result.x = Math.smoothStep(a.x, b.x, c);
    result.y = Math.smoothStep(a.y, b.y, c);
    result.z = Math.smoothStep(a.z, b.z, c);
    result.w = Math.smoothStep(a.w, b.w, c);
  }
}
