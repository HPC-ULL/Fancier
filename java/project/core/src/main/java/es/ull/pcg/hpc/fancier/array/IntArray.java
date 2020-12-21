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

  public static int getBuffer(ByteBuffer buffer, int index) {
    return buffer.getInt(index * Integer.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, int x) {
    buffer.putInt(index * Integer.BYTES, x);
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
  public native void setCopy(IntArray array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer buffer);

  public native void syncToNative();
  public native void syncToOCL();
}
