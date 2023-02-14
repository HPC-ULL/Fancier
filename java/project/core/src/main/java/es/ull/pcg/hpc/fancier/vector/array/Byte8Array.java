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

import es.ull.pcg.hpc.fancier.vector.Byte8;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import es.ull.pcg.hpc.fancier.Translatable;



public class Byte8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Byte8Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Byte8Array(int n) {
    initNative(n);
  }

  public Byte8Array(byte[] v) {
    initNative(v);
  }

  public Byte8Array(Byte8Array array) {
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

  public static Byte8 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Byte.BYTES * 8;
    return new Byte8(buffer.get(baseIndex + 0 * Byte.BYTES), buffer.get(baseIndex + 1 * Byte.BYTES), buffer.get(baseIndex + 2 * Byte.BYTES), buffer.get(baseIndex + 3 * Byte.BYTES), buffer.get(baseIndex + 4 * Byte.BYTES), buffer.get(baseIndex + 5 * Byte.BYTES), buffer.get(baseIndex + 6 * Byte.BYTES), buffer.get(baseIndex + 7 * Byte.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Byte8 result) {
    final int baseIndex = index * Byte.BYTES * 8;
    result.x = buffer.get(baseIndex + 0 * Byte.BYTES);
    result.y = buffer.get(baseIndex + 1 * Byte.BYTES);
    result.z = buffer.get(baseIndex + 2 * Byte.BYTES);
    result.w = buffer.get(baseIndex + 3 * Byte.BYTES);
    result.s[0] = buffer.get(baseIndex + 4 * Byte.BYTES);
    result.s[1] = buffer.get(baseIndex + 5 * Byte.BYTES);
    result.s[2] = buffer.get(baseIndex + 6 * Byte.BYTES);
    result.s[3] = buffer.get(baseIndex + 7 * Byte.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Byte8 a) {
    final int baseIndex = index * Byte.BYTES * 8;
    buffer.put(baseIndex + 0 * Byte.BYTES, a.x);
    buffer.put(baseIndex + 1 * Byte.BYTES, a.y);
    buffer.put(baseIndex + 2 * Byte.BYTES, a.z);
    buffer.put(baseIndex + 3 * Byte.BYTES, a.w);
    buffer.put(baseIndex + 4 * Byte.BYTES, a.s[0]);
    buffer.put(baseIndex + 5 * Byte.BYTES, a.s[1]);
    buffer.put(baseIndex + 6 * Byte.BYTES, a.s[2]);
    buffer.put(baseIndex + 7 * Byte.BYTES, a.s[3]);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(byte[] v);
  private native void initNative(Byte8Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public native Byte8 get(int i);
  @Translatable
  public native void set(int i, Byte8 x);
  @Translatable
  public native long length();

  public native byte[] getArray();
  public native void setArray(byte[] v);
  public native void setCopy(Byte8Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
