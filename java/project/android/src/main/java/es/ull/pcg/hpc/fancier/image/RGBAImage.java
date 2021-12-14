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

package es.ull.pcg.hpc.fancier.image;

import java.nio.ByteBuffer;
import java.awt.image.BufferedImage;
import java.awt.image.DataBufferInt;
import java.awt.image.DataBuffer;
import java.awt.image.Raster;

import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Int2;
import es.ull.pcg.hpc.fancier.vector.array.Byte4Array;

import android.graphics.Bitmap;

public class RGBAImage implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private RGBAImage(long nativePtr) {
    initNative(nativePtr);
  }

  public RGBAImage(Int2 dims) {
    this(dims.x, dims.y);
  }

  public RGBAImage(int width, int height) {
    initNative(width, height);
  }

  public RGBAImage(int[] pixels, int width) {
    initNative(pixels, width, false);
  }

  public RGBAImage(RGBAImage image) {
    initNative(image);
  }

  public RGBAImage(BufferedImage image) {
    initNative(((DataBufferInt) image.getRaster().getDataBuffer()).getData(), image.getWidth(), true);
  }

  public RGBAImage(Bitmap bmp) {
    initNative(bmp);
  }

  public void release() {
    if (nativeInstancePtr != 0L)
      releaseNative();
  }

  @Override
  public void close() {
    release();
  }

  @Override
  public void finalize() throws Throwable {
    if (nativeInstancePtr != 0L)
      releaseNativeRef();

    super.finalize();
  }

  private native void initNative(long nativePtr);
  private native void initNative(int width, int height);
  private native void initNative(RGBAImage image);
  private native void initNative(int[] pixels, int width, boolean changeFromBGRA);
  private native void initNative(Bitmap bmp);
  private native void releaseNative();
  private native void releaseNativeRef();

  public Byte4 get(Int2 coords) {
    return get(coords.x, coords.y);
  }

  public void set(Int2 coords, Byte4 rgba) {
    set(coords.x, coords.y, rgba);
  }

  public ByteBuffer getBuffer() {
    return getPixels().getBuffer();
  }

  public Byte4 getBuffer(ByteBuffer buffer, int x, int y) {
    return Byte4Array.getBuffer(buffer, y * getWidth() + x);
  }

  public void getBuffer(ByteBuffer buffer, int x, int y, Byte4 result) {
    Byte4Array.getBuffer(buffer, y * getWidth() + x, result);
  }

  public void setBuffer(ByteBuffer buffer, int x, int y, Byte4 rgba) {
    Byte4Array.setBuffer(buffer, y * getWidth() + x, rgba);
  }

  public void setPixels(BufferedImage image) {
    setPixels(((DataBufferInt) image.getRaster().getDataBuffer()).getData(), image.getWidth(), true);
  }

  public void updateImage(BufferedImage image) {
    updateArray(((DataBufferInt) image.getRaster().getDataBuffer()).getData(), true);
  }

  public native Byte4 get(int x, int y);
  public native void set(int x, int y, Byte4 rgba);

  public native Byte4Array getPixels();
  public native void setPixels(int[] pixels, int width);
  public native void setPixels(RGBAImage image);
  public native void setPixels(Bitmap bmp);
  public native void updateBitmap(Bitmap bmp);
  private native void setPixels(int[] pixels, int width, boolean changeFromBGRA);  
  private native void updateArray(int[] array, boolean changeFromBGRA);

  public native Int2 getDims();
  public native int getWidth();
  public native int getHeight();

  public native void syncToNative();
  public native void syncToOCL();
}
