package es.ull.pcg.hpc.fancier.array;

public class ByteArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private ByteArray (long nativePtr) {
    initNative(nativePtr);
  }

  public ByteArray (int n) {
    initNative(n);
  }

  public ByteArray (byte[] v) {
    initNative(v);
  }

  public ByteArray (ByteArray array) {
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
  private native void initNative (ByteArray array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native byte get (int i);
  public native void set (int i, byte x);
  public native long length ();

  public native byte[] getContents ();
  public native void setContents (byte[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
