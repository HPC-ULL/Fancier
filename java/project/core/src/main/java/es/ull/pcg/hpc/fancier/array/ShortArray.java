package es.ull.pcg.hpc.fancier.array;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class ShortArray implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private ShortArray(long nativePtr) {
    initNative(nativePtr);
  }

  public ShortArray(int n) {
    initNative(n);
  }

  public ShortArray(short[] v) {
    initNative(v);
  }

  public ShortArray(ShortArray array) {
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

  public static short getBuffer(ByteBuffer buffer, int index) {
    return buffer.getShort(index * Short.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, short x) {
    buffer.putShort(index * Short.BYTES, x);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(short[] v);
  private native void initNative(ShortArray array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native short get(int i);
  public native void set(int i, short x);
  public native long length();

  public native short[] getArray();
  public native void setArray(short[] v);
  public native void setCopy(ShortArray array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer buffer);

  public native void syncToNative();
  public native void syncToOCL();
}
