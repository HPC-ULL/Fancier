package es.ull.pcg.hpc.fancier.image;

import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Int2;
import es.ull.pcg.hpc.fancier.vector.array.Byte4Array;

public class ARGBImage implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private ARGBImage(long nativePtr) {
    initNative(nativePtr);
  }

  public ARGBImage(Int2 dims) {
    this(dims.x, dims.y);
  }

  public ARGBImage(int width, int height) {
    initNative(width, height);
  }

  public ARGBImage(int[] pixels, int width) {
    initNative(pixels, width);
  }

  public ARGBImage(ARGBImage other) {
    initNative(other);
  }

  public void release () throws Exception {
    if (nativeInstancePtr != 0L)
      releaseNative();
  }

  @Override
  public void close () throws Exception {
    release();
  }

  @Override
  public void finalize () throws Throwable {
    if (nativeInstancePtr != 0L)
      releaseNativeRef();

    super.finalize();
  }

  private native void initNative (long nativePtr);
  private native void initNative (int width, int height);
  private native void initNative (int[] pixels, int width);
  private native void initNative (ARGBImage other);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public Byte4 get (Int2 coords) {
    return get(coords.x, coords.y);
  }

  public void set (Int2 coords, Byte4 argb) {
    set(coords.x, coords.y, argb);
  }

  public native Byte4 get (int x, int y);
  public native void set (int x, int y, Byte4 argb);
  public native Byte4Array getPixels ();
  public native Int2 getDims ();
  public native int getWidth ();
  public native int getHeight ();

  public native void syncToNative ();
  public native void syncToOCL ();
}
