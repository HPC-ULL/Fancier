package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Double8;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Double8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Double8Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Double8Array(int n) {
    initNative(n);
  }

  public Double8Array(double[] v) {
    initNative(v);
  }

  public Double8Array(Double8Array array) {
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
    buffer.position(index * Double.BYTES * 8);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(double[] v);
  private native void initNative(Double8Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Double8 get(int i);
  public native void set(int i, Double8 x);
  public native long length();

  public native double[] getArray();
  public native void setArray(double[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
