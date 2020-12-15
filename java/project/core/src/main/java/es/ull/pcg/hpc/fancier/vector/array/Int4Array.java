package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Int4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Int4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Int4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Int4Array(int n) {
    initNative(n);
  }

  public Int4Array(int[] v) {
    initNative(v);
  }

  public Int4Array(Int4Array array) {
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
    buffer.position(index * Integer.BYTES * 4);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(int[] v);
  private native void initNative(Int4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Int4 get(int i);
  public native void set(int i, Int4 x);
  public native long length();

  public native int[] getArray();
  public native void setArray(int[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
