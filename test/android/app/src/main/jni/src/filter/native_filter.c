#define FC_LOG_TAG "NativeFilter"

#include <fancier.h>
#include <fancier/internal/snippets.inc>

#include <string.h>
#include <fancier/color.h>


#define MAX_KERNELS 4

#define RED_WEIGHT 0.299f
#define GREEN_WEIGHT 0.587f
#define BLUE_WEIGHT 0.114f

#define BLUR_RADIUS 5
#define CONVOLVE3_00 0
#define CONVOLVE3_01 -1
#define CONVOLVE3_02 0
#define CONVOLVE3_10 -1
#define CONVOLVE3_11 5
#define CONVOLVE3_12 -1
#define CONVOLVE3_20 0
#define CONVOLVE3_21 -1
#define CONVOLVE3_22 0
#define CONVOLVE5_00 0
#define CONVOLVE5_01 0
#define CONVOLVE5_02 -1
#define CONVOLVE5_03 0
#define CONVOLVE5_04 0
#define CONVOLVE5_10 0
#define CONVOLVE5_11 -1
#define CONVOLVE5_12 -2
#define CONVOLVE5_13 -1
#define CONVOLVE5_14 0
#define CONVOLVE5_20 -1
#define CONVOLVE5_21 -2
#define CONVOLVE5_22 16
#define CONVOLVE5_23 -2
#define CONVOLVE5_24 -1
#define CONVOLVE5_30 0
#define CONVOLVE5_31 -1
#define CONVOLVE5_32 -2
#define CONVOLVE5_33 -1
#define CONVOLVE5_34 0
#define CONVOLVE5_40 0
#define CONVOLVE5_41 0
#define CONVOLVE5_42 -1
#define CONVOLVE5_43 0
#define CONVOLVE5_44 0
#define BILATERAL_RADIUS 10
#define BILATERAL_PRESERVATION 0.5f
#define MEDIAN_RADIUS 7
#define CONTRAST_ENHANCEMENT 0.5f
#define FISHEYE_CENTER_X 0.5f
#define FISHEYE_CENTER_Y 0.5f
#define FISHEYE_SCALE 0.75f
#define LEVELS_IN_BLACK 0.0f
#define LEVELS_OUT_BLACK 40.0f
#define LEVELS_IN_WHITE 200.0f
#define LEVELS_OUT_WHITE 255.0f
#define LEVELS_SATURATION 1.5f
#define POSTERIZE_INTENSITY0 0.0f
#define POSTERIZE_INTENSITY1 0.2f
#define POSTERIZE_INTENSITY2 0.4f
#define POSTERIZE_INTENSITY3 0.6f
#define POSTERIZE_INTENSITY4 0.8f
#define POSTERIZE_INTENSITY5 1.0f
#define POSTERIZE_COLOR0 fcRGBAColor_RED
#define POSTERIZE_COLOR1 fcRGBAColor_GREEN
#define POSTERIZE_COLOR2 fcRGBAColor_BLUE
#define POSTERIZE_COLOR3 fcRGBAColor_YELLOW
#define POSTERIZE_COLOR4 fcRGBAColor_CYAN

typedef struct {
  cl_program m_program;
  cl_kernel m_kernels[MAX_KERNELS];
  int m_kernel_id;
} NativeImageFilter;

enum {
  GRAYSCALE, BLUR, CONVOLVE3, CONVOLVE5, BILATERAL, MEDIAN, CONTRAST, FISHEYE, LEVELS, POSTERIZE
};


static jclass NativeImageFilter_class = NULL;
FC_JAVA_INSTANCE_HANDLERS(NativeImageFilter);


static int run_grayscale_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_blur_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_convolve3_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_convolve5_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_bilateral_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_median_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_contrast_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_fisheye_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_levels_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_posterize_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);

static void run_grayscale_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_blur_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_convolve3_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_convolve5_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_bilateral_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_median_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_contrast_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_fisheye_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_levels_cpu(fcRGBAImage* input, fcRGBAImage* output);
static void run_posterize_cpu(fcRGBAImage* input, fcRGBAImage* output);


JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_setupGpu(JNIEnv* env, jobject obj,
                                                                         jobject asset_manager,
                                                                         int kernel_id) {
  // Initialize class and create native instance
  if (!NativeImageFilter_class)
    FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/androidtest/model/NativeImageFilter",
                      NativeImageFilter_class, "NativeImageFilter.setupGpu", FC_VOID_EXPR);

  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  if (!self)
    self = NativeImageFilter_allocJava(env, obj);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.setupGpu",
                           FC_VOID_EXPR);

  // OpenCL program compilation
  cl_int err;
  self->m_program = fcOpenCL_compileKernelAsset(env, asset_manager, "", "filters.cl", &err);
  FC_EXCEPTION_HANDLE_BUILD(env, err, "fcOpenCL_compileKernelAsset", self->m_program, FC_VOID_EXPR);

  // Only create the cl_kernel object for the specified kernel
  self->m_kernel_id = kernel_id;
  const char* kernel_names[MAX_KERNELS];
  int num_kernels = 1;

  switch (kernel_id) {
  case GRAYSCALE:
    kernel_names[0] = "grayscale";
    break;
  case BLUR:
    kernel_names[0] = "blur_h";
    kernel_names[1] = "blur_v";
    num_kernels = 2;
    break;
  case CONVOLVE3:
    kernel_names[0] = "convolve3x3";
    break;
  case CONVOLVE5:
    kernel_names[0] = "convolve5x5";
    break;
  case BILATERAL:
    kernel_names[0] = "bilateral";
    break;
  case MEDIAN:
    kernel_names[0] = "median";
    break;
  case CONTRAST:
    kernel_names[0] = "contrast";
    break;
  case FISHEYE:
    kernel_names[0] = "fisheye";
    break;
  case LEVELS:
    kernel_names[0] = "levels";
    break;
  case POSTERIZE:
    kernel_names[0] = "posterize";
    break;
  default:
    FC_LOGERROR_FMT("Kernel ID: %d not implemented", kernel_id);
    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter_setupGpu", FC_EXCEPTION_OTHER);
    num_kernels = 0;
    break;
  }

  for (int i = 0; i < num_kernels; ++i) {
    self->m_kernels[i] = clCreateKernel(self->m_program, kernel_names[i], &err);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "clCreateKernel", FC_VOID_EXPR);
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_setupCpu(JNIEnv* env, jobject obj,
                                                                         int kernel_id) {
  // Initialize class and create native instance
  if (!NativeImageFilter_class)
    FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/androidtest/model/NativeImageFilter",
                      NativeImageFilter_class, "NativeImageFilter.setupCpu", FC_VOID_EXPR);

  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  if (!self)
    self = NativeImageFilter_allocJava(env, obj);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.setupCpu",
                           FC_VOID_EXPR);

  // Set the kernel ID
  self->m_kernel_id = kernel_id;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_processGpu(JNIEnv* env,
                                                                           jobject obj,
                                                                           jobject jni_input,
                                                                           jobject jni_output) {
  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.processGpu",
                           FC_VOID_EXPR);

  fcRGBAImage* input = fcRGBAImage_getJava(env, jni_input);
  fcRGBAImage* output = fcRGBAImage_getJava(env, jni_output);

  if (!fcRGBAImage_valid(input) || !fcRGBAImage_valid(output)) {
    fcException_throwNative(env, __FILE__, __LINE__, "fcARGBImage_valid",
                            FC_EXCEPTION_BAD_PARAMETER);
    return;
  }

  // Ensure data is updated in the target device
  int err = fcRGBAImage_syncToOCL(input);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_syncToOCL:input", FC_VOID_EXPR);

  err = fcRGBAImage_syncToOCL(output);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_syncToOCL:output", FC_VOID_EXPR);

  // Execute kernel
  switch (self->m_kernel_id) {
  case GRAYSCALE:
    err = run_grayscale_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_grayscale_gpu", FC_VOID_EXPR);
    break;
  case BLUR:
    err = run_blur_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_blur_gpu", FC_VOID_EXPR);
    break;
  case CONVOLVE3:
    err = run_convolve3_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_convolve3_gpu", FC_VOID_EXPR);
    break;
  case CONVOLVE5:
    err = run_convolve5_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_convolve5_gpu", FC_VOID_EXPR);
    break;
  case BILATERAL:
    err = run_bilateral_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_bilateral_gpu", FC_VOID_EXPR);
    break;
  case MEDIAN:
    err = run_median_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_median_gpu", FC_VOID_EXPR);
    break;
  case CONTRAST:
    err = run_contrast_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_contrast_gpu", FC_VOID_EXPR);
    break;
  case FISHEYE:
    err = run_fisheye_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_fisheye_gpu", FC_VOID_EXPR);
    break;
  case LEVELS:
    err = run_levels_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_levels_gpu", FC_VOID_EXPR);
    break;
  case POSTERIZE:
    err = run_posterize_gpu(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_posterize_gpu", FC_VOID_EXPR);
    break;
  default:
    FC_LOGERROR_FMT("Unknown kernel id: %d", self->m_kernel_id);
    break;
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_processCpu(JNIEnv* env,
                                                                           jobject obj,
                                                                           jobject jni_input,
                                                                           jobject jni_output) {
  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.processCpu",
                           FC_VOID_EXPR);

  fcRGBAImage* input = fcRGBAImage_getJava(env, jni_input);
  fcRGBAImage* output = fcRGBAImage_getJava(env, jni_output);

  if (!fcRGBAImage_valid(input) || !fcRGBAImage_valid(output)) {
    fcException_throwNative(env, __FILE__, __LINE__, "fcARGBImage_valid",
                            FC_EXCEPTION_BAD_PARAMETER);
    return;
  }

  // Ensure data is updated in the target device
  int err = fcRGBAImage_syncToNative(input);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_syncToNative:input", FC_VOID_EXPR);

  err = fcRGBAImage_syncToNative(output);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_syncToNative:output", FC_VOID_EXPR);

  // Execute kernel
  switch (self->m_kernel_id) {
  case GRAYSCALE:
    run_grayscale_cpu(input, output);
    break;
  case BLUR:
    run_blur_cpu(input, output);
    break;
  case CONVOLVE3:
    run_convolve3_cpu(input, output);
    break;
  case CONVOLVE5:
    run_convolve5_cpu(input, output);
    break;
  case BILATERAL:
    run_bilateral_cpu(input, output);
    break;
  case MEDIAN:
    run_median_cpu(input, output);
    break;
  case CONTRAST:
    run_contrast_cpu(input, output);
    break;
  case FISHEYE:
    run_fisheye_cpu(input, output);
    break;
  case LEVELS:
    run_levels_cpu(input, output);
    break;
  case POSTERIZE:
    run_posterize_cpu(input, output);
    break;
  default:
    FC_LOGERROR_FMT("Unknown kernel id: %d", self->m_kernel_id);
    break;
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_releaseNative(JNIEnv* env,
                                                                              jobject obj) {
  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);

  if (self) {
    for (int i = 0; i < MAX_KERNELS; ++i) {
      if (self->m_kernels[i])
        clReleaseKernel(self->m_kernels[i]);
    }

    if (self->m_program)
      clReleaseProgram(self->m_program);

    NativeImageFilter_freeJava(env, obj);
  }
}

// Helpers

static void blur_build_mask(float* gauss_kernel, int radius) {
  int r;
  float sigma = 0.4f * radius + 0.6f;
  float coeff1 = 1.0f / (fcMath_sqrtf(2.0f * CL_M_PI_F) * sigma);
  float coeff2 = -1.0f / (2.0f * sigma * sigma);

  float normalize_factor = 0.0f;
  for (r = -radius; r <= radius; r++) {
    gauss_kernel[r + radius] = coeff1 * fcMath_powf(CL_M_E_F, r * r * coeff2);
    normalize_factor += gauss_kernel[r + radius];
  }

  normalize_factor = 1.0f / normalize_factor;
  for (r = -radius; r <= radius; r++) {
    gauss_kernel[r + radius] *= normalize_factor;
  }
}

static void levels_build_sat_matrix(fcFloat3* m, float saturation) {
  const fcFloat3 weights =
      fcFloat3_mulkf(fcFloat3_create111(RED_WEIGHT, GREEN_WEIGHT, BLUE_WEIGHT), 1.0f - saturation);

  m[0] = fcFloat3_add(weights, fcFloat3_create111(saturation, 0.0f, 0.0f));
  m[1] = fcFloat3_add(weights, fcFloat3_create111(0.0f, saturation, 0.0f));
  m[2] = fcFloat3_add(weights, fcFloat3_create111(0.0f, 0.0f, saturation));
}

//
// GPU kernel execution
//

static int run_grayscale_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    return err;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    return err;

  return FC_EXCEPTION_SUCCESS;
}

static int run_blur_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Create gaussian kernel mask
  fcFloatArray* gauss_kernel = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initSize(gauss_kernel, BLUR_RADIUS * 2 + 1);
  if (err)
    goto mask_cleanup;

  err = fcFloatArray_syncToNative(gauss_kernel);
  if (err)
    goto mask_cleanup;

  blur_build_mask(gauss_kernel->c, BLUR_RADIUS);

  err = fcFloatArray_syncToOCL(gauss_kernel);
  if (err)
    goto mask_cleanup;

  // Create intermediate buffer
  fcRGBAImage* buffer = calloc(1, sizeof(fcRGBAImage));
  err = fcRGBAImage_initDims(buffer, input->dims);
  if (err)
    goto cleanup;

  err = fcRGBAImage_syncToOCL(buffer);
  if (err)
    goto cleanup;

  // Launch horizontal / vertical kernels
  cl_int radius = BLUR_RADIUS;
  size_t sz[] = {input->dims.x, input->dims.y};

  // Execute horizontal kernel
  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_mem), &gauss_kernel->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_int), &radius);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 3, sizeof(cl_mem), &buffer->pixels->ocl);
  if (err)
    goto cleanup;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    goto cleanup;

  // Execute vertical kernel
  err = clSetKernelArg(self->m_kernels[1], 0, sizeof(cl_mem), &buffer->pixels->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[1], 1, sizeof(cl_mem), &gauss_kernel->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[1], 2, sizeof(cl_int), &radius);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[1], 3, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    goto cleanup;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[1], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    goto cleanup;

cleanup:
  fcRGBAImage_release(buffer);

mask_cleanup:
  fcFloatArray_release(gauss_kernel);

  return err;
}

static int run_convolve3_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Set up 3x3 convolution mask (sharpening)
  fcFloatArray* mask = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initSize(mask, 9);
  if (err)
    goto cleanup;

  err = fcFloatArray_syncToNative(mask);
  if (err)
    goto cleanup;

  mask->c[0] = CONVOLVE3_00;
  mask->c[1] = CONVOLVE3_01;
  mask->c[2] = CONVOLVE3_02;
  mask->c[3] = CONVOLVE3_10;
  mask->c[4] = CONVOLVE3_11;
  mask->c[5] = CONVOLVE3_12;
  mask->c[6] = CONVOLVE3_20;
  mask->c[7] = CONVOLVE3_21;
  mask->c[8] = CONVOLVE3_22;

  err = fcFloatArray_syncToOCL(mask);
  if (err)
    goto cleanup;

  // Execute kernel
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_mem), &mask->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    goto cleanup;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    goto cleanup;

cleanup:
  fcFloatArray_release(mask);
  return err;
}

static int run_convolve5_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Set up 5x5 convolution mask (laplacian of gaussian)
  fcFloatArray* mask = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initSize(mask, 25);
  if (err)
    goto cleanup;

  err = fcFloatArray_syncToNative(mask);
  if (err)
    goto cleanup;

  mask->c[0] = CONVOLVE5_00;
  mask->c[1] = CONVOLVE5_01;
  mask->c[2] = CONVOLVE5_02;
  mask->c[3] = CONVOLVE5_03;
  mask->c[4] = CONVOLVE5_04;
  mask->c[5] = CONVOLVE5_10;
  mask->c[6] = CONVOLVE5_11;
  mask->c[7] = CONVOLVE5_12;
  mask->c[8] = CONVOLVE5_13;
  mask->c[9] = CONVOLVE5_14;
  mask->c[10] = CONVOLVE5_20;
  mask->c[11] = CONVOLVE5_21;
  mask->c[12] = CONVOLVE5_22;
  mask->c[13] = CONVOLVE5_23;
  mask->c[14] = CONVOLVE5_24;
  mask->c[15] = CONVOLVE5_30;
  mask->c[16] = CONVOLVE5_31;
  mask->c[17] = CONVOLVE5_32;
  mask->c[18] = CONVOLVE5_33;
  mask->c[19] = CONVOLVE5_34;
  mask->c[20] = CONVOLVE5_40;
  mask->c[21] = CONVOLVE5_41;
  mask->c[22] = CONVOLVE5_42;
  mask->c[23] = CONVOLVE5_43;
  mask->c[24] = CONVOLVE5_44;

  err = fcFloatArray_syncToOCL(mask);
  if (err)
    goto cleanup;

  // Execute kernel
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_mem), &mask->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    goto cleanup;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    goto cleanup;

cleanup:
  fcFloatArray_release(mask);
  return err;
}

static int run_bilateral_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  cl_int radius = BILATERAL_RADIUS;
  cl_float preservation = BILATERAL_PRESERVATION;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_int), &radius);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_float), &preservation);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 3, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    return err;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    return err;

  return FC_EXCEPTION_SUCCESS;
}

static int run_median_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  cl_int radius = MEDIAN_RADIUS;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_int), &radius);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    return err;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    return err;

  return FC_EXCEPTION_SUCCESS;
}

static int run_contrast_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  cl_float enhancement = CONTRAST_ENHANCEMENT;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_float), &enhancement);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    return err;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    return err;

  return FC_EXCEPTION_SUCCESS;
}

static int run_fisheye_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  fcFloat2 center = fcFloat2_create11(FISHEYE_CENTER_X, FISHEYE_CENTER_Y);
  cl_float scale = FISHEYE_SCALE;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(fcFloat2), &center);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(cl_float), &scale);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 3, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    return err;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    return err;

  return FC_EXCEPTION_SUCCESS;
}

static int run_levels_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  fcFloat3Array* sat_matrix = calloc(1, sizeof(fcFloat3Array));
  err = fcFloat3Array_initSize(sat_matrix, 3);
  if (err)
    goto cleanup;

  err = fcFloat3Array_syncToNative(sat_matrix);
  if (err)
    goto cleanup;

  levels_build_sat_matrix(sat_matrix->c, LEVELS_SATURATION);

  err = fcFloat3Array_syncToOCL(sat_matrix);
  if (err)
    goto cleanup;

  // Execute kernel
  fcFloat2 black_levels = fcFloat2_create11(LEVELS_IN_BLACK, LEVELS_OUT_BLACK);
  fcFloat2 white_levels = fcFloat2_create11(LEVELS_IN_WHITE, LEVELS_OUT_WHITE);
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_mem), &sat_matrix->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(fcFloat2), &black_levels);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 3, sizeof(fcFloat2), &white_levels);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 4, sizeof(cl_mem), &output->pixels->ocl);
  if (err)
    goto cleanup;

  err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                               NULL);
  if (err)
    goto cleanup;

cleanup:
  fcFloat3Array_release(sat_matrix);
  return err;
}

static int run_posterize_gpu(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  size_t sz[] = {input->dims.x, input->dims.y};
  const fcFloat2 intensities[] = {
      fcFloat2_create11(POSTERIZE_INTENSITY0, POSTERIZE_INTENSITY1),
      fcFloat2_create11(POSTERIZE_INTENSITY1, POSTERIZE_INTENSITY2),
      fcFloat2_create11(POSTERIZE_INTENSITY2, POSTERIZE_INTENSITY3),
      fcFloat2_create11(POSTERIZE_INTENSITY3, POSTERIZE_INTENSITY4),
      fcFloat2_create11(POSTERIZE_INTENSITY4, POSTERIZE_INTENSITY5)
  };
  const fcByte4 colors[] = {
      POSTERIZE_COLOR0,
      POSTERIZE_COLOR1,
      POSTERIZE_COLOR2,
      POSTERIZE_COLOR3,
      POSTERIZE_COLOR4
  };
  const int num_stages = sizeof(intensities) / sizeof(intensities[0]);

  for (int i = 0; i < num_stages; ++i) {
    err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
    if (err)
      return err;

    err = clSetKernelArg(self->m_kernels[0], 1, sizeof(fcFloat2), &intensities[i]);
    if (err)
      return err;

    err = clSetKernelArg(self->m_kernels[0], 2, sizeof(fcByte4), &colors[i]);
    if (err)
      return err;

    err = clSetKernelArg(self->m_kernels[0], 3, sizeof(cl_mem), &output->pixels->ocl);
    if (err)
      return err;

    err = clEnqueueNDRangeKernel(fcOpenCL_rt.queue, self->m_kernels[0], 2, NULL, sz, NULL, 0, NULL,
                                 NULL);
    if (err)
      return err;
  }

  return FC_EXCEPTION_SUCCESS;
}


// Native helpers

static inline int index_img(fcInt2 dims, int x, int y) {
  return y * dims.x + x;
}

static fcByte4 bilinear_interp(const fcByte4* img, fcInt2 dims, fcFloat2 coord) {
  fcFloat2 pos_coord = fcFloat2_max(coord, fcFloat2_create1(0.0f));

  uint x0 = fcMath_min((uint) fcMath_trunc(pos_coord.x), dims.x - 1);
  uint x1 = fcMath_min(x0 + 1, dims.x - 1);
  uint y0 = fcMath_min((uint) fcMath_trunc(pos_coord.y), dims.y - 1);
  uint y1 = fcMath_min(y0 + 1, dims.y - 1);

  fcFloat4 p00 = fcByte4_convertFloat4(img[index_img(dims, x0, y0)]);
  fcFloat4 p01 = fcByte4_convertFloat4(img[index_img(dims, x0, y1)]);
  fcFloat4 p10 = fcByte4_convertFloat4(img[index_img(dims, x1, y0)]);
  fcFloat4 p11 = fcByte4_convertFloat4(img[index_img(dims, x1, y1)]);

  float slopex0 = (float) x1 - pos_coord.x;
  float slopex1 = pos_coord.x - (float) x0;

  fcFloat4 pxy0 = fcFloat4_add(fcFloat4_mulkf(p00, slopex0), fcFloat4_mulkf(p10, slopex1));
  fcFloat4 pxy1 = fcFloat4_add(fcFloat4_mulkf(p01, slopex0), fcFloat4_mulkf(p11, slopex1));

  fcFloat4 out = fcFloat4_add(fcFloat4_mulkf(pxy0, ((float) y1 - coord.y)), fcFloat4_mulkf(pxy1, (coord.y - (float) y0)));
  return fcFloat4_convertByte4(fcFloat4_clampk(out, 0.0f, 255.0f));
}

static inline fcFloat3 matrix3x3_vector_multiply(const fcFloat3* m, fcFloat3 v) {
  return fcFloat3_create111(fcFloat3_dot(m[0], v), fcFloat3_dot(m[1], v), fcFloat3_dot(m[2], v));
}

//
// CPU kernel execution
//

static void run_grayscale_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const fcFloat3 weights = fcFloat3_create111(RED_WEIGHT, GREEN_WEIGHT, BLUE_WEIGHT);

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < input->dims.y; ++y) {
    for (int x = 0; x < input->dims.x; ++x) {
      int index = index_img(input->dims, x, y);
      fcByte4 pixel_in = in[index];
      cl_byte gray_value = fcFloat3_dot(fcByte3_convertFloat3(fcByte4_asByte3(pixel_in)), weights);
      out[index] = fcByte4_create1111(gray_value, gray_value, gray_value, pixel_in.w);
    }
  }
}

static void run_blur_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  float gauss_kernel[BLUR_RADIUS * 2 + 1];
  blur_build_mask(gauss_kernel, BLUR_RADIUS);

  // Create intermediate buffer
  fcRGBAImage* buffer = calloc(1, sizeof(fcRGBAImage));
  int err = fcRGBAImage_initDims(buffer, input->dims);
  if (err)
    goto cleanup;

  err = fcRGBAImage_syncToNative(buffer);
  if (err)
    goto cleanup;

  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcByte4* in = input->pixels->c;
  fcByte4* buf = buffer->pixels->c;
  fcByte4* out = output->pixels->c;

  // Horizontal (input -> buffer)
  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      fcFloat4 blurred_pixel = fcFloat4_create1(0.0f);
      int kernel_index = 0;

      if (x <= BLUR_RADIUS || x >= width - BLUR_RADIUS) {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          int x_2 = fcMath_clamp(x + r, 0, width - 1);
          blurred_pixel = fcFloat4_add(blurred_pixel, fcFloat4_mulkf(
              fcByte4_convertFloat4(in[index_img(input->dims, x_2, y)]),
              gauss_kernel[kernel_index++]));
        }
      }
      else {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          blurred_pixel = fcFloat4_add(blurred_pixel, fcFloat4_mulkf(
              fcByte4_convertFloat4(in[index_img(input->dims, x + r, y)]),
              gauss_kernel[kernel_index++]));
        }
      }

      buf[index_img(buffer->dims, x, y)] = fcFloat4_convertByte4(blurred_pixel);
    }
  }

  // Vertical (buffer -> output)
  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      fcFloat4 blurred_pixel = fcFloat4_create1(0.0f);
      int kernel_index = 0;

      if (y <= BLUR_RADIUS || y >= height - BLUR_RADIUS) {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          int y_2 = fcMath_clamp(y + r, 0, height - 1);
          blurred_pixel = fcFloat4_add(blurred_pixel, fcFloat4_mulkf(
              fcByte4_convertFloat4(buf[index_img(buffer->dims, x, y_2)]),
              gauss_kernel[kernel_index++]));
        }
      }
      else {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          blurred_pixel = fcFloat4_add(blurred_pixel, fcFloat4_mulkf(
              fcByte4_convertFloat4(buf[index_img(buffer->dims, x, y + r)]),
              gauss_kernel[kernel_index++]));
        }
      }

      out[index_img(output->dims, x, y)] = fcFloat4_convertByte4(blurred_pixel);
    }
  }

cleanup:
  fcRGBAImage_release(buffer);
}

static void run_convolve3_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  float mask[3 * 3];

  mask[0] = CONVOLVE3_00;
  mask[1] = CONVOLVE3_01;
  mask[2] = CONVOLVE3_02;
  mask[3] = CONVOLVE3_10;
  mask[4] = CONVOLVE3_11;
  mask[5] = CONVOLVE3_12;
  mask[6] = CONVOLVE3_20;
  mask[7] = CONVOLVE3_21;
  mask[8] = CONVOLVE3_22;

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < input->dims.y; ++y) {
    for (int x = 0; x < input->dims.x; ++x) {
      int x0 = fcMath_max((int) x - 1, 0);
      int x1 = fcMath_min(x + 1, input->dims.x - 1);
      int y0 = fcMath_max((int) y - 1, 0);
      int y1 = fcMath_min(y + 1, input->dims.y - 1);

      fcByte4 pixel = in[index_img(input->dims, x, y)];
      fcFloat3 sum = fcFloat3_create1(0.0f);

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y0)])), mask[0]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x, y0)])), mask[1]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y0)])), mask[2]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y)])), mask[3]));
      sum =
          fcFloat3_add(sum, fcFloat3_mulkf(fcByte3_convertFloat3(fcByte4_asByte3(pixel)), mask[4]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y)])), mask[5]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y1)])), mask[6]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x, y1)])), mask[7]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y1)])), mask[8]));

      out[index_img(output->dims, x, y)] =
          fcByte4_create31(fcFloat3_convertByte3(fcFloat3_clampk(sum, 0.0f, 255.0f)), pixel.w);
    }
  }
}

static void run_convolve5_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  float mask[5 * 5];

  mask[0] = CONVOLVE5_00;
  mask[1] = CONVOLVE5_01;
  mask[2] = CONVOLVE5_02;
  mask[3] = CONVOLVE5_03;
  mask[4] = CONVOLVE5_04;
  mask[5] = CONVOLVE5_10;
  mask[6] = CONVOLVE5_11;
  mask[7] = CONVOLVE5_12;
  mask[8] = CONVOLVE5_13;
  mask[9] = CONVOLVE5_14;
  mask[10] = CONVOLVE5_20;
  mask[11] = CONVOLVE5_21;
  mask[12] = CONVOLVE5_22;
  mask[13] = CONVOLVE5_23;
  mask[14] = CONVOLVE5_24;
  mask[15] = CONVOLVE5_30;
  mask[16] = CONVOLVE5_31;
  mask[17] = CONVOLVE5_32;
  mask[18] = CONVOLVE5_33;
  mask[19] = CONVOLVE5_34;
  mask[20] = CONVOLVE5_40;
  mask[21] = CONVOLVE5_41;
  mask[22] = CONVOLVE5_42;
  mask[23] = CONVOLVE5_43;
  mask[24] = CONVOLVE5_44;

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < input->dims.y; ++y) {
    for (int x = 0; x < input->dims.x; ++x) {
      int x0 = fcMath_max((int) x - 2, 0);
      int x1 = fcMath_max((int) x - 1, 0);
      int x2 = fcMath_min(x + 1, input->dims.x - 1);
      int x3 = fcMath_min(x + 2, input->dims.x - 1);

      int y0 = fcMath_max((int) y - 2, 0);
      int y1 = fcMath_max((int) y - 1, 0);
      int y2 = fcMath_min(y + 1, input->dims.y - 1);
      int y3 = fcMath_min(y + 2, input->dims.y - 1);

      fcByte4 pixel = in[index_img(input->dims, x, y)];
      fcFloat3 sum = fcFloat3_create1(0.0f);

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y0)])), mask[0]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y0)])), mask[1]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x, y0)])), mask[2]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x2, y0)])), mask[3]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x3, y0)])), mask[4]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y1)])), mask[5]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y1)])), mask[6]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x, y1)])), mask[7]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x2, y1)])), mask[8]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x3, y1)])), mask[9]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y)])), mask[10]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y)])), mask[11]));
      sum = fcFloat3_add(sum,
                         fcFloat3_mulkf(fcByte3_convertFloat3(fcByte4_asByte3(pixel)), mask[12]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x2, y)])), mask[13]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x3, y)])), mask[14]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y2)])), mask[15]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y2)])), mask[16]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x, y2)])), mask[17]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x2, y2)])), mask[18]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x3, y2)])), mask[19]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x0, y3)])), mask[20]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x1, y3)])), mask[21]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x, y3)])), mask[22]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x2, y3)])), mask[23]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x3, y3)])), mask[24]));

      out[index_img(output->dims, x, y)] =
          fcByte4_create31(fcFloat3_convertByte3(fcFloat3_clampk(sum, 0.0f, 255.0f)), pixel.w);
    }
  }
}

static void run_bilateral_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < input->dims.y; ++y) {
    for (int x = 0; x < input->dims.x; ++x) {
      fcByte4 centerPixel = in[index_img(input->dims, x, y)];
      fcFloat3 center = fcFloat3_divkf(fcByte3_convertFloat3(fcByte4_asByte3(centerPixel)), 0xff);

      fcFloat3 sum = fcFloat3_create1(0.0f);
      float totalWeight = 0.0f;

      for (int rx = -BILATERAL_RADIUS; rx <= BILATERAL_RADIUS; ++rx) {
        for (int ry = -BILATERAL_RADIUS; ry <= BILATERAL_RADIUS; ++ry) {
          int x2 = fcMath_clamp((int) x + rx, 0, (int) input->dims.x - 1);
          int y2 = fcMath_clamp((int) y + ry, 0, (int) input->dims.y - 1);

          fcFloat3 pixel = fcFloat3_divkf(
              fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(input->dims, x2, y2)])), 0xff);
          fcFloat3 diff = fcFloat3_sub(center, pixel);
          diff = fcFloat3_mulf(diff, diff);

          float diffMap = fcMath_exp(-(diff.x + diff.y + diff.z) * BILATERAL_PRESERVATION * 100.0f);
          float gaussianWeight =
              fcMath_exp(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

          float weight = diffMap * gaussianWeight;
          sum = fcFloat3_add(sum, fcFloat3_mulkf(pixel, weight));
          totalWeight += weight;
        }
      }

      out[index_img(output->dims, x, y)] = fcByte4_create31(
          fcFloat3_convertByte3(fcFloat3_mulkf(fcFloat3_divkf(sum, totalWeight), 0xff)),
          centerPixel.w);
    }
  }
}

static void run_median_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  fcInt3 val[256];

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      for (int i = 0; i < 256; i++) {
        fcInt3_set1(&val[i], 0);
      }

      for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx++) {
        for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry++) {
          int x2 = fcMath_clamp(x + rx, 0, width - 1);
          int y2 = fcMath_clamp(y + ry, 0, height - 1);

          cl_byte pixel = in[index_img(input->dims, x2, y2)].x;
          val[pixel & 0xff] = fcInt3_add(val[pixel & 0xff], fcInt3_create1(1));
        }
      }

      int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
      fcInt3 rgb = fcInt3_create1(0);
      fcByte4 out_pixel = fcByte4_create1(0xff);

      for (cl_byte i = 0;
           fcInt3_any(fcByte3_isEqual(fcByte4_asByte3(out_pixel), fcByte3_create1(0xff))) != 0;
           i = (i & 0xff) + 1) {
        if ((out_pixel.x & 0xff) == 0xff) {
          rgb.x += val[i & 0xff].x;

          if (rgb.x >= median)
            out_pixel.x = i;
        }

        if ((out_pixel.y & 0xff) == 0xff) {
          rgb.y += val[i & 0xff].y;

          if (rgb.y >= median)
            out_pixel.y = i;
        }

        if ((out_pixel.z & 0xff) == 0xff) {
          rgb.z += val[i & 0xff].z;

          if (rgb.z >= median)
            out_pixel.z = i;
        }
      }

      out[index_img(output->dims, x, y)] = out_pixel;
    }
  }
}

static void run_contrast_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < input->dims.y; ++y) {
    for (int x = 0; x < input->dims.x; ++x) {
      fcByte4 pixelIn = in[index_img(input->dims, x, y)];
      float brightM = fcMath_exp2(CONTRAST_ENHANCEMENT);

      fcFloat3 pixelOut =
          fcFloat3_add(fcFloat3_mulkf(fcByte3_convertFloat3(fcByte4_asByte3(pixelIn)), brightM),
                       fcFloat3_create1(127.0f * (1 - brightM)));
      pixelOut = fcFloat3_clampk(pixelOut, 0.0f, 255.0f);
      out[index_img(output->dims, x, y)] =
          fcByte4_create31(fcFloat3_convertByte3(pixelOut), pixelIn.w);
    }
  }
}

static void run_fisheye_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  const fcFloat2 FISHEYE_CENTER = fcFloat2_create11(FISHEYE_CENTER_X, FISHEYE_CENTER_Y);

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      fcFloat2 invDimensions = fcFloat2_create11(1.0f / width, 1.0f / height);
      float alpha = FISHEYE_SCALE * 2.0f + 0.75f;
      fcFloat2 axisScale = fcFloat2_create1(1.0f);

      if (width > height)
        axisScale.y = height / (float) width;
      else
        axisScale.x = width / (float) height;

      float bound2 = 0.25f * (axisScale.x * axisScale.x + axisScale.y * axisScale.y);
      float bound = fcMath_sqrt(bound2);
      float radius = 1.15f * bound;
      float radius2 = radius * radius;
      float factor = bound / (CL_M_PI_2_F - fcMath_atan(alpha / bound * fcMath_sqrt(radius2 - bound2)));

      fcFloat2 coord = fcFloat2_mad(fcFloat2_create11(x, y), invDimensions, fcFloat2_neg(FISHEYE_CENTER));
      fcFloat2 scaledCoord = fcFloat2_mulf(axisScale, coord);

      float dist2 = scaledCoord.x * scaledCoord.x + scaledCoord.y * scaledCoord.y;
      float invDist = fcMath_rsqrt(dist2);

      float radian = CL_M_PI_2_F - fcMath_atan((alpha * fcMath_sqrt(radius2 - dist2)) * invDist);
      float scalar = radian * factor * invDist;
      fcFloat2 newCoord = fcFloat2_mulf(fcFloat2_create11(width, height), fcFloat2_mad(coord, fcFloat2_create1(scalar), FISHEYE_CENTER));

      out[index_img(output->dims, x, y)] = bilinear_interp(in, input->dims, newCoord);
    }
  }
}

static void run_levels_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  fcFloat3 satMatrix[3];
  levels_build_sat_matrix(satMatrix, LEVELS_SATURATION);

  for (int y = 0; y < input->dims.y; ++y) {
    for (int x = 0; x < input->dims.x; ++x) {
      fcFloat4 pixel = fcByte4_convertFloat4(in[index_img(input->dims, x, y)]);
      fcFloat3 mul = matrix3x3_vector_multiply(satMatrix, fcFloat4_asFloat3(pixel));
      fcFloat4_set31(&pixel, mul, pixel.w);
      pixel = fcFloat4_clampk(pixel, 0.0f, 255.0f);
      pixel = fcFloat4_divkf(fcFloat4_sub(pixel, fcFloat4_create1(LEVELS_IN_BLACK)), LEVELS_IN_WHITE - LEVELS_IN_BLACK);
      pixel = fcFloat4_add(fcFloat4_mulkf(pixel, (LEVELS_OUT_WHITE - LEVELS_OUT_BLACK)), fcFloat4_create1(LEVELS_OUT_BLACK));

      pixel = fcFloat4_clampk(pixel, 0.0f, 255.0f);
      fcByte4 pixelOut = fcFloat4_convertByte4(pixel);
      out[index_img(output->dims, x, y)] = pixelOut;
    }
  }
}

static void run_posterize_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  const fcFloat3 weights = fcFloat3_create111(RED_WEIGHT, GREEN_WEIGHT, BLUE_WEIGHT);

  const fcFloat2 intensities[] = {
      fcFloat2_create11(POSTERIZE_INTENSITY0, POSTERIZE_INTENSITY1),
      fcFloat2_create11(POSTERIZE_INTENSITY1, POSTERIZE_INTENSITY2),
      fcFloat2_create11(POSTERIZE_INTENSITY2, POSTERIZE_INTENSITY3),
      fcFloat2_create11(POSTERIZE_INTENSITY3, POSTERIZE_INTENSITY4),
      fcFloat2_create11(POSTERIZE_INTENSITY4, POSTERIZE_INTENSITY5)
  };

  const fcByte4 colors[] = {
      POSTERIZE_COLOR0,
      POSTERIZE_COLOR1,
      POSTERIZE_COLOR2,
      POSTERIZE_COLOR3,
      POSTERIZE_COLOR4
  };

  const int num_stages = sizeof(intensities) / sizeof(intensities[0]);

  for (int stage = 0; stage < num_stages; ++stage) {
    fcFloat2 intensity = intensities[stage];
    fcByte4 color = colors[stage];

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        fcByte4 pixel = in[index_img(input->dims, x, y)];
        float pixel_intensity = fcFloat3_dot(fcFloat3_divkf(fcByte3_convertFloat3(fcByte4_asByte3(pixel)), 0xff), weights);

        if ((pixel_intensity <= intensity.y) && (pixel_intensity >= intensity.x))
          out[index_img(output->dims, x, y)] = color;
      }
    }
  }
}
