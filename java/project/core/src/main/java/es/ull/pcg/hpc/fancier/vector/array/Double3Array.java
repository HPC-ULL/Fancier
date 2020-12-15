package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Double3;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Double3Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Double3Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Double3Array(int n) {
    initNative(n);
  }

  public Double3Array(double[] v) {
    initNative(v);
  }

  public Double3Array(Double3Array array) {
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

  public ByteBuffer getBuffer() {
    return getBufferImpl().order(ByteOrder.nativeOrder());
  }

  public static void indexBuffer(ByteBuffer buffer, int index) {
    buffer.position(index * Double.BYTES * 4);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(double[] v);
  private native void initNative(Double3Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Double3 get(int i);
  public native void set(int i, Double3 x);
  public native long length();

  public native double[] getArray();
  public native void setArray(double[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
