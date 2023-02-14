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
package es.ull.pcg.hpc.fancier.image;

import java.nio.ByteBuffer;
% if not android:
import java.awt.image.BufferedImage;
import java.awt.image.DataBufferInt;
% endif

import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Int2;
import es.ull.pcg.hpc.fancier.vector.array.Byte4Array;

import es.ull.pcg.hpc.fancier.Translatable;

% if android:
import android.graphics.Bitmap;

% endif

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

% if not android:
  public RGBAImage(BufferedImage image) {
    initNative(((DataBufferInt) image.getRaster().getDataBuffer()).getData(), image.getWidth(), true);
  }
% endif

% if android:
  public RGBAImage(Bitmap bmp) {
    initNative(bmp);
  }
% endif

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
% if android:
  private native void initNative(Bitmap bmp);
% endif
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public Byte4 get(Int2 coords) {
    return get(coords.x, coords.y);
  }

  @Translatable
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

  public void setPixels (int[] pixels, int width) {
    setPixels(pixels, width, false);
  }

% if not android:
  public void setPixels(BufferedImage image) {
    setPixels(((DataBufferInt) image.getRaster().getDataBuffer()).getData(), image.getWidth(), true);
  }

  public void updateImage(BufferedImage image) {
    updateArray(((DataBufferInt) image.getRaster().getDataBuffer()).getData(), true);
  }
% endif

  @Translatable
  public native Byte4 get(int x, int y);
  @Translatable
  public native void set(int x, int y, Byte4 rgba);

  public native Byte4Array getPixels();
  private native void setPixels(int[] pixels, int width, boolean changeFromBGRA);  
  public native void setPixels(RGBAImage image);
% if android:
  public native void setPixels(Bitmap bmp);
  public native void updateBitmap(Bitmap bmp);
% endif
% if not android:
  private native void updateArray(int[] array, boolean changeFromBGRA);
% endif

  @Translatable
  public native Int2 getDims();
  @Translatable
  public native int getWidth();
  @Translatable
  public native int getHeight();

  public native void syncToNative();
  public native void syncToOCL();
}
