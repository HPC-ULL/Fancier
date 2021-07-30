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

package es.ull.pcg.hpc.fancier.androidtest.model;


public class FilterInfo {
  public final NativeImageFilter.Version nativeVersion;
  public final JavaImageFilter.Version javaVersion;
  public final ImageFilters kernel;

  public boolean isJava() {
    return javaVersion != null;
  }

  public boolean isNative() {
    return nativeVersion != null;
  }

  public FilterInfo(NativeImageFilter.Version nativeVersion, ImageFilters kernel) {
    this.nativeVersion = nativeVersion;
    this.javaVersion = null;
    this.kernel = kernel;
  }

  public FilterInfo(JavaImageFilter.Version javaVersion, ImageFilters kernel) {
    this.nativeVersion = null;
    this.javaVersion = javaVersion;
    this.kernel = kernel;
  }
}
