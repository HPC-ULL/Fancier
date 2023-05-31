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


public class Float3 {
  @Translatable
  public float x;
  @Translatable
  public float y;
  @Translatable
  public float z;

  @Translatable
  public Float3() {}

  @Translatable
  public Float3(float x, float y, float z) {
    set(x, y, z);
  }

  @Translatable
  public void set(float x, float y, float z) {
    this.x = x;
    this.y = y;
    this.z = z;
  }

  @Translatable
  public Float3(float v) {
    this(v, v, v);
  }

  @Translatable
  public void set(float v) {
    set(v, v, v);
  }

  @Translatable
  public Float3(float x, Float2 vec1) {
    this(x, vec1.x, vec1.y);
  }

  @Translatable
  public void set(float x, Float2 vec1) {
    set(x, vec1.x, vec1.y);
  }

  @Translatable
  public Float3(Float2 vec1, float z) {
    this(vec1.x, vec1.y, z);
  }

  @Translatable
  public void set(Float2 vec1, float z) {
    set(vec1.x, vec1.y, z);
  }

  @Translatable
  public Float3(Float3 vec1) {
    this(vec1.x, vec1.y, vec1.z);
  }

  @Translatable
  public void set(Float3 vec1) {
    set(vec1.x, vec1.y, vec1.z);
  }

  @Translatable
  public Float3 value() {
    return new Float3(this);
  }

  @Translatable
  public Byte3 convertByte3() {
    return new Byte3((byte)(x), (byte)(y), (byte)(z));
  }

  public void convertByte3(Byte3 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
    result.z = (byte)(z);
  }

  @Translatable
  public Short3 convertShort3() {
    return new Short3((short)(x), (short)(y), (short)(z));
  }

  public void convertShort3(Short3 result) {
    result.x = (short)(x);
    result.y = (short)(y);
    result.z = (short)(z);
  }

  @Translatable
  public Int3 convertInt3() {
    return new Int3((int)(x), (int)(y), (int)(z));
  }

  public void convertInt3(Int3 result) {
    result.x = (int)(x);
    result.y = (int)(y);
    result.z = (int)(z);
  }

  @Translatable
  public Long3 convertLong3() {
    return new Long3((long)(x), (long)(y), (long)(z));
  }

  public void convertLong3(Long3 result) {
    result.x = (long)(x);
    result.y = (long)(y);
    result.z = (long)(z);
  }

  @Translatable
  public Double3 convertDouble3() {
    return new Double3((double)(x), (double)(y), (double)(z));
  }

  public void convertDouble3(Double3 result) {
    result.x = (double)(x);
    result.y = (double)(y);
    result.z = (double)(z);
  }

  @Translatable
  public Float2 asFloat2() {
    return new Float2(x, y);
  }

  public void asFloat2(Float2 result) {
    result.x = x;
    result.y = y;
  }

  @Translatable
  public static Int3 isEqual(Float3 a, Float3 b) {
    return new Int3(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0);
  }

  public static void isEqual(Float3 a, Float3 b, Int3 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
  }

  @Translatable
  public static Int3 isNotEqual(Float3 a, Float3 b) {
    return new Int3(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0);
  }

  public static void isNotEqual(Float3 a, Float3 b, Int3 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
  }

  @Translatable
  public static Int3 isGreater(Float3 a, Float3 b) {
    return new Int3(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0);
  }

  public static void isGreater(Float3 a, Float3 b, Int3 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
  }

  @Translatable
  public static Int3 isGreaterEqual(Float3 a, Float3 b) {
    return new Int3(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0);
  }

  public static void isGreaterEqual(Float3 a, Float3 b, Int3 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
  }

  @Translatable
  public static Int3 isLess(Float3 a, Float3 b) {
    return new Int3(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0);
  }

  public static void isLess(Float3 a, Float3 b, Int3 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
  }

  @Translatable
  public static Int3 isLessEqual(Float3 a, Float3 b) {
    return new Int3(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0);
  }

  public static void isLessEqual(Float3 a, Float3 b, Int3 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
  }

  @Translatable
  public static Float3 select(Float3 a, Float3 b, Int3 c) {
    return new Float3(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z));
  }

  public static void select(Float3 a, Float3 b, Int3 c, Float3 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
  }

  @Translatable
  public static Int3 isFinite(Float3 a) {
    return new Int3(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z));
  }

  public static void isFinite(Float3 a, Int3 result) {
    result.x = Math.isFinite(a.x);
    result.y = Math.isFinite(a.y);
    result.z = Math.isFinite(a.z);
  }

  @Translatable
  public static Int3 isInf(Float3 a) {
    return new Int3(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z));
  }

  public static void isInf(Float3 a, Int3 result) {
    result.x = Math.isInf(a.x);
    result.y = Math.isInf(a.y);
    result.z = Math.isInf(a.z);
  }

  @Translatable
  public static Int3 isNaN(Float3 a) {
    return new Int3(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z));
  }

  public static void isNaN(Float3 a, Int3 result) {
    result.x = Math.isNaN(a.x);
    result.y = Math.isNaN(a.y);
    result.z = Math.isNaN(a.z);
  }

  @Translatable
  public static Int3 isNormal(Float3 a) {
    return new Int3(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z));
  }

  public static void isNormal(Float3 a, Int3 result) {
    result.x = Math.isNormal(a.x);
    result.y = Math.isNormal(a.y);
    result.z = Math.isNormal(a.z);
  }

  @Translatable
  public static Int3 isOrdered(Float3 a, Float3 b) {
    return new Int3(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z));
  }

  public static void isOrdered(Float3 a, Float3 b, Int3 result) {
    result.x = Math.isOrdered(a.x, b.x);
    result.y = Math.isOrdered(a.y, b.y);
    result.z = Math.isOrdered(a.z, b.z);
  }

  @Translatable
  public static Int3 isUnordered(Float3 a, Float3 b) {
    return new Int3(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z));
  }

  public static void isUnordered(Float3 a, Float3 b, Int3 result) {
    result.x = Math.isUnordered(a.x, b.x);
    result.y = Math.isUnordered(a.y, b.y);
    result.z = Math.isUnordered(a.z, b.z);
  }

  @Translatable
  public static int any(Float3 a) {
    return (a.x != 0.0f || a.y != 0.0f || a.z != 0.0f)? 1 : 0;
  }

  @Translatable
  public static int all(Float3 a) {
    return (a.x == 0.0f || a.y == 0.0f || a.z == 0.0f)? 0 : 1;
  }

  @Translatable
  public static Float3 neg(Float3 a) {
    return new Float3((float)(-a.x), (float)(-a.y), (float)(-a.z));
  }

  public static void neg(Float3 a, Float3 result) {
    result.x = (float)(-a.x);
    result.y = (float)(-a.y);
    result.z = (float)(-a.z);
  }

  @Translatable
  public static Float3 add(Float3 a, Float3 b) {
    return new Float3((float)(a.x + b.x), (float)(a.y + b.y), (float)(a.z + b.z));
  }

  public static void add(Float3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x + b.x);
    result.y = (float)(a.y + b.y);
    result.z = (float)(a.z + b.z);
  }

  @Translatable
  public static Float3 sub(Float3 a, Float3 b) {
    return new Float3((float)(a.x - b.x), (float)(a.y - b.y), (float)(a.z - b.z));
  }

  public static void sub(Float3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x - b.x);
    result.y = (float)(a.y - b.y);
    result.z = (float)(a.z - b.z);
  }

  @Translatable
  public static Double3 mul(Float3 a, Double3 b) {
    return new Double3((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z));
  }

  public static void mul(Float3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
  }

  @Translatable
  public static Double3 mul(Float3 a, double k) {
    return new Double3((double)(a.x * k), (double)(a.y * k), (double)(a.z * k));
  }

  public static void mul(Float3 a, double k, Double3 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
  }

  @Translatable
  public static Float3 mul(Float3 a, Float3 b) {
    return new Float3((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z));
  }

  public static void mul(Float3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
  }

  @Translatable
  public static Float3 mul(Float3 a, float k) {
    return new Float3((float)(a.x * k), (float)(a.y * k), (float)(a.z * k));
  }

  public static void mul(Float3 a, float k, Float3 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
  }

  @Translatable
  public static Double3 div(Float3 a, Double3 b) {
    return new Double3((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z));
  }

  public static void div(Float3 a, Double3 b, Double3 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
  }

  @Translatable
  public static Double3 div(Float3 a, double k) {
    return new Double3((double)(a.x / k), (double)(a.y / k), (double)(a.z / k));
  }

  public static void div(Float3 a, double k, Double3 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
  }

  @Translatable
  public static Float3 div(Float3 a, Float3 b) {
    return new Float3((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z));
  }

  public static void div(Float3 a, Float3 b, Float3 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
  }

  @Translatable
  public static Float3 div(Float3 a, float k) {
    return new Float3((float)(a.x / k), (float)(a.y / k), (float)(a.z / k));
  }

  public static void div(Float3 a, float k, Float3 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
  }

  @Translatable
  public static Float3 cross(Float3 a, Float3 b) {
    Float3 result = new Float3();
    cross(a, b, result);
    return result;
  }

  public static void cross(Float3 a, Float3 b, Float3 result) {
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
  }

  @Translatable
  public static float dot(Float3 a, Float3 b) {
    return (float)(a.x * b.x + a.y * b.y + a.z * b.z);
  }

  @Translatable
  public static double distance(Float3 a, Float3 b) {
    return distance(a, b, new Float3());
  }

  @Translatable
  public static double distance(Float3 a, Float3 b, Float3 tmp) {
    sub(a, b, tmp);
    return length(tmp);
  }

  @Translatable
  public static double length(Float3 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
  }

  @Translatable
  public static Float3 normalize(Float3 a) {
    Float3 result = new Float3();
    normalize(a, result);
    return result;
  }

  public static void normalize(Float3 a, Float3 result) {
    double len = length(a);
    result.x = (float)(a.x / len);
    result.y = (float)(a.y / len);
    result.z = (float)(a.z / len);
  }

  @Translatable
  public static Float3 abs(Float3 a) {
    return new Float3(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z));
  }

  public static void abs(Float3 a, Float3 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
  }

  @Translatable
  public static Float3 clamp(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z));
  }

  public static void clamp(Float3 a, Float3 b, Float3 c, Float3 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
  }

  @Translatable
  public static Float3 max(Float3 a, Float3 b) {
    return new Float3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z));
  }

  public static void max(Float3 a, Float3 b, Float3 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
  }

  @Translatable
  public static Float3 maxMag(Float3 a, Float3 b) {
    return new Float3(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z));
  }

  public static void maxMag(Float3 a, Float3 b, Float3 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
  }

  @Translatable
  public static Float3 min(Float3 a, Float3 b) {
    return new Float3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z));
  }

  public static void min(Float3 a, Float3 b, Float3 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
  }

  @Translatable
  public static Float3 minMag(Float3 a, Float3 b) {
    return new Float3(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z));
  }

  public static void minMag(Float3 a, Float3 b, Float3 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
  }

  @Translatable
  public static Float3 mix(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z));
  }

  public static void mix(Float3 a, Float3 b, Float3 c, Float3 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
  }

  @Translatable
  public static Float3 clamp(Float3 v, float min, float max) {
    return new Float3(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max));
  }

  public static void clamp(Float3 v, float min, float max, Float3 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
  }

  @Translatable
  public static Float3 max(Float3 x, float y) {
    return new Float3(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y));
  }

  public static void max(Float3 x, float y, Float3 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
  }

  @Translatable
  public static Float3 min(Float3 x, float y) {
    return new Float3(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y));
  }

  public static void min(Float3 x, float y, Float3 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
  }

  @Translatable
  public static Float3 mix(Float3 x, Float3 y, float a) {
    return new Float3(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a));
  }

  public static void mix(Float3 x, Float3 y, float a, Float3 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
  }

  @Translatable
  public static Float3 acos(Float3 a) {
    return new Float3(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z));
  }

  public static void acos(Float3 a, Float3 result) {
    result.x = Math.acos(a.x);
    result.y = Math.acos(a.y);
    result.z = Math.acos(a.z);
  }

  @Translatable
  public static Float3 acosh(Float3 a) {
    return new Float3(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z));
  }

  public static void acosh(Float3 a, Float3 result) {
    result.x = Math.acosh(a.x);
    result.y = Math.acosh(a.y);
    result.z = Math.acosh(a.z);
  }

  @Translatable
  public static Float3 asin(Float3 a) {
    return new Float3(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z));
  }

  public static void asin(Float3 a, Float3 result) {
    result.x = Math.asin(a.x);
    result.y = Math.asin(a.y);
    result.z = Math.asin(a.z);
  }

  @Translatable
  public static Float3 asinh(Float3 a) {
    return new Float3(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z));
  }

  public static void asinh(Float3 a, Float3 result) {
    result.x = Math.asinh(a.x);
    result.y = Math.asinh(a.y);
    result.z = Math.asinh(a.z);
  }

  @Translatable
  public static Float3 atan(Float3 a) {
    return new Float3(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z));
  }

  public static void atan(Float3 a, Float3 result) {
    result.x = Math.atan(a.x);
    result.y = Math.atan(a.y);
    result.z = Math.atan(a.z);
  }

  @Translatable
  public static Float3 atan2(Float3 a, Float3 b) {
    return new Float3(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z));
  }

  public static void atan2(Float3 a, Float3 b, Float3 result) {
    result.x = Math.atan2(a.x, b.x);
    result.y = Math.atan2(a.y, b.y);
    result.z = Math.atan2(a.z, b.z);
  }

  @Translatable
  public static Float3 atanh(Float3 a) {
    return new Float3(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z));
  }

  public static void atanh(Float3 a, Float3 result) {
    result.x = Math.atanh(a.x);
    result.y = Math.atanh(a.y);
    result.z = Math.atanh(a.z);
  }

  @Translatable
  public static Float3 cbrt(Float3 a) {
    return new Float3(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z));
  }

  public static void cbrt(Float3 a, Float3 result) {
    result.x = Math.cbrt(a.x);
    result.y = Math.cbrt(a.y);
    result.z = Math.cbrt(a.z);
  }

  @Translatable
  public static Float3 ceil(Float3 a) {
    return new Float3(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z));
  }

  public static void ceil(Float3 a, Float3 result) {
    result.x = Math.ceil(a.x);
    result.y = Math.ceil(a.y);
    result.z = Math.ceil(a.z);
  }

  @Translatable
  public static Float3 copySign(Float3 a, Float3 b) {
    return new Float3(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z));
  }

  public static void copySign(Float3 a, Float3 b, Float3 result) {
    result.x = Math.copySign(a.x, b.x);
    result.y = Math.copySign(a.y, b.y);
    result.z = Math.copySign(a.z, b.z);
  }

  @Translatable
  public static Float3 cos(Float3 a) {
    return new Float3(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z));
  }

  public static void cos(Float3 a, Float3 result) {
    result.x = Math.cos(a.x);
    result.y = Math.cos(a.y);
    result.z = Math.cos(a.z);
  }

  @Translatable
  public static Float3 cosh(Float3 a) {
    return new Float3(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z));
  }

  public static void cosh(Float3 a, Float3 result) {
    result.x = Math.cosh(a.x);
    result.y = Math.cosh(a.y);
    result.z = Math.cosh(a.z);
  }

  @Translatable
  public static Float3 erf(Float3 a) {
    return new Float3(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z));
  }

  public static void erf(Float3 a, Float3 result) {
    result.x = Math.erf(a.x);
    result.y = Math.erf(a.y);
    result.z = Math.erf(a.z);
  }

  @Translatable
  public static Float3 erfc(Float3 a) {
    return new Float3(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z));
  }

  public static void erfc(Float3 a, Float3 result) {
    result.x = Math.erfc(a.x);
    result.y = Math.erfc(a.y);
    result.z = Math.erfc(a.z);
  }

  @Translatable
  public static Float3 exp(Float3 a) {
    return new Float3(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z));
  }

  public static void exp(Float3 a, Float3 result) {
    result.x = Math.exp(a.x);
    result.y = Math.exp(a.y);
    result.z = Math.exp(a.z);
  }

  @Translatable
  public static Float3 exp10(Float3 a) {
    return new Float3(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z));
  }

  public static void exp10(Float3 a, Float3 result) {
    result.x = Math.exp10(a.x);
    result.y = Math.exp10(a.y);
    result.z = Math.exp10(a.z);
  }

  @Translatable
  public static Float3 exp2(Float3 a) {
    return new Float3(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z));
  }

  public static void exp2(Float3 a, Float3 result) {
    result.x = Math.exp2(a.x);
    result.y = Math.exp2(a.y);
    result.z = Math.exp2(a.z);
  }

  @Translatable
  public static Float3 expm1(Float3 a) {
    return new Float3(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z));
  }

  public static void expm1(Float3 a, Float3 result) {
    result.x = Math.expm1(a.x);
    result.y = Math.expm1(a.y);
    result.z = Math.expm1(a.z);
  }

  @Translatable
  public static Float3 fdim(Float3 a, Float3 b) {
    return new Float3(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z));
  }

  public static void fdim(Float3 a, Float3 b, Float3 result) {
    result.x = Math.fdim(a.x, b.x);
    result.y = Math.fdim(a.y, b.y);
    result.z = Math.fdim(a.z, b.z);
  }

  @Translatable
  public static Float3 floor(Float3 a) {
    return new Float3(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z));
  }

  public static void floor(Float3 a, Float3 result) {
    result.x = Math.floor(a.x);
    result.y = Math.floor(a.y);
    result.z = Math.floor(a.z);
  }

  @Translatable
  public static Float3 fma(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z));
  }

  public static void fma(Float3 a, Float3 b, Float3 c, Float3 result) {
    result.x = Math.fma(a.x, b.x, c.x);
    result.y = Math.fma(a.y, b.y, c.y);
    result.z = Math.fma(a.z, b.z, c.z);
  }

  @Translatable
  public static Float3 fmod(Float3 a, Float3 b) {
    return new Float3(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z));
  }

  public static void fmod(Float3 a, Float3 b, Float3 result) {
    result.x = Math.fmod(a.x, b.x);
    result.y = Math.fmod(a.y, b.y);
    result.z = Math.fmod(a.z, b.z);
  }

  @Translatable
  public static Float3 fract(Float3 a) {
    return new Float3(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z));
  }

  public static void fract(Float3 a, Float3 result) {
    result.x = Math.fract(a.x);
    result.y = Math.fract(a.y);
    result.z = Math.fract(a.z);
  }

  @Translatable
  public static Float3 frexp(Float3 a) {
    return new Float3(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z));
  }

  public static void frexp(Float3 a, Float3 result) {
    result.x = Math.frexp(a.x);
    result.y = Math.frexp(a.y);
    result.z = Math.frexp(a.z);
  }

  @Translatable
  public static Float3 getExponent(Float3 a) {
    return new Float3(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z));
  }

  public static void getExponent(Float3 a, Float3 result) {
    result.x = Math.getExponent(a.x);
    result.y = Math.getExponent(a.y);
    result.z = Math.getExponent(a.z);
  }

  @Translatable
  public static Float3 hypot(Float3 a, Float3 b) {
    return new Float3(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z));
  }

  public static void hypot(Float3 a, Float3 b, Float3 result) {
    result.x = Math.hypot(a.x, b.x);
    result.y = Math.hypot(a.y, b.y);
    result.z = Math.hypot(a.z, b.z);
  }

  @Translatable
  public static Float3 lgamma(Float3 a) {
    return new Float3(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z));
  }

  public static void lgamma(Float3 a, Float3 result) {
    result.x = Math.lgamma(a.x);
    result.y = Math.lgamma(a.y);
    result.z = Math.lgamma(a.z);
  }

  @Translatable
  public static Float3 log(Float3 a) {
    return new Float3(Math.log(a.x), Math.log(a.y), Math.log(a.z));
  }

  public static void log(Float3 a, Float3 result) {
    result.x = Math.log(a.x);
    result.y = Math.log(a.y);
    result.z = Math.log(a.z);
  }

  @Translatable
  public static Float3 log10(Float3 a) {
    return new Float3(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z));
  }

  public static void log10(Float3 a, Float3 result) {
    result.x = Math.log10(a.x);
    result.y = Math.log10(a.y);
    result.z = Math.log10(a.z);
  }

  @Translatable
  public static Float3 log1p(Float3 a) {
    return new Float3(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z));
  }

  public static void log1p(Float3 a, Float3 result) {
    result.x = Math.log1p(a.x);
    result.y = Math.log1p(a.y);
    result.z = Math.log1p(a.z);
  }

  @Translatable
  public static Float3 log2(Float3 a) {
    return new Float3(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z));
  }

  public static void log2(Float3 a, Float3 result) {
    result.x = Math.log2(a.x);
    result.y = Math.log2(a.y);
    result.z = Math.log2(a.z);
  }

  @Translatable
  public static Float3 logb(Float3 a) {
    return new Float3(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z));
  }

  public static void logb(Float3 a, Float3 result) {
    result.x = Math.logb(a.x);
    result.y = Math.logb(a.y);
    result.z = Math.logb(a.z);
  }

  @Translatable
  public static Float3 mad(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z));
  }

  public static void mad(Float3 a, Float3 b, Float3 c, Float3 result) {
    result.x = Math.mad(a.x, b.x, c.x);
    result.y = Math.mad(a.y, b.y, c.y);
    result.z = Math.mad(a.z, b.z, c.z);
  }

  @Translatable
  public static Float3 nextAfter(Float3 a, Float3 b) {
    return new Float3(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z));
  }

  public static void nextAfter(Float3 a, Float3 b, Float3 result) {
    result.x = Math.nextAfter(a.x, b.x);
    result.y = Math.nextAfter(a.y, b.y);
    result.z = Math.nextAfter(a.z, b.z);
  }

  @Translatable
  public static Float3 pow(Float3 a, Float3 b) {
    return new Float3(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z));
  }

  public static void pow(Float3 a, Float3 b, Float3 result) {
    result.x = Math.pow(a.x, b.x);
    result.y = Math.pow(a.y, b.y);
    result.z = Math.pow(a.z, b.z);
  }

  @Translatable
  public static Float3 powr(Float3 a, Float3 b) {
    return new Float3(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z));
  }

  public static void powr(Float3 a, Float3 b, Float3 result) {
    result.x = Math.powr(a.x, b.x);
    result.y = Math.powr(a.y, b.y);
    result.z = Math.powr(a.z, b.z);
  }

  @Translatable
  public static Float3 remainder(Float3 a, Float3 b) {
    return new Float3(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z));
  }

  public static void remainder(Float3 a, Float3 b, Float3 result) {
    result.x = Math.remainder(a.x, b.x);
    result.y = Math.remainder(a.y, b.y);
    result.z = Math.remainder(a.z, b.z);
  }

  @Translatable
  public static Float3 rint(Float3 a) {
    return new Float3(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z));
  }

  public static void rint(Float3 a, Float3 result) {
    result.x = Math.rint(a.x);
    result.y = Math.rint(a.y);
    result.z = Math.rint(a.z);
  }

  @Translatable
  public static Float3 round(Float3 a) {
    return new Float3(Math.round(a.x), Math.round(a.y), Math.round(a.z));
  }

  public static void round(Float3 a, Float3 result) {
    result.x = Math.round(a.x);
    result.y = Math.round(a.y);
    result.z = Math.round(a.z);
  }

  @Translatable
  public static Float3 rsqrt(Float3 a) {
    return new Float3(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z));
  }

  public static void rsqrt(Float3 a, Float3 result) {
    result.x = Math.rsqrt(a.x);
    result.y = Math.rsqrt(a.y);
    result.z = Math.rsqrt(a.z);
  }

  @Translatable
  public static Float3 signum(Float3 a) {
    return new Float3(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z));
  }

  public static void signum(Float3 a, Float3 result) {
    result.x = Math.signum(a.x);
    result.y = Math.signum(a.y);
    result.z = Math.signum(a.z);
  }

  @Translatable
  public static Float3 sin(Float3 a) {
    return new Float3(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z));
  }

  public static void sin(Float3 a, Float3 result) {
    result.x = Math.sin(a.x);
    result.y = Math.sin(a.y);
    result.z = Math.sin(a.z);
  }

  @Translatable
  public static Float3 sinh(Float3 a) {
    return new Float3(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z));
  }

  public static void sinh(Float3 a, Float3 result) {
    result.x = Math.sinh(a.x);
    result.y = Math.sinh(a.y);
    result.z = Math.sinh(a.z);
  }

  @Translatable
  public static Float3 smoothStep(Float3 a, Float3 b, Float3 c) {
    return new Float3(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z));
  }

  public static void smoothStep(Float3 a, Float3 b, Float3 c, Float3 result) {
    result.x = Math.smoothStep(a.x, b.x, c.x);
    result.y = Math.smoothStep(a.y, b.y, c.y);
    result.z = Math.smoothStep(a.z, b.z, c.z);
  }

  @Translatable
  public static Float3 sqrt(Float3 a) {
    return new Float3(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z));
  }

  public static void sqrt(Float3 a, Float3 result) {
    result.x = Math.sqrt(a.x);
    result.y = Math.sqrt(a.y);
    result.z = Math.sqrt(a.z);
  }

  @Translatable
  public static Float3 step(Float3 a, Float3 b) {
    return new Float3(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z));
  }

  public static void step(Float3 a, Float3 b, Float3 result) {
    result.x = Math.step(a.x, b.x);
    result.y = Math.step(a.y, b.y);
    result.z = Math.step(a.z, b.z);
  }

  @Translatable
  public static Float3 tan(Float3 a) {
    return new Float3(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z));
  }

  public static void tan(Float3 a, Float3 result) {
    result.x = Math.tan(a.x);
    result.y = Math.tan(a.y);
    result.z = Math.tan(a.z);
  }

  @Translatable
  public static Float3 tanh(Float3 a) {
    return new Float3(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z));
  }

  public static void tanh(Float3 a, Float3 result) {
    result.x = Math.tanh(a.x);
    result.y = Math.tanh(a.y);
    result.z = Math.tanh(a.z);
  }

  @Translatable
  public static Float3 tgamma(Float3 a) {
    return new Float3(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z));
  }

  public static void tgamma(Float3 a, Float3 result) {
    result.x = Math.tgamma(a.x);
    result.y = Math.tgamma(a.y);
    result.z = Math.tgamma(a.z);
  }

  @Translatable
  public static Float3 toDegrees(Float3 a) {
    return new Float3(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z));
  }

  public static void toDegrees(Float3 a, Float3 result) {
    result.x = Math.toDegrees(a.x);
    result.y = Math.toDegrees(a.y);
    result.z = Math.toDegrees(a.z);
  }

  @Translatable
  public static Float3 toRadians(Float3 a) {
    return new Float3(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z));
  }

  public static void toRadians(Float3 a, Float3 result) {
    result.x = Math.toRadians(a.x);
    result.y = Math.toRadians(a.y);
    result.z = Math.toRadians(a.z);
  }

  @Translatable
  public static Float3 trunc(Float3 a) {
    return new Float3(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z));
  }

  public static void trunc(Float3 a, Float3 result) {
    result.x = Math.trunc(a.x);
    result.y = Math.trunc(a.y);
    result.z = Math.trunc(a.z);
  }

  @Translatable
  public static Float3 scalb(Float3 a, Int3 n) {
    return new Float3(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z));
  }

  public static void scalb(Float3 a, Int3 n, Float3 result) {
    result.x = Math.scalb(a.x, n.x);
    result.y = Math.scalb(a.y, n.y);
    result.z = Math.scalb(a.z, n.z);
  }

  @Translatable
  public static Float3 ldexp(Float3 a, Int3 n) {
    return new Float3(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z));
  }

  public static void ldexp(Float3 a, Int3 n, Float3 result) {
    result.x = Math.ldexp(a.x, n.x);
    result.y = Math.ldexp(a.y, n.y);
    result.z = Math.ldexp(a.z, n.z);
  }

  @Translatable
  public static Float3 pown(Float3 a, Int3 b) {
    return new Float3(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z));
  }

  public static void pown(Float3 a, Int3 b, Float3 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
    result.z = Math.pown(a.z, b.z);
  }

  @Translatable
  public static Float3 rootn(Float3 a, Int3 b) {
    return new Float3(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z));
  }

  public static void rootn(Float3 a, Int3 b, Float3 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
    result.z = Math.pown(a.z, b.z);
  }

  @Translatable
  public static Float3 smoothStep(Float3 a, Float3 b, float c) {
    return new Float3(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c));
  }

  public static void smoothStep(Float3 a, Float3 b, float c, Float3 result) {
    result.x = Math.smoothStep(a.x, b.x, c);
    result.y = Math.smoothStep(a.y, b.y, c);
    result.z = Math.smoothStep(a.z, b.z, c);
  }
}
