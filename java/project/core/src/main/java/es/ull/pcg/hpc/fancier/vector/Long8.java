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

/*
 * DO NOT MANUALLY EDIT THIS FILE!
 * This file has been automatically generated, any modifications will be lost
 * when generating the Fancier library. Any modifications to this file must be
 * done via the corresponding template.
 */

package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Long8 {
  public long x;
  public long y;
  public long z;
  public long w;
  public long[] s = new long[4];

  public Long8() {}

  public Long8(long x, long y, long z, long w, long s0, long s1, long s2, long s3) {
    set(x, y, z, w, s0, s1, s2, s3);
  }

  public void set(long x, long y, long z, long w, long s0, long s1, long s2, long s3) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
    this.s[0] = s0;
    this.s[1] = s1;
    this.s[2] = s2;
    this.s[3] = s3;
  }

  public Long8(long v) {
    this(v, v, v, v, v, v, v, v);
  }

  public void set(long v) {
    set(v, v, v, v, v, v, v, v);
  }

  public Long8(long x, long y, long z, long w, long s0, long s1, Long2 vec1) {
    this(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public void set(long x, long y, long z, long w, long s0, long s1, Long2 vec1) {
    set(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public Long8(long x, long y, long z, long w, long s0, Long2 vec1, long s3) {
    this(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public void set(long x, long y, long z, long w, long s0, Long2 vec1, long s3) {
    set(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public Long8(long x, long y, long z, long w, long s0, Long3 vec1) {
    this(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public void set(long x, long y, long z, long w, long s0, Long3 vec1) {
    set(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public Long8(long x, long y, long z, long w, Long2 vec1, long s2, long s3) {
    this(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public void set(long x, long y, long z, long w, Long2 vec1, long s2, long s3) {
    set(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public Long8(long x, long y, long z, long w, Long2 vec1, Long2 vec2) {
    this(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public void set(long x, long y, long z, long w, Long2 vec1, Long2 vec2) {
    set(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Long8(long x, long y, long z, long w, Long3 vec1, long s3) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public void set(long x, long y, long z, long w, Long3 vec1, long s3) {
    set(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public Long8(long x, long y, long z, long w, Long4 vec1) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public void set(long x, long y, long z, long w, Long4 vec1) {
    set(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Long8(long x, long y, long z, Long2 vec1, long s1, long s2, long s3) {
    this(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public void set(long x, long y, long z, Long2 vec1, long s1, long s2, long s3) {
    set(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public Long8(long x, long y, long z, Long2 vec1, long s1, Long2 vec2) {
    this(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public void set(long x, long y, long z, Long2 vec1, long s1, Long2 vec2) {
    set(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public Long8(long x, long y, long z, Long2 vec1, Long2 vec2, long s3) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public void set(long x, long y, long z, Long2 vec1, Long2 vec2, long s3) {
    set(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public Long8(long x, long y, long z, Long2 vec1, Long3 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public void set(long x, long y, long z, Long2 vec1, Long3 vec2) {
    set(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public Long8(long x, long y, long z, Long3 vec1, long s2, long s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public void set(long x, long y, long z, Long3 vec1, long s2, long s3) {
    set(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public Long8(long x, long y, long z, Long3 vec1, Long2 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public void set(long x, long y, long z, Long3 vec1, Long2 vec2) {
    set(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public Long8(long x, long y, long z, Long4 vec1, long s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public void set(long x, long y, long z, Long4 vec1, long s3) {
    set(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public Long8(long x, long y, Long2 vec1, long s0, long s1, long s2, long s3) {
    this(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public void set(long x, long y, Long2 vec1, long s0, long s1, long s2, long s3) {
    set(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public Long8(long x, long y, Long2 vec1, long s0, long s1, Long2 vec2) {
    this(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public void set(long x, long y, Long2 vec1, long s0, long s1, Long2 vec2) {
    set(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public Long8(long x, long y, Long2 vec1, long s0, Long2 vec2, long s3) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public void set(long x, long y, Long2 vec1, long s0, Long2 vec2, long s3) {
    set(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public Long8(long x, long y, Long2 vec1, long s0, Long3 vec2) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(long x, long y, Long2 vec1, long s0, Long3 vec2) {
    set(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public Long8(long x, long y, Long2 vec1, Long2 vec2, long s2, long s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public void set(long x, long y, Long2 vec1, Long2 vec2, long s2, long s3) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public Long8(long x, long y, Long2 vec1, Long2 vec2, Long2 vec3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(long x, long y, Long2 vec1, Long2 vec2, Long2 vec3) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Long8(long x, long y, Long2 vec1, Long3 vec2, long s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(long x, long y, Long2 vec1, Long3 vec2, long s3) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public Long8(long x, long y, Long2 vec1, Long4 vec2) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(long x, long y, Long2 vec1, Long4 vec2) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Long8(long x, long y, Long3 vec1, long s1, long s2, long s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public void set(long x, long y, Long3 vec1, long s1, long s2, long s3) {
    set(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public Long8(long x, long y, Long3 vec1, long s1, Long2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public void set(long x, long y, Long3 vec1, long s1, Long2 vec2) {
    set(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public Long8(long x, long y, Long3 vec1, Long2 vec2, long s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public void set(long x, long y, Long3 vec1, Long2 vec2, long s3) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public Long8(long x, long y, Long3 vec1, Long3 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public void set(long x, long y, Long3 vec1, Long3 vec2) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public Long8(long x, long y, Long4 vec1, long s2, long s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public void set(long x, long y, Long4 vec1, long s2, long s3) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public Long8(long x, long y, Long4 vec1, Long2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public void set(long x, long y, Long4 vec1, Long2 vec2) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public Long8(long x, Long2 vec1, long w, long s0, long s1, long s2, long s3) {
    this(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public void set(long x, Long2 vec1, long w, long s0, long s1, long s2, long s3) {
    set(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public Long8(long x, Long2 vec1, long w, long s0, long s1, Long2 vec2) {
    this(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public void set(long x, Long2 vec1, long w, long s0, long s1, Long2 vec2) {
    set(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public Long8(long x, Long2 vec1, long w, long s0, Long2 vec2, long s3) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public void set(long x, Long2 vec1, long w, long s0, Long2 vec2, long s3) {
    set(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public Long8(long x, Long2 vec1, long w, long s0, Long3 vec2) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(long x, Long2 vec1, long w, long s0, Long3 vec2) {
    set(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Long8(long x, Long2 vec1, long w, Long2 vec2, long s2, long s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public void set(long x, Long2 vec1, long w, Long2 vec2, long s2, long s3) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public Long8(long x, Long2 vec1, long w, Long2 vec2, Long2 vec3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(long x, Long2 vec1, long w, Long2 vec2, Long2 vec3) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Long8(long x, Long2 vec1, long w, Long3 vec2, long s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(long x, Long2 vec1, long w, Long3 vec2, long s3) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Long8(long x, Long2 vec1, long w, Long4 vec2) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(long x, Long2 vec1, long w, Long4 vec2) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Long8(long x, Long2 vec1, Long2 vec2, long s1, long s2, long s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public void set(long x, Long2 vec1, Long2 vec2, long s1, long s2, long s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public Long8(long x, Long2 vec1, Long2 vec2, long s1, Long2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public void set(long x, Long2 vec1, Long2 vec2, long s1, Long2 vec3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Long8(long x, Long2 vec1, Long2 vec2, Long2 vec3, long s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public void set(long x, Long2 vec1, Long2 vec2, Long2 vec3, long s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Long8(long x, Long2 vec1, Long2 vec2, Long3 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public void set(long x, Long2 vec1, Long2 vec2, Long3 vec3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Long8(long x, Long2 vec1, Long3 vec2, long s2, long s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public void set(long x, Long2 vec1, Long3 vec2, long s2, long s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Long8(long x, Long2 vec1, Long3 vec2, Long2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public void set(long x, Long2 vec1, Long3 vec2, Long2 vec3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Long8(long x, Long2 vec1, Long4 vec2, long s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public void set(long x, Long2 vec1, Long4 vec2, long s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Long8(long x, Long3 vec1, long s0, long s1, long s2, long s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public void set(long x, Long3 vec1, long s0, long s1, long s2, long s3) {
    set(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public Long8(long x, Long3 vec1, long s0, long s1, Long2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public void set(long x, Long3 vec1, long s0, long s1, Long2 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public Long8(long x, Long3 vec1, long s0, Long2 vec2, long s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public void set(long x, Long3 vec1, long s0, Long2 vec2, long s3) {
    set(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public Long8(long x, Long3 vec1, long s0, Long3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(long x, Long3 vec1, long s0, Long3 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public Long8(long x, Long3 vec1, Long2 vec2, long s2, long s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public void set(long x, Long3 vec1, Long2 vec2, long s2, long s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public Long8(long x, Long3 vec1, Long2 vec2, Long2 vec3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(long x, Long3 vec1, Long2 vec2, Long2 vec3) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Long8(long x, Long3 vec1, Long3 vec2, long s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(long x, Long3 vec1, Long3 vec2, long s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public Long8(long x, Long3 vec1, Long4 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(long x, Long3 vec1, Long4 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Long8(long x, Long4 vec1, long s1, long s2, long s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public void set(long x, Long4 vec1, long s1, long s2, long s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public Long8(long x, Long4 vec1, long s1, Long2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public void set(long x, Long4 vec1, long s1, Long2 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public Long8(long x, Long4 vec1, Long2 vec2, long s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public void set(long x, Long4 vec1, Long2 vec2, long s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public Long8(long x, Long4 vec1, Long3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public void set(long x, Long4 vec1, Long3 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public Long8(Long2 vec1, long z, long w, long s0, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public void set(Long2 vec1, long z, long w, long s0, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public Long8(Long2 vec1, long z, long w, long s0, long s1, Long2 vec2) {
    this(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public void set(Long2 vec1, long z, long w, long s0, long s1, Long2 vec2) {
    set(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public Long8(Long2 vec1, long z, long w, long s0, Long2 vec2, long s3) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public void set(Long2 vec1, long z, long w, long s0, Long2 vec2, long s3) {
    set(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public Long8(Long2 vec1, long z, long w, long s0, Long3 vec2) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(Long2 vec1, long z, long w, long s0, Long3 vec2) {
    set(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Long8(Long2 vec1, long z, long w, Long2 vec2, long s2, long s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public void set(Long2 vec1, long z, long w, Long2 vec2, long s2, long s3) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public Long8(Long2 vec1, long z, long w, Long2 vec2, Long2 vec3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(Long2 vec1, long z, long w, Long2 vec2, Long2 vec3) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Long8(Long2 vec1, long z, long w, Long3 vec2, long s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(Long2 vec1, long z, long w, Long3 vec2, long s3) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Long8(Long2 vec1, long z, long w, Long4 vec2) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(Long2 vec1, long z, long w, Long4 vec2) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Long8(Long2 vec1, long z, Long2 vec2, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public void set(Long2 vec1, long z, Long2 vec2, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Long8(Long2 vec1, long z, Long2 vec2, long s1, Long2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public void set(Long2 vec1, long z, Long2 vec2, long s1, Long2 vec3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Long8(Long2 vec1, long z, Long2 vec2, Long2 vec3, long s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public void set(Long2 vec1, long z, Long2 vec2, Long2 vec3, long s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Long8(Long2 vec1, long z, Long2 vec2, Long3 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public void set(Long2 vec1, long z, Long2 vec2, Long3 vec3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Long8(Long2 vec1, long z, Long3 vec2, long s2, long s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public void set(Long2 vec1, long z, Long3 vec2, long s2, long s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Long8(Long2 vec1, long z, Long3 vec2, Long2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public void set(Long2 vec1, long z, Long3 vec2, Long2 vec3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Long8(Long2 vec1, long z, Long4 vec2, long s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public void set(Long2 vec1, long z, Long4 vec2, long s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Long8(Long2 vec1, Long2 vec2, long s0, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public void set(Long2 vec1, Long2 vec2, long s0, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public Long8(Long2 vec1, Long2 vec2, long s0, long s1, Long2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public void set(Long2 vec1, Long2 vec2, long s0, long s1, Long2 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public Long8(Long2 vec1, Long2 vec2, long s0, Long2 vec3, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public void set(Long2 vec1, Long2 vec2, long s0, Long2 vec3, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public Long8(Long2 vec1, Long2 vec2, long s0, Long3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public void set(Long2 vec1, Long2 vec2, long s0, Long3 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public Long8(Long2 vec1, Long2 vec2, Long2 vec3, long s2, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public void set(Long2 vec1, Long2 vec2, Long2 vec3, long s2, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public Long8(Long2 vec1, Long2 vec2, Long2 vec3, Long2 vec4) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public void set(Long2 vec1, Long2 vec2, Long2 vec3, Long2 vec4) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public Long8(Long2 vec1, Long2 vec2, Long3 vec3, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public void set(Long2 vec1, Long2 vec2, Long3 vec3, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public Long8(Long2 vec1, Long2 vec2, Long4 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public void set(Long2 vec1, Long2 vec2, Long4 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public Long8(Long2 vec1, Long3 vec2, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public void set(Long2 vec1, Long3 vec2, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public Long8(Long2 vec1, Long3 vec2, long s1, Long2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public void set(Long2 vec1, Long3 vec2, long s1, Long2 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public Long8(Long2 vec1, Long3 vec2, Long2 vec3, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public void set(Long2 vec1, Long3 vec2, Long2 vec3, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public Long8(Long2 vec1, Long3 vec2, Long3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public void set(Long2 vec1, Long3 vec2, Long3 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public Long8(Long2 vec1, Long4 vec2, long s2, long s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public void set(Long2 vec1, Long4 vec2, long s2, long s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public Long8(Long2 vec1, Long4 vec2, Long2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public void set(Long2 vec1, Long4 vec2, Long2 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public Long8(Long3 vec1, long w, long s0, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public void set(Long3 vec1, long w, long s0, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public Long8(Long3 vec1, long w, long s0, long s1, Long2 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public void set(Long3 vec1, long w, long s0, long s1, Long2 vec2) {
    set(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public Long8(Long3 vec1, long w, long s0, Long2 vec2, long s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public void set(Long3 vec1, long w, long s0, Long2 vec2, long s3) {
    set(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public Long8(Long3 vec1, long w, long s0, Long3 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(Long3 vec1, long w, long s0, Long3 vec2) {
    set(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Long8(Long3 vec1, long w, Long2 vec2, long s2, long s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public void set(Long3 vec1, long w, Long2 vec2, long s2, long s3) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public Long8(Long3 vec1, long w, Long2 vec2, Long2 vec3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(Long3 vec1, long w, Long2 vec2, Long2 vec3) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Long8(Long3 vec1, long w, Long3 vec2, long s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(Long3 vec1, long w, Long3 vec2, long s3) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Long8(Long3 vec1, long w, Long4 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(Long3 vec1, long w, Long4 vec2) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Long8(Long3 vec1, Long2 vec2, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public void set(Long3 vec1, Long2 vec2, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Long8(Long3 vec1, Long2 vec2, long s1, Long2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public void set(Long3 vec1, Long2 vec2, long s1, Long2 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Long8(Long3 vec1, Long2 vec2, Long2 vec3, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public void set(Long3 vec1, Long2 vec2, Long2 vec3, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Long8(Long3 vec1, Long2 vec2, Long3 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public void set(Long3 vec1, Long2 vec2, Long3 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Long8(Long3 vec1, Long3 vec2, long s2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public void set(Long3 vec1, Long3 vec2, long s2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Long8(Long3 vec1, Long3 vec2, Long2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public void set(Long3 vec1, Long3 vec2, Long2 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Long8(Long3 vec1, Long4 vec2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public void set(Long3 vec1, Long4 vec2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Long8(Long4 vec1, long s0, long s1, long s2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public void set(Long4 vec1, long s0, long s1, long s2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public Long8(Long4 vec1, long s0, long s1, Long2 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public void set(Long4 vec1, long s0, long s1, Long2 vec2) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public Long8(Long4 vec1, long s0, Long2 vec2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public void set(Long4 vec1, long s0, Long2 vec2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public Long8(Long4 vec1, long s0, Long3 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(Long4 vec1, long s0, Long3 vec2) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Long8(Long4 vec1, Long2 vec2, long s2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public void set(Long4 vec1, Long2 vec2, long s2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public Long8(Long4 vec1, Long2 vec2, Long2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(Long4 vec1, Long2 vec2, Long2 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Long8(Long4 vec1, Long3 vec2, long s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(Long4 vec1, Long3 vec2, long s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Long8(Long4 vec1, Long4 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(Long4 vec1, Long4 vec2) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Long8(Long8 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public void set(Long8 vec1) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public Long8 value() {
    return new Long8(this);
  }

  public Long4 lo() {
    return new Long4(x, y, z, w);
  }

  public void lo(Long4 result) {
    result.x = x;
    result.y = y;
    result.z = z;
    result.w = w;
  }

  public Long4 hi() {
    return new Long4(s[0], s[1], s[2], s[3]);
  }

  public void hi(Long4 result) {
    result.x = s[0];
    result.y = s[1];
    result.z = s[2];
    result.w = s[3];
  }

  public Long4 odd() {
    return new Long4(y, w, s[1], s[3]);
  }

  public void odd(Long4 result) {
    result.x = y;
    result.y = w;
    result.z = s[1];
    result.w = s[3];
  }

  public Long4 even() {
    return new Long4(x, z, s[0], s[2]);
  }

  public void even(Long4 result) {
    result.x = x;
    result.y = z;
    result.z = s[0];
    result.w = s[2];
  }

  public Byte8 convertByte8() {
    return new Byte8((byte)(x), (byte)(y), (byte)(z), (byte)(w), (byte)(s[0]), (byte)(s[1]), (byte)(s[2]), (byte)(s[3]));
  }

  public void convertByte8(Byte8 result) {
    result.x = (byte)(x);
    result.y = (byte)(y);
    result.z = (byte)(z);
    result.w = (byte)(w);
    result.s[0] = (byte)(s[0]);
    result.s[1] = (byte)(s[1]);
    result.s[2] = (byte)(s[2]);
    result.s[3] = (byte)(s[3]);
  }

  public Short8 convertShort8() {
    return new Short8((short)(x), (short)(y), (short)(z), (short)(w), (short)(s[0]), (short)(s[1]), (short)(s[2]), (short)(s[3]));
  }

  public void convertShort8(Short8 result) {
    result.x = (short)(x);
    result.y = (short)(y);
    result.z = (short)(z);
    result.w = (short)(w);
    result.s[0] = (short)(s[0]);
    result.s[1] = (short)(s[1]);
    result.s[2] = (short)(s[2]);
    result.s[3] = (short)(s[3]);
  }

  public Int8 convertInt8() {
    return new Int8((int)(x), (int)(y), (int)(z), (int)(w), (int)(s[0]), (int)(s[1]), (int)(s[2]), (int)(s[3]));
  }

  public void convertInt8(Int8 result) {
    result.x = (int)(x);
    result.y = (int)(y);
    result.z = (int)(z);
    result.w = (int)(w);
    result.s[0] = (int)(s[0]);
    result.s[1] = (int)(s[1]);
    result.s[2] = (int)(s[2]);
    result.s[3] = (int)(s[3]);
  }

  public Float8 convertFloat8() {
    return new Float8((float)(x), (float)(y), (float)(z), (float)(w), (float)(s[0]), (float)(s[1]), (float)(s[2]), (float)(s[3]));
  }

  public void convertFloat8(Float8 result) {
    result.x = (float)(x);
    result.y = (float)(y);
    result.z = (float)(z);
    result.w = (float)(w);
    result.s[0] = (float)(s[0]);
    result.s[1] = (float)(s[1]);
    result.s[2] = (float)(s[2]);
    result.s[3] = (float)(s[3]);
  }

  public Double8 convertDouble8() {
    return new Double8((double)(x), (double)(y), (double)(z), (double)(w), (double)(s[0]), (double)(s[1]), (double)(s[2]), (double)(s[3]));
  }

  public void convertDouble8(Double8 result) {
    result.x = (double)(x);
    result.y = (double)(y);
    result.z = (double)(z);
    result.w = (double)(w);
    result.s[0] = (double)(s[0]);
    result.s[1] = (double)(s[1]);
    result.s[2] = (double)(s[2]);
    result.s[3] = (double)(s[3]);
  }

  public Long2 asLong2() {
    return new Long2(x, y);
  }

  public void asLong2(Long2 result) {
    result.x = x;
    result.y = y;
  }

  public Long3 asLong3() {
    return new Long3(x, y, z);
  }

  public void asLong3(Long3 result) {
    result.x = x;
    result.y = y;
    result.z = z;
  }

  public Long4 asLong4() {
    return new Long4(x, y, z, w);
  }

  public void asLong4(Long4 result) {
    result.x = x;
    result.y = y;
    result.z = z;
    result.w = w;
  }

  public static Int8 isEqual(Long8 a, Long8 b) {
    return new Int8(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
  }

  public static void isEqual(Long8 a, Long8 b, Int8 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
    result.w = a.w == b.w? 1 : 0;
    result.s[0] = a.s[0] == b.s[0]? 1 : 0;
    result.s[1] = a.s[1] == b.s[1]? 1 : 0;
    result.s[2] = a.s[2] == b.s[2]? 1 : 0;
    result.s[3] = a.s[3] == b.s[3]? 1 : 0;
  }

  public static Int8 isNotEqual(Long8 a, Long8 b) {
    return new Int8(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
  }

  public static void isNotEqual(Long8 a, Long8 b, Int8 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
    result.w = a.w != b.w? 1 : 0;
    result.s[0] = a.s[0] != b.s[0]? 1 : 0;
    result.s[1] = a.s[1] != b.s[1]? 1 : 0;
    result.s[2] = a.s[2] != b.s[2]? 1 : 0;
    result.s[3] = a.s[3] != b.s[3]? 1 : 0;
  }

  public static Int8 isGreater(Long8 a, Long8 b) {
    return new Int8(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
  }

  public static void isGreater(Long8 a, Long8 b, Int8 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
    result.w = a.w > b.w? 1 : 0;
    result.s[0] = a.s[0] > b.s[0]? 1 : 0;
    result.s[1] = a.s[1] > b.s[1]? 1 : 0;
    result.s[2] = a.s[2] > b.s[2]? 1 : 0;
    result.s[3] = a.s[3] > b.s[3]? 1 : 0;
  }

  public static Int8 isGreaterEqual(Long8 a, Long8 b) {
    return new Int8(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
  }

  public static void isGreaterEqual(Long8 a, Long8 b, Int8 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
    result.w = a.w >= b.w? 1 : 0;
    result.s[0] = a.s[0] >= b.s[0]? 1 : 0;
    result.s[1] = a.s[1] >= b.s[1]? 1 : 0;
    result.s[2] = a.s[2] >= b.s[2]? 1 : 0;
    result.s[3] = a.s[3] >= b.s[3]? 1 : 0;
  }

  public static Int8 isLess(Long8 a, Long8 b) {
    return new Int8(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
  }

  public static void isLess(Long8 a, Long8 b, Int8 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
    result.w = a.w < b.w? 1 : 0;
    result.s[0] = a.s[0] < b.s[0]? 1 : 0;
    result.s[1] = a.s[1] < b.s[1]? 1 : 0;
    result.s[2] = a.s[2] < b.s[2]? 1 : 0;
    result.s[3] = a.s[3] < b.s[3]? 1 : 0;
  }

  public static Int8 isLessEqual(Long8 a, Long8 b) {
    return new Int8(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
  }

  public static void isLessEqual(Long8 a, Long8 b, Int8 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
    result.w = a.w <= b.w? 1 : 0;
    result.s[0] = a.s[0] <= b.s[0]? 1 : 0;
    result.s[1] = a.s[1] <= b.s[1]? 1 : 0;
    result.s[2] = a.s[2] <= b.s[2]? 1 : 0;
    result.s[3] = a.s[3] <= b.s[3]? 1 : 0;
  }

  public static Long8 select(Long8 a, Long8 b, Int8 c) {
    return new Long8(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w), Math.select(a.s[0], b.s[0], c.s[0]), Math.select(a.s[1], b.s[1], c.s[1]), Math.select(a.s[2], b.s[2], c.s[2]), Math.select(a.s[3], b.s[3], c.s[3]));
  }

  public static void select(Long8 a, Long8 b, Int8 c, Long8 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
    result.w = Math.select(a.w, b.w, c.w);
    result.s[0] = Math.select(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.select(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.select(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.select(a.s[3], b.s[3], c.s[3]);
  }

  public static int any(Long8 a) {
    return (a.x != 0L || a.y != 0L || a.z != 0L || a.w != 0L || a.s[0] != 0L || a.s[1] != 0L || a.s[2] != 0L || a.s[3] != 0L)? 1 : 0;
  }

  public static int all(Long8 a) {
    return (a.x == 0L || a.y == 0L || a.z == 0L || a.w == 0L || a.s[0] == 0L || a.s[1] == 0L || a.s[2] == 0L || a.s[3] == 0L)? 0 : 1;
  }

  public static Long8 neg(Long8 a) {
    return new Long8((long)(-a.x), (long)(-a.y), (long)(-a.z), (long)(-a.w), (long)(-a.s[0]), (long)(-a.s[1]), (long)(-a.s[2]), (long)(-a.s[3]));
  }

  public static void neg(Long8 a, Long8 result) {
    result.x = (long)(-a.x);
    result.y = (long)(-a.y);
    result.z = (long)(-a.z);
    result.w = (long)(-a.w);
    result.s[0] = (long)(-a.s[0]);
    result.s[1] = (long)(-a.s[1]);
    result.s[2] = (long)(-a.s[2]);
    result.s[3] = (long)(-a.s[3]);
  }

  public static Long8 add(Long8 a, Long8 b) {
    return new Long8((long)(a.x + b.x), (long)(a.y + b.y), (long)(a.z + b.z), (long)(a.w + b.w), (long)(a.s[0] + b.s[0]), (long)(a.s[1] + b.s[1]), (long)(a.s[2] + b.s[2]), (long)(a.s[3] + b.s[3]));
  }

  public static void add(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x + b.x);
    result.y = (long)(a.y + b.y);
    result.z = (long)(a.z + b.z);
    result.w = (long)(a.w + b.w);
    result.s[0] = (long)(a.s[0] + b.s[0]);
    result.s[1] = (long)(a.s[1] + b.s[1]);
    result.s[2] = (long)(a.s[2] + b.s[2]);
    result.s[3] = (long)(a.s[3] + b.s[3]);
  }

  public static Long8 sub(Long8 a, Long8 b) {
    return new Long8((long)(a.x - b.x), (long)(a.y - b.y), (long)(a.z - b.z), (long)(a.w - b.w), (long)(a.s[0] - b.s[0]), (long)(a.s[1] - b.s[1]), (long)(a.s[2] - b.s[2]), (long)(a.s[3] - b.s[3]));
  }

  public static void sub(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x - b.x);
    result.y = (long)(a.y - b.y);
    result.z = (long)(a.z - b.z);
    result.w = (long)(a.w - b.w);
    result.s[0] = (long)(a.s[0] - b.s[0]);
    result.s[1] = (long)(a.s[1] - b.s[1]);
    result.s[2] = (long)(a.s[2] - b.s[2]);
    result.s[3] = (long)(a.s[3] - b.s[3]);
  }

  public static Double8 mul(Long8 a, Double8 b) {
    return new Double8((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w), (double)(a.s[0] * b.s[0]), (double)(a.s[1] * b.s[1]), (double)(a.s[2] * b.s[2]), (double)(a.s[3] * b.s[3]));
  }

  public static void mul(Long8 a, Double8 b, Double8 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
    result.w = (double)(a.w * b.w);
    result.s[0] = (double)(a.s[0] * b.s[0]);
    result.s[1] = (double)(a.s[1] * b.s[1]);
    result.s[2] = (double)(a.s[2] * b.s[2]);
    result.s[3] = (double)(a.s[3] * b.s[3]);
  }

  public static Double8 mul(Long8 a, double k) {
    return new Double8((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k), (double)(a.s[0] * k), (double)(a.s[1] * k), (double)(a.s[2] * k), (double)(a.s[3] * k));
  }

  public static void mul(Long8 a, double k, Double8 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
    result.w = (double)(a.w * k);
    result.s[0] = (double)(a.s[0] * k);
    result.s[1] = (double)(a.s[1] * k);
    result.s[2] = (double)(a.s[2] * k);
    result.s[3] = (double)(a.s[3] * k);
  }

  public static Float8 mul(Long8 a, Float8 b) {
    return new Float8((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w), (float)(a.s[0] * b.s[0]), (float)(a.s[1] * b.s[1]), (float)(a.s[2] * b.s[2]), (float)(a.s[3] * b.s[3]));
  }

  public static void mul(Long8 a, Float8 b, Float8 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
    result.w = (float)(a.w * b.w);
    result.s[0] = (float)(a.s[0] * b.s[0]);
    result.s[1] = (float)(a.s[1] * b.s[1]);
    result.s[2] = (float)(a.s[2] * b.s[2]);
    result.s[3] = (float)(a.s[3] * b.s[3]);
  }

  public static Float8 mul(Long8 a, float k) {
    return new Float8((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k), (float)(a.s[0] * k), (float)(a.s[1] * k), (float)(a.s[2] * k), (float)(a.s[3] * k));
  }

  public static void mul(Long8 a, float k, Float8 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
    result.w = (float)(a.w * k);
    result.s[0] = (float)(a.s[0] * k);
    result.s[1] = (float)(a.s[1] * k);
    result.s[2] = (float)(a.s[2] * k);
    result.s[3] = (float)(a.s[3] * k);
  }

  public static Long8 mul(Long8 a, Long8 b) {
    return new Long8((long)(a.x * b.x), (long)(a.y * b.y), (long)(a.z * b.z), (long)(a.w * b.w), (long)(a.s[0] * b.s[0]), (long)(a.s[1] * b.s[1]), (long)(a.s[2] * b.s[2]), (long)(a.s[3] * b.s[3]));
  }

  public static void mul(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x * b.x);
    result.y = (long)(a.y * b.y);
    result.z = (long)(a.z * b.z);
    result.w = (long)(a.w * b.w);
    result.s[0] = (long)(a.s[0] * b.s[0]);
    result.s[1] = (long)(a.s[1] * b.s[1]);
    result.s[2] = (long)(a.s[2] * b.s[2]);
    result.s[3] = (long)(a.s[3] * b.s[3]);
  }

  public static Long8 mul(Long8 a, long k) {
    return new Long8((long)(a.x * k), (long)(a.y * k), (long)(a.z * k), (long)(a.w * k), (long)(a.s[0] * k), (long)(a.s[1] * k), (long)(a.s[2] * k), (long)(a.s[3] * k));
  }

  public static void mul(Long8 a, long k, Long8 result) {
    result.x = (long)(a.x * k);
    result.y = (long)(a.y * k);
    result.z = (long)(a.z * k);
    result.w = (long)(a.w * k);
    result.s[0] = (long)(a.s[0] * k);
    result.s[1] = (long)(a.s[1] * k);
    result.s[2] = (long)(a.s[2] * k);
    result.s[3] = (long)(a.s[3] * k);
  }

  public static Double8 div(Long8 a, Double8 b) {
    return new Double8((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w), (double)(a.s[0] / b.s[0]), (double)(a.s[1] / b.s[1]), (double)(a.s[2] / b.s[2]), (double)(a.s[3] / b.s[3]));
  }

  public static void div(Long8 a, Double8 b, Double8 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
    result.w = (double)(a.w / b.w);
    result.s[0] = (double)(a.s[0] / b.s[0]);
    result.s[1] = (double)(a.s[1] / b.s[1]);
    result.s[2] = (double)(a.s[2] / b.s[2]);
    result.s[3] = (double)(a.s[3] / b.s[3]);
  }

  public static Double8 div(Long8 a, double k) {
    return new Double8((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k), (double)(a.s[0] / k), (double)(a.s[1] / k), (double)(a.s[2] / k), (double)(a.s[3] / k));
  }

  public static void div(Long8 a, double k, Double8 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
    result.w = (double)(a.w / k);
    result.s[0] = (double)(a.s[0] / k);
    result.s[1] = (double)(a.s[1] / k);
    result.s[2] = (double)(a.s[2] / k);
    result.s[3] = (double)(a.s[3] / k);
  }

  public static Float8 div(Long8 a, Float8 b) {
    return new Float8((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w), (float)(a.s[0] / b.s[0]), (float)(a.s[1] / b.s[1]), (float)(a.s[2] / b.s[2]), (float)(a.s[3] / b.s[3]));
  }

  public static void div(Long8 a, Float8 b, Float8 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
    result.w = (float)(a.w / b.w);
    result.s[0] = (float)(a.s[0] / b.s[0]);
    result.s[1] = (float)(a.s[1] / b.s[1]);
    result.s[2] = (float)(a.s[2] / b.s[2]);
    result.s[3] = (float)(a.s[3] / b.s[3]);
  }

  public static Float8 div(Long8 a, float k) {
    return new Float8((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k), (float)(a.s[0] / k), (float)(a.s[1] / k), (float)(a.s[2] / k), (float)(a.s[3] / k));
  }

  public static void div(Long8 a, float k, Float8 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
    result.w = (float)(a.w / k);
    result.s[0] = (float)(a.s[0] / k);
    result.s[1] = (float)(a.s[1] / k);
    result.s[2] = (float)(a.s[2] / k);
    result.s[3] = (float)(a.s[3] / k);
  }

  public static Long8 div(Long8 a, Long8 b) {
    return new Long8((long)(a.x / b.x), (long)(a.y / b.y), (long)(a.z / b.z), (long)(a.w / b.w), (long)(a.s[0] / b.s[0]), (long)(a.s[1] / b.s[1]), (long)(a.s[2] / b.s[2]), (long)(a.s[3] / b.s[3]));
  }

  public static void div(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x / b.x);
    result.y = (long)(a.y / b.y);
    result.z = (long)(a.z / b.z);
    result.w = (long)(a.w / b.w);
    result.s[0] = (long)(a.s[0] / b.s[0]);
    result.s[1] = (long)(a.s[1] / b.s[1]);
    result.s[2] = (long)(a.s[2] / b.s[2]);
    result.s[3] = (long)(a.s[3] / b.s[3]);
  }

  public static Long8 div(Long8 a, long k) {
    return new Long8((long)(a.x / k), (long)(a.y / k), (long)(a.z / k), (long)(a.w / k), (long)(a.s[0] / k), (long)(a.s[1] / k), (long)(a.s[2] / k), (long)(a.s[3] / k));
  }

  public static void div(Long8 a, long k, Long8 result) {
    result.x = (long)(a.x / k);
    result.y = (long)(a.y / k);
    result.z = (long)(a.z / k);
    result.w = (long)(a.w / k);
    result.s[0] = (long)(a.s[0] / k);
    result.s[1] = (long)(a.s[1] / k);
    result.s[2] = (long)(a.s[2] / k);
    result.s[3] = (long)(a.s[3] / k);
  }

  public static Long8 mod(Long8 a, Long8 b) {
    return new Long8((long)(a.x % b.x), (long)(a.y % b.y), (long)(a.z % b.z), (long)(a.w % b.w), (long)(a.s[0] % b.s[0]), (long)(a.s[1] % b.s[1]), (long)(a.s[2] % b.s[2]), (long)(a.s[3] % b.s[3]));
  }

  public static void mod(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x % b.x);
    result.y = (long)(a.y % b.y);
    result.z = (long)(a.z % b.z);
    result.w = (long)(a.w % b.w);
    result.s[0] = (long)(a.s[0] % b.s[0]);
    result.s[1] = (long)(a.s[1] % b.s[1]);
    result.s[2] = (long)(a.s[2] % b.s[2]);
    result.s[3] = (long)(a.s[3] % b.s[3]);
  }

  public static Long8 mod(Long8 a, long k) {
    return new Long8((long)(a.x % k), (long)(a.y % k), (long)(a.z % k), (long)(a.w % k), (long)(a.s[0] % k), (long)(a.s[1] % k), (long)(a.s[2] % k), (long)(a.s[3] % k));
  }

  public static void mod(Long8 a, long k, Long8 result) {
    result.x = (long)(a.x % k);
    result.y = (long)(a.y % k);
    result.z = (long)(a.z % k);
    result.w = (long)(a.w % k);
    result.s[0] = (long)(a.s[0] % k);
    result.s[1] = (long)(a.s[1] % k);
    result.s[2] = (long)(a.s[2] % k);
    result.s[3] = (long)(a.s[3] % k);
  }

  public static Long8 bitAnd(Long8 a, Long8 b) {
    return new Long8((long)(a.x & b.x), (long)(a.y & b.y), (long)(a.z & b.z), (long)(a.w & b.w), (long)(a.s[0] & b.s[0]), (long)(a.s[1] & b.s[1]), (long)(a.s[2] & b.s[2]), (long)(a.s[3] & b.s[3]));
  }

  public static void bitAnd(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x & b.x);
    result.y = (long)(a.y & b.y);
    result.z = (long)(a.z & b.z);
    result.w = (long)(a.w & b.w);
    result.s[0] = (long)(a.s[0] & b.s[0]);
    result.s[1] = (long)(a.s[1] & b.s[1]);
    result.s[2] = (long)(a.s[2] & b.s[2]);
    result.s[3] = (long)(a.s[3] & b.s[3]);
  }

  public static Long8 bitOr(Long8 a, Long8 b) {
    return new Long8((long)(a.x | b.x), (long)(a.y | b.y), (long)(a.z | b.z), (long)(a.w | b.w), (long)(a.s[0] | b.s[0]), (long)(a.s[1] | b.s[1]), (long)(a.s[2] | b.s[2]), (long)(a.s[3] | b.s[3]));
  }

  public static void bitOr(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x | b.x);
    result.y = (long)(a.y | b.y);
    result.z = (long)(a.z | b.z);
    result.w = (long)(a.w | b.w);
    result.s[0] = (long)(a.s[0] | b.s[0]);
    result.s[1] = (long)(a.s[1] | b.s[1]);
    result.s[2] = (long)(a.s[2] | b.s[2]);
    result.s[3] = (long)(a.s[3] | b.s[3]);
  }

  public static Long8 bitXor(Long8 a, Long8 b) {
    return new Long8((long)(a.x ^ b.x), (long)(a.y ^ b.y), (long)(a.z ^ b.z), (long)(a.w ^ b.w), (long)(a.s[0] ^ b.s[0]), (long)(a.s[1] ^ b.s[1]), (long)(a.s[2] ^ b.s[2]), (long)(a.s[3] ^ b.s[3]));
  }

  public static void bitXor(Long8 a, Long8 b, Long8 result) {
    result.x = (long)(a.x ^ b.x);
    result.y = (long)(a.y ^ b.y);
    result.z = (long)(a.z ^ b.z);
    result.w = (long)(a.w ^ b.w);
    result.s[0] = (long)(a.s[0] ^ b.s[0]);
    result.s[1] = (long)(a.s[1] ^ b.s[1]);
    result.s[2] = (long)(a.s[2] ^ b.s[2]);
    result.s[3] = (long)(a.s[3] ^ b.s[3]);
  }

  public static Long8 bitNot(Long8 a) {
    return new Long8((long)(~a.x), (long)(~a.y), (long)(~a.z), (long)(~a.w), (long)(~a.s[0]), (long)(~a.s[1]), (long)(~a.s[2]), (long)(~a.s[3]));
  }

  public static void bitNot(Long8 a, Long8 result) {
    result.x = (long)(~a.x);
    result.y = (long)(~a.y);
    result.z = (long)(~a.z);
    result.w = (long)(~a.w);
    result.s[0] = (long)(~a.s[0]);
    result.s[1] = (long)(~a.s[1]);
    result.s[2] = (long)(~a.s[2]);
    result.s[3] = (long)(~a.s[3]);
  }

  public static Long8 abs(Long8 a) {
    return new Long8(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w), Math.abs(a.s[0]), Math.abs(a.s[1]), Math.abs(a.s[2]), Math.abs(a.s[3]));
  }

  public static void abs(Long8 a, Long8 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
    result.w = Math.abs(a.w);
    result.s[0] = Math.abs(a.s[0]);
    result.s[1] = Math.abs(a.s[1]);
    result.s[2] = Math.abs(a.s[2]);
    result.s[3] = Math.abs(a.s[3]);
  }

  public static Long8 clamp(Long8 a, Long8 b, Long8 c) {
    return new Long8(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w), Math.clamp(a.s[0], b.s[0], c.s[0]), Math.clamp(a.s[1], b.s[1], c.s[1]), Math.clamp(a.s[2], b.s[2], c.s[2]), Math.clamp(a.s[3], b.s[3], c.s[3]));
  }

  public static void clamp(Long8 a, Long8 b, Long8 c, Long8 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
    result.w = Math.clamp(a.w, b.w, c.w);
    result.s[0] = Math.clamp(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.clamp(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.clamp(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.clamp(a.s[3], b.s[3], c.s[3]);
  }

  public static Long8 max(Long8 a, Long8 b) {
    return new Long8(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w), Math.max(a.s[0], b.s[0]), Math.max(a.s[1], b.s[1]), Math.max(a.s[2], b.s[2]), Math.max(a.s[3], b.s[3]));
  }

  public static void max(Long8 a, Long8 b, Long8 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
    result.w = Math.max(a.w, b.w);
    result.s[0] = Math.max(a.s[0], b.s[0]);
    result.s[1] = Math.max(a.s[1], b.s[1]);
    result.s[2] = Math.max(a.s[2], b.s[2]);
    result.s[3] = Math.max(a.s[3], b.s[3]);
  }

  public static Long8 maxMag(Long8 a, Long8 b) {
    return new Long8(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w), Math.maxMag(a.s[0], b.s[0]), Math.maxMag(a.s[1], b.s[1]), Math.maxMag(a.s[2], b.s[2]), Math.maxMag(a.s[3], b.s[3]));
  }

  public static void maxMag(Long8 a, Long8 b, Long8 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
    result.w = Math.maxMag(a.w, b.w);
    result.s[0] = Math.maxMag(a.s[0], b.s[0]);
    result.s[1] = Math.maxMag(a.s[1], b.s[1]);
    result.s[2] = Math.maxMag(a.s[2], b.s[2]);
    result.s[3] = Math.maxMag(a.s[3], b.s[3]);
  }

  public static Long8 min(Long8 a, Long8 b) {
    return new Long8(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w), Math.min(a.s[0], b.s[0]), Math.min(a.s[1], b.s[1]), Math.min(a.s[2], b.s[2]), Math.min(a.s[3], b.s[3]));
  }

  public static void min(Long8 a, Long8 b, Long8 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
    result.w = Math.min(a.w, b.w);
    result.s[0] = Math.min(a.s[0], b.s[0]);
    result.s[1] = Math.min(a.s[1], b.s[1]);
    result.s[2] = Math.min(a.s[2], b.s[2]);
    result.s[3] = Math.min(a.s[3], b.s[3]);
  }

  public static Long8 minMag(Long8 a, Long8 b) {
    return new Long8(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w), Math.minMag(a.s[0], b.s[0]), Math.minMag(a.s[1], b.s[1]), Math.minMag(a.s[2], b.s[2]), Math.minMag(a.s[3], b.s[3]));
  }

  public static void minMag(Long8 a, Long8 b, Long8 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
    result.w = Math.minMag(a.w, b.w);
    result.s[0] = Math.minMag(a.s[0], b.s[0]);
    result.s[1] = Math.minMag(a.s[1], b.s[1]);
    result.s[2] = Math.minMag(a.s[2], b.s[2]);
    result.s[3] = Math.minMag(a.s[3], b.s[3]);
  }

  public static Long8 mix(Long8 a, Long8 b, Long8 c) {
    return new Long8(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w), Math.mix(a.s[0], b.s[0], c.s[0]), Math.mix(a.s[1], b.s[1], c.s[1]), Math.mix(a.s[2], b.s[2], c.s[2]), Math.mix(a.s[3], b.s[3], c.s[3]));
  }

  public static void mix(Long8 a, Long8 b, Long8 c, Long8 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
    result.w = Math.mix(a.w, b.w, c.w);
    result.s[0] = Math.mix(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.mix(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.mix(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.mix(a.s[3], b.s[3], c.s[3]);
  }

  public static Long8 clamp(Long8 v, long min, long max) {
    return new Long8(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max), Math.clamp(v.s[0], min, max), Math.clamp(v.s[1], min, max), Math.clamp(v.s[2], min, max), Math.clamp(v.s[3], min, max));
  }

  public static void clamp(Long8 v, long min, long max, Long8 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
    result.w = Math.clamp(v.w, min, max);
    result.s[0] = Math.clamp(v.s[0], min, max);
    result.s[1] = Math.clamp(v.s[1], min, max);
    result.s[2] = Math.clamp(v.s[2], min, max);
    result.s[3] = Math.clamp(v.s[3], min, max);
  }

  public static Long8 max(Long8 x, long y) {
    return new Long8(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y), Math.max(x.s[0], y), Math.max(x.s[1], y), Math.max(x.s[2], y), Math.max(x.s[3], y));
  }

  public static void max(Long8 x, long y, Long8 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
    result.w = Math.max(x.w, y);
    result.s[0] = Math.max(x.s[0], y);
    result.s[1] = Math.max(x.s[1], y);
    result.s[2] = Math.max(x.s[2], y);
    result.s[3] = Math.max(x.s[3], y);
  }

  public static Long8 min(Long8 x, long y) {
    return new Long8(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y), Math.min(x.s[0], y), Math.min(x.s[1], y), Math.min(x.s[2], y), Math.min(x.s[3], y));
  }

  public static void min(Long8 x, long y, Long8 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
    result.w = Math.min(x.w, y);
    result.s[0] = Math.min(x.s[0], y);
    result.s[1] = Math.min(x.s[1], y);
    result.s[2] = Math.min(x.s[2], y);
    result.s[3] = Math.min(x.s[3], y);
  }

  public static Long8 mix(Long8 x, Long8 y, long a) {
    return new Long8(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a), Math.mix(x.s[0], y.s[0], a), Math.mix(x.s[1], y.s[1], a), Math.mix(x.s[2], y.s[2], a), Math.mix(x.s[3], y.s[3], a));
  }

  public static void mix(Long8 x, Long8 y, long a, Long8 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
    result.w = Math.mix(x.w, y.w, a);
    result.s[0] = Math.mix(x.s[0], y.s[0], a);
    result.s[1] = Math.mix(x.s[1], y.s[1], a);
    result.s[2] = Math.mix(x.s[2], y.s[2], a);
    result.s[3] = Math.mix(x.s[3], y.s[3], a);
  }

  public static Long8 absDiff(Long8 a, Long8 b) {
    return new Long8(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w), Math.absDiff(a.s[0], b.s[0]), Math.absDiff(a.s[1], b.s[1]), Math.absDiff(a.s[2], b.s[2]), Math.absDiff(a.s[3], b.s[3]));
  }

  public static void absDiff(Long8 a, Long8 b, Long8 result) {
    result.x = Math.absDiff(a.x, b.x);
    result.y = Math.absDiff(a.y, b.y);
    result.z = Math.absDiff(a.z, b.z);
    result.w = Math.absDiff(a.w, b.w);
    result.s[0] = Math.absDiff(a.s[0], b.s[0]);
    result.s[1] = Math.absDiff(a.s[1], b.s[1]);
    result.s[2] = Math.absDiff(a.s[2], b.s[2]);
    result.s[3] = Math.absDiff(a.s[3], b.s[3]);
  }

  public static Long8 addSat(Long8 a, Long8 b) {
    return new Long8(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w), Math.addSat(a.s[0], b.s[0]), Math.addSat(a.s[1], b.s[1]), Math.addSat(a.s[2], b.s[2]), Math.addSat(a.s[3], b.s[3]));
  }

  public static void addSat(Long8 a, Long8 b, Long8 result) {
    result.x = Math.addSat(a.x, b.x);
    result.y = Math.addSat(a.y, b.y);
    result.z = Math.addSat(a.z, b.z);
    result.w = Math.addSat(a.w, b.w);
    result.s[0] = Math.addSat(a.s[0], b.s[0]);
    result.s[1] = Math.addSat(a.s[1], b.s[1]);
    result.s[2] = Math.addSat(a.s[2], b.s[2]);
    result.s[3] = Math.addSat(a.s[3], b.s[3]);
  }

  public static Long8 clz(Long8 a) {
    return new Long8(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w), Math.clz(a.s[0]), Math.clz(a.s[1]), Math.clz(a.s[2]), Math.clz(a.s[3]));
  }

  public static void clz(Long8 a, Long8 result) {
    result.x = Math.clz(a.x);
    result.y = Math.clz(a.y);
    result.z = Math.clz(a.z);
    result.w = Math.clz(a.w);
    result.s[0] = Math.clz(a.s[0]);
    result.s[1] = Math.clz(a.s[1]);
    result.s[2] = Math.clz(a.s[2]);
    result.s[3] = Math.clz(a.s[3]);
  }

  public static Long8 hadd(Long8 a, Long8 b) {
    return new Long8(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w), Math.hadd(a.s[0], b.s[0]), Math.hadd(a.s[1], b.s[1]), Math.hadd(a.s[2], b.s[2]), Math.hadd(a.s[3], b.s[3]));
  }

  public static void hadd(Long8 a, Long8 b, Long8 result) {
    result.x = Math.hadd(a.x, b.x);
    result.y = Math.hadd(a.y, b.y);
    result.z = Math.hadd(a.z, b.z);
    result.w = Math.hadd(a.w, b.w);
    result.s[0] = Math.hadd(a.s[0], b.s[0]);
    result.s[1] = Math.hadd(a.s[1], b.s[1]);
    result.s[2] = Math.hadd(a.s[2], b.s[2]);
    result.s[3] = Math.hadd(a.s[3], b.s[3]);
  }

  public static Long8 madHi(Long8 a, Long8 b, Long8 c) {
    return new Long8(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w), Math.madHi(a.s[0], b.s[0], c.s[0]), Math.madHi(a.s[1], b.s[1], c.s[1]), Math.madHi(a.s[2], b.s[2], c.s[2]), Math.madHi(a.s[3], b.s[3], c.s[3]));
  }

  public static void madHi(Long8 a, Long8 b, Long8 c, Long8 result) {
    result.x = Math.madHi(a.x, b.x, c.x);
    result.y = Math.madHi(a.y, b.y, c.y);
    result.z = Math.madHi(a.z, b.z, c.z);
    result.w = Math.madHi(a.w, b.w, c.w);
    result.s[0] = Math.madHi(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.madHi(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.madHi(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.madHi(a.s[3], b.s[3], c.s[3]);
  }

  public static Long8 madSat(Long8 a, Long8 b, Long8 c) {
    return new Long8(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w), Math.madSat(a.s[0], b.s[0], c.s[0]), Math.madSat(a.s[1], b.s[1], c.s[1]), Math.madSat(a.s[2], b.s[2], c.s[2]), Math.madSat(a.s[3], b.s[3], c.s[3]));
  }

  public static void madSat(Long8 a, Long8 b, Long8 c, Long8 result) {
    result.x = Math.madSat(a.x, b.x, c.x);
    result.y = Math.madSat(a.y, b.y, c.y);
    result.z = Math.madSat(a.z, b.z, c.z);
    result.w = Math.madSat(a.w, b.w, c.w);
    result.s[0] = Math.madSat(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.madSat(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.madSat(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.madSat(a.s[3], b.s[3], c.s[3]);
  }

  public static Long8 mulHi(Long8 a, Long8 b) {
    return new Long8(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w), Math.mulHi(a.s[0], b.s[0]), Math.mulHi(a.s[1], b.s[1]), Math.mulHi(a.s[2], b.s[2]), Math.mulHi(a.s[3], b.s[3]));
  }

  public static void mulHi(Long8 a, Long8 b, Long8 result) {
    result.x = Math.mulHi(a.x, b.x);
    result.y = Math.mulHi(a.y, b.y);
    result.z = Math.mulHi(a.z, b.z);
    result.w = Math.mulHi(a.w, b.w);
    result.s[0] = Math.mulHi(a.s[0], b.s[0]);
    result.s[1] = Math.mulHi(a.s[1], b.s[1]);
    result.s[2] = Math.mulHi(a.s[2], b.s[2]);
    result.s[3] = Math.mulHi(a.s[3], b.s[3]);
  }

  public static Long8 rhadd(Long8 a, Long8 b) {
    return new Long8(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w), Math.rhadd(a.s[0], b.s[0]), Math.rhadd(a.s[1], b.s[1]), Math.rhadd(a.s[2], b.s[2]), Math.rhadd(a.s[3], b.s[3]));
  }

  public static void rhadd(Long8 a, Long8 b, Long8 result) {
    result.x = Math.rhadd(a.x, b.x);
    result.y = Math.rhadd(a.y, b.y);
    result.z = Math.rhadd(a.z, b.z);
    result.w = Math.rhadd(a.w, b.w);
    result.s[0] = Math.rhadd(a.s[0], b.s[0]);
    result.s[1] = Math.rhadd(a.s[1], b.s[1]);
    result.s[2] = Math.rhadd(a.s[2], b.s[2]);
    result.s[3] = Math.rhadd(a.s[3], b.s[3]);
  }

  public static Long8 rotate(Long8 a, Long8 b) {
    return new Long8(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w), Math.rotate(a.s[0], b.s[0]), Math.rotate(a.s[1], b.s[1]), Math.rotate(a.s[2], b.s[2]), Math.rotate(a.s[3], b.s[3]));
  }

  public static void rotate(Long8 a, Long8 b, Long8 result) {
    result.x = Math.rotate(a.x, b.x);
    result.y = Math.rotate(a.y, b.y);
    result.z = Math.rotate(a.z, b.z);
    result.w = Math.rotate(a.w, b.w);
    result.s[0] = Math.rotate(a.s[0], b.s[0]);
    result.s[1] = Math.rotate(a.s[1], b.s[1]);
    result.s[2] = Math.rotate(a.s[2], b.s[2]);
    result.s[3] = Math.rotate(a.s[3], b.s[3]);
  }

  public static Long8 subSat(Long8 a, Long8 b) {
    return new Long8(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w), Math.subSat(a.s[0], b.s[0]), Math.subSat(a.s[1], b.s[1]), Math.subSat(a.s[2], b.s[2]), Math.subSat(a.s[3], b.s[3]));
  }

  public static void subSat(Long8 a, Long8 b, Long8 result) {
    result.x = Math.subSat(a.x, b.x);
    result.y = Math.subSat(a.y, b.y);
    result.z = Math.subSat(a.z, b.z);
    result.w = Math.subSat(a.w, b.w);
    result.s[0] = Math.subSat(a.s[0], b.s[0]);
    result.s[1] = Math.subSat(a.s[1], b.s[1]);
    result.s[2] = Math.subSat(a.s[2], b.s[2]);
    result.s[3] = Math.subSat(a.s[3], b.s[3]);
  }
}
