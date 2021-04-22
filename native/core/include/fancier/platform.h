#ifndef _FANCIER_PLATFORM_H_
#define _FANCIER_PLATFORM_H_

#include <jni.h>
#define CL_TARGET_OPENCL_VERSION 110
#include <CL/cl.h>

#include <stdbool.h>
#include <stdint.h>


#ifdef __cplusplus
#define FANCIER_API                        extern "C"
#define FC_JNI_CALL(_env, _func_name, ...) (_env)->_func_name(__VA_ARGS__)

typedef bool fcBool;
#define FC_TRUE true
#define FC_FALSE false
#else
#define FANCIER_API                        extern
#define FC_JNI_CALL(_env, _func_name, ...) (*_env)->_func_name(_env, ##__VA_ARGS__)

typedef int fcBool;
#define FC_TRUE 1
#define FC_FALSE 0
#endif

#define FANCIER_STATIC static
#define FC_PURE __attribute__((const))

typedef cl_char fcByte;
typedef cl_short fcShort;
typedef cl_int fcInt;
typedef cl_long fcLong;
typedef cl_float fcFloat;
typedef cl_double fcDouble;
typedef fcInt fcError;

#endif  // _FANCIER_PLATFORM_H_
