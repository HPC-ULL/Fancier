package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Float3;

public class Float3Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Float3Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Float3Array (int n) {
    initNative(n);
  }

  public Float3Array (float[] v) {
    initNative(v);
  }

  public Float3Array (Float3Array array) {
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
  private native void initNative (Float3Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Float3 get (int i);
  public native void set (int i, Float3 x);
  public native long length ();

  public native float[] getContents ();
  public native void syncToNative ();
  public native void syncToOCL ();
}
