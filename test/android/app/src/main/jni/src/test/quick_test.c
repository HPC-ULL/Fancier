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

#include <stdlib.h>
#include <time.h>
#include <math.h>

#define FC_LOG_TAG "QuickTest"
#include <fancier.h>


typedef union {
  uint8_t __attribute__((aligned(4))) v[4];
  struct { uint8_t  x, y, z, w; };
} A;


#define LAUNCH_REF_2D(_width, _height, _f, ...) \
  for (int _y = 0; _y < _height; ++_y) { \
    for (int _x = 0; _x < _width; ++_x) { \
      _f(_x, _y, __VA_ARGS__); \
    } \
  }

#define LAUNCH_FANCIER_2D(_dims, _f, ...) \
  for (int _y = 0; _y < _dims.y; ++_y) { \
    for (int _x = 0; _x < _dims.x; ++_x) { \
      _f(_x, _y, __VA_ARGS__); \
    } \
  }

#define LAUNCH_REF_1D_R(_reps, _ret, _f, ...) \
  for (int _i = 0; _i < _reps; ++_i) { \
    _ret += _f(_i, __VA_ARGS__); \
  }

#define LAUNCH_FANCIER_1D_R(_reps, _ret, _f, ...) \
  for (int _i = 0; _i < _reps; ++_i) { \
    _ret += _f(_i, __VA_ARGS__); \
  }

#define COMPARE_BENCHMARKS(_name, _global_reps, _local_reps, _t, _durations, _call_ref, _call_fancier) \
  resetDurations(durations, 2); \
  for (int j = 0; j < _global_reps; ++j) { \
    clock_gettime(CLOCK_MONOTONIC_RAW, &_t[0]); \
    _call_ref \
    clock_gettime(CLOCK_MONOTONIC_RAW, &_t[1]); \
    _call_fancier \
    clock_gettime(CLOCK_MONOTONIC_RAW, &_t[2]); \
    accDurations(_t, _durations, 2); \
  } \
  FC_LOGINFO_FMT(_name " REF: %.016f ns", _durations[0] / (double)(_global_reps * _local_reps)); \
  FC_LOGINFO_FMT(_name " FAN: %.016f ns", _durations[1] / (double)(_global_reps * _local_reps));


static void accDurations(const struct timespec* t, uint64_t* durations, int n) {
  for (int i = 0; i < n; ++i)
    durations[i] += ((t[i+1].tv_nsec - t[i].tv_nsec) +
                     (t[i+1].tv_sec  - t[i].tv_sec) * 1000000000ULL);
}

static void resetDurations(uint64_t* durations, int n) {
  for (int i = 0; i < n; ++i)
    durations[i] = 0ULL;
}


static inline int indexRef(uint32_t w, int x, int y) {
  return y * w + x;
}

static inline int indexFancier(fcInt2 d, int x, int y) {
  return y * d.x + x;
}


static inline void getPixelRef(int x, int y, size_t width, int32_t* v) {
  v[indexRef(width, x, y)] = v[0];
}

static inline void getPixelFancier(int x, int y, fcInt2 dims, A* v) {
  v[indexFancier(dims, x, y)] = v[0];
}

/*static inline*/ float brightRef(int i, float enhancement) {
  return exp2f(enhancement);
}

/*static inline*/ float brightFancier(int i, float enhancement) {
  return fcMath_exp2f(enhancement);
}

static inline float loop(int i, float unused) {
  return unused;
}


static void pixelOutRef();
static void pixelOutFancier();
static void clampRef();
static void clampFancier();
static void setPixelRef();
static void setPixelFancier();

bool justDoIt() {
  return exp2f(0.5f) == fcMath_exp2f(0.5f);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_activity_MainActivity_doQuickTest(JNIEnv* env, jobject obj) {
  const int BENCH_REPS = 5;
  const int GLOBAL_REPS = 5;

  const size_t W = 3840, H = 2160;
  const size_t N = W * H;
  const fcInt2 DIMS = {.x = W, .y = H};

  srand(time(NULL));
  const float ENHANCEMENT = rand() / (float) RAND_MAX;

  float tmp = 0.0f;

  int32_t* v1 = malloc(W * H * sizeof(int32_t));
  A* v2 = malloc(W * H * sizeof(A));

  struct timespec t[3];
  uint64_t durations[2];

  FC_LOGINFO("Running quick test...");

  for (int i = 0; i < BENCH_REPS; ++i) {
    //COMPARE_BENCHMARKS("loop", GLOBAL_REPS, N, t, durations,
    //                   LAUNCH_REF_1D_R(N, tmp, loop, ENHANCEMENT),
    //                   LAUNCH_FANCIER_1D_R(N, tmp, loop, ENHANCEMENT));

    //COMPARE_BENCHMARKS("getPixel", GLOBAL_REPS, W * H, t, durations,
    //                   LAUNCH_REF_2D(W, H, getPixelRef, W, v1),
    //                   LAUNCH_FANCIER_2D(DIMS, getPixelFancier, DIMS, v2));

    COMPARE_BENCHMARKS("bright", GLOBAL_REPS, N, t, durations,
                       LAUNCH_REF_1D_R(N, tmp, brightRef, ENHANCEMENT),
                       LAUNCH_FANCIER_1D_R(N, tmp, brightFancier, ENHANCEMENT));

    //COMPARE_BENCHMARKS("bright_reverse", GLOBAL_REPS, N, t, durations,
    //                   LAUNCH_REF_1D_R(N, tmp, brightFancier, ENHANCEMENT),
    //                   LAUNCH_FANCIER_1D_R(N, tmp, brightRef, ENHANCEMENT));
  }

  free(v2);
  free(v1);

  printf("%f", tmp);
}
