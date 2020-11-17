#include <CL/cl_ext.h>

CL_API_ENTRY cl_int CL_API_CALL clIcdGetPlatformIDsKHR(
  cl_uint  num_entries,
  cl_platform_id * platforms,
  cl_uint * num_platforms
)
{
  return 1;
}

CL_API_ENTRY cl_int CL_API_CALL clReleaseDeviceEXT(
  cl_device_id device
) CL_EXT_SUFFIX__VERSION_1_1
{
  return 1;
}

CL_API_ENTRY cl_int CL_API_CALL clRetainDeviceEXT(
  cl_device_id device
) CL_EXT_SUFFIX__VERSION_1_1
{
  return 1;
}

CL_API_ENTRY cl_int CL_API_CALL clCreateSubDevicesEXT(
  cl_device_id in_device,
  const cl_device_partition_property_ext * properties,
  cl_uint num_entries,
  cl_device_id * out_devices,
  cl_uint * num_devices
) CL_EXT_SUFFIX__VERSION_1_1
{
  return 1;
}
