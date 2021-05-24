package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Float8 {
  public float x;
  public float y;
  public float z;
  public float w;
  public float[] s = new float[4];

  public Float8() {}

  public Float8(float x, float y, float z, float w, float s0, float s1, float s2, float s3) {
    set(x, y, z, w, s0, s1, s2, s3);
  }

  public void set(float x, float y, float z, float w, float s0, float s1, float s2, float s3) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
    this.s[0] = s0;
    this.s[1] = s1;
    this.s[2] = s2;
    this.s[3] = s3;
  }

  public Float8(float v) {
    this(v, v, v, v, v, v, v, v);
  }

  public void set(float v) {
    set(v, v, v, v, v, v, v, v);
  }

  public Float8(float x, float y, float z, float w, float s0, float s1, Float2 vec1) {
    this(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public void set(float x, float y, float z, float w, float s0, float s1, Float2 vec1) {
    set(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public Float8(float x, float y, float z, float w, float s0, Float2 vec1, float s3) {
    this(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public void set(float x, float y, float z, float w, float s0, Float2 vec1, float s3) {
    set(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public Float8(float x, float y, float z, float w, float s0, Float3 vec1) {
    this(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public void set(float x, float y, float z, float w, float s0, Float3 vec1) {
    set(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public Float8(float x, float y, float z, float w, Float2 vec1, float s2, float s3) {
    this(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public void set(float x, float y, float z, float w, Float2 vec1, float s2, float s3) {
    set(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public Float8(float x, float y, float z, float w, Float2 vec1, Float2 vec2) {
    this(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public void set(float x, float y, float z, float w, Float2 vec1, Float2 vec2) {
    set(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Float8(float x, float y, float z, float w, Float3 vec1, float s3) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public void set(float x, float y, float z, float w, Float3 vec1, float s3) {
    set(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public Float8(float x, float y, float z, float w, Float4 vec1) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public void set(float x, float y, float z, float w, Float4 vec1) {
    set(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Float8(float x, float y, float z, Float2 vec1, float s1, float s2, float s3) {
    this(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public void set(float x, float y, float z, Float2 vec1, float s1, float s2, float s3) {
    set(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public Float8(float x, float y, float z, Float2 vec1, float s1, Float2 vec2) {
    this(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public void set(float x, float y, float z, Float2 vec1, float s1, Float2 vec2) {
    set(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public Float8(float x, float y, float z, Float2 vec1, Float2 vec2, float s3) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public void set(float x, float y, float z, Float2 vec1, Float2 vec2, float s3) {
    set(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public Float8(float x, float y, float z, Float2 vec1, Float3 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public void set(float x, float y, float z, Float2 vec1, Float3 vec2) {
    set(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public Float8(float x, float y, float z, Float3 vec1, float s2, float s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public void set(float x, float y, float z, Float3 vec1, float s2, float s3) {
    set(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public Float8(float x, float y, float z, Float3 vec1, Float2 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public void set(float x, float y, float z, Float3 vec1, Float2 vec2) {
    set(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public Float8(float x, float y, float z, Float4 vec1, float s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public void set(float x, float y, float z, Float4 vec1, float s3) {
    set(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public Float8(float x, float y, Float2 vec1, float s0, float s1, float s2, float s3) {
    this(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public void set(float x, float y, Float2 vec1, float s0, float s1, float s2, float s3) {
    set(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public Float8(float x, float y, Float2 vec1, float s0, float s1, Float2 vec2) {
    this(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public void set(float x, float y, Float2 vec1, float s0, float s1, Float2 vec2) {
    set(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public Float8(float x, float y, Float2 vec1, float s0, Float2 vec2, float s3) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public void set(float x, float y, Float2 vec1, float s0, Float2 vec2, float s3) {
    set(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public Float8(float x, float y, Float2 vec1, float s0, Float3 vec2) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(float x, float y, Float2 vec1, float s0, Float3 vec2) {
    set(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public Float8(float x, float y, Float2 vec1, Float2 vec2, float s2, float s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public void set(float x, float y, Float2 vec1, Float2 vec2, float s2, float s3) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public Float8(float x, float y, Float2 vec1, Float2 vec2, Float2 vec3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(float x, float y, Float2 vec1, Float2 vec2, Float2 vec3) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Float8(float x, float y, Float2 vec1, Float3 vec2, float s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(float x, float y, Float2 vec1, Float3 vec2, float s3) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public Float8(float x, float y, Float2 vec1, Float4 vec2) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(float x, float y, Float2 vec1, Float4 vec2) {
    set(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Float8(float x, float y, Float3 vec1, float s1, float s2, float s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public void set(float x, float y, Float3 vec1, float s1, float s2, float s3) {
    set(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public Float8(float x, float y, Float3 vec1, float s1, Float2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public void set(float x, float y, Float3 vec1, float s1, Float2 vec2) {
    set(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public Float8(float x, float y, Float3 vec1, Float2 vec2, float s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public void set(float x, float y, Float3 vec1, Float2 vec2, float s3) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public Float8(float x, float y, Float3 vec1, Float3 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public void set(float x, float y, Float3 vec1, Float3 vec2) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public Float8(float x, float y, Float4 vec1, float s2, float s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public void set(float x, float y, Float4 vec1, float s2, float s3) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public Float8(float x, float y, Float4 vec1, Float2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public void set(float x, float y, Float4 vec1, Float2 vec2) {
    set(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public Float8(float x, Float2 vec1, float w, float s0, float s1, float s2, float s3) {
    this(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public void set(float x, Float2 vec1, float w, float s0, float s1, float s2, float s3) {
    set(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public Float8(float x, Float2 vec1, float w, float s0, float s1, Float2 vec2) {
    this(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public void set(float x, Float2 vec1, float w, float s0, float s1, Float2 vec2) {
    set(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public Float8(float x, Float2 vec1, float w, float s0, Float2 vec2, float s3) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public void set(float x, Float2 vec1, float w, float s0, Float2 vec2, float s3) {
    set(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public Float8(float x, Float2 vec1, float w, float s0, Float3 vec2) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(float x, Float2 vec1, float w, float s0, Float3 vec2) {
    set(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Float8(float x, Float2 vec1, float w, Float2 vec2, float s2, float s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public void set(float x, Float2 vec1, float w, Float2 vec2, float s2, float s3) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public Float8(float x, Float2 vec1, float w, Float2 vec2, Float2 vec3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(float x, Float2 vec1, float w, Float2 vec2, Float2 vec3) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Float8(float x, Float2 vec1, float w, Float3 vec2, float s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(float x, Float2 vec1, float w, Float3 vec2, float s3) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Float8(float x, Float2 vec1, float w, Float4 vec2) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(float x, Float2 vec1, float w, Float4 vec2) {
    set(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Float8(float x, Float2 vec1, Float2 vec2, float s1, float s2, float s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public void set(float x, Float2 vec1, Float2 vec2, float s1, float s2, float s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public Float8(float x, Float2 vec1, Float2 vec2, float s1, Float2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public void set(float x, Float2 vec1, Float2 vec2, float s1, Float2 vec3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Float8(float x, Float2 vec1, Float2 vec2, Float2 vec3, float s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public void set(float x, Float2 vec1, Float2 vec2, Float2 vec3, float s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Float8(float x, Float2 vec1, Float2 vec2, Float3 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public void set(float x, Float2 vec1, Float2 vec2, Float3 vec3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Float8(float x, Float2 vec1, Float3 vec2, float s2, float s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public void set(float x, Float2 vec1, Float3 vec2, float s2, float s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Float8(float x, Float2 vec1, Float3 vec2, Float2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public void set(float x, Float2 vec1, Float3 vec2, Float2 vec3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Float8(float x, Float2 vec1, Float4 vec2, float s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public void set(float x, Float2 vec1, Float4 vec2, float s3) {
    set(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Float8(float x, Float3 vec1, float s0, float s1, float s2, float s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public void set(float x, Float3 vec1, float s0, float s1, float s2, float s3) {
    set(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public Float8(float x, Float3 vec1, float s0, float s1, Float2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public void set(float x, Float3 vec1, float s0, float s1, Float2 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public Float8(float x, Float3 vec1, float s0, Float2 vec2, float s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public void set(float x, Float3 vec1, float s0, Float2 vec2, float s3) {
    set(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public Float8(float x, Float3 vec1, float s0, Float3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(float x, Float3 vec1, float s0, Float3 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public Float8(float x, Float3 vec1, Float2 vec2, float s2, float s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public void set(float x, Float3 vec1, Float2 vec2, float s2, float s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public Float8(float x, Float3 vec1, Float2 vec2, Float2 vec3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(float x, Float3 vec1, Float2 vec2, Float2 vec3) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Float8(float x, Float3 vec1, Float3 vec2, float s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(float x, Float3 vec1, Float3 vec2, float s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public Float8(float x, Float3 vec1, Float4 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(float x, Float3 vec1, Float4 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Float8(float x, Float4 vec1, float s1, float s2, float s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public void set(float x, Float4 vec1, float s1, float s2, float s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public Float8(float x, Float4 vec1, float s1, Float2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public void set(float x, Float4 vec1, float s1, Float2 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public Float8(float x, Float4 vec1, Float2 vec2, float s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public void set(float x, Float4 vec1, Float2 vec2, float s3) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public Float8(float x, Float4 vec1, Float3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public void set(float x, Float4 vec1, Float3 vec2) {
    set(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public Float8(Float2 vec1, float z, float w, float s0, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public void set(Float2 vec1, float z, float w, float s0, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public Float8(Float2 vec1, float z, float w, float s0, float s1, Float2 vec2) {
    this(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public void set(Float2 vec1, float z, float w, float s0, float s1, Float2 vec2) {
    set(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public Float8(Float2 vec1, float z, float w, float s0, Float2 vec2, float s3) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public void set(Float2 vec1, float z, float w, float s0, Float2 vec2, float s3) {
    set(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public Float8(Float2 vec1, float z, float w, float s0, Float3 vec2) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(Float2 vec1, float z, float w, float s0, Float3 vec2) {
    set(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Float8(Float2 vec1, float z, float w, Float2 vec2, float s2, float s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public void set(Float2 vec1, float z, float w, Float2 vec2, float s2, float s3) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public Float8(Float2 vec1, float z, float w, Float2 vec2, Float2 vec3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(Float2 vec1, float z, float w, Float2 vec2, Float2 vec3) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Float8(Float2 vec1, float z, float w, Float3 vec2, float s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(Float2 vec1, float z, float w, Float3 vec2, float s3) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Float8(Float2 vec1, float z, float w, Float4 vec2) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(Float2 vec1, float z, float w, Float4 vec2) {
    set(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Float8(Float2 vec1, float z, Float2 vec2, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public void set(Float2 vec1, float z, Float2 vec2, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Float8(Float2 vec1, float z, Float2 vec2, float s1, Float2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public void set(Float2 vec1, float z, Float2 vec2, float s1, Float2 vec3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Float8(Float2 vec1, float z, Float2 vec2, Float2 vec3, float s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public void set(Float2 vec1, float z, Float2 vec2, Float2 vec3, float s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Float8(Float2 vec1, float z, Float2 vec2, Float3 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public void set(Float2 vec1, float z, Float2 vec2, Float3 vec3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Float8(Float2 vec1, float z, Float3 vec2, float s2, float s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public void set(Float2 vec1, float z, Float3 vec2, float s2, float s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Float8(Float2 vec1, float z, Float3 vec2, Float2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public void set(Float2 vec1, float z, Float3 vec2, Float2 vec3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Float8(Float2 vec1, float z, Float4 vec2, float s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public void set(Float2 vec1, float z, Float4 vec2, float s3) {
    set(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Float8(Float2 vec1, Float2 vec2, float s0, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public void set(Float2 vec1, Float2 vec2, float s0, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public Float8(Float2 vec1, Float2 vec2, float s0, float s1, Float2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public void set(Float2 vec1, Float2 vec2, float s0, float s1, Float2 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public Float8(Float2 vec1, Float2 vec2, float s0, Float2 vec3, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public void set(Float2 vec1, Float2 vec2, float s0, Float2 vec3, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public Float8(Float2 vec1, Float2 vec2, float s0, Float3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public void set(Float2 vec1, Float2 vec2, float s0, Float3 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public Float8(Float2 vec1, Float2 vec2, Float2 vec3, float s2, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public void set(Float2 vec1, Float2 vec2, Float2 vec3, float s2, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public Float8(Float2 vec1, Float2 vec2, Float2 vec3, Float2 vec4) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public void set(Float2 vec1, Float2 vec2, Float2 vec3, Float2 vec4) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public Float8(Float2 vec1, Float2 vec2, Float3 vec3, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public void set(Float2 vec1, Float2 vec2, Float3 vec3, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public Float8(Float2 vec1, Float2 vec2, Float4 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public void set(Float2 vec1, Float2 vec2, Float4 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public Float8(Float2 vec1, Float3 vec2, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public void set(Float2 vec1, Float3 vec2, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public Float8(Float2 vec1, Float3 vec2, float s1, Float2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public void set(Float2 vec1, Float3 vec2, float s1, Float2 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public Float8(Float2 vec1, Float3 vec2, Float2 vec3, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public void set(Float2 vec1, Float3 vec2, Float2 vec3, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public Float8(Float2 vec1, Float3 vec2, Float3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public void set(Float2 vec1, Float3 vec2, Float3 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public Float8(Float2 vec1, Float4 vec2, float s2, float s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public void set(Float2 vec1, Float4 vec2, float s2, float s3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public Float8(Float2 vec1, Float4 vec2, Float2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public void set(Float2 vec1, Float4 vec2, Float2 vec3) {
    set(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public Float8(Float3 vec1, float w, float s0, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public void set(Float3 vec1, float w, float s0, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public Float8(Float3 vec1, float w, float s0, float s1, Float2 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public void set(Float3 vec1, float w, float s0, float s1, Float2 vec2) {
    set(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public Float8(Float3 vec1, float w, float s0, Float2 vec2, float s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public void set(Float3 vec1, float w, float s0, Float2 vec2, float s3) {
    set(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public Float8(Float3 vec1, float w, float s0, Float3 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(Float3 vec1, float w, float s0, Float3 vec2) {
    set(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Float8(Float3 vec1, float w, Float2 vec2, float s2, float s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public void set(Float3 vec1, float w, Float2 vec2, float s2, float s3) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public Float8(Float3 vec1, float w, Float2 vec2, Float2 vec3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(Float3 vec1, float w, Float2 vec2, Float2 vec3) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Float8(Float3 vec1, float w, Float3 vec2, float s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(Float3 vec1, float w, Float3 vec2, float s3) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Float8(Float3 vec1, float w, Float4 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(Float3 vec1, float w, Float4 vec2) {
    set(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Float8(Float3 vec1, Float2 vec2, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public void set(Float3 vec1, Float2 vec2, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Float8(Float3 vec1, Float2 vec2, float s1, Float2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public void set(Float3 vec1, Float2 vec2, float s1, Float2 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Float8(Float3 vec1, Float2 vec2, Float2 vec3, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public void set(Float3 vec1, Float2 vec2, Float2 vec3, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Float8(Float3 vec1, Float2 vec2, Float3 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public void set(Float3 vec1, Float2 vec2, Float3 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Float8(Float3 vec1, Float3 vec2, float s2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public void set(Float3 vec1, Float3 vec2, float s2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Float8(Float3 vec1, Float3 vec2, Float2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public void set(Float3 vec1, Float3 vec2, Float2 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Float8(Float3 vec1, Float4 vec2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public void set(Float3 vec1, Float4 vec2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Float8(Float4 vec1, float s0, float s1, float s2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public void set(Float4 vec1, float s0, float s1, float s2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public Float8(Float4 vec1, float s0, float s1, Float2 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public void set(Float4 vec1, float s0, float s1, Float2 vec2) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public Float8(Float4 vec1, float s0, Float2 vec2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public void set(Float4 vec1, float s0, Float2 vec2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public Float8(Float4 vec1, float s0, Float3 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public void set(Float4 vec1, float s0, Float3 vec2) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Float8(Float4 vec1, Float2 vec2, float s2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public void set(Float4 vec1, Float2 vec2, float s2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public Float8(Float4 vec1, Float2 vec2, Float2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public void set(Float4 vec1, Float2 vec2, Float2 vec3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Float8(Float4 vec1, Float3 vec2, float s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public void set(Float4 vec1, Float3 vec2, float s3) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Float8(Float4 vec1, Float4 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public void set(Float4 vec1, Float4 vec2) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Float8(Float8 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public void set(Float8 vec1) {
    set(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public Float8 value() {
    return new Float8(this);
  }

  public Float4 lo() {
    return new Float4(x, y, z, w);
  }

  public void lo(Float4 result) {
    result.x = x;
    result.y = y;
    result.z = z;
    result.w = w;
  }

  public Float4 hi() {
    return new Float4(s[0], s[1], s[2], s[3]);
  }

  public void hi(Float4 result) {
    result.x = s[0];
    result.y = s[1];
    result.z = s[2];
    result.w = s[3];
  }

  public Float4 odd() {
    return new Float4(y, w, s[1], s[3]);
  }

  public void odd(Float4 result) {
    result.x = y;
    result.y = w;
    result.z = s[1];
    result.w = s[3];
  }

  public Float4 even() {
    return new Float4(x, z, s[0], s[2]);
  }

  public void even(Float4 result) {
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

  public Long8 convertLong8() {
    return new Long8((long)(x), (long)(y), (long)(z), (long)(w), (long)(s[0]), (long)(s[1]), (long)(s[2]), (long)(s[3]));
  }

  public void convertLong8(Long8 result) {
    result.x = (long)(x);
    result.y = (long)(y);
    result.z = (long)(z);
    result.w = (long)(w);
    result.s[0] = (long)(s[0]);
    result.s[1] = (long)(s[1]);
    result.s[2] = (long)(s[2]);
    result.s[3] = (long)(s[3]);
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

  public Float2 asFloat2() {
    return new Float2(x, y);
  }

  public void asFloat2(Float2 result) {
    result.x = x;
    result.y = y;
  }

  public Float3 asFloat3() {
    return new Float3(x, y, z);
  }

  public void asFloat3(Float3 result) {
    result.x = x;
    result.y = y;
    result.z = z;
  }

  public Float4 asFloat4() {
    return new Float4(x, y, z, w);
  }

  public void asFloat4(Float4 result) {
    result.x = x;
    result.y = y;
    result.z = z;
    result.w = w;
  }

  public static Int8 isEqual(Float8 a, Float8 b) {
    return new Int8(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
  }

  public static void isEqual(Float8 a, Float8 b, Int8 result) {
    result.x = a.x == b.x? 1 : 0;
    result.y = a.y == b.y? 1 : 0;
    result.z = a.z == b.z? 1 : 0;
    result.w = a.w == b.w? 1 : 0;
    result.s[0] = a.s[0] == b.s[0]? 1 : 0;
    result.s[1] = a.s[1] == b.s[1]? 1 : 0;
    result.s[2] = a.s[2] == b.s[2]? 1 : 0;
    result.s[3] = a.s[3] == b.s[3]? 1 : 0;
  }

  public static Int8 isNotEqual(Float8 a, Float8 b) {
    return new Int8(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
  }

  public static void isNotEqual(Float8 a, Float8 b, Int8 result) {
    result.x = a.x != b.x? 1 : 0;
    result.y = a.y != b.y? 1 : 0;
    result.z = a.z != b.z? 1 : 0;
    result.w = a.w != b.w? 1 : 0;
    result.s[0] = a.s[0] != b.s[0]? 1 : 0;
    result.s[1] = a.s[1] != b.s[1]? 1 : 0;
    result.s[2] = a.s[2] != b.s[2]? 1 : 0;
    result.s[3] = a.s[3] != b.s[3]? 1 : 0;
  }

  public static Int8 isGreater(Float8 a, Float8 b) {
    return new Int8(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
  }

  public static void isGreater(Float8 a, Float8 b, Int8 result) {
    result.x = a.x > b.x? 1 : 0;
    result.y = a.y > b.y? 1 : 0;
    result.z = a.z > b.z? 1 : 0;
    result.w = a.w > b.w? 1 : 0;
    result.s[0] = a.s[0] > b.s[0]? 1 : 0;
    result.s[1] = a.s[1] > b.s[1]? 1 : 0;
    result.s[2] = a.s[2] > b.s[2]? 1 : 0;
    result.s[3] = a.s[3] > b.s[3]? 1 : 0;
  }

  public static Int8 isGreaterEqual(Float8 a, Float8 b) {
    return new Int8(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
  }

  public static void isGreaterEqual(Float8 a, Float8 b, Int8 result) {
    result.x = a.x >= b.x? 1 : 0;
    result.y = a.y >= b.y? 1 : 0;
    result.z = a.z >= b.z? 1 : 0;
    result.w = a.w >= b.w? 1 : 0;
    result.s[0] = a.s[0] >= b.s[0]? 1 : 0;
    result.s[1] = a.s[1] >= b.s[1]? 1 : 0;
    result.s[2] = a.s[2] >= b.s[2]? 1 : 0;
    result.s[3] = a.s[3] >= b.s[3]? 1 : 0;
  }

  public static Int8 isLess(Float8 a, Float8 b) {
    return new Int8(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
  }

  public static void isLess(Float8 a, Float8 b, Int8 result) {
    result.x = a.x < b.x? 1 : 0;
    result.y = a.y < b.y? 1 : 0;
    result.z = a.z < b.z? 1 : 0;
    result.w = a.w < b.w? 1 : 0;
    result.s[0] = a.s[0] < b.s[0]? 1 : 0;
    result.s[1] = a.s[1] < b.s[1]? 1 : 0;
    result.s[2] = a.s[2] < b.s[2]? 1 : 0;
    result.s[3] = a.s[3] < b.s[3]? 1 : 0;
  }

  public static Int8 isLessEqual(Float8 a, Float8 b) {
    return new Int8(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
  }

  public static void isLessEqual(Float8 a, Float8 b, Int8 result) {
    result.x = a.x <= b.x? 1 : 0;
    result.y = a.y <= b.y? 1 : 0;
    result.z = a.z <= b.z? 1 : 0;
    result.w = a.w <= b.w? 1 : 0;
    result.s[0] = a.s[0] <= b.s[0]? 1 : 0;
    result.s[1] = a.s[1] <= b.s[1]? 1 : 0;
    result.s[2] = a.s[2] <= b.s[2]? 1 : 0;
    result.s[3] = a.s[3] <= b.s[3]? 1 : 0;
  }

  public static Float8 select(Float8 a, Float8 b, Int8 c) {
    return new Float8(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w), Math.select(a.s[0], b.s[0], c.s[0]), Math.select(a.s[1], b.s[1], c.s[1]), Math.select(a.s[2], b.s[2], c.s[2]), Math.select(a.s[3], b.s[3], c.s[3]));
  }

  public static void select(Float8 a, Float8 b, Int8 c, Float8 result) {
    result.x = Math.select(a.x, b.x, c.x);
    result.y = Math.select(a.y, b.y, c.y);
    result.z = Math.select(a.z, b.z, c.z);
    result.w = Math.select(a.w, b.w, c.w);
    result.s[0] = Math.select(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.select(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.select(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.select(a.s[3], b.s[3], c.s[3]);
  }

  public static Int8 isFinite(Float8 a) {
    return new Int8(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z), Math.isFinite(a.w), Math.isFinite(a.s[0]), Math.isFinite(a.s[1]), Math.isFinite(a.s[2]), Math.isFinite(a.s[3]));
  }

  public static void isFinite(Float8 a, Int8 result) {
    result.x = Math.isFinite(a.x);
    result.y = Math.isFinite(a.y);
    result.z = Math.isFinite(a.z);
    result.w = Math.isFinite(a.w);
    result.s[0] = Math.isFinite(a.s[0]);
    result.s[1] = Math.isFinite(a.s[1]);
    result.s[2] = Math.isFinite(a.s[2]);
    result.s[3] = Math.isFinite(a.s[3]);
  }

  public static Int8 isInf(Float8 a) {
    return new Int8(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z), Math.isInf(a.w), Math.isInf(a.s[0]), Math.isInf(a.s[1]), Math.isInf(a.s[2]), Math.isInf(a.s[3]));
  }

  public static void isInf(Float8 a, Int8 result) {
    result.x = Math.isInf(a.x);
    result.y = Math.isInf(a.y);
    result.z = Math.isInf(a.z);
    result.w = Math.isInf(a.w);
    result.s[0] = Math.isInf(a.s[0]);
    result.s[1] = Math.isInf(a.s[1]);
    result.s[2] = Math.isInf(a.s[2]);
    result.s[3] = Math.isInf(a.s[3]);
  }

  public static Int8 isNaN(Float8 a) {
    return new Int8(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z), Math.isNaN(a.w), Math.isNaN(a.s[0]), Math.isNaN(a.s[1]), Math.isNaN(a.s[2]), Math.isNaN(a.s[3]));
  }

  public static void isNaN(Float8 a, Int8 result) {
    result.x = Math.isNaN(a.x);
    result.y = Math.isNaN(a.y);
    result.z = Math.isNaN(a.z);
    result.w = Math.isNaN(a.w);
    result.s[0] = Math.isNaN(a.s[0]);
    result.s[1] = Math.isNaN(a.s[1]);
    result.s[2] = Math.isNaN(a.s[2]);
    result.s[3] = Math.isNaN(a.s[3]);
  }

  public static Int8 isNormal(Float8 a) {
    return new Int8(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z), Math.isNormal(a.w), Math.isNormal(a.s[0]), Math.isNormal(a.s[1]), Math.isNormal(a.s[2]), Math.isNormal(a.s[3]));
  }

  public static void isNormal(Float8 a, Int8 result) {
    result.x = Math.isNormal(a.x);
    result.y = Math.isNormal(a.y);
    result.z = Math.isNormal(a.z);
    result.w = Math.isNormal(a.w);
    result.s[0] = Math.isNormal(a.s[0]);
    result.s[1] = Math.isNormal(a.s[1]);
    result.s[2] = Math.isNormal(a.s[2]);
    result.s[3] = Math.isNormal(a.s[3]);
  }

  public static Int8 isOrdered(Float8 a, Float8 b) {
    return new Int8(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z), Math.isOrdered(a.w, b.w), Math.isOrdered(a.s[0], b.s[0]), Math.isOrdered(a.s[1], b.s[1]), Math.isOrdered(a.s[2], b.s[2]), Math.isOrdered(a.s[3], b.s[3]));
  }

  public static void isOrdered(Float8 a, Float8 b, Int8 result) {
    result.x = Math.isOrdered(a.x, b.x);
    result.y = Math.isOrdered(a.y, b.y);
    result.z = Math.isOrdered(a.z, b.z);
    result.w = Math.isOrdered(a.w, b.w);
    result.s[0] = Math.isOrdered(a.s[0], b.s[0]);
    result.s[1] = Math.isOrdered(a.s[1], b.s[1]);
    result.s[2] = Math.isOrdered(a.s[2], b.s[2]);
    result.s[3] = Math.isOrdered(a.s[3], b.s[3]);
  }

  public static Int8 isUnordered(Float8 a, Float8 b) {
    return new Int8(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z), Math.isUnordered(a.w, b.w), Math.isUnordered(a.s[0], b.s[0]), Math.isUnordered(a.s[1], b.s[1]), Math.isUnordered(a.s[2], b.s[2]), Math.isUnordered(a.s[3], b.s[3]));
  }

  public static void isUnordered(Float8 a, Float8 b, Int8 result) {
    result.x = Math.isUnordered(a.x, b.x);
    result.y = Math.isUnordered(a.y, b.y);
    result.z = Math.isUnordered(a.z, b.z);
    result.w = Math.isUnordered(a.w, b.w);
    result.s[0] = Math.isUnordered(a.s[0], b.s[0]);
    result.s[1] = Math.isUnordered(a.s[1], b.s[1]);
    result.s[2] = Math.isUnordered(a.s[2], b.s[2]);
    result.s[3] = Math.isUnordered(a.s[3], b.s[3]);
  }

  public static int any(Float8 a) {
    return (a.x != 0.0f || a.y != 0.0f || a.z != 0.0f || a.w != 0.0f || a.s[0] != 0.0f || a.s[1] != 0.0f || a.s[2] != 0.0f || a.s[3] != 0.0f)? 1 : 0;
  }

  public static int all(Float8 a) {
    return (a.x == 0.0f || a.y == 0.0f || a.z == 0.0f || a.w == 0.0f || a.s[0] == 0.0f || a.s[1] == 0.0f || a.s[2] == 0.0f || a.s[3] == 0.0f)? 0 : 1;
  }

  public static Float8 neg(Float8 a) {
    return new Float8((float)(-a.x), (float)(-a.y), (float)(-a.z), (float)(-a.w), (float)(-a.s[0]), (float)(-a.s[1]), (float)(-a.s[2]), (float)(-a.s[3]));
  }

  public static void neg(Float8 a, Float8 result) {
    result.x = (float)(-a.x);
    result.y = (float)(-a.y);
    result.z = (float)(-a.z);
    result.w = (float)(-a.w);
    result.s[0] = (float)(-a.s[0]);
    result.s[1] = (float)(-a.s[1]);
    result.s[2] = (float)(-a.s[2]);
    result.s[3] = (float)(-a.s[3]);
  }

  public static Float8 add(Float8 a, Float8 b) {
    return new Float8((float)(a.x + b.x), (float)(a.y + b.y), (float)(a.z + b.z), (float)(a.w + b.w), (float)(a.s[0] + b.s[0]), (float)(a.s[1] + b.s[1]), (float)(a.s[2] + b.s[2]), (float)(a.s[3] + b.s[3]));
  }

  public static void add(Float8 a, Float8 b, Float8 result) {
    result.x = (float)(a.x + b.x);
    result.y = (float)(a.y + b.y);
    result.z = (float)(a.z + b.z);
    result.w = (float)(a.w + b.w);
    result.s[0] = (float)(a.s[0] + b.s[0]);
    result.s[1] = (float)(a.s[1] + b.s[1]);
    result.s[2] = (float)(a.s[2] + b.s[2]);
    result.s[3] = (float)(a.s[3] + b.s[3]);
  }

  public static Float8 sub(Float8 a, Float8 b) {
    return new Float8((float)(a.x - b.x), (float)(a.y - b.y), (float)(a.z - b.z), (float)(a.w - b.w), (float)(a.s[0] - b.s[0]), (float)(a.s[1] - b.s[1]), (float)(a.s[2] - b.s[2]), (float)(a.s[3] - b.s[3]));
  }

  public static void sub(Float8 a, Float8 b, Float8 result) {
    result.x = (float)(a.x - b.x);
    result.y = (float)(a.y - b.y);
    result.z = (float)(a.z - b.z);
    result.w = (float)(a.w - b.w);
    result.s[0] = (float)(a.s[0] - b.s[0]);
    result.s[1] = (float)(a.s[1] - b.s[1]);
    result.s[2] = (float)(a.s[2] - b.s[2]);
    result.s[3] = (float)(a.s[3] - b.s[3]);
  }

  public static Double8 mul(Float8 a, Double8 b) {
    return new Double8((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w), (double)(a.s[0] * b.s[0]), (double)(a.s[1] * b.s[1]), (double)(a.s[2] * b.s[2]), (double)(a.s[3] * b.s[3]));
  }

  public static void mul(Float8 a, Double8 b, Double8 result) {
    result.x = (double)(a.x * b.x);
    result.y = (double)(a.y * b.y);
    result.z = (double)(a.z * b.z);
    result.w = (double)(a.w * b.w);
    result.s[0] = (double)(a.s[0] * b.s[0]);
    result.s[1] = (double)(a.s[1] * b.s[1]);
    result.s[2] = (double)(a.s[2] * b.s[2]);
    result.s[3] = (double)(a.s[3] * b.s[3]);
  }

  public static Double8 mul(Float8 a, double k) {
    return new Double8((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k), (double)(a.s[0] * k), (double)(a.s[1] * k), (double)(a.s[2] * k), (double)(a.s[3] * k));
  }

  public static void mul(Float8 a, double k, Double8 result) {
    result.x = (double)(a.x * k);
    result.y = (double)(a.y * k);
    result.z = (double)(a.z * k);
    result.w = (double)(a.w * k);
    result.s[0] = (double)(a.s[0] * k);
    result.s[1] = (double)(a.s[1] * k);
    result.s[2] = (double)(a.s[2] * k);
    result.s[3] = (double)(a.s[3] * k);
  }

  public static Float8 mul(Float8 a, Float8 b) {
    return new Float8((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w), (float)(a.s[0] * b.s[0]), (float)(a.s[1] * b.s[1]), (float)(a.s[2] * b.s[2]), (float)(a.s[3] * b.s[3]));
  }

  public static void mul(Float8 a, Float8 b, Float8 result) {
    result.x = (float)(a.x * b.x);
    result.y = (float)(a.y * b.y);
    result.z = (float)(a.z * b.z);
    result.w = (float)(a.w * b.w);
    result.s[0] = (float)(a.s[0] * b.s[0]);
    result.s[1] = (float)(a.s[1] * b.s[1]);
    result.s[2] = (float)(a.s[2] * b.s[2]);
    result.s[3] = (float)(a.s[3] * b.s[3]);
  }

  public static Float8 mul(Float8 a, float k) {
    return new Float8((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k), (float)(a.s[0] * k), (float)(a.s[1] * k), (float)(a.s[2] * k), (float)(a.s[3] * k));
  }

  public static void mul(Float8 a, float k, Float8 result) {
    result.x = (float)(a.x * k);
    result.y = (float)(a.y * k);
    result.z = (float)(a.z * k);
    result.w = (float)(a.w * k);
    result.s[0] = (float)(a.s[0] * k);
    result.s[1] = (float)(a.s[1] * k);
    result.s[2] = (float)(a.s[2] * k);
    result.s[3] = (float)(a.s[3] * k);
  }

  public static Double8 div(Float8 a, Double8 b) {
    return new Double8((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w), (double)(a.s[0] / b.s[0]), (double)(a.s[1] / b.s[1]), (double)(a.s[2] / b.s[2]), (double)(a.s[3] / b.s[3]));
  }

  public static void div(Float8 a, Double8 b, Double8 result) {
    result.x = (double)(a.x / b.x);
    result.y = (double)(a.y / b.y);
    result.z = (double)(a.z / b.z);
    result.w = (double)(a.w / b.w);
    result.s[0] = (double)(a.s[0] / b.s[0]);
    result.s[1] = (double)(a.s[1] / b.s[1]);
    result.s[2] = (double)(a.s[2] / b.s[2]);
    result.s[3] = (double)(a.s[3] / b.s[3]);
  }

  public static Double8 div(Float8 a, double k) {
    return new Double8((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k), (double)(a.s[0] / k), (double)(a.s[1] / k), (double)(a.s[2] / k), (double)(a.s[3] / k));
  }

  public static void div(Float8 a, double k, Double8 result) {
    result.x = (double)(a.x / k);
    result.y = (double)(a.y / k);
    result.z = (double)(a.z / k);
    result.w = (double)(a.w / k);
    result.s[0] = (double)(a.s[0] / k);
    result.s[1] = (double)(a.s[1] / k);
    result.s[2] = (double)(a.s[2] / k);
    result.s[3] = (double)(a.s[3] / k);
  }

  public static Float8 div(Float8 a, Float8 b) {
    return new Float8((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w), (float)(a.s[0] / b.s[0]), (float)(a.s[1] / b.s[1]), (float)(a.s[2] / b.s[2]), (float)(a.s[3] / b.s[3]));
  }

  public static void div(Float8 a, Float8 b, Float8 result) {
    result.x = (float)(a.x / b.x);
    result.y = (float)(a.y / b.y);
    result.z = (float)(a.z / b.z);
    result.w = (float)(a.w / b.w);
    result.s[0] = (float)(a.s[0] / b.s[0]);
    result.s[1] = (float)(a.s[1] / b.s[1]);
    result.s[2] = (float)(a.s[2] / b.s[2]);
    result.s[3] = (float)(a.s[3] / b.s[3]);
  }

  public static Float8 div(Float8 a, float k) {
    return new Float8((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k), (float)(a.s[0] / k), (float)(a.s[1] / k), (float)(a.s[2] / k), (float)(a.s[3] / k));
  }

  public static void div(Float8 a, float k, Float8 result) {
    result.x = (float)(a.x / k);
    result.y = (float)(a.y / k);
    result.z = (float)(a.z / k);
    result.w = (float)(a.w / k);
    result.s[0] = (float)(a.s[0] / k);
    result.s[1] = (float)(a.s[1] / k);
    result.s[2] = (float)(a.s[2] / k);
    result.s[3] = (float)(a.s[3] / k);
  }

  public static float dot(Float8 a, Float8 b) {
    return (float)(a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w + a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2] + a.s[3] * b.s[3]);
  }

  public static double distance(Float8 a, Float8 b) {
    return distance(a, b, new Float8());
  }

  public static double distance(Float8 a, Float8 b, Float8 tmp) {
    sub(a, b, tmp);
    return length(tmp);
  }

  public static double length(Float8 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w + a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2] + a.s[3] * a.s[3]);
  }

  public static Float8 normalize(Float8 a) {
    Float8 result = new Float8();
    normalize(a, result);
    return result;
  }

  public static void normalize(Float8 a, Float8 result) {
    double len = length(a);
    result.x = (float)(a.x / len);
    result.y = (float)(a.y / len);
    result.z = (float)(a.z / len);
    result.w = (float)(a.w / len);
    result.s[0] = (float)(a.s[0] / len);
    result.s[1] = (float)(a.s[1] / len);
    result.s[2] = (float)(a.s[2] / len);
    result.s[3] = (float)(a.s[3] / len);
  }

  public static Float8 abs(Float8 a) {
    return new Float8(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w), Math.abs(a.s[0]), Math.abs(a.s[1]), Math.abs(a.s[2]), Math.abs(a.s[3]));
  }

  public static void abs(Float8 a, Float8 result) {
    result.x = Math.abs(a.x);
    result.y = Math.abs(a.y);
    result.z = Math.abs(a.z);
    result.w = Math.abs(a.w);
    result.s[0] = Math.abs(a.s[0]);
    result.s[1] = Math.abs(a.s[1]);
    result.s[2] = Math.abs(a.s[2]);
    result.s[3] = Math.abs(a.s[3]);
  }

  public static Float8 clamp(Float8 a, Float8 b, Float8 c) {
    return new Float8(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w), Math.clamp(a.s[0], b.s[0], c.s[0]), Math.clamp(a.s[1], b.s[1], c.s[1]), Math.clamp(a.s[2], b.s[2], c.s[2]), Math.clamp(a.s[3], b.s[3], c.s[3]));
  }

  public static void clamp(Float8 a, Float8 b, Float8 c, Float8 result) {
    result.x = Math.clamp(a.x, b.x, c.x);
    result.y = Math.clamp(a.y, b.y, c.y);
    result.z = Math.clamp(a.z, b.z, c.z);
    result.w = Math.clamp(a.w, b.w, c.w);
    result.s[0] = Math.clamp(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.clamp(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.clamp(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.clamp(a.s[3], b.s[3], c.s[3]);
  }

  public static Float8 max(Float8 a, Float8 b) {
    return new Float8(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w), Math.max(a.s[0], b.s[0]), Math.max(a.s[1], b.s[1]), Math.max(a.s[2], b.s[2]), Math.max(a.s[3], b.s[3]));
  }

  public static void max(Float8 a, Float8 b, Float8 result) {
    result.x = Math.max(a.x, b.x);
    result.y = Math.max(a.y, b.y);
    result.z = Math.max(a.z, b.z);
    result.w = Math.max(a.w, b.w);
    result.s[0] = Math.max(a.s[0], b.s[0]);
    result.s[1] = Math.max(a.s[1], b.s[1]);
    result.s[2] = Math.max(a.s[2], b.s[2]);
    result.s[3] = Math.max(a.s[3], b.s[3]);
  }

  public static Float8 maxMag(Float8 a, Float8 b) {
    return new Float8(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w), Math.maxMag(a.s[0], b.s[0]), Math.maxMag(a.s[1], b.s[1]), Math.maxMag(a.s[2], b.s[2]), Math.maxMag(a.s[3], b.s[3]));
  }

  public static void maxMag(Float8 a, Float8 b, Float8 result) {
    result.x = Math.maxMag(a.x, b.x);
    result.y = Math.maxMag(a.y, b.y);
    result.z = Math.maxMag(a.z, b.z);
    result.w = Math.maxMag(a.w, b.w);
    result.s[0] = Math.maxMag(a.s[0], b.s[0]);
    result.s[1] = Math.maxMag(a.s[1], b.s[1]);
    result.s[2] = Math.maxMag(a.s[2], b.s[2]);
    result.s[3] = Math.maxMag(a.s[3], b.s[3]);
  }

  public static Float8 min(Float8 a, Float8 b) {
    return new Float8(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w), Math.min(a.s[0], b.s[0]), Math.min(a.s[1], b.s[1]), Math.min(a.s[2], b.s[2]), Math.min(a.s[3], b.s[3]));
  }

  public static void min(Float8 a, Float8 b, Float8 result) {
    result.x = Math.min(a.x, b.x);
    result.y = Math.min(a.y, b.y);
    result.z = Math.min(a.z, b.z);
    result.w = Math.min(a.w, b.w);
    result.s[0] = Math.min(a.s[0], b.s[0]);
    result.s[1] = Math.min(a.s[1], b.s[1]);
    result.s[2] = Math.min(a.s[2], b.s[2]);
    result.s[3] = Math.min(a.s[3], b.s[3]);
  }

  public static Float8 minMag(Float8 a, Float8 b) {
    return new Float8(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w), Math.minMag(a.s[0], b.s[0]), Math.minMag(a.s[1], b.s[1]), Math.minMag(a.s[2], b.s[2]), Math.minMag(a.s[3], b.s[3]));
  }

  public static void minMag(Float8 a, Float8 b, Float8 result) {
    result.x = Math.minMag(a.x, b.x);
    result.y = Math.minMag(a.y, b.y);
    result.z = Math.minMag(a.z, b.z);
    result.w = Math.minMag(a.w, b.w);
    result.s[0] = Math.minMag(a.s[0], b.s[0]);
    result.s[1] = Math.minMag(a.s[1], b.s[1]);
    result.s[2] = Math.minMag(a.s[2], b.s[2]);
    result.s[3] = Math.minMag(a.s[3], b.s[3]);
  }

  public static Float8 mix(Float8 a, Float8 b, Float8 c) {
    return new Float8(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w), Math.mix(a.s[0], b.s[0], c.s[0]), Math.mix(a.s[1], b.s[1], c.s[1]), Math.mix(a.s[2], b.s[2], c.s[2]), Math.mix(a.s[3], b.s[3], c.s[3]));
  }

  public static void mix(Float8 a, Float8 b, Float8 c, Float8 result) {
    result.x = Math.mix(a.x, b.x, c.x);
    result.y = Math.mix(a.y, b.y, c.y);
    result.z = Math.mix(a.z, b.z, c.z);
    result.w = Math.mix(a.w, b.w, c.w);
    result.s[0] = Math.mix(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.mix(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.mix(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.mix(a.s[3], b.s[3], c.s[3]);
  }

  public static Float8 clamp(Float8 v, float min, float max) {
    return new Float8(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max), Math.clamp(v.s[0], min, max), Math.clamp(v.s[1], min, max), Math.clamp(v.s[2], min, max), Math.clamp(v.s[3], min, max));
  }

  public static void clamp(Float8 v, float min, float max, Float8 result) {
    result.x = Math.clamp(v.x, min, max);
    result.y = Math.clamp(v.y, min, max);
    result.z = Math.clamp(v.z, min, max);
    result.w = Math.clamp(v.w, min, max);
    result.s[0] = Math.clamp(v.s[0], min, max);
    result.s[1] = Math.clamp(v.s[1], min, max);
    result.s[2] = Math.clamp(v.s[2], min, max);
    result.s[3] = Math.clamp(v.s[3], min, max);
  }

  public static Float8 max(Float8 x, float y) {
    return new Float8(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y), Math.max(x.s[0], y), Math.max(x.s[1], y), Math.max(x.s[2], y), Math.max(x.s[3], y));
  }

  public static void max(Float8 x, float y, Float8 result) {
    result.x = Math.max(x.x, y);
    result.y = Math.max(x.y, y);
    result.z = Math.max(x.z, y);
    result.w = Math.max(x.w, y);
    result.s[0] = Math.max(x.s[0], y);
    result.s[1] = Math.max(x.s[1], y);
    result.s[2] = Math.max(x.s[2], y);
    result.s[3] = Math.max(x.s[3], y);
  }

  public static Float8 min(Float8 x, float y) {
    return new Float8(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y), Math.min(x.s[0], y), Math.min(x.s[1], y), Math.min(x.s[2], y), Math.min(x.s[3], y));
  }

  public static void min(Float8 x, float y, Float8 result) {
    result.x = Math.min(x.x, y);
    result.y = Math.min(x.y, y);
    result.z = Math.min(x.z, y);
    result.w = Math.min(x.w, y);
    result.s[0] = Math.min(x.s[0], y);
    result.s[1] = Math.min(x.s[1], y);
    result.s[2] = Math.min(x.s[2], y);
    result.s[3] = Math.min(x.s[3], y);
  }

  public static Float8 mix(Float8 x, Float8 y, float a) {
    return new Float8(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a), Math.mix(x.s[0], y.s[0], a), Math.mix(x.s[1], y.s[1], a), Math.mix(x.s[2], y.s[2], a), Math.mix(x.s[3], y.s[3], a));
  }

  public static void mix(Float8 x, Float8 y, float a, Float8 result) {
    result.x = Math.mix(x.x, y.x, a);
    result.y = Math.mix(x.y, y.y, a);
    result.z = Math.mix(x.z, y.z, a);
    result.w = Math.mix(x.w, y.w, a);
    result.s[0] = Math.mix(x.s[0], y.s[0], a);
    result.s[1] = Math.mix(x.s[1], y.s[1], a);
    result.s[2] = Math.mix(x.s[2], y.s[2], a);
    result.s[3] = Math.mix(x.s[3], y.s[3], a);
  }

  public static Float8 acos(Float8 a) {
    return new Float8(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z), Math.acos(a.w), Math.acos(a.s[0]), Math.acos(a.s[1]), Math.acos(a.s[2]), Math.acos(a.s[3]));
  }

  public static void acos(Float8 a, Float8 result) {
    result.x = Math.acos(a.x);
    result.y = Math.acos(a.y);
    result.z = Math.acos(a.z);
    result.w = Math.acos(a.w);
    result.s[0] = Math.acos(a.s[0]);
    result.s[1] = Math.acos(a.s[1]);
    result.s[2] = Math.acos(a.s[2]);
    result.s[3] = Math.acos(a.s[3]);
  }

  public static Float8 acosh(Float8 a) {
    return new Float8(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z), Math.acosh(a.w), Math.acosh(a.s[0]), Math.acosh(a.s[1]), Math.acosh(a.s[2]), Math.acosh(a.s[3]));
  }

  public static void acosh(Float8 a, Float8 result) {
    result.x = Math.acosh(a.x);
    result.y = Math.acosh(a.y);
    result.z = Math.acosh(a.z);
    result.w = Math.acosh(a.w);
    result.s[0] = Math.acosh(a.s[0]);
    result.s[1] = Math.acosh(a.s[1]);
    result.s[2] = Math.acosh(a.s[2]);
    result.s[3] = Math.acosh(a.s[3]);
  }

  public static Float8 asin(Float8 a) {
    return new Float8(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z), Math.asin(a.w), Math.asin(a.s[0]), Math.asin(a.s[1]), Math.asin(a.s[2]), Math.asin(a.s[3]));
  }

  public static void asin(Float8 a, Float8 result) {
    result.x = Math.asin(a.x);
    result.y = Math.asin(a.y);
    result.z = Math.asin(a.z);
    result.w = Math.asin(a.w);
    result.s[0] = Math.asin(a.s[0]);
    result.s[1] = Math.asin(a.s[1]);
    result.s[2] = Math.asin(a.s[2]);
    result.s[3] = Math.asin(a.s[3]);
  }

  public static Float8 asinh(Float8 a) {
    return new Float8(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z), Math.asinh(a.w), Math.asinh(a.s[0]), Math.asinh(a.s[1]), Math.asinh(a.s[2]), Math.asinh(a.s[3]));
  }

  public static void asinh(Float8 a, Float8 result) {
    result.x = Math.asinh(a.x);
    result.y = Math.asinh(a.y);
    result.z = Math.asinh(a.z);
    result.w = Math.asinh(a.w);
    result.s[0] = Math.asinh(a.s[0]);
    result.s[1] = Math.asinh(a.s[1]);
    result.s[2] = Math.asinh(a.s[2]);
    result.s[3] = Math.asinh(a.s[3]);
  }

  public static Float8 atan(Float8 a) {
    return new Float8(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z), Math.atan(a.w), Math.atan(a.s[0]), Math.atan(a.s[1]), Math.atan(a.s[2]), Math.atan(a.s[3]));
  }

  public static void atan(Float8 a, Float8 result) {
    result.x = Math.atan(a.x);
    result.y = Math.atan(a.y);
    result.z = Math.atan(a.z);
    result.w = Math.atan(a.w);
    result.s[0] = Math.atan(a.s[0]);
    result.s[1] = Math.atan(a.s[1]);
    result.s[2] = Math.atan(a.s[2]);
    result.s[3] = Math.atan(a.s[3]);
  }

  public static Float8 atan2(Float8 a, Float8 b) {
    return new Float8(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z), Math.atan2(a.w, b.w), Math.atan2(a.s[0], b.s[0]), Math.atan2(a.s[1], b.s[1]), Math.atan2(a.s[2], b.s[2]), Math.atan2(a.s[3], b.s[3]));
  }

  public static void atan2(Float8 a, Float8 b, Float8 result) {
    result.x = Math.atan2(a.x, b.x);
    result.y = Math.atan2(a.y, b.y);
    result.z = Math.atan2(a.z, b.z);
    result.w = Math.atan2(a.w, b.w);
    result.s[0] = Math.atan2(a.s[0], b.s[0]);
    result.s[1] = Math.atan2(a.s[1], b.s[1]);
    result.s[2] = Math.atan2(a.s[2], b.s[2]);
    result.s[3] = Math.atan2(a.s[3], b.s[3]);
  }

  public static Float8 atanh(Float8 a) {
    return new Float8(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z), Math.atanh(a.w), Math.atanh(a.s[0]), Math.atanh(a.s[1]), Math.atanh(a.s[2]), Math.atanh(a.s[3]));
  }

  public static void atanh(Float8 a, Float8 result) {
    result.x = Math.atanh(a.x);
    result.y = Math.atanh(a.y);
    result.z = Math.atanh(a.z);
    result.w = Math.atanh(a.w);
    result.s[0] = Math.atanh(a.s[0]);
    result.s[1] = Math.atanh(a.s[1]);
    result.s[2] = Math.atanh(a.s[2]);
    result.s[3] = Math.atanh(a.s[3]);
  }

  public static Float8 cbrt(Float8 a) {
    return new Float8(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z), Math.cbrt(a.w), Math.cbrt(a.s[0]), Math.cbrt(a.s[1]), Math.cbrt(a.s[2]), Math.cbrt(a.s[3]));
  }

  public static void cbrt(Float8 a, Float8 result) {
    result.x = Math.cbrt(a.x);
    result.y = Math.cbrt(a.y);
    result.z = Math.cbrt(a.z);
    result.w = Math.cbrt(a.w);
    result.s[0] = Math.cbrt(a.s[0]);
    result.s[1] = Math.cbrt(a.s[1]);
    result.s[2] = Math.cbrt(a.s[2]);
    result.s[3] = Math.cbrt(a.s[3]);
  }

  public static Float8 ceil(Float8 a) {
    return new Float8(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z), Math.ceil(a.w), Math.ceil(a.s[0]), Math.ceil(a.s[1]), Math.ceil(a.s[2]), Math.ceil(a.s[3]));
  }

  public static void ceil(Float8 a, Float8 result) {
    result.x = Math.ceil(a.x);
    result.y = Math.ceil(a.y);
    result.z = Math.ceil(a.z);
    result.w = Math.ceil(a.w);
    result.s[0] = Math.ceil(a.s[0]);
    result.s[1] = Math.ceil(a.s[1]);
    result.s[2] = Math.ceil(a.s[2]);
    result.s[3] = Math.ceil(a.s[3]);
  }

  public static Float8 copySign(Float8 a, Float8 b) {
    return new Float8(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z), Math.copySign(a.w, b.w), Math.copySign(a.s[0], b.s[0]), Math.copySign(a.s[1], b.s[1]), Math.copySign(a.s[2], b.s[2]), Math.copySign(a.s[3], b.s[3]));
  }

  public static void copySign(Float8 a, Float8 b, Float8 result) {
    result.x = Math.copySign(a.x, b.x);
    result.y = Math.copySign(a.y, b.y);
    result.z = Math.copySign(a.z, b.z);
    result.w = Math.copySign(a.w, b.w);
    result.s[0] = Math.copySign(a.s[0], b.s[0]);
    result.s[1] = Math.copySign(a.s[1], b.s[1]);
    result.s[2] = Math.copySign(a.s[2], b.s[2]);
    result.s[3] = Math.copySign(a.s[3], b.s[3]);
  }

  public static Float8 cos(Float8 a) {
    return new Float8(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z), Math.cos(a.w), Math.cos(a.s[0]), Math.cos(a.s[1]), Math.cos(a.s[2]), Math.cos(a.s[3]));
  }

  public static void cos(Float8 a, Float8 result) {
    result.x = Math.cos(a.x);
    result.y = Math.cos(a.y);
    result.z = Math.cos(a.z);
    result.w = Math.cos(a.w);
    result.s[0] = Math.cos(a.s[0]);
    result.s[1] = Math.cos(a.s[1]);
    result.s[2] = Math.cos(a.s[2]);
    result.s[3] = Math.cos(a.s[3]);
  }

  public static Float8 cosh(Float8 a) {
    return new Float8(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z), Math.cosh(a.w), Math.cosh(a.s[0]), Math.cosh(a.s[1]), Math.cosh(a.s[2]), Math.cosh(a.s[3]));
  }

  public static void cosh(Float8 a, Float8 result) {
    result.x = Math.cosh(a.x);
    result.y = Math.cosh(a.y);
    result.z = Math.cosh(a.z);
    result.w = Math.cosh(a.w);
    result.s[0] = Math.cosh(a.s[0]);
    result.s[1] = Math.cosh(a.s[1]);
    result.s[2] = Math.cosh(a.s[2]);
    result.s[3] = Math.cosh(a.s[3]);
  }

  public static Float8 erf(Float8 a) {
    return new Float8(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z), Math.erf(a.w), Math.erf(a.s[0]), Math.erf(a.s[1]), Math.erf(a.s[2]), Math.erf(a.s[3]));
  }

  public static void erf(Float8 a, Float8 result) {
    result.x = Math.erf(a.x);
    result.y = Math.erf(a.y);
    result.z = Math.erf(a.z);
    result.w = Math.erf(a.w);
    result.s[0] = Math.erf(a.s[0]);
    result.s[1] = Math.erf(a.s[1]);
    result.s[2] = Math.erf(a.s[2]);
    result.s[3] = Math.erf(a.s[3]);
  }

  public static Float8 erfc(Float8 a) {
    return new Float8(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z), Math.erfc(a.w), Math.erfc(a.s[0]), Math.erfc(a.s[1]), Math.erfc(a.s[2]), Math.erfc(a.s[3]));
  }

  public static void erfc(Float8 a, Float8 result) {
    result.x = Math.erfc(a.x);
    result.y = Math.erfc(a.y);
    result.z = Math.erfc(a.z);
    result.w = Math.erfc(a.w);
    result.s[0] = Math.erfc(a.s[0]);
    result.s[1] = Math.erfc(a.s[1]);
    result.s[2] = Math.erfc(a.s[2]);
    result.s[3] = Math.erfc(a.s[3]);
  }

  public static Float8 exp(Float8 a) {
    return new Float8(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z), Math.exp(a.w), Math.exp(a.s[0]), Math.exp(a.s[1]), Math.exp(a.s[2]), Math.exp(a.s[3]));
  }

  public static void exp(Float8 a, Float8 result) {
    result.x = Math.exp(a.x);
    result.y = Math.exp(a.y);
    result.z = Math.exp(a.z);
    result.w = Math.exp(a.w);
    result.s[0] = Math.exp(a.s[0]);
    result.s[1] = Math.exp(a.s[1]);
    result.s[2] = Math.exp(a.s[2]);
    result.s[3] = Math.exp(a.s[3]);
  }

  public static Float8 exp10(Float8 a) {
    return new Float8(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z), Math.exp10(a.w), Math.exp10(a.s[0]), Math.exp10(a.s[1]), Math.exp10(a.s[2]), Math.exp10(a.s[3]));
  }

  public static void exp10(Float8 a, Float8 result) {
    result.x = Math.exp10(a.x);
    result.y = Math.exp10(a.y);
    result.z = Math.exp10(a.z);
    result.w = Math.exp10(a.w);
    result.s[0] = Math.exp10(a.s[0]);
    result.s[1] = Math.exp10(a.s[1]);
    result.s[2] = Math.exp10(a.s[2]);
    result.s[3] = Math.exp10(a.s[3]);
  }

  public static Float8 exp2(Float8 a) {
    return new Float8(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z), Math.exp2(a.w), Math.exp2(a.s[0]), Math.exp2(a.s[1]), Math.exp2(a.s[2]), Math.exp2(a.s[3]));
  }

  public static void exp2(Float8 a, Float8 result) {
    result.x = Math.exp2(a.x);
    result.y = Math.exp2(a.y);
    result.z = Math.exp2(a.z);
    result.w = Math.exp2(a.w);
    result.s[0] = Math.exp2(a.s[0]);
    result.s[1] = Math.exp2(a.s[1]);
    result.s[2] = Math.exp2(a.s[2]);
    result.s[3] = Math.exp2(a.s[3]);
  }

  public static Float8 expm1(Float8 a) {
    return new Float8(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z), Math.expm1(a.w), Math.expm1(a.s[0]), Math.expm1(a.s[1]), Math.expm1(a.s[2]), Math.expm1(a.s[3]));
  }

  public static void expm1(Float8 a, Float8 result) {
    result.x = Math.expm1(a.x);
    result.y = Math.expm1(a.y);
    result.z = Math.expm1(a.z);
    result.w = Math.expm1(a.w);
    result.s[0] = Math.expm1(a.s[0]);
    result.s[1] = Math.expm1(a.s[1]);
    result.s[2] = Math.expm1(a.s[2]);
    result.s[3] = Math.expm1(a.s[3]);
  }

  public static Float8 fdim(Float8 a, Float8 b) {
    return new Float8(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z), Math.fdim(a.w, b.w), Math.fdim(a.s[0], b.s[0]), Math.fdim(a.s[1], b.s[1]), Math.fdim(a.s[2], b.s[2]), Math.fdim(a.s[3], b.s[3]));
  }

  public static void fdim(Float8 a, Float8 b, Float8 result) {
    result.x = Math.fdim(a.x, b.x);
    result.y = Math.fdim(a.y, b.y);
    result.z = Math.fdim(a.z, b.z);
    result.w = Math.fdim(a.w, b.w);
    result.s[0] = Math.fdim(a.s[0], b.s[0]);
    result.s[1] = Math.fdim(a.s[1], b.s[1]);
    result.s[2] = Math.fdim(a.s[2], b.s[2]);
    result.s[3] = Math.fdim(a.s[3], b.s[3]);
  }

  public static Float8 floor(Float8 a) {
    return new Float8(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z), Math.floor(a.w), Math.floor(a.s[0]), Math.floor(a.s[1]), Math.floor(a.s[2]), Math.floor(a.s[3]));
  }

  public static void floor(Float8 a, Float8 result) {
    result.x = Math.floor(a.x);
    result.y = Math.floor(a.y);
    result.z = Math.floor(a.z);
    result.w = Math.floor(a.w);
    result.s[0] = Math.floor(a.s[0]);
    result.s[1] = Math.floor(a.s[1]);
    result.s[2] = Math.floor(a.s[2]);
    result.s[3] = Math.floor(a.s[3]);
  }

  public static Float8 fma(Float8 a, Float8 b, Float8 c) {
    return new Float8(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z), Math.fma(a.w, b.w, c.w), Math.fma(a.s[0], b.s[0], c.s[0]), Math.fma(a.s[1], b.s[1], c.s[1]), Math.fma(a.s[2], b.s[2], c.s[2]), Math.fma(a.s[3], b.s[3], c.s[3]));
  }

  public static void fma(Float8 a, Float8 b, Float8 c, Float8 result) {
    result.x = Math.fma(a.x, b.x, c.x);
    result.y = Math.fma(a.y, b.y, c.y);
    result.z = Math.fma(a.z, b.z, c.z);
    result.w = Math.fma(a.w, b.w, c.w);
    result.s[0] = Math.fma(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.fma(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.fma(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.fma(a.s[3], b.s[3], c.s[3]);
  }

  public static Float8 fmod(Float8 a, Float8 b) {
    return new Float8(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z), Math.fmod(a.w, b.w), Math.fmod(a.s[0], b.s[0]), Math.fmod(a.s[1], b.s[1]), Math.fmod(a.s[2], b.s[2]), Math.fmod(a.s[3], b.s[3]));
  }

  public static void fmod(Float8 a, Float8 b, Float8 result) {
    result.x = Math.fmod(a.x, b.x);
    result.y = Math.fmod(a.y, b.y);
    result.z = Math.fmod(a.z, b.z);
    result.w = Math.fmod(a.w, b.w);
    result.s[0] = Math.fmod(a.s[0], b.s[0]);
    result.s[1] = Math.fmod(a.s[1], b.s[1]);
    result.s[2] = Math.fmod(a.s[2], b.s[2]);
    result.s[3] = Math.fmod(a.s[3], b.s[3]);
  }

  public static Float8 fract(Float8 a) {
    return new Float8(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z), Math.fract(a.w), Math.fract(a.s[0]), Math.fract(a.s[1]), Math.fract(a.s[2]), Math.fract(a.s[3]));
  }

  public static void fract(Float8 a, Float8 result) {
    result.x = Math.fract(a.x);
    result.y = Math.fract(a.y);
    result.z = Math.fract(a.z);
    result.w = Math.fract(a.w);
    result.s[0] = Math.fract(a.s[0]);
    result.s[1] = Math.fract(a.s[1]);
    result.s[2] = Math.fract(a.s[2]);
    result.s[3] = Math.fract(a.s[3]);
  }

  public static Float8 frexp(Float8 a) {
    return new Float8(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z), Math.frexp(a.w), Math.frexp(a.s[0]), Math.frexp(a.s[1]), Math.frexp(a.s[2]), Math.frexp(a.s[3]));
  }

  public static void frexp(Float8 a, Float8 result) {
    result.x = Math.frexp(a.x);
    result.y = Math.frexp(a.y);
    result.z = Math.frexp(a.z);
    result.w = Math.frexp(a.w);
    result.s[0] = Math.frexp(a.s[0]);
    result.s[1] = Math.frexp(a.s[1]);
    result.s[2] = Math.frexp(a.s[2]);
    result.s[3] = Math.frexp(a.s[3]);
  }

  public static Float8 getExponent(Float8 a) {
    return new Float8(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z), Math.getExponent(a.w), Math.getExponent(a.s[0]), Math.getExponent(a.s[1]), Math.getExponent(a.s[2]), Math.getExponent(a.s[3]));
  }

  public static void getExponent(Float8 a, Float8 result) {
    result.x = Math.getExponent(a.x);
    result.y = Math.getExponent(a.y);
    result.z = Math.getExponent(a.z);
    result.w = Math.getExponent(a.w);
    result.s[0] = Math.getExponent(a.s[0]);
    result.s[1] = Math.getExponent(a.s[1]);
    result.s[2] = Math.getExponent(a.s[2]);
    result.s[3] = Math.getExponent(a.s[3]);
  }

  public static Float8 hypot(Float8 a, Float8 b) {
    return new Float8(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z), Math.hypot(a.w, b.w), Math.hypot(a.s[0], b.s[0]), Math.hypot(a.s[1], b.s[1]), Math.hypot(a.s[2], b.s[2]), Math.hypot(a.s[3], b.s[3]));
  }

  public static void hypot(Float8 a, Float8 b, Float8 result) {
    result.x = Math.hypot(a.x, b.x);
    result.y = Math.hypot(a.y, b.y);
    result.z = Math.hypot(a.z, b.z);
    result.w = Math.hypot(a.w, b.w);
    result.s[0] = Math.hypot(a.s[0], b.s[0]);
    result.s[1] = Math.hypot(a.s[1], b.s[1]);
    result.s[2] = Math.hypot(a.s[2], b.s[2]);
    result.s[3] = Math.hypot(a.s[3], b.s[3]);
  }

  public static Float8 lgamma(Float8 a) {
    return new Float8(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z), Math.lgamma(a.w), Math.lgamma(a.s[0]), Math.lgamma(a.s[1]), Math.lgamma(a.s[2]), Math.lgamma(a.s[3]));
  }

  public static void lgamma(Float8 a, Float8 result) {
    result.x = Math.lgamma(a.x);
    result.y = Math.lgamma(a.y);
    result.z = Math.lgamma(a.z);
    result.w = Math.lgamma(a.w);
    result.s[0] = Math.lgamma(a.s[0]);
    result.s[1] = Math.lgamma(a.s[1]);
    result.s[2] = Math.lgamma(a.s[2]);
    result.s[3] = Math.lgamma(a.s[3]);
  }

  public static Float8 log(Float8 a) {
    return new Float8(Math.log(a.x), Math.log(a.y), Math.log(a.z), Math.log(a.w), Math.log(a.s[0]), Math.log(a.s[1]), Math.log(a.s[2]), Math.log(a.s[3]));
  }

  public static void log(Float8 a, Float8 result) {
    result.x = Math.log(a.x);
    result.y = Math.log(a.y);
    result.z = Math.log(a.z);
    result.w = Math.log(a.w);
    result.s[0] = Math.log(a.s[0]);
    result.s[1] = Math.log(a.s[1]);
    result.s[2] = Math.log(a.s[2]);
    result.s[3] = Math.log(a.s[3]);
  }

  public static Float8 log10(Float8 a) {
    return new Float8(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z), Math.log10(a.w), Math.log10(a.s[0]), Math.log10(a.s[1]), Math.log10(a.s[2]), Math.log10(a.s[3]));
  }

  public static void log10(Float8 a, Float8 result) {
    result.x = Math.log10(a.x);
    result.y = Math.log10(a.y);
    result.z = Math.log10(a.z);
    result.w = Math.log10(a.w);
    result.s[0] = Math.log10(a.s[0]);
    result.s[1] = Math.log10(a.s[1]);
    result.s[2] = Math.log10(a.s[2]);
    result.s[3] = Math.log10(a.s[3]);
  }

  public static Float8 log1p(Float8 a) {
    return new Float8(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z), Math.log1p(a.w), Math.log1p(a.s[0]), Math.log1p(a.s[1]), Math.log1p(a.s[2]), Math.log1p(a.s[3]));
  }

  public static void log1p(Float8 a, Float8 result) {
    result.x = Math.log1p(a.x);
    result.y = Math.log1p(a.y);
    result.z = Math.log1p(a.z);
    result.w = Math.log1p(a.w);
    result.s[0] = Math.log1p(a.s[0]);
    result.s[1] = Math.log1p(a.s[1]);
    result.s[2] = Math.log1p(a.s[2]);
    result.s[3] = Math.log1p(a.s[3]);
  }

  public static Float8 log2(Float8 a) {
    return new Float8(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z), Math.log2(a.w), Math.log2(a.s[0]), Math.log2(a.s[1]), Math.log2(a.s[2]), Math.log2(a.s[3]));
  }

  public static void log2(Float8 a, Float8 result) {
    result.x = Math.log2(a.x);
    result.y = Math.log2(a.y);
    result.z = Math.log2(a.z);
    result.w = Math.log2(a.w);
    result.s[0] = Math.log2(a.s[0]);
    result.s[1] = Math.log2(a.s[1]);
    result.s[2] = Math.log2(a.s[2]);
    result.s[3] = Math.log2(a.s[3]);
  }

  public static Float8 logb(Float8 a) {
    return new Float8(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z), Math.logb(a.w), Math.logb(a.s[0]), Math.logb(a.s[1]), Math.logb(a.s[2]), Math.logb(a.s[3]));
  }

  public static void logb(Float8 a, Float8 result) {
    result.x = Math.logb(a.x);
    result.y = Math.logb(a.y);
    result.z = Math.logb(a.z);
    result.w = Math.logb(a.w);
    result.s[0] = Math.logb(a.s[0]);
    result.s[1] = Math.logb(a.s[1]);
    result.s[2] = Math.logb(a.s[2]);
    result.s[3] = Math.logb(a.s[3]);
  }

  public static Float8 mad(Float8 a, Float8 b, Float8 c) {
    return new Float8(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z), Math.mad(a.w, b.w, c.w), Math.mad(a.s[0], b.s[0], c.s[0]), Math.mad(a.s[1], b.s[1], c.s[1]), Math.mad(a.s[2], b.s[2], c.s[2]), Math.mad(a.s[3], b.s[3], c.s[3]));
  }

  public static void mad(Float8 a, Float8 b, Float8 c, Float8 result) {
    result.x = Math.mad(a.x, b.x, c.x);
    result.y = Math.mad(a.y, b.y, c.y);
    result.z = Math.mad(a.z, b.z, c.z);
    result.w = Math.mad(a.w, b.w, c.w);
    result.s[0] = Math.mad(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.mad(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.mad(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.mad(a.s[3], b.s[3], c.s[3]);
  }

  public static Float8 nextAfter(Float8 a, Float8 b) {
    return new Float8(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z), Math.nextAfter(a.w, b.w), Math.nextAfter(a.s[0], b.s[0]), Math.nextAfter(a.s[1], b.s[1]), Math.nextAfter(a.s[2], b.s[2]), Math.nextAfter(a.s[3], b.s[3]));
  }

  public static void nextAfter(Float8 a, Float8 b, Float8 result) {
    result.x = Math.nextAfter(a.x, b.x);
    result.y = Math.nextAfter(a.y, b.y);
    result.z = Math.nextAfter(a.z, b.z);
    result.w = Math.nextAfter(a.w, b.w);
    result.s[0] = Math.nextAfter(a.s[0], b.s[0]);
    result.s[1] = Math.nextAfter(a.s[1], b.s[1]);
    result.s[2] = Math.nextAfter(a.s[2], b.s[2]);
    result.s[3] = Math.nextAfter(a.s[3], b.s[3]);
  }

  public static Float8 pow(Float8 a, Float8 b) {
    return new Float8(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z), Math.pow(a.w, b.w), Math.pow(a.s[0], b.s[0]), Math.pow(a.s[1], b.s[1]), Math.pow(a.s[2], b.s[2]), Math.pow(a.s[3], b.s[3]));
  }

  public static void pow(Float8 a, Float8 b, Float8 result) {
    result.x = Math.pow(a.x, b.x);
    result.y = Math.pow(a.y, b.y);
    result.z = Math.pow(a.z, b.z);
    result.w = Math.pow(a.w, b.w);
    result.s[0] = Math.pow(a.s[0], b.s[0]);
    result.s[1] = Math.pow(a.s[1], b.s[1]);
    result.s[2] = Math.pow(a.s[2], b.s[2]);
    result.s[3] = Math.pow(a.s[3], b.s[3]);
  }

  public static Float8 powr(Float8 a, Float8 b) {
    return new Float8(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z), Math.powr(a.w, b.w), Math.powr(a.s[0], b.s[0]), Math.powr(a.s[1], b.s[1]), Math.powr(a.s[2], b.s[2]), Math.powr(a.s[3], b.s[3]));
  }

  public static void powr(Float8 a, Float8 b, Float8 result) {
    result.x = Math.powr(a.x, b.x);
    result.y = Math.powr(a.y, b.y);
    result.z = Math.powr(a.z, b.z);
    result.w = Math.powr(a.w, b.w);
    result.s[0] = Math.powr(a.s[0], b.s[0]);
    result.s[1] = Math.powr(a.s[1], b.s[1]);
    result.s[2] = Math.powr(a.s[2], b.s[2]);
    result.s[3] = Math.powr(a.s[3], b.s[3]);
  }

  public static Float8 remainder(Float8 a, Float8 b) {
    return new Float8(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z), Math.remainder(a.w, b.w), Math.remainder(a.s[0], b.s[0]), Math.remainder(a.s[1], b.s[1]), Math.remainder(a.s[2], b.s[2]), Math.remainder(a.s[3], b.s[3]));
  }

  public static void remainder(Float8 a, Float8 b, Float8 result) {
    result.x = Math.remainder(a.x, b.x);
    result.y = Math.remainder(a.y, b.y);
    result.z = Math.remainder(a.z, b.z);
    result.w = Math.remainder(a.w, b.w);
    result.s[0] = Math.remainder(a.s[0], b.s[0]);
    result.s[1] = Math.remainder(a.s[1], b.s[1]);
    result.s[2] = Math.remainder(a.s[2], b.s[2]);
    result.s[3] = Math.remainder(a.s[3], b.s[3]);
  }

  public static Float8 rint(Float8 a) {
    return new Float8(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z), Math.rint(a.w), Math.rint(a.s[0]), Math.rint(a.s[1]), Math.rint(a.s[2]), Math.rint(a.s[3]));
  }

  public static void rint(Float8 a, Float8 result) {
    result.x = Math.rint(a.x);
    result.y = Math.rint(a.y);
    result.z = Math.rint(a.z);
    result.w = Math.rint(a.w);
    result.s[0] = Math.rint(a.s[0]);
    result.s[1] = Math.rint(a.s[1]);
    result.s[2] = Math.rint(a.s[2]);
    result.s[3] = Math.rint(a.s[3]);
  }

  public static Float8 round(Float8 a) {
    return new Float8(Math.round(a.x), Math.round(a.y), Math.round(a.z), Math.round(a.w), Math.round(a.s[0]), Math.round(a.s[1]), Math.round(a.s[2]), Math.round(a.s[3]));
  }

  public static void round(Float8 a, Float8 result) {
    result.x = Math.round(a.x);
    result.y = Math.round(a.y);
    result.z = Math.round(a.z);
    result.w = Math.round(a.w);
    result.s[0] = Math.round(a.s[0]);
    result.s[1] = Math.round(a.s[1]);
    result.s[2] = Math.round(a.s[2]);
    result.s[3] = Math.round(a.s[3]);
  }

  public static Float8 rsqrt(Float8 a) {
    return new Float8(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z), Math.rsqrt(a.w), Math.rsqrt(a.s[0]), Math.rsqrt(a.s[1]), Math.rsqrt(a.s[2]), Math.rsqrt(a.s[3]));
  }

  public static void rsqrt(Float8 a, Float8 result) {
    result.x = Math.rsqrt(a.x);
    result.y = Math.rsqrt(a.y);
    result.z = Math.rsqrt(a.z);
    result.w = Math.rsqrt(a.w);
    result.s[0] = Math.rsqrt(a.s[0]);
    result.s[1] = Math.rsqrt(a.s[1]);
    result.s[2] = Math.rsqrt(a.s[2]);
    result.s[3] = Math.rsqrt(a.s[3]);
  }

  public static Float8 signum(Float8 a) {
    return new Float8(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z), Math.signum(a.w), Math.signum(a.s[0]), Math.signum(a.s[1]), Math.signum(a.s[2]), Math.signum(a.s[3]));
  }

  public static void signum(Float8 a, Float8 result) {
    result.x = Math.signum(a.x);
    result.y = Math.signum(a.y);
    result.z = Math.signum(a.z);
    result.w = Math.signum(a.w);
    result.s[0] = Math.signum(a.s[0]);
    result.s[1] = Math.signum(a.s[1]);
    result.s[2] = Math.signum(a.s[2]);
    result.s[3] = Math.signum(a.s[3]);
  }

  public static Float8 sin(Float8 a) {
    return new Float8(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z), Math.sin(a.w), Math.sin(a.s[0]), Math.sin(a.s[1]), Math.sin(a.s[2]), Math.sin(a.s[3]));
  }

  public static void sin(Float8 a, Float8 result) {
    result.x = Math.sin(a.x);
    result.y = Math.sin(a.y);
    result.z = Math.sin(a.z);
    result.w = Math.sin(a.w);
    result.s[0] = Math.sin(a.s[0]);
    result.s[1] = Math.sin(a.s[1]);
    result.s[2] = Math.sin(a.s[2]);
    result.s[3] = Math.sin(a.s[3]);
  }

  public static Float8 sinh(Float8 a) {
    return new Float8(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z), Math.sinh(a.w), Math.sinh(a.s[0]), Math.sinh(a.s[1]), Math.sinh(a.s[2]), Math.sinh(a.s[3]));
  }

  public static void sinh(Float8 a, Float8 result) {
    result.x = Math.sinh(a.x);
    result.y = Math.sinh(a.y);
    result.z = Math.sinh(a.z);
    result.w = Math.sinh(a.w);
    result.s[0] = Math.sinh(a.s[0]);
    result.s[1] = Math.sinh(a.s[1]);
    result.s[2] = Math.sinh(a.s[2]);
    result.s[3] = Math.sinh(a.s[3]);
  }

  public static Float8 smoothStep(Float8 a, Float8 b, Float8 c) {
    return new Float8(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z), Math.smoothStep(a.w, b.w, c.w), Math.smoothStep(a.s[0], b.s[0], c.s[0]), Math.smoothStep(a.s[1], b.s[1], c.s[1]), Math.smoothStep(a.s[2], b.s[2], c.s[2]), Math.smoothStep(a.s[3], b.s[3], c.s[3]));
  }

  public static void smoothStep(Float8 a, Float8 b, Float8 c, Float8 result) {
    result.x = Math.smoothStep(a.x, b.x, c.x);
    result.y = Math.smoothStep(a.y, b.y, c.y);
    result.z = Math.smoothStep(a.z, b.z, c.z);
    result.w = Math.smoothStep(a.w, b.w, c.w);
    result.s[0] = Math.smoothStep(a.s[0], b.s[0], c.s[0]);
    result.s[1] = Math.smoothStep(a.s[1], b.s[1], c.s[1]);
    result.s[2] = Math.smoothStep(a.s[2], b.s[2], c.s[2]);
    result.s[3] = Math.smoothStep(a.s[3], b.s[3], c.s[3]);
  }

  public static Float8 sqrt(Float8 a) {
    return new Float8(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z), Math.sqrt(a.w), Math.sqrt(a.s[0]), Math.sqrt(a.s[1]), Math.sqrt(a.s[2]), Math.sqrt(a.s[3]));
  }

  public static void sqrt(Float8 a, Float8 result) {
    result.x = Math.sqrt(a.x);
    result.y = Math.sqrt(a.y);
    result.z = Math.sqrt(a.z);
    result.w = Math.sqrt(a.w);
    result.s[0] = Math.sqrt(a.s[0]);
    result.s[1] = Math.sqrt(a.s[1]);
    result.s[2] = Math.sqrt(a.s[2]);
    result.s[3] = Math.sqrt(a.s[3]);
  }

  public static Float8 step(Float8 a, Float8 b) {
    return new Float8(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z), Math.step(a.w, b.w), Math.step(a.s[0], b.s[0]), Math.step(a.s[1], b.s[1]), Math.step(a.s[2], b.s[2]), Math.step(a.s[3], b.s[3]));
  }

  public static void step(Float8 a, Float8 b, Float8 result) {
    result.x = Math.step(a.x, b.x);
    result.y = Math.step(a.y, b.y);
    result.z = Math.step(a.z, b.z);
    result.w = Math.step(a.w, b.w);
    result.s[0] = Math.step(a.s[0], b.s[0]);
    result.s[1] = Math.step(a.s[1], b.s[1]);
    result.s[2] = Math.step(a.s[2], b.s[2]);
    result.s[3] = Math.step(a.s[3], b.s[3]);
  }

  public static Float8 tan(Float8 a) {
    return new Float8(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z), Math.tan(a.w), Math.tan(a.s[0]), Math.tan(a.s[1]), Math.tan(a.s[2]), Math.tan(a.s[3]));
  }

  public static void tan(Float8 a, Float8 result) {
    result.x = Math.tan(a.x);
    result.y = Math.tan(a.y);
    result.z = Math.tan(a.z);
    result.w = Math.tan(a.w);
    result.s[0] = Math.tan(a.s[0]);
    result.s[1] = Math.tan(a.s[1]);
    result.s[2] = Math.tan(a.s[2]);
    result.s[3] = Math.tan(a.s[3]);
  }

  public static Float8 tanh(Float8 a) {
    return new Float8(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z), Math.tanh(a.w), Math.tanh(a.s[0]), Math.tanh(a.s[1]), Math.tanh(a.s[2]), Math.tanh(a.s[3]));
  }

  public static void tanh(Float8 a, Float8 result) {
    result.x = Math.tanh(a.x);
    result.y = Math.tanh(a.y);
    result.z = Math.tanh(a.z);
    result.w = Math.tanh(a.w);
    result.s[0] = Math.tanh(a.s[0]);
    result.s[1] = Math.tanh(a.s[1]);
    result.s[2] = Math.tanh(a.s[2]);
    result.s[3] = Math.tanh(a.s[3]);
  }

  public static Float8 tgamma(Float8 a) {
    return new Float8(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z), Math.tgamma(a.w), Math.tgamma(a.s[0]), Math.tgamma(a.s[1]), Math.tgamma(a.s[2]), Math.tgamma(a.s[3]));
  }

  public static void tgamma(Float8 a, Float8 result) {
    result.x = Math.tgamma(a.x);
    result.y = Math.tgamma(a.y);
    result.z = Math.tgamma(a.z);
    result.w = Math.tgamma(a.w);
    result.s[0] = Math.tgamma(a.s[0]);
    result.s[1] = Math.tgamma(a.s[1]);
    result.s[2] = Math.tgamma(a.s[2]);
    result.s[3] = Math.tgamma(a.s[3]);
  }

  public static Float8 toDegrees(Float8 a) {
    return new Float8(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z), Math.toDegrees(a.w), Math.toDegrees(a.s[0]), Math.toDegrees(a.s[1]), Math.toDegrees(a.s[2]), Math.toDegrees(a.s[3]));
  }

  public static void toDegrees(Float8 a, Float8 result) {
    result.x = Math.toDegrees(a.x);
    result.y = Math.toDegrees(a.y);
    result.z = Math.toDegrees(a.z);
    result.w = Math.toDegrees(a.w);
    result.s[0] = Math.toDegrees(a.s[0]);
    result.s[1] = Math.toDegrees(a.s[1]);
    result.s[2] = Math.toDegrees(a.s[2]);
    result.s[3] = Math.toDegrees(a.s[3]);
  }

  public static Float8 toRadians(Float8 a) {
    return new Float8(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z), Math.toRadians(a.w), Math.toRadians(a.s[0]), Math.toRadians(a.s[1]), Math.toRadians(a.s[2]), Math.toRadians(a.s[3]));
  }

  public static void toRadians(Float8 a, Float8 result) {
    result.x = Math.toRadians(a.x);
    result.y = Math.toRadians(a.y);
    result.z = Math.toRadians(a.z);
    result.w = Math.toRadians(a.w);
    result.s[0] = Math.toRadians(a.s[0]);
    result.s[1] = Math.toRadians(a.s[1]);
    result.s[2] = Math.toRadians(a.s[2]);
    result.s[3] = Math.toRadians(a.s[3]);
  }

  public static Float8 trunc(Float8 a) {
    return new Float8(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z), Math.trunc(a.w), Math.trunc(a.s[0]), Math.trunc(a.s[1]), Math.trunc(a.s[2]), Math.trunc(a.s[3]));
  }

  public static void trunc(Float8 a, Float8 result) {
    result.x = Math.trunc(a.x);
    result.y = Math.trunc(a.y);
    result.z = Math.trunc(a.z);
    result.w = Math.trunc(a.w);
    result.s[0] = Math.trunc(a.s[0]);
    result.s[1] = Math.trunc(a.s[1]);
    result.s[2] = Math.trunc(a.s[2]);
    result.s[3] = Math.trunc(a.s[3]);
  }

  public static Float8 scalb(Float8 a, Int8 n) {
    return new Float8(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z), Math.scalb(a.w, n.w), Math.scalb(a.s[0], n.s[0]), Math.scalb(a.s[1], n.s[1]), Math.scalb(a.s[2], n.s[2]), Math.scalb(a.s[3], n.s[3]));
  }

  public static void scalb(Float8 a, Int8 n, Float8 result) {
    result.x = Math.scalb(a.x, n.x);
    result.y = Math.scalb(a.y, n.y);
    result.z = Math.scalb(a.z, n.z);
    result.w = Math.scalb(a.w, n.w);
    result.s[0] = Math.scalb(a.s[0], n.s[0]);
    result.s[1] = Math.scalb(a.s[1], n.s[1]);
    result.s[2] = Math.scalb(a.s[2], n.s[2]);
    result.s[3] = Math.scalb(a.s[3], n.s[3]);
  }

  public static Float8 ldexp(Float8 a, Int8 n) {
    return new Float8(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z), Math.ldexp(a.w, n.w), Math.ldexp(a.s[0], n.s[0]), Math.ldexp(a.s[1], n.s[1]), Math.ldexp(a.s[2], n.s[2]), Math.ldexp(a.s[3], n.s[3]));
  }

  public static void ldexp(Float8 a, Int8 n, Float8 result) {
    result.x = Math.ldexp(a.x, n.x);
    result.y = Math.ldexp(a.y, n.y);
    result.z = Math.ldexp(a.z, n.z);
    result.w = Math.ldexp(a.w, n.w);
    result.s[0] = Math.ldexp(a.s[0], n.s[0]);
    result.s[1] = Math.ldexp(a.s[1], n.s[1]);
    result.s[2] = Math.ldexp(a.s[2], n.s[2]);
    result.s[3] = Math.ldexp(a.s[3], n.s[3]);
  }

  public static Float8 pown(Float8 a, Int8 b) {
    return new Float8(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w), Math.pown(a.s[0], b.s[0]), Math.pown(a.s[1], b.s[1]), Math.pown(a.s[2], b.s[2]), Math.pown(a.s[3], b.s[3]));
  }

  public static void pown(Float8 a, Int8 b, Float8 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
    result.z = Math.pown(a.z, b.z);
    result.w = Math.pown(a.w, b.w);
    result.s[0] = Math.pown(a.s[0], b.s[0]);
    result.s[1] = Math.pown(a.s[1], b.s[1]);
    result.s[2] = Math.pown(a.s[2], b.s[2]);
    result.s[3] = Math.pown(a.s[3], b.s[3]);
  }

  public static Float8 rootn(Float8 a, Int8 b) {
    return new Float8(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w), Math.pown(a.s[0], b.s[0]), Math.pown(a.s[1], b.s[1]), Math.pown(a.s[2], b.s[2]), Math.pown(a.s[3], b.s[3]));
  }

  public static void rootn(Float8 a, Int8 b, Float8 result) {
    result.x = Math.pown(a.x, b.x);
    result.y = Math.pown(a.y, b.y);
    result.z = Math.pown(a.z, b.z);
    result.w = Math.pown(a.w, b.w);
    result.s[0] = Math.pown(a.s[0], b.s[0]);
    result.s[1] = Math.pown(a.s[1], b.s[1]);
    result.s[2] = Math.pown(a.s[2], b.s[2]);
    result.s[3] = Math.pown(a.s[3], b.s[3]);
  }

  public static Float8 smoothStep(Float8 a, Float8 b, float c) {
    return new Float8(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c), Math.smoothStep(a.w, b.w, c), Math.smoothStep(a.s[0], b.s[0], c), Math.smoothStep(a.s[1], b.s[1], c), Math.smoothStep(a.s[2], b.s[2], c), Math.smoothStep(a.s[3], b.s[3], c));
  }

  public static void smoothStep(Float8 a, Float8 b, float c, Float8 result) {
    result.x = Math.smoothStep(a.x, b.x, c);
    result.y = Math.smoothStep(a.y, b.y, c);
    result.z = Math.smoothStep(a.z, b.z, c);
    result.w = Math.smoothStep(a.w, b.w, c);
    result.s[0] = Math.smoothStep(a.s[0], b.s[0], c);
    result.s[1] = Math.smoothStep(a.s[1], b.s[1], c);
    result.s[2] = Math.smoothStep(a.s[2], b.s[2], c);
    result.s[3] = Math.smoothStep(a.s[3], b.s[3], c);
  }
}
