package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Short2;

public class Short2Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Short2Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Short2Array (int n) {
    initNative(n);
  }

  public Short2Array (short[] v) {
    initNative(v);
  }

  public Short2Array (Short2Array array) {
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
  private native void initNative (short[] v);
  private native void initNative (Short2Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Short2 get (int i);
  public native void set (int i, Short2 x);
  public native long length ();

  public native short[] getContents ();
  public native void setContents (short[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
