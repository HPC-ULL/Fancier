/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * DO NOT MANUALLY EDIT THIS FILE!
 * This file has been automatically generated, any modifications will be lost
 * when generating the Fancier library. Any modifications to this file must be
 * done via the corresponding template.
 */

package es.ull.pcg.hpc.fancier.vector.array;

import es.ull.pcg.hpc.fancier.vector.Long4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Long4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Long4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Long4Array(int n) {
    initNative(n);
  }

  public Long4Array(long[] v) {
    initNative(v);
  }

  public Long4Array(Long4Array array) {
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

  public static Long4 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Long.BYTES * 4;
    return new Long4(buffer.getLong(baseIndex + 0 * Long.BYTES), buffer.getLong(baseIndex + 1 * Long.BYTES), buffer.getLong(baseIndex + 2 * Long.BYTES), buffer.getLong(baseIndex + 3 * Long.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Long4 result) {
    final int baseIndex = index * Long.BYTES * 4;
    result.x = buffer.getLong(baseIndex + 0 * Long.BYTES);
    result.y = buffer.getLong(baseIndex + 1 * Long.BYTES);
    result.z = buffer.getLong(baseIndex + 2 * Long.BYTES);
    result.w = buffer.getLong(baseIndex + 3 * Long.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Long4 a) {
    final int baseIndex = index * Long.BYTES * 4;
    buffer.putLong(baseIndex + 0 * Long.BYTES, a.x);
    buffer.putLong(baseIndex + 1 * Long.BYTES, a.y);
    buffer.putLong(baseIndex + 2 * Long.BYTES, a.z);
    buffer.putLong(baseIndex + 3 * Long.BYTES, a.w);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(long[] v);
  private native void initNative(Long4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Long4 get(int i);
  public native void set(int i, Long4 x);
  public native long length();

  public native long[] getArray();
  public native void setArray(long[] v);
  public native void setCopy(Long4Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
