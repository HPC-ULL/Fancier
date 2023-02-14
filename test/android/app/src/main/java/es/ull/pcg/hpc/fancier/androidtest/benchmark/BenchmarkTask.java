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
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.util.Log;
import android.widget.ProgressBar;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;

import es.ull.pcg.hpc.fancier.Fancier;
import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.activity.MainActivity;
import es.ull.pcg.hpc.fancier.androidtest.model.FilterInfo;
import es.ull.pcg.hpc.fancier.androidtest.model.ImageFilter;
import es.ull.pcg.hpc.fancier.androidtest.model.ImageFilterBuilder;
import es.ull.pcg.hpc.fancier.androidtest.model.ImageFilters;
import es.ull.pcg.hpc.fancier.androidtest.model.JavaImageFilter;
import es.ull.pcg.hpc.fancier.androidtest.model.NativeImageFilter;
import es.ull.pcg.hpc.fancier.androidtest.test.FilterTest;
import es.ull.pcg.hpc.rancid.Meter;
import es.ull.pcg.hpc.rancid.Parameters;
import es.ull.pcg.hpc.rancid.StopCondition;
import es.ull.pcg.hpc.rancid.analyzers.ArithmeticAverageAnalyzer;
import es.ull.pcg.hpc.rancid.analyzers.HistogramAnalyzer;
import es.ull.pcg.hpc.rancid.analyzers.MaxAnalyzer;
import es.ull.pcg.hpc.rancid.analyzers.MinAnalyzer;
import es.ull.pcg.hpc.rancid.analyzers.StdDeviationAnalyzer;
import es.ull.pcg.hpc.rancid.analyzers.SumAnalyzer;
import es.ull.pcg.hpc.rancid.benchmark.Benchmark;
import es.ull.pcg.hpc.rancid.benchmark.BenchmarkConfiguration;
import es.ull.pcg.hpc.rancid.benchmark.BenchmarkImplementation;
import es.ull.pcg.hpc.rancid.benchmark.BenchmarkManager;
import es.ull.pcg.hpc.rancid.benchmark.BenchmarkRunner;
import es.ull.pcg.hpc.rancid.filters.WindowIterationsFilter;
import es.ull.pcg.hpc.rancid.loggers.HumanReadableResultsLogger;
import es.ull.pcg.hpc.rancid.loggers.XmlResultsLogger;
import es.ull.pcg.hpc.rancid.meters.ExecutionTimeMeter;
import es.ull.pcg.hpc.rancid.meters.FileContentsMeter;
import es.ull.pcg.hpc.rancid.meters.SuccessfulRunsMeter;
import es.ull.pcg.hpc.rancid.printers.PrintStreamOutputPrinter;
import es.ull.pcg.hpc.rancid.removers.InvalidRunsRemover;
import es.ull.pcg.hpc.rancid.removers.ResultsRemover;
import es.ull.pcg.hpc.rancid.results.ResultTypes;
import es.ull.pcg.hpc.rancid.stopconditions.AndStopCondition;
import es.ull.pcg.hpc.rancid.stopconditions.ElapsedTimeStopCondition;
import es.ull.pcg.hpc.rancid.stopconditions.FixedIterationsStopCondition;
import es.ull.pcg.hpc.rancid.stopconditions.OrStopCondition;


public class BenchmarkTask implements Runnable {
  // Stop condition: At least WINDOW_SIZE iterations, until MAX_TIME_MS of time have elapsed or
  // after ITERATIONS iterations, whichever happens first
  private static final int WINDOW_SIZE = 4;
  private static final int ITERATIONS = WINDOW_SIZE + 6;
  private static final long MAX_TIME_MS = 5 * 60 * 1000;
  private static final StopCondition STOP_CONDITION =
      new AndStopCondition(new FixedIterationsStopCondition(WINDOW_SIZE),
                           new OrStopCondition(new FixedIterationsStopCondition(ITERATIONS),
                                               new ElapsedTimeStopCondition(MAX_TIME_MS)));

  private static final int HISTOGRAM_BINS = 10;
  private static final Parameters JIT_PARAMS = new Parameters("JIT");

  static {
    JIT_PARAMS.addParameter("input", R.drawable.vga);
  }

  private static class RestrictedConfigs {
    List<BenchmarkConfiguration> configs;
    int maxParams;

    RestrictedConfigs(List<BenchmarkConfiguration> configs, int maxParams) {
      this.configs = configs;
      this.maxParams = maxParams;
    }
  }

  private final MainActivity mMain;
  private final DeviceDescriptor mDevice;
  private final BenchmarkManager mManager;
  private final Map<ImageFilters, RestrictedConfigs> mConfigs;
  private final int mNumParameters;

  public BenchmarkTask(MainActivity main, DeviceDescriptor device) {
    mMain = main;
    mDevice = device;

    mManager = new BenchmarkManager();
    mConfigs = new TreeMap<>();

    Resources res = mMain.getResources();
    mNumParameters = res.getStringArray(R.array.image_titles).length;
  }

  public void setProgressBar(ProgressBar progressBar) {
    mManager.addProgressListener(new AndroidBarProgressListener(mMain, progressBar));
  }

  public void setupManager() {
    // Meters
    mManager.addMeter(new SuccessfulRunsMeter());

    for (int i = 0; i < mDevice.cores(); ++i) {
      mManager.addMeter(new FileContentsMeter(mDevice.cpuCurFreqPath(i), "CPUFREQ" + i));
    }

    if (mDevice.hasGpu())
      mManager.addMeter(new FileContentsMeter(mDevice.gpuCurFreqPath(), "GPUFREQ"));

    for (int i = 0; i < mDevice.thermalSensors(); ++i) {
      mManager.addMeter(new FileContentsMeter(mDevice.thermalSensorPath(i), "THERM" + i));
    }

    if (mDevice.ddrFreqBasePath() != null)
      mManager.addMeter(new RootFileContentsMeter(mDevice.ddrCurFreqPath(), "DDRFREQ"));

    mManager.addMeter(new ExecutionTimeMeter());

    // Loggers
    mManager.addOnlineLogger(
        new HumanReadableResultsLogger(new AndroidLogOutputPrinter("FancierBenchmark")));

    // Processors
    // - Add total number and proportion of successful runs analysis
    mManager.addRunProcessor(new SumAnalyzer(SuccessfulRunsMeter.TITLE));
    mManager.addRunProcessor(new ArithmeticAverageAnalyzer(SuccessfulRunsMeter.TITLE));

    // - Remove invalid runs data, and the successful runs metric raw data
    mManager.addRunProcessor(new InvalidRunsRemover());
    mManager.addRunProcessor(new ResultsRemover(ResultTypes.Metric, SuccessfulRunsMeter.TITLE));

    // - Calculate histogram, min, max, average and stddev of all successful runs
    mManager.addRunProcessor(new HistogramAnalyzer(ExecutionTimeMeter.TITLE, HISTOGRAM_BINS));
    mManager.addRunProcessor(new MinAnalyzer(ExecutionTimeMeter.TITLE));
    mManager.addRunProcessor(new MaxAnalyzer(ExecutionTimeMeter.TITLE));
    mManager.addRunProcessor(new ArithmeticAverageAnalyzer(ExecutionTimeMeter.TITLE));
    mManager.addRunProcessor(new StdDeviationAnalyzer(ExecutionTimeMeter.TITLE));

    // - Filter run data within the window used for the stop condition
    mManager.addRunProcessor(new WindowIterationsFilter(WINDOW_SIZE));

    // - Calculate histogram, min and max of some metrics of runs inside the window
    List<String> interestWindowMetrics = new ArrayList<>();
    interestWindowMetrics.add(ExecutionTimeMeter.TITLE);
    interestWindowMetrics.add("THERM" + mDevice.referenceThermalSensor());

    int little = mDevice.firstLittleCore();
    int big = mDevice.firstBigCore();

    if (little >= 0)
      interestWindowMetrics.add("CPUFREQ" + little);

    if (big >= 0)
      interestWindowMetrics.add("CPUFREQ" + big);

    if (mDevice.hasGpu())
      interestWindowMetrics.add("GPUFREQ");

    for (String metricTitle: interestWindowMetrics) {
      mManager.addRunProcessor(
          new HistogramAnalyzer(WindowIterationsFilter.processedMetricTitle(metricTitle),
                                HISTOGRAM_BINS));
      mManager.addRunProcessor(
          new MinAnalyzer(WindowIterationsFilter.processedMetricTitle(metricTitle)));
      mManager.addRunProcessor(
          new MaxAnalyzer(WindowIterationsFilter.processedMetricTitle(metricTitle)));
    }

    // Remove raw data from the window after doing calculations on it, as it is a subset of the
    // whole set of measurements, and we don't want any duplicates
    for (Meter meter: mManager.getMeters()) {
      mManager.addRunProcessor(new ResultsRemover(ResultTypes.Metric, WindowIterationsFilter
          .processedMetricTitle(meter.getTitle())));
    }
  }

  public void addConfiguration(Benchmarks selectedBenchmark, boolean reliable) {
    // Build the image filter and get implementation information
    ImageFilter imageFilter = ImageFilterBuilder.create(selectedBenchmark.filterInfo);
    if (imageFilter == null) {
      Log.e("BenchmarkTask", "Image filter for " + selectedBenchmark + " could not be created!");
      return;
    }

    FilterInfo filterInfo = selectedBenchmark.filterInfo;

    // Set up the benchmark runner for this configuration
    BenchmarkRunner runner;

    if (reliable) {
      // FIXME Maybe use ONE_BIG. Use LITTLE for GPU?
      boolean usesGpu = filterInfo.nativeVersion == NativeImageFilter.Version.GPU;
      ReliableAndroidRunner.CoreSelection cores = ReliableAndroidRunner.CoreSelection.BIG;
      runner = new ReliableAndroidRunner(STOP_CONDITION, mDevice, cores, JIT_PARAMS, usesGpu,
                                         filterInfo.isNative());

      ((ReliableAndroidRunner) runner)
          .setAndroidContext((ActivityManager) mMain.getSystemService(Context.ACTIVITY_SERVICE),
                             mMain.getPackageName());
    }
    else {
      runner = new BenchmarkRunner(STOP_CONDITION);
    }

    // Create the implementation
    String title = (filterInfo.isNative() ? "NATIVE " + filterInfo.nativeVersion :
                    "JAVA " + filterInfo.javaVersion) + (reliable ? " RELIABLE" : " NAIVE");
    BenchmarkImplementation implementation = new FilterBenchmarkImplementation(title, imageFilter);


    // Add configuration
    RestrictedConfigs configs = mConfigs.get(filterInfo.kernel);

    if (configs == null) {
      List<BenchmarkConfiguration> configList = new ArrayList<>();
      configs = new RestrictedConfigs(configList, mNumParameters);

      mConfigs.put(filterInfo.kernel, configs);
    }

    configs.configs.add(new BenchmarkConfiguration(runner, implementation));
    configs.maxParams = Math.min(configs.maxParams, allowedParameters(selectedBenchmark));
  }

  @Override
  public void run() {
    // File loggers are added here because the results of each run belong in a separate file
    SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy_MM_dd_HH_mm_ss", Locale.US);
    File outputFile = new File(mMain.getExternalFilesDir(null), "FancierTest_" + mDevice.name() + "_" +
                                                    dateFormat.format(new Date()) + ".xml");

    try (PrintStream outputStream = new PrintStream(outputFile)) {
      PrintStreamOutputPrinter printer = new PrintStreamOutputPrinter(outputStream);
      mManager.addGlobalLogger(new XmlResultsLogger(printer));

      // Create and add benchmarks
      for (Map.Entry<ImageFilters, RestrictedConfigs> kv: mConfigs.entrySet()) {
        ImageFilters kernel = kv.getKey();
        RestrictedConfigs configs = kv.getValue();

        if (configs.maxParams > 0) {
          Benchmark benchmark = new Benchmark(kernel.toString());
          addBenchmarkParameters(benchmark, configs.maxParams);

          for (BenchmarkConfiguration config: configs.configs)
            benchmark.addConfiguration(config);

          mManager.addBenchmark(benchmark);
        }
      }

      // Run benchmarks
      Log.i("BenchmarkTask", "Starting benchmarks. Output: " + outputFile.getAbsolutePath());
      Fancier.init(mMain.getCacheDir().getAbsolutePath());
      NativeImageFilter.compileKernels(mMain.getAssets());

      mManager.runBenchmarks();

      NativeImageFilter.releaseKernels();
      Fancier.release();
      Log.i("BenchmarkTask", "Benchmarks finished. Output: " + outputFile.getAbsolutePath());

      // Remove the created benchmarks and global loggers, so multiple calls don't add duplicates
      mManager.getBenchmarks().clear();
      mManager.getGlobalLoggers().clear();
    } catch (FileNotFoundException e) {
      Log.e("BenchmarkTask", "Cannot create output file \"" + outputFile.getAbsolutePath() + "\"");
    }
  }

  private int allowedParameters(Benchmarks selectedBenchmark) {
    // Reference Java versions are way too slow; only test smallest image size
    if (selectedBenchmark.filterInfo.javaVersion == JavaImageFilter.Version.REFERENCE)
      return 1;

    // Bilateral and Median filters run slowly on CPU and cause problems on GPU
    switch (selectedBenchmark.filterInfo.kernel) {
    case FISHEYE:
      return mDevice == Devices.XU3? 4 : mNumParameters;
    case BILATERAL:
      return 4;
    case MEDIAN:
      return mDevice == Devices.SXZ? 4 : 6;
    }

    return mNumParameters;
  }

  private void addBenchmarkParameters(Benchmark benchmark, int maxParameters) {
    Resources res = mMain.getResources();

    TypedArray imageIDs = res.obtainTypedArray(R.array.image_ids);
    String[] imageTitles = res.getStringArray(R.array.image_titles);

    final int maskedParameters = Math.min(imageTitles.length, maxParameters);

    for (int i = 0; i < maskedParameters; ++i) {
      int id = imageIDs.getResourceId(i, -1);
      if (id == -1) {
        Log.e("BenchmarkTask", "Resource for " + imageTitles[i] + " not found!");
      }
      else {
        Parameters params = new Parameters(imageTitles[i]);
        params.addParameter("input", id);
        benchmark.addParameterSet(params);
      }
    }

    imageIDs.recycle();
  }

  public enum Benchmarks {
    BENCHMARK_OCL_GRAYSCALE(NativeImageFilter.Version.GPU, ImageFilters.GRAYSCALE),
    BENCHMARK_OCL_BLUR(NativeImageFilter.Version.GPU, ImageFilters.BLUR),
    BENCHMARK_OCL_CONVOLVE3(NativeImageFilter.Version.GPU, ImageFilters.CONVOLVE3),
    BENCHMARK_OCL_CONVOLVE5(NativeImageFilter.Version.GPU, ImageFilters.CONVOLVE5),
    BENCHMARK_OCL_BILATERAL(NativeImageFilter.Version.GPU, ImageFilters.BILATERAL),
    BENCHMARK_OCL_MEDIAN(NativeImageFilter.Version.GPU, ImageFilters.MEDIAN),
    BENCHMARK_OCL_CONTRAST(NativeImageFilter.Version.GPU, ImageFilters.CONTRAST),
    BENCHMARK_OCL_FISHEYE(NativeImageFilter.Version.GPU, ImageFilters.FISHEYE),
    BENCHMARK_OCL_LEVELS(NativeImageFilter.Version.GPU, ImageFilters.LEVELS),
    BENCHMARK_OCL_POSTERIZE(NativeImageFilter.Version.GPU, ImageFilters.POSTERIZE),
    BENCHMARK_NATIVE_GRAYSCALE(NativeImageFilter.Version.CPU, ImageFilters.GRAYSCALE),
    BENCHMARK_NATIVE_BLUR(NativeImageFilter.Version.CPU, ImageFilters.BLUR),
    BENCHMARK_NATIVE_CONVOLVE3(NativeImageFilter.Version.CPU, ImageFilters.CONVOLVE3),
    BENCHMARK_NATIVE_CONVOLVE5(NativeImageFilter.Version.CPU, ImageFilters.CONVOLVE5),
    BENCHMARK_NATIVE_BILATERAL(NativeImageFilter.Version.CPU, ImageFilters.BILATERAL),
    BENCHMARK_NATIVE_MEDIAN(NativeImageFilter.Version.CPU, ImageFilters.MEDIAN),
    BENCHMARK_NATIVE_CONTRAST(NativeImageFilter.Version.CPU, ImageFilters.CONTRAST),
    BENCHMARK_NATIVE_FISHEYE(NativeImageFilter.Version.CPU, ImageFilters.FISHEYE),
    BENCHMARK_NATIVE_LEVELS(NativeImageFilter.Version.CPU, ImageFilters.LEVELS),
    BENCHMARK_NATIVE_POSTERIZE(NativeImageFilter.Version.CPU, ImageFilters.POSTERIZE),
    BENCHMARK_NATIVE_REF_GRAYSCALE(NativeImageFilter.Version.REF, ImageFilters.GRAYSCALE),
    BENCHMARK_NATIVE_REF_BLUR(NativeImageFilter.Version.REF, ImageFilters.BLUR),
    BENCHMARK_NATIVE_REF_CONVOLVE3(NativeImageFilter.Version.REF, ImageFilters.CONVOLVE3),
    BENCHMARK_NATIVE_REF_CONVOLVE5(NativeImageFilter.Version.REF, ImageFilters.CONVOLVE5),
    BENCHMARK_NATIVE_REF_BILATERAL(NativeImageFilter.Version.REF, ImageFilters.BILATERAL),
    BENCHMARK_NATIVE_REF_MEDIAN(NativeImageFilter.Version.REF, ImageFilters.MEDIAN),
    BENCHMARK_NATIVE_REF_CONTRAST(NativeImageFilter.Version.REF, ImageFilters.CONTRAST),
    BENCHMARK_NATIVE_REF_FISHEYE(NativeImageFilter.Version.REF, ImageFilters.FISHEYE),
    BENCHMARK_NATIVE_REF_LEVELS(NativeImageFilter.Version.REF, ImageFilters.LEVELS),
    BENCHMARK_NATIVE_REF_POSTERIZE(NativeImageFilter.Version.REF, ImageFilters.POSTERIZE),
    BENCHMARK_JAVA_REF_GRAYSCALE(JavaImageFilter.Version.REFERENCE, ImageFilters.GRAYSCALE),
    BENCHMARK_JAVA_REF_BLUR(JavaImageFilter.Version.REFERENCE, ImageFilters.BLUR),
    BENCHMARK_JAVA_REF_CONVOLVE3(JavaImageFilter.Version.REFERENCE, ImageFilters.CONVOLVE3),
    BENCHMARK_JAVA_REF_CONVOLVE5(JavaImageFilter.Version.REFERENCE, ImageFilters.CONVOLVE5),
    BENCHMARK_JAVA_REF_BILATERAL(JavaImageFilter.Version.REFERENCE, ImageFilters.BILATERAL),
    BENCHMARK_JAVA_REF_MEDIAN(JavaImageFilter.Version.REFERENCE, ImageFilters.MEDIAN),
    BENCHMARK_JAVA_REF_CONTRAST(JavaImageFilter.Version.REFERENCE, ImageFilters.CONTRAST),
    BENCHMARK_JAVA_REF_FISHEYE(JavaImageFilter.Version.REFERENCE, ImageFilters.FISHEYE),
    BENCHMARK_JAVA_REF_LEVELS(JavaImageFilter.Version.REFERENCE, ImageFilters.LEVELS),
    BENCHMARK_JAVA_REF_POSTERIZE(JavaImageFilter.Version.REFERENCE, ImageFilters.POSTERIZE),
    BENCHMARK_JAVA_PERF_GRAYSCALE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.GRAYSCALE),
    BENCHMARK_JAVA_PERF_BLUR(JavaImageFilter.Version.PERFORMANCE, ImageFilters.BLUR),
    BENCHMARK_JAVA_PERF_CONVOLVE3(JavaImageFilter.Version.PERFORMANCE, ImageFilters.CONVOLVE3),
    BENCHMARK_JAVA_PERF_CONVOLVE5(JavaImageFilter.Version.PERFORMANCE, ImageFilters.CONVOLVE5),
    BENCHMARK_JAVA_PERF_BILATERAL(JavaImageFilter.Version.PERFORMANCE, ImageFilters.BILATERAL),
    BENCHMARK_JAVA_PERF_MEDIAN(JavaImageFilter.Version.PERFORMANCE, ImageFilters.MEDIAN),
    BENCHMARK_JAVA_PERF_CONTRAST(JavaImageFilter.Version.PERFORMANCE, ImageFilters.CONTRAST),
    BENCHMARK_JAVA_PERF_FISHEYE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.FISHEYE),
    BENCHMARK_JAVA_PERF_LEVELS(JavaImageFilter.Version.PERFORMANCE, ImageFilters.LEVELS),
    BENCHMARK_JAVA_PERF_POSTERIZE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.POSTERIZE),
    BENCHMARK_JAVA_BMP_GRAYSCALE(JavaImageFilter.Version.BITMAP, ImageFilters.GRAYSCALE),
    BENCHMARK_JAVA_BMP_BLUR(JavaImageFilter.Version.BITMAP, ImageFilters.BLUR),
    BENCHMARK_JAVA_BMP_CONVOLVE3(JavaImageFilter.Version.BITMAP, ImageFilters.CONVOLVE3),
    BENCHMARK_JAVA_BMP_CONVOLVE5(JavaImageFilter.Version.BITMAP, ImageFilters.CONVOLVE5),
    BENCHMARK_JAVA_BMP_BILATERAL(JavaImageFilter.Version.BITMAP, ImageFilters.BILATERAL),
    BENCHMARK_JAVA_BMP_MEDIAN(JavaImageFilter.Version.BITMAP, ImageFilters.MEDIAN),
    BENCHMARK_JAVA_BMP_CONTRAST(JavaImageFilter.Version.BITMAP, ImageFilters.CONTRAST),
    BENCHMARK_JAVA_BMP_FISHEYE(JavaImageFilter.Version.BITMAP, ImageFilters.FISHEYE),
    BENCHMARK_JAVA_BMP_LEVELS(JavaImageFilter.Version.BITMAP, ImageFilters.LEVELS),
    BENCHMARK_JAVA_BMP_POSTERIZE(JavaImageFilter.Version.BITMAP, ImageFilters.POSTERIZE);

    public final FilterInfo filterInfo;

    Benchmarks(JavaImageFilter.Version version, ImageFilters kernel) {
      this.filterInfo = new FilterInfo(version, kernel);
    }

    Benchmarks(NativeImageFilter.Version version, ImageFilters kernel) {
      this.filterInfo = new FilterInfo(version, kernel);
    }
  }

  private class FilterBenchmarkImplementation extends BenchmarkImplementation {
    private final FilterTest mFilter;
    private Bitmap mInput, mOutput;

    public FilterBenchmarkImplementation(String title, ImageFilter filter) {
      super(title);

      mFilter = new FilterTest();
      mFilter.setFilter(filter);
    }

    @Override
    public void setupBenchmark(Parameters parameters) {
      // Use resource ID as parameter (all parameter sets exist simultaneously and Bitmaps would
      // take too much memory)
      int id = parameters.getParameter("input");

      BitmapFactory.Options options = new BitmapFactory.Options();
      options.inMutable = false;
      options.inPreferredConfig = Bitmap.Config.ARGB_8888;

      mInput = BitmapFactory.decodeResource(mMain.getResources(), id, options);
      mOutput = Bitmap.createBitmap(mInput.getWidth(), mInput.getHeight(), mInput.getConfig());

      mFilter.setInput(mInput);
      mFilter.setOutput(mOutput);
    }

    @Override
    public void finalizeBenchmark() {
      mFilter.teardown();

      mInput.recycle();
      mOutput.recycle();
    }

    @Override
    public void initParameters() {
      mFilter.setup();
    }

    @Override
    public void instrumentedRun() {
      if (!mFilter.run())
        throw new RuntimeException("Run failed due to invalid state");
    }
  }
}
