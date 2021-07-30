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


import android.util.Log;


public class Devices {
  public static final DeviceDescriptor DEFAULT = DeviceDescriptor.Builder.instance().build();

  public static final DeviceDescriptor XU3 =
      DeviceDescriptor.Builder.instance()
                              .name("XU3")
                              .rootEnabled(true)
                              .androidVersion(444)

                              .thermalSensors(2).referenceThermalSensor(1)
                              .fanModePath("/sys/devices/odroid_fan.14/fan_mode")
                              .fanModeDefaultValue("1").fanModeManualValue("0")
                              .fanSpeedPath("/sys/devices/odroid_fan.14/pwm_duty")
                              .fanSpeedMinValue(0).fanSpeedMaxValue(255)
                              .baseTemperature(55000).maxTemperature(70000)

                              .cpuDefaultGovernor("interactive")

                              .gpuDefaultFreq(-1).gpuMaxFreq(543)
                              .gpuFreqBasePath("/sys/devices/11800000.mali")
                              .gpuCurFreqPath("clock")
                              .gpuMinFreqPath("dvfs_min_lock").gpuMaxFreqPath("dvfs_max_lock")
                              .gpuGovernorPath("dvfs_governor")
                              .gpuDefaultGovernor("0").gpuPerformanceGovernor("1")

                              .build();

  public static final DeviceDescriptor P8L =
      DeviceDescriptor.Builder.instance()
                              .name("P8L")
                              .rootEnabled(true)
                              .androidVersion(800)

                              .thermalSensors(10).referenceThermalSensor(3)
                              .baseTemperature(35).maxTemperature(45)

                              .cpuDefaultGovernor("interactive")

                              .ddrFreqBasePath("/sys/devices/platform/fffc0000.ddr_devfreq/devfreq/ddrfreq")
                              .ddrCurFreqPath("cur_freq")

                              .gpuDefaultFreq(360000000).gpuMaxFreq(900000000)
                              .gpuFreqBasePath("/sys/devices/platform/e8970000.mali/devfreq/gpufreq")
                              .gpuCurFreqPath("cur_freq")
                              .gpuMinFreqPath("min_freq").gpuMaxFreqPath("max_freq")
                              .gpuGovernorPath("governor")
                              .gpuDefaultGovernor("mali_ondemand")

                              .build();

  public static final DeviceDescriptor SXZ =
      DeviceDescriptor.Builder.instance()
                              .name("SXZ")
                              .rootEnabled(true)
                              .androidVersion(511)

                              .thermalSensors(13).referenceThermalSensor(7)
                              .baseTemperature(40).maxTemperature(60)

                              .cores(4).firstLittleCore(-1).lastLittleCore(-1)

                              .gpuMaxFreq(400000000)
                              .gpuFreqBasePath("/sys/devices/platform/kgsl-3d0.0/kgsl/kgsl-3d0")
                              .gpuCurFreqPath("gpuclk")
                              .gpuMaxFreqPath("max_gpuclk")
                              .gpuGovernorPath("pwrscale/trustzone/governor")

                              .build();

  public static DeviceDescriptor fromModelName(String model) {
    switch (model) {
    case "ODROID-XU3":
      return XU3;
    case "PRA-LX1":
      return P8L;
    case "C6603":
      return SXZ;
    default:
      Log.w("Devices", "Device '" + model + "' will use default system parameters.");
      return DEFAULT;
    }
  }
}
