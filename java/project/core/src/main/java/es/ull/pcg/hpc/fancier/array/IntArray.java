package es.ull.pcg.hpc.fancier.array;

public class IntArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private IntArray (long nativePtr) {
    initNative(nativePtr);
  }

  public IntArray (int n) {
    initNative(n);
  }

  public IntArray (int[] v) {
    initNative(v);
  }

  public IntArray (IntArray array) {
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
  private native void initNative (IntArray array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native int get (int i);
  public native void set (int i, int x);
  public native long length ();

  public native int[] getContents ();
  public native void setContents (int[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
