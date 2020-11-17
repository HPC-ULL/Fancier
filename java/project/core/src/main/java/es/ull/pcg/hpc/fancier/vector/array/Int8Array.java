package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Int8;

public class Int8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Int8Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Int8Array (int n) {
    initNative(n);
  }

  public Int8Array (int[] v) {
    initNative(v);
  }

  public Int8Array (Int8Array array) {
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
  private native void initNative (int[] v);
  private native void initNative (Int8Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Int8 get (int i);
  public native void set (int i, Int8 x);
  public native long length ();

  public native int[] getContents ();
  public native void syncToNative ();
  public native void syncToOCL ();
}
