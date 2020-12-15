package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Byte4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Byte4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Byte4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Byte4Array(int n) {
    initNative(n);
  }

  public Byte4Array(byte[] v) {
    initNative(v);
  }

  public Byte4Array(Byte4Array array) {
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
    buffer.position(index * Byte.BYTES * 4);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(byte[] v);
  private native void initNative(Byte4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Byte4 get(int i);
  public native void set(int i, Byte4 x);
  public native long length();

  public native byte[] getArray();
  public native void setArray(byte[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
