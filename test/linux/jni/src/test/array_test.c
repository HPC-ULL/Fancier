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


static const char* kernel_src = "#pragma OPENCL EXTENSION cl_khr_fp64 : enable\n"
                                "void kernel x2(__global float* v) {\n"
                                "  v[get_global_id(0)] *= 2;\n"
                                "}";

static const int n = 10;
static const float x[] = {1.0f, 2.5f, 4.0f};


static int process(fcFloatArray* array) {
  cl_int err;

  err = fcFloatArray_syncToOCL(array);
  if (err)
    return err;

  // Kernel compilation
  cl_program program = fcOpenCL_compileKernel(1, &kernel_src, &err);
  if (err)
    return err;

  cl_kernel kernel = clCreateKernel(program, "x2", &err);
  if (err)
    return err;

  // Kernel execution
  err = clSetKernelArg(kernel, 0, sizeof(cl_mem), &array->ocl);
  if (err)
    return err;

  err =
      clEnqueueNDRangeKernel(fcOpenCL_rt.queue, kernel, 1, NULL, &array->len, NULL, 0, NULL, NULL);
  if (err)
    return err;

  // Memory release
  clReleaseKernel(kernel);
  clReleaseProgram(program);

  return CL_SUCCESS;
}

JNIEXPORT jboolean JNICALL
Java_es_ull_pcg_hpc_fancier_linuxtest_test_ArrayTest_nativeRun(JNIEnv* env, jobject obj) {
  int err;

  fcShortArray* s0 = calloc(1, sizeof(fcShortArray));
  err = fcShortArray_initSize(s0, n);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_initSize", JNI_FALSE);

  if (s0->len != n)
    return JNI_FALSE;

  err = fcShortArray_syncToNative(s0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToNative", JNI_FALSE);

  for (int i = 0; i < n; ++i) {
    s0->c[i] = (short) (i * 2);
  }


  for (int i = 0; i < n; ++i) {
    if (s0->c[i] != (short) (i * 2))
      return JNI_FALSE;
  }

  err = fcShortArray_syncToOCL(s0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToOCL", JNI_FALSE);
  err = fcShortArray_syncToNative(s0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToNative", JNI_FALSE);

  short s0_[n];
  for (int i = 0; i < n; ++i) {
    s0_[i] = (short) (s0->c[i] + 1);
  }

  err = fcShortArray_setArray(s0, n, s0_);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_setContents", JNI_FALSE);
  err = fcShortArray_syncToNative(s0); // Just in case... This doesn't add much overhead
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_syncToNative", JNI_FALSE);

  for (int i = 0; i < n; ++i) {
    if (s0->c[i] != s0_[i])
      return JNI_FALSE;
  }

  const size_t d0_len = sizeof(x) / sizeof(x[0]);
  fcFloatArray* d0 = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initArray(d0, d0_len, x);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_initArray", JNI_FALSE);

  if (d0->len != d0_len)
    return JNI_FALSE;

  err = fcFloatArray_syncToNative(d0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToNative", JNI_FALSE);

  for (int i = 0; i < d0->len; ++i) {
    if (d0->c[i] != x[i])
      return JNI_FALSE;
  }

  float d0_[d0_len];
  memcpy(d0_, d0->c, d0->len * sizeof(cl_float));
  err = process(d0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "process", JNI_FALSE);
  err = fcFloatArray_syncToNative(d0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToNative", JNI_FALSE);

  for (int i = 0; i < d0->len; ++i) {
    if (d0->c[i] != d0_[i] * 2)
      return JNI_FALSE;
  }

  fcFloatArray* d1 = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initCopy(d1, d0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_initCopy", JNI_FALSE);

  if (d1->len != d0->len)
    return JNI_FALSE;

  err = fcFloatArray_syncToNative(d0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToNative", JNI_FALSE);
  err = fcFloatArray_syncToNative(d1);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToNative", JNI_FALSE);

  for (int i = 0; i < d0->len; ++i) {
    if (d0->c[i] != d1->c[i])
      return JNI_FALSE;
  }

  d1->c[0] += 10;
  if (d0->c[0] == d1->c[0])
    return JNI_FALSE;

  err = fcShortArray_release(s0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcShortArray_release", JNI_FALSE);
  err = fcFloatArray_release(d0);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_release", JNI_FALSE);
  err = fcFloatArray_release(d1);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_release", JNI_FALSE);

  return JNI_TRUE;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_linuxtest_test_ArrayTest_nativeProcess(JNIEnv* env, jobject obj,
                                                                     jobject jniarray) {
  cl_int err;

  // Process parameter
  fcFloatArray* array = fcFloatArray_getJava(env, jniarray);
  FC_EXCEPTION_HANDLE_NULL(env, array, FC_EXCEPTION_BAD_PARAMETER, "fcDoubleArray_getJava",
                           FC_VOID_EXPR);

  err = fcFloatArray_syncToOCL(array);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcDoubleArray_syncToOCL", FC_VOID_EXPR);

  // Kernel compilation
  cl_program program = fcOpenCL_compileKernel(1, &kernel_src, &err);
  FC_EXCEPTION_HANDLE_BUILD(env, err, "fcOpenCL_compileKernel", program, FC_VOID_EXPR);

  cl_kernel kernel = clCreateKernel(program, "x2", &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "clCreateKernel", FC_VOID_EXPR);

  // Kernel execution
  err = clSetKernelArg(kernel, 0, sizeof(cl_mem), &array->ocl);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "clSetKernelArg", FC_VOID_EXPR);

  err =
      clEnqueueNDRangeKernel(fcOpenCL_rt.queue, kernel, 1, NULL, &array->len, NULL, 0, NULL, NULL);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "clEnqueueNDRangeKernel", FC_VOID_EXPR);

  fprintf(stderr, "[NATIVE] clEnqueueNDRangeKernel\n");
  fprintf(stderr, "[NATIVE] array lenght = %i\n", array->len);

  fcFloatArray_syncToNative(array);
  fprintf(stderr, "[NATIVE] fcDoubleArray_syncToNative\n");

  // Memory release
  clReleaseKernel(kernel);
  clReleaseProgram(program);

  fprintf(stderr, "[NATIVE] nativeProcess end\n");
}
