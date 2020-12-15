package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Float4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Float4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Float4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Float4Array(int n) {
    initNative(n);
  }

  public Float4Array(float[] v) {
    initNative(v);
  }

  public Float4Array(Float4Array array) {
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
    buffer.position(index * Float.BYTES * 4);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(float[] v);
  private native void initNative(Float4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Float4 get(int i);
  public native void set(int i, Float4 x);
  public native long length();

  public native float[] getArray();
  public native void setArray(float[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
