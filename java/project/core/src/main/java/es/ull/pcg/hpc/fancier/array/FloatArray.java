package es.ull.pcg.hpc.fancier.array;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class FloatArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private FloatArray(long nativePtr) {
    initNative(nativePtr);
  }

  public FloatArray(int n) {
    initNative(n);
  }

  public FloatArray(float[] v) {
    initNative(v);
  }

  public FloatArray(FloatArray array) {
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

  public static float getBuffer(ByteBuffer buffer, int index) {
    return buffer.getFloat(index * Float.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, float x) {
    buffer.putFloat(index * Float.BYTES, x);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(float[] v);
  private native void initNative(FloatArray array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native float get(int i);
  public native void set(int i, float x);
  public native long length();

  public native float[] getArray();
  public native void setArray(float[] v);
  public native void setCopy(FloatArray array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer buffer);

  public native void syncToNative();
  public native void syncToOCL();
}
