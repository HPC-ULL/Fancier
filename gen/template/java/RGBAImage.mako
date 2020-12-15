package es.ull.pcg.hpc.fancier.image;

import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Int2;
import es.ull.pcg.hpc.fancier.vector.array.Byte4Array;

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
    initNative(pixels, width);
  }

  public RGBAImage(RGBAImage other) {
    initNative(other);
  }

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
  private native void initNative(int[] pixels, int width);
  private native void initNative(RGBAImage other);
% if android:
  private native void initNative(Bitmap bmp);
% endif
  private native void releaseNative();
  private native void releaseNativeRef();

  public Byte4 get(Int2 coords) {
    return get(coords.x, coords.y);
  }

  public void set(Int2 coords, Byte4 argb) {
    set(coords.x, coords.y, argb);
  }

  public native Byte4 get(int x, int y);
  public native void set(int x, int y, Byte4 argb);

  public native Byte4Array getPixels();
  public native void setPixels(int[] pixels, int width);
% if android:
  public native void setPixels(Bitmap bmp);
  public native void updateBitmap(Bitmap bmp);
% endif

  public native Int2 getDims();
  public native int getWidth();
  public native int getHeight();

  public native void syncToNative();
  public native void syncToOCL();
}
