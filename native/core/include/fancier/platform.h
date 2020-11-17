#ifndef _FANCIER_PLATFORM_H_
#define _FANCIER_PLATFORM_H_

#include <stdbool.h>
#include <stdint.h>

#include <jni.h>
#include <CL/cl.h>


#ifdef __cplusplus
#define FANCIER_API extern "C"
#define FC_JNI_CALL(_env, _func_name, ...) (_env)->_func_name(__VA_ARGS__)
#else
#define FANCIER_API
#define FC_JNI_CALL(_env, _func_name, ...) (*_env)->_func_name(_env, ##__VA_ARGS__)
#endif

typedef cl_char cl_byte;

#endif // _FANCIER_PLATFORM_H_
