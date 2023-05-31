## Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
## Copyright (C) 2021 Universidad de La Laguna.
##
## Fancier is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## Fancier is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
##
<%include file="/license.txt"/>
<%include file="/auto-gen.txt"/>
package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.${type|c}${vlen};

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import es.ull.pcg.hpc.fancier.Translatable;



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

<%
  bytes_expr = ('Integer' if type.lower() == 'int' else type.capitalize()) + '.BYTES'
  buffer_get = f'get{type.capitalize()}' if type.lower() != 'byte' else 'get'
  buffer_put = f'put{type.capitalize()}' if type.lower() != 'byte' else 'put'
%>\
  public static ${type|c}${vlen} getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * ${bytes_expr} * ${vwidth(vlen)};
    return new ${type|c}${vlen}(${', '.join([f'buffer.{buffer_get}(baseIndex + {i} * {bytes_expr})' for i, field in enumerate(vfields[:vlen])])});
  }

  public static void getBuffer(ByteBuffer buffer, int index, ${type|c}${vlen} result) {
    final int baseIndex = index * ${bytes_expr} * ${vwidth(vlen)};
    % for i, field in enumerate(vfields[:vlen]):
    result.${field} = buffer.${buffer_get}(baseIndex + ${i} * ${bytes_expr});
    % endfor
  }

  public static void setBuffer(ByteBuffer buffer, int index, ${type|c}${vlen} a) {
    final int baseIndex = index * ${bytes_expr} * ${vwidth(vlen)};
    % for i, field in enumerate(vfields[:vlen]):
    buffer.${buffer_put}(baseIndex + ${i} * ${bytes_expr}, a.${field});
    % endfor
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(${type|l}[] v);
  private native void initNative(${type|c}${vlen}Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public native ${type|c}${vlen} get(int i);
  @Translatable
  public native void set(int i, ${type|c}${vlen} x);
  @Translatable
  public native long length();

  public native ${type|l}[] getArray();
  public native void setArray(${type|l}[] v);
  public native void setCopy(${type|c}${vlen}Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToHost();
  public native void syncToDevice();
}
