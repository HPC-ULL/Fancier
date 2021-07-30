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


import android.app.ActivityManager;
import android.util.Log;

import java.io.IOException;

import es.ull.pcg.hpc.rancid.Parameters;
import es.ull.pcg.hpc.rancid.StopCondition;
import es.ull.pcg.hpc.rancid.benchmark.BenchmarkRunner;
import es.ull.pcg.hpc.rancid.utils.FileUtils;
import es.ull.pcg.hpc.rancid.utils.MathUtils;
import es.ull.pcg.hpc.rancid.utils.ThreadUtils;


public class ReliableAndroidRunner extends BenchmarkRunner {
  public enum CoreSelection {
    ALL, BIG, LITTLE, ONE_BIG
  }

  private static final int INTER_BENCHMARK_WAIT_MS = 15 * 1000;
  private static final int WARMUP_TIME_MS = 10 * 1000;
  private static final int WARMUP_JIT_ITERATIONS = 5;

  private final DeviceDescriptor mDevice;
  private final CoreSelection mCores;
  private final Parameters mJitParams;
  private final boolean mUsesGpu, mNativeExecution;

  private ActivityManager mActivityManager;
  private String mAppPackage;

  private int mRunCounter;
  private int mFirstCore, mLastCore;

  public static void logError(String description, Throwable cause) {
    Log.e("ReliableAndroidRunner", description, cause);
  }

  public ReliableAndroidRunner(StopCondition stop, DeviceDescriptor device, CoreSelection cores,
                               Parameters jitParams, boolean usesGpu, boolean nativeExecution) {
    super(stop);
    this.mDevice = device;
    this.mCores = cores;
    this.mJitParams = jitParams;
    this.mUsesGpu = usesGpu;
    this.mNativeExecution = nativeExecution;

    if ((mDevice.firstLittleCore() < 0 || mDevice.lastLittleCore() < 0) &&
        mCores == CoreSelection.LITTLE)
      throw new RuntimeException("No little cores in device!");

    if (!mDevice.hasGpu() && usesGpu)
      throw new RuntimeException("GPU not available!");
  }

  public void setAndroidContext(ActivityManager activityManager, String appPackage) {
    this.mActivityManager = activityManager;
    this.mAppPackage = appPackage;
  }

  @Override
  protected void preBenchmark() {
    this.mRunCounter = 0;

    // Background application removal
    AndroidUtils.killBackgroundApps(mActivityManager, mAppPackage);

    // Java JIT Compilation
    if (!mNativeExecution) {
      try {
        if (mDevice.androidVersion() >= 800)
          AndroidUtils.enforceAOTCompile(mAppPackage);
        else if (mDevice.androidVersion() < 500)
          enforceJITCompile();
      } catch (IOException e) {
        logError("AOT Compile", e);
      }
    }

    // Set process scheduler priority (not allowed in Android)
    if (mDevice.androidVersion() == 0 && mDevice.rootEnabled())
      OSUtils.setRealtimeScheduler();

    // Prepare benchmark parameters
    super.preBenchmark();

    // Reduce temperature before starting benchmark, and wait additionally in case some background
    // apps are restarted, so it doesn't happen while doing an instrumented run
    try {
      if (mDevice.hasActiveCooling())
        OSUtils.setMaxFan(mDevice);
    } catch (IOException e) {
      logError("Set Max Fan", e);
    }

    ThreadUtils.waitMs(INTER_BENCHMARK_WAIT_MS);
    DeviceUtils.decreaseTemperature(mDevice);
  }

  @Override
  protected void preRun() {
    super.preRun();

    // Thread pinning
    switch (mCores) {
    case BIG:
      mFirstCore = mDevice.firstBigCore();
      mLastCore = mDevice.lastBigCore();
      break;
    case LITTLE:
      mFirstCore = mDevice.firstLittleCore();
      mLastCore = mDevice.lastLittleCore();
      break;
    case ONE_BIG:
      // Round-robin
      int bigCores = 1 + mDevice.lastBigCore() - mDevice.firstBigCore();
      mFirstCore = mLastCore = mDevice.firstBigCore() + (mRunCounter % bigCores);
      break;
    case ALL:
      mFirstCore = 0;
      mLastCore = OSUtils.usedCores() - 1;
      break;
    }

    OSUtils.pinThreads(mFirstCore, mLastCore);

    // Prepare device temperature to do an instrumented run
    DeviceUtils.controlTemperature(mDevice);

    // Force a frequency increase, which will increase temperature again if it is achieved through
    // warm-up (in the case of not having root access)
    enforceGovernors();
  }

  @Override
  protected void postRun() {
    // Thread unpinning
    OSUtils.unpinThreads();

    ++mRunCounter;
    super.postRun();
  }

  @Override
  protected void postBenchmark() {
    // Reset process scheduler priority
    if (mDevice.androidVersion() == 0 && mDevice.rootEnabled())
      OSUtils.setDefaultScheduler();

    // Reset frequency governors
    resetGovernors();

    // Reset fan
    try {
      if (mDevice.hasActiveCooling())
        OSUtils.setDefaultFan(mDevice);
    } catch (IOException e) {
      logError("Set Default Fan", e);
    }

    super.postBenchmark();

    // Hint the VM to run garbage collection
    System.gc();
  }

  private static boolean warmUpCondition(long startTimeMs, String freqPath, Number targetFreq) {
    return System.currentTimeMillis() - startTimeMs < WARMUP_TIME_MS &&
           MathUtils.compare(FileUtils.readNumberFile(freqPath), targetFreq) < 0;
  }

  private void enforceJITCompile() {
    long startTimeMs = System.currentTimeMillis();
    mCurrentImplementation.setupBenchmark(mJitParams);

    for (int i = 0;
         i < WARMUP_JIT_ITERATIONS && System.currentTimeMillis() - startTimeMs < WARMUP_TIME_MS; ++i) {
      mCurrentImplementation.initParameters();

      try {
        mCurrentImplementation.instrumentedRun();
      } catch (RuntimeException exception) {
        if (!mCurrentImplementation.handleException(exception))
          break;
      }

      mCurrentImplementation.releaseParameters();
    }

    mCurrentImplementation.finalizeBenchmark();
  }

  private void enforceGovernors() {
    if (mDevice.rootEnabled()) {
      try {
        if (mUsesGpu)
          OSUtils.setPerformanceGpuGovernor(mDevice);

        OSUtils.setPerformanceCpuGovernor(mDevice, mFirstCore, mLastCore);
      } catch (IOException e) {
        logError("Set Performance Governor", e);
      }
    }
    else {
      // Benchmark-independent processor warm-up to induce a frequency increase
      Number maxFreq = FileUtils.readNumberFile(mDevice.cpuMaxFreqPath(mFirstCore));
      long startTimeMs = System.currentTimeMillis();

      // Warm-up CPU
      while (warmUpCondition(startTimeMs, mDevice.cpuCurFreqPath(mFirstCore), maxFreq))
        DeviceUtils.cpuWarmUp();

      // Warm-up GPU
      if (mUsesGpu) {
        maxFreq = FileUtils.readNumberFile(mDevice.gpuMaxFreqPath());
        startTimeMs = System.currentTimeMillis();

        while (warmUpCondition(startTimeMs, mDevice.gpuCurFreqPath(), maxFreq))
          DeviceUtils.gpuWarmUp();
      }
    }
  }

  private void resetGovernors() {
    if (mDevice.rootEnabled()) {
      try {
        if (mUsesGpu)
          OSUtils.setDefaultGpuGovernor(mDevice);

        OSUtils.setDefaultCpuGovernor(mDevice, mFirstCore, mLastCore);
      } catch (IOException e) {
        logError("Set Default Governor", e);
      }
    }
  }
}
