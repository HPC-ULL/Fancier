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

package es.ull.pcg.hpc.fancier.image;

import es.ull.pcg.hpc.fancier.vector.Byte4;

import es.ull.pcg.hpc.fancier.Translatable;


public class RGBAColor {
  private RGBAColor() {}

  @Translatable
  public static final int Red = 0xff0000ff;
  @Translatable
  public static final int Green = 0x00ff00ff;
  @Translatable
  public static final int Blue = 0x0000ffff;

  @Translatable
  public static final int Yellow = 0xffff00ff;
  @Translatable
  public static final int Magenta = 0xff00ffff;
  @Translatable
  public static final int Cyan = 0x00ffffff;

  @Translatable
  public static final int White = 0xffffffff;
  @Translatable
  public static final int LtGray = 0xccccccff;
  @Translatable
  public static final int Gray = 0x888888ff;
  @Translatable
  public static final int DkGray = 0x444444ff;
  @Translatable
  public static final int Black = 0x000000ff;

  @Translatable
  public static final int Transparent = 0x00000000;

  @Translatable
  public static int toRgba(Byte4 color) {
    return ((color.x & 0xff) << 24) | ((color.y & 0xff) << 16) | ((color.z & 0xff) << 8)
        | ((color.w & 0xff) << 0);
  }

  @Translatable
  public static Byte4 fromRgba(int rgba) {
    return new Byte4((byte) ((rgba >> 24) & 0xff), (byte) ((rgba >> 16) & 0xff),
        (byte) ((rgba >> 8) & 0xff), (byte) ((rgba >> 0) & 0xff));
  }

  @Translatable
  public static byte alpha(Byte4 color) {
    return color.x;
  }

  @Translatable
  public static byte red(Byte4 color) {
    return color.y;
  }

  @Translatable
  public static byte green(Byte4 color) {
    return color.z;
  }

  @Translatable
  public static byte blue(Byte4 color) {
    return color.w;
  }

  @Translatable
  public static Byte4 RED() {
    return fromRgba(Red);
  }

  @Translatable
  public static Byte4 GREEN() {
    return fromRgba(Green);
  }

  @Translatable
  public static Byte4 BLUE() {
    return fromRgba(Blue);
  }

  @Translatable
  public static Byte4 YELLOW() {
    return fromRgba(Yellow);
  }

  @Translatable
  public static Byte4 MAGENTA() {
    return fromRgba(Magenta);
  }

  @Translatable
  public static Byte4 CYAN() {
    return fromRgba(Cyan);
  }

  @Translatable
  public static Byte4 WHITE() {
    return fromRgba(White);
  }

  @Translatable
  public static Byte4 LTGRAY() {
    return fromRgba(LtGray);
  }

  @Translatable
  public static Byte4 GRAY() {
    return fromRgba(Gray);
  }

  @Translatable
  public static Byte4 DKGRAY() {
    return fromRgba(DkGray);
  }

  @Translatable
  public static Byte4 BLACK() {
    return fromRgba(Black);
  }
}
