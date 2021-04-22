#include <jni.h>
#include <math.h>
#include <unistd.h>

#define CL_TARGET_OPENCL_VERSION 110
#include <CL/cl.h>

#define __USE_GNU
#include <sched.h>

#define BUFFER_SIZE 2048

static cl_platform_id platform = NULL;
static cl_device_id device = NULL;
static cl_context context = NULL;
static cl_command_queue queue = NULL;
static cl_program program = NULL;
static cl_kernel kernel = NULL;
static cl_mem input = NULL;
static cl_mem output = NULL;

// TODO Tune OpenCL kernel
static const char* code = "kernel void f(global const float* in, global float* out) {\n"
                          "  int id = get_global_id(0);\n"
                          "\n"
                          "  float x = in[id];\n"
                          "  float result = 0.0f;\n"
                          "\n"
                          "  for (int i = 0; i < 10; ++i) {\n"
                          "    for (int j = 0; j < 10; ++j) {\n"
                          "      float rel_i = (1 + i) / 10.0f;\n"
                          "      float rel_j = (1 + j) / 10.0f;\n"
                          "      result = mad(sin(sqrt(rel_i)), cos(sqrt(rel_j)), result);\n"
                          "    }\n"
                          "  }\n"
                          "\n"
                          "  out[id] = result;\n"
                          "}";

void pin_process_to_cores(int from, int to) {
  cpu_set_t mask;
  CPU_ZERO(&mask);

  for (int i = from; i <= to; ++i)
    CPU_SET(i, &mask);

  sched_setaffinity(0, sizeof(cpu_set_t), &mask);
}

// Init / Release

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_DeviceUtils_init(JNIEnv* env, jclass clazz) {
  clGetPlatformIDs(1, &platform, NULL);
  clGetDeviceIDs(platform, CL_DEVICE_TYPE_GPU, 1, &device, NULL);
  context = clCreateContext(NULL, 1, &device, NULL, NULL, NULL);
  queue = clCreateCommandQueue(context, device, 0, NULL);

  program = clCreateProgramWithSource(context, 1, &code, NULL, NULL);
  clBuildProgram(program, 1, &device, NULL, NULL, NULL);
  kernel = clCreateKernel(program, "f", NULL);

  input = clCreateBuffer(context, CL_MEM_READ_ONLY, BUFFER_SIZE * sizeof(float), NULL, NULL);
  output = clCreateBuffer(context, CL_MEM_WRITE_ONLY, BUFFER_SIZE * sizeof(float), NULL, NULL);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_DeviceUtils_release(JNIEnv* env, jclass clazz) {
  clReleaseMemObject(output);
  clReleaseMemObject(input);
  clReleaseKernel(kernel);
  clReleaseProgram(program);
  clReleaseCommandQueue(queue);
  clReleaseContext(context);
}

// OSUtils

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_OSUtils_unpinThreads(JNIEnv* env, jclass clazz) {
  long cpus = sysconf(_SC_NPROCESSORS_ONLN);
  pin_process_to_cores(0, cpus - 1);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_OSUtils_pinThreads(JNIEnv* env, jclass clazz,
                                                                     jint first_core,
                                                                     jint last_core) {
  pin_process_to_cores(first_core, last_core);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_OSUtils_usedCores(JNIEnv* env, jclass clazz) {
  cpu_set_t mask;
  CPU_ZERO(&mask);

  sched_getaffinity(0, sizeof(cpu_set_t), &mask);
  return CPU_COUNT(&mask);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_OSUtils_setDefaultScheduler(JNIEnv* env,
                                                                              jclass clazz) {
  struct sched_param param;
  param.sched_priority = 0;
  sched_setscheduler(0, SCHED_OTHER, &param);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_OSUtils_setRealtimeScheduler(JNIEnv* env,
                                                                               jclass clazz) {
  struct sched_param param;
  param.sched_priority = sched_get_priority_max(SCHED_FIFO);
  sched_setscheduler(0, SCHED_FIFO, &param);
}

// DeviceUtils

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_DeviceUtils_cpuWarmUpNative(JNIEnv* env,
                                                                              jclass clazz) {
  // TODO Tune native compute-bound code
  jfloat unused = 0.0f;

  for (int repetition = 0; repetition < BUFFER_SIZE; ++repetition) {
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        float rel_i = sinf(sqrtf((1 + i) / 10.0f));
        float rel_j = cosf(sqrtf((1 + j) / 10.0f));
        unused += rel_i * rel_j;
      }
    }
  }

  return unused;
}

JNIEXPORT jfloat JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_DeviceUtils_ddrWarmUpNative(JNIEnv* env,
                                                                              jclass clazz) {
  // TODO Native memory-bound code running on little cores?
  return 0.0f;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_androidtest_benchmark_DeviceUtils_gpuWarmUpNative(JNIEnv* env,
                                                                              jclass clazz) {
  clSetKernelArg(kernel, 0, sizeof(cl_mem), &input);
  clSetKernelArg(kernel, 1, sizeof(cl_mem), &output);

  size_t sz = BUFFER_SIZE;
  clEnqueueNDRangeKernel(queue, kernel, 1, NULL, &sz, NULL, 0, NULL, NULL);
  clFinish(queue);
}
