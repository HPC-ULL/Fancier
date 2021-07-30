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


public class DeviceDescriptor {
  public static class Builder {
    private DeviceDescriptor device = new DeviceDescriptor();

    public static Builder instance() {
      return new Builder();
    }

    private Builder() {
      device.mName = "Default";
      device.mRoot = false;
      device.mAndroidVersion = 100;

      device.mActiveCooling = false;
      device.mNumThermalSensors = 1;
      device.mReferenceThermalSensor = 0;
      device.mThermalSensorPath = "/sys/devices/virtual/thermal/thermal_zone%1$d/temp";
      device.mFanModePath = null;
      device.mFanModeDefaultValue = null;
      device.mFanModeManualValue = null;
      device.mFanSpeedPath = null;
      device.mFanSpeedMaxValue = -1;
      device.mFanSpeedMinValue = -1;
      device.mBaseTemperature = 40;
      device.mMaxTemperature = 70;

      device.mNumCores = 8;
      device.mFirstLittleCore = 0;
      device.mLastLittleCore = 3;
      device.mFirstBigCore = 4;
      device.mLastBigCore = 7;
      device.mCpuFreqBasePath = "/sys/devices/system/cpu/cpu%1$d/cpufreq";
      device.mCpuCurFreqPath = "scaling_cur_freq";
      device.mCpuMinFreqPath = "cpuinfo_min_freq";
      device.mCpuMaxFreqPath = "cpuinfo_max_freq";
      device.mCpuGovernorPath = "scaling_governor";
      device.mCpuDefaultGovernor = "ondemand";
      device.mCpuPerformanceGovernor = "performance";

      device.mDdrFreqBasePath = null;
      device.mDdrCurFreqPath = null;

      device.mGpu = false;
      device.mGpuDefaultFreq = 0;
      device.mGpuMaxFreq = 0;
      device.mGpuFreqBasePath = null;
      device.mGpuCurFreqPath = null;
      device.mGpuMinFreqPath = null;
      device.mGpuMaxFreqPath = null;
      device.mGpuGovernorPath = null;
      device.mGpuDefaultGovernor = "ondemand";
      device.mGpuPerformanceGovernor = "performance";
    }

    // MISCELLANEOUS
    public Builder name(String name) {
      device.mName = name;
      return this;
    }

    public Builder rootEnabled(boolean root) {
      device.mRoot = root;
      return this;
    }

    public Builder androidVersion(int version) {
      device.mAndroidVersion = version;
      return this;
    }

    // THERMALS
    public Builder thermalSensors(int numSensors) {
      device.mNumThermalSensors = numSensors;
      return this;
    }

    public Builder referenceThermalSensor(int sensor) {
      device.mReferenceThermalSensor = sensor;
      return this;
    }

    public Builder thermalSensorPath(String thermalPath) {
      device.mThermalSensorPath = thermalPath;
      return this;
    }

    public Builder fanModePath(String fanPath) {
      device.mActiveCooling = fanPath != null && device.mFanSpeedPath != null;
      device.mFanModePath = fanPath;
      return this;
    }

    public Builder fanModeDefaultValue(String value) {
      device.mFanModeDefaultValue = value;
      return this;
    }

    public Builder fanModeManualValue(String value) {
      device.mFanModeManualValue = value;
      return this;
    }

    public Builder fanSpeedPath(String fanPath) {
      device.mActiveCooling = fanPath != null && device.mFanModePath != null;
      device.mFanSpeedPath = fanPath;
      return this;
    }

    public Builder fanSpeedMaxValue(int value) {
      device.mFanSpeedMaxValue = value;
      return this;
    }

    public Builder fanSpeedMinValue(int value) {
      device.mFanSpeedMaxValue = value;
      return this;
    }

    public Builder baseTemperature(int temp) {
      device.mBaseTemperature = temp;
      return this;
    }

    public Builder maxTemperature(int temp) {
      device.mMaxTemperature = temp;
      return this;
    }

    // CPU
    public Builder cores(int numCores) {
      device.mNumCores = numCores;
      return this;
    }

    public Builder firstLittleCore(int core) {
      device.mFirstLittleCore = core;
      return this;
    }

    public Builder lastLittleCore(int core) {
      device.mLastLittleCore = core;
      return this;
    }

    public Builder firstBigCore(int core) {
      device.mFirstBigCore = core;
      return this;
    }

    public Builder lastBigCore(int core) {
      device.mLastBigCore = core;
      return this;
    }

    public Builder cpuFreqBasePath(String basePath) {
      device.mCpuFreqBasePath = basePath;
      return this;
    }

    public Builder cpuCurFreqPath(String freqPath) {
      device.mCpuCurFreqPath = freqPath;
      return this;
    }

    public Builder cpuMinFreqPath(String freqPath) {
      device.mCpuMinFreqPath = freqPath;
      return this;
    }

    public Builder cpuMaxFreqPath(String freqPath) {
      device.mCpuMaxFreqPath = freqPath;
      return this;
    }

    public Builder cpuGovernorPath(String governorPath) {
      device.mCpuGovernorPath = governorPath;
      return this;
    }

    public Builder cpuDefaultGovernor(String governor) {
      device.mCpuDefaultGovernor = governor;
      return this;
    }

    public Builder cpuPerformanceGovernor(String governor) {
      device.mCpuPerformanceGovernor = governor;
      return this;
    }

    // MEMORY

    public Builder ddrFreqBasePath(String basePath) {
      device.mDdrFreqBasePath = basePath;
      return this;
    }

    public Builder ddrCurFreqPath(String freqPath) {
      device.mDdrCurFreqPath = freqPath;
      return this;
    }

    // GPU

    public Builder gpuDefaultFreq(int freq) {
      device.mGpuDefaultFreq = freq;
      return this;
    }

    public Builder gpuMaxFreq(int freq) {
      device.mGpuMaxFreq = freq;
      return this;
    }

    public Builder gpuFreqBasePath(String basePath) {
      device.mGpu = basePath != null;
      device.mGpuFreqBasePath = basePath;
      return this;
    }

    public Builder gpuCurFreqPath(String freqPath) {
      device.mGpuCurFreqPath = freqPath;
      return this;
    }

    public Builder gpuMinFreqPath(String freqPath) {
      device.mGpuMinFreqPath = freqPath;
      return this;
    }

    public Builder gpuMaxFreqPath(String freqPath) {
      device.mGpuMaxFreqPath = freqPath;
      return this;
    }

    public Builder gpuGovernorPath(String governorPath) {
      device.mGpuGovernorPath = governorPath;
      return this;
    }

    public Builder gpuDefaultGovernor(String governor) {
      device.mGpuDefaultGovernor = governor;
      return this;
    }

    public Builder gpuPerformanceGovernor(String governor) {
      device.mGpuPerformanceGovernor = governor;
      return this;
    }

    // BUILD
    public DeviceDescriptor build() {
      DeviceDescriptor built = device;
      device = null;
      return built;
    }
  }

  // MISCELLANEOUS
  private String mName;
  private boolean mRoot;
  private int mAndroidVersion;

  public String name() {
    return mName;
  }

  public boolean rootEnabled() {
    return mRoot;
  }

  public int androidVersion() {
    return mAndroidVersion;
  }

  // THERMALS
  private boolean mActiveCooling;
  private int mNumThermalSensors;
  private int mReferenceThermalSensor;
  private String mFanModePath;
  private String mFanModeDefaultValue;
  private String mFanModeManualValue;
  private String mFanSpeedPath;
  private int mFanSpeedMaxValue;
  private int mFanSpeedMinValue;
  private String mThermalSensorPath;
  private int mBaseTemperature;
  private int mMaxTemperature;

  public boolean hasActiveCooling() {
    return mActiveCooling;
  }

  public int thermalSensors() {
    return mNumThermalSensors;
  }

  public int referenceThermalSensor() {
    return mReferenceThermalSensor;
  }

  public String thermalSensorPath(int zone) {
    return String.format(mThermalSensorPath, zone);
  }

  public String referenceThermalSensorPath() {
    return thermalSensorPath(mReferenceThermalSensor);
  }

  public String fanModePath() {
    return mFanModePath;
  }

  public String fanModeDefaultValue() {
    return mFanModeDefaultValue;
  }

  public String fanModeManualValue() {
    return mFanModeManualValue;
  }

  public String fanSpeedPath() {
    return mFanSpeedPath;
  }

  public int fanSpeedMaxValue() {
    return mFanSpeedMaxValue;
  }

  public int fanSpeedMinValue() {
    return mFanSpeedMinValue;
  }

  public int baseTemperature() {
    return mBaseTemperature;
  }

  public int maxTemperature() {
    return mMaxTemperature;
  }

  // CPU
  private int mNumCores;
  private int mFirstLittleCore;
  private int mLastLittleCore;
  private int mFirstBigCore;
  private int mLastBigCore;
  private String mCpuFreqBasePath;
  private String mCpuCurFreqPath;
  private String mCpuMinFreqPath;
  private String mCpuMaxFreqPath;
  private String mCpuGovernorPath;
  private String mCpuDefaultGovernor;
  private String mCpuPerformanceGovernor;

  public int cores() {
    return mNumCores;
  }

  public int firstLittleCore() {
    return mFirstLittleCore;
  }

  public int lastLittleCore() {
    return mLastLittleCore;
  }

  public int firstBigCore() {
    return mFirstBigCore;
  }

  public int lastBigCore() {
    return mLastBigCore;
  }

  public String cpuFreqBasePath(int core) {
    return String.format(mCpuFreqBasePath, core);
  }

  public String cpuCurFreqPath(int core) {
    return cpuFreqBasePath(core) + "/" + mCpuCurFreqPath;
  }

  public String cpuMinFreqPath(int core) {
    return cpuFreqBasePath(core) + "/" + mCpuMinFreqPath;
  }

  public String cpuMaxFreqPath(int core) {
    return cpuFreqBasePath(core) + "/" + mCpuMaxFreqPath;
  }

  public String cpuGovernorPath(int core) {
    return cpuFreqBasePath(core) + "/" + mCpuGovernorPath;
  }

  public String cpuDefaultGovernor() {
    return mCpuDefaultGovernor;
  }

  public String cpuPerformanceGovernor() {
    return mCpuPerformanceGovernor;
  }

  // MEMORY
  private String mDdrFreqBasePath;
  private String mDdrCurFreqPath;

  public String ddrFreqBasePath() {
    return mDdrFreqBasePath;
  }

  public String ddrCurFreqPath() {
    return mDdrFreqBasePath + "/" + mDdrCurFreqPath;
  }

  // GPU
  private boolean mGpu;
  private int mGpuDefaultFreq;
  private int mGpuMaxFreq;
  private String mGpuFreqBasePath;
  private String mGpuCurFreqPath;
  private String mGpuMinFreqPath;
  private String mGpuMaxFreqPath;
  private String mGpuGovernorPath;
  private String mGpuDefaultGovernor;
  private String mGpuPerformanceGovernor;

  public boolean hasGpu() {
    return mGpu;
  }

  public int gpuDefaultFreq() {
    return mGpuDefaultFreq;
  }

  public int gpuMaxFreq() {
    return mGpuMaxFreq;
  }

  public String gpuFreqBasePath() {
    return mGpuFreqBasePath;
  }

  public String gpuCurFreqPath() {
    return mGpuFreqBasePath + "/" + mGpuCurFreqPath;
  }

  public String gpuMinFreqPath() {
    return mGpuFreqBasePath + "/" + mGpuMinFreqPath;
  }

  public String gpuMaxFreqPath() {
    return mGpuFreqBasePath + "/" + mGpuMaxFreqPath;
  }

  public String gpuGovernorPath() {
    return mGpuFreqBasePath + "/" + mGpuGovernorPath;
  }

  public String gpuDefaultGovernor() {
    return mGpuDefaultGovernor;
  }

  public String gpuPerformanceGovernor() {
    return mGpuPerformanceGovernor;
  }
}
