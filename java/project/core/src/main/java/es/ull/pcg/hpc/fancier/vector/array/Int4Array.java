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

import es.ull.pcg.hpc.fancier.vector.Int4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import es.ull.pcg.hpc.fancier.Translatable;



public class Int4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Int4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Int4Array(int n) {
    initNative(n);
  }

  public Int4Array(int[] v) {
    initNative(v);
  }

  public Int4Array(Int4Array array) {
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

  public static Int4 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Integer.BYTES * 4;
    return new Int4(buffer.getInt(baseIndex + 0 * Integer.BYTES), buffer.getInt(baseIndex + 1 * Integer.BYTES), buffer.getInt(baseIndex + 2 * Integer.BYTES), buffer.getInt(baseIndex + 3 * Integer.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Int4 result) {
    final int baseIndex = index * Integer.BYTES * 4;
    result.x = buffer.getInt(baseIndex + 0 * Integer.BYTES);
    result.y = buffer.getInt(baseIndex + 1 * Integer.BYTES);
    result.z = buffer.getInt(baseIndex + 2 * Integer.BYTES);
    result.w = buffer.getInt(baseIndex + 3 * Integer.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Int4 a) {
    final int baseIndex = index * Integer.BYTES * 4;
    buffer.putInt(baseIndex + 0 * Integer.BYTES, a.x);
    buffer.putInt(baseIndex + 1 * Integer.BYTES, a.y);
    buffer.putInt(baseIndex + 2 * Integer.BYTES, a.z);
    buffer.putInt(baseIndex + 3 * Integer.BYTES, a.w);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(int[] v);
  private native void initNative(Int4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public native Int4 get(int i);
  @Translatable
  public native void set(int i, Int4 x);
  @Translatable
  public native long length();

  public native int[] getArray();
  public native void setArray(int[] v);
  public native void setCopy(Int4Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToHost();
  public native void syncToDevice();
}
