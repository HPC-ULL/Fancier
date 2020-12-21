package es.ull.pcg.hpc.fancier.array;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class ${type|c}Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private ${type|c}Array(long nativePtr) {
    initNative(nativePtr);
  }

  public ${type|c}Array(int n) {
    initNative(n);
  }

  public ${type|c}Array(${type|l}[] v) {
    initNative(v);
  }

  public ${type|c}Array(${type|c}Array array) {
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

<%
  bytes_expr = ('Integer' if type.lower() == 'int' else type.capitalize()) + '.BYTES'
  buffer_get = f'get{type.capitalize()}' if type.lower() != 'byte' else 'get'
  buffer_put = f'put{type.capitalize()}' if type.lower() != 'byte' else 'put'
%>\
  public static ${type|l} getBuffer(ByteBuffer buffer, int index) {
    return buffer.${buffer_get}(index * ${bytes_expr});
  }

  public static void setBuffer(ByteBuffer buffer, int index, ${type|l} x) {
    buffer.${buffer_put}(index * ${bytes_expr}, x);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(${type|l}[] v);
  private native void initNative(${type|c}Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native ${type|l} get(int i);
  public native void set(int i, ${type|l} x);
  public native long length();

  public native ${type|l}[] getArray();
  public native void setArray(${type|l}[] v);
  public native void setCopy(${type|c}Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer buffer);

  public native void syncToNative();
  public native void syncToOCL();
}
