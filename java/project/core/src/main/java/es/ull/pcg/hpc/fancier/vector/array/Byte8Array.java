package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Byte8;

public class Byte8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Byte8Array (long nativePtr) {
    initNative(nativePtr);
  }

  public Byte8Array (int n) {
    initNative(n);
  }

  public Byte8Array (byte[] v) {
    initNative(v);
  }

  public Byte8Array (Byte8Array array) {
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
  private native void initNative (byte[] v);
  private native void initNative (Byte8Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native Byte8 get (int i);
  public native void set (int i, Byte8 x);
  public native long length ();

  public native byte[] getContents ();
  public native void setContents (byte[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
