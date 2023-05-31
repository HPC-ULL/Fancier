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

import es.ull.pcg.hpc.fancier.vector.Short4;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import es.ull.pcg.hpc.fancier.Translatable;



public class Short4Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Short4Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Short4Array(int n) {
    initNative(n);
  }

  public Short4Array(short[] v) {
    initNative(v);
  }

  public Short4Array(Short4Array array) {
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

  public static Short4 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Short.BYTES * 4;
    return new Short4(buffer.getShort(baseIndex + 0 * Short.BYTES), buffer.getShort(baseIndex + 1 * Short.BYTES), buffer.getShort(baseIndex + 2 * Short.BYTES), buffer.getShort(baseIndex + 3 * Short.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Short4 result) {
    final int baseIndex = index * Short.BYTES * 4;
    result.x = buffer.getShort(baseIndex + 0 * Short.BYTES);
    result.y = buffer.getShort(baseIndex + 1 * Short.BYTES);
    result.z = buffer.getShort(baseIndex + 2 * Short.BYTES);
    result.w = buffer.getShort(baseIndex + 3 * Short.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Short4 a) {
    final int baseIndex = index * Short.BYTES * 4;
    buffer.putShort(baseIndex + 0 * Short.BYTES, a.x);
    buffer.putShort(baseIndex + 1 * Short.BYTES, a.y);
    buffer.putShort(baseIndex + 2 * Short.BYTES, a.z);
    buffer.putShort(baseIndex + 3 * Short.BYTES, a.w);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(short[] v);
  private native void initNative(Short4Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public native Short4 get(int i);
  @Translatable
  public native void set(int i, Short4 x);
  @Translatable
  public native long length();

  public native short[] getArray();
  public native void setArray(short[] v);
  public native void setCopy(Short4Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToHost();
  public native void syncToDevice();
}
