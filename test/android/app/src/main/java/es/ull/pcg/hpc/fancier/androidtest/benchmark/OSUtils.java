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

package es.ull.pcg.hpc.fancier.androidtest.benchmark;


import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;


public class OSUtils {
  static {
    System.loadLibrary("rancid");
  }

  public static void setDefaultFan(DeviceDescriptor device) throws IOException {
    setFan(device);
  }

  public static void setMinFan(DeviceDescriptor device) throws IOException {
    setFan(device, device.fanSpeedMinValue());
  }

  public static void setMaxFan(DeviceDescriptor device) throws IOException {
    setFan(device, device.fanSpeedMaxValue());
  }

  public static void setDefaultCpuGovernor(DeviceDescriptor device, int firstCore, int lastCore) throws IOException {
    setCpuGovernor(device, device.cpuDefaultGovernor(), firstCore, lastCore);
  }

  public static void setPerformanceCpuGovernor(DeviceDescriptor device, int firstCore, int lastCore) throws IOException {
    setCpuGovernor(device, device.cpuPerformanceGovernor(), firstCore, lastCore);
  }

  public static void setDefaultGpuGovernor(DeviceDescriptor device) throws IOException {
    setGpuGovernor(device, device.gpuDefaultGovernor(), device.gpuDefaultFreq());
  }

  public static void setPerformanceGpuGovernor(DeviceDescriptor device) throws IOException {
    setGpuGovernor(device, device.gpuPerformanceGovernor(), device.gpuMaxFreq());
  }

  public static native void unpinThreads();
  public static native void pinThreads(int firstCore, int lastCore);
  public static native int usedCores();

  public static native void setDefaultScheduler();
  public static native void setRealtimeScheduler();

  /**
   * Set default fan.
   */
  private static void setFan(DeviceDescriptor device) throws IOException {
    ShellUtils.rootExec(Collections.singletonList("echo '" + device.fanModeDefaultValue() + "' > '" + device.fanModePath() + "'"));
  }

  /**
   * Set manual fan.
   */
  private static void setFan(DeviceDescriptor device, int value) throws IOException {
    ShellUtils.rootExec(Arrays.asList("echo '" + device.fanModeManualValue() + "' > '" + device.fanModePath() + "'",
                                      "echo '" + value + "' > '" + device.fanSpeedPath() + "'"));
  }

  private static void setCpuGovernor(DeviceDescriptor device, String governor, int firstCore, int lastCore) throws IOException {
    ArrayList<String> cmds = new ArrayList<>((lastCore - firstCore) + 1);

    for (int i = firstCore; i <= lastCore; ++i)
      cmds.add("echo '" + governor + "' > '" + device.cpuGovernorPath(i) + "'");

    ShellUtils.rootExec(cmds);
  }

  private static void setGpuGovernor(DeviceDescriptor device, String governor, int minFreq) throws IOException {
    ArrayList<String> cmds = new ArrayList<>(2);

    if (governor != null)
      cmds.add("echo '" + governor + "' > '" + device.gpuGovernorPath() + "'");

    if (device.gpuMinFreqPath() != null)
      cmds.add("echo '" + minFreq + "' > '" + device.gpuMinFreqPath() + "'");

    ShellUtils.rootExec(cmds);
  }
}
