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

#ifdef cl_khr_fp64
#pragma OPENCL EXTENSION cl_khr_fp64 : enable
#endif // cl_khr_fp64

#if defined(__EMBEDDED_PROFILE__) && defined(cles_khr_int64)
#pragma OPENCL EXTENSION cles_khr_int64 : enable
#endif // __EMBEDDED_PROFILE__ && cles_khr_int64

float scalbf(float a, int scaleFactor) {
  return a * exp2((float) scaleFactor);
}

float2 float2_scalb(float2 a, int2 scaleFactor) {
  return (float2)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y));
}
float3 float3_scalb(float3 a, int3 scaleFactor) {
  return (float3)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y), scalbf(a.z, scaleFactor.z));
}
float4 float4_scalb(float4 a, int4 scaleFactor) {
  return (float4)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y), scalbf(a.z, scaleFactor.z), scalbf(a.w, scaleFactor.w));
}
float8 float8_scalb(float8 a, int8 scaleFactor) {
  return (float8)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y), scalbf(a.z, scaleFactor.z), scalbf(a.w, scaleFactor.w), scalbf(a.s4, scaleFactor.s4), scalbf(a.s5, scaleFactor.s5), scalbf(a.s6, scaleFactor.s6), scalbf(a.s7, scaleFactor.s7));
}

float2 float2_smoothstep(float2 a, float2 b, float c) {
  return (float2)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c));
}
float3 float3_smoothstep(float3 a, float3 b, float c) {
  return (float3)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c), smoothstep(a.z, b.z, c));
}
float4 float4_smoothstep(float4 a, float4 b, float c) {
  return (float4)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c), smoothstep(a.z, b.z, c), smoothstep(a.w, b.w, c));
}
float8 float8_smoothstep(float8 a, float8 b, float c) {
  return (float8)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c), smoothstep(a.z, b.z, c), smoothstep(a.w, b.w, c), smoothstep(a.s4, b.s4, c), smoothstep(a.s5, b.s5, c), smoothstep(a.s6, b.s6, c), smoothstep(a.s7, b.s7, c));
}


#ifdef cl_khr_fp64
double scalb(double a, int scaleFactor) {
  return a * exp2((double) scaleFactor);
}

double2 double2_scalb(double2 a, int2 scaleFactor) {
  return (double2)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y));
}
double3 double3_scalb(double3 a, int3 scaleFactor) {
  return (double3)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y), scalb(a.z, scaleFactor.z));
}
double4 double4_scalb(double4 a, int4 scaleFactor) {
  return (double4)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y), scalb(a.z, scaleFactor.z), scalb(a.w, scaleFactor.w));
}
double8 double8_scalb(double8 a, int8 scaleFactor) {
  return (double8)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y), scalb(a.z, scaleFactor.z), scalb(a.w, scaleFactor.w), scalb(a.s4, scaleFactor.s4), scalb(a.s5, scaleFactor.s5), scalb(a.s6, scaleFactor.s6), scalb(a.s7, scaleFactor.s7));
}

double2 double2_smoothstep(double2 a, double2 b, double c) {
  return (double2)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c));
}
double3 double3_smoothstep(double3 a, double3 b, double c) {
  return (double3)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c), smoothstep(a.z, b.z, c));
}
double4 double4_smoothstep(double4 a, double4 b, double c) {
  return (double4)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c), smoothstep(a.z, b.z, c), smoothstep(a.w, b.w, c));
}
double8 double8_smoothstep(double8 a, double8 b, double c) {
  return (double8)(smoothstep(a.x, b.x, c), smoothstep(a.y, b.y, c), smoothstep(a.z, b.z, c), smoothstep(a.w, b.w, c), smoothstep(a.s4, b.s4, c), smoothstep(a.s5, b.s5, c), smoothstep(a.s6, b.s6, c), smoothstep(a.s7, b.s7, c));
}

#endif // cl_khr_fp64

char clampc(char a, char min, char max) {
  return a < min? min : (a > max? max : a);
}

char mixc(char x, char y, char a) {
  return x + (y - x) * a;
}

char maxmagc(char a, char b) {
  return abs(a) > abs(b) ? a : b;
}

char minmagc(char a, char b) {
  return abs(a) < abs(b) ? a : b;
}

char2 char2_clamp(char2 a, char2 min, char2 max) {
  return (char2)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y));
}

char2 char2_mix(char2 x, char2 y, char2 a) {
  return (char2)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y));
}

char2 char2_maxmag(char2 a, char2 b) {
  return (char2)(maxmagc(a.x, b.x), maxmagc(a.y, b.y));
}

char2 char2_minmag(char2 a, char2 b) {
  return (char2)(minmagc(a.x, b.x), minmagc(a.y, b.y));
}

char3 char3_clamp(char3 a, char3 min, char3 max) {
  return (char3)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y), clampc(a.z, min.z, max.z));
}

char3 char3_mix(char3 x, char3 y, char3 a) {
  return (char3)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y), mixc(x.z, y.z, a.z));
}

char3 char3_maxmag(char3 a, char3 b) {
  return (char3)(maxmagc(a.x, b.x), maxmagc(a.y, b.y), maxmagc(a.z, b.z));
}

char3 char3_minmag(char3 a, char3 b) {
  return (char3)(minmagc(a.x, b.x), minmagc(a.y, b.y), minmagc(a.z, b.z));
}

char4 char4_clamp(char4 a, char4 min, char4 max) {
  return (char4)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y), clampc(a.z, min.z, max.z), clampc(a.w, min.w, max.w));
}

char4 char4_mix(char4 x, char4 y, char4 a) {
  return (char4)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y), mixc(x.z, y.z, a.z), mixc(x.w, y.w, a.w));
}

char4 char4_maxmag(char4 a, char4 b) {
  return (char4)(maxmagc(a.x, b.x), maxmagc(a.y, b.y), maxmagc(a.z, b.z), maxmagc(a.w, b.w));
}

char4 char4_minmag(char4 a, char4 b) {
  return (char4)(minmagc(a.x, b.x), minmagc(a.y, b.y), minmagc(a.z, b.z), minmagc(a.w, b.w));
}

char8 char8_clamp(char8 a, char8 min, char8 max) {
  return (char8)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y), clampc(a.z, min.z, max.z), clampc(a.w, min.w, max.w), clampc(a.s4, min.s4, max.s4), clampc(a.s5, min.s5, max.s5), clampc(a.s6, min.s6, max.s6), clampc(a.s7, min.s7, max.s7));
}

char8 char8_mix(char8 x, char8 y, char8 a) {
  return (char8)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y), mixc(x.z, y.z, a.z), mixc(x.w, y.w, a.w), mixc(x.s4, y.s4, a.s4), mixc(x.s5, y.s5, a.s5), mixc(x.s6, y.s6, a.s6), mixc(x.s7, y.s7, a.s7));
}

char8 char8_maxmag(char8 a, char8 b) {
  return (char8)(maxmagc(a.x, b.x), maxmagc(a.y, b.y), maxmagc(a.z, b.z), maxmagc(a.w, b.w), maxmagc(a.s4, b.s4), maxmagc(a.s5, b.s5), maxmagc(a.s6, b.s6), maxmagc(a.s7, b.s7));
}

char8 char8_minmag(char8 a, char8 b) {
  return (char8)(minmagc(a.x, b.x), minmagc(a.y, b.y), minmagc(a.z, b.z), minmagc(a.w, b.w), minmagc(a.s4, b.s4), minmagc(a.s5, b.s5), minmagc(a.s6, b.s6), minmagc(a.s7, b.s7));
}

short clamps(short a, short min, short max) {
  return a < min? min : (a > max? max : a);
}

short mixs(short x, short y, short a) {
  return x + (y - x) * a;
}

short maxmags(short a, short b) {
  return abs(a) > abs(b) ? a : b;
}

short minmags(short a, short b) {
  return abs(a) < abs(b) ? a : b;
}

short2 short2_clamp(short2 a, short2 min, short2 max) {
  return (short2)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y));
}

short2 short2_mix(short2 x, short2 y, short2 a) {
  return (short2)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y));
}

short2 short2_maxmag(short2 a, short2 b) {
  return (short2)(maxmags(a.x, b.x), maxmags(a.y, b.y));
}

short2 short2_minmag(short2 a, short2 b) {
  return (short2)(minmags(a.x, b.x), minmags(a.y, b.y));
}

short3 short3_clamp(short3 a, short3 min, short3 max) {
  return (short3)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y), clamps(a.z, min.z, max.z));
}

short3 short3_mix(short3 x, short3 y, short3 a) {
  return (short3)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y), mixs(x.z, y.z, a.z));
}

short3 short3_maxmag(short3 a, short3 b) {
  return (short3)(maxmags(a.x, b.x), maxmags(a.y, b.y), maxmags(a.z, b.z));
}

short3 short3_minmag(short3 a, short3 b) {
  return (short3)(minmags(a.x, b.x), minmags(a.y, b.y), minmags(a.z, b.z));
}

short4 short4_clamp(short4 a, short4 min, short4 max) {
  return (short4)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y), clamps(a.z, min.z, max.z), clamps(a.w, min.w, max.w));
}

short4 short4_mix(short4 x, short4 y, short4 a) {
  return (short4)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y), mixs(x.z, y.z, a.z), mixs(x.w, y.w, a.w));
}

short4 short4_maxmag(short4 a, short4 b) {
  return (short4)(maxmags(a.x, b.x), maxmags(a.y, b.y), maxmags(a.z, b.z), maxmags(a.w, b.w));
}

short4 short4_minmag(short4 a, short4 b) {
  return (short4)(minmags(a.x, b.x), minmags(a.y, b.y), minmags(a.z, b.z), minmags(a.w, b.w));
}

short8 short8_clamp(short8 a, short8 min, short8 max) {
  return (short8)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y), clamps(a.z, min.z, max.z), clamps(a.w, min.w, max.w), clamps(a.s4, min.s4, max.s4), clamps(a.s5, min.s5, max.s5), clamps(a.s6, min.s6, max.s6), clamps(a.s7, min.s7, max.s7));
}

short8 short8_mix(short8 x, short8 y, short8 a) {
  return (short8)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y), mixs(x.z, y.z, a.z), mixs(x.w, y.w, a.w), mixs(x.s4, y.s4, a.s4), mixs(x.s5, y.s5, a.s5), mixs(x.s6, y.s6, a.s6), mixs(x.s7, y.s7, a.s7));
}

short8 short8_maxmag(short8 a, short8 b) {
  return (short8)(maxmags(a.x, b.x), maxmags(a.y, b.y), maxmags(a.z, b.z), maxmags(a.w, b.w), maxmags(a.s4, b.s4), maxmags(a.s5, b.s5), maxmags(a.s6, b.s6), maxmags(a.s7, b.s7));
}

short8 short8_minmag(short8 a, short8 b) {
  return (short8)(minmags(a.x, b.x), minmags(a.y, b.y), minmags(a.z, b.z), minmags(a.w, b.w), minmags(a.s4, b.s4), minmags(a.s5, b.s5), minmags(a.s6, b.s6), minmags(a.s7, b.s7));
}

int clampi(int a, int min, int max) {
  return a < min? min : (a > max? max : a);
}

int mixi(int x, int y, int a) {
  return x + (y - x) * a;
}

int maxmagi(int a, int b) {
  return abs(a) > abs(b) ? a : b;
}

int minmagi(int a, int b) {
  return abs(a) < abs(b) ? a : b;
}

int2 int2_clamp(int2 a, int2 min, int2 max) {
  return (int2)(clampi(a.x, min.x, max.x), clampi(a.y, min.y, max.y));
}

int2 int2_mix(int2 x, int2 y, int2 a) {
  return (int2)(mixi(x.x, y.x, a.x), mixi(x.y, y.y, a.y));
}

int2 int2_maxmag(int2 a, int2 b) {
  return (int2)(maxmagi(a.x, b.x), maxmagi(a.y, b.y));
}

int2 int2_minmag(int2 a, int2 b) {
  return (int2)(minmagi(a.x, b.x), minmagi(a.y, b.y));
}

int3 int3_clamp(int3 a, int3 min, int3 max) {
  return (int3)(clampi(a.x, min.x, max.x), clampi(a.y, min.y, max.y), clampi(a.z, min.z, max.z));
}

int3 int3_mix(int3 x, int3 y, int3 a) {
  return (int3)(mixi(x.x, y.x, a.x), mixi(x.y, y.y, a.y), mixi(x.z, y.z, a.z));
}

int3 int3_maxmag(int3 a, int3 b) {
  return (int3)(maxmagi(a.x, b.x), maxmagi(a.y, b.y), maxmagi(a.z, b.z));
}

int3 int3_minmag(int3 a, int3 b) {
  return (int3)(minmagi(a.x, b.x), minmagi(a.y, b.y), minmagi(a.z, b.z));
}

int4 int4_clamp(int4 a, int4 min, int4 max) {
  return (int4)(clampi(a.x, min.x, max.x), clampi(a.y, min.y, max.y), clampi(a.z, min.z, max.z), clampi(a.w, min.w, max.w));
}

int4 int4_mix(int4 x, int4 y, int4 a) {
  return (int4)(mixi(x.x, y.x, a.x), mixi(x.y, y.y, a.y), mixi(x.z, y.z, a.z), mixi(x.w, y.w, a.w));
}

int4 int4_maxmag(int4 a, int4 b) {
  return (int4)(maxmagi(a.x, b.x), maxmagi(a.y, b.y), maxmagi(a.z, b.z), maxmagi(a.w, b.w));
}

int4 int4_minmag(int4 a, int4 b) {
  return (int4)(minmagi(a.x, b.x), minmagi(a.y, b.y), minmagi(a.z, b.z), minmagi(a.w, b.w));
}

int8 int8_clamp(int8 a, int8 min, int8 max) {
  return (int8)(clampi(a.x, min.x, max.x), clampi(a.y, min.y, max.y), clampi(a.z, min.z, max.z), clampi(a.w, min.w, max.w), clampi(a.s4, min.s4, max.s4), clampi(a.s5, min.s5, max.s5), clampi(a.s6, min.s6, max.s6), clampi(a.s7, min.s7, max.s7));
}

int8 int8_mix(int8 x, int8 y, int8 a) {
  return (int8)(mixi(x.x, y.x, a.x), mixi(x.y, y.y, a.y), mixi(x.z, y.z, a.z), mixi(x.w, y.w, a.w), mixi(x.s4, y.s4, a.s4), mixi(x.s5, y.s5, a.s5), mixi(x.s6, y.s6, a.s6), mixi(x.s7, y.s7, a.s7));
}

int8 int8_maxmag(int8 a, int8 b) {
  return (int8)(maxmagi(a.x, b.x), maxmagi(a.y, b.y), maxmagi(a.z, b.z), maxmagi(a.w, b.w), maxmagi(a.s4, b.s4), maxmagi(a.s5, b.s5), maxmagi(a.s6, b.s6), maxmagi(a.s7, b.s7));
}

int8 int8_minmag(int8 a, int8 b) {
  return (int8)(minmagi(a.x, b.x), minmagi(a.y, b.y), minmagi(a.z, b.z), minmagi(a.w, b.w), minmagi(a.s4, b.s4), minmagi(a.s5, b.s5), minmagi(a.s6, b.s6), minmagi(a.s7, b.s7));
}

#if !defined(__EMBEDDED_PROFILE__) || defined(cles_khr_int64)
long clampl(long a, long min, long max) {
  return a < min? min : (a > max? max : a);
}

long mixl(long x, long y, long a) {
  return x + (y - x) * a;
}

long maxmagl(long a, long b) {
  return abs(a) > abs(b) ? a : b;
}

long minmagl(long a, long b) {
  return abs(a) < abs(b) ? a : b;
}

long2 long2_clamp(long2 a, long2 min, long2 max) {
  return (long2)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y));
}

long2 long2_mix(long2 x, long2 y, long2 a) {
  return (long2)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y));
}

long2 long2_maxmag(long2 a, long2 b) {
  return (long2)(maxmagl(a.x, b.x), maxmagl(a.y, b.y));
}

long2 long2_minmag(long2 a, long2 b) {
  return (long2)(minmagl(a.x, b.x), minmagl(a.y, b.y));
}

long3 long3_clamp(long3 a, long3 min, long3 max) {
  return (long3)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y), clampl(a.z, min.z, max.z));
}

long3 long3_mix(long3 x, long3 y, long3 a) {
  return (long3)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y), mixl(x.z, y.z, a.z));
}

long3 long3_maxmag(long3 a, long3 b) {
  return (long3)(maxmagl(a.x, b.x), maxmagl(a.y, b.y), maxmagl(a.z, b.z));
}

long3 long3_minmag(long3 a, long3 b) {
  return (long3)(minmagl(a.x, b.x), minmagl(a.y, b.y), minmagl(a.z, b.z));
}

long4 long4_clamp(long4 a, long4 min, long4 max) {
  return (long4)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y), clampl(a.z, min.z, max.z), clampl(a.w, min.w, max.w));
}

long4 long4_mix(long4 x, long4 y, long4 a) {
  return (long4)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y), mixl(x.z, y.z, a.z), mixl(x.w, y.w, a.w));
}

long4 long4_maxmag(long4 a, long4 b) {
  return (long4)(maxmagl(a.x, b.x), maxmagl(a.y, b.y), maxmagl(a.z, b.z), maxmagl(a.w, b.w));
}

long4 long4_minmag(long4 a, long4 b) {
  return (long4)(minmagl(a.x, b.x), minmagl(a.y, b.y), minmagl(a.z, b.z), minmagl(a.w, b.w));
}

long8 long8_clamp(long8 a, long8 min, long8 max) {
  return (long8)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y), clampl(a.z, min.z, max.z), clampl(a.w, min.w, max.w), clampl(a.s4, min.s4, max.s4), clampl(a.s5, min.s5, max.s5), clampl(a.s6, min.s6, max.s6), clampl(a.s7, min.s7, max.s7));
}

long8 long8_mix(long8 x, long8 y, long8 a) {
  return (long8)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y), mixl(x.z, y.z, a.z), mixl(x.w, y.w, a.w), mixl(x.s4, y.s4, a.s4), mixl(x.s5, y.s5, a.s5), mixl(x.s6, y.s6, a.s6), mixl(x.s7, y.s7, a.s7));
}

long8 long8_maxmag(long8 a, long8 b) {
  return (long8)(maxmagl(a.x, b.x), maxmagl(a.y, b.y), maxmagl(a.z, b.z), maxmagl(a.w, b.w), maxmagl(a.s4, b.s4), maxmagl(a.s5, b.s5), maxmagl(a.s6, b.s6), maxmagl(a.s7, b.s7));
}

long8 long8_minmag(long8 a, long8 b) {
  return (long8)(minmagl(a.x, b.x), minmagl(a.y, b.y), minmagl(a.z, b.z), minmagl(a.w, b.w), minmagl(a.s4, b.s4), minmagl(a.s5, b.s5), minmagl(a.s6, b.s6), minmagl(a.s7, b.s7));
}

#endif // !__EMBEDDED_PROFILE__ || cles_khr_int64
