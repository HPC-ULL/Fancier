#define CL_TARGET_OPENCL_VERSION 300
#include <CL/cl_ext_intel.h>

CL_API_ENTRY cl_accelerator_intel CL_API_CALL
clCreateAcceleratorINTEL(cl_context context, cl_accelerator_type_intel accelerator_type,
                         size_t descriptor_size, const void* descriptor, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clGetAcceleratorInfoINTEL(
    cl_accelerator_intel accelerator, cl_accelerator_info_intel param_name, size_t param_value_size,
    void* param_value, size_t* param_value_size_ret) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clRetainAcceleratorINTEL(cl_accelerator_intel accelerator) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clReleaseAcceleratorINTEL(cl_accelerator_intel accelerator) {
  return 0;
}

CL_API_ENTRY void* CL_API_CALL clHostMemAllocINTEL(cl_context context,
                                                          const cl_mem_properties_intel* properties,
                                                          size_t size, cl_uint alignment,
                                                          cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY void* CL_API_CALL clDeviceMemAllocINTEL(
    cl_context context, cl_device_id device, const cl_mem_properties_intel* properties, size_t size,
    cl_uint alignment, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY void* CL_API_CALL clSharedMemAllocINTEL(
    cl_context context, cl_device_id device, const cl_mem_properties_intel* properties, size_t size,
    cl_uint alignment, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clMemFreeINTEL(cl_context context, void* ptr) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clMemBlockingFreeINTEL(cl_context context, void* ptr) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clGetMemAllocInfoINTEL(cl_context context, const void* ptr,
                                                              cl_mem_info_intel param_name,
                                                              size_t param_value_size,
                                                              void* param_value,
                                                              size_t* param_value_size_ret) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clSetKernelArgMemPointerINTEL(cl_kernel kernel,
                                                                     cl_uint arg_index,
                                                                     const void* arg_value) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueMemsetINTEL(/* Deprecated */
                                                            cl_command_queue command_queue,
                                                            void* dst_ptr, cl_int value,
                                                            size_t size,
                                                            cl_uint num_events_in_wait_list,
                                                            const cl_event* event_wait_list,
                                                            cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueMemFillINTEL(cl_command_queue command_queue,
                                                             void* dst_ptr, const void* pattern,
                                                             size_t pattern_size, size_t size,
                                                             cl_uint num_events_in_wait_list,
                                                             const cl_event* event_wait_list,
                                                             cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueMemcpyINTEL(cl_command_queue command_queue,
                                                            cl_bool blocking, void* dst_ptr,
                                                            const void* src_ptr, size_t size,
                                                            cl_uint num_events_in_wait_list,
                                                            const cl_event* event_wait_list,
                                                            cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueMigrateMemINTEL(
    cl_command_queue command_queue, const void* ptr, size_t size, cl_mem_migration_flags flags,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueMemAdviseINTEL(
    cl_command_queue command_queue, const void* ptr, size_t size, cl_mem_advice_intel advice,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_mem CL_API_CALL clCreateBufferWithPropertiesINTEL(
    cl_context context, const cl_mem_properties_intel* properties, cl_mem_flags flags, size_t size,
    void* host_ptr, cl_int* errcode_ret) {
  return NULL;
}
