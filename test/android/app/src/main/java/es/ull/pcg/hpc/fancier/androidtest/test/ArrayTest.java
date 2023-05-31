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

package es.ull.pcg.hpc.fancier.androidtest.test;


import java.nio.ByteBuffer;

import es.ull.pcg.hpc.fancier.array.DoubleArray;
import es.ull.pcg.hpc.fancier.array.ShortArray;


public class ArrayTest implements RuntimeTest {
  final int n = 10;
  final double[] x = new double[]{ 1.0, 2.5, 4.0 };

  @Override
  public void setup() {}

  @Override
  public boolean run() {
    // Short array
    try (ShortArray s0 = new ShortArray(n)) {
      // Initialization tests
      if (s0.length() != n)
        return false;

      for (int i = 0; i < n; ++i)
        s0.set(i, (short) (i * 2));

      s0.syncToHost();

      for (int i = 0; i < n; ++i) {
        if (s0.get(i) != (short) (i * 2))
          return false;
      }

      // Automatic sync-to-native test
      s0.syncToDevice();

      short[] s0Array = s0.getArray();
      ByteBuffer s0Buffer = s0.getBuffer();

      // getArray and getBuffer test
      for (int i = 0; i < n; ++i) {
        if (s0.get(i) != s0Array[i] || s0.get(i) != ShortArray.getBuffer(s0Buffer, i))
          return false;
      }

      // getArray must return a copy
      s0Array[0] = (short) (s0Array[0] + 10);
      if (s0Array[0] == s0.get(0))
        return false;

      // getBuffer must return a modifiable reference
      s0Buffer.putShort(0, (short) (s0Buffer.getShort(0) + 50));
      if (s0Buffer.getShort(0) != s0.get(0))
        return false;

      // setArray test
      s0.setArray(s0Array);

      for (int i = 0; i < n; ++i) {
        if (s0.get(i) != s0Array[i])
          return false;
      }

      // setBuffer test, using the same buffer as input and output
      s0.setBuffer(s0Buffer);
      s0Buffer.rewind();
      for (int i = 0; i < n; ++i) {
        if (s0.get(i) != s0Buffer.getShort())
          return false;
      }
    }

    // Double array
    try (DoubleArray d0 = new DoubleArray(x)) {
      // Initialization tests
      if (d0.length() != x.length)
        return false;

      for (int i = 0; i < d0.length(); ++i) {
        if (d0.get(i) != x[i])
          return false;
      }

      // OpenCL execution test
      double[] d0_ = d0.getArray();
      nativeProcess(d0);

      for (int i = 0; i < d0.length(); ++i) {
        if (d0.get(i) != d0_[i] * 2)
          return false;
      }

      // Array copy test
      try (DoubleArray d1 = new DoubleArray(d0)) {
        if (d1.length() != d0.length())
          return false;

        for (int i = 0; i < d0.length(); ++i) {
          if (d0.get(i) != d1.get(i))
            return false;
        }

        d1.set(0, d1.get(0) + 10);
        if (d0.get(0) == d1.get(0))
          return false;
      }
    }

    // Native tests
    return nativeRun();
  }

  @Override
  public void teardown() {}

  private native boolean nativeRun();
  private native void nativeProcess(DoubleArray array);
}
