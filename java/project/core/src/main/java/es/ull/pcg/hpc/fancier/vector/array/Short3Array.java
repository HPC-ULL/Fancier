package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Short3;

public class Short3Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Short3Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Short3Array (int n) {
    initNative(n);
  }

  public Short3Array (short[] v) {
    initNative(v);
  }

  public Short3Array (Short3Array array) {
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
  private native void initNative (Short3Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Short3 get (int i);
  public native void set (int i, Short3 x);
  public native long length ();

  public native short[] getContents ();
  public native void setContents (short[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
