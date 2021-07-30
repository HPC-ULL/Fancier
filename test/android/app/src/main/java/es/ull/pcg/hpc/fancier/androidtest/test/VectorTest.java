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
import es.ull.pcg.hpc.fancier.vector.Byte2;
import es.ull.pcg.hpc.fancier.vector.Double4;
import es.ull.pcg.hpc.fancier.vector.Float4;
import es.ull.pcg.hpc.fancier.vector.Int2;


public class VectorTest implements RuntimeTest {
  @Override
  public void setup() {}

  @Override
  public boolean run() {
    Byte2 b20 = new Byte2((byte) 3);
    Byte2 b21 = new Byte2((byte) 3, (byte) 4);

    if (b20.x != 3 || b20.y != 3)
      return false;

    if (b21.x != 3 || b21.y != 4)
      return false;

    Byte2 b22 = Byte2.add(b20, b21);
    if (b22.x != 6 || b22.y != 7)
      return false;

    Byte2 b23 = Byte2.select(b22, b21, new Int2(0, 1));
    if (b23.x != b22.x || b23.y != b21.y)
      return false;

    Double4 d40 = new Double4(Math.M_2_PI, Math.M_PI, Math.M_1_PI, Math.M_LN2);
    Double4 d41 = new Double4(1.0, d40.asDouble2(), 5.0);

    if (d40.x != Math.M_2_PI || d40.y != Math.M_PI || d40.z != Math.M_1_PI || d40.w != Math.M_LN2)
      return false;

    if (d41.x != 1.0 || d41.y != d40.x || d41.z != d40.y || d41.w != 5.0)
      return false;

    Double4 d42 = Double4.atan2(d40, d41);
    if (d42.x != Math.atan2(d40.x, d41.x) || d42.y != Math.atan2(d40.y, d41.y) ||
        d42.z != Math.atan2(d40.z, d41.z) || d42.w != Math.atan2(d40.w, d41.w))
      return false;

    Float4 f40 = nativeWrapUnwrap(new Double4(Math.M_2_PI_F));
    if (f40.x != Math.M_2_PI_F || f40.y != Math.M_2_PI_F || f40.z != Math.M_2_PI_F ||
        f40.w != Math.M_2_PI_F)
      return false;

    return nativeRun();
  }

  @Override
  public void teardown() {}

  private native boolean nativeRun();

  private native Float4 nativeWrapUnwrap(Double4 vec);
}
