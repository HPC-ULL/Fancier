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

  public static Byte4 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Byte.BYTES * 4;
    return new Byte4(buffer.get(baseIndex + 0 * Byte.BYTES), buffer.get(baseIndex + 1 * Byte.BYTES), buffer.get(baseIndex + 2 * Byte.BYTES), buffer.get(baseIndex + 3 * Byte.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Byte4 result) {
    final int baseIndex = index * Byte.BYTES * 4;
    result.x = buffer.get(baseIndex + 0 * Byte.BYTES);
    result.y = buffer.get(baseIndex + 1 * Byte.BYTES);
    result.z = buffer.get(baseIndex + 2 * Byte.BYTES);
    result.w = buffer.get(baseIndex + 3 * Byte.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Byte4 a) {
    final int baseIndex = index * Byte.BYTES * 4;
    buffer.put(baseIndex + 0 * Byte.BYTES, a.x);
    buffer.put(baseIndex + 1 * Byte.BYTES, a.y);
    buffer.put(baseIndex + 2 * Byte.BYTES, a.z);
    buffer.put(baseIndex + 3 * Byte.BYTES, a.w);
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
  public native void setCopy(Byte4Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
