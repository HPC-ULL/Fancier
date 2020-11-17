package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Long8;

public class Long8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Long8Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Long8Array (int n) {
    initNative(n);
  }

  public Long8Array (long[] v) {
    initNative(v);
  }

  public Long8Array (Long8Array array) {
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
  private native void initNative (long[] v);
  private native void initNative (Long8Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Long8 get (int i);
  public native void set (int i, Long8 x);
  public native long length ();

  public native long[] getContents ();
  public native void syncToNative ();
  public native void syncToOCL ();
}
