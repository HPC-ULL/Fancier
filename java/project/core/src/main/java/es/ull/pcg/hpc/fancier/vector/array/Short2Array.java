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

import es.ull.pcg.hpc.fancier.vector.Short2;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import es.ull.pcg.hpc.fancier.Translatable;



public class Short2Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Short2Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Short2Array(int n) {
    initNative(n);
  }

  public Short2Array(short[] v) {
    initNative(v);
  }

  public Short2Array(Short2Array array) {
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

  public static Short2 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Short.BYTES * 2;
    return new Short2(buffer.getShort(baseIndex + 0 * Short.BYTES), buffer.getShort(baseIndex + 1 * Short.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Short2 result) {
    final int baseIndex = index * Short.BYTES * 2;
    result.x = buffer.getShort(baseIndex + 0 * Short.BYTES);
    result.y = buffer.getShort(baseIndex + 1 * Short.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Short2 a) {
    final int baseIndex = index * Short.BYTES * 2;
    buffer.putShort(baseIndex + 0 * Short.BYTES, a.x);
    buffer.putShort(baseIndex + 1 * Short.BYTES, a.y);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(short[] v);
  private native void initNative(Short2Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public native Short2 get(int i);
  @Translatable
  public native void set(int i, Short2 x);
  @Translatable
  public native long length();

  public native short[] getArray();
  public native void setArray(short[] v);
  public native void setCopy(Short2Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
