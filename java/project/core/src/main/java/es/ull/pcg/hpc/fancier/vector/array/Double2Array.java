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

import es.ull.pcg.hpc.fancier.vector.Double2;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import es.ull.pcg.hpc.fancier.Translatable;



public class Double2Array implements AutoCloseable {
  private long nativeInstancePtr = 0L;

  private Double2Array(long nativePtr) {
    initNative(nativePtr);
  }

  public Double2Array(int n) {
    initNative(n);
  }

  public Double2Array(double[] v) {
    initNative(v);
  }

  public Double2Array(Double2Array array) {
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

  public static Double2 getBuffer(ByteBuffer buffer, int index) {
    final int baseIndex = index * Double.BYTES * 2;
    return new Double2(buffer.getDouble(baseIndex + 0 * Double.BYTES), buffer.getDouble(baseIndex + 1 * Double.BYTES));
  }

  public static void getBuffer(ByteBuffer buffer, int index, Double2 result) {
    final int baseIndex = index * Double.BYTES * 2;
    result.x = buffer.getDouble(baseIndex + 0 * Double.BYTES);
    result.y = buffer.getDouble(baseIndex + 1 * Double.BYTES);
  }

  public static void setBuffer(ByteBuffer buffer, int index, Double2 a) {
    final int baseIndex = index * Double.BYTES * 2;
    buffer.putDouble(baseIndex + 0 * Double.BYTES, a.x);
    buffer.putDouble(baseIndex + 1 * Double.BYTES, a.y);
  }

  private native void initNative(long nativePtr);
  private native void initNative(int n);
  private native void initNative(double[] v);
  private native void initNative(Double2Array array);
  private native void releaseNative();
  private native void releaseNativeRef();

  @Translatable
  public native Double2 get(int i);
  @Translatable
  public native void set(int i, Double2 x);
  @Translatable
  public native long length();

  public native double[] getArray();
  public native void setArray(double[] v);
  public native void setCopy(Double2Array array);
  private native ByteBuffer getBufferImpl();
  public native void setBuffer(ByteBuffer v);

  public native void syncToHost();
  public native void syncToDevice();
}
