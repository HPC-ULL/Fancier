package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.${type|c}${vlen};

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class ${type|c}${vlen}Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private ${type|c}${vlen}Array(long nativePtr) {
    initNative(nativePtr);
  }

  public ${type|c}${vlen}Array(int n) {
    initNative(n);
  }

  public ${type|c}${vlen}Array(${type|l}[] v) {
    initNative(v);
  }

  public ${type|c}${vlen}Array(${type|c}${vlen}Array array) {
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
% if type.lower() == 'int':
    buffer.position(index * Integer.BYTES * ${vwidth(vlen)});
% else:
    buffer.position(index * ${type|c}.BYTES * ${vwidth(vlen)});
% endif
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(${type|l}[] v);
  private native void initNative(${type|c}${vlen}Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native ${type|c}${vlen} get(int i);
  public native void set(int i, ${type|c}${vlen} x);
  public native long length();

  public native ${type|l}[] getArray();
  public native void setArray(${type|l}[] v);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
