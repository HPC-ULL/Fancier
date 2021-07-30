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


import es.ull.pcg.hpc.fancier.Math;


public class MathTest implements RuntimeTest {
  @Override
  public void setup() {}

  @Override
  public boolean run() {
    if (Math.abs(10) != 10)
      return false;

    if (Math.abs(-10L) != 10L)
      return false;

    if (Math.max(10.0, 5.0) != 10.0)
      return false;

    if (Math.min(10.1f, 10.0f) != 10.0f)
      return false;

    if (Math.clamp((byte) 18, (byte) 5, (byte) 15) != (byte) 15)
      return false;

    if (Math.clamp((byte) 4, (byte) 5, (byte) 15) != (byte) 5)
      return false;

    if (Math.asin(Math.M_PI_4) != java.lang.Math.asin(Math.M_PI_4))
      return false;

    if (Math.cosh(Math.M_PI_2) != java.lang.Math.cosh(Math.M_PI_2))
      return false;

    if (Math.fract(3.25) != 0.25)
      return false;

    // Will fail because Math.addSat is not implemented yet
    // if (Math.addSat(Integer.MAX_VALUE, 5) != Integer.MAX_VALUE)
    //     return false;

    return nativeRun();
  }

  @Override
  public void teardown() {}

  private native boolean nativeRun();
}
