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

import java.util.HashSet;
import java.util.Set;

public class Fancier {
  private static final Set<String> plugins = new HashSet<>();

  static {
    System.loadLibrary("fancier");
  }

  public static void init(String basePath) {
    if (initNative(basePath))
      throw new NativeException("Native exception occurred: Could not initialize Fancier");
  }

  public static void init() {
    init(System.getProperty("user.dir"));
  }

  public static void loadPlugin(String pluginName) {
    if (!plugins.contains(pluginName)) {
      if (loadPluginNative(pluginName))
        throw new NativeException(
            "Native exception occurred: Could not initialize plugin \"" + pluginName + "\"");
      else
        plugins.add(pluginName);
    }
  }

  public static void release() {
    for (String plugin: plugins)
      unloadPluginNative(plugin);

    releaseNative();
  }

  private static native boolean initNative(String basePath);
  private static native void releaseNative();

  private static native boolean loadPluginNative(String pluginName);
  private static native void unloadPluginNative(String pluginName);
}
