package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Float8;

public class Float8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Float8Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Float8Array (int n) {
    initNative(n);
  }

  public Float8Array (float[] v) {
    initNative(v);
  }

  public Float8Array (Float8Array array) {
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
  private native void initNative (Float8Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Float8 get (int i);
  public native void set (int i, Float8 x);
  public native long length ();

  public native float[] getContents ();
  public native void setContents (float[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
