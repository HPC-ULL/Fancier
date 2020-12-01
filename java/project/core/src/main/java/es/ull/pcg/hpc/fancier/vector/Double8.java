package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Double8 {
  public double x;
  public double y;
  public double z;
  public double w;
  public double[] s = new double[4];

  public Double8(double x, double y, double z, double w, double s0, double s1, double s2, double s3) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
    this.s[0] = s0;
    this.s[1] = s1;
    this.s[2] = s2;
    this.s[3] = s3;
  }

  public Double8(double v) {
    this(v, v, v, v, v, v, v, v);
  }

  public Double8() {
    this((double) 0);
  }

  public Double8(double x, double y, double z, double w, double s0, double s1, Double2 vec1) {
    this(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public Double8(double x, double y, double z, double w, double s0, Double2 vec1, double s3) {
    this(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public Double8(double x, double y, double z, double w, double s0, Double3 vec1) {
    this(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public Double8(double x, double y, double z, double w, Double2 vec1, double s2, double s3) {
    this(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public Double8(double x, double y, double z, double w, Double2 vec1, Double2 vec2) {
    this(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Double8(double x, double y, double z, double w, Double3 vec1, double s3) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public Double8(double x, double y, double z, double w, Double4 vec1) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Double8(double x, double y, double z, Double2 vec1, double s1, double s2, double s3) {
    this(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public Double8(double x, double y, double z, Double2 vec1, double s1, Double2 vec2) {
    this(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public Double8(double x, double y, double z, Double2 vec1, Double2 vec2, double s3) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public Double8(double x, double y, double z, Double2 vec1, Double3 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public Double8(double x, double y, double z, Double3 vec1, double s2, double s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public Double8(double x, double y, double z, Double3 vec1, Double2 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public Double8(double x, double y, double z, Double4 vec1, double s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public Double8(double x, double y, Double2 vec1, double s0, double s1, double s2, double s3) {
    this(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public Double8(double x, double y, Double2 vec1, double s0, double s1, Double2 vec2) {
    this(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public Double8(double x, double y, Double2 vec1, double s0, Double2 vec2, double s3) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public Double8(double x, double y, Double2 vec1, double s0, Double3 vec2) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public Double8(double x, double y, Double2 vec1, Double2 vec2, double s2, double s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public Double8(double x, double y, Double2 vec1, Double2 vec2, Double2 vec3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Double8(double x, double y, Double2 vec1, Double3 vec2, double s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public Double8(double x, double y, Double2 vec1, Double4 vec2) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Double8(double x, double y, Double3 vec1, double s1, double s2, double s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public Double8(double x, double y, Double3 vec1, double s1, Double2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public Double8(double x, double y, Double3 vec1, Double2 vec2, double s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public Double8(double x, double y, Double3 vec1, Double3 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public Double8(double x, double y, Double4 vec1, double s2, double s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public Double8(double x, double y, Double4 vec1, Double2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public Double8(double x, Double2 vec1, double w, double s0, double s1, double s2, double s3) {
    this(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public Double8(double x, Double2 vec1, double w, double s0, double s1, Double2 vec2) {
    this(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public Double8(double x, Double2 vec1, double w, double s0, Double2 vec2, double s3) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public Double8(double x, Double2 vec1, double w, double s0, Double3 vec2) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Double8(double x, Double2 vec1, double w, Double2 vec2, double s2, double s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public Double8(double x, Double2 vec1, double w, Double2 vec2, Double2 vec3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Double8(double x, Double2 vec1, double w, Double3 vec2, double s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Double8(double x, Double2 vec1, double w, Double4 vec2) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Double8(double x, Double2 vec1, Double2 vec2, double s1, double s2, double s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public Double8(double x, Double2 vec1, Double2 vec2, double s1, Double2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Double8(double x, Double2 vec1, Double2 vec2, Double2 vec3, double s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Double8(double x, Double2 vec1, Double2 vec2, Double3 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Double8(double x, Double2 vec1, Double3 vec2, double s2, double s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Double8(double x, Double2 vec1, Double3 vec2, Double2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Double8(double x, Double2 vec1, Double4 vec2, double s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Double8(double x, Double3 vec1, double s0, double s1, double s2, double s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public Double8(double x, Double3 vec1, double s0, double s1, Double2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public Double8(double x, Double3 vec1, double s0, Double2 vec2, double s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public Double8(double x, Double3 vec1, double s0, Double3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public Double8(double x, Double3 vec1, Double2 vec2, double s2, double s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public Double8(double x, Double3 vec1, Double2 vec2, Double2 vec3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Double8(double x, Double3 vec1, Double3 vec2, double s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public Double8(double x, Double3 vec1, Double4 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Double8(double x, Double4 vec1, double s1, double s2, double s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public Double8(double x, Double4 vec1, double s1, Double2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public Double8(double x, Double4 vec1, Double2 vec2, double s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public Double8(double x, Double4 vec1, Double3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public Double8(Double2 vec1, double z, double w, double s0, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public Double8(Double2 vec1, double z, double w, double s0, double s1, Double2 vec2) {
    this(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public Double8(Double2 vec1, double z, double w, double s0, Double2 vec2, double s3) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public Double8(Double2 vec1, double z, double w, double s0, Double3 vec2) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Double8(Double2 vec1, double z, double w, Double2 vec2, double s2, double s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public Double8(Double2 vec1, double z, double w, Double2 vec2, Double2 vec3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Double8(Double2 vec1, double z, double w, Double3 vec2, double s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Double8(Double2 vec1, double z, double w, Double4 vec2) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Double8(Double2 vec1, double z, Double2 vec2, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Double8(Double2 vec1, double z, Double2 vec2, double s1, Double2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Double8(Double2 vec1, double z, Double2 vec2, Double2 vec3, double s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Double8(Double2 vec1, double z, Double2 vec2, Double3 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Double8(Double2 vec1, double z, Double3 vec2, double s2, double s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Double8(Double2 vec1, double z, Double3 vec2, Double2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Double8(Double2 vec1, double z, Double4 vec2, double s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Double8(Double2 vec1, Double2 vec2, double s0, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public Double8(Double2 vec1, Double2 vec2, double s0, double s1, Double2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public Double8(Double2 vec1, Double2 vec2, double s0, Double2 vec3, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public Double8(Double2 vec1, Double2 vec2, double s0, Double3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public Double8(Double2 vec1, Double2 vec2, Double2 vec3, double s2, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public Double8(Double2 vec1, Double2 vec2, Double2 vec3, Double2 vec4) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public Double8(Double2 vec1, Double2 vec2, Double3 vec3, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public Double8(Double2 vec1, Double2 vec2, Double4 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public Double8(Double2 vec1, Double3 vec2, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public Double8(Double2 vec1, Double3 vec2, double s1, Double2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public Double8(Double2 vec1, Double3 vec2, Double2 vec3, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public Double8(Double2 vec1, Double3 vec2, Double3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public Double8(Double2 vec1, Double4 vec2, double s2, double s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public Double8(Double2 vec1, Double4 vec2, Double2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public Double8(Double3 vec1, double w, double s0, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public Double8(Double3 vec1, double w, double s0, double s1, Double2 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public Double8(Double3 vec1, double w, double s0, Double2 vec2, double s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public Double8(Double3 vec1, double w, double s0, Double3 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Double8(Double3 vec1, double w, Double2 vec2, double s2, double s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public Double8(Double3 vec1, double w, Double2 vec2, Double2 vec3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Double8(Double3 vec1, double w, Double3 vec2, double s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Double8(Double3 vec1, double w, Double4 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Double8(Double3 vec1, Double2 vec2, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Double8(Double3 vec1, Double2 vec2, double s1, Double2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Double8(Double3 vec1, Double2 vec2, Double2 vec3, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Double8(Double3 vec1, Double2 vec2, Double3 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Double8(Double3 vec1, Double3 vec2, double s2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Double8(Double3 vec1, Double3 vec2, Double2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Double8(Double3 vec1, Double4 vec2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Double8(Double4 vec1, double s0, double s1, double s2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public Double8(Double4 vec1, double s0, double s1, Double2 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public Double8(Double4 vec1, double s0, Double2 vec2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public Double8(Double4 vec1, double s0, Double3 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Double8(Double4 vec1, Double2 vec2, double s2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public Double8(Double4 vec1, Double2 vec2, Double2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Double8(Double4 vec1, Double3 vec2, double s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Double8(Double4 vec1, Double4 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Double8(Double8 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public Double4 lo() {
    return new Double4(x, y, z, w);
  }

  public Double4 hi() {
    return new Double4(s[0], s[1], s[2], s[3]);
  }

  public Double4 odd() {
    return new Double4(y, w, s[1], s[3]);
  }

  public Double4 even() {
    return new Double4(x, z, s[0], s[2]);
  }

  public Byte8 convertByte8() {
    return new Byte8((byte) x, (byte) y, (byte) z, (byte) w, (byte) s[0], (byte) s[1], (byte) s[2], (byte) s[3]);
  }

  public Short8 convertShort8() {
    return new Short8((short) x, (short) y, (short) z, (short) w, (short) s[0], (short) s[1], (short) s[2], (short) s[3]);
  }

  public Int8 convertInt8() {
    return new Int8((int) x, (int) y, (int) z, (int) w, (int) s[0], (int) s[1], (int) s[2], (int) s[3]);
  }

  public Long8 convertLong8() {
    return new Long8((long) x, (long) y, (long) z, (long) w, (long) s[0], (long) s[1], (long) s[2], (long) s[3]);
  }

  public Float8 convertFloat8() {
    return new Float8((float) x, (float) y, (float) z, (float) w, (float) s[0], (float) s[1], (float) s[2], (float) s[3]);
  }

  public Double2 asDouble2() {
    return new Double2(x, y);
  }

  public Double3 asDouble3() {
    return new Double3(x, y, z);
  }

  public Double4 asDouble4() {
    return new Double4(x, y, z, w);
  }

  public static Int8 isEqual(Double8 a, Double8 b) {
    return new Int8(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
  }

  public static Int8 isNotEqual(Double8 a, Double8 b) {
    return new Int8(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
  }

  public static Int8 isGreater(Double8 a, Double8 b) {
    return new Int8(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
  }

  public static Int8 isGreaterEqual(Double8 a, Double8 b) {
    return new Int8(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
  }

  public static Int8 isLess(Double8 a, Double8 b) {
    return new Int8(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
  }

  public static Int8 isLessEqual(Double8 a, Double8 b) {
    return new Int8(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
  }

  public static Double8 select(Double8 a, Double8 b, Int8 c) {
    return new Double8(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w), Math.select(a.s[0], b.s[0], c.s[0]), Math.select(a.s[1], b.s[1], c.s[1]), Math.select(a.s[2], b.s[2], c.s[2]), Math.select(a.s[3], b.s[3], c.s[3]));
  }

  public static Int8 isFinite(Double8 a) {
    return new Int8(Math.isFinite(a.x), Math.isFinite(a.y), Math.isFinite(a.z), Math.isFinite(a.w), Math.isFinite(a.s[0]), Math.isFinite(a.s[1]), Math.isFinite(a.s[2]), Math.isFinite(a.s[3]));
  }

  public static Int8 isInf(Double8 a) {
    return new Int8(Math.isInf(a.x), Math.isInf(a.y), Math.isInf(a.z), Math.isInf(a.w), Math.isInf(a.s[0]), Math.isInf(a.s[1]), Math.isInf(a.s[2]), Math.isInf(a.s[3]));
  }

  public static Int8 isNaN(Double8 a) {
    return new Int8(Math.isNaN(a.x), Math.isNaN(a.y), Math.isNaN(a.z), Math.isNaN(a.w), Math.isNaN(a.s[0]), Math.isNaN(a.s[1]), Math.isNaN(a.s[2]), Math.isNaN(a.s[3]));
  }

  public static Int8 isNormal(Double8 a) {
    return new Int8(Math.isNormal(a.x), Math.isNormal(a.y), Math.isNormal(a.z), Math.isNormal(a.w), Math.isNormal(a.s[0]), Math.isNormal(a.s[1]), Math.isNormal(a.s[2]), Math.isNormal(a.s[3]));
  }

  public static Int8 isOrdered(Double8 a, Double8 b) {
    return new Int8(Math.isOrdered(a.x, b.x), Math.isOrdered(a.y, b.y), Math.isOrdered(a.z, b.z), Math.isOrdered(a.w, b.w), Math.isOrdered(a.s[0], b.s[0]), Math.isOrdered(a.s[1], b.s[1]), Math.isOrdered(a.s[2], b.s[2]), Math.isOrdered(a.s[3], b.s[3]));
  }

  public static Int8 isUnordered(Double8 a, Double8 b) {
    return new Int8(Math.isUnordered(a.x, b.x), Math.isUnordered(a.y, b.y), Math.isUnordered(a.z, b.z), Math.isUnordered(a.w, b.w), Math.isUnordered(a.s[0], b.s[0]), Math.isUnordered(a.s[1], b.s[1]), Math.isUnordered(a.s[2], b.s[2]), Math.isUnordered(a.s[3], b.s[3]));
  }

  public static int any(Double8 a) {
    return (a.x != 0.0 || a.y != 0.0 || a.z != 0.0 || a.w != 0.0 || a.s[0] != 0.0 || a.s[1] != 0.0 || a.s[2] != 0.0 || a.s[3] != 0.0)? 1 : 0;
  }

  public static int all(Double8 a) {
    return (a.x == 0.0 || a.y == 0.0 || a.z == 0.0 || a.w == 0.0 || a.s[0] == 0.0 || a.s[1] == 0.0 || a.s[2] == 0.0 || a.s[3] == 0.0)? 1 : 0;
  }

  public static Double8 add(Double8 a, Double8 b) {
    return new Double8((double)(a.x + b.x), (double)(a.y + b.y), (double)(a.z + b.z), (double)(a.w + b.w), (double)(a.s[0] + b.s[0]), (double)(a.s[1] + b.s[1]), (double)(a.s[2] + b.s[2]), (double)(a.s[3] + b.s[3]));
  }

  public static Double8 sub(Double8 a, Double8 b) {
    return new Double8((double)(a.x - b.x), (double)(a.y - b.y), (double)(a.z - b.z), (double)(a.w - b.w), (double)(a.s[0] - b.s[0]), (double)(a.s[1] - b.s[1]), (double)(a.s[2] - b.s[2]), (double)(a.s[3] - b.s[3]));
  }

  public static Double8 mul(Double8 a, Double8 b) {
    return new Double8((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w), (double)(a.s[0] * b.s[0]), (double)(a.s[1] * b.s[1]), (double)(a.s[2] * b.s[2]), (double)(a.s[3] * b.s[3]));
  }

  public static Double8 mul(Double8 a, double k) {
    return new Double8((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k), (double)(a.s[0] * k), (double)(a.s[1] * k), (double)(a.s[2] * k), (double)(a.s[3] * k));
  }

  public static Float8 mul(Double8 a, Float8 b) {
    return new Float8((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w), (float)(a.s[0] * b.s[0]), (float)(a.s[1] * b.s[1]), (float)(a.s[2] * b.s[2]), (float)(a.s[3] * b.s[3]));
  }

  public static Float8 mul(Double8 a, float k) {
    return new Float8((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k), (float)(a.s[0] * k), (float)(a.s[1] * k), (float)(a.s[2] * k), (float)(a.s[3] * k));
  }

  public static Double8 div(Double8 a, Double8 b) {
    return new Double8((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w), (double)(a.s[0] / b.s[0]), (double)(a.s[1] / b.s[1]), (double)(a.s[2] / b.s[2]), (double)(a.s[3] / b.s[3]));
  }

  public static Double8 div(Double8 a, double k) {
    return new Double8((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k), (double)(a.s[0] / k), (double)(a.s[1] / k), (double)(a.s[2] / k), (double)(a.s[3] / k));
  }

  public static Float8 div(Double8 a, Float8 b) {
    return new Float8((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w), (float)(a.s[0] / b.s[0]), (float)(a.s[1] / b.s[1]), (float)(a.s[2] / b.s[2]), (float)(a.s[3] / b.s[3]));
  }

  public static Float8 div(Double8 a, float k) {
    return new Float8((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k), (float)(a.s[0] / k), (float)(a.s[1] / k), (float)(a.s[2] / k), (float)(a.s[3] / k));
  }

  public static double dot(Double8 a, Double8 b) {
    return (double)(a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w + a.s[0] * b.s[0] + a.s[1] * b.s[1] + a.s[2] * b.s[2] + a.s[3] * b.s[3]);
  }

  public static double distance(Double8 a, Double8 b) {
    return length(sub(a, b));
  }

  public static double length(Double8 a) {
    return Math.sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w + a.s[0] * a.s[0] + a.s[1] * a.s[1] + a.s[2] * a.s[2] + a.s[3] * a.s[3]);
  }

  public static Double8 normalize(Double8 a) {
    double len = length(a);
    return new Double8((double)(a.x / len), (double)(a.y / len), (double)(a.z / len), (double)(a.w / len), (double)(a.s[0] / len), (double)(a.s[1] / len), (double)(a.s[2] / len), (double)(a.s[3] / len));
  }


  public static Double8 abs(Double8 a) {
    return new Double8(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w), Math.abs(a.s[0]), Math.abs(a.s[1]), Math.abs(a.s[2]), Math.abs(a.s[3]));
  }

  public static Double8 clamp(Double8 a, Double8 b, Double8 c) {
    return new Double8(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w), Math.clamp(a.s[0], b.s[0], c.s[0]), Math.clamp(a.s[1], b.s[1], c.s[1]), Math.clamp(a.s[2], b.s[2], c.s[2]), Math.clamp(a.s[3], b.s[3], c.s[3]));
  }

  public static Double8 max(Double8 a, Double8 b) {
    return new Double8(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w), Math.max(a.s[0], b.s[0]), Math.max(a.s[1], b.s[1]), Math.max(a.s[2], b.s[2]), Math.max(a.s[3], b.s[3]));
  }

  public static Double8 maxMag(Double8 a, Double8 b) {
    return new Double8(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w), Math.maxMag(a.s[0], b.s[0]), Math.maxMag(a.s[1], b.s[1]), Math.maxMag(a.s[2], b.s[2]), Math.maxMag(a.s[3], b.s[3]));
  }

  public static Double8 min(Double8 a, Double8 b) {
    return new Double8(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w), Math.min(a.s[0], b.s[0]), Math.min(a.s[1], b.s[1]), Math.min(a.s[2], b.s[2]), Math.min(a.s[3], b.s[3]));
  }

  public static Double8 minMag(Double8 a, Double8 b) {
    return new Double8(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w), Math.minMag(a.s[0], b.s[0]), Math.minMag(a.s[1], b.s[1]), Math.minMag(a.s[2], b.s[2]), Math.minMag(a.s[3], b.s[3]));
  }

  public static Double8 mix(Double8 a, Double8 b, Double8 c) {
    return new Double8(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w), Math.mix(a.s[0], b.s[0], c.s[0]), Math.mix(a.s[1], b.s[1], c.s[1]), Math.mix(a.s[2], b.s[2], c.s[2]), Math.mix(a.s[3], b.s[3], c.s[3]));
  }

  public static Double8 clamp(Double8 v, double min, double max) {
    return new Double8(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max), Math.clamp(v.s[0], min, max), Math.clamp(v.s[1], min, max), Math.clamp(v.s[2], min, max), Math.clamp(v.s[3], min, max));
  }

  public static Double8 max(Double8 x, double y) {
    return new Double8(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y), Math.max(x.s[0], y), Math.max(x.s[1], y), Math.max(x.s[2], y), Math.max(x.s[3], y));
  }

  public static Double8 min(Double8 x, double y) {
    return new Double8(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y), Math.min(x.s[0], y), Math.min(x.s[1], y), Math.min(x.s[2], y), Math.min(x.s[3], y));
  }

  public static Double8 mix(Double8 x, Double8 y, double a) {
    return new Double8(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a), Math.mix(x.s[0], y.s[0], a), Math.mix(x.s[1], y.s[1], a), Math.mix(x.s[2], y.s[2], a), Math.mix(x.s[3], y.s[3], a));
  }

  public static Double8 acos(Double8 a) {
    return new Double8(Math.acos(a.x), Math.acos(a.y), Math.acos(a.z), Math.acos(a.w), Math.acos(a.s[0]), Math.acos(a.s[1]), Math.acos(a.s[2]), Math.acos(a.s[3]));
  }

  public static Double8 acosh(Double8 a) {
    return new Double8(Math.acosh(a.x), Math.acosh(a.y), Math.acosh(a.z), Math.acosh(a.w), Math.acosh(a.s[0]), Math.acosh(a.s[1]), Math.acosh(a.s[2]), Math.acosh(a.s[3]));
  }

  public static Double8 asin(Double8 a) {
    return new Double8(Math.asin(a.x), Math.asin(a.y), Math.asin(a.z), Math.asin(a.w), Math.asin(a.s[0]), Math.asin(a.s[1]), Math.asin(a.s[2]), Math.asin(a.s[3]));
  }

  public static Double8 asinh(Double8 a) {
    return new Double8(Math.asinh(a.x), Math.asinh(a.y), Math.asinh(a.z), Math.asinh(a.w), Math.asinh(a.s[0]), Math.asinh(a.s[1]), Math.asinh(a.s[2]), Math.asinh(a.s[3]));
  }

  public static Double8 atan(Double8 a) {
    return new Double8(Math.atan(a.x), Math.atan(a.y), Math.atan(a.z), Math.atan(a.w), Math.atan(a.s[0]), Math.atan(a.s[1]), Math.atan(a.s[2]), Math.atan(a.s[3]));
  }

  public static Double8 atan2(Double8 a, Double8 b) {
    return new Double8(Math.atan2(a.x, b.x), Math.atan2(a.y, b.y), Math.atan2(a.z, b.z), Math.atan2(a.w, b.w), Math.atan2(a.s[0], b.s[0]), Math.atan2(a.s[1], b.s[1]), Math.atan2(a.s[2], b.s[2]), Math.atan2(a.s[3], b.s[3]));
  }

  public static Double8 atanh(Double8 a) {
    return new Double8(Math.atanh(a.x), Math.atanh(a.y), Math.atanh(a.z), Math.atanh(a.w), Math.atanh(a.s[0]), Math.atanh(a.s[1]), Math.atanh(a.s[2]), Math.atanh(a.s[3]));
  }

  public static Double8 cbrt(Double8 a) {
    return new Double8(Math.cbrt(a.x), Math.cbrt(a.y), Math.cbrt(a.z), Math.cbrt(a.w), Math.cbrt(a.s[0]), Math.cbrt(a.s[1]), Math.cbrt(a.s[2]), Math.cbrt(a.s[3]));
  }

  public static Double8 ceil(Double8 a) {
    return new Double8(Math.ceil(a.x), Math.ceil(a.y), Math.ceil(a.z), Math.ceil(a.w), Math.ceil(a.s[0]), Math.ceil(a.s[1]), Math.ceil(a.s[2]), Math.ceil(a.s[3]));
  }

  public static Double8 copySign(Double8 a, Double8 b) {
    return new Double8(Math.copySign(a.x, b.x), Math.copySign(a.y, b.y), Math.copySign(a.z, b.z), Math.copySign(a.w, b.w), Math.copySign(a.s[0], b.s[0]), Math.copySign(a.s[1], b.s[1]), Math.copySign(a.s[2], b.s[2]), Math.copySign(a.s[3], b.s[3]));
  }

  public static Double8 cos(Double8 a) {
    return new Double8(Math.cos(a.x), Math.cos(a.y), Math.cos(a.z), Math.cos(a.w), Math.cos(a.s[0]), Math.cos(a.s[1]), Math.cos(a.s[2]), Math.cos(a.s[3]));
  }

  public static Double8 cosh(Double8 a) {
    return new Double8(Math.cosh(a.x), Math.cosh(a.y), Math.cosh(a.z), Math.cosh(a.w), Math.cosh(a.s[0]), Math.cosh(a.s[1]), Math.cosh(a.s[2]), Math.cosh(a.s[3]));
  }

  public static Double8 erf(Double8 a) {
    return new Double8(Math.erf(a.x), Math.erf(a.y), Math.erf(a.z), Math.erf(a.w), Math.erf(a.s[0]), Math.erf(a.s[1]), Math.erf(a.s[2]), Math.erf(a.s[3]));
  }

  public static Double8 erfc(Double8 a) {
    return new Double8(Math.erfc(a.x), Math.erfc(a.y), Math.erfc(a.z), Math.erfc(a.w), Math.erfc(a.s[0]), Math.erfc(a.s[1]), Math.erfc(a.s[2]), Math.erfc(a.s[3]));
  }

  public static Double8 exp(Double8 a) {
    return new Double8(Math.exp(a.x), Math.exp(a.y), Math.exp(a.z), Math.exp(a.w), Math.exp(a.s[0]), Math.exp(a.s[1]), Math.exp(a.s[2]), Math.exp(a.s[3]));
  }

  public static Double8 exp10(Double8 a) {
    return new Double8(Math.exp10(a.x), Math.exp10(a.y), Math.exp10(a.z), Math.exp10(a.w), Math.exp10(a.s[0]), Math.exp10(a.s[1]), Math.exp10(a.s[2]), Math.exp10(a.s[3]));
  }

  public static Double8 exp2(Double8 a) {
    return new Double8(Math.exp2(a.x), Math.exp2(a.y), Math.exp2(a.z), Math.exp2(a.w), Math.exp2(a.s[0]), Math.exp2(a.s[1]), Math.exp2(a.s[2]), Math.exp2(a.s[3]));
  }

  public static Double8 expm1(Double8 a) {
    return new Double8(Math.expm1(a.x), Math.expm1(a.y), Math.expm1(a.z), Math.expm1(a.w), Math.expm1(a.s[0]), Math.expm1(a.s[1]), Math.expm1(a.s[2]), Math.expm1(a.s[3]));
  }

  public static Double8 fdim(Double8 a, Double8 b) {
    return new Double8(Math.fdim(a.x, b.x), Math.fdim(a.y, b.y), Math.fdim(a.z, b.z), Math.fdim(a.w, b.w), Math.fdim(a.s[0], b.s[0]), Math.fdim(a.s[1], b.s[1]), Math.fdim(a.s[2], b.s[2]), Math.fdim(a.s[3], b.s[3]));
  }

  public static Double8 floor(Double8 a) {
    return new Double8(Math.floor(a.x), Math.floor(a.y), Math.floor(a.z), Math.floor(a.w), Math.floor(a.s[0]), Math.floor(a.s[1]), Math.floor(a.s[2]), Math.floor(a.s[3]));
  }

  public static Double8 fma(Double8 a, Double8 b, Double8 c) {
    return new Double8(Math.fma(a.x, b.x, c.x), Math.fma(a.y, b.y, c.y), Math.fma(a.z, b.z, c.z), Math.fma(a.w, b.w, c.w), Math.fma(a.s[0], b.s[0], c.s[0]), Math.fma(a.s[1], b.s[1], c.s[1]), Math.fma(a.s[2], b.s[2], c.s[2]), Math.fma(a.s[3], b.s[3], c.s[3]));
  }

  public static Double8 fmod(Double8 a, Double8 b) {
    return new Double8(Math.fmod(a.x, b.x), Math.fmod(a.y, b.y), Math.fmod(a.z, b.z), Math.fmod(a.w, b.w), Math.fmod(a.s[0], b.s[0]), Math.fmod(a.s[1], b.s[1]), Math.fmod(a.s[2], b.s[2]), Math.fmod(a.s[3], b.s[3]));
  }

  public static Double8 fract(Double8 a) {
    return new Double8(Math.fract(a.x), Math.fract(a.y), Math.fract(a.z), Math.fract(a.w), Math.fract(a.s[0]), Math.fract(a.s[1]), Math.fract(a.s[2]), Math.fract(a.s[3]));
  }

  public static Double8 frexp(Double8 a) {
    return new Double8(Math.frexp(a.x), Math.frexp(a.y), Math.frexp(a.z), Math.frexp(a.w), Math.frexp(a.s[0]), Math.frexp(a.s[1]), Math.frexp(a.s[2]), Math.frexp(a.s[3]));
  }

  public static Double8 getExponent(Double8 a) {
    return new Double8(Math.getExponent(a.x), Math.getExponent(a.y), Math.getExponent(a.z), Math.getExponent(a.w), Math.getExponent(a.s[0]), Math.getExponent(a.s[1]), Math.getExponent(a.s[2]), Math.getExponent(a.s[3]));
  }

  public static Double8 hypot(Double8 a, Double8 b) {
    return new Double8(Math.hypot(a.x, b.x), Math.hypot(a.y, b.y), Math.hypot(a.z, b.z), Math.hypot(a.w, b.w), Math.hypot(a.s[0], b.s[0]), Math.hypot(a.s[1], b.s[1]), Math.hypot(a.s[2], b.s[2]), Math.hypot(a.s[3], b.s[3]));
  }

  public static Double8 lgamma(Double8 a) {
    return new Double8(Math.lgamma(a.x), Math.lgamma(a.y), Math.lgamma(a.z), Math.lgamma(a.w), Math.lgamma(a.s[0]), Math.lgamma(a.s[1]), Math.lgamma(a.s[2]), Math.lgamma(a.s[3]));
  }

  public static Double8 log(Double8 a) {
    return new Double8(Math.log(a.x), Math.log(a.y), Math.log(a.z), Math.log(a.w), Math.log(a.s[0]), Math.log(a.s[1]), Math.log(a.s[2]), Math.log(a.s[3]));
  }

  public static Double8 log10(Double8 a) {
    return new Double8(Math.log10(a.x), Math.log10(a.y), Math.log10(a.z), Math.log10(a.w), Math.log10(a.s[0]), Math.log10(a.s[1]), Math.log10(a.s[2]), Math.log10(a.s[3]));
  }

  public static Double8 log1p(Double8 a) {
    return new Double8(Math.log1p(a.x), Math.log1p(a.y), Math.log1p(a.z), Math.log1p(a.w), Math.log1p(a.s[0]), Math.log1p(a.s[1]), Math.log1p(a.s[2]), Math.log1p(a.s[3]));
  }

  public static Double8 log2(Double8 a) {
    return new Double8(Math.log2(a.x), Math.log2(a.y), Math.log2(a.z), Math.log2(a.w), Math.log2(a.s[0]), Math.log2(a.s[1]), Math.log2(a.s[2]), Math.log2(a.s[3]));
  }

  public static Double8 logb(Double8 a) {
    return new Double8(Math.logb(a.x), Math.logb(a.y), Math.logb(a.z), Math.logb(a.w), Math.logb(a.s[0]), Math.logb(a.s[1]), Math.logb(a.s[2]), Math.logb(a.s[3]));
  }

  public static Double8 mad(Double8 a, Double8 b, Double8 c) {
    return new Double8(Math.mad(a.x, b.x, c.x), Math.mad(a.y, b.y, c.y), Math.mad(a.z, b.z, c.z), Math.mad(a.w, b.w, c.w), Math.mad(a.s[0], b.s[0], c.s[0]), Math.mad(a.s[1], b.s[1], c.s[1]), Math.mad(a.s[2], b.s[2], c.s[2]), Math.mad(a.s[3], b.s[3], c.s[3]));
  }

  public static Double8 nextAfter(Double8 a, Double8 b) {
    return new Double8(Math.nextAfter(a.x, b.x), Math.nextAfter(a.y, b.y), Math.nextAfter(a.z, b.z), Math.nextAfter(a.w, b.w), Math.nextAfter(a.s[0], b.s[0]), Math.nextAfter(a.s[1], b.s[1]), Math.nextAfter(a.s[2], b.s[2]), Math.nextAfter(a.s[3], b.s[3]));
  }

  public static Double8 pow(Double8 a, Double8 b) {
    return new Double8(Math.pow(a.x, b.x), Math.pow(a.y, b.y), Math.pow(a.z, b.z), Math.pow(a.w, b.w), Math.pow(a.s[0], b.s[0]), Math.pow(a.s[1], b.s[1]), Math.pow(a.s[2], b.s[2]), Math.pow(a.s[3], b.s[3]));
  }

  public static Double8 powr(Double8 a, Double8 b) {
    return new Double8(Math.powr(a.x, b.x), Math.powr(a.y, b.y), Math.powr(a.z, b.z), Math.powr(a.w, b.w), Math.powr(a.s[0], b.s[0]), Math.powr(a.s[1], b.s[1]), Math.powr(a.s[2], b.s[2]), Math.powr(a.s[3], b.s[3]));
  }

  public static Double8 remainder(Double8 a, Double8 b) {
    return new Double8(Math.remainder(a.x, b.x), Math.remainder(a.y, b.y), Math.remainder(a.z, b.z), Math.remainder(a.w, b.w), Math.remainder(a.s[0], b.s[0]), Math.remainder(a.s[1], b.s[1]), Math.remainder(a.s[2], b.s[2]), Math.remainder(a.s[3], b.s[3]));
  }

  public static Double8 rint(Double8 a) {
    return new Double8(Math.rint(a.x), Math.rint(a.y), Math.rint(a.z), Math.rint(a.w), Math.rint(a.s[0]), Math.rint(a.s[1]), Math.rint(a.s[2]), Math.rint(a.s[3]));
  }

  public static Double8 round(Double8 a) {
    return new Double8(Math.round(a.x), Math.round(a.y), Math.round(a.z), Math.round(a.w), Math.round(a.s[0]), Math.round(a.s[1]), Math.round(a.s[2]), Math.round(a.s[3]));
  }

  public static Double8 rsqrt(Double8 a) {
    return new Double8(Math.rsqrt(a.x), Math.rsqrt(a.y), Math.rsqrt(a.z), Math.rsqrt(a.w), Math.rsqrt(a.s[0]), Math.rsqrt(a.s[1]), Math.rsqrt(a.s[2]), Math.rsqrt(a.s[3]));
  }

  public static Double8 signum(Double8 a) {
    return new Double8(Math.signum(a.x), Math.signum(a.y), Math.signum(a.z), Math.signum(a.w), Math.signum(a.s[0]), Math.signum(a.s[1]), Math.signum(a.s[2]), Math.signum(a.s[3]));
  }

  public static Double8 sin(Double8 a) {
    return new Double8(Math.sin(a.x), Math.sin(a.y), Math.sin(a.z), Math.sin(a.w), Math.sin(a.s[0]), Math.sin(a.s[1]), Math.sin(a.s[2]), Math.sin(a.s[3]));
  }

  public static Double8 sinh(Double8 a) {
    return new Double8(Math.sinh(a.x), Math.sinh(a.y), Math.sinh(a.z), Math.sinh(a.w), Math.sinh(a.s[0]), Math.sinh(a.s[1]), Math.sinh(a.s[2]), Math.sinh(a.s[3]));
  }

  public static Double8 smoothStep(Double8 a, Double8 b, Double8 c) {
    return new Double8(Math.smoothStep(a.x, b.x, c.x), Math.smoothStep(a.y, b.y, c.y), Math.smoothStep(a.z, b.z, c.z), Math.smoothStep(a.w, b.w, c.w), Math.smoothStep(a.s[0], b.s[0], c.s[0]), Math.smoothStep(a.s[1], b.s[1], c.s[1]), Math.smoothStep(a.s[2], b.s[2], c.s[2]), Math.smoothStep(a.s[3], b.s[3], c.s[3]));
  }

  public static Double8 sqrt(Double8 a) {
    return new Double8(Math.sqrt(a.x), Math.sqrt(a.y), Math.sqrt(a.z), Math.sqrt(a.w), Math.sqrt(a.s[0]), Math.sqrt(a.s[1]), Math.sqrt(a.s[2]), Math.sqrt(a.s[3]));
  }

  public static Double8 step(Double8 a, Double8 b) {
    return new Double8(Math.step(a.x, b.x), Math.step(a.y, b.y), Math.step(a.z, b.z), Math.step(a.w, b.w), Math.step(a.s[0], b.s[0]), Math.step(a.s[1], b.s[1]), Math.step(a.s[2], b.s[2]), Math.step(a.s[3], b.s[3]));
  }

  public static Double8 tan(Double8 a) {
    return new Double8(Math.tan(a.x), Math.tan(a.y), Math.tan(a.z), Math.tan(a.w), Math.tan(a.s[0]), Math.tan(a.s[1]), Math.tan(a.s[2]), Math.tan(a.s[3]));
  }

  public static Double8 tanh(Double8 a) {
    return new Double8(Math.tanh(a.x), Math.tanh(a.y), Math.tanh(a.z), Math.tanh(a.w), Math.tanh(a.s[0]), Math.tanh(a.s[1]), Math.tanh(a.s[2]), Math.tanh(a.s[3]));
  }

  public static Double8 tgamma(Double8 a) {
    return new Double8(Math.tgamma(a.x), Math.tgamma(a.y), Math.tgamma(a.z), Math.tgamma(a.w), Math.tgamma(a.s[0]), Math.tgamma(a.s[1]), Math.tgamma(a.s[2]), Math.tgamma(a.s[3]));
  }

  public static Double8 toDegrees(Double8 a) {
    return new Double8(Math.toDegrees(a.x), Math.toDegrees(a.y), Math.toDegrees(a.z), Math.toDegrees(a.w), Math.toDegrees(a.s[0]), Math.toDegrees(a.s[1]), Math.toDegrees(a.s[2]), Math.toDegrees(a.s[3]));
  }

  public static Double8 toRadians(Double8 a) {
    return new Double8(Math.toRadians(a.x), Math.toRadians(a.y), Math.toRadians(a.z), Math.toRadians(a.w), Math.toRadians(a.s[0]), Math.toRadians(a.s[1]), Math.toRadians(a.s[2]), Math.toRadians(a.s[3]));
  }

  public static Double8 trunc(Double8 a) {
    return new Double8(Math.trunc(a.x), Math.trunc(a.y), Math.trunc(a.z), Math.trunc(a.w), Math.trunc(a.s[0]), Math.trunc(a.s[1]), Math.trunc(a.s[2]), Math.trunc(a.s[3]));
  }

  public static Double8 scalb(Double8 a, Int8 n) {
    return new Double8(Math.scalb(a.x, n.x), Math.scalb(a.y, n.y), Math.scalb(a.z, n.z), Math.scalb(a.w, n.w), Math.scalb(a.s[0], n.s[0]), Math.scalb(a.s[1], n.s[1]), Math.scalb(a.s[2], n.s[2]), Math.scalb(a.s[3], n.s[3]));
  }

  public static Double8 ldexp(Double8 a, Int8 n) {
    return new Double8(Math.ldexp(a.x, n.x), Math.ldexp(a.y, n.y), Math.ldexp(a.z, n.z), Math.ldexp(a.w, n.w), Math.ldexp(a.s[0], n.s[0]), Math.ldexp(a.s[1], n.s[1]), Math.ldexp(a.s[2], n.s[2]), Math.ldexp(a.s[3], n.s[3]));
  }

  public static Double8 pown(Double8 a, Int8 b) {
    return new Double8(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w), Math.pown(a.s[0], b.s[0]), Math.pown(a.s[1], b.s[1]), Math.pown(a.s[2], b.s[2]), Math.pown(a.s[3], b.s[3]));
  }

  public static Double8 rootn(Double8 a, Int8 b) {
    return new Double8(Math.pown(a.x, b.x), Math.pown(a.y, b.y), Math.pown(a.z, b.z), Math.pown(a.w, b.w), Math.pown(a.s[0], b.s[0]), Math.pown(a.s[1], b.s[1]), Math.pown(a.s[2], b.s[2]), Math.pown(a.s[3], b.s[3]));
  }

  public static Double8 smoothStep(Double8 a, Double8 b, double c) {
    return new Double8(Math.smoothStep(a.x, b.x, c), Math.smoothStep(a.y, b.y, c), Math.smoothStep(a.z, b.z, c), Math.smoothStep(a.w, b.w, c), Math.smoothStep(a.s[0], b.s[0], c), Math.smoothStep(a.s[1], b.s[1], c), Math.smoothStep(a.s[2], b.s[2], c), Math.smoothStep(a.s[3], b.s[3], c));
  }
}
