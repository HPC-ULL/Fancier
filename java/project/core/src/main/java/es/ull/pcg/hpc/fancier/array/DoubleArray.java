package es.ull.pcg.hpc.fancier.array;

public class DoubleArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private DoubleArray(long nativePtr) {
    initNative(nativePtr);
  }

  public DoubleArray(int n) {
    initNative(n);
  }

  public DoubleArray(double[] v) {
    initNative(v);
  }

  public DoubleArray(DoubleArray array) {
    initNative(array);
  }

  /**
   * Release native buffers belonging to this class.
   *
   * This must be called in order to avoid memory leaks.
   */
  public void release() {
    if (nativeInstancePtr != 0L)
      releaseNative();
  }

  @Override
  public void close() {
    release();
  }

  @Override
  public void finalize() throws Throwable {
    if (nativeInstancePtr != 0L)
      releaseNativeRef();

    super.finalize();
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(double[] v);
  private native void initNative(DoubleArray array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native double get(int i);
  public native void set(int i, double x);
  public native long length();

  public native double[] getContents();
  public native void setContents(double[] v);

  public native void syncToNative();
  public native void syncToOCL();
}
