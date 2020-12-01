#define CL_TARGET_OPENCL_VERSION 300
#include <CL/cl_egl.h>

CL_API_ENTRY cl_mem CL_API_CALL clCreateFromEGLImageKHR(
    cl_context context, CLeglDisplayKHR egldisplay, CLeglImageKHR eglimage, cl_mem_flags flags,
    const cl_egl_image_properties_khr* properties, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueAcquireEGLObjectsKHR(
    cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueReleaseEGLObjectsKHR(
    cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_event CL_API_CALL clCreateEventFromEGLSyncKHR(cl_context context, CLeglSyncKHR sync,
                                                              CLeglDisplayKHR display,
                                                              cl_int* errcode_ret) {
  return NULL;
}
