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

#include <fancier.h>
#include <string.h>


static const char* kernel_src = "void kernel sums(__global char* v) {\n"
                                "  size_t id = get_global_id(0);\n"
                                "  char4 b = vload4(id, v);\n"
                                "  b += (char4)(1, 2, 3, 4);\n"
                                "  vstore4(b, id, v);\n"
                                "}";

static const int n = 10;
static const fcByte x[] = {10, 10, 10, 10, 20, 20, 20, 20, 30, 30, 30, 30, 40, 50, 60, 70};

static int process(fcByte4Array* array) {
  cl_int err;

  err = fcByte4Array_syncToDevice(array);
  if (err)
    return err;

  // Kernel compilation
  cl_program program = fcOpenCL_compileKernel(1, &kernel_src, &err);
  if (err)
    return err;

  cl_kernel kernel = clCreateKernel(program, "sums", &err);
  if (err)
    return err;

  // Kernel execution
  err = clSetKernelArg(kernel, 0, sizeof(cl_mem), &array->ocl);
  if (err)
    return err;

  size_t sz = array->len * 4;
  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, kernel, 1, NULL, &sz, NULL, 0, NULL, NULL);
  if (err)
    return err;

  // Memory release
  clReleaseKernel(kernel);
  clReleaseProgram(program);

  return CL_SUCCESS;
}

JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_test_VectorArrayTest_nativeRun(JNIEnv* env, jobject obj) {
  int err;

  fcFloat3Array* f0 = calloc(1, sizeof(fcFloat3Array));
  err = fcFloat3Array_initSize(f0, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_initSize:f0", JNI_FALSE);

  if (f0->len != n)
    return JNI_FALSE;

  for (int i = 0; i < n; ++i) {
    err = fcFloat3Array_set(f0, i, fcFloat3_create111(1.0f * i, 1.5f * i, 2.0f * i));
    FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_set:f0", JNI_FALSE);
  }

  err = fcFloat3Array_syncToHost(f0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToHost:f0", JNI_FALSE);

  for (int i = 0; i < n; ++i) {
    if (fcInt3_any(fcFloat3_isNotEqual(f0->c[i], fcFloat3_create111(1.0f * i, 1.5f * i, 2.0f * i))))
      return JNI_FALSE;
  }

  err = fcFloat3Array_syncToDevice(f0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToDevice:f0", JNI_FALSE);
  err = fcFloat3Array_syncToHost(f0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_syncToHost:f0", JNI_FALSE);

  const int f0_stride = sizeof(fcFloat3) / sizeof(fcFloat);
  float f0_[f0->len * f0_stride];
  memcpy(f0_, f0->c, f0->len * sizeof(fcFloat3));

  for (int i = 0; i < n; ++i) {
    fcFloat3 elem = f0->c[i];
    int baseIdx = i * f0_stride;

    if (elem.x != f0_[baseIdx] || elem.y != f0_[baseIdx + 1] || elem.z != f0_[baseIdx + 2])
      return JNI_FALSE;
  }

  f0_[0] = f0_[0] + 10;
  if (f0_[0] == f0->c[0].x || f0_[1] != f0->c[0].y || f0_[2] != f0->c[0].z)
    return JNI_FALSE;

  float f0_notaligned[f0->len * 3];
  for (int i = 0; i < n; ++i) {
    int srcIdx = i * f0_stride;
    int outIdx = i * 3;

    f0_notaligned[outIdx] = f0_[srcIdx];
    f0_notaligned[outIdx + 1] = f0_[srcIdx + 1];
    f0_notaligned[outIdx + 2] = f0_[srcIdx + 2];
  }

  err = fcFloat3Array_setArray(f0, f0->len * 3, f0_notaligned);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_setContents:f0", JNI_FALSE);

  for (int i = 0; i < n; ++i) {
    fcFloat3 elem = f0->c[i];
    int baseIdx = i * 3;

    if (elem.x != f0_notaligned[baseIdx] || elem.y != f0_notaligned[baseIdx + 1] ||
        elem.z != f0_notaligned[baseIdx + 2])
      return JNI_FALSE;
  }

  const size_t b0_len = sizeof(x) / sizeof(x[0]);
  fcByte4Array* b0 = calloc(1, sizeof(fcByte4Array));
  err = fcByte4Array_initArray(b0, b0_len, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_initArray:b0", JNI_FALSE);

  if (b0->len != b0_len / 4)
    return JNI_FALSE;

  err = fcByte4Array_syncToHost(b0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost:b0", JNI_FALSE);

  for (int i = 0; i < b0->len; ++i) {
    fcByte4 elem = b0->c[i];
    int baseIdx = i * 4;

    if (elem.x != x[baseIdx] || elem.y != x[baseIdx + 1] || elem.z != x[baseIdx + 2] ||
        elem.w != x[baseIdx + 3])
      return JNI_FALSE;
  }

  fcByte b0_[b0->len * 4];
  for (int i = 0; i < b0->len; ++i) {
    fcByte4 elem = b0->c[i];
    int baseIdx = i * 4;

    b0_[baseIdx] = elem.x;
    b0_[baseIdx + 1] = elem.y;
    b0_[baseIdx + 2] = elem.z;
    b0_[baseIdx + 3] = elem.w;
  }

  err = process(b0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "process", JNI_FALSE);
  err = fcByte4Array_syncToHost(b0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost:b0", JNI_FALSE);

  for (int i = 0; i < b0->len; ++i) {
    fcByte4 elem = b0->c[i];
    int baseIdx = i * 4;

    if (elem.x != b0_[baseIdx] + 1 || elem.y != b0_[baseIdx + 1] + 2 ||
        elem.z != b0_[baseIdx + 2] + 3 || elem.w != b0_[baseIdx + 3] + 4)
      return JNI_FALSE;
  }

  fcByte4Array* b1 = calloc(1, sizeof(fcByte4Array));
  err = fcByte4Array_initCopy(b1, b0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_initCopy:b1", JNI_FALSE);

  if (b1->len != b0->len)
    return JNI_FALSE;

  err = fcByte4Array_syncToHost(b0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost:b0", JNI_FALSE);
  err = fcByte4Array_syncToHost(b1);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToHost:b1", JNI_FALSE);

  for (int i = 0; i < b0->len; ++i) {
    if (fcInt4_any(fcByte4_isNotEqual(b0->c[i], b1->c[i])))
      return JNI_FALSE;
  }

  b1->c[0] = fcByte4_create112((fcByte) (b1->c[0].x + 10), b1->c[0].y, b1->c[0].hi);
  fcInt4 b0b1_eq = fcByte4_isEqual(b0->c[0], b1->c[0]);

  if (b0b1_eq.x != 0 || !fcInt3_all(fcInt3_create111(b0b1_eq.y, b0b1_eq.z, b0b1_eq.w)))
    return JNI_FALSE;

  err = fcFloat3Array_release(f0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcFloat3Array_release:f0", JNI_FALSE);
  err = fcByte4Array_release(b0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_release:b0", JNI_FALSE);
  err = fcByte4Array_release(b1);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_release:b1", JNI_FALSE);

  return JNI_TRUE;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_test_VectorArrayTest_nativeProcess(JNIEnv* env, jobject obj,
                                                                           jobject jniarray) {
  cl_int err;

  // Process parameter
  fcByte4Array* array = fcByte4Array_getJava(env, jniarray);
  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDoubleArray_getJava",
                           FC_VOID_EXPR);

  err = fcByte4Array_syncToDevice(array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4Array_syncToDevice", FC_VOID_EXPR);

  // Kernel compilation
  cl_program program = fcOpenCL_compileKernel(1, &kernel_src, &err);
  FC_EXCEPTION_HANDLE_BUILD(env, err, "fcOpenCL_compileKernel", program, FC_VOID_EXPR);

  cl_kernel kernel = clCreateKernel(program, "sums", &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "clCreateKernel", FC_VOID_EXPR);

  // Kernel execution
  err = clSetKernelArg(kernel, 0, sizeof(cl_mem), &array->ocl);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "clSetKernelArg", FC_VOID_EXPR);

  size_t sz = array->len * 4;
  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, kernel, 1, NULL, &sz, NULL, 0, NULL, NULL);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "clEnqueueNDRangeKernel", FC_VOID_EXPR);

  fcByte4Array_syncToHost(array);

  // Memory release
  clReleaseKernel(kernel);
  clReleaseProgram(program);
}
