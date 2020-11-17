package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Short8 {
  public short x;
  public short y;
  public short z;
  public short w;
  public short[] s = new short[4];

  public Short8 (short x, short y, short z, short w, short s0, short s1, short s2, short s3) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
    this.s[0] = s0;
    this.s[1] = s1;
    this.s[2] = s2;
    this.s[3] = s3;
  }

  public Short8 (short v) {
    this(v, v, v, v, v, v, v, v);
  }

  public Short8 () {
    this((short) 0);
  }

  public Short8 (short x, short y, short z, short w, short s0, short s1, Short2 vec1) {
    this(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public Short8 (short x, short y, short z, short w, short s0, Short2 vec1, short s3) {
    this(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public Short8 (short x, short y, short z, short w, short s0, Short3 vec1) {
    this(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public Short8 (short x, short y, short z, short w, Short2 vec1, short s2, short s3) {
    this(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public Short8 (short x, short y, short z, short w, Short2 vec1, Short2 vec2) {
    this(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Short8 (short x, short y, short z, short w, Short3 vec1, short s3) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public Short8 (short x, short y, short z, short w, Short4 vec1) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Short8 (short x, short y, short z, Short2 vec1, short s1, short s2, short s3) {
    this(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public Short8 (short x, short y, short z, Short2 vec1, short s1, Short2 vec2) {
    this(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public Short8 (short x, short y, short z, Short2 vec1, Short2 vec2, short s3) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public Short8 (short x, short y, short z, Short2 vec1, Short3 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (short x, short y, short z, Short3 vec1, short s2, short s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public Short8 (short x, short y, short z, Short3 vec1, Short2 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public Short8 (short x, short y, short z, Short4 vec1, short s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public Short8 (short x, short y, Short2 vec1, short s0, short s1, short s2, short s3) {
    this(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public Short8 (short x, short y, Short2 vec1, short s0, short s1, Short2 vec2) {
    this(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public Short8 (short x, short y, Short2 vec1, short s0, Short2 vec2, short s3) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public Short8 (short x, short y, Short2 vec1, short s0, Short3 vec2) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (short x, short y, Short2 vec1, Short2 vec2, short s2, short s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public Short8 (short x, short y, Short2 vec1, Short2 vec2, Short2 vec3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Short8 (short x, short y, Short2 vec1, Short3 vec2, short s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public Short8 (short x, short y, Short2 vec1, Short4 vec2) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Short8 (short x, short y, Short3 vec1, short s1, short s2, short s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public Short8 (short x, short y, Short3 vec1, short s1, Short2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public Short8 (short x, short y, Short3 vec1, Short2 vec2, short s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public Short8 (short x, short y, Short3 vec1, Short3 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (short x, short y, Short4 vec1, short s2, short s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public Short8 (short x, short y, Short4 vec1, Short2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public Short8 (short x, Short2 vec1, short w, short s0, short s1, short s2, short s3) {
    this(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public Short8 (short x, Short2 vec1, short w, short s0, short s1, Short2 vec2) {
    this(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public Short8 (short x, Short2 vec1, short w, short s0, Short2 vec2, short s3) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public Short8 (short x, Short2 vec1, short w, short s0, Short3 vec2) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (short x, Short2 vec1, short w, Short2 vec2, short s2, short s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public Short8 (short x, Short2 vec1, short w, Short2 vec2, Short2 vec3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Short8 (short x, Short2 vec1, short w, Short3 vec2, short s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Short8 (short x, Short2 vec1, short w, Short4 vec2) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Short8 (short x, Short2 vec1, Short2 vec2, short s1, short s2, short s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public Short8 (short x, Short2 vec1, Short2 vec2, short s1, Short2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Short8 (short x, Short2 vec1, Short2 vec2, Short2 vec3, short s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Short8 (short x, Short2 vec1, Short2 vec2, Short3 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Short8 (short x, Short2 vec1, Short3 vec2, short s2, short s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Short8 (short x, Short2 vec1, Short3 vec2, Short2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Short8 (short x, Short2 vec1, Short4 vec2, short s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Short8 (short x, Short3 vec1, short s0, short s1, short s2, short s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public Short8 (short x, Short3 vec1, short s0, short s1, Short2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public Short8 (short x, Short3 vec1, short s0, Short2 vec2, short s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public Short8 (short x, Short3 vec1, short s0, Short3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (short x, Short3 vec1, Short2 vec2, short s2, short s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public Short8 (short x, Short3 vec1, Short2 vec2, Short2 vec3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Short8 (short x, Short3 vec1, Short3 vec2, short s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public Short8 (short x, Short3 vec1, Short4 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Short8 (short x, Short4 vec1, short s1, short s2, short s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public Short8 (short x, Short4 vec1, short s1, Short2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public Short8 (short x, Short4 vec1, Short2 vec2, short s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public Short8 (short x, Short4 vec1, Short3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (Short2 vec1, short z, short w, short s0, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public Short8 (Short2 vec1, short z, short w, short s0, short s1, Short2 vec2) {
    this(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public Short8 (Short2 vec1, short z, short w, short s0, Short2 vec2, short s3) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public Short8 (Short2 vec1, short z, short w, short s0, Short3 vec2) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (Short2 vec1, short z, short w, Short2 vec2, short s2, short s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public Short8 (Short2 vec1, short z, short w, Short2 vec2, Short2 vec3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Short8 (Short2 vec1, short z, short w, Short3 vec2, short s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Short8 (Short2 vec1, short z, short w, Short4 vec2) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Short8 (Short2 vec1, short z, Short2 vec2, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Short8 (Short2 vec1, short z, Short2 vec2, short s1, Short2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Short8 (Short2 vec1, short z, Short2 vec2, Short2 vec3, short s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Short8 (Short2 vec1, short z, Short2 vec2, Short3 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Short8 (Short2 vec1, short z, Short3 vec2, short s2, short s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Short8 (Short2 vec1, short z, Short3 vec2, Short2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Short8 (Short2 vec1, short z, Short4 vec2, short s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Short8 (Short2 vec1, Short2 vec2, short s0, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public Short8 (Short2 vec1, Short2 vec2, short s0, short s1, Short2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public Short8 (Short2 vec1, Short2 vec2, short s0, Short2 vec3, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public Short8 (Short2 vec1, Short2 vec2, short s0, Short3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public Short8 (Short2 vec1, Short2 vec2, Short2 vec3, short s2, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public Short8 (Short2 vec1, Short2 vec2, Short2 vec3, Short2 vec4) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public Short8 (Short2 vec1, Short2 vec2, Short3 vec3, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public Short8 (Short2 vec1, Short2 vec2, Short4 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public Short8 (Short2 vec1, Short3 vec2, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public Short8 (Short2 vec1, Short3 vec2, short s1, Short2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public Short8 (Short2 vec1, Short3 vec2, Short2 vec3, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public Short8 (Short2 vec1, Short3 vec2, Short3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public Short8 (Short2 vec1, Short4 vec2, short s2, short s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public Short8 (Short2 vec1, Short4 vec2, Short2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public Short8 (Short3 vec1, short w, short s0, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public Short8 (Short3 vec1, short w, short s0, short s1, Short2 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public Short8 (Short3 vec1, short w, short s0, Short2 vec2, short s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public Short8 (Short3 vec1, short w, short s0, Short3 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (Short3 vec1, short w, Short2 vec2, short s2, short s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public Short8 (Short3 vec1, short w, Short2 vec2, Short2 vec3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Short8 (Short3 vec1, short w, Short3 vec2, short s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Short8 (Short3 vec1, short w, Short4 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Short8 (Short3 vec1, Short2 vec2, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Short8 (Short3 vec1, Short2 vec2, short s1, Short2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Short8 (Short3 vec1, Short2 vec2, Short2 vec3, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Short8 (Short3 vec1, Short2 vec2, Short3 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Short8 (Short3 vec1, Short3 vec2, short s2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Short8 (Short3 vec1, Short3 vec2, Short2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Short8 (Short3 vec1, Short4 vec2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Short8 (Short4 vec1, short s0, short s1, short s2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public Short8 (Short4 vec1, short s0, short s1, Short2 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public Short8 (Short4 vec1, short s0, Short2 vec2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public Short8 (Short4 vec1, short s0, Short3 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Short8 (Short4 vec1, Short2 vec2, short s2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public Short8 (Short4 vec1, Short2 vec2, Short2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Short8 (Short4 vec1, Short3 vec2, short s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Short8 (Short4 vec1, Short4 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Short8 (Short8 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public Short4 lo () {
    return new Short4(x, y, z, w);
  }

  public Short4 hi () {
    return new Short4(s[0], s[1], s[2], s[3]);
  }

  public Short4 odd () {
    return new Short4(y, w, s[1], s[3]);
  }

  public Short4 even () {
    return new Short4(x, z, s[0], s[2]);
  }

  public Byte8 convertByte8 () {
    return new Byte8((byte) x, (byte) y, (byte) z, (byte) w, (byte) s[0], (byte) s[1], (byte) s[2], (byte) s[3]);
  }

  public Int8 convertInt8 () {
    return new Int8((int) x, (int) y, (int) z, (int) w, (int) s[0], (int) s[1], (int) s[2], (int) s[3]);
  }

  public Long8 convertLong8 () {
    return new Long8((long) x, (long) y, (long) z, (long) w, (long) s[0], (long) s[1], (long) s[2], (long) s[3]);
  }

  public Float8 convertFloat8 () {
    return new Float8((float) x, (float) y, (float) z, (float) w, (float) s[0], (float) s[1], (float) s[2], (float) s[3]);
  }

  public Double8 convertDouble8 () {
    return new Double8((double) x, (double) y, (double) z, (double) w, (double) s[0], (double) s[1], (double) s[2], (double) s[3]);
  }

  public Short2 asShort2 () {
    return new Short2(x, y);
  }

  public Short3 asShort3 () {
    return new Short3(x, y, z);
  }

  public Short4 asShort4 () {
    return new Short4(x, y, z, w);
  }

  public static Int8 isEqual (Short8 a, Short8 b) {
    return new Int8(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
  }

  public static Int8 isNotEqual (Short8 a, Short8 b) {
    return new Int8(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
  }

  public static Int8 isGreater (Short8 a, Short8 b) {
    return new Int8(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
  }

  public static Int8 isGreaterEqual (Short8 a, Short8 b) {
    return new Int8(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
  }

  public static Int8 isLess (Short8 a, Short8 b) {
    return new Int8(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
  }

  public static Int8 isLessEqual (Short8 a, Short8 b) {
    return new Int8(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
  }

  public static Short8 select (Short8 a, Short8 b, Int8 c) {
    return new Short8(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w), Math.select(a.s[0], b.s[0], c.s[0]), Math.select(a.s[1], b.s[1], c.s[1]), Math.select(a.s[2], b.s[2], c.s[2]), Math.select(a.s[3], b.s[3], c.s[3]));
  }

  public static int any (Short8 a) {
    return (a.x != (short) 0 || a.y != (short) 0 || a.z != (short) 0 || a.w != (short) 0 || a.s[0] != (short) 0 || a.s[1] != (short) 0 || a.s[2] != (short) 0 || a.s[3] != (short) 0)? 1 : 0;
  }

  public static int all (Short8 a) {
    return (a.x == (short) 0 || a.y == (short) 0 || a.z == (short) 0 || a.w == (short) 0 || a.s[0] == (short) 0 || a.s[1] == (short) 0 || a.s[2] == (short) 0 || a.s[3] == (short) 0)? 1 : 0;
  }

  public static Short8 add (Short8 a, Short8 b) {
    return new Short8((short)(a.x + b.x), (short)(a.y + b.y), (short)(a.z + b.z), (short)(a.w + b.w), (short)(a.s[0] + b.s[0]), (short)(a.s[1] + b.s[1]), (short)(a.s[2] + b.s[2]), (short)(a.s[3] + b.s[3]));
  }

  public static Short8 sub (Short8 a, Short8 b) {
    return new Short8((short)(a.x - b.x), (short)(a.y - b.y), (short)(a.z - b.z), (short)(a.w - b.w), (short)(a.s[0] - b.s[0]), (short)(a.s[1] - b.s[1]), (short)(a.s[2] - b.s[2]), (short)(a.s[3] - b.s[3]));
  }

  public static Double8 mul (Short8 a, Double8 b) {
    return new Double8((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w), (double)(a.s[0] * b.s[0]), (double)(a.s[1] * b.s[1]), (double)(a.s[2] * b.s[2]), (double)(a.s[3] * b.s[3]));
  }

  public static Double8 mul (Short8 a, double k) {
    return new Double8((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k), (double)(a.s[0] * k), (double)(a.s[1] * k), (double)(a.s[2] * k), (double)(a.s[3] * k));
  }

  public static Float8 mul (Short8 a, Float8 b) {
    return new Float8((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w), (float)(a.s[0] * b.s[0]), (float)(a.s[1] * b.s[1]), (float)(a.s[2] * b.s[2]), (float)(a.s[3] * b.s[3]));
  }

  public static Float8 mul (Short8 a, float k) {
    return new Float8((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k), (float)(a.s[0] * k), (float)(a.s[1] * k), (float)(a.s[2] * k), (float)(a.s[3] * k));
  }

  public static Short8 mul (Short8 a, Short8 b) {
    return new Short8((short)(a.x * b.x), (short)(a.y * b.y), (short)(a.z * b.z), (short)(a.w * b.w), (short)(a.s[0] * b.s[0]), (short)(a.s[1] * b.s[1]), (short)(a.s[2] * b.s[2]), (short)(a.s[3] * b.s[3]));
  }

  public static Short8 mul (Short8 a, short k) {
    return new Short8((short)(a.x * k), (short)(a.y * k), (short)(a.z * k), (short)(a.w * k), (short)(a.s[0] * k), (short)(a.s[1] * k), (short)(a.s[2] * k), (short)(a.s[3] * k));
  }

  public static Double8 div (Short8 a, Double8 b) {
    return new Double8((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w), (double)(a.s[0] / b.s[0]), (double)(a.s[1] / b.s[1]), (double)(a.s[2] / b.s[2]), (double)(a.s[3] / b.s[3]));
  }

  public static Double8 div (Short8 a, double k) {
    return new Double8((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k), (double)(a.s[0] / k), (double)(a.s[1] / k), (double)(a.s[2] / k), (double)(a.s[3] / k));
  }

  public static Float8 div (Short8 a, Float8 b) {
    return new Float8((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w), (float)(a.s[0] / b.s[0]), (float)(a.s[1] / b.s[1]), (float)(a.s[2] / b.s[2]), (float)(a.s[3] / b.s[3]));
  }

  public static Float8 div (Short8 a, float k) {
    return new Float8((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k), (float)(a.s[0] / k), (float)(a.s[1] / k), (float)(a.s[2] / k), (float)(a.s[3] / k));
  }

  public static Short8 div (Short8 a, Short8 b) {
    return new Short8((short)(a.x / b.x), (short)(a.y / b.y), (short)(a.z / b.z), (short)(a.w / b.w), (short)(a.s[0] / b.s[0]), (short)(a.s[1] / b.s[1]), (short)(a.s[2] / b.s[2]), (short)(a.s[3] / b.s[3]));
  }

  public static Short8 div (Short8 a, short k) {
    return new Short8((short)(a.x / k), (short)(a.y / k), (short)(a.z / k), (short)(a.w / k), (short)(a.s[0] / k), (short)(a.s[1] / k), (short)(a.s[2] / k), (short)(a.s[3] / k));
  }

  public static Short8 mod (Short8 a, Short8 b) {
    return new Short8((short)(a.x % b.x), (short)(a.y % b.y), (short)(a.z % b.z), (short)(a.w % b.w), (short)(a.s[0] % b.s[0]), (short)(a.s[1] % b.s[1]), (short)(a.s[2] % b.s[2]), (short)(a.s[3] % b.s[3]));
  }

  public static Short8 mod (Short8 a, short k) {
    return new Short8((short)(a.x % k), (short)(a.y % k), (short)(a.z % k), (short)(a.w % k), (short)(a.s[0] % k), (short)(a.s[1] % k), (short)(a.s[2] % k), (short)(a.s[3] % k));
  }

  public static Short8 bitAnd (Short8 a, Short8 b) {
    return new Short8((short)(a.x & b.x), (short)(a.y & b.y), (short)(a.z & b.z), (short)(a.w & b.w), (short)(a.s[0] & b.s[0]), (short)(a.s[1] & b.s[1]), (short)(a.s[2] & b.s[2]), (short)(a.s[3] & b.s[3]));
  }

  public static Short8 bitOr (Short8 a, Short8 b) {
    return new Short8((short)(a.x | b.x), (short)(a.y | b.y), (short)(a.z | b.z), (short)(a.w | b.w), (short)(a.s[0] | b.s[0]), (short)(a.s[1] | b.s[1]), (short)(a.s[2] | b.s[2]), (short)(a.s[3] | b.s[3]));
  }

  public static Short8 bitXor (Short8 a, Short8 b) {
    return new Short8((short)(a.x ^ b.x), (short)(a.y ^ b.y), (short)(a.z ^ b.z), (short)(a.w ^ b.w), (short)(a.s[0] ^ b.s[0]), (short)(a.s[1] ^ b.s[1]), (short)(a.s[2] ^ b.s[2]), (short)(a.s[3] ^ b.s[3]));
  }

  public static Short8 bitNot (Short8 a) {
    return new Short8((short)(~a.x), (short)(~a.y), (short)(~a.z), (short)(~a.w), (short)(~a.s[0]), (short)(~a.s[1]), (short)(~a.s[2]), (short)(~a.s[3]));
  }

  public static Short8 abs (Short8 a) {
    return new Short8(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w), Math.abs(a.s[0]), Math.abs(a.s[1]), Math.abs(a.s[2]), Math.abs(a.s[3]));
  }

  public static Short8 clamp (Short8 a, Short8 b, Short8 c) {
    return new Short8(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w), Math.clamp(a.s[0], b.s[0], c.s[0]), Math.clamp(a.s[1], b.s[1], c.s[1]), Math.clamp(a.s[2], b.s[2], c.s[2]), Math.clamp(a.s[3], b.s[3], c.s[3]));
  }

  public static Short8 max (Short8 a, Short8 b) {
    return new Short8(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w), Math.max(a.s[0], b.s[0]), Math.max(a.s[1], b.s[1]), Math.max(a.s[2], b.s[2]), Math.max(a.s[3], b.s[3]));
  }

  public static Short8 maxMag (Short8 a, Short8 b) {
    return new Short8(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w), Math.maxMag(a.s[0], b.s[0]), Math.maxMag(a.s[1], b.s[1]), Math.maxMag(a.s[2], b.s[2]), Math.maxMag(a.s[3], b.s[3]));
  }

  public static Short8 min (Short8 a, Short8 b) {
    return new Short8(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w), Math.min(a.s[0], b.s[0]), Math.min(a.s[1], b.s[1]), Math.min(a.s[2], b.s[2]), Math.min(a.s[3], b.s[3]));
  }

  public static Short8 minMag (Short8 a, Short8 b) {
    return new Short8(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w), Math.minMag(a.s[0], b.s[0]), Math.minMag(a.s[1], b.s[1]), Math.minMag(a.s[2], b.s[2]), Math.minMag(a.s[3], b.s[3]));
  }

  public static Short8 mix (Short8 a, Short8 b, Short8 c) {
    return new Short8(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w), Math.mix(a.s[0], b.s[0], c.s[0]), Math.mix(a.s[1], b.s[1], c.s[1]), Math.mix(a.s[2], b.s[2], c.s[2]), Math.mix(a.s[3], b.s[3], c.s[3]));
  }

  public static Short8 clamp (Short8 v, short min, short max) {
    return new Short8(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max), Math.clamp(v.s[0], min, max), Math.clamp(v.s[1], min, max), Math.clamp(v.s[2], min, max), Math.clamp(v.s[3], min, max));
  }

  public static Short8 max (Short8 x, short y) {
    return new Short8(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y), Math.max(x.s[0], y), Math.max(x.s[1], y), Math.max(x.s[2], y), Math.max(x.s[3], y));
  }

  public static Short8 min (Short8 x, short y) {
    return new Short8(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y), Math.min(x.s[0], y), Math.min(x.s[1], y), Math.min(x.s[2], y), Math.min(x.s[3], y));
  }

  public static Short8 mix (Short8 x, Short8 y, short a) {
    return new Short8(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a), Math.mix(x.s[0], y.s[0], a), Math.mix(x.s[1], y.s[1], a), Math.mix(x.s[2], y.s[2], a), Math.mix(x.s[3], y.s[3], a));
  }

  public static Short8 absDiff (Short8 a, Short8 b) {
    return new Short8(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w), Math.absDiff(a.s[0], b.s[0]), Math.absDiff(a.s[1], b.s[1]), Math.absDiff(a.s[2], b.s[2]), Math.absDiff(a.s[3], b.s[3]));
  }

  public static Short8 addSat (Short8 a, Short8 b) {
    return new Short8(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w), Math.addSat(a.s[0], b.s[0]), Math.addSat(a.s[1], b.s[1]), Math.addSat(a.s[2], b.s[2]), Math.addSat(a.s[3], b.s[3]));
  }

  public static Short8 clz (Short8 a) {
    return new Short8(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w), Math.clz(a.s[0]), Math.clz(a.s[1]), Math.clz(a.s[2]), Math.clz(a.s[3]));
  }

  public static Short8 hadd (Short8 a, Short8 b) {
    return new Short8(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w), Math.hadd(a.s[0], b.s[0]), Math.hadd(a.s[1], b.s[1]), Math.hadd(a.s[2], b.s[2]), Math.hadd(a.s[3], b.s[3]));
  }

  public static Short8 madHi (Short8 a, Short8 b, Short8 c) {
    return new Short8(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w), Math.madHi(a.s[0], b.s[0], c.s[0]), Math.madHi(a.s[1], b.s[1], c.s[1]), Math.madHi(a.s[2], b.s[2], c.s[2]), Math.madHi(a.s[3], b.s[3], c.s[3]));
  }

  public static Short8 madSat (Short8 a, Short8 b, Short8 c) {
    return new Short8(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w), Math.madSat(a.s[0], b.s[0], c.s[0]), Math.madSat(a.s[1], b.s[1], c.s[1]), Math.madSat(a.s[2], b.s[2], c.s[2]), Math.madSat(a.s[3], b.s[3], c.s[3]));
  }

  public static Short8 mulHi (Short8 a, Short8 b) {
    return new Short8(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w), Math.mulHi(a.s[0], b.s[0]), Math.mulHi(a.s[1], b.s[1]), Math.mulHi(a.s[2], b.s[2]), Math.mulHi(a.s[3], b.s[3]));
  }

  public static Short8 rhadd (Short8 a, Short8 b) {
    return new Short8(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w), Math.rhadd(a.s[0], b.s[0]), Math.rhadd(a.s[1], b.s[1]), Math.rhadd(a.s[2], b.s[2]), Math.rhadd(a.s[3], b.s[3]));
  }

  public static Short8 rotate (Short8 a, Short8 b) {
    return new Short8(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w), Math.rotate(a.s[0], b.s[0]), Math.rotate(a.s[1], b.s[1]), Math.rotate(a.s[2], b.s[2]), Math.rotate(a.s[3], b.s[3]));
  }

  public static Short8 subSat (Short8 a, Short8 b) {
    return new Short8(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w), Math.subSat(a.s[0], b.s[0]), Math.subSat(a.s[1], b.s[1]), Math.subSat(a.s[2], b.s[2]), Math.subSat(a.s[3], b.s[3]));
  }
}
