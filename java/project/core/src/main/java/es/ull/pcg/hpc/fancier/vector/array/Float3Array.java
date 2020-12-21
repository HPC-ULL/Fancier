package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Float3;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Float3Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Float3Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Float3Array(int n) {
    initNative(n);
  }

  public Float3Array(float[] v) {
    initNative(v);
  }

  public Float3Array(Float3Array array) {
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

  public static Float3 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Float.BYTES * 4;
    return new Float3(buffer.getFloat(baseIndex + 0 * Float.BYTES), buffer.getFloat(baseIndex + 1 * Float.BYTES), buffer.getFloat(baseIndex + 2 * Float.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Float3 result) {
    final int baseIndex = index * Float.BYTES * 4;
    result.x = buffer.getFloat(baseIndex + 0 * Float.BYTES);
    result.y = buffer.getFloat(baseIndex + 1 * Float.BYTES);
    result.z = buffer.getFloat(baseIndex + 2 * Float.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Float3 a) {
    final int baseIndex = index * Float.BYTES * 4;
    buffer.putFloat(baseIndex + 0 * Float.BYTES, a.x);
    buffer.putFloat(baseIndex + 1 * Float.BYTES, a.y);
    buffer.putFloat(baseIndex + 2 * Float.BYTES, a.z);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(float[] v);
  private native void initNative(Float3Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Float3 get(int i);
  public native void set(int i, Float3 x);
  public native long length();

  public native float[] getArray();
  public native void setArray(float[] v);
  public native void setCopy(Float3Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
