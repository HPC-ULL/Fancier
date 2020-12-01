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
