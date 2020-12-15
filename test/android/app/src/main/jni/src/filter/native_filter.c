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


typedef struct {
  cl_program m_program;
  cl_kernel m_kernels[MAX_KERNELS];
  int m_kernel_id;
  fcRGBAImage* m_input;
} NativeImageFilter;

enum {
  GRAYSCALE, BLUR, CONVOLVE3, CONVOLVE5, BILATERAL, MEDIAN, CONTRAST, FISHEYE, LEVELS, POSTERIZE
};


static jclass NativeImageFilter_class = NULL;
FC_JAVA_INSTANCE_HANDLERS(NativeImageFilter);


static int run_grayscale(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_blur(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_convolve3(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_convolve5(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_bilateral(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_median(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_contrast(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_fisheye(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_levels(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);
static int run_posterize(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output);


JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_setupImpl(JNIEnv* env, jobject obj,
                                                                          jobject asset_manager,
                                                                          int kernel_id) {
  if (!NativeImageFilter_class)
    FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/androidtest/model/NativeImageFilter",
                      NativeImageFilter_class, "NativeImageFilter.setupImpl", FC_VOID_EXPR);

  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  if (!self)
    self = NativeImageFilter_allocJava(env, obj);

  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.setupImpl",
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
    FC_LOGERROR_FMT("Unknown kernel id: %d", kernel_id);
    num_kernels = 0;
    break;
  }

  for (int i = 0; i < num_kernels; ++i) {
    self->m_kernels[i] = clCreateKernel(self->m_program, kernel_names[i], &err);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "clCreateKernel", FC_VOID_EXPR);
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_processImpl(JNIEnv* env,
                                                                            jobject obj,
                                                                            jobject jni_input,
                                                                            jobject jni_output) {
  NativeImageFilter* self = NativeImageFilter_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "NativeImageFilter.processImpl",
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
    err = run_grayscale(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_grayscale", FC_VOID_EXPR);
    break;
  case BLUR:
    err = run_blur(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_blur", FC_VOID_EXPR);
    break;
  case CONVOLVE3:
    err = run_convolve3(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_convolve3", FC_VOID_EXPR);
    break;
  case CONVOLVE5:
    err = run_convolve5(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_convolve5", FC_VOID_EXPR);
    break;
  case BILATERAL:
    err = run_bilateral(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_bilateral", FC_VOID_EXPR);
    break;
  case MEDIAN:
    err = run_median(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_median", FC_VOID_EXPR);
    break;
  case CONTRAST:
    err = run_contrast(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_contrast", FC_VOID_EXPR);
    break;
  case FISHEYE:
    err = run_fisheye(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_fisheye", FC_VOID_EXPR);
    break;
  case LEVELS:
    err = run_levels(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_levels", FC_VOID_EXPR);
    break;
  case POSTERIZE:
    err = run_posterize(self, input, output);
    FC_EXCEPTION_HANDLE_ERROR(env, err, "run_posterize", FC_VOID_EXPR);
    break;
  default:
    FC_LOGERROR_FMT("Unknown kernel id: %d", self->m_kernel_id);
    break;
  }
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_model_NativeImageFilter_releaseImpl(JNIEnv* env,
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

// Kernel execution

static int run_grayscale(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_blur(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_convolve3(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Set up 3x3 convolution mask (sharpening)
  fcFloatArray* mask = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initSize(mask, 9);
  if (err)
    goto cleanup;

  err = fcFloatArray_syncToNative(mask);
  if (err)
    goto cleanup;

  mask->c[0] = 0;
  mask->c[1] = -1;
  mask->c[2] = 0;

  mask->c[3] = -1;
  mask->c[4] = 5;
  mask->c[5] = -1;

  mask->c[6] = 0;
  mask->c[7] = -1;
  mask->c[8] = 0;

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

static int run_convolve5(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Set up 5x5 convolution mask (laplacian of gaussian)
  fcFloatArray* mask = calloc(1, sizeof(fcFloatArray));
  err = fcFloatArray_initSize(mask, 25);
  if (err)
    goto cleanup;

  err = fcFloatArray_syncToNative(mask);
  if (err)
    goto cleanup;

  mask->c[0] = 0;
  mask->c[1] = 0;
  mask->c[2] = -1;
  mask->c[3] = 0;
  mask->c[4] = 0;

  mask->c[5] = 0;
  mask->c[6] = -1;
  mask->c[7] = -2;
  mask->c[8] = -1;
  mask->c[9] = 0;

  mask->c[10] = -1;
  mask->c[11] = -2;
  mask->c[12] = 16;
  mask->c[13] = -2;
  mask->c[14] = -1;

  mask->c[15] = 0;
  mask->c[16] = -1;
  mask->c[17] = -2;
  mask->c[18] = -1;
  mask->c[19] = 0;

  mask->c[20] = 0;
  mask->c[21] = 0;
  mask->c[22] = -1;
  mask->c[23] = 0;
  mask->c[24] = 0;

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

static int run_bilateral(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_median(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_contrast(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_fisheye(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_levels(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
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

static int run_posterize(NativeImageFilter* self, fcRGBAImage* input, fcRGBAImage* output) {
  int err;

  // Copy input image into output, to use it the output as read-write buffer
  // TODO Replace with {fcRGBAImage|fc<X>Array|fc<X><N>Array}_setCopy()
  err = fcRGBAImage_syncToNative(input);
  if (err)
    return err;

  err = fcByte4Array_setBuffer(output->pixels, output->pixels->len * sizeof(cl_byte4), input->pixels->c);
  if (err)
    return err;

  err = fcRGBAImage_syncToOCL(input);
  if (err)
    return err;

  err = fcRGBAImage_syncToOCL(output);
  if (err)
    return err;

  // Execute kernel
  size_t sz[] = {input->dims.x, input->dims.y};
  const fcFloat2 intensities[] = {
      fcFloat2_create11(0.0f, 0.2f),
      fcFloat2_create11(0.2f, 0.4f),
      fcFloat2_create11(0.4f, 0.6f),
      fcFloat2_create11(0.6f, 0.8f),
      fcFloat2_create11(0.8f, 1.0f)
  };
  const fcByte4 colors[] = {
      fcRGBAColor_RED,
      fcRGBAColor_GREEN,
      fcRGBAColor_BLUE,
      fcRGBAColor_YELLOW,
      fcRGBAColor_CYAN
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
