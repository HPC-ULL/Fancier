#define FC_LOG_TAG "NativeFilter"

#include <fancier.h>
#include <fancier/internal/snippets.inc>

#include <string.h>
#include <fancier/color.h>
#include <android/bitmap.h>

#include <math.h>

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
// FIXME WTF? Why is it necessary to reverse here?
#define POSTERIZE_COLOR0_REF 0xFF0000FF
#define POSTERIZE_COLOR1_REF 0xFF00FF00
#define POSTERIZE_COLOR2_REF 0xFFFF0000
#define POSTERIZE_COLOR3_REF 0xFF00FFFF
#define POSTERIZE_COLOR4_REF 0xFFFFFF00


typedef struct {
  int m_filter_id;
} NativeImageFilter;

typedef struct {
  cl_kernel m_kernels[MAX_KERNELS];
  int m_num_kernels;
} Filter;

enum {
  GRAYSCALE, BLUR, CONVOLVE3, CONVOLVE5, BILATERAL, MEDIAN, CONTRAST, FISHEYE, LEVELS, POSTERIZE,
  NUM_FILTERS
};


static int s_init = 0;
static cl_program s_program;
static Filter s_filters[NUM_FILTERS];

static jclass NativeImageFilter_class = NULL;
FC_JAVA_INSTANCE_HANDLERS(NativeImageFilter);


static int run_grayscale_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_blur_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_convolve3_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_convolve5_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_bilateral_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_median_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_contrast_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_fisheye_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_levels_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_posterize_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output);

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

static void run_grayscale_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_blur_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_convolve3_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_convolve5_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_bilateral_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_median_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_contrast_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_fisheye_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_levels_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);
static void run_posterize_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output);


JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_compileKernels(JNIEnv* env,
                                                                               jclass clazz,
                                                                               jobject asset_manager) {
  if (++s_init > 1)
    return;

  // OpenCL program compilation
  cl_int err;
  s_program = fcOpenCL_compileKernelAsset(env, asset_manager, "", "filters.cl", &err);
  FC_EXCEPTION_HANDLE_BUILD(env, err, "fcOpenCL_compileKernelAsset", s_program, FC_VOID_EXPR);

  // Only create the cl_kernel object for the specified kernel
  const char* kernel_names[MAX_KERNELS];
  int num_kernels = 1;

  for (int kernel_id = 0; kernel_id < NUM_FILTERS; ++kernel_id) {
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
      fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter_compileKernels",
                              FC_EXCEPTION_OTHER);
      num_kernels = 0;
      break;
    }

    s_filters[kernel_id].m_num_kernels = num_kernels;
    for (int i = 0; i < num_kernels; ++i) {
      s_filters[kernel_id].m_kernels[i] = clCreateKernel(s_program, kernel_names[i], &err);
      FC_EXCEPTION_HANDLE_ERROR(env, err, "clCreateKernel", FC_VOID_EXPR);
    }
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_releaseKernels(JNIEnv* env,
                                                                               jclass clazz) {
  if (--s_init > 0)
    return;

  for (int filter_id = 0; filter_id < NUM_FILTERS; ++filter_id) {
    Filter filter = s_filters[filter_id];

    for (int i = 0; i < filter.m_num_kernels; ++i) {
      if (filter.m_kernels[i])
        clReleaseKernel(filter.m_kernels[i]);
    }
  }

  if (s_program)
    clReleaseProgram(s_program);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_setupNative(JNIEnv* env, jobject obj,
                                                                         int filter_id) {
  // Initialize class and create native instance
  if (!NativeImageFilter_class)
    FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/androidtest/model/NativeImageFilter",
                      NativeImageFilter_class, "NativeImageFilter.setupNative", FC_VOID_EXPR);

  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  if (!self)
    self = NativeImageFilter_allocJava(env, obj);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.setupNative",
                           FC_VOID_EXPR);

  self->m_filter_id = filter_id;
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
  switch (self->m_filter_id) {
  case GRAYSCALE:
    err = run_grayscale_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_grayscale_gpu", FC_VOID_EXPR);
    break;
  case BLUR:
    err = run_blur_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_blur_gpu", FC_VOID_EXPR);
    break;
  case CONVOLVE3:
    err = run_convolve3_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_convolve3_gpu", FC_VOID_EXPR);
    break;
  case CONVOLVE5:
    err = run_convolve5_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_convolve5_gpu", FC_VOID_EXPR);
    break;
  case BILATERAL:
    err = run_bilateral_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_bilateral_gpu", FC_VOID_EXPR);
    break;
  case MEDIAN:
    err = run_median_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_median_gpu", FC_VOID_EXPR);
    break;
  case CONTRAST:
    err = run_contrast_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_contrast_gpu", FC_VOID_EXPR);
    break;
  case FISHEYE:
    err = run_fisheye_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_fisheye_gpu", FC_VOID_EXPR);
    break;
  case LEVELS:
    err = run_levels_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_levels_gpu", FC_VOID_EXPR);
    break;
  case POSTERIZE:
    err = run_posterize_gpu(&s_filters[self->m_filter_id], input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_posterize_gpu", FC_VOID_EXPR);
    break;
  default:
    FC_LOGERROR_FMT("Unknown kernel id: %d", self->m_filter_id);
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
  switch (self->m_filter_id) {
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
    FC_LOGERROR_FMT("Unknown kernel id: %d", self->m_filter_id);
    break;
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_processRef(JNIEnv* env,
                                                                           jobject obj,
                                                                           jobject jni_input,
                                                                           jobject jni_output) {
  jboolean error = JNI_FALSE;

  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.processRef",
                           FC_VOID_EXPR);

  // Initialize image
  AndroidBitmapInfo bmpInfo;
  void *input = NULL, *output = NULL;

  if (AndroidBitmap_getInfo(env, jni_input, &bmpInfo)) {
    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter.processRef",
                            FC_EXCEPTION_BITMAP_INFO);
    return;
  }

  if (bmpInfo.format != ANDROID_BITMAP_FORMAT_RGBA_8888) {
    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter.processRef",
                            FC_EXCEPTION_BITMAP_UNSUPPORTED_FORMAT);
    return;
  }

  if (AndroidBitmap_lockPixels(env, jni_input, &input)) {
    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter.processRef",
                            FC_EXCEPTION_BITMAP_LOCK_PIXELS);
    return;
  }

  if (AndroidBitmap_lockPixels(env, jni_output, &output)) {
    error = JNI_TRUE;
    goto teardown;
  }

  if (!input || !output) {
    error = JNI_TRUE;
    goto teardown;
  }

  // Execute kernel
  switch (self->m_filter_id) {
  case GRAYSCALE:
    run_grayscale_ref(bmpInfo, input, output);
    break;
  case BLUR:
    run_blur_ref(bmpInfo, input, output);
    break;
  case CONVOLVE3:
    run_convolve3_ref(bmpInfo, input, output);
    break;
  case CONVOLVE5:
    run_convolve5_ref(bmpInfo, input, output);
    break;
  case BILATERAL:
    run_bilateral_ref(bmpInfo, input, output);
    break;
  case MEDIAN:
    run_median_ref(bmpInfo, input, output);
    break;
  case CONTRAST:
    run_contrast_ref(bmpInfo, input, output);
    break;
  case FISHEYE:
    run_fisheye_ref(bmpInfo, input, output);
    break;
  case LEVELS:
    run_levels_ref(bmpInfo, input, output);
    break;
  case POSTERIZE:
    run_posterize_ref(bmpInfo, input, output);
    break;
  default:
    FC_LOGERROR_FMT("Unknown kernel id: %d", self->m_filter_id);
    break;
  }

  // Free temporary native array reference
teardown:
  if (jni_input && input && AndroidBitmap_unlockPixels(env, jni_input)) {
    if (jni_output && output)
      AndroidBitmap_unlockPixels(env, jni_output);

    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter.processRef",
                            FC_EXCEPTION_BITMAP_UNLOCK_PIXELS);
    return;
  }

  if (jni_output && output && AndroidBitmap_unlockPixels(env, jni_output)) {
    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter.processRef",
                            FC_EXCEPTION_BITMAP_UNLOCK_PIXELS);
    return;
  }

  if (error)
    fcException_throwNative(env, __FILE__, __LINE__, "NativeImageFilter.processRef",
                            FC_EXCEPTION_OTHER);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_releaseNative(JNIEnv* env,
                                                                              jobject obj) {
  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);

  if (self)
    NativeImageFilter_freeJava(env, obj);
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

static int run_grayscale_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_blur_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
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
  fcInt radius = BLUR_RADIUS;
  size_t sz[] = {input->dims.x, input->dims.y};

  // Execute horizontal kernel
  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(cl_mem), &gauss_kernel->ocl);
  if (err)
    goto cleanup;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(fcInt), &radius);
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

  err = clSetKernelArg(self->m_kernels[1], 2, sizeof(fcInt), &radius);
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

static int run_convolve3_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_convolve5_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_bilateral_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  fcInt radius = BILATERAL_RADIUS;
  fcFloat preservation = BILATERAL_PRESERVATION;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(fcInt), &radius);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(fcFloat), &preservation);
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

static int run_median_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  fcInt radius = MEDIAN_RADIUS;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(fcInt), &radius);
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

static int run_contrast_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  fcFloat enhancement = CONTRAST_ENHANCEMENT;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(fcFloat), &enhancement);
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

static int run_fisheye_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Execute kernel
  fcFloat2 center = fcFloat2_create11(FISHEYE_CENTER_X, FISHEYE_CENTER_Y);
  fcFloat scale = FISHEYE_SCALE;
  size_t sz[] = {input->dims.x, input->dims.y};

  err = clSetKernelArg(self->m_kernels[0], 0, sizeof(cl_mem), &input->pixels->ocl);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 1, sizeof(fcFloat2), &center);
  if (err)
    return err;

  err = clSetKernelArg(self->m_kernels[0], 2, sizeof(fcFloat), &scale);
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

static int run_levels_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_posterize_gpu(Filter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static inline int index_img(int width, int x, int y) {
  return y * width + x;
}

static fcByte4 bilinear_interp(const fcByte4* img, fcInt2 dims, fcFloat2 coord) {
  fcInt2 dims_minus1 = fcInt2_add(dims, fcInt2_create1(-1));
  fcFloat2 pos_coord = fcFloat2_max(coord, fcFloat2_create1(0.0f));

  fcInt2 xy0 = fcInt2_min(fcFloat2_convertInt2(fcFloat2_trunc(pos_coord)), dims_minus1);
  fcInt2 xy1 = fcInt2_min(fcInt2_add(xy0, fcInt2_create1(1)), dims_minus1);

  fcFloat4 p00 = fcByte4_convertFloat4(img[index_img(dims.x, xy0.x, xy0.y)]);
  fcFloat4 p01 = fcByte4_convertFloat4(img[index_img(dims.x, xy0.x, xy1.y)]);
  fcFloat4 p10 = fcByte4_convertFloat4(img[index_img(dims.x, xy1.x, xy0.y)]);
  fcFloat4 p11 = fcByte4_convertFloat4(img[index_img(dims.x, xy1.x, xy1.y)]);

  float slopex0 = (float) xy1.x - pos_coord.x;
  float slopex1 = pos_coord.x - (float) xy0.x;

  fcFloat4 pxy0 = fcFloat4_add(fcFloat4_mulkf(p00, slopex0), fcFloat4_mulkf(p10, slopex1));
  fcFloat4 pxy1 = fcFloat4_add(fcFloat4_mulkf(p01, slopex0), fcFloat4_mulkf(p11, slopex1));

  fcFloat4 out = fcFloat4_add(fcFloat4_mulkf(pxy0, ((float) xy1.y - coord.y)), fcFloat4_mulkf(pxy1, (coord.y - (float) xy0.y)));
  return fcFloat4_convertByte4(fcFloat4_clampk(out, 0.0f, 255.0f));
}

static inline fcFloat3 matrix3x3_vector_multiply(const fcFloat3* m, fcFloat3 v) {
  return fcFloat3_create111(fcFloat3_dot(m[0], v), fcFloat3_dot(m[1], v), fcFloat3_dot(m[2], v));
}

//
// CPU kernel execution
//

static void run_grayscale_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcFloat3 weights = fcFloat3_create111(RED_WEIGHT, GREEN_WEIGHT, BLUE_WEIGHT);

  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      int index = index_img(width, x, y);
      fcByte4 pixel_in = in[index];
      fcByte gray_value = fcFloat3_dot(fcByte3_convertFloat3(fcByte4_asByte3(pixel_in)), weights);
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
              fcByte4_convertFloat4(in[index_img(width, x_2, y)]),
              gauss_kernel[kernel_index++]));
        }
      }
      else {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          blurred_pixel = fcFloat4_add(blurred_pixel, fcFloat4_mulkf(
              fcByte4_convertFloat4(in[index_img(width, x + r, y)]),
              gauss_kernel[kernel_index++]));
        }
      }

      buf[index_img(width, x, y)] = fcFloat4_convertByte4(blurred_pixel);
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
              fcByte4_convertFloat4(buf[index_img(width, x, y_2)]),
              gauss_kernel[kernel_index++]));
        }
      }
      else {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          blurred_pixel = fcFloat4_add(blurred_pixel, fcFloat4_mulkf(
              fcByte4_convertFloat4(buf[index_img(width, x, y + r)]),
              gauss_kernel[kernel_index++]));
        }
      }

      out[index_img(width, x, y)] = fcFloat4_convertByte4(blurred_pixel);
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

  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      int x0 = fcMath_max((int) x - 1, 0);
      int x1 = fcMath_min(x + 1, width - 1);
      int y0 = fcMath_max((int) y - 1, 0);
      int y1 = fcMath_min(y + 1, height - 1);

      fcByte4 pixel = in[index_img(width, x, y)];
      fcFloat3 sum = fcFloat3_create1(0.0f);

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y0)])), mask[0]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x, y0)])), mask[1]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y0)])), mask[2]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y)])), mask[3]));
      sum =
          fcFloat3_add(sum, fcFloat3_mulkf(fcByte3_convertFloat3(fcByte4_asByte3(pixel)), mask[4]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y)])), mask[5]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y1)])), mask[6]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x, y1)])), mask[7]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y1)])), mask[8]));

      out[index_img(width, x, y)] =
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

  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      int x0 = fcMath_max((int) x - 2, 0);
      int x1 = fcMath_max((int) x - 1, 0);
      int x2 = fcMath_min(x + 1, width - 1);
      int x3 = fcMath_min(x + 2, width - 1);

      int y0 = fcMath_max((int) y - 2, 0);
      int y1 = fcMath_max((int) y - 1, 0);
      int y2 = fcMath_min(y + 1, height - 1);
      int y3 = fcMath_min(y + 2, height - 1);

      fcByte4 pixel = in[index_img(width, x, y)];
      fcFloat3 sum = fcFloat3_create1(0.0f);

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y0)])), mask[0]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y0)])), mask[1]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x, y0)])), mask[2]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x2, y0)])), mask[3]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x3, y0)])), mask[4]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y1)])), mask[5]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y1)])), mask[6]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x, y1)])), mask[7]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x2, y1)])), mask[8]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x3, y1)])), mask[9]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y)])), mask[10]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y)])), mask[11]));
      sum = fcFloat3_add(sum,
                         fcFloat3_mulkf(fcByte3_convertFloat3(fcByte4_asByte3(pixel)), mask[12]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x2, y)])), mask[13]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x3, y)])), mask[14]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y2)])), mask[15]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y2)])), mask[16]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x, y2)])), mask[17]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x2, y2)])), mask[18]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x3, y2)])), mask[19]));

      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x0, y3)])), mask[20]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x1, y3)])), mask[21]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x, y3)])), mask[22]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x2, y3)])), mask[23]));
      sum = fcFloat3_add(sum, fcFloat3_mulkf(
          fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x3, y3)])), mask[24]));

      out[index_img(width, x, y)] =
          fcByte4_create31(fcFloat3_convertByte3(fcFloat3_clampk(sum, 0.0f, 255.0f)), pixel.w);
    }
  }
}

static void run_bilateral_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      fcByte4 centerPixel = in[index_img(width, x, y)];
      fcFloat3 center = fcFloat3_divkf(fcByte3_convertFloat3(fcByte4_asByte3(centerPixel)), 0xff);

      fcFloat3 sum = fcFloat3_create1(0.0f);
      float totalWeight = 0.0f;

      for (int rx = -BILATERAL_RADIUS; rx <= BILATERAL_RADIUS; ++rx) {
        for (int ry = -BILATERAL_RADIUS; ry <= BILATERAL_RADIUS; ++ry) {
          int x2 = fcMath_clamp((int) x + rx, 0, (int) width - 1);
          int y2 = fcMath_clamp((int) y + ry, 0, (int) height - 1);

          fcFloat3 pixel = fcFloat3_divkf(
              fcByte3_convertFloat3(fcByte4_asByte3(in[index_img(width, x2, y2)])), 0xff);
          fcFloat3 diff = fcFloat3_sub(center, pixel);
          diff = fcFloat3_mulf(diff, diff);

          float diffMap = fcMath_expf(-(diff.x + diff.y + diff.z) * BILATERAL_PRESERVATION * 100.0f);
          float gaussianWeight =
              fcMath_expf(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

          float weight = diffMap * gaussianWeight;
          sum = fcFloat3_add(sum, fcFloat3_mulkf(pixel, weight));
          totalWeight += weight;
        }
      }

      out[index_img(width, x, y)] = fcByte4_create31(
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

          fcByte pixel = in[index_img(width, x2, y2)].x;
          val[pixel & 0xff] = fcInt3_add(val[pixel & 0xff], fcInt3_create1(1));
        }
      }

      int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
      fcInt3 rgb = fcInt3_create1(0);
      fcByte4 out_pixel = fcByte4_create1(0xff);

      for (fcByte i = 0;
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

      out[index_img(width, x, y)] = out_pixel;
    }
  }
}

static void run_contrast_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      fcByte4 pixelIn = in[index_img(width, x, y)];
      float brightM = fcMath_exp2f(CONTRAST_ENHANCEMENT);
      fcFloat3 pixelOut =
          fcFloat3_add(fcFloat3_mulkf(fcByte3_convertFloat3(fcByte4_asByte3(pixelIn)), brightM),
                       fcFloat3_create1(127.0f * (1 - brightM)));
      pixelOut = fcFloat3_clampk(pixelOut, 0.0f, 255.0f);
      out[index_img(width, x, y)] =
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

      float bound2 = 0.25f * fcFloat2_dot(axisScale, axisScale);
      float bound = fcMath_sqrtf(bound2);
      float radius = 1.15f * bound;
      float radius2 = radius * radius;
      float factor = bound / (CL_M_PI_2_F - fcMath_atanf(alpha / bound * fcMath_sqrtf(radius2 - bound2)));

      fcFloat2 coord = fcFloat2_mad(fcFloat2_create11(x, y), invDimensions, fcFloat2_neg(FISHEYE_CENTER));
      fcFloat2 scaledCoord = fcFloat2_mulf(axisScale, coord);

      float dist2 = fcFloat2_dot(scaledCoord, scaledCoord);
      float invDist = fcMath_rsqrtf(dist2);

      float radian = CL_M_PI_2_F - fcMath_atanf((alpha * fcMath_sqrtf(radius2 - dist2)) * invDist);
      float scalar = radian * factor * invDist;
      fcFloat2 newCoord = fcFloat2_mulf(fcFloat2_create11(width, height), fcFloat2_mad(coord, fcFloat2_create1(scalar), FISHEYE_CENTER));

      out[index_img(width, x, y)] = bilinear_interp(in, input->dims, newCoord);
    }
  }
}

static void run_levels_cpu(fcRGBAImage* input, fcRGBAImage* output) {
  const int width = input->dims.x;
  const int height = input->dims.y;
  const fcByte4* in = input->pixels->c;
  fcByte4* out = output->pixels->c;

  fcFloat3 satMatrix[3];
  levels_build_sat_matrix(satMatrix, LEVELS_SATURATION);

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      fcFloat4 pixel = fcByte4_convertFloat4(in[index_img(width, x, y)]);
      fcFloat3 mul = matrix3x3_vector_multiply(satMatrix, fcFloat4_asFloat3(pixel));
      fcFloat4_set31(&pixel, mul, pixel.w);
      pixel = fcFloat4_clampk(pixel, 0.0f, 255.0f);
      pixel = fcFloat4_divkf(fcFloat4_sub(pixel, fcFloat4_create1(LEVELS_IN_BLACK)), LEVELS_IN_WHITE - LEVELS_IN_BLACK);
      pixel = fcFloat4_add(fcFloat4_mulkf(pixel, (LEVELS_OUT_WHITE - LEVELS_OUT_BLACK)), fcFloat4_create1(LEVELS_OUT_BLACK));

      pixel = fcFloat4_clampk(pixel, 0.0f, 255.0f);
      fcByte4 pixelOut = fcFloat4_convertByte4(pixel);
      out[index_img(width, x, y)] = pixelOut;
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
        fcByte4 pixel = in[index_img(width, x, y)];
        float pixel_intensity = fcFloat3_dot(fcFloat3_divkf(fcByte3_convertFloat3(fcByte4_asByte3(pixel)), 0xff), weights);

        if ((pixel_intensity <= intensity.y) && (pixel_intensity >= intensity.x))
          out[index_img(width, x, y)] = color;
      }
    }
  }
}

// Reference helpers

static inline int index_bmp(int width, int x, int y) {
  return y * width + x;
}

// FIXME WTF? Why are fields reversed here and not in Fancier objects?
//   Maybe .x, .y, .z are reversed?

static inline uint32_t bmp_rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  return ((r & 0xff) << 0) | ((g & 0xff) << 8) | ((b & 0xff) << 16) | ((a & 0xff) << 24);
}

static inline uint8_t bmp_red(uint32_t rgba) {
  return (rgba >> 0) & 0xff;
}

static inline uint8_t bmp_green(uint32_t rgba) {
  return (rgba >> 8) & 0xff;
}

static inline uint8_t bmp_blue(uint32_t rgba) {
  return (rgba >> 16) & 0xff;
}

static inline uint8_t bmp_alpha(uint32_t rgba) {
  return (rgba >> 24) & 0xff;
}

static uint32_t bilinear_interp_ref(const uint32_t* img, int width, int height, float x, float y) {
  float posCoordX = fmaxf(x, 0.0f);
  float posCoordY = fmaxf(y, 0.0f);

  int x0 = truncf(posCoordX);
  if (x0 >= width) x0 = width - 1;
  int x1 = x0 + 1 >= width? width - 1 : x0 + 1;
  int y0 = truncf(posCoordY);
  if (y0 >= height) y0 = height - 1;
  int y1 = y0 + 1 >= height? height - 1 : y0 + 1;

  int p00 = img[index_bmp(width, x0, y0)];
  int p01 = img[index_bmp(width, x0, y1)];
  int p10 = img[index_bmp(width, x1, y0)];
  int p11 = img[index_bmp(width, x1, y1)];

  float p00A = bmp_alpha(p00);
  float p00R = bmp_red(p00);
  float p00G = bmp_green(p00);
  float p00B = bmp_blue(p00);
  float p01A = bmp_alpha(p01);
  float p01R = bmp_red(p01);
  float p01G = bmp_green(p01);
  float p01B = bmp_blue(p01);
  float p10A = bmp_alpha(p10);
  float p10R = bmp_red(p10);
  float p10G = bmp_green(p10);
  float p10B = bmp_blue(p10);
  float p11A = bmp_alpha(p11);
  float p11R = bmp_red(p11);
  float p11G = bmp_green(p11);
  float p11B = bmp_blue(p11);

  float slopeX0 = (float) x1 - posCoordX;
  float slopeX1 = posCoordX - (float) x0;
  float slopeY0 = (float) y1 - y;
  float slopeY1 = y - (float) y0;

  float pXY0A = (p00A * slopeX0 + p10A * slopeX1) * slopeY0;
  float pXY0R = (p00R * slopeX0 + p10R * slopeX1) * slopeY0;
  float pXY0G = (p00G * slopeX0 + p10G * slopeX1) * slopeY0;
  float pXY0B = (p00B * slopeX0 + p10B * slopeX1) * slopeY0;
  float pXY1A = (p01A * slopeX0 + p11A * slopeX1) * slopeY1;
  float pXY1R = (p01R * slopeX0 + p11R * slopeX1) * slopeY1;
  float pXY1G = (p01G * slopeX0 + p11G * slopeX1) * slopeY1;
  float pXY1B = (p01B * slopeX0 + p11B * slopeX1) * slopeY1;

  float outA = pXY0A + pXY1A;
  float outR = pXY0R + pXY1R;
  float outG = pXY0G + pXY1G;
  float outB = pXY0B + pXY1B;

  if (outA < 0.0f)
    outA = 0.0f;
  else if (outA > 255.0f)
    outA = 255.0f;
  if (outR < 0.0f)
    outR = 0.0f;
  else if (outR > 255.0f)
    outR = 255.0f;
  if (outG < 0.0f)
    outG = 0.0f;
  else if (outG > 255.0f)
    outG = 255.0f;
  if (outB < 0.0f)
    outB = 0.0f;
  else if (outB > 255.0f)
    outB = 255.0f;

  return bmp_rgba(outR, outG, outB, outA);
}

static inline void matrix3x3_vector_multiply_ref(const float* m, float vx, float vy, float vz, float* result) {
  result[0] = m[0] * vx + m[1] * vy + m[2] * vz;
  result[1] = m[3] * vx + m[4] * vy + m[5] * vz;
  result[2] = m[6] * vx + m[7] * vy + m[8] * vz;
}

static void levels_build_sat_matrix_ref(float* m, float saturation) {
  float weights_x = RED_WEIGHT * (1.0f - saturation);
  float weights_y = GREEN_WEIGHT * (1.0f - saturation);
  float weights_z = BLUE_WEIGHT * (1.0f - saturation);

  m[0] = weights_x + saturation;
  m[1] = weights_y;
  m[2] = weights_z;
  m[3] = weights_x;
  m[4] = weights_y + saturation;
  m[5] = weights_z;
  m[6] = weights_x;
  m[7] = weights_y;
  m[8] = weights_z + saturation;
}

//
// REF CPU kernel execution
//

static void run_grayscale_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      int index = index_bmp(info.width, x, y);
      uint32_t pixel = input[index];
      uint8_t gray_value = bmp_red(pixel) * RED_WEIGHT + bmp_green(pixel) * GREEN_WEIGHT + bmp_blue(pixel) * BLUE_WEIGHT;
      output[index] = bmp_rgba(gray_value, gray_value, gray_value, bmp_alpha(pixel));
    }
  }
}

static void run_blur_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  float gauss_kernel[BLUR_RADIUS * 2 + 1];
  blur_build_mask(gauss_kernel, BLUR_RADIUS);

  // Create intermediate buffer
  uint32_t* buffer = malloc(info.width * info.height * sizeof(uint32_t));

  // Horizontal (input -> buffer)
  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      float blurred_pixel_a = 0.0f;
      float blurred_pixel_r = 0.0f;
      float blurred_pixel_g = 0.0f;
      float blurred_pixel_b = 0.0f;
      int kernel_index = 0;

      if (x <= BLUR_RADIUS || x >= info.width - BLUR_RADIUS) {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          int x_2 = x + r;
          if (x_2 < 0) x_2 = 0;
          else if (x_2 >= info.width) x_2 = info.width - 1;

          uint32_t pixel = input[index_bmp(info.width, x_2, y)];
          float kernel_value = gauss_kernel[kernel_index++];
          blurred_pixel_a += bmp_alpha(pixel) * kernel_value;
          blurred_pixel_r += bmp_red(pixel) * kernel_value;
          blurred_pixel_g += bmp_green(pixel) * kernel_value;
          blurred_pixel_b += bmp_blue(pixel) * kernel_value;
        }
      }
      else {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          uint32_t pixel = input[index_bmp(info.width, x + r, y)];
          float kernel_value = gauss_kernel[kernel_index++];
          blurred_pixel_a += bmp_alpha(pixel) * kernel_value;
          blurred_pixel_r += bmp_red(pixel) * kernel_value;
          blurred_pixel_g += bmp_green(pixel) * kernel_value;
          blurred_pixel_b += bmp_blue(pixel) * kernel_value;
        }
      }

      buffer[index_bmp(info.width, x, y)] = bmp_rgba(blurred_pixel_r, blurred_pixel_g, blurred_pixel_b, blurred_pixel_a);
    }
  }

  // Vertical (buffer -> output)
  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      float blurred_pixel_a = 0.0f;
      float blurred_pixel_r = 0.0f;
      float blurred_pixel_g = 0.0f;
      float blurred_pixel_b = 0.0f;
      int kernel_index = 0;

      if (y <= BLUR_RADIUS || y >= info.height - BLUR_RADIUS) {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          int y_2 = y + r;
          if (y_2 < 0) y_2 = 0;
          else if (y_2 >= info.height) y_2 = info.height - 1;

          uint32_t pixel = buffer[index_bmp(info.width, x, y_2)];
          float kernel_value = gauss_kernel[kernel_index++];
          blurred_pixel_a += bmp_alpha(pixel) * kernel_value;
          blurred_pixel_r += bmp_red(pixel) * kernel_value;
          blurred_pixel_g += bmp_green(pixel) * kernel_value;
          blurred_pixel_b += bmp_blue(pixel) * kernel_value;
        }
      }
      else {
        for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
          uint32_t pixel = buffer[index_bmp(info.width, x, y + r)];
          float kernel_value = gauss_kernel[kernel_index++];
          blurred_pixel_a += bmp_alpha(pixel) * kernel_value;
          blurred_pixel_r += bmp_red(pixel) * kernel_value;
          blurred_pixel_g += bmp_green(pixel) * kernel_value;
          blurred_pixel_b += bmp_blue(pixel) * kernel_value;
        }
      }

      output[index_bmp(info.width, x, y)] = bmp_rgba(blurred_pixel_r, blurred_pixel_g, blurred_pixel_b, blurred_pixel_a);
    }
  }

  free(buffer);
}

static void run_convolve3_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
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

  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      int x0 = x > 1? x - 1 : 0;
      int x1 = x + 1 >= info.width? info.width - 1 : x + 1;
      int y0 = y > 1? y - 1 : 0;
      int y1 = y + 1 >= info.height? info.height - 1 : y + 1;

      uint32_t pixel = input[index_bmp(info.width, x, y)];
      uint8_t pixel_a = bmp_alpha(pixel);
      uint8_t pixel_r = bmp_red(pixel);
      uint8_t pixel_g = bmp_green(pixel);
      uint8_t pixel_b = bmp_blue(pixel);

      float sum_r = 0.0f;
      float sum_g = 0.0f;
      float sum_b = 0.0f;

      uint32_t otherPixel = input[index_bmp(info.width, x0, y0)];
      sum_r += bmp_red(otherPixel) * mask[0];
      sum_g += bmp_green(otherPixel) * mask[0];
      sum_b += bmp_blue(otherPixel) * mask[0];
      otherPixel = input[index_bmp(info.width, x, y0)];
      sum_r += bmp_red(otherPixel) * mask[1];
      sum_g += bmp_green(otherPixel) * mask[1];
      sum_b += bmp_blue(otherPixel) * mask[1];
      otherPixel = input[index_bmp(info.width, x1, y0)];
      sum_r += bmp_red(otherPixel) * mask[2];
      sum_g += bmp_green(otherPixel) * mask[2];
      sum_b += bmp_blue(otherPixel) * mask[2];

      otherPixel = input[index_bmp(info.width, x0, y)];
      sum_r += bmp_red(otherPixel) * mask[3];
      sum_g += bmp_green(otherPixel) * mask[3];
      sum_b += bmp_blue(otherPixel) * mask[3];
      sum_r += pixel_r * mask[4];
      sum_g += pixel_g * mask[4];
      sum_b += pixel_b * mask[4];
      otherPixel = input[index_bmp(info.width, x1, y)];
      sum_r += bmp_red(otherPixel) * mask[5];
      sum_g += bmp_green(otherPixel) * mask[5];
      sum_b += bmp_blue(otherPixel) * mask[5];

      otherPixel = input[index_bmp(info.width, x0, y1)];
      sum_r += bmp_red(otherPixel) * mask[6];
      sum_g += bmp_green(otherPixel) * mask[6];
      sum_b += bmp_blue(otherPixel) * mask[6];
      otherPixel = input[index_bmp(info.width, x, y1)];
      sum_r += bmp_red(otherPixel) * mask[7];
      sum_g += bmp_green(otherPixel) * mask[7];
      sum_b += bmp_blue(otherPixel) * mask[7];
      otherPixel = input[index_bmp(info.width, x1, y1)];
      sum_r += bmp_red(otherPixel) * mask[8];
      sum_g += bmp_green(otherPixel) * mask[8];
      sum_b += bmp_blue(otherPixel) * mask[8];

      if (sum_r < 0.0f) sum_r = 0.0f;
      else if (sum_r > 255.0f) sum_r = 255.0f;
      if (sum_g < 0.0f) sum_g = 0.0f;
      else if (sum_g > 255.0f) sum_g = 255.0f;
      if (sum_b < 0.0f) sum_b = 0.0f;
      else if (sum_b > 255.0f) sum_b = 255.0f;

      output[index_bmp(info.width, x, y)] = bmp_rgba(sum_r, sum_g, sum_b, pixel_a);
    }
  }
}

static void run_convolve5_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
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

  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      int x0 = x > 2? x - 2 : 0;
      int x1 = x > 1? x - 1 : 0;
      int x2 = x + 1 >= info.width? info.width - 1 : x + 1;
      int x3 = x + 2 >= info.width? info.width - 1 : x + 2;
      
      int y0 = y > 2? y - 2 : 0;
      int y1 = y > 1? y - 1 : 0;
      int y2 = y + 1 >= info.height? info.height - 1 : y + 1;
      int y3 = y + 2 >= info.height? info.height - 1 : y + 2;

      uint32_t pixel = input[index_bmp(info.width, x, y)];
      uint8_t pixel_a = bmp_alpha(pixel);
      uint8_t pixel_r = bmp_red(pixel);
      uint8_t pixel_g = bmp_green(pixel);
      uint8_t pixel_b = bmp_blue(pixel);

      float sum_r = 0.0f;
      float sum_g = 0.0f;
      float sum_b = 0.0f;

      uint32_t other_pixel = input[index_bmp(info.width, x0, y0)];
      sum_r += bmp_red(other_pixel) * mask[0];
      sum_g += bmp_green(other_pixel) * mask[0];
      sum_b += bmp_blue(other_pixel) * mask[0];
      other_pixel = input[index_bmp(info.width, x1, y0)];
      sum_r += bmp_red(other_pixel) * mask[1];
      sum_g += bmp_green(other_pixel) * mask[1];
      sum_b += bmp_blue(other_pixel) * mask[1];
      other_pixel = input[index_bmp(info.width, x, y0)];
      sum_r += bmp_red(other_pixel) * mask[2];
      sum_g += bmp_green(other_pixel) * mask[2];
      sum_b += bmp_blue(other_pixel) * mask[2];
      other_pixel = input[index_bmp(info.width, x2, y0)];
      sum_r += bmp_red(other_pixel) * mask[3];
      sum_g += bmp_green(other_pixel) * mask[3];
      sum_b += bmp_blue(other_pixel) * mask[3];
      other_pixel = input[index_bmp(info.width, x3, y0)];
      sum_r += bmp_red(other_pixel) * mask[4];
      sum_g += bmp_green(other_pixel) * mask[4];
      sum_b += bmp_blue(other_pixel) * mask[4];

      other_pixel = input[index_bmp(info.width, x0, y1)];
      sum_r += bmp_red(other_pixel) * mask[5];
      sum_g += bmp_green(other_pixel) * mask[5];
      sum_b += bmp_blue(other_pixel) * mask[5];
      other_pixel = input[index_bmp(info.width, x1, y1)];
      sum_r += bmp_red(other_pixel) * mask[6];
      sum_g += bmp_green(other_pixel) * mask[6];
      sum_b += bmp_blue(other_pixel) * mask[6];
      other_pixel = input[index_bmp(info.width, x, y1)];
      sum_r += bmp_red(other_pixel) * mask[7];
      sum_g += bmp_green(other_pixel) * mask[7];
      sum_b += bmp_blue(other_pixel) * mask[7];
      other_pixel = input[index_bmp(info.width, x2, y1)];
      sum_r += bmp_red(other_pixel) * mask[8];
      sum_g += bmp_green(other_pixel) * mask[8];
      sum_b += bmp_blue(other_pixel) * mask[8];
      other_pixel = input[index_bmp(info.width, x3, y1)];
      sum_r += bmp_red(other_pixel) * mask[9];
      sum_g += bmp_green(other_pixel) * mask[9];
      sum_b += bmp_blue(other_pixel) * mask[9];

      other_pixel = input[index_bmp(info.width, x0, y)];
      sum_r += bmp_red(other_pixel) * mask[10];
      sum_g += bmp_green(other_pixel) * mask[10];
      sum_b += bmp_blue(other_pixel) * mask[10];
      other_pixel = input[index_bmp(info.width, x1, y)];
      sum_r += bmp_red(other_pixel) * mask[11];
      sum_g += bmp_green(other_pixel) * mask[11];
      sum_b += bmp_blue(other_pixel) * mask[11];
      sum_r += pixel_r * mask[12];
      sum_g += pixel_g * mask[12];
      sum_b += pixel_b * mask[12];
      other_pixel = input[index_bmp(info.width, x2, y)];
      sum_r += bmp_red(other_pixel) * mask[13];
      sum_g += bmp_green(other_pixel) * mask[13];
      sum_b += bmp_blue(other_pixel) * mask[13];
      other_pixel = input[index_bmp(info.width, x3, y)];
      sum_r += bmp_red(other_pixel) * mask[14];
      sum_g += bmp_green(other_pixel) * mask[14];
      sum_b += bmp_blue(other_pixel) * mask[14];

      other_pixel = input[index_bmp(info.width, x0, y2)];
      sum_r += bmp_red(other_pixel) * mask[15];
      sum_g += bmp_green(other_pixel) * mask[15];
      sum_b += bmp_blue(other_pixel) * mask[15];
      other_pixel = input[index_bmp(info.width, x1, y2)];
      sum_r += bmp_red(other_pixel) * mask[16];
      sum_g += bmp_green(other_pixel) * mask[16];
      sum_b += bmp_blue(other_pixel) * mask[16];
      other_pixel = input[index_bmp(info.width, x, y2)];
      sum_r += bmp_red(other_pixel) * mask[17];
      sum_g += bmp_green(other_pixel) * mask[17];
      sum_b += bmp_blue(other_pixel) * mask[17];
      other_pixel = input[index_bmp(info.width, x2, y2)];
      sum_r += bmp_red(other_pixel) * mask[18];
      sum_g += bmp_green(other_pixel) * mask[18];
      sum_b += bmp_blue(other_pixel) * mask[18];
      other_pixel = input[index_bmp(info.width, x3, y2)];
      sum_r += bmp_red(other_pixel) * mask[19];
      sum_g += bmp_green(other_pixel) * mask[19];
      sum_b += bmp_blue(other_pixel) * mask[19];

      other_pixel = input[index_bmp(info.width, x0, y3)];
      sum_r += bmp_red(other_pixel) * mask[20];
      sum_g += bmp_green(other_pixel) * mask[20];
      sum_b += bmp_blue(other_pixel) * mask[20];
      other_pixel = input[index_bmp(info.width, x1, y3)];
      sum_r += bmp_red(other_pixel) * mask[21];
      sum_g += bmp_green(other_pixel) * mask[21];
      sum_b += bmp_blue(other_pixel) * mask[21];
      other_pixel = input[index_bmp(info.width, x, y3)];
      sum_r += bmp_red(other_pixel) * mask[22];
      sum_g += bmp_green(other_pixel) * mask[22];
      sum_b += bmp_blue(other_pixel) * mask[22];
      other_pixel = input[index_bmp(info.width, x2, y3)];
      sum_r += bmp_red(other_pixel) * mask[23];
      sum_g += bmp_green(other_pixel) * mask[23];
      sum_b += bmp_blue(other_pixel) * mask[23];
      other_pixel = input[index_bmp(info.width, x3, y3)];
      sum_r += bmp_red(other_pixel) * mask[24];
      sum_g += bmp_green(other_pixel) * mask[24];
      sum_b += bmp_blue(other_pixel) * mask[24];

      if (sum_r < 0.0f) sum_r = 0.0f;
      else if (sum_r > 255.0f) sum_r = 255.0f;
      if (sum_g < 0.0f) sum_g = 0.0f;
      else if (sum_g > 255.0f) sum_g = 255.0f;
      if (sum_b < 0.0f) sum_b = 0.0f;
      else if (sum_b > 255.0f) sum_b = 255.0f;

      output[index_bmp(info.width, x, y)] = bmp_rgba(sum_r, sum_g, sum_b, pixel_a);
    }
  }
}

static void run_bilateral_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      uint32_t center_pixel = input[index_bmp(info.width, x, y)];
      float center_r = (float) bmp_red(center_pixel) / 0xff;
      float center_g = (float) bmp_green(center_pixel) / 0xff;
      float center_b = (float) bmp_blue(center_pixel) / 0xff;

      float sumR = 0.0f, sumG = 0.0f, sumB = 0.0f;
      float totalWeight = 0.0f;

      for (int rx = -BILATERAL_RADIUS; rx <= BILATERAL_RADIUS; ++rx) {
        for (int ry = -BILATERAL_RADIUS; ry <= BILATERAL_RADIUS; ++ry) {
          int x2 = x + rx;
          int y2 = y + ry;

          if (x2 < 0) x2 = 0;
          else if (x2 >= info.width) x2 = info.width - 1;
          if (y2 < 0) y2 = 0;
          else if (y2 >= info.height) y2 = info.height - 1;

          int other_pixel = input[index_bmp(info.width, x2, y2)];
          float pixel_r = (float) bmp_red(other_pixel) / 0xff;
          float pixel_g = (float) bmp_green(other_pixel) / 0xff;
          float pixel_b = (float) bmp_blue(other_pixel) / 0xff;

          float diff_r = center_r - pixel_r;
          float diff_g = center_g - pixel_g;
          float diff_b = center_b - pixel_b;

          diff_r *= diff_r;
          diff_g *= diff_g;
          diff_b *= diff_b;

          float diffMap = expf(-(diff_r + diff_g + diff_b) * BILATERAL_PRESERVATION * 100.0f);
          float gaussianWeight = expf(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

          float weight = diffMap * gaussianWeight;
          sumR += pixel_r * weight;
          sumG += pixel_g * weight;
          sumB += pixel_b * weight;
          totalWeight += weight;
        }
      }

      uint8_t outR = (sumR / totalWeight) * 0xff;
      uint8_t outG = (sumG / totalWeight) * 0xff;
      uint8_t outB = (sumB / totalWeight) * 0xff;
      output[index_bmp(info.width, x, y)] = bmp_rgba(outR, outG, outB, bmp_alpha(center_pixel));
    }
  }
}

static void run_median_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  int val[256 * 3];

  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      for (int i = 0; i < 256 * 3; i++)
        val[i] = 0;

      for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx++) {
        for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry++) {
          int x_2 = x + rx;
          int y_2 = y + ry;

          if (x_2 < 0)
            x_2 = 0;
          else if (x_2 >= info.width)
            x_2 = info.width - 1;
          if (y_2 < 0)
            y_2 = 0;
          else if (y_2 >= info.height)
            y_2 = info.height - 1;

          uint8_t color_index = bmp_red(input[index_bmp(info.width, x_2, y_2)]);
          ++val[color_index * 3];
          ++val[color_index * 3 + 1];
          ++val[color_index * 3 + 2];
        }
      }

      int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
      int r = 0, g = 0, b = 0;
      uint8_t out_pixel_r = 0xff;
      uint8_t out_pixel_g = 0xff;
      uint8_t out_pixel_b = 0xff;

      for (uint8_t i = 0; out_pixel_r == 0xff || out_pixel_g == 0xff || out_pixel_b == 0xff; ++i) {
        if (out_pixel_r == 0xff) {
          r += val[i * 3];

          if (r >= median)
            out_pixel_r = i;
        }

        if (out_pixel_g == 0xff) {
          g += val[i * 3 + 1];

          if (g >= median)
            out_pixel_g = i;
        }

        if (out_pixel_b == 0xff) {
          b += val[i * 3 + 2];

          if (b >= median)
            out_pixel_b = i;
        }
      }

      output[index_bmp(info.width, x, y)] = bmp_rgba(out_pixel_r, out_pixel_g, out_pixel_b, 0xff);
    }
  }
}

static void run_contrast_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      uint32_t pixel = input[index_bmp(info.width, x, y)];
      float bright_m = exp2f(CONTRAST_ENHANCEMENT);
      float offset = 127.0f * (1 - bright_m);

      float pixel_out_r = offset + bmp_red(pixel) * bright_m;
      float pixel_out_g = offset + bmp_green(pixel) * bright_m;
      float pixel_out_b = offset + bmp_blue(pixel) * bright_m;

      if (pixel_out_r < 0.0f)
        pixel_out_r = 0.0f;
      else if (pixel_out_r > 255.0f)
        pixel_out_r = 255.0f;
      if (pixel_out_g < 0.0f)
        pixel_out_g = 0.0f;
      else if (pixel_out_g > 255.0f)
        pixel_out_g = 255.0f;
      if (pixel_out_b < 0.0f)
        pixel_out_b = 0.0f;
      else if (pixel_out_b > 255.0f)
        pixel_out_b = 255.0f;

      output[index_bmp(info.width, x, y)] = bmp_rgba(pixel_out_r, pixel_out_g, pixel_out_b, bmp_alpha(pixel));
    }
  }
}

static void run_fisheye_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      float invDimensionsX = 1.0f / info.width;
      float invDimensionsY = 1.0f / info.height;
      float axisScaleX = 1.0f;
      float axisScaleY = 1.0f;
      float alpha = FISHEYE_SCALE * 2.0f + 0.75f;

      if (info.width > info.height)
        axisScaleY = info.height / (float) info.width;
      else
        axisScaleX = info.width / (float) info.height;

      float bound2 = 0.25f * (axisScaleX * axisScaleX + axisScaleY * axisScaleY);
      float bound = sqrtf(bound2);
      float radius = 1.15f * bound;
      float radius2 = radius * radius;
      float factor = bound / (M_PI_2 - atanf(alpha / bound * sqrtf(radius2 - bound2)));

      float coordX = x * invDimensionsX - FISHEYE_CENTER_X;
      float coordY = y * invDimensionsY - FISHEYE_CENTER_Y;
      float scaledCoordX = axisScaleX * coordX;
      float scaledCoordY = axisScaleY * coordY;

      float dist2 = scaledCoordX * scaledCoordX + scaledCoordY * scaledCoordY;
      float invDist = 1.0f / sqrtf(dist2);

      float radian = M_PI_2 - (float) atanf((alpha * sqrtf(radius2 - dist2)) * invDist);
      float scalar = radian * factor * invDist;
      float newCoordX = info.width * (coordX * scalar + FISHEYE_CENTER_X);
      float newCoordY = info.height * (coordY * scalar + FISHEYE_CENTER_Y);

      output[index_bmp(info.width, x, y)] = bilinear_interp_ref(input, info.width, info.height, newCoordX, newCoordY);
    }
  }
}

static void run_levels_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  float sat_matrix[3 * 3];
  float mul[3];
  levels_build_sat_matrix_ref(sat_matrix, LEVELS_SATURATION);

  for (int y = 0; y < info.height; ++y) {
    for (int x = 0; x < info.width; ++x) {
      uint32_t pixel = input[index_bmp(info.width, x, y)];
      float pixel_r = bmp_red(pixel);
      float pixel_g = bmp_green(pixel);
      float pixel_b = bmp_blue(pixel);
      float pixel_a = bmp_alpha(pixel);

      matrix3x3_vector_multiply_ref(sat_matrix, pixel_r, pixel_g, pixel_b, mul);
      pixel_r = mul[0] < 0.0f ? 0.0f : fminf(mul[0], 255.0f);
      pixel_g = mul[1] < 0.0f ? 0.0f : fminf(mul[1], 255.0f);
      pixel_b = mul[2] < 0.0f ? 0.0f : fminf(mul[2], 255.0f);

      float diff_min = LEVELS_IN_WHITE - LEVELS_IN_BLACK;
      float diff_max = LEVELS_OUT_WHITE - LEVELS_OUT_BLACK;

      pixel_r = (pixel_r - LEVELS_IN_BLACK) / diff_min;
      pixel_g = (pixel_g - LEVELS_IN_BLACK) / diff_min;
      pixel_b = (pixel_b - LEVELS_IN_BLACK) / diff_min;
      pixel_a = (pixel_a - LEVELS_IN_BLACK) / diff_min;

      pixel_r = pixel_r * diff_max + LEVELS_OUT_BLACK;
      pixel_g = pixel_g * diff_max + LEVELS_OUT_BLACK;
      pixel_b = pixel_b * diff_max + LEVELS_OUT_BLACK;
      pixel_a = pixel_a * diff_max + LEVELS_OUT_BLACK;

      if (pixel_r < 0.0f)
        pixel_r = 0.0f;
      else if (pixel_r > 255.0f)
        pixel_r = 255.0f;
      if (pixel_g < 0.0f)
        pixel_g = 0.0f;
      else if (pixel_g > 255.0f)
        pixel_g = 255.0f;
      if (pixel_b < 0.0f)
        pixel_b = 0.0f;
      else if (pixel_b > 255.0f)
        pixel_b = 255.0f;
      if (pixel_a < 0.0f)
        pixel_a = 0.0f;
      else if (pixel_a > 255.0f)
        pixel_a = 255.0f;

      output[index_bmp(info.width, x, y)] = bmp_rgba(pixel_r, pixel_g, pixel_b, pixel_a);
    }
  }
}

static void run_posterize_ref(AndroidBitmapInfo info, const uint32_t* input, uint32_t* output) {
  const float intensities[] = {
      POSTERIZE_INTENSITY0, POSTERIZE_INTENSITY1, POSTERIZE_INTENSITY2, POSTERIZE_INTENSITY3,
      POSTERIZE_INTENSITY4, POSTERIZE_INTENSITY5
  };

  const uint32_t colors[] = {
      POSTERIZE_COLOR0_REF,
      POSTERIZE_COLOR1_REF,
      POSTERIZE_COLOR2_REF,
      POSTERIZE_COLOR3_REF,
      POSTERIZE_COLOR4_REF
  };

  const int num_stages = (sizeof(intensities) / sizeof(intensities[0])) - 1;

  for (int stage = 0; stage < num_stages; ++stage) {
    float intensity_min = intensities[stage];
    float intensity_max = intensities[stage + 1];
    uint32_t color = colors[stage];

    for (int y = 0; y < info.height; ++y) {
      for (int x = 0; x < info.width; ++x) {
        uint32_t pixel = input[index_bmp(info.width, x, y)];
        float pixel_intensity_r = ((float) bmp_red(pixel) / 0xff) * RED_WEIGHT;
        float pixel_intensity_g = ((float) bmp_green(pixel) / 0xff) * GREEN_WEIGHT;
        float pixel_intensity_b = ((float) bmp_blue(pixel) / 0xff) * BLUE_WEIGHT;
        float pixel_intensity = pixel_intensity_r + pixel_intensity_g + pixel_intensity_b;

        if ((pixel_intensity <= intensity_max) && (pixel_intensity >= intensity_min))
          output[index_bmp(info.width, x, y)] = color;
      }
    }
  }
}
