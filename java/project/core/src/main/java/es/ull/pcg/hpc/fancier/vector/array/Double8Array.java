package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Double8;

public class Double8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Double8Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Double8Array (int n) {
    initNative(n);
  }

  public Double8Array (double[] v) {
    initNative(v);
  }

  public Double8Array (Double8Array array) {
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
  private native void initNative (double[] v);
  private native void initNative (Double8Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Double8 get (int i);
  public native void set (int i, Double8 x);
  public native long length ();

  public native double[] getContents ();
  public native void setContents (double[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
