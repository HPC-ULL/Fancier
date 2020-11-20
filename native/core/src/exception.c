#include <fancier/exception.h>

#include <assert.h>
#include <stdio.h>

#include <fancier/log.h>
#include <fancier/ocl.h>

#include <fancier/internal/snippets.inc>


jclass fcException_NativeException_class = NULL;
jclass fcException_OpenCLException_class = NULL;
jmethodID fcException_NativeException_constructor_s = NULL;
jmethodID fcException_NativeException_constructor_st = NULL;
jmethodID fcException_OpenCLException_constructor_is = NULL;

static const char* const NATIVE_EXCEPTION_TEXT[] = {
  "",

  "Invalid 'this' pointer",
  "Invalid parameter specified",
  "Invalid instance state",
  "Memory copy failed",

  "Directory error",
  "File error",

  "Java class not found",
  "Java method not found",
  "Java field not found",
  "Out of memory exception creating new global reference",
  "Cannot get array elements",
  "Invalid array length",

  "Cannot get Bitmap information",
  "Unsupported Bitmap format",
  "Cannot lock Bitmap pixel buffer",
  "Cannot unlock Bitmap pixel buffer",
  "Invalid Bitmap dimensions",

  "Other error encountered"
};


#define EXCEPTION_STRING_SIZE 8 * 1024 // 8K chars maximum message size
static char EXCEPTION_STRING_BUFFER[EXCEPTION_STRING_SIZE];

#define FORWARD_EXCEPTION_IF(_env, _pred, _ret)\
  if ((_pred) || FC_JNI_CALL(_env, ExceptionCheck)) {\
    return _ret;\
  } else ((void) 0)


static void formatExceptionString (const char* file, int line, const char* function,
                                   const char* message) {
  snprintf(EXCEPTION_STRING_BUFFER, EXCEPTION_STRING_SIZE, "[%s:%d] %s :: %s.", file, line, function, message);
}

static const char* formatOpenCLError (int clerror) {
  switch (clerror) {
  case CL_DEVICE_NOT_FOUND:
    return "CL_DEVICE_NOT_FOUND";
  case CL_DEVICE_NOT_AVAILABLE:
    return "CL_DEVICE_NOT_AVAILABLE";
  case CL_COMPILER_NOT_AVAILABLE:
    return "CL_COMPILER_NOT_AVAILABLE";
  case CL_MEM_OBJECT_ALLOCATION_FAILURE:
    return "CL_MEM_OBJECT_ALLOCATION_FAILURE";
  case CL_OUT_OF_RESOURCES:
    return "CL_OUT_OF_RESOURCES";
  case CL_OUT_OF_HOST_MEMORY:
    return "CL_OUT_OF_HOST_MEMORY";
  case CL_PROFILING_INFO_NOT_AVAILABLE:
    return "CL_PROFILING_INFO_NOT_AVAILABLE";
  case CL_MEM_COPY_OVERLAP:
    return "CL_MEM_COPY_OVERLAP";
  case CL_IMAGE_FORMAT_MISMATCH:
    return "CL_IMAGE_FORMAT_MISMATCH";
  case CL_IMAGE_FORMAT_NOT_SUPPORTED:
    return "CL_IMAGE_FORMAT_NOT_SUPPORTED";
  case CL_BUILD_PROGRAM_FAILURE:
    return "CL_BUILD_PROGRAM_FAILURE";
  case CL_MAP_FAILURE:
    return "CL_MAP_FAILURE";
  case CL_MISALIGNED_SUB_BUFFER_OFFSET:
    return "CL_MISALIGNED_SUB_BUFFER_OFFSET";
  case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
    return "CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST";
  case CL_INVALID_VALUE:
    return "CL_INVALID_VALUE";
  case CL_INVALID_DEVICE_TYPE:
    return "CL_INVALID_DEVICE_TYPE";
  case CL_INVALID_PLATFORM:
    return "CL_INVALID_PLATFORM";
  case CL_INVALID_DEVICE:
    return "CL_INVALID_DEVICE";
  case CL_INVALID_CONTEXT:
    return "CL_INVALID_CONTEXT";
  case CL_INVALID_QUEUE_PROPERTIES:
    return "CL_INVALID_QUEUE_PROPERTIES";
  case CL_INVALID_COMMAND_QUEUE:
    return "CL_INVALID_COMMAND_QUEUE";
  case CL_INVALID_HOST_PTR:
    return "CL_INVALID_HOST_PTR";
  case CL_INVALID_MEM_OBJECT:
    return "CL_INVALID_MEM_OBJECT";
  case CL_INVALID_IMAGE_FORMAT_DESCRIPTOR:
    return "CL_INVALID_IMAGE_FORMAT_DESCRIPTOR";
  case CL_INVALID_IMAGE_SIZE:
    return "CL_INVALID_IMAGE_SIZE";
  case CL_INVALID_SAMPLER:
    return "CL_INVALID_SAMPLER";
  case CL_INVALID_BINARY:
    return "CL_INVALID_BINARY";
  case CL_INVALID_BUILD_OPTIONS:
    return "CL_INVALID_BUILD_OPTIONS";
  case CL_INVALID_PROGRAM:
    return "CL_INVALID_PROGRAM";
  case CL_INVALID_PROGRAM_EXECUTABLE:
    return "CL_INVALID_PROGRAM_EXECUTABLE";
  case CL_INVALID_KERNEL_NAME:
    return "CL_INVALID_KERNEL_NAME";
  case CL_INVALID_KERNEL_DEFINITION:
    return "CL_INVALID_KERNEL_DEFINITION";
  case CL_INVALID_KERNEL:
    return "CL_INVALID_KERNEL";
  case CL_INVALID_ARG_INDEX:
    return "CL_INVALID_ARG_INDEX";
  case CL_INVALID_ARG_VALUE:
    return "CL_INVALID_ARG_VALUE";
  case CL_INVALID_ARG_SIZE:
    return "CL_INVALID_ARG_SIZE";
  case CL_INVALID_KERNEL_ARGS:
    return "CL_INVALID_KERNEL_ARGS";
  case CL_INVALID_WORK_DIMENSION:
    return "CL_INVALID_WORK_DIMENSION";
  case CL_INVALID_WORK_GROUP_SIZE:
    return "CL_INVALID_WORK_GROUP_SIZE";
  case CL_INVALID_WORK_ITEM_SIZE:
    return "CL_INVALID_WORK_ITEM_SIZE";
  case CL_INVALID_GLOBAL_OFFSET:
    return "CL_INVALID_GLOBAL_OFFSET";
  case CL_INVALID_EVENT_WAIT_LIST:
    return "CL_INVALID_EVENT_WAIT_LIST";
  case CL_INVALID_EVENT:
    return "CL_INVALID_EVENT";
  case CL_INVALID_OPERATION:
    return "CL_INVALID_OPERATION";
  case CL_INVALID_GL_OBJECT:
    return "CL_INVALID_GL_OBJECT";
  case CL_INVALID_BUFFER_SIZE:
    return "CL_INVALID_BUFFER_SIZE";
  case CL_INVALID_MIP_LEVEL:
    return "CL_INVALID_MIP_LEVEL";
  case CL_INVALID_GLOBAL_WORK_SIZE:
    return "CL_INVALID_GLOBAL_WORK_SIZE";
  case CL_INVALID_PROPERTY:
    return "CL_INVALID_PROPERTY";
  default:
    return "OpenCL Error";
  }
}

int fcException_initJNI (JNIEnv* env) {
  // Do not use the FC_INIT_CLASS_REF macro to initialize NativeException references because being
  // initialized is a pre-requisite of the macro
  jclass cls = FC_JNI_CALL(env, FindClass, "es/ull/pcg/hpc/fancier/NativeException");
  FORWARD_EXCEPTION_IF(env, !cls, FC_EXCEPTION_CLASS_NOT_FOUND);
  fcException_NativeException_class = (jclass) FC_JNI_CALL(env, NewGlobalRef, cls);
  FORWARD_EXCEPTION_IF(env, !fcException_NativeException_class, FC_EXCEPTION_OUT_OF_MEMORY);

  // Do not use the FC_INIT_CONSTRUCTOR macro to initialize NativeException constructors because
  // having these references initialized is a pre-requisite of the macro
  fcException_NativeException_constructor_s = FC_JNI_CALL(env, GetMethodID,
      fcException_NativeException_class, "<init>", "(Ljava/lang/String;)V");
  FORWARD_EXCEPTION_IF(env, !fcException_NativeException_constructor_s, FC_EXCEPTION_METHOD_NOT_FOUND);

  fcException_NativeException_constructor_st = FC_JNI_CALL(env, GetMethodID,
      fcException_NativeException_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
  FORWARD_EXCEPTION_IF(env, !fcException_NativeException_constructor_st,
                       FC_EXCEPTION_METHOD_NOT_FOUND);

  // Once there are valid references to NativeException and its constructors, we can use
  // FC_INIT_CLASS_REF and FC_INIT_CONSTRUCTOR macros
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/OpenCLException",
                    fcException_OpenCLException_class, "fcException_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcException_OpenCLException_constructor_is,
                      fcException_OpenCLException_class, "ILjava/lang/String;",
                      "fcException_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  return FC_EXCEPTION_SUCCESS;
}

void fcException_releaseJNI (JNIEnv* env) {
  FC_FREE_CLASS_REF(env, fcException_OpenCLException_class);
  fcException_OpenCLException_constructor_is = NULL;
  FC_FREE_CLASS_REF(env, fcException_NativeException_class);
  fcException_NativeException_constructor_st = NULL;
  fcException_NativeException_constructor_s = NULL;
}

jstring fcException_createString (JNIEnv* env, const char* file, int line, const char* function,
                                  const char* message) {
  formatExceptionString(file, line, function, message);
  return FC_JNI_CALL(env, NewStringUTF, EXCEPTION_STRING_BUFFER);
}

void fcException_throwWrappedNative (JNIEnv* env, const char* file, int line, const char* function,
                                     jthrowable cause) {
  FC_JNI_CALL(env, ExceptionClear);
  jstring error_message = fcException_createString(env, file, line, function, "Exception occurred during last operation");
  jthrowable exception_obj = (jthrowable) FC_JNI_CALL(env, NewObject, fcException_NativeException_class, fcException_NativeException_constructor_st, error_message, cause);
  FC_JNI_CALL(env, Throw, exception_obj);
}

void fcException_throwNative (JNIEnv* env, const char* file, int line, const char* function,
                              int error) {
  assert(error > FC_EXCEPTION_SUCCESS && error <= FC_EXCEPTION_OTHER);
  FC_JNI_CALL(env, ExceptionClear);

  jstring error_message = fcException_createString(env, file, line, function,
                                                   NATIVE_EXCEPTION_TEXT[error]);
  jthrowable exception_obj = (jthrowable) FC_JNI_CALL(env, NewObject,
      fcException_NativeException_class, fcException_NativeException_constructor_st, error_message);
  FC_JNI_CALL(env, Throw, exception_obj);
}

void fcException_throwOpenCL (JNIEnv* env, const char* file, int line, const char* function,
                              int clerror) {
  assert(clerror < FC_EXCEPTION_SUCCESS && clerror != CL_BUILD_PROGRAM_FAILURE);
  FC_JNI_CALL(env, ExceptionClear);

  jstring error_message = fcException_createString(env, file, line, function,
                                                   formatOpenCLError(clerror));
  jthrowable exception_obj = (jthrowable) FC_JNI_CALL(env, NewObject,
      fcException_OpenCLException_class, fcException_OpenCLException_constructor_is, clerror,
      error_message);
  FC_JNI_CALL(env, Throw, exception_obj);
}

void fcException_throwOpenCLBuild (JNIEnv* env, const char* file, int line, const char* function,
                                   cl_program program) {
  FC_JNI_CALL(env, ExceptionClear);

  char build_log[EXCEPTION_STRING_SIZE];
  clGetProgramBuildInfo(program, fcOpenCL_rt.device, CL_PROGRAM_BUILD_LOG, EXCEPTION_STRING_SIZE,
                        build_log, NULL);

  jstring error_message = fcException_createString(env, file, line, function, build_log);
  jthrowable exception_obj = (jthrowable) FC_JNI_CALL(env, NewObject,
      fcException_OpenCLException_class, fcException_OpenCLException_constructor_is,
      CL_BUILD_PROGRAM_FAILURE, error_message);
  FC_JNI_CALL(env, Throw, exception_obj);
}

void fcException_logNative (const char* file, int line, const char* function, int error) {
  assert(error > FC_EXCEPTION_SUCCESS && error <= FC_EXCEPTION_OTHER);
  formatExceptionString(file, line, function, NATIVE_EXCEPTION_TEXT[error]);
  FC_LOGERROR(EXCEPTION_STRING_BUFFER);
}

void fcException_logOpenCL (const char* file, int line, const char* function, int clerror) {
  assert(clerror < FC_EXCEPTION_SUCCESS && clerror >= CL_INVALID_PROPERTY);

  formatExceptionString(file, line, function, formatOpenCLError(clerror));
  FC_LOGERROR(EXCEPTION_STRING_BUFFER);
}
