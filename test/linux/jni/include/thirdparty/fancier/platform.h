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
