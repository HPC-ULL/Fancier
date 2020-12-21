package es.ull.pcg.hpc.fancier.array;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class LongArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private LongArray(long nativePtr) {
    initNative(nativePtr);
  }

  public LongArray(int n) {
    initNative(n);
  }

  public LongArray(long[] v) {
    initNative(v);
  }

  public LongArray(LongArray array) {
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

  public static long getBuffer(ByteBuffer buffer, int index) {
    return buffer.getLong(index * Long.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, long x) {
    buffer.putLong(index * Long.BYTES, x);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(long[] v);
  private native void initNative(LongArray array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native long get(int i);
  public native void set(int i, long x);
  public native long length();

  public native long[] getArray();
  public native void setArray(long[] v);
  public native void setCopy(LongArray array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer buffer);

  public native void syncToNative();
  public native void syncToOCL();
}
