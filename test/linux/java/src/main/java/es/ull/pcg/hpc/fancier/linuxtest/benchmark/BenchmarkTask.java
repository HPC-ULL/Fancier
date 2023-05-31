package es.ull.pcg.hpc.fancier.linuxtest.benchmark;

import es.ull.pcg.hpc.fancier.Fancier;
import es.ull.pcg.hpc.fancier.linuxtest.Main;
import es.ull.pcg.hpc.fancier.linuxtest.model.*;
import es.ull.pcg.hpc.fancier.linuxtest.test.FilterTest;
import es.ull.pcg.hpc.rancid.Meter;
import  es.ull.pcg.hpc.rancid.Parameters;
import es.ull.pcg.hpc.rancid.StopCondition;
import es.ull.pcg.hpc.rancid.analyzers.*;
import es.ull.pcg.hpc.rancid.benchmark.*;
import es.ull.pcg.hpc.rancid.filters.WindowIterationsFilter;
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

import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintStream;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.List;


public class BenchmarkTask implements Runnable {
    // Stop condition: At least WINDOW_SIZE iterations, until MAX_TIME_MS of time have elapsed or
    // after ITERATIONS iterations, whichever happens first
    private static final int WINDOW_SIZE = 4;
    private static final int ITERATIONS = WINDOW_SIZE + 6;
    private static final
    long MAX_TIME_MS = 5 * 60 * 1000;
    private static final StopCondition STOP_CONDITION =
            new AndStopCondition(new FixedIterationsStopCondition(WINDOW_SIZE),
                    new OrStopCondition(new FixedIterationsStopCondition(ITERATIONS),
                            new ElapsedTimeStopCondition(MAX_TIME_MS)));

    private static final int HISTOGRAM_BINS = 10;
    private static final Parameters JIT_PARAMS = new Parameters("JIT");

    static {
        // Assumes the first image is the smallest one (vga.jpg)
        JIT_PARAMS.addParameter("input", 0);
    }

    private static class RestrictedConfigs {
        List<BenchmarkConfiguration> configs;
        int maxParams;

        RestrictedConfigs(List<BenchmarkConfiguration> configs, int maxParams) {
            this.configs = configs;
            this.maxParams = maxParams;
        }
    }

    private final Main mMain;
    private final DeviceDescriptor mDevice;
    private final BenchmarkManager mManager;
    private final Map<ImageFilters, RestrictedConfigs> mConfigs;
    private final int mNumParameters;

    public BenchmarkTask(Main main, DeviceDescriptor device) {
        mMain = main;
        mDevice = device;

        mManager = new BenchmarkManager();
        mConfigs = new TreeMap<>();

        mNumParameters = main.getFileContents("ImageTitles").length;
    }

    public void setProgressBar() {
        mManager.addProgressListener(new JreProgressListener());
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
            System.out.println("Image filter for " + selectedBenchmark + " could not be created!");
            return;
        }

        FilterInfo filterInfo = selectedBenchmark.filterInfo;

        // Set up the benchmark runner for this configuration
        BenchmarkRunner runner;

        if (reliable) {
            // FIXME Maybe use ONE_BIG. Use LITTLE for GPU?
            boolean usesGpu = filterInfo.nativeVersion == NativeImageFilter.Version.GPU;
            ReliableLinuxRunner.CoreSelection cores = ReliableLinuxRunner.CoreSelection.BIG;
            runner = new ReliableLinuxRunner(STOP_CONDITION, mDevice, cores, JIT_PARAMS, usesGpu,
                    filterInfo.isNative());
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
        File outputFile = new File(mMain.RESOURCES_DIR + "BenchmarkResults", "FancierTest_" + mDevice.name() + "_" +
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
            System.out.println("Starting benchmarks. Output: " + outputFile.getAbsolutePath());
            Fancier.init();
            NativeImageFilter.compileKernels(Main.OPC_KERNELS_DIR);

            mManager.runBenchmarks();

            NativeImageFilter.releaseKernels();
            Fancier.release();
            System.out.println("Benchmarks finished. Output: " + outputFile.getAbsolutePath());

            // Remove the created benchmarks and global loggers, so multiple calls don't add duplicates
            mManager.getBenchmarks().clear();
            mManager.getGlobalLoggers().clear();
        } catch (FileNotFoundException e) {
            System.out.println("Cannot create output file \"" + outputFile.getAbsolutePath() + "\"");
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
        }

        return mNumParameters;
    }

    private void addBenchmarkParameters(Benchmark benchmark, int maxParameters) {
        String[] imageIDs = mMain.getFileContents("ImageIds");
        String[] imageTitles = mMain.getFileContents("ImageTitles");

        final int maskedParameters = Math.min(imageTitles.length, maxParameters);

        for (int i = 0; i < maskedParameters; ++i) {
            if (!new File(Main.RESOURCES_DIR + imageIDs[i]).isFile()) {
               System.out.println("Resource for " + imageTitles[i] + " not found!");
            }
            else {
                Parameters params = new Parameters(imageTitles[i]);
                params.addParameter("input", i);
                benchmark.addParameterSet(params);
            }
        }
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
        BENCHMARK_JAVA_BFF_GRAYSCALE(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.GRAYSCALE),
        BENCHMARK_JAVA_BFF_BLUR(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.BLUR),
        BENCHMARK_JAVA_BFF_CONVOLVE3(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.CONVOLVE3),
        BENCHMARK_JAVA_BFF_CONVOLVE5(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.CONVOLVE5),
        BENCHMARK_JAVA_BFF_BILATERAL(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.BILATERAL),
        BENCHMARK_JAVA_BFF_MEDIAN(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.MEDIAN),
        BENCHMARK_JAVA_BFF_CONTRAST(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.CONTRAST),
        BENCHMARK_JAVA_BFF_FISHEYE(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.FISHEYE),
        BENCHMARK_JAVA_BFF_LEVELS(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.LEVELS),
        BENCHMARK_JAVA_BFF_POSTERIZE(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.POSTERIZE);

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
        private BufferedImage mInput, mOutput;

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
            String[] files = mMain.getFileContents("ImageIds");

            try {
                BufferedImage bufImg = ImageIO.read(new File(Main.RESOURCES_DIR + files[id]));
                BufferedImage convertedImg = new BufferedImage(bufImg.getWidth(), bufImg.getHeight(), BufferedImage.TYPE_INT_ARGB);
                convertedImg.getGraphics().drawImage(bufImg, 0, 0, null);

                Graphics bg = convertedImg.getGraphics();
                bg.drawImage(mInput, 0, 0, null);
                bg.dispose();

                mInput = convertedImg;
                mOutput = new BufferedImage(mInput.getWidth(), mInput.getHeight(), BufferedImage.TYPE_INT_ARGB);

                mFilter.setInput(mInput);
                mFilter.setOutput(mOutput);
            }
            catch (IOException e) {
                e.printStackTrace();
            }
        }

        @Override
        public void finalizeBenchmark() {
            mFilter.teardown();
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