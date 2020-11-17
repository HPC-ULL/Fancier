/**
 * @file
 * This file contains macro definitions and functions used to simplify common
 * operations that have to be done in the generated native OpenCL host code.
 * @note Access to the global variables or functions exported is not
 *       thread-safe.
 */

#ifndef _FANCIER_OCL_H_
#define _FANCIER_OCL_H_

#include <fancier/platform.h>


/**
 * A structure that represents information for an OpenCL device.
 */
typedef struct {
  cl_device_type deviceType;         //!< The type of OpenCL device.
  cl_uint computeUnits;              //!< The number of compute units.
  size_t workgroupSize;              //!< The maximum workgroup size.
  cl_bool unifiedMemory;             //!< Whether host and device memory is shared.
  cl_ulong globalMemory;             //!< The size of global memory in bytes.
  cl_ulong localMemory;              //!< The size of local memory in bytes.
  cl_ulong globalCache;              //!< The size of the cache memory in bytes.
  cl_uint preferredCharVectorWidth;  //!< The preferred vector width for chars.
  cl_uint nativeCharVectorWidth;     //!< The native vector width for chars.
  cl_uint preferredFloatVectorWidth; //!< The preferred vector width for floats.
  cl_uint nativeFloatVectorWidth;    //!< The native vector width for floats.
} fcOpenCLInfo;

/**
 * A structure that holds runtime OpenCL objects needed to manage execution and memory.
 */
typedef struct {
  cl_platform_id platform; //!< The selected OpenCL platform.
  cl_device_id device;     //!< The selected OpenCL device.
  cl_context context;      //!< The context in which all operations are executed.
  cl_command_queue queue;  //!< The OpenCL command queue where all operations are sent.
} fcOpenCLRT;


/// The information about the selected OpenCL device.
extern fcOpenCLInfo fcOpenCL_info;

/// The runtime management objects for the current OpenCL execution context.
extern fcOpenCLRT fcOpenCL_rt;


FANCIER_API jint fcOpenCL_initJNI (JNIEnv* env);
FANCIER_API void fcOpenCL_releaseJNI (JNIEnv* env);

FANCIER_API void fcOpenCL_logInfo ();

FANCIER_API cl_program fcOpenCL_compileKernel (int count, const char** src, cl_int* err);
FANCIER_API cl_program fcOpenCL_compileKernelFile (const char* kernel_dir,
                                                   const char* file_name, cl_int* err);

#ifdef __ANDROID__
FANCIER_API cl_program fcOpenCL_compileKernelAsset (JNIEnv* env, jobject mgr,
                                                    const char* kernel_dir, const char* file_name,
                                                    cl_int* err);
#endif // __ANDROID__


#endif // _FANCIER_OCL_H_
