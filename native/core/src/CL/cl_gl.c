#define CL_TARGET_OPENCL_VERSION 300
#include <CL/cl_gl.h>

CL_API_ENTRY cl_mem CL_API_CALL clCreateFromGLBuffer(cl_context context, cl_mem_flags flags,
                                                     cl_GLuint bufobj, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_mem CL_API_CALL clCreateFromGLTexture(cl_context context, cl_mem_flags flags,
                                                      cl_GLenum target, cl_GLint miplevel,
                                                      cl_GLuint texture, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_mem CL_API_CALL clCreateFromGLRenderbuffer(cl_context context, cl_mem_flags flags,
                                                           cl_GLuint renderbuffer,
                                                           cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clGetGLObjectInfo(cl_mem memobj, cl_gl_object_type* gl_object_type,
                                                  cl_GLuint* gl_object_name) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clGetGLTextureInfo(cl_mem memobj, cl_gl_texture_info param_name,
                                                   size_t param_value_size, void* param_value,
                                                   size_t* param_value_size_ret) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueAcquireGLObjects(
    cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_int CL_API_CALL clEnqueueReleaseGLObjects(
    cl_command_queue command_queue, cl_uint num_objects, const cl_mem* mem_objects,
    cl_uint num_events_in_wait_list, const cl_event* event_wait_list, cl_event* event) {
  return 0;
}

CL_API_ENTRY cl_mem CL_API_CALL clCreateFromGLTexture2D(cl_context context, cl_mem_flags flags,
                                                        cl_GLenum target, cl_GLint miplevel,
                                                        cl_GLuint texture, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_mem CL_API_CALL clCreateFromGLTexture3D(cl_context context, cl_mem_flags flags,
                                                        cl_GLenum target, cl_GLint miplevel,
                                                        cl_GLuint texture, cl_int* errcode_ret) {
  return NULL;
}

CL_API_ENTRY cl_int CL_API_CALL clGetGLContextInfoKHR(const cl_context_properties* properties,
                                                      cl_gl_context_info param_name,
                                                      size_t param_value_size, void* param_value,
                                                      size_t* param_value_size_ret) {
  return 0;
}
