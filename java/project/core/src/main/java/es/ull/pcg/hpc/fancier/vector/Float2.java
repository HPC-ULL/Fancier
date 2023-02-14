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


public class Float2 {
  @Translatable
  public float x;
  @Translatable
  public float y;

  @Translatable
  public Float2() {}

  @Translatable
  public Float2(float x, float y) {
    set(x, y);
  }

  @Translatable
  public void set(float x, float y) {
    this.x = x;
    this.y = y;
  }

  @Translatable
  public Float2(float v) {
    this(v, v);
  }

  @Translatable
  public void set(float v) {
    set(v, v);
  }

  @Translatable
  public Float2(Float2 vec1) {
    this(vec1.x, vec1.y);
  }

  @Translatable
  public void set(Float2 vec1) {
    set(vec1.x, vec1.y);
  }

  @Translatable
  public Float2 value() {
    return new Float2(this);
  }

  @Translatable
  public Byte2 convertByte2() {
    return new Byte2((byte)(x), (byte)(y));
  }

  public void convertByte2(Byte2 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
  }

  @Translatable
  public Short2 convertShort2() {
    return new Short2((short)(x), (short)(y));
  }

  public void convertShort2(Short2 result) {
    result.x = (short)(x);
    result.y = (short)(y);
  }

  @Translatable
  public Int2 convertInt2() {
    return new Int2((int)(x), (int)(y));
  }

  public void convertInt2(Int2 result) {
    result.x = (int)(x);
    result.y = (int)(y);
  }

  @Translatable
  public Long2 convertLong2() {
    return new Long2((long)(x), (long)(y));
  }

  public void convertLong2(Long2 result) {
    result.x = (long)(x);
    result.y = (long)(y);
  }

  @Translatable
  public Double2 convertDouble2() {
    return new Double2((double)(x), (double)(y));
  }

  public void convertDouble2(Double2 result) {
    result.x = (double)(x);
    result.y = (double)(y);
  }

  @Translatable
  public static Int2 isEqual(Float2 a, Float2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static void isEqual(Float2 a, Float2 b, Int2 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
  }

  @Translatable
  public static Int2 isNotEqual(Float2 a, Float2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static void isNotEqual(Float2 a, Float2 b, Int2 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
  }

  @Translatable
  public static Int2 isGreater(Float2 a, Float2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static void isGreater(Float2 a, Float2 b, Int2 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
  }

  @Translatable
  public static Int2 isGreaterEqual(Float2 a, Float2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static void isGreaterEqual(Float2 a, Float2 b, Int2 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
  }

  @Translatable
  public static Int2 isLess(Float2 a, Float2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static void isLess(Float2 a, Float2 b, Int2 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
  }

  @Translatable
  public static Int2 isLessEqual(Float2 a, Float2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static void isLessEqual(Float2 a, Float2 b, Int2 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
  }

  @Translatable
  public static Float2 select(Float2 a, Float2 b, Int2 c) {
    return new Float2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static void select(Float2 a, Float2 b, Int2 c, Float2 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
  }

  @Translatable
  public static Int2 isFinite(Float2 a) {
    return new Int2(Math.isFinite(a.x), Math.isFinite(a.y));
  }

  public static void isFinite(Float2 a, Int2 result) {
    result.x = Math.isFinite(a.x);
    result.y = Math.isFinite(a.y);
  }

  @Translatable
  public static Int2 isInf(Float2 a) {
    return new Int2(Math.isInf(a.x), Math.isInf(a.y));
  }

  public static void isInf(Float2 a, Int2 result) {
    result.x = Math.isInf(a.x);
    result.y = Math.isInf(a.y);
  }

  @Translatable
  public static Int2 isNaN(Float2 a) {
    return new Int2(Math.isNaN(a.x), Math.isNaN(a.y));
  }

  public static void isNaN(Float2 a, Int2 result) {
    result.x = Math.isNaN(a.x);
    result.y = Math.isNaN(a.y);
  }

  @Translatable
  public static Int2 isNormal(Float2 a) {
    return new Int2(Math.isNormal(a.x), Math.isNormal(a.y));
  }

  public static void isNormal(Float2 a, Int2 result) {
    result.x = Math.isNormal(a.x);
    result.y = Math.isNormal(a.y);
  }

  @Translatable
  public static Int2 isOrdered(Float2 a, Float2 b) {
    return new Int2(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y));
  }

  public static void isOrdered(Float2 a, Float2 b, Int2 result) {
    result.x = Math.isOrdered(a.x, b.x);
    result.y = Math.isOrdered(a.y, b.y);
  }

  @Translatable
  public static Int2 isUnordered(Float2 a, Float2 b) {
    return new Int2(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y));
  }

  public static void isUnordered(Float2 a, Float2 b, Int2 result) {
    result.x = Math.isUnordered(a.x, b.x);
    result.y = Math.isUnordered(a.y, b.y);
  }

  @Translatable
  public static int any(Float2 a) {
    return (a.x != 0.0f || a.y != 0.0f)? 1 : 0;
  }

  @Translatable
  public static int all(Float2 a) {
    return (a.x == 0.0f || a.y == 0.0f)? 0 : 1;
  }

  @Translatable
  public static Float2 neg(Float2 a) {
    return new Float2((float)(-a.x), (float)(-a.y));
  }

  public static void neg(Float2 a, Float2 result) {
    result.x = (float)(-a.x);
    result.y = (float)(-a.y);
  }

  @Translatable
  public static Float2 add(Float2 a, Float2 b) {
    return new Float2((float)(a.x + b.x), (float)(a.y + b.y));
  }

  public static void add(Float2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x + b.x);
    result.y = (float)(a.y + b.y);
  }

  @Translatable
  public static Float2 sub(Float2 a, Float2 b) {
    return new Float2((float)(a.x - b.x), (float)(a.y - b.y));
  }

  public static void sub(Float2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x - b.x);
    result.y = (float)(a.y - b.y);
  }

  @Translatable
  public static Double2 mul(Float2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static void mul(Float2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
  }

  @Translatable
  public static Double2 mul(Float2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static void mul(Float2 a, double k, Double2 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
  }

  @Translatable
  public static Float2 mul(Float2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static void mul(Float2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
  }

  @Translatable
  public static Float2 mul(Float2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static void mul(Float2 a, float k, Float2 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
  }

  @Translatable
  public static Double2 div(Float2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static void div(Float2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
  }

  @Translatable
  public static Double2 div(Float2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static void div(Float2 a, double k, Double2 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
  }

  @Translatable
  public static Float2 div(Float2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static void div(Float2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
  }

  @Translatable
  public static Float2 div(Float2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static void div(Float2 a, float k, Float2 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
  }

  @Translatable
  public static float dot(Float2 a, Float2 b) {
    return (float)(a.x * b.x + a.y * b.y);
  }

  @Translatable
  public static double distance(Float2 a, Float2 b) {
    return distance(a, b, new Float2());
  }

  @Translatable
  public static double distance(Float2 a, Float2 b, Float2 tmp) {
    sub(a, b, tmp);
    return length(tmp);
  }

  @Translatable
  public static double length(Float2 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y);
  }

  @Translatable
  public static Float2 normalize(Float2 a) {
    Float2 result = new Float2();
    normalize(a, result);
    return result;
  }

  public static void normalize(Float2 a, Float2 result) {
    double len = length(a);
    result.x = (float)(a.x / len);
    result.y = (float)(a.y / len);
  }

  @Translatable
  public static Float2 abs(Float2 a) {
    return new Float2(Math.abs(a.x), Math.abs(a.y));
  }

  public static void abs(Float2 a, Float2 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
  }

  @Translatable
  public static Float2 clamp(Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static void clamp(Float2 a, Float2 b, Float2 c, Float2 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
  }

  @Translatable
  public static Float2 max(Float2 a, Float2 b) {
    return new Float2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static void max(Float2 a, Float2 b, Float2 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
  }

  @Translatable
  public static Float2 maxMag(Float2 a, Float2 b) {
    return new Float2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static void maxMag(Float2 a, Float2 b, Float2 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
  }

  @Translatable
  public static Float2 min(Float2 a, Float2 b) {
    return new Float2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static void min(Float2 a, Float2 b, Float2 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
  }

  @Translatable
  public static Float2 minMag(Float2 a, Float2 b) {
    return new Float2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static void minMag(Float2 a, Float2 b, Float2 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
  }

  @Translatable
  public static Float2 mix(Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static void mix(Float2 a, Float2 b, Float2 c, Float2 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
  }

  @Translatable
  public static Float2 clamp(Float2 v, float min, float max) {
    return new Float2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static void clamp(Float2 v, float min, float max, Float2 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
  }

  @Translatable
  public static Float2 max(Float2 x, float y) {
    return new Float2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static void max(Float2 x, float y, Float2 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
  }

  @Translatable
  public static Float2 min(Float2 x, float y) {
    return new Float2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static void min(Float2 x, float y, Float2 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
  }

  @Translatable
  public static Float2 mix(Float2 x, Float2 y, float a) {
    return new Float2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static void mix(Float2 x, Float2 y, float a, Float2 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
  }

  @Translatable
  public static Float2 acos(Float2 a) {
    return new Float2(Math.acos(a.x), Math.acos(a.y));
  }

  public static void acos(Float2 a, Float2 result) {
    result.x = Math.acos(a.x);
    result.y = Math.acos(a.y);
  }

  @Translatable
  public static Float2 acosh(Float2 a) {
    return new Float2(Math.acosh(a.x), Math.acosh(a.y));
  }

  public static void acosh(Float2 a, Float2 result) {
    result.x = Math.acosh(a.x);
    result.y = Math.acosh(a.y);
  }

  @Translatable
  public static Float2 asin(Float2 a) {
    return new Float2(Math.asin(a.x), Math.asin(a.y));
  }

  public static void asin(Float2 a, Float2 result) {
    result.x = Math.asin(a.x);
    result.y = Math.asin(a.y);
  }

  @Translatable
  public static Float2 asinh(Float2 a) {
    return new Float2(Math.asinh(a.x), Math.asinh(a.y));
  }

  public static void asinh(Float2 a, Float2 result) {
    result.x = Math.asinh(a.x);
    result.y = Math.asinh(a.y);
  }

  @Translatable
  public static Float2 atan(Float2 a) {
    return new Float2(Math.atan(a.x), Math.atan(a.y));
  }

  public static void atan(Float2 a, Float2 result) {
    result.x = Math.atan(a.x);
    result.y = Math.atan(a.y);
  }

  @Translatable
  public static Float2 atan2(Float2 a, Float2 b) {
    return new Float2(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y));
  }

  public static void atan2(Float2 a, Float2 b, Float2 result) {
    result.x = Math.atan2(a.x, b.x);
    result.y = Math.atan2(a.y, b.y);
  }

  @Translatable
  public static Float2 atanh(Float2 a) {
    return new Float2(Math.atanh(a.x), Math.atanh(a.y));
  }

  public static void atanh(Float2 a, Float2 result) {
    result.x = Math.atanh(a.x);
    result.y = Math.atanh(a.y);
  }

  @Translatable
  public static Float2 cbrt(Float2 a) {
    return new Float2(Math.cbrt(a.x), Math.cbrt(a.y));
  }

  public static void cbrt(Float2 a, Float2 result) {
    result.x = Math.cbrt(a.x);
    result.y = Math.cbrt(a.y);
  }

  @Translatable
  public static Float2 ceil(Float2 a) {
    return new Float2(Math.ceil(a.x), Math.ceil(a.y));
  }

  public static void ceil(Float2 a, Float2 result) {
    result.x = Math.ceil(a.x);
    result.y = Math.ceil(a.y);
  }

  @Translatable
  public static Float2 copySign(Float2 a, Float2 b) {
    return new Float2(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y));
  }

  public static void copySign(Float2 a, Float2 b, Float2 result) {
    result.x = Math.copySign(a.x, b.x);
    result.y = Math.copySign(a.y, b.y);
  }

  @Translatable
  public static Float2 cos(Float2 a) {
    return new Float2(Math.cos(a.x), Math.cos(a.y));
  }

  public static void cos(Float2 a, Float2 result) {
    result.x = Math.cos(a.x);
    result.y = Math.cos(a.y);
  }

  @Translatable
  public static Float2 cosh(Float2 a) {
    return new Float2(Math.cosh(a.x), Math.cosh(a.y));
  }

  public static void cosh(Float2 a, Float2 result) {
    result.x = Math.cosh(a.x);
    result.y = Math.cosh(a.y);
  }

  @Translatable
  public static Float2 erf(Float2 a) {
    return new Float2(Math.erf(a.x), Math.erf(a.y));
  }

  public static void erf(Float2 a, Float2 result) {
    result.x = Math.erf(a.x);
    result.y = Math.erf(a.y);
  }

  @Translatable
  public static Float2 erfc(Float2 a) {
    return new Float2(Math.erfc(a.x), Math.erfc(a.y));
  }

  public static void erfc(Float2 a, Float2 result) {
    result.x = Math.erfc(a.x);
    result.y = Math.erfc(a.y);
  }

  @Translatable
  public static Float2 exp(Float2 a) {
    return new Float2(Math.exp(a.x), Math.exp(a.y));
  }

  public static void exp(Float2 a, Float2 result) {
    result.x = Math.exp(a.x);
    result.y = Math.exp(a.y);
  }

  @Translatable
  public static Float2 exp10(Float2 a) {
    return new Float2(Math.exp10(a.x), Math.exp10(a.y));
  }

  public static void exp10(Float2 a, Float2 result) {
    result.x = Math.exp10(a.x);
    result.y = Math.exp10(a.y);
  }

  @Translatable
  public static Float2 exp2(Float2 a) {
    return new Float2(Math.exp2(a.x), Math.exp2(a.y));
  }

  public static void exp2(Float2 a, Float2 result) {
    result.x = Math.exp2(a.x);
    result.y = Math.exp2(a.y);
  }

  @Translatable
  public static Float2 expm1(Float2 a) {
    return new Float2(Math.expm1(a.x), Math.expm1(a.y));
  }

  public static void expm1(Float2 a, Float2 result) {
    result.x = Math.expm1(a.x);
    result.y = Math.expm1(a.y);
  }

  @Translatable
  public static Float2 fdim(Float2 a, Float2 b) {
    return new Float2(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y));
  }

  public static void fdim(Float2 a, Float2 b, Float2 result) {
    result.x = Math.fdim(a.x, b.x);
    result.y = Math.fdim(a.y, b.y);
  }

  @Translatable
  public static Float2 floor(Float2 a) {
    return new Float2(Math.floor(a.x), Math.floor(a.y));
  }

  public static void floor(Float2 a, Float2 result) {
    result.x = Math.floor(a.x);
    result.y = Math.floor(a.y);
  }

  @Translatable
  public static Float2 fma(Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y));
  }

  public static void fma(Float2 a, Float2 b, Float2 c, Float2 result) {
    result.x = Math.fma(a.x, b.x, c.x);
    result.y = Math.fma(a.y, b.y, c.y);
  }

  @Translatable
  public static Float2 fmod(Float2 a, Float2 b) {
    return new Float2(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y));
  }

  public static void fmod(Float2 a, Float2 b, Float2 result) {
    result.x = Math.fmod(a.x, b.x);
    result.y = Math.fmod(a.y, b.y);
  }

  @Translatable
  public static Float2 fract(Float2 a) {
    return new Float2(Math.fract(a.x), Math.fract(a.y));
  }

  public static void fract(Float2 a, Float2 result) {
    result.x = Math.fract(a.x);
    result.y = Math.fract(a.y);
  }

  @Translatable
  public static Float2 frexp(Float2 a) {
    return new Float2(Math.frexp(a.x), Math.frexp(a.y));
  }

  public static void frexp(Float2 a, Float2 result) {
    result.x = Math.frexp(a.x);
    result.y = Math.frexp(a.y);
  }

  @Translatable
  public static Float2 getExponent(Float2 a) {
    return new Float2(Math.getExponent(a.x), Math.getExponent(a.y));
  }

  public static void getExponent(Float2 a, Float2 result) {
    result.x = Math.getExponent(a.x);
    result.y = Math.getExponent(a.y);
  }

  @Translatable
  public static Float2 hypot(Float2 a, Float2 b) {
    return new Float2(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y));
  }

  public static void hypot(Float2 a, Float2 b, Float2 result) {
    result.x = Math.hypot(a.x, b.x);
    result.y = Math.hypot(a.y, b.y);
  }

  @Translatable
  public static Float2 lgamma(Float2 a) {
    return new Float2(Math.lgamma(a.x), Math.lgamma(a.y));
  }

  public static void lgamma(Float2 a, Float2 result) {
    result.x = Math.lgamma(a.x);
    result.y = Math.lgamma(a.y);
  }

  @Translatable
  public static Float2 log(Float2 a) {
    return new Float2(Math.log(a.x), Math.log(a.y));
  }

  public static void log(Float2 a, Float2 result) {
    result.x = Math.log(a.x);
    result.y = Math.log(a.y);
  }

  @Translatable
  public static Float2 log10(Float2 a) {
    return new Float2(Math.log10(a.x), Math.log10(a.y));
  }

  public static void log10(Float2 a, Float2 result) {
    result.x = Math.log10(a.x);
    result.y = Math.log10(a.y);
  }

  @Translatable
  public static Float2 log1p(Float2 a) {
    return new Float2(Math.log1p(a.x), Math.log1p(a.y));
  }

  public static void log1p(Float2 a, Float2 result) {
    result.x = Math.log1p(a.x);
    result.y = Math.log1p(a.y);
  }

  @Translatable
  public static Float2 log2(Float2 a) {
    return new Float2(Math.log2(a.x), Math.log2(a.y));
  }

  public static void log2(Float2 a, Float2 result) {
    result.x = Math.log2(a.x);
    result.y = Math.log2(a.y);
  }

  @Translatable
  public static Float2 logb(Float2 a) {
    return new Float2(Math.logb(a.x), Math.logb(a.y));
  }

  public static void logb(Float2 a, Float2 result) {
    result.x = Math.logb(a.x);
    result.y = Math.logb(a.y);
  }

  @Translatable
  public static Float2 mad(Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y));
  }

  public static void mad(Float2 a, Float2 b, Float2 c, Float2 result) {
    result.x = Math.mad(a.x, b.x, c.x);
    result.y = Math.mad(a.y, b.y, c.y);
  }

  @Translatable
  public static Float2 nextAfter(Float2 a, Float2 b) {
    return new Float2(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y));
  }

  public static void nextAfter(Float2 a, Float2 b, Float2 result) {
    result.x = Math.nextAfter(a.x, b.x);
    result.y = Math.nextAfter(a.y, b.y);
  }

  @Translatable
  public static Float2 pow(Float2 a, Float2 b) {
    return new Float2(Math.pow(a.x, b.x), Math.pow(a.y, b.y));
  }

  public static void pow(Float2 a, Float2 b, Float2 result) {
    result.x = Math.pow(a.x, b.x);
    result.y = Math.pow(a.y, b.y);
  }

  @Translatable
  public static Float2 powr(Float2 a, Float2 b) {
    return new Float2(Math.powr(a.x, b.x), Math.powr(a.y, b.y));
  }

  public static void powr(Float2 a, Float2 b, Float2 result) {
    result.x = Math.powr(a.x, b.x);
    result.y = Math.powr(a.y, b.y);
  }

  @Translatable
  public static Float2 remainder(Float2 a, Float2 b) {
    return new Float2(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y));
  }

  public static void remainder(Float2 a, Float2 b, Float2 result) {
    result.x = Math.remainder(a.x, b.x);
    result.y = Math.remainder(a.y, b.y);
  }

  @Translatable
  public static Float2 rint(Float2 a) {
    return new Float2(Math.rint(a.x), Math.rint(a.y));
  }

  public static void rint(Float2 a, Float2 result) {
    result.x = Math.rint(a.x);
    result.y = Math.rint(a.y);
  }

  @Translatable
  public static Float2 round(Float2 a) {
    return new Float2(Math.round(a.x), Math.round(a.y));
  }

  public static void round(Float2 a, Float2 result) {
    result.x = Math.round(a.x);
    result.y = Math.round(a.y);
  }

  @Translatable
  public static Float2 rsqrt(Float2 a) {
    return new Float2(Math.rsqrt(a.x), Math.rsqrt(a.y));
  }

  public static void rsqrt(Float2 a, Float2 result) {
    result.x = Math.rsqrt(a.x);
    result.y = Math.rsqrt(a.y);
  }

  @Translatable
  public static Float2 signum(Float2 a) {
    return new Float2(Math.signum(a.x), Math.signum(a.y));
  }

  public static void signum(Float2 a, Float2 result) {
    result.x = Math.signum(a.x);
    result.y = Math.signum(a.y);
  }

  @Translatable
  public static Float2 sin(Float2 a) {
    return new Float2(Math.sin(a.x), Math.sin(a.y));
  }

  public static void sin(Float2 a, Float2 result) {
    result.x = Math.sin(a.x);
    result.y = Math.sin(a.y);
  }

  @Translatable
  public static Float2 sinh(Float2 a) {
    return new Float2(Math.sinh(a.x), Math.sinh(a.y));
  }

  public static void sinh(Float2 a, Float2 result) {
    result.x = Math.sinh(a.x);
    result.y = Math.sinh(a.y);
  }

  @Translatable
  public static Float2 smoothStep(Float2 a, Float2 b, Float2 c) {
    return new Float2(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y));
  }

  public static void smoothStep(Float2 a, Float2 b, Float2 c, Float2 result) {
    result.x = Math.smoothStep(a.x, b.x, c.x);
    result.y = Math.smoothStep(a.y, b.y, c.y);
  }

  @Translatable
  public static Float2 sqrt(Float2 a) {
    return new Float2(Math.sqrt(a.x), Math.sqrt(a.y));
  }

  public static void sqrt(Float2 a, Float2 result) {
    result.x = Math.sqrt(a.x);
    result.y = Math.sqrt(a.y);
  }

  @Translatable
  public static Float2 step(Float2 a, Float2 b) {
    return new Float2(Math.step(a.x, b.x), Math.step(a.y, b.y));
  }

  public static void step(Float2 a, Float2 b, Float2 result) {
    result.x = Math.step(a.x, b.x);
    result.y = Math.step(a.y, b.y);
  }

  @Translatable
  public static Float2 tan(Float2 a) {
    return new Float2(Math.tan(a.x), Math.tan(a.y));
  }

  public static void tan(Float2 a, Float2 result) {
    result.x = Math.tan(a.x);
    result.y = Math.tan(a.y);
  }

  @Translatable
  public static Float2 tanh(Float2 a) {
    return new Float2(Math.tanh(a.x), Math.tanh(a.y));
  }

  public static void tanh(Float2 a, Float2 result) {
    result.x = Math.tanh(a.x);
    result.y = Math.tanh(a.y);
  }

  @Translatable
  public static Float2 tgamma(Float2 a) {
    return new Float2(Math.tgamma(a.x), Math.tgamma(a.y));
  }

  public static void tgamma(Float2 a, Float2 result) {
    result.x = Math.tgamma(a.x);
    result.y = Math.tgamma(a.y);
  }

  @Translatable
  public static Float2 toDegrees(Float2 a) {
    return new Float2(Math.toDegrees(a.x), Math.toDegrees(a.y));
  }

  public static void toDegrees(Float2 a, Float2 result) {
    result.x = Math.toDegrees(a.x);
    result.y = Math.toDegrees(a.y);
  }

  @Translatable
  public static Float2 toRadians(Float2 a) {
    return new Float2(Math.toRadians(a.x), Math.toRadians(a.y));
  }

  public static void toRadians(Float2 a, Float2 result) {
    result.x = Math.toRadians(a.x);
    result.y = Math.toRadians(a.y);
  }

  @Translatable
  public static Float2 trunc(Float2 a) {
    return new Float2(Math.trunc(a.x), Math.trunc(a.y));
  }

  public static void trunc(Float2 a, Float2 result) {
    result.x = Math.trunc(a.x);
    result.y = Math.trunc(a.y);
  }

  @Translatable
  public static Float2 scalb(Float2 a, Int2 n) {
    return new Float2(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y));
  }

  public static void scalb(Float2 a, Int2 n, Float2 result) {
    result.x = Math.scalb(a.x, n.x);
    result.y = Math.scalb(a.y, n.y);
  }

  @Translatable
  public static Float2 ldexp(Float2 a, Int2 n) {
    return new Float2(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y));
  }

  public static void ldexp(Float2 a, Int2 n, Float2 result) {
    result.x = Math.ldexp(a.x, n.x);
    result.y = Math.ldexp(a.y, n.y);
  }

  @Translatable
  public static Float2 pown(Float2 a, Int2 b) {
    return new Float2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static void pown(Float2 a, Int2 b, Float2 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
  }

  @Translatable
  public static Float2 rootn(Float2 a, Int2 b) {
    return new Float2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static void rootn(Float2 a, Int2 b, Float2 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
  }

  @Translatable
  public static Float2 smoothStep(Float2 a, Float2 b, float c) {
    return new Float2(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c));
  }

  public static void smoothStep(Float2 a, Float2 b, float c, Float2 result) {
    result.x = Math.smoothStep(a.x, b.x, c);
    result.y = Math.smoothStep(a.y, b.y, c);
  }
}
