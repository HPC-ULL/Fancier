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

package es.ull.pcg.hpc.fancier;

public class Parallel {
  public static long getGlobalID(int dimensionID) {
    return 0L;
  }

  public static long getGlobalSize(int dimensionID) {
    return 1L;
  }

  public static long getGlobalOffset(int dimensionID) {
    return 0L;
  }

  public static long getGroupID(int dimensionID) {
    return 0L;
  }

  public static long getLocalID(int dimensionID) {
    return 0L;
  }

  public static long getLocalSize(int dimensionID) {
    return 1L;
  }

  public static long getNumGroups(int dimensionID) {
    return 1L;
  }

  public static int getWorkDim() {
    return 1;
  }
}
