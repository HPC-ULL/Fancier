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

public class Double2 {
  public double x;
  public double y;

  public Double2() {}

  public Double2(double x, double y) {
    set(x, y);
  }

  public void set(double x, double y) {
    this.x = x;
    this.y = y;
  }

  public Double2(double v) {
    this(v, v);
  }

  public void set(double v) {
    set(v, v);
  }

  public Double2(Double2 vec1) {
    this(vec1.x, vec1.y);
  }

  public void set(Double2 vec1) {
    set(vec1.x, vec1.y);
  }

  public Byte2 convertByte2() {
    return new Byte2((byte)(x), (byte)(y));
  }

  public void convertByte2(Byte2 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
  }

  public Short2 convertShort2() {
    return new Short2((short)(x), (short)(y));
  }

  public void convertShort2(Short2 result) {
    result.x = (short)(x);
    result.y = (short)(y);
  }

  public Int2 convertInt2() {
    return new Int2((int)(x), (int)(y));
  }

  public void convertInt2(Int2 result) {
    result.x = (int)(x);
    result.y = (int)(y);
  }

  public Long2 convertLong2() {
    return new Long2((long)(x), (long)(y));
  }

  public void convertLong2(Long2 result) {
    result.x = (long)(x);
    result.y = (long)(y);
  }

  public Float2 convertFloat2() {
    return new Float2((float)(x), (float)(y));
  }

  public void convertFloat2(Float2 result) {
    result.x = (float)(x);
    result.y = (float)(y);
  }

  public static Int2 isEqual(Double2 a, Double2 b) {
    return new Int2(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0);
  }

  public static void isEqual(Double2 a, Double2 b, Int2 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
  }

  public static Int2 isNotEqual(Double2 a, Double2 b) {
    return new Int2(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0);
  }

  public static void isNotEqual(Double2 a, Double2 b, Int2 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
  }

  public static Int2 isGreater(Double2 a, Double2 b) {
    return new Int2(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0);
  }

  public static void isGreater(Double2 a, Double2 b, Int2 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
  }

  public static Int2 isGreaterEqual(Double2 a, Double2 b) {
    return new Int2(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0);
  }

  public static void isGreaterEqual(Double2 a, Double2 b, Int2 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
  }

  public static Int2 isLess(Double2 a, Double2 b) {
    return new Int2(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0);
  }

  public static void isLess(Double2 a, Double2 b, Int2 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
  }

  public static Int2 isLessEqual(Double2 a, Double2 b) {
    return new Int2(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0);
  }

  public static void isLessEqual(Double2 a, Double2 b, Int2 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
  }

  public static Double2 select(Double2 a, Double2 b, Int2 c) {
    return new Double2(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y));
  }

  public static void select(Double2 a, Double2 b, Int2 c, Double2 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
  }

  public static Int2 isFinite(Double2 a) {
    return new Int2(Math.isFinite(a.x), Math.isFinite(a.y));
  }

  public static void isFinite(Double2 a, Int2 result) {
    result.x = Math.isFinite(a.x);
    result.y = Math.isFinite(a.y);
  }

  public static Int2 isInf(Double2 a) {
    return new Int2(Math.isInf(a.x), Math.isInf(a.y));
  }

  public static void isInf(Double2 a, Int2 result) {
    result.x = Math.isInf(a.x);
    result.y = Math.isInf(a.y);
  }

  public static Int2 isNaN(Double2 a) {
    return new Int2(Math.isNaN(a.x), Math.isNaN(a.y));
  }

  public static void isNaN(Double2 a, Int2 result) {
    result.x = Math.isNaN(a.x);
    result.y = Math.isNaN(a.y);
  }

  public static Int2 isNormal(Double2 a) {
    return new Int2(Math.isNormal(a.x), Math.isNormal(a.y));
  }

  public static void isNormal(Double2 a, Int2 result) {
    result.x = Math.isNormal(a.x);
    result.y = Math.isNormal(a.y);
  }

  public static Int2 isOrdered(Double2 a, Double2 b) {
    return new Int2(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y));
  }

  public static void isOrdered(Double2 a, Double2 b, Int2 result) {
    result.x = Math.isOrdered(a.x, b.x);
    result.y = Math.isOrdered(a.y, b.y);
  }

  public static Int2 isUnordered(Double2 a, Double2 b) {
    return new Int2(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y));
  }

  public static void isUnordered(Double2 a, Double2 b, Int2 result) {
    result.x = Math.isUnordered(a.x, b.x);
    result.y = Math.isUnordered(a.y, b.y);
  }

  public static int any(Double2 a) {
    return (a.x != 0.0 || a.y != 0.0)? 1 : 0;
  }

  public static int all(Double2 a) {
    return (a.x == 0.0 || a.y == 0.0)? 0 : 1;
  }

  public static Double2 neg(Double2 a) {
    return new Double2((double)(-a.x), (double)(-a.y));
  }

  public static void neg(Double2 a, Double2 result) {
    result.x = (double)(-a.x);
    result.y = (double)(-a.y);
  }

  public static Double2 add(Double2 a, Double2 b) {
    return new Double2((double)(a.x + b.x), (double)(a.y + b.y));
  }

  public static void add(Double2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x + b.x);
    result.y = (double)(a.y + b.y);
  }

  public static Double2 sub(Double2 a, Double2 b) {
    return new Double2((double)(a.x - b.x), (double)(a.y - b.y));
  }

  public static void sub(Double2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x - b.x);
    result.y = (double)(a.y - b.y);
  }

  public static Double2 mul(Double2 a, Double2 b) {
    return new Double2((double)(a.x * b.x), (double)(a.y * b.y));
  }

  public static void mul(Double2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
  }

  public static Double2 mul(Double2 a, double k) {
    return new Double2((double)(a.x * k), (double)(a.y * k));
  }

  public static void mul(Double2 a, double k, Double2 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
  }

  public static Float2 mul(Double2 a, Float2 b) {
    return new Float2((float)(a.x * b.x), (float)(a.y * b.y));
  }

  public static void mul(Double2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
  }

  public static Float2 mul(Double2 a, float k) {
    return new Float2((float)(a.x * k), (float)(a.y * k));
  }

  public static void mul(Double2 a, float k, Float2 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
  }

  public static Double2 div(Double2 a, Double2 b) {
    return new Double2((double)(a.x / b.x), (double)(a.y / b.y));
  }

  public static void div(Double2 a, Double2 b, Double2 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
  }

  public static Double2 div(Double2 a, double k) {
    return new Double2((double)(a.x / k), (double)(a.y / k));
  }

  public static void div(Double2 a, double k, Double2 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
  }

  public static Float2 div(Double2 a, Float2 b) {
    return new Float2((float)(a.x / b.x), (float)(a.y / b.y));
  }

  public static void div(Double2 a, Float2 b, Float2 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
  }

  public static Float2 div(Double2 a, float k) {
    return new Float2((float)(a.x / k), (float)(a.y / k));
  }

  public static void div(Double2 a, float k, Float2 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
  }

  public static double dot(Double2 a, Double2 b) {
    return (double)(a.x * b.x + a.y * b.y);
  }

  public static double distance(Double2 a, Double2 b) {
    return distance(a, b, new Double2());
  }

  public static double distance(Double2 a, Double2 b, Double2 tmp) {
    sub(a, b, tmp);
    return length(tmp);
  }

  public static double length(Double2 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y);
  }

  public static Double2 normalize(Double2 a) {
    Double2 result = new Double2();
    normalize(a, result);
    return result;
  }

  public static void normalize(Double2 a, Double2 result) {
    double len = length(a);
    result.x = (double)(a.x / len);
    result.y = (double)(a.y / len);
  }

  public static Double2 abs(Double2 a) {
    return new Double2(Math.abs(a.x), Math.abs(a.y));
  }

  public static void abs(Double2 a, Double2 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
  }

  public static Double2 clamp(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y));
  }

  public static void clamp(Double2 a, Double2 b, Double2 c, Double2 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
  }

  public static Double2 max(Double2 a, Double2 b) {
    return new Double2(Math.max(a.x, b.x), Math.max(a.y, b.y));
  }

  public static void max(Double2 a, Double2 b, Double2 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
  }

  public static Double2 maxMag(Double2 a, Double2 b) {
    return new Double2(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y));
  }

  public static void maxMag(Double2 a, Double2 b, Double2 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
  }

  public static Double2 min(Double2 a, Double2 b) {
    return new Double2(Math.min(a.x, b.x), Math.min(a.y, b.y));
  }

  public static void min(Double2 a, Double2 b, Double2 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
  }

  public static Double2 minMag(Double2 a, Double2 b) {
    return new Double2(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y));
  }

  public static void minMag(Double2 a, Double2 b, Double2 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
  }

  public static Double2 mix(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y));
  }

  public static void mix(Double2 a, Double2 b, Double2 c, Double2 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
  }

  public static Double2 clamp(Double2 v, double min, double max) {
    return new Double2(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max));
  }

  public static void clamp(Double2 v, double min, double max, Double2 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
  }

  public static Double2 max(Double2 x, double y) {
    return new Double2(Math.max(x.x, y), Math.max(x.y, y));
  }

  public static void max(Double2 x, double y, Double2 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
  }

  public static Double2 min(Double2 x, double y) {
    return new Double2(Math.min(x.x, y), Math.min(x.y, y));
  }

  public static void min(Double2 x, double y, Double2 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
  }

  public static Double2 mix(Double2 x, Double2 y, double a) {
    return new Double2(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a));
  }

  public static void mix(Double2 x, Double2 y, double a, Double2 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
  }

  public static Double2 acos(Double2 a) {
    return new Double2(Math.acos(a.x), Math.acos(a.y));
  }

  public static void acos(Double2 a, Double2 result) {
    result.x = Math.acos(a.x);
    result.y = Math.acos(a.y);
  }

  public static Double2 acosh(Double2 a) {
    return new Double2(Math.acosh(a.x), Math.acosh(a.y));
  }

  public static void acosh(Double2 a, Double2 result) {
    result.x = Math.acosh(a.x);
    result.y = Math.acosh(a.y);
  }

  public static Double2 asin(Double2 a) {
    return new Double2(Math.asin(a.x), Math.asin(a.y));
  }

  public static void asin(Double2 a, Double2 result) {
    result.x = Math.asin(a.x);
    result.y = Math.asin(a.y);
  }

  public static Double2 asinh(Double2 a) {
    return new Double2(Math.asinh(a.x), Math.asinh(a.y));
  }

  public static void asinh(Double2 a, Double2 result) {
    result.x = Math.asinh(a.x);
    result.y = Math.asinh(a.y);
  }

  public static Double2 atan(Double2 a) {
    return new Double2(Math.atan(a.x), Math.atan(a.y));
  }

  public static void atan(Double2 a, Double2 result) {
    result.x = Math.atan(a.x);
    result.y = Math.atan(a.y);
  }

  public static Double2 atan2(Double2 a, Double2 b) {
    return new Double2(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y));
  }

  public static void atan2(Double2 a, Double2 b, Double2 result) {
    result.x = Math.atan2(a.x, b.x);
    result.y = Math.atan2(a.y, b.y);
  }

  public static Double2 atanh(Double2 a) {
    return new Double2(Math.atanh(a.x), Math.atanh(a.y));
  }

  public static void atanh(Double2 a, Double2 result) {
    result.x = Math.atanh(a.x);
    result.y = Math.atanh(a.y);
  }

  public static Double2 cbrt(Double2 a) {
    return new Double2(Math.cbrt(a.x), Math.cbrt(a.y));
  }

  public static void cbrt(Double2 a, Double2 result) {
    result.x = Math.cbrt(a.x);
    result.y = Math.cbrt(a.y);
  }

  public static Double2 ceil(Double2 a) {
    return new Double2(Math.ceil(a.x), Math.ceil(a.y));
  }

  public static void ceil(Double2 a, Double2 result) {
    result.x = Math.ceil(a.x);
    result.y = Math.ceil(a.y);
  }

  public static Double2 copySign(Double2 a, Double2 b) {
    return new Double2(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y));
  }

  public static void copySign(Double2 a, Double2 b, Double2 result) {
    result.x = Math.copySign(a.x, b.x);
    result.y = Math.copySign(a.y, b.y);
  }

  public static Double2 cos(Double2 a) {
    return new Double2(Math.cos(a.x), Math.cos(a.y));
  }

  public static void cos(Double2 a, Double2 result) {
    result.x = Math.cos(a.x);
    result.y = Math.cos(a.y);
  }

  public static Double2 cosh(Double2 a) {
    return new Double2(Math.cosh(a.x), Math.cosh(a.y));
  }

  public static void cosh(Double2 a, Double2 result) {
    result.x = Math.cosh(a.x);
    result.y = Math.cosh(a.y);
  }

  public static Double2 erf(Double2 a) {
    return new Double2(Math.erf(a.x), Math.erf(a.y));
  }

  public static void erf(Double2 a, Double2 result) {
    result.x = Math.erf(a.x);
    result.y = Math.erf(a.y);
  }

  public static Double2 erfc(Double2 a) {
    return new Double2(Math.erfc(a.x), Math.erfc(a.y));
  }

  public static void erfc(Double2 a, Double2 result) {
    result.x = Math.erfc(a.x);
    result.y = Math.erfc(a.y);
  }

  public static Double2 exp(Double2 a) {
    return new Double2(Math.exp(a.x), Math.exp(a.y));
  }

  public static void exp(Double2 a, Double2 result) {
    result.x = Math.exp(a.x);
    result.y = Math.exp(a.y);
  }

  public static Double2 exp10(Double2 a) {
    return new Double2(Math.exp10(a.x), Math.exp10(a.y));
  }

  public static void exp10(Double2 a, Double2 result) {
    result.x = Math.exp10(a.x);
    result.y = Math.exp10(a.y);
  }

  public static Double2 exp2(Double2 a) {
    return new Double2(Math.exp2(a.x), Math.exp2(a.y));
  }

  public static void exp2(Double2 a, Double2 result) {
    result.x = Math.exp2(a.x);
    result.y = Math.exp2(a.y);
  }

  public static Double2 expm1(Double2 a) {
    return new Double2(Math.expm1(a.x), Math.expm1(a.y));
  }

  public static void expm1(Double2 a, Double2 result) {
    result.x = Math.expm1(a.x);
    result.y = Math.expm1(a.y);
  }

  public static Double2 fdim(Double2 a, Double2 b) {
    return new Double2(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y));
  }

  public static void fdim(Double2 a, Double2 b, Double2 result) {
    result.x = Math.fdim(a.x, b.x);
    result.y = Math.fdim(a.y, b.y);
  }

  public static Double2 floor(Double2 a) {
    return new Double2(Math.floor(a.x), Math.floor(a.y));
  }

  public static void floor(Double2 a, Double2 result) {
    result.x = Math.floor(a.x);
    result.y = Math.floor(a.y);
  }

  public static Double2 fma(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y));
  }

  public static void fma(Double2 a, Double2 b, Double2 c, Double2 result) {
    result.x = Math.fma(a.x, b.x, c.x);
    result.y = Math.fma(a.y, b.y, c.y);
  }

  public static Double2 fmod(Double2 a, Double2 b) {
    return new Double2(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y));
  }

  public static void fmod(Double2 a, Double2 b, Double2 result) {
    result.x = Math.fmod(a.x, b.x);
    result.y = Math.fmod(a.y, b.y);
  }

  public static Double2 fract(Double2 a) {
    return new Double2(Math.fract(a.x), Math.fract(a.y));
  }

  public static void fract(Double2 a, Double2 result) {
    result.x = Math.fract(a.x);
    result.y = Math.fract(a.y);
  }

  public static Double2 frexp(Double2 a) {
    return new Double2(Math.frexp(a.x), Math.frexp(a.y));
  }

  public static void frexp(Double2 a, Double2 result) {
    result.x = Math.frexp(a.x);
    result.y = Math.frexp(a.y);
  }

  public static Double2 getExponent(Double2 a) {
    return new Double2(Math.getExponent(a.x), Math.getExponent(a.y));
  }

  public static void getExponent(Double2 a, Double2 result) {
    result.x = Math.getExponent(a.x);
    result.y = Math.getExponent(a.y);
  }

  public static Double2 hypot(Double2 a, Double2 b) {
    return new Double2(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y));
  }

  public static void hypot(Double2 a, Double2 b, Double2 result) {
    result.x = Math.hypot(a.x, b.x);
    result.y = Math.hypot(a.y, b.y);
  }

  public static Double2 lgamma(Double2 a) {
    return new Double2(Math.lgamma(a.x), Math.lgamma(a.y));
  }

  public static void lgamma(Double2 a, Double2 result) {
    result.x = Math.lgamma(a.x);
    result.y = Math.lgamma(a.y);
  }

  public static Double2 log(Double2 a) {
    return new Double2(Math.log(a.x), Math.log(a.y));
  }

  public static void log(Double2 a, Double2 result) {
    result.x = Math.log(a.x);
    result.y = Math.log(a.y);
  }

  public static Double2 log10(Double2 a) {
    return new Double2(Math.log10(a.x), Math.log10(a.y));
  }

  public static void log10(Double2 a, Double2 result) {
    result.x = Math.log10(a.x);
    result.y = Math.log10(a.y);
  }

  public static Double2 log1p(Double2 a) {
    return new Double2(Math.log1p(a.x), Math.log1p(a.y));
  }

  public static void log1p(Double2 a, Double2 result) {
    result.x = Math.log1p(a.x);
    result.y = Math.log1p(a.y);
  }

  public static Double2 log2(Double2 a) {
    return new Double2(Math.log2(a.x), Math.log2(a.y));
  }

  public static void log2(Double2 a, Double2 result) {
    result.x = Math.log2(a.x);
    result.y = Math.log2(a.y);
  }

  public static Double2 logb(Double2 a) {
    return new Double2(Math.logb(a.x), Math.logb(a.y));
  }

  public static void logb(Double2 a, Double2 result) {
    result.x = Math.logb(a.x);
    result.y = Math.logb(a.y);
  }

  public static Double2 mad(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y));
  }

  public static void mad(Double2 a, Double2 b, Double2 c, Double2 result) {
    result.x = Math.mad(a.x, b.x, c.x);
    result.y = Math.mad(a.y, b.y, c.y);
  }

  public static Double2 nextAfter(Double2 a, Double2 b) {
    return new Double2(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y));
  }

  public static void nextAfter(Double2 a, Double2 b, Double2 result) {
    result.x = Math.nextAfter(a.x, b.x);
    result.y = Math.nextAfter(a.y, b.y);
  }

  public static Double2 pow(Double2 a, Double2 b) {
    return new Double2(Math.pow(a.x, b.x), Math.pow(a.y, b.y));
  }

  public static void pow(Double2 a, Double2 b, Double2 result) {
    result.x = Math.pow(a.x, b.x);
    result.y = Math.pow(a.y, b.y);
  }

  public static Double2 powr(Double2 a, Double2 b) {
    return new Double2(Math.powr(a.x, b.x), Math.powr(a.y, b.y));
  }

  public static void powr(Double2 a, Double2 b, Double2 result) {
    result.x = Math.powr(a.x, b.x);
    result.y = Math.powr(a.y, b.y);
  }

  public static Double2 remainder(Double2 a, Double2 b) {
    return new Double2(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y));
  }

  public static void remainder(Double2 a, Double2 b, Double2 result) {
    result.x = Math.remainder(a.x, b.x);
    result.y = Math.remainder(a.y, b.y);
  }

  public static Double2 rint(Double2 a) {
    return new Double2(Math.rint(a.x), Math.rint(a.y));
  }

  public static void rint(Double2 a, Double2 result) {
    result.x = Math.rint(a.x);
    result.y = Math.rint(a.y);
  }

  public static Double2 round(Double2 a) {
    return new Double2(Math.round(a.x), Math.round(a.y));
  }

  public static void round(Double2 a, Double2 result) {
    result.x = Math.round(a.x);
    result.y = Math.round(a.y);
  }

  public static Double2 rsqrt(Double2 a) {
    return new Double2(Math.rsqrt(a.x), Math.rsqrt(a.y));
  }

  public static void rsqrt(Double2 a, Double2 result) {
    result.x = Math.rsqrt(a.x);
    result.y = Math.rsqrt(a.y);
  }

  public static Double2 signum(Double2 a) {
    return new Double2(Math.signum(a.x), Math.signum(a.y));
  }

  public static void signum(Double2 a, Double2 result) {
    result.x = Math.signum(a.x);
    result.y = Math.signum(a.y);
  }

  public static Double2 sin(Double2 a) {
    return new Double2(Math.sin(a.x), Math.sin(a.y));
  }

  public static void sin(Double2 a, Double2 result) {
    result.x = Math.sin(a.x);
    result.y = Math.sin(a.y);
  }

  public static Double2 sinh(Double2 a) {
    return new Double2(Math.sinh(a.x), Math.sinh(a.y));
  }

  public static void sinh(Double2 a, Double2 result) {
    result.x = Math.sinh(a.x);
    result.y = Math.sinh(a.y);
  }

  public static Double2 smoothStep(Double2 a, Double2 b, Double2 c) {
    return new Double2(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y));
  }

  public static void smoothStep(Double2 a, Double2 b, Double2 c, Double2 result) {
    result.x = Math.smoothStep(a.x, b.x, c.x);
    result.y = Math.smoothStep(a.y, b.y, c.y);
  }

  public static Double2 sqrt(Double2 a) {
    return new Double2(Math.sqrt(a.x), Math.sqrt(a.y));
  }

  public static void sqrt(Double2 a, Double2 result) {
    result.x = Math.sqrt(a.x);
    result.y = Math.sqrt(a.y);
  }

  public static Double2 step(Double2 a, Double2 b) {
    return new Double2(Math.step(a.x, b.x), Math.step(a.y, b.y));
  }

  public static void step(Double2 a, Double2 b, Double2 result) {
    result.x = Math.step(a.x, b.x);
    result.y = Math.step(a.y, b.y);
  }

  public static Double2 tan(Double2 a) {
    return new Double2(Math.tan(a.x), Math.tan(a.y));
  }

  public static void tan(Double2 a, Double2 result) {
    result.x = Math.tan(a.x);
    result.y = Math.tan(a.y);
  }

  public static Double2 tanh(Double2 a) {
    return new Double2(Math.tanh(a.x), Math.tanh(a.y));
  }

  public static void tanh(Double2 a, Double2 result) {
    result.x = Math.tanh(a.x);
    result.y = Math.tanh(a.y);
  }

  public static Double2 tgamma(Double2 a) {
    return new Double2(Math.tgamma(a.x), Math.tgamma(a.y));
  }

  public static void tgamma(Double2 a, Double2 result) {
    result.x = Math.tgamma(a.x);
    result.y = Math.tgamma(a.y);
  }

  public static Double2 toDegrees(Double2 a) {
    return new Double2(Math.toDegrees(a.x), Math.toDegrees(a.y));
  }

  public static void toDegrees(Double2 a, Double2 result) {
    result.x = Math.toDegrees(a.x);
    result.y = Math.toDegrees(a.y);
  }

  public static Double2 toRadians(Double2 a) {
    return new Double2(Math.toRadians(a.x), Math.toRadians(a.y));
  }

  public static void toRadians(Double2 a, Double2 result) {
    result.x = Math.toRadians(a.x);
    result.y = Math.toRadians(a.y);
  }

  public static Double2 trunc(Double2 a) {
    return new Double2(Math.trunc(a.x), Math.trunc(a.y));
  }

  public static void trunc(Double2 a, Double2 result) {
    result.x = Math.trunc(a.x);
    result.y = Math.trunc(a.y);
  }

  public static Double2 scalb(Double2 a, Int2 n) {
    return new Double2(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y));
  }

  public static void scalb(Double2 a, Int2 n, Double2 result) {
    result.x = Math.scalb(a.x, n.x);
    result.y = Math.scalb(a.y, n.y);
  }

  public static Double2 ldexp(Double2 a, Int2 n) {
    return new Double2(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y));
  }

  public static void ldexp(Double2 a, Int2 n, Double2 result) {
    result.x = Math.ldexp(a.x, n.x);
    result.y = Math.ldexp(a.y, n.y);
  }

  public static Double2 pown(Double2 a, Int2 b) {
    return new Double2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static void pown(Double2 a, Int2 b, Double2 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
  }

  public static Double2 rootn(Double2 a, Int2 b) {
    return new Double2(Math.pown(a.x, b.x), Math.pown(a.y, b.y));
  }

  public static void rootn(Double2 a, Int2 b, Double2 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
  }

  public static Double2 smoothStep(Double2 a, Double2 b, double c) {
    return new Double2(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c));
  }

  public static void smoothStep(Double2 a, Double2 b, double c, Double2 result) {
    result.x = Math.smoothStep(a.x, b.x, c);
    result.y = Math.smoothStep(a.y, b.y, c);
  }
}
