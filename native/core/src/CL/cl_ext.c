#define CL_TARGET_OPENCL_VERSION 300
#include <CL/cl_ext.h>
#include <CL/cl_gl_ext.h>

cl_int CL_API_ENTRY clSetMemObjectDestructorAPPLE(
    cl_mem memobj, void (*pfn_notify)(cl_mem memobj, void* user_data), void* user_data) {
  return 0;
}

void CL_API_ENTRY clLogMessagesToSystemLogAPPLE(const char* errstr, const void* private_info,
                                                size_t cb, void* user_data) {}

void CL_API_ENTRY clLogMessagesToStdoutAPPLE(const char* errstr, const void* private_info,
                                             size_t cb, void* user_data) {}

void CL_API_ENTRY clLogMessagesToStderrAPPLE(const char* errstr, const void* private_info,
                                             size_t cb, void* user_data) {}

CL_API_ENTRY cl_int CL_API_CALL clIcdGetPlatformIDsKHR(cl_uint num_entries,
                                                       cl_platform_id* platforms,
                                                       cl_uint* num_platforms) {
  return 0;
}

CL_API_ENTRY cl_program CL_API_CALL clCreateProgramWithILKHR(cl_context context, const void* il,
                                                             size_t length, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clTerminateContextKHR(cl_context context) {
  return 0;
}

CL_API_ENTRY cl_command_queue CL_API_CALL clCreateCommandQueueWithPropertiesKHR(
    cl_context context, cl_device_id device, const cl_queue_properties_khr* properties,
    cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clReleaseDeviceEXT(cl_device_id device) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clRetainDeviceEXT(cl_device_id device) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL
clCreateSubDevicesEXT(cl_device_id in_device, const cl_device_partition_property_ext* properties,
                      cl_uint num_entries, cl_device_id* out_devices, cl_uint* num_devices) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueMigrateMemObjectEXT(
    cl_command_queue command_queue, cl_uint num_mem_objects, const cl_mem* mem_objects,
    cl_mem_migration_flags_ext flags, cl_uint num_events_in_wait_list,
    const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clGetDeviceImageInfoQCOM(cl_device_id device, size_t image_width,
                                                         size_t image_height,
                                                         const cl_image_format* image_format,
                                                         cl_image_pitch_info_qcom param_name,
                                                         size_t param_value_size, void* param_value,
                                                         size_t* param_value_size_ret) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueAcquireGrallocObjectsIMG(
    cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueReleaseGrallocObjectsIMG(
    cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL
clEnqueueGenerateMipmapIMG(cl_command_queue command_queue, cl_mem src_image, cl_mem dst_image,
                           cl_mipmap_filter_mode_img mipmap_filter_mode, const size_t* array_region,
                           const size_t* mip_region, cl_uint num_events_in_wait_list,
                           const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clGetKernelSubGroupInfoKHR(
    cl_kernel in_kernel, cl_device_id in_device, cl_kernel_sub_group_info param_name,
    size_t input_value_size, const void* input_value, size_t param_value_size, void* param_value,
    size_t* param_value_size_ret) {
  return 0;
}

CL_API_ENTRY cl_mem CL_API_CALL clImportMemoryARM(cl_context context, cl_mem_flags flags,
                                                  const cl_import_properties_arm* properties,
                                                  void* memory, size_t size,
                                                  cl_int* errcode_ret) CL_EXT_SUFFIX__VERSION_1_0 {
  return NULL;
}
CL_API_ENTRY void* CL_API_CALL clSVMAllocARM(cl_context context, cl_svm_mem_flags_arm flags,
                                             size_t size, cl_uint alignment) {
  return NULL;
}

CL_API_ENTRY void CL_API_CALL clSVMFreeARM(cl_context context, void* svm_pointer) {}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueSVMFreeARM(
    cl_command_queue command_queue, cl_uint num_svm_pointers, void* svm_pointers[],
    void(CL_CALLBACK* pfn_free_func)(cl_command_queue queue, cl_uint num_svm_pointers,
                                     void* svm_pointers[], void* user_data),
    void* user_data, cl_uint num_events_in_wait_list, const cl_event* event_wait_list,
    cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueSVMMemcpyARM(cl_command_queue command_queue,
                                                      cl_bool blocking_copy, void* dst_ptr,
                                                      const void* src_ptr, size_t size,
                                                      cl_uint num_events_in_wait_list,
                                                      const cl_event* event_wait_list,
                                                      cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueSVMMemFillARM(cl_command_queue command_queue,
                                                       void* svm_ptr, const void* pattern,
                                                       size_t pattern_size, size_t size,
                                                       cl_uint num_events_in_wait_list,
                                                       const cl_event* event_wait_list,
                                                       cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueSVMMapARM(cl_command_queue command_queue,
                                                   cl_bool blocking_map, cl_map_flags flags,
                                                   void* svm_ptr, size_t size,
                                                   cl_uint num_events_in_wait_list,
                                                   const cl_event* event_wait_list,
                                                   cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueSVMUnmapARM(cl_command_queue command_queue, void* svm_ptr,
                                                     cl_uint num_events_in_wait_list,
                                                     const cl_event* event_wait_list,
                                                     cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clSetKernelArgSVMPointerARM(cl_kernel kernel, cl_uint arg_index,
                                                            const void* arg_value) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clSetKernelExecInfoARM(cl_kernel kernel,
                                                       cl_kernel_exec_info_arm param_name,
                                                       size_t param_value_size,
                                                       const void* param_value) {
  return 0;
}

CL_API_ENTRY cl_event CL_API_CALL clCreateEventFromGLsyncKHR(cl_context context, cl_GLsync sync,
                                                             cl_int* errcode_ret) {
  return NULL;
}
