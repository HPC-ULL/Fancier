package es.ull.pcg.hpc.fancier.vector;

import es.ull.pcg.hpc.fancier.Math;

public class Byte8 {
  public byte x;
  public byte y;
  public byte z;
  public byte w;
  public byte[] s = new byte[4];

  public Byte8(byte x, byte y, byte z, byte w, byte s0, byte s1, byte s2, byte s3) {
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
    this.s[0] = s0;
    this.s[1] = s1;
    this.s[2] = s2;
    this.s[3] = s3;
  }

  public Byte8(byte v) {
    this(v, v, v, v, v, v, v, v);
  }

  public Byte8() {
    this((byte) 0);
  }

  public Byte8(byte x, byte y, byte z, byte w, byte s0, byte s1, Byte2 vec1) {
    this(x, y, z, w, s0, s1, vec1.x, vec1.y);
  }

  public Byte8(byte x, byte y, byte z, byte w, byte s0, Byte2 vec1, byte s3) {
    this(x, y, z, w, s0, vec1.x, vec1.y, s3);
  }

  public Byte8(byte x, byte y, byte z, byte w, byte s0, Byte3 vec1) {
    this(x, y, z, w, s0, vec1.x, vec1.y, vec1.z);
  }

  public Byte8(byte x, byte y, byte z, byte w, Byte2 vec1, byte s2, byte s3) {
    this(x, y, z, w, vec1.x, vec1.y, s2, s3);
  }

  public Byte8(byte x, byte y, byte z, byte w, Byte2 vec1, Byte2 vec2) {
    this(x, y, z, w, vec1.x, vec1.y, vec2.x, vec2.y);
  }

  public Byte8(byte x, byte y, byte z, byte w, Byte3 vec1, byte s3) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, s3);
  }

  public Byte8(byte x, byte y, byte z, byte w, Byte4 vec1) {
    this(x, y, z, w, vec1.x, vec1.y, vec1.z, vec1.w);
  }

  public Byte8(byte x, byte y, byte z, Byte2 vec1, byte s1, byte s2, byte s3) {
    this(x, y, z, vec1.x, vec1.y, s1, s2, s3);
  }

  public Byte8(byte x, byte y, byte z, Byte2 vec1, byte s1, Byte2 vec2) {
    this(x, y, z, vec1.x, vec1.y, s1, vec2.x, vec2.y);
  }

  public Byte8(byte x, byte y, byte z, Byte2 vec1, Byte2 vec2, byte s3) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, s3);
  }

  public Byte8(byte x, byte y, byte z, Byte2 vec1, Byte3 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(byte x, byte y, byte z, Byte3 vec1, byte s2, byte s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, s2, s3);
  }

  public Byte8(byte x, byte y, byte z, Byte3 vec1, Byte2 vec2) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y);
  }

  public Byte8(byte x, byte y, byte z, Byte4 vec1, byte s3) {
    this(x, y, z, vec1.x, vec1.y, vec1.z, vec1.w, s3);
  }

  public Byte8(byte x, byte y, Byte2 vec1, byte s0, byte s1, byte s2, byte s3) {
    this(x, y, vec1.x, vec1.y, s0, s1, s2, s3);
  }

  public Byte8(byte x, byte y, Byte2 vec1, byte s0, byte s1, Byte2 vec2) {
    this(x, y, vec1.x, vec1.y, s0, s1, vec2.x, vec2.y);
  }

  public Byte8(byte x, byte y, Byte2 vec1, byte s0, Byte2 vec2, byte s3) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, s3);
  }

  public Byte8(byte x, byte y, Byte2 vec1, byte s0, Byte3 vec2) {
    this(x, y, vec1.x, vec1.y, s0, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(byte x, byte y, Byte2 vec1, Byte2 vec2, byte s2, byte s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, s2, s3);
  }

  public Byte8(byte x, byte y, Byte2 vec1, Byte2 vec2, Byte2 vec3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Byte8(byte x, byte y, Byte2 vec1, Byte3 vec2, byte s3) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s3);
  }

  public Byte8(byte x, byte y, Byte2 vec1, Byte4 vec2) {
    this(x, y, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Byte8(byte x, byte y, Byte3 vec1, byte s1, byte s2, byte s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, s2, s3);
  }

  public Byte8(byte x, byte y, Byte3 vec1, byte s1, Byte2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, s1, vec2.x, vec2.y);
  }

  public Byte8(byte x, byte y, Byte3 vec1, Byte2 vec2, byte s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s3);
  }

  public Byte8(byte x, byte y, Byte3 vec1, Byte3 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(byte x, byte y, Byte4 vec1, byte s2, byte s3) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, s2, s3);
  }

  public Byte8(byte x, byte y, Byte4 vec1, Byte2 vec2) {
    this(x, y, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y);
  }

  public Byte8(byte x, Byte2 vec1, byte w, byte s0, byte s1, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, w, s0, s1, s2, s3);
  }

  public Byte8(byte x, Byte2 vec1, byte w, byte s0, byte s1, Byte2 vec2) {
    this(x, vec1.x, vec1.y, w, s0, s1, vec2.x, vec2.y);
  }

  public Byte8(byte x, Byte2 vec1, byte w, byte s0, Byte2 vec2, byte s3) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, s3);
  }

  public Byte8(byte x, Byte2 vec1, byte w, byte s0, Byte3 vec2) {
    this(x, vec1.x, vec1.y, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(byte x, Byte2 vec1, byte w, Byte2 vec2, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, s2, s3);
  }

  public Byte8(byte x, Byte2 vec1, byte w, Byte2 vec2, Byte2 vec3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Byte8(byte x, Byte2 vec1, byte w, Byte3 vec2, byte s3) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Byte8(byte x, Byte2 vec1, byte w, Byte4 vec2) {
    this(x, vec1.x, vec1.y, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Byte8(byte x, Byte2 vec1, Byte2 vec2, byte s1, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, s2, s3);
  }

  public Byte8(byte x, Byte2 vec1, Byte2 vec2, byte s1, Byte2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Byte8(byte x, Byte2 vec1, Byte2 vec2, Byte2 vec3, byte s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Byte8(byte x, Byte2 vec1, Byte2 vec2, Byte3 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Byte8(byte x, Byte2 vec1, Byte3 vec2, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Byte8(byte x, Byte2 vec1, Byte3 vec2, Byte2 vec3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Byte8(byte x, Byte2 vec1, Byte4 vec2, byte s3) {
    this(x, vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Byte8(byte x, Byte3 vec1, byte s0, byte s1, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, s2, s3);
  }

  public Byte8(byte x, Byte3 vec1, byte s0, byte s1, Byte2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, s1, vec2.x, vec2.y);
  }

  public Byte8(byte x, Byte3 vec1, byte s0, Byte2 vec2, byte s3) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, s3);
  }

  public Byte8(byte x, Byte3 vec1, byte s0, Byte3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, s0, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(byte x, Byte3 vec1, Byte2 vec2, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s2, s3);
  }

  public Byte8(byte x, Byte3 vec1, Byte2 vec2, Byte2 vec3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Byte8(byte x, Byte3 vec1, Byte3 vec2, byte s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s3);
  }

  public Byte8(byte x, Byte3 vec1, Byte4 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Byte8(byte x, Byte4 vec1, byte s1, byte s2, byte s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, s2, s3);
  }

  public Byte8(byte x, Byte4 vec1, byte s1, Byte2 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, s1, vec2.x, vec2.y);
  }

  public Byte8(byte x, Byte4 vec1, Byte2 vec2, byte s3) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s3);
  }

  public Byte8(byte x, Byte4 vec1, Byte3 vec2) {
    this(x, vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(Byte2 vec1, byte z, byte w, byte s0, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, z, w, s0, s1, s2, s3);
  }

  public Byte8(Byte2 vec1, byte z, byte w, byte s0, byte s1, Byte2 vec2) {
    this(vec1.x, vec1.y, z, w, s0, s1, vec2.x, vec2.y);
  }

  public Byte8(Byte2 vec1, byte z, byte w, byte s0, Byte2 vec2, byte s3) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, s3);
  }

  public Byte8(Byte2 vec1, byte z, byte w, byte s0, Byte3 vec2) {
    this(vec1.x, vec1.y, z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(Byte2 vec1, byte z, byte w, Byte2 vec2, byte s2, byte s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, s2, s3);
  }

  public Byte8(Byte2 vec1, byte z, byte w, Byte2 vec2, Byte2 vec3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Byte8(Byte2 vec1, byte z, byte w, Byte3 vec2, byte s3) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Byte8(Byte2 vec1, byte z, byte w, Byte4 vec2) {
    this(vec1.x, vec1.y, z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Byte8(Byte2 vec1, byte z, Byte2 vec2, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Byte8(Byte2 vec1, byte z, Byte2 vec2, byte s1, Byte2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Byte8(Byte2 vec1, byte z, Byte2 vec2, Byte2 vec3, byte s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Byte8(Byte2 vec1, byte z, Byte2 vec2, Byte3 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Byte8(Byte2 vec1, byte z, Byte3 vec2, byte s2, byte s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Byte8(Byte2 vec1, byte z, Byte3 vec2, Byte2 vec3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Byte8(Byte2 vec1, byte z, Byte4 vec2, byte s3) {
    this(vec1.x, vec1.y, z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, byte s0, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, s2, s3);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, byte s0, byte s1, Byte2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, s1, vec3.x, vec3.y);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, byte s0, Byte2 vec3, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, s3);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, byte s0, Byte3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, s0, vec3.x, vec3.y, vec3.z);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, Byte2 vec3, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, s2, s3);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, Byte2 vec3, Byte2 vec4) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec4.x, vec4.y);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, Byte3 vec3, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, s3);
  }

  public Byte8(Byte2 vec1, Byte2 vec2, Byte4 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z, vec3.w);
  }

  public Byte8(Byte2 vec1, Byte3 vec2, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, s2, s3);
  }

  public Byte8(Byte2 vec1, Byte3 vec2, byte s1, Byte2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, s1, vec3.x, vec3.y);
  }

  public Byte8(Byte2 vec1, Byte3 vec2, Byte2 vec3, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, s3);
  }

  public Byte8(Byte2 vec1, Byte3 vec2, Byte3 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y, vec3.z);
  }

  public Byte8(Byte2 vec1, Byte4 vec2, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, s2, s3);
  }

  public Byte8(Byte2 vec1, Byte4 vec2, Byte2 vec3) {
    this(vec1.x, vec1.y, vec2.x, vec2.y, vec2.z, vec2.w, vec3.x, vec3.y);
  }

  public Byte8(Byte3 vec1, byte w, byte s0, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, s2, s3);
  }

  public Byte8(Byte3 vec1, byte w, byte s0, byte s1, Byte2 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, s1, vec2.x, vec2.y);
  }

  public Byte8(Byte3 vec1, byte w, byte s0, Byte2 vec2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, s3);
  }

  public Byte8(Byte3 vec1, byte w, byte s0, Byte3 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(Byte3 vec1, byte w, Byte2 vec2, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, s2, s3);
  }

  public Byte8(Byte3 vec1, byte w, Byte2 vec2, Byte2 vec3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Byte8(Byte3 vec1, byte w, Byte3 vec2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Byte8(Byte3 vec1, byte w, Byte4 vec2) {
    this(vec1.x, vec1.y, vec1.z, w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Byte8(Byte3 vec1, Byte2 vec2, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, s2, s3);
  }

  public Byte8(Byte3 vec1, Byte2 vec2, byte s1, Byte2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, s1, vec3.x, vec3.y);
  }

  public Byte8(Byte3 vec1, Byte2 vec2, Byte2 vec3, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, s3);
  }

  public Byte8(Byte3 vec1, Byte2 vec2, Byte3 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec3.x, vec3.y, vec3.z);
  }

  public Byte8(Byte3 vec1, Byte3 vec2, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, s2, s3);
  }

  public Byte8(Byte3 vec1, Byte3 vec2, Byte2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec3.x, vec3.y);
  }

  public Byte8(Byte3 vec1, Byte4 vec2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec2.x, vec2.y, vec2.z, vec2.w, s3);
  }

  public Byte8(Byte4 vec1, byte s0, byte s1, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, s2, s3);
  }

  public Byte8(Byte4 vec1, byte s0, byte s1, Byte2 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, s1, vec2.x, vec2.y);
  }

  public Byte8(Byte4 vec1, byte s0, Byte2 vec2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, s3);
  }

  public Byte8(Byte4 vec1, byte s0, Byte3 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, s0, vec2.x, vec2.y, vec2.z);
  }

  public Byte8(Byte4 vec1, Byte2 vec2, byte s2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, s2, s3);
  }

  public Byte8(Byte4 vec1, Byte2 vec2, Byte2 vec3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec3.x, vec3.y);
  }

  public Byte8(Byte4 vec1, Byte3 vec2, byte s3) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, s3);
  }

  public Byte8(Byte4 vec1, Byte4 vec2) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec2.x, vec2.y, vec2.z, vec2.w);
  }

  public Byte8(Byte8 vec1) {
    this(vec1.x, vec1.y, vec1.z, vec1.w, vec1.s[0], vec1.s[1], vec1.s[2], vec1.s[3]);
  }

  public Byte4 lo() {
    return new Byte4(x, y, z, w);
  }

  public Byte4 hi() {
    return new Byte4(s[0], s[1], s[2], s[3]);
  }

  public Byte4 odd() {
    return new Byte4(y, w, s[1], s[3]);
  }

  public Byte4 even() {
    return new Byte4(x, z, s[0], s[2]);
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

  public Double8 convertDouble8() {
    return new Double8((double) x, (double) y, (double) z, (double) w, (double) s[0], (double) s[1], (double) s[2], (double) s[3]);
  }

  public Byte2 asByte2() {
    return new Byte2(x, y);
  }

  public Byte3 asByte3() {
    return new Byte3(x, y, z);
  }

  public Byte4 asByte4() {
    return new Byte4(x, y, z, w);
  }

  public static Int8 isEqual(Byte8 a, Byte8 b) {
    return new Int8(a.x == b.x? 1 : 0, a.y == b.y? 1 : 0, a.z == b.z? 1 : 0, a.w == b.w? 1 : 0, a.s[0] == b.s[0]? 1 : 0, a.s[1] == b.s[1]? 1 : 0, a.s[2] == b.s[2]? 1 : 0, a.s[3] == b.s[3]? 1 : 0);
  }

  public static Int8 isNotEqual(Byte8 a, Byte8 b) {
    return new Int8(a.x != b.x? 1 : 0, a.y != b.y? 1 : 0, a.z != b.z? 1 : 0, a.w != b.w? 1 : 0, a.s[0] != b.s[0]? 1 : 0, a.s[1] != b.s[1]? 1 : 0, a.s[2] != b.s[2]? 1 : 0, a.s[3] != b.s[3]? 1 : 0);
  }

  public static Int8 isGreater(Byte8 a, Byte8 b) {
    return new Int8(a.x > b.x? 1 : 0, a.y > b.y? 1 : 0, a.z > b.z? 1 : 0, a.w > b.w? 1 : 0, a.s[0] > b.s[0]? 1 : 0, a.s[1] > b.s[1]? 1 : 0, a.s[2] > b.s[2]? 1 : 0, a.s[3] > b.s[3]? 1 : 0);
  }

  public static Int8 isGreaterEqual(Byte8 a, Byte8 b) {
    return new Int8(a.x >= b.x? 1 : 0, a.y >= b.y? 1 : 0, a.z >= b.z? 1 : 0, a.w >= b.w? 1 : 0, a.s[0] >= b.s[0]? 1 : 0, a.s[1] >= b.s[1]? 1 : 0, a.s[2] >= b.s[2]? 1 : 0, a.s[3] >= b.s[3]? 1 : 0);
  }

  public static Int8 isLess(Byte8 a, Byte8 b) {
    return new Int8(a.x < b.x? 1 : 0, a.y < b.y? 1 : 0, a.z < b.z? 1 : 0, a.w < b.w? 1 : 0, a.s[0] < b.s[0]? 1 : 0, a.s[1] < b.s[1]? 1 : 0, a.s[2] < b.s[2]? 1 : 0, a.s[3] < b.s[3]? 1 : 0);
  }

  public static Int8 isLessEqual(Byte8 a, Byte8 b) {
    return new Int8(a.x <= b.x? 1 : 0, a.y <= b.y? 1 : 0, a.z <= b.z? 1 : 0, a.w <= b.w? 1 : 0, a.s[0] <= b.s[0]? 1 : 0, a.s[1] <= b.s[1]? 1 : 0, a.s[2] <= b.s[2]? 1 : 0, a.s[3] <= b.s[3]? 1 : 0);
  }

  public static Byte8 select(Byte8 a, Byte8 b, Int8 c) {
    return new Byte8(Math.select(a.x, b.x, c.x), Math.select(a.y, b.y, c.y), Math.select(a.z, b.z, c.z), Math.select(a.w, b.w, c.w), Math.select(a.s[0], b.s[0], c.s[0]), Math.select(a.s[1], b.s[1], c.s[1]), Math.select(a.s[2], b.s[2], c.s[2]), Math.select(a.s[3], b.s[3], c.s[3]));
  }

  public static int any(Byte8 a) {
    return (a.x != (byte) 0 || a.y != (byte) 0 || a.z != (byte) 0 || a.w != (byte) 0 || a.s[0] != (byte) 0 || a.s[1] != (byte) 0 || a.s[2] != (byte) 0 || a.s[3] != (byte) 0)? 1 : 0;
  }

  public static int all(Byte8 a) {
    return (a.x == (byte) 0 || a.y == (byte) 0 || a.z == (byte) 0 || a.w == (byte) 0 || a.s[0] == (byte) 0 || a.s[1] == (byte) 0 || a.s[2] == (byte) 0 || a.s[3] == (byte) 0)? 0 : 1;
  }

  public static Byte8 add(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x + b.x), (byte)(a.y + b.y), (byte)(a.z + b.z), (byte)(a.w + b.w), (byte)(a.s[0] + b.s[0]), (byte)(a.s[1] + b.s[1]), (byte)(a.s[2] + b.s[2]), (byte)(a.s[3] + b.s[3]));
  }

  public static Byte8 sub(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x - b.x), (byte)(a.y - b.y), (byte)(a.z - b.z), (byte)(a.w - b.w), (byte)(a.s[0] - b.s[0]), (byte)(a.s[1] - b.s[1]), (byte)(a.s[2] - b.s[2]), (byte)(a.s[3] - b.s[3]));
  }

  public static Byte8 mul(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x * b.x), (byte)(a.y * b.y), (byte)(a.z * b.z), (byte)(a.w * b.w), (byte)(a.s[0] * b.s[0]), (byte)(a.s[1] * b.s[1]), (byte)(a.s[2] * b.s[2]), (byte)(a.s[3] * b.s[3]));
  }

  public static Byte8 mul(Byte8 a, byte k) {
    return new Byte8((byte)(a.x * k), (byte)(a.y * k), (byte)(a.z * k), (byte)(a.w * k), (byte)(a.s[0] * k), (byte)(a.s[1] * k), (byte)(a.s[2] * k), (byte)(a.s[3] * k));
  }

  public static Double8 mul(Byte8 a, Double8 b) {
    return new Double8((double)(a.x * b.x), (double)(a.y * b.y), (double)(a.z * b.z), (double)(a.w * b.w), (double)(a.s[0] * b.s[0]), (double)(a.s[1] * b.s[1]), (double)(a.s[2] * b.s[2]), (double)(a.s[3] * b.s[3]));
  }

  public static Double8 mul(Byte8 a, double k) {
    return new Double8((double)(a.x * k), (double)(a.y * k), (double)(a.z * k), (double)(a.w * k), (double)(a.s[0] * k), (double)(a.s[1] * k), (double)(a.s[2] * k), (double)(a.s[3] * k));
  }

  public static Float8 mul(Byte8 a, Float8 b) {
    return new Float8((float)(a.x * b.x), (float)(a.y * b.y), (float)(a.z * b.z), (float)(a.w * b.w), (float)(a.s[0] * b.s[0]), (float)(a.s[1] * b.s[1]), (float)(a.s[2] * b.s[2]), (float)(a.s[3] * b.s[3]));
  }

  public static Float8 mul(Byte8 a, float k) {
    return new Float8((float)(a.x * k), (float)(a.y * k), (float)(a.z * k), (float)(a.w * k), (float)(a.s[0] * k), (float)(a.s[1] * k), (float)(a.s[2] * k), (float)(a.s[3] * k));
  }

  public static Byte8 div(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x / b.x), (byte)(a.y / b.y), (byte)(a.z / b.z), (byte)(a.w / b.w), (byte)(a.s[0] / b.s[0]), (byte)(a.s[1] / b.s[1]), (byte)(a.s[2] / b.s[2]), (byte)(a.s[3] / b.s[3]));
  }

  public static Byte8 div(Byte8 a, byte k) {
    return new Byte8((byte)(a.x / k), (byte)(a.y / k), (byte)(a.z / k), (byte)(a.w / k), (byte)(a.s[0] / k), (byte)(a.s[1] / k), (byte)(a.s[2] / k), (byte)(a.s[3] / k));
  }

  public static Double8 div(Byte8 a, Double8 b) {
    return new Double8((double)(a.x / b.x), (double)(a.y / b.y), (double)(a.z / b.z), (double)(a.w / b.w), (double)(a.s[0] / b.s[0]), (double)(a.s[1] / b.s[1]), (double)(a.s[2] / b.s[2]), (double)(a.s[3] / b.s[3]));
  }

  public static Double8 div(Byte8 a, double k) {
    return new Double8((double)(a.x / k), (double)(a.y / k), (double)(a.z / k), (double)(a.w / k), (double)(a.s[0] / k), (double)(a.s[1] / k), (double)(a.s[2] / k), (double)(a.s[3] / k));
  }

  public static Float8 div(Byte8 a, Float8 b) {
    return new Float8((float)(a.x / b.x), (float)(a.y / b.y), (float)(a.z / b.z), (float)(a.w / b.w), (float)(a.s[0] / b.s[0]), (float)(a.s[1] / b.s[1]), (float)(a.s[2] / b.s[2]), (float)(a.s[3] / b.s[3]));
  }

  public static Float8 div(Byte8 a, float k) {
    return new Float8((float)(a.x / k), (float)(a.y / k), (float)(a.z / k), (float)(a.w / k), (float)(a.s[0] / k), (float)(a.s[1] / k), (float)(a.s[2] / k), (float)(a.s[3] / k));
  }

  public static Byte8 mod(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x % b.x), (byte)(a.y % b.y), (byte)(a.z % b.z), (byte)(a.w % b.w), (byte)(a.s[0] % b.s[0]), (byte)(a.s[1] % b.s[1]), (byte)(a.s[2] % b.s[2]), (byte)(a.s[3] % b.s[3]));
  }

  public static Byte8 mod(Byte8 a, byte k) {
    return new Byte8((byte)(a.x % k), (byte)(a.y % k), (byte)(a.z % k), (byte)(a.w % k), (byte)(a.s[0] % k), (byte)(a.s[1] % k), (byte)(a.s[2] % k), (byte)(a.s[3] % k));
  }

  public static Byte8 bitAnd(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x & b.x), (byte)(a.y & b.y), (byte)(a.z & b.z), (byte)(a.w & b.w), (byte)(a.s[0] & b.s[0]), (byte)(a.s[1] & b.s[1]), (byte)(a.s[2] & b.s[2]), (byte)(a.s[3] & b.s[3]));
  }

  public static Byte8 bitOr(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x | b.x), (byte)(a.y | b.y), (byte)(a.z | b.z), (byte)(a.w | b.w), (byte)(a.s[0] | b.s[0]), (byte)(a.s[1] | b.s[1]), (byte)(a.s[2] | b.s[2]), (byte)(a.s[3] | b.s[3]));
  }

  public static Byte8 bitXor(Byte8 a, Byte8 b) {
    return new Byte8((byte)(a.x ^ b.x), (byte)(a.y ^ b.y), (byte)(a.z ^ b.z), (byte)(a.w ^ b.w), (byte)(a.s[0] ^ b.s[0]), (byte)(a.s[1] ^ b.s[1]), (byte)(a.s[2] ^ b.s[2]), (byte)(a.s[3] ^ b.s[3]));
  }

  public static Byte8 bitNot(Byte8 a) {
    return new Byte8((byte)(~a.x), (byte)(~a.y), (byte)(~a.z), (byte)(~a.w), (byte)(~a.s[0]), (byte)(~a.s[1]), (byte)(~a.s[2]), (byte)(~a.s[3]));
  }

  public static Byte8 abs(Byte8 a) {
    return new Byte8(Math.abs(a.x), Math.abs(a.y), Math.abs(a.z), Math.abs(a.w), Math.abs(a.s[0]), Math.abs(a.s[1]), Math.abs(a.s[2]), Math.abs(a.s[3]));
  }

  public static Byte8 clamp(Byte8 a, Byte8 b, Byte8 c) {
    return new Byte8(Math.clamp(a.x, b.x, c.x), Math.clamp(a.y, b.y, c.y), Math.clamp(a.z, b.z, c.z), Math.clamp(a.w, b.w, c.w), Math.clamp(a.s[0], b.s[0], c.s[0]), Math.clamp(a.s[1], b.s[1], c.s[1]), Math.clamp(a.s[2], b.s[2], c.s[2]), Math.clamp(a.s[3], b.s[3], c.s[3]));
  }

  public static Byte8 max(Byte8 a, Byte8 b) {
    return new Byte8(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z), Math.max(a.w, b.w), Math.max(a.s[0], b.s[0]), Math.max(a.s[1], b.s[1]), Math.max(a.s[2], b.s[2]), Math.max(a.s[3], b.s[3]));
  }

  public static Byte8 maxMag(Byte8 a, Byte8 b) {
    return new Byte8(Math.maxMag(a.x, b.x), Math.maxMag(a.y, b.y), Math.maxMag(a.z, b.z), Math.maxMag(a.w, b.w), Math.maxMag(a.s[0], b.s[0]), Math.maxMag(a.s[1], b.s[1]), Math.maxMag(a.s[2], b.s[2]), Math.maxMag(a.s[3], b.s[3]));
  }

  public static Byte8 min(Byte8 a, Byte8 b) {
    return new Byte8(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z), Math.min(a.w, b.w), Math.min(a.s[0], b.s[0]), Math.min(a.s[1], b.s[1]), Math.min(a.s[2], b.s[2]), Math.min(a.s[3], b.s[3]));
  }

  public static Byte8 minMag(Byte8 a, Byte8 b) {
    return new Byte8(Math.minMag(a.x, b.x), Math.minMag(a.y, b.y), Math.minMag(a.z, b.z), Math.minMag(a.w, b.w), Math.minMag(a.s[0], b.s[0]), Math.minMag(a.s[1], b.s[1]), Math.minMag(a.s[2], b.s[2]), Math.minMag(a.s[3], b.s[3]));
  }

  public static Byte8 mix(Byte8 a, Byte8 b, Byte8 c) {
    return new Byte8(Math.mix(a.x, b.x, c.x), Math.mix(a.y, b.y, c.y), Math.mix(a.z, b.z, c.z), Math.mix(a.w, b.w, c.w), Math.mix(a.s[0], b.s[0], c.s[0]), Math.mix(a.s[1], b.s[1], c.s[1]), Math.mix(a.s[2], b.s[2], c.s[2]), Math.mix(a.s[3], b.s[3], c.s[3]));
  }

  public static Byte8 clamp(Byte8 v, byte min, byte max) {
    return new Byte8(Math.clamp(v.x, min, max), Math.clamp(v.y, min, max), Math.clamp(v.z, min, max), Math.clamp(v.w, min, max), Math.clamp(v.s[0], min, max), Math.clamp(v.s[1], min, max), Math.clamp(v.s[2], min, max), Math.clamp(v.s[3], min, max));
  }

  public static Byte8 max(Byte8 x, byte y) {
    return new Byte8(Math.max(x.x, y), Math.max(x.y, y), Math.max(x.z, y), Math.max(x.w, y), Math.max(x.s[0], y), Math.max(x.s[1], y), Math.max(x.s[2], y), Math.max(x.s[3], y));
  }

  public static Byte8 min(Byte8 x, byte y) {
    return new Byte8(Math.min(x.x, y), Math.min(x.y, y), Math.min(x.z, y), Math.min(x.w, y), Math.min(x.s[0], y), Math.min(x.s[1], y), Math.min(x.s[2], y), Math.min(x.s[3], y));
  }

  public static Byte8 mix(Byte8 x, Byte8 y, byte a) {
    return new Byte8(Math.mix(x.x, y.x, a), Math.mix(x.y, y.y, a), Math.mix(x.z, y.z, a), Math.mix(x.w, y.w, a), Math.mix(x.s[0], y.s[0], a), Math.mix(x.s[1], y.s[1], a), Math.mix(x.s[2], y.s[2], a), Math.mix(x.s[3], y.s[3], a));
  }

  public static Byte8 absDiff(Byte8 a, Byte8 b) {
    return new Byte8(Math.absDiff(a.x, b.x), Math.absDiff(a.y, b.y), Math.absDiff(a.z, b.z), Math.absDiff(a.w, b.w), Math.absDiff(a.s[0], b.s[0]), Math.absDiff(a.s[1], b.s[1]), Math.absDiff(a.s[2], b.s[2]), Math.absDiff(a.s[3], b.s[3]));
  }

  public static Byte8 addSat(Byte8 a, Byte8 b) {
    return new Byte8(Math.addSat(a.x, b.x), Math.addSat(a.y, b.y), Math.addSat(a.z, b.z), Math.addSat(a.w, b.w), Math.addSat(a.s[0], b.s[0]), Math.addSat(a.s[1], b.s[1]), Math.addSat(a.s[2], b.s[2]), Math.addSat(a.s[3], b.s[3]));
  }

  public static Byte8 clz(Byte8 a) {
    return new Byte8(Math.clz(a.x), Math.clz(a.y), Math.clz(a.z), Math.clz(a.w), Math.clz(a.s[0]), Math.clz(a.s[1]), Math.clz(a.s[2]), Math.clz(a.s[3]));
  }

  public static Byte8 hadd(Byte8 a, Byte8 b) {
    return new Byte8(Math.hadd(a.x, b.x), Math.hadd(a.y, b.y), Math.hadd(a.z, b.z), Math.hadd(a.w, b.w), Math.hadd(a.s[0], b.s[0]), Math.hadd(a.s[1], b.s[1]), Math.hadd(a.s[2], b.s[2]), Math.hadd(a.s[3], b.s[3]));
  }

  public static Byte8 madHi(Byte8 a, Byte8 b, Byte8 c) {
    return new Byte8(Math.madHi(a.x, b.x, c.x), Math.madHi(a.y, b.y, c.y), Math.madHi(a.z, b.z, c.z), Math.madHi(a.w, b.w, c.w), Math.madHi(a.s[0], b.s[0], c.s[0]), Math.madHi(a.s[1], b.s[1], c.s[1]), Math.madHi(a.s[2], b.s[2], c.s[2]), Math.madHi(a.s[3], b.s[3], c.s[3]));
  }

  public static Byte8 madSat(Byte8 a, Byte8 b, Byte8 c) {
    return new Byte8(Math.madSat(a.x, b.x, c.x), Math.madSat(a.y, b.y, c.y), Math.madSat(a.z, b.z, c.z), Math.madSat(a.w, b.w, c.w), Math.madSat(a.s[0], b.s[0], c.s[0]), Math.madSat(a.s[1], b.s[1], c.s[1]), Math.madSat(a.s[2], b.s[2], c.s[2]), Math.madSat(a.s[3], b.s[3], c.s[3]));
  }

  public static Byte8 mulHi(Byte8 a, Byte8 b) {
    return new Byte8(Math.mulHi(a.x, b.x), Math.mulHi(a.y, b.y), Math.mulHi(a.z, b.z), Math.mulHi(a.w, b.w), Math.mulHi(a.s[0], b.s[0]), Math.mulHi(a.s[1], b.s[1]), Math.mulHi(a.s[2], b.s[2]), Math.mulHi(a.s[3], b.s[3]));
  }

  public static Byte8 rhadd(Byte8 a, Byte8 b) {
    return new Byte8(Math.rhadd(a.x, b.x), Math.rhadd(a.y, b.y), Math.rhadd(a.z, b.z), Math.rhadd(a.w, b.w), Math.rhadd(a.s[0], b.s[0]), Math.rhadd(a.s[1], b.s[1]), Math.rhadd(a.s[2], b.s[2]), Math.rhadd(a.s[3], b.s[3]));
  }

  public static Byte8 rotate(Byte8 a, Byte8 b) {
    return new Byte8(Math.rotate(a.x, b.x), Math.rotate(a.y, b.y), Math.rotate(a.z, b.z), Math.rotate(a.w, b.w), Math.rotate(a.s[0], b.s[0]), Math.rotate(a.s[1], b.s[1]), Math.rotate(a.s[2], b.s[2]), Math.rotate(a.s[3], b.s[3]));
  }

  public static Byte8 subSat(Byte8 a, Byte8 b) {
    return new Byte8(Math.subSat(a.x, b.x), Math.subSat(a.y, b.y), Math.subSat(a.z, b.z), Math.subSat(a.w, b.w), Math.subSat(a.s[0], b.s[0]), Math.subSat(a.s[1], b.s[1]), Math.subSat(a.s[2], b.s[2]), Math.subSat(a.s[3], b.s[3]));
  }
}
