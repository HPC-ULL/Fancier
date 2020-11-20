package es.ull.pcg.hpc.fancier.array;

public class ${type|c}Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private ${type|c}Array (long nativePtr) {
    initNative(nativePtr);
  }

  public ${type|c}Array (int n) {
    initNative(n);
  }

  public ${type|c}Array (${type|l}[] v) {
    initNative(v);
  }

  public ${type|c}Array (${type|c}Array array) {
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
  private native void initNative (${type|l}[] v);
  private native void initNative (${type|c}Array array);
  private native void releaseNative ();
  private native void releaseNativeRef ();

  public native ${type|l} get (int i);
  public native void set (int i, ${type|l} x);
  public native long length ();

  public native ${type|l}[] getContents ();
  public native void setContents (${type|l}[] v);

  public native void syncToNative ();
  public native void syncToOCL ();
}
