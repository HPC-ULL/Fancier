package es.ull.pcg.hpc.fancier.array;

public class LongArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private LongArray (long nativePtr) {
    initNative(nativePtr);
  }

  public LongArray (int n) {
    initNative(n);
  }

  public LongArray (long[] v) {
    initNative(v);
  }

  public LongArray (LongArray array) {
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
  private native void initNative (LongArray array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native long get (int i);
  public native void set (int i, long x);
  public native long length ();

  public native long[] getContents ();
  public native void setContents (long[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
