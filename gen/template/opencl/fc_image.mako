## Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
## Copyright (C) 2021 Universidad de La Laguna.
##
## Fancier is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## Fancier is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
##

<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
#ifdef cl_khr_fp64
#pragma OPENCL EXTENSION cl_khr_fp64 : enable
#endif // cl_khr_fp64

#if defined(__EMBEDDED_PROFILE__) && defined(cles_khr_int64)
#pragma OPENCL EXTENSION cles_khr_int64 : enable
#endif // __EMBEDDED_PROFILE__ && cles_khr_int64

uint index_img (uint2 dims, uint x, uint y) {
    return y * dims.x + x;
}

int toRgba (uchar4 color) {
    return ((color.x & 0xff) << 24) | ((color.y & 0xff) << 16) | ((color.z & 0xff) << 8) | ((color.w & 0xff) << 0);
}

uchar4 fromRgba (int rgba) {
    return (uchar4)((uchar)((rgba >> 24) & 0xff), (uchar)((rgba >> 16) & 0xff), (uchar)((rgba >> 8) & 0xff), (uchar)((rgba >> 0) & 0xff));
}
