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

import es.ull.pcg.hpc.fancier.vector.Float8;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;


public class Float8Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Float8Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Float8Array(int n) {
    initNative(n);
  }

  public Float8Array(float[] v) {
    initNative(v);
  }

  public Float8Array(Float8Array array) {
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

  public static Float8 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Float.BYTES * 8;
    return new Float8(buffer.getFloat(baseIndex + 0 * Float.BYTES), buffer.getFloat(baseIndex + 1 * Float.BYTES), buffer.getFloat(baseIndex + 2 * Float.BYTES), buffer.getFloat(baseIndex + 3 * Float.BYTES), buffer.getFloat(baseIndex + 4 * Float.BYTES), buffer.getFloat(baseIndex + 5 * Float.BYTES), buffer.getFloat(baseIndex + 6 * Float.BYTES), buffer.getFloat(baseIndex + 7 * Float.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Float8 result) {
    final int baseIndex = index * Float.BYTES * 8;
    result.x = buffer.getFloat(baseIndex + 0 * Float.BYTES);
    result.y = buffer.getFloat(baseIndex + 1 * Float.BYTES);
    result.z = buffer.getFloat(baseIndex + 2 * Float.BYTES);
    result.w = buffer.getFloat(baseIndex + 3 * Float.BYTES);
    result.s[0] = buffer.getFloat(baseIndex + 4 * Float.BYTES);
    result.s[1] = buffer.getFloat(baseIndex + 5 * Float.BYTES);
    result.s[2] = buffer.getFloat(baseIndex + 6 * Float.BYTES);
    result.s[3] = buffer.getFloat(baseIndex + 7 * Float.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Float8 a) {
    final int baseIndex = index * Float.BYTES * 8;
    buffer.putFloat(baseIndex + 0 * Float.BYTES, a.x);
    buffer.putFloat(baseIndex + 1 * Float.BYTES, a.y);
    buffer.putFloat(baseIndex + 2 * Float.BYTES, a.z);
    buffer.putFloat(baseIndex + 3 * Float.BYTES, a.w);
    buffer.putFloat(baseIndex + 4 * Float.BYTES, a.s[0]);
    buffer.putFloat(baseIndex + 5 * Float.BYTES, a.s[1]);
    buffer.putFloat(baseIndex + 6 * Float.BYTES, a.s[2]);
    buffer.putFloat(baseIndex + 7 * Float.BYTES, a.s[3]);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(float[] v);
  private native void initNative(Float8Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  public native Float8 get(int i);
  public native void set(int i, Float8 x);
  public native long length();

  public native float[] getArray();
  public native void setArray(float[] v);
  public native void setCopy(Float8Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToNative();
  public native void syncToOCL();
}
