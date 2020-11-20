package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Short4;

public class Short4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Short4Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Short4Array (int n) {
    initNative(n);
  }

  public Short4Array (short[] v) {
    initNative(v);
  }

  public Short4Array (Short4Array array) {
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
  private native void initNative (Short4Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Short4 get (int i);
  public native void set (int i, Short4 x);
  public native long length ();

  public native short[] getContents ();
  public native void setContents (short[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
