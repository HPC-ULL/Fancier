#define GS_WEIGHTS ((float3)(0.299f, 0.587f, 0.114f))

// Helper functions

inline uint index_img(uint2 dims, uint x, uint y) {
  return y * dims.x + x;
}

uchar4 bilinear_interp(global const uchar4* img, uint2 dims, float2 coord) {
  const float2 pos_coord = fmax(coord, 0.0f);

  const uint x0 = min((uint) trunc(pos_coord.x), dims.x - 1);
  const uint x1 = min(x0 + 1, dims.x - 1);
  const uint y0 = min((uint) trunc(pos_coord.y), dims.y - 1);
  const uint y1 = min(y0 + 1, dims.y - 1);

  const float4 p00 = convert_float4(img[index_img(dims, x0, y0)]);
  const float4 p01 = convert_float4(img[index_img(dims, x0, y1)]);
  const float4 p10 = convert_float4(img[index_img(dims, x1, y0)]);
  const float4 p11 = convert_float4(img[index_img(dims, x1, y1)]);

  const float slopex0 = (float) x1 - pos_coord.x;
  const float slopex1 = pos_coord.x - (float) x0;

  const float4 pxy0 = p00 * slopex0 + p10 * slopex1;
  const float4 pxy1 = p01 * slopex0 + p11 * slopex1;

  const float4 out = ((float) y1 - coord.y) * pxy0 + (coord.y - (float) y0) * pxy1;
  return convert_uchar4_sat(out);
}

float3 matrix3x3_vector_multiply(global const float3* m, float3 v) {
  const float3 row0 = m[0] * v; // TODO dot
  const float3 row1 = m[1] * v;
  const float3 row2 = m[2] * v;

  return (float3)(
      row0.x + row0.y + row0.z,
      row1.x + row1.y + row1.z,
      row2.x + row2.y + row2.z
  );
}

// Kernels

kernel void grayscale(global const uchar4* in, global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x, id.y);

  const uchar4 pixel_in = in[index];
  const uchar gray_value = convert_uchar(dot(convert_float3(pixel_in.xyz), GS_WEIGHTS));

  out[index] = (uchar4)(gray_value, gray_value, gray_value, pixel_in.w);
}

kernel void blur_h(global const uchar4* in, global const float* gauss_kernel, const int radius,
                   global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));

  float4 blurred_pixel = 0.0f;
  int kernel_index = 0;

  if (id.x <= radius || id.x >= dims.x - radius) {
    for (int r = -radius; r <= radius; ++r) {
      const uint x = clampi(id.x + r, 0, dims.x - 1);
      blurred_pixel += convert_float4(in[index_img(dims, x, id.y)]) * gauss_kernel[kernel_index++];
    }
  }
  else {
    for (int r = -radius; r <= radius; ++r)
      blurred_pixel += convert_float4(in[index_img(dims, id.x + r, id.y)]) * gauss_kernel[kernel_index++];
  }

  out[index_img(dims, id.x, id.y)] = convert_uchar4(blurred_pixel);
}

kernel void blur_v(global const uchar4* in, global const float* gauss_kernel, const int radius,
                   global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));

  float4 blurred_pixel = 0.0f;
  int kernel_index = 0;

  if (id.y <= radius || id.y >= dims.y - radius) {
    for (int r = -radius; r <= radius; ++r) {
      const uint y = clampi(id.y + r, 0, dims.y - 1);
      blurred_pixel += convert_float4(in[index_img(dims, id.x, y)]) * gauss_kernel[kernel_index++];
    }
  }
  else {
    for (int r = -radius; r <= radius; ++r)
      blurred_pixel += convert_float4(in[index_img(dims, id.x, id.y + r)]) * gauss_kernel[kernel_index++];
  }

  out[index_img(dims, id.x, id.y)] = convert_uchar4(blurred_pixel);
}

kernel void convolve3x3(global const uchar4* in, global const float* weights, global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x,  id.y);

  const uint min_x = max((int) id.x - 1, 0);
  const uint max_x = min(id.x + 1, dims.x - 1);
  const uint min_y = max((int) id.y - 1, 0);
  const uint max_y = min(id.y + 1, dims.y - 1);

  const uchar4 pixel = in[index];

  const float3 p00 = convert_float3(in[index_img(dims, min_x, min_y)].xyz) * weights[0];
  const float3 p01 = convert_float3(in[index_img(dims, id.x,  min_y)].xyz) * weights[1];
  const float3 p02 = convert_float3(in[index_img(dims, max_x, min_y)].xyz) * weights[2];

  const float3 p10 = convert_float3(in[index_img(dims, min_x, id.y)].xyz) * weights[3];
  const float3 p11 = convert_float3(pixel.xyz)                            * weights[4];
  const float3 p12 = convert_float3(in[index_img(dims, max_x, id.y)].xyz) * weights[5];

  const float3 p20 = convert_float3(in[index_img(dims, min_x, max_y)].xyz) * weights[6];
  const float3 p21 = convert_float3(in[index_img(dims, id.x,  max_y)].xyz) * weights[7];
  const float3 p22 = convert_float3(in[index_img(dims, max_x, max_y)].xyz) * weights[8];

  out[index] =
      (uchar4)(convert_uchar3_sat(p00 + p01 + p02 + p10 + p11 + p12 + p20 + p21 + p22), pixel.w);
}

kernel void convolve5x5(global const uchar4* in, global const float* weights, global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x,  id.y);

  const uint x0 = max((int) id.x - 2, 0);
  const uint x1 = max((int) id.x - 1, 0);
  const uint x2 = min(id.x + 1, dims.x - 1);
  const uint x3 = min(id.x + 2, dims.x - 1);

  const uint y0 = max((int) id.y - 2, 0);
  const uint y1 = max((int) id.y - 1, 0);
  const uint y2 = min(id.y + 1, dims.y - 1);
  const uint y3 = min(id.y + 2, dims.y - 1);

  const uchar4 pixel = in[index];

  const float3 p00 = convert_float3(in[index_img(dims, x0,   y0)].xyz) * weights[0];
  const float3 p01 = convert_float3(in[index_img(dims, x1,   y0)].xyz) * weights[1];
  const float3 p02 = convert_float3(in[index_img(dims, id.x, y0)].xyz) * weights[2];
  const float3 p03 = convert_float3(in[index_img(dims, x2,   y0)].xyz) * weights[3];
  const float3 p04 = convert_float3(in[index_img(dims, x3,   y0)].xyz) * weights[4];

  const float3 p10 = convert_float3(in[index_img(dims, x0,   y1)].xyz) * weights[5];
  const float3 p11 = convert_float3(in[index_img(dims, x1,   y1)].xyz) * weights[6];
  const float3 p12 = convert_float3(in[index_img(dims, id.x, y1)].xyz) * weights[7];
  const float3 p13 = convert_float3(in[index_img(dims, x2,   y1)].xyz) * weights[8];
  const float3 p14 = convert_float3(in[index_img(dims, x3,   y1)].xyz) * weights[9];

  const float3 p20 = convert_float3(in[index_img(dims, x0,   id.y)].xyz) * weights[10];
  const float3 p21 = convert_float3(in[index_img(dims, x1,   id.y)].xyz) * weights[11];
  const float3 p22 = convert_float3(pixel.xyz)                           * weights[12];
  const float3 p23 = convert_float3(in[index_img(dims, x2,   id.y)].xyz) * weights[13];
  const float3 p24 = convert_float3(in[index_img(dims, x3,   id.y)].xyz) * weights[14];

  const float3 p30 = convert_float3(in[index_img(dims, x0,   y2)].xyz) * weights[15];
  const float3 p31 = convert_float3(in[index_img(dims, x1,   y2)].xyz) * weights[16];
  const float3 p32 = convert_float3(in[index_img(dims, id.x, y2)].xyz) * weights[17];
  const float3 p33 = convert_float3(in[index_img(dims, x2,   y2)].xyz) * weights[18];
  const float3 p34 = convert_float3(in[index_img(dims, x3,   y2)].xyz) * weights[19];

  const float3 p40 = convert_float3(in[index_img(dims, x0,   y3)].xyz) * weights[20];
  const float3 p41 = convert_float3(in[index_img(dims, x1,   y3)].xyz) * weights[21];
  const float3 p42 = convert_float3(in[index_img(dims, id.x, y3)].xyz) * weights[22];
  const float3 p43 = convert_float3(in[index_img(dims, x2,   y3)].xyz) * weights[23];
  const float3 p44 = convert_float3(in[index_img(dims, x3,   y3)].xyz) * weights[24];

  out[index] =
      (uchar4)(convert_uchar3_sat(p00 + p01 + p02 + p03 + p04 +
                                  p10 + p11 + p12 + p13 + p14 +
                                  p20 + p21 + p22 + p23 + p24 +
                                  p30 + p31 + p32 + p33 + p34 +
                                  p40 + p41 + p42 + p43 + p44), pixel.w);
}

kernel void bilateral(global const uchar4* in, const int radius, const float preservation,
                      global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x,  id.y);

  const uchar4 center_pixel = in[index];
  const float3 center = convert_float3(center_pixel.xyz) / 0xff;

  float3 sum = 0.0f;
  float total_weight = 0.0f;

  for (int rx = -radius; rx <= radius; ++rx) {
    for (int ry = -radius; ry <= radius; ++ry) {
      int x = clampi((int) id.x + rx, 0, (int) dims.x - 1);
      int y = clampi((int) id.y + ry, 0, (int) dims.y - 1);

      const float3 pixel = convert_float3(in[index_img(dims, x, y)].xyz) / 0xff;
      float3 diff = (center - pixel);
      diff *= diff;

      const float diff_map = exp(-(diff.x + diff.y + diff.z) * preservation * 100.0f);
      const float gaussian_weight = exp(-0.5f * ((rx * rx) + (ry * ry)) / (float) radius);

      const float weight = diff_map * gaussian_weight;
      sum += pixel * weight;
      total_weight += weight;
    }
  }

  out[index] = (uchar4)(convert_uchar3(0xff * (sum / total_weight)), center_pixel.w);
}

kernel void median(global const uchar4* in, const int radius, global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));

  int3 val[256];
  for (int i = 0; i < 256; i++)
    val[i].xyz = 0;

  for (int rx = -radius; rx <= radius; rx ++) {
    for (int ry = -radius; ry <= radius; ry ++) {
      int x = clampi((int) id.x + rx, 0, (int) dims.x - 1);
      int y = clampi((int) id.y + ry, 0, (int) dims.y - 1);

      const uchar3 pixel = in[index_img(dims, x, y)].xyz;
      val[pixel.x].xyz += 1;
    }
  }

  int median = ((radius * 2 + 1) * (radius * 2 + 1)) / 2;
  int3 rgb = 0;
  uchar4 out_pixel = 0xff;

  for (uchar i = 0; any(out_pixel.xyz == (uchar3)(0xff)); ++i) {
    if (out_pixel.x == 0xff){
      rgb.x += val[i].x;

      if (rgb.x >= median)
        out_pixel.x = i;
    }

    if (out_pixel.y == 0xff){
      rgb.y += val[i].y;

      if (rgb.y >= median)
        out_pixel.y = i;
    }

    if (out_pixel.z == 0xff){
      rgb.z += val[i].z;

      if (rgb.z >= median)
        out_pixel.z = i;
    }
  }

  out[index_img(dims, id.x, id.y)] = out_pixel;
}

kernel void contrast(global const uchar4* in, const float enhancement, global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x,  id.y);

  const uchar4 pixel = in[index];
  const float3 out_pixel = convert_float3(pixel.xyz);

  const float bright_m = exp2(enhancement);

  out[index] =
      (uchar4)(convert_uchar3_sat(out_pixel * bright_m + 127.0f * (1 - bright_m)), pixel.w);
}

kernel void fisheye(global const uchar4* in, const float2 center, const float scale,
                    global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));

  const float2 inv_dimensions = (float2)(1.0f / dims.x, 1.0f / dims.y);
  const float alpha = scale * 2.0f + 0.75f;
  float2 axis_scale = 1.0f;

  if (dims.x > dims.y)
    axis_scale.y = dims.y / (float) dims.x;
  else
    axis_scale.x = dims.x / (float) dims.y;

  const float bound2 = 0.25f * (axis_scale.x * axis_scale.x + axis_scale.y * axis_scale.y);
  const float bound = sqrt(bound2);
  const float radius = 1.15f * bound;
  const float radius2 = radius * radius;
  const float factor = bound / (M_PI_2_F - atan(alpha / bound * sqrt(radius2 - bound2)));

  const float2 coord = mad(convert_float2(id), inv_dimensions, -center);
  const float2 scaled_coord = axis_scale * coord;

  const float dist2 = scaled_coord.x * scaled_coord.x + scaled_coord.y * scaled_coord.y;
  const float inv_dist = rsqrt(dist2);

  const float radian = M_PI_2_F - atan((alpha * sqrt(radius2 - dist2)) * inv_dist);
  const float scalar = radian * factor * inv_dist;
  const float2 new_coord = convert_float2(dims) * mad(coord, scalar, center);

  out[index_img(dims, id.x, id.y)] = bilinear_interp(in, dims, new_coord);
}

kernel void levels(global const uchar4* in, global const float3* sat_matrix,
                   const float2 black_levels, const float2 white_levels, global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x, id.y);

  float4 pixel = convert_float4(in[index]);
  pixel.xyz = matrix3x3_vector_multiply(sat_matrix, pixel.xyz);
  pixel = clamp(pixel, 0.0f, 255.0f);
  pixel = (pixel - black_levels.x) / (white_levels.x - black_levels.x);
  pixel = pixel * (white_levels.y - black_levels.y) + black_levels.y;

  out[index] = convert_uchar4_sat(pixel);
}

kernel void posterize(global const uchar4* in, const float2 intensity, const uchar4 color,
                      global uchar4* out) {
  const uint2 id = (uint2)(get_global_id(0), get_global_id(1));
  const uint2 dims = (uint2)(get_global_size(0), get_global_size(1));
  const uint index = index_img(dims, id.x, id.y);

  const uchar4 pixel = in[index];
  const float pixel_intensity = dot(convert_float3(pixel.xyz) / 0xff, GS_WEIGHTS);

  if ((pixel_intensity <= intensity.y) && (pixel_intensity >= intensity.x))
    out[index] = color;
}
