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


import es.ull.pcg.hpc.fancier.Fancier;


public class InitTest implements RuntimeTest {
  private final String mBasePath;

  public InitTest(String basePath) {
    this.mBasePath = basePath;
  }

  @Override
  public void setup() {}

  @Override
  public boolean run() {
    Fancier.init(mBasePath);
    return true;
  }

  @Override
  public void teardown() {}
}
