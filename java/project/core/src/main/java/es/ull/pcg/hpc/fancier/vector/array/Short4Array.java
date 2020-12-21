package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Short4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Short4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Short4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Short4Array(int n) {
    initNative(n);
  }

  public Short4Array(short[] v) {
    initNative(v);
  }

  public Short4Array(Short4Array array) {
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

  public static Short4 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Short.BYTES * 4;
    return new Short4(buffer.getShort(baseIndex + 0 * Short.BYTES), buffer.getShort(baseIndex + 1 * Short.BYTES), buffer.getShort(baseIndex + 2 * Short.BYTES), buffer.getShort(baseIndex + 3 * Short.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Short4 result) {
    final int baseIndex = index * Short.BYTES * 4;
    result.x = buffer.getShort(baseIndex + 0 * Short.BYTES);
    result.y = buffer.getShort(baseIndex + 1 * Short.BYTES);
    result.z = buffer.getShort(baseIndex + 2 * Short.BYTES);
    result.w = buffer.getShort(baseIndex + 3 * Short.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Short4 a) {
    final int baseIndex = index * Short.BYTES * 4;
    buffer.putShort(baseIndex + 0 * Short.BYTES, a.x);
    buffer.putShort(baseIndex + 1 * Short.BYTES, a.y);
    buffer.putShort(baseIndex + 2 * Short.BYTES, a.z);
    buffer.putShort(baseIndex + 3 * Short.BYTES, a.w);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(short[] v);
  private native void initNative(Short4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Short4 get(int i);
  public native void set(int i, Short4 x);
  public native long length();

  public native short[] getArray();
  public native void setArray(short[] v);
  public native void setCopy(Short4Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
