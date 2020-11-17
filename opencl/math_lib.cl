float scalbf (float a, int scaleFactor) {
  return a * exp2((float) scaleFactor);
}

float2 float2_scalb (float2 a, int2 scaleFactor) {
  return (float2)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y));
}

float3 float3_scalb (float3 a, int3 scaleFactor) {
  return (float3)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y), scalbf(a.z, scaleFactor.z));
}

float4 float4_scalb (float4 a, int4 scaleFactor) {
  return (float4)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y), scalbf(a.z, scaleFactor.z), scalbf(a.w, scaleFactor.w));
}

float8 float8_scalb (float8 a, int8 scaleFactor) {
  return (float8)(scalbf(a.x, scaleFactor.x), scalbf(a.y, scaleFactor.y), scalbf(a.z, scaleFactor.z), scalbf(a.w, scaleFactor.w), scalbf(a.s4, scaleFactor.s4), scalbf(a.s5, scaleFactor.s5), scalbf(a.s6, scaleFactor.s6), scalbf(a.s7, scaleFactor.s7));
}

double scalb (double a, int scaleFactor) {
  return a * exp2((double) scaleFactor);
}

double2 double2_scalb (double2 a, int2 scaleFactor) {
  return (double2)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y));
}

double3 double3_scalb (double3 a, int3 scaleFactor) {
  return (double3)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y), scalb(a.z, scaleFactor.z));
}

double4 double4_scalb (double4 a, int4 scaleFactor) {
  return (double4)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y), scalb(a.z, scaleFactor.z), scalb(a.w, scaleFactor.w));
}

double8 double8_scalb (double8 a, int8 scaleFactor) {
  return (double8)(scalb(a.x, scaleFactor.x), scalb(a.y, scaleFactor.y), scalb(a.z, scaleFactor.z), scalb(a.w, scaleFactor.w), scalb(a.s4, scaleFactor.s4), scalb(a.s5, scaleFactor.s5), scalb(a.s6, scaleFactor.s6), scalb(a.s7, scaleFactor.s7));
}

char clampc (char a, char min, char max) {
  return a < min? min : (a > max? max : a);
}

char mixc (char x, char y, char a) {
  return x + (y - x) * a;
}

char2 char2_clamp (char2 a, char2 min, char2 max) {
  return (char2)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y));
}

char2 char2_mix (char2 x, char2 y, char2 a) {
  return (char2)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y));
}

char3 char3_clamp (char3 a, char3 min, char3 max) {
  return (char3)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y), clampc(a.z, min.z, max.z));
}

char3 char3_mix (char3 x, char3 y, char3 a) {
  return (char3)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y), mixc(x.z, y.z, a.z));
}

char4 char4_clamp (char4 a, char4 min, char4 max) {
  return (char4)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y), clampc(a.z, min.z, max.z), clampc(a.w, min.w, max.w));
}

char4 char4_mix (char4 x, char4 y, char4 a) {
  return (char4)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y), mixc(x.z, y.z, a.z), mixc(x.w, y.w, a.w));
}

char8 char8_clamp (char8 a, char8 min, char8 max) {
  return (char8)(clampc(a.x, min.x, max.x), clampc(a.y, min.y, max.y), clampc(a.z, min.z, max.z), clampc(a.w, min.w, max.w), clampc(a.s4, min.s4, max.s4), clampc(a.s5, min.s5, max.s5), clampc(a.s6, min.s6, max.s6), clampc(a.s7, min.s7, max.s7));
}

char8 char8_mix (char8 x, char8 y, char8 a) {
  return (char8)(mixc(x.x, y.x, a.x), mixc(x.y, y.y, a.y), mixc(x.z, y.z, a.z), mixc(x.w, y.w, a.w), mixc(x.s4, y.s4, a.s4), mixc(x.s5, y.s5, a.s5), mixc(x.s6, y.s6, a.s6), mixc(x.s7, y.s7, a.s7));
}

short clamps (short a, short min, short max) {
  return a < min? min : (a > max? max : a);
}

short mixs (short x, short y, short a) {
  return x + (y - x) * a;
}

short2 short2_clamp (short2 a, short2 min, short2 max) {
  return (short2)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y));
}

short2 short2_mix (short2 x, short2 y, short2 a) {
  return (short2)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y));
}

short3 short3_clamp (short3 a, short3 min, short3 max) {
  return (short3)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y), clamps(a.z, min.z, max.z));
}

short3 short3_mix (short3 x, short3 y, short3 a) {
  return (short3)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y), mixs(x.z, y.z, a.z));
}

short4 short4_clamp (short4 a, short4 min, short4 max) {
  return (short4)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y), clamps(a.z, min.z, max.z), clamps(a.w, min.w, max.w));
}

short4 short4_mix (short4 x, short4 y, short4 a) {
  return (short4)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y), mixs(x.z, y.z, a.z), mixs(x.w, y.w, a.w));
}

short8 short8_clamp (short8 a, short8 min, short8 max) {
  return (short8)(clamps(a.x, min.x, max.x), clamps(a.y, min.y, max.y), clamps(a.z, min.z, max.z), clamps(a.w, min.w, max.w), clamps(a.s4, min.s4, max.s4), clamps(a.s5, min.s5, max.s5), clamps(a.s6, min.s6, max.s6), clamps(a.s7, min.s7, max.s7));
}

short8 short8_mix (short8 x, short8 y, short8 a) {
  return (short8)(mixs(x.x, y.x, a.x), mixs(x.y, y.y, a.y), mixs(x.z, y.z, a.z), mixs(x.w, y.w, a.w), mixs(x.s4, y.s4, a.s4), mixs(x.s5, y.s5, a.s5), mixs(x.s6, y.s6, a.s6), mixs(x.s7, y.s7, a.s7));
}

int clamp (int a, int min, int max) {
  return a < min? min : (a > max? max : a);
}

int mix (int x, int y, int a) {
  return x + (y - x) * a;
}

int2 int2_clamp (int2 a, int2 min, int2 max) {
  return (int2)(clamp(a.x, min.x, max.x), clamp(a.y, min.y, max.y));
}

int2 int2_mix (int2 x, int2 y, int2 a) {
  return (int2)(mix(x.x, y.x, a.x), mix(x.y, y.y, a.y));
}

int3 int3_clamp (int3 a, int3 min, int3 max) {
  return (int3)(clamp(a.x, min.x, max.x), clamp(a.y, min.y, max.y), clamp(a.z, min.z, max.z));
}

int3 int3_mix (int3 x, int3 y, int3 a) {
  return (int3)(mix(x.x, y.x, a.x), mix(x.y, y.y, a.y), mix(x.z, y.z, a.z));
}

int4 int4_clamp (int4 a, int4 min, int4 max) {
  return (int4)(clamp(a.x, min.x, max.x), clamp(a.y, min.y, max.y), clamp(a.z, min.z, max.z), clamp(a.w, min.w, max.w));
}

int4 int4_mix (int4 x, int4 y, int4 a) {
  return (int4)(mix(x.x, y.x, a.x), mix(x.y, y.y, a.y), mix(x.z, y.z, a.z), mix(x.w, y.w, a.w));
}

int8 int8_clamp (int8 a, int8 min, int8 max) {
  return (int8)(clamp(a.x, min.x, max.x), clamp(a.y, min.y, max.y), clamp(a.z, min.z, max.z), clamp(a.w, min.w, max.w), clamp(a.s4, min.s4, max.s4), clamp(a.s5, min.s5, max.s5), clamp(a.s6, min.s6, max.s6), clamp(a.s7, min.s7, max.s7));
}

int8 int8_mix (int8 x, int8 y, int8 a) {
  return (int8)(mix(x.x, y.x, a.x), mix(x.y, y.y, a.y), mix(x.z, y.z, a.z), mix(x.w, y.w, a.w), mix(x.s4, y.s4, a.s4), mix(x.s5, y.s5, a.s5), mix(x.s6, y.s6, a.s6), mix(x.s7, y.s7, a.s7));
}

long clampl (long a, long min, long max) {
  return a < min? min : (a > max? max : a);
}

long mixl (long x, long y, long a) {
  return x + (y - x) * a;
}

long2 long2_clamp (long2 a, long2 min, long2 max) {
  return (long2)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y));
}

long2 long2_mix (long2 x, long2 y, long2 a) {
  return (long2)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y));
}

long3 long3_clamp (long3 a, long3 min, long3 max) {
  return (long3)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y), clampl(a.z, min.z, max.z));
}

long3 long3_mix (long3 x, long3 y, long3 a) {
  return (long3)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y), mixl(x.z, y.z, a.z));
}

long4 long4_clamp (long4 a, long4 min, long4 max) {
  return (long4)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y), clampl(a.z, min.z, max.z), clampl(a.w, min.w, max.w));
}

long4 long4_mix (long4 x, long4 y, long4 a) {
  return (long4)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y), mixl(x.z, y.z, a.z), mixl(x.w, y.w, a.w));
}

long8 long8_clamp (long8 a, long8 min, long8 max) {
  return (long8)(clampl(a.x, min.x, max.x), clampl(a.y, min.y, max.y), clampl(a.z, min.z, max.z), clampl(a.w, min.w, max.w), clampl(a.s4, min.s4, max.s4), clampl(a.s5, min.s5, max.s5), clampl(a.s6, min.s6, max.s6), clampl(a.s7, min.s7, max.s7));
}

long8 long8_mix (long8 x, long8 y, long8 a) {
  return (long8)(mixl(x.x, y.x, a.x), mixl(x.y, y.y, a.y), mixl(x.z, y.z, a.z), mixl(x.w, y.w, a.w), mixl(x.s4, y.s4, a.s4), mixl(x.s5, y.s5, a.s5), mixl(x.s6, y.s6, a.s6), mixl(x.s7, y.s7, a.s7));
}

