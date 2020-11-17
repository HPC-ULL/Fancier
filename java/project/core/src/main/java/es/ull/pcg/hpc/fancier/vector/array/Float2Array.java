package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Float2;

public class Float2Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Float2Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Float2Array (int n) {
    initNative(n);
  }

  public Float2Array (float[] v) {
    initNative(v);
  }

  public Float2Array (Float2Array array) {
    initNative(array);
  }

  /**
   * Release native buffers belonging to this class.
   *
   * This must be called in order to avoid memory leaks.
   */
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
  private native void initNative (int n);
  private native void initNative (float[] v);
  private native void initNative (Float2Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Float2 get (int i);
  public native void set (int i, Float2 x);
  public native long length ();

  public native float[] getContents ();
  public native void syncToNative ();
  public native void syncToOCL ();
}
