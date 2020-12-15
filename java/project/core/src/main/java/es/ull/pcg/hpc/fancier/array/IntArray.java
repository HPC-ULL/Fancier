package es.ull.pcg.hpc.fancier.array;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class IntArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private IntArray(long nativePtr) {
    initNative(nativePtr);
  }

  public IntArray(int n) {
    initNative(n);
  }

  public IntArray(int[] v) {
    initNative(v);
  }

  public IntArray(IntArray array) {
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
    buffer.position(index * Integer.BYTES);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(int[] v);
  private native void initNative(IntArray array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native int get(int i);
  public native void set(int i, int x);
  public native long length();

  public native int[] getArray();
  public native void setArray(int[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer buffer);

  public native void syncToNative();
  public native void syncToOCL();
}
