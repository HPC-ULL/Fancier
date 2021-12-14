package es.ull.pcg.hpc.fancier.linuxtest;

import es.ull.pcg.hpc.fancier.linuxtest.benchmark.BenchmarkTask;
import es.ull.pcg.hpc.fancier.linuxtest.benchmark.DeviceDescriptor;
import es.ull.pcg.hpc.fancier.linuxtest.benchmark.Devices;
import es.ull.pcg.hpc.fancier.linuxtest.benchmark.ShellUtils;
import es.ull.pcg.hpc.fancier.linuxtest.model.FancierTestRunner;
import org.apache.commons.cli.*;

import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.net.InetAddress;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Main {

    static {
        System.loadLibrary("test-lib");
    }

    // Constants
    public static final String RESOURCES_DIR = "src/main/resources/";
    public static final String OPC_KERNELS_DIR = "../opencl/";


    private enum ExecutionMode {
        INTERACTIVE, TEST, BENCHMARK, QUICK_TEST
    }

    // Run each benchmark multiple times, so that each app execution is shorter and crashes are less
    // likely
    private ExecutionMode mMode = ExecutionMode.BENCHMARK;
    private static int executionIndex;
    private static final int BENCHMARK_REPETITIONS = 1;
    private static final boolean EXECUTE_FILTERED = true;
    private static final boolean BENCHMARK_ONLY_RELIABLE = true;

    private static final long RESTART_TIME_MS = 30 * 1000;
    private final ExecutorService mTaskExecutor = Executors.newSingleThreadExecutor();
    private int mCurrentTestID = 0;

    public static void main(String[] args) {
        Main obj = new Main();

        Options options = new Options();
        Option mode = new Option("m", "mode", true, "set launch mode (default mode is benchmark)");
        mode.setRequired(false);
        options.addOption(mode);

        Option index = new Option("i", "index", true, "benchmark execution index");
        index.setRequired(false);
        options.addOption(index);

        CommandLineParser parser = new DefaultParser();
        CommandLine cmd = null;
        try {
            cmd = parser.parse(options, args);
        }
        catch (ParseException e) {
            e.printStackTrace();
            System.exit(1);
        }

        if (cmd != null && cmd.getOptionValue("mode") != null)
            obj.mMode = "benchmark".equals(cmd.getOptionValue("mode")) ? ExecutionMode.BENCHMARK : ExecutionMode.TEST;

        if (cmd != null)
            executionIndex = cmd.getOptionValue("index") == null ? 0 : Integer.parseInt(cmd.getOptionValue("index"));

        switch (obj.mMode) {
            case TEST:
                obj.doTests();
                break;
            case BENCHMARK:
                obj.doBenchmarks();
                break;
            default: break;
        }
   }

    public Executor getTaskExecutor() {
        return mTaskExecutor;
    }

    public int getNextTestID() {
        return ++mCurrentTestID;
    }

    private void doTests() {
        BufferedImage inImage;
        BufferedImage outImage;

        try {
            String IMAGE_NAME = "fullhd.jpg";
//            String IMAGE_NAME = "test.png";

            inImage = ImageIO.read(new File(RESOURCES_DIR + IMAGE_NAME));
            outImage = new BufferedImage(inImage.getWidth(), inImage.getHeight(), BufferedImage.TYPE_INT_ARGB);

            BufferedImage bufImg = ImageIO.read(new File(RESOURCES_DIR + IMAGE_NAME));
            BufferedImage convertedImg = new BufferedImage(bufImg.getWidth(), bufImg.getHeight(), BufferedImage.TYPE_INT_ARGB);
            convertedImg.getGraphics().drawImage(bufImg, 0, 0, null);

            Graphics bg = convertedImg.getGraphics();
            bg.drawImage(inImage, 0, 0, null);
            bg.dispose();

            inImage = convertedImg;

            FancierTestRunner controller = new FancierTestRunner(this);
            String[] testNames = getFileContents("TestsNames");

            FancierTestRunner.Tests[] enabledTests;

            if (EXECUTE_FILTERED) {
                enabledTests = new FancierTestRunner.Tests[]{ FancierTestRunner.Tests.TEST_INIT,
                                                              FancierTestRunner.Tests.TEST_NATIVE_POSTERIZE,
                                                              FancierTestRunner.Tests.TEST_RELEASE};
            }
            else
                enabledTests = FancierTestRunner.Tests.values();

            for (FancierTestRunner.Tests selectedTest: enabledTests)
                controller.runTest(selectedTest, testNames[selectedTest.ordinal()], inImage, outImage);
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }

    private void doBenchmarks() {
        try {
            final String deviceHostname = InetAddress.getLocalHost().getHostName();

            DeviceDescriptor device = Devices.fromHostname(deviceHostname);
            BenchmarkTask benchmark = new BenchmarkTask(this, device);

            // Get ID from previous execution, or 0
            final int benchmarkID = executionIndex;

            // Run the benchmarks corresponding to this execution of the application
            BenchmarkTask.Benchmarks[] kernels;

            if (EXECUTE_FILTERED) {
                kernels = new BenchmarkTask.Benchmarks[]{
                        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_FISHEYE
                };
            }
            else {
                kernels = BenchmarkTask.Benchmarks.values();
            }

            final int totalBenchmarks = kernels.length * BENCHMARK_REPETITIONS;

            if (benchmarkID < totalBenchmarks) {
                benchmark.setupManager();

                // Show progress
                benchmark.setProgressBar();

                BenchmarkTask.Benchmarks kernel = kernels[benchmarkID % kernels.length];
                System.out.println("EXECUTING BENCHMARK " + (benchmarkID + 1) + "/" + totalBenchmarks + "...");
                System.out.println("KERNEL " + kernel);

                if (!BENCHMARK_ONLY_RELIABLE)
                    benchmark.addConfiguration(kernel, false);

                benchmark.addConfiguration(kernel, true);

                mTaskExecutor.execute(benchmark);

                mTaskExecutor.execute(() -> {
                    // Restart application after finishing benchmarks
                    System.out.println("RESTARTING...");
                    try {
                        System.out.println("Acabada ejecucion");

                        // Wait 2 minutes because at minimun unit is minutes
                        String cmd = "echo '" + System.getProperty("user.dir") + "/run.sh --index " + (executionIndex + 1) + " --mode benchmark' | at now +2 minutes";
                        ShellUtils.rootExec(Collections.singletonList(cmd));
                        System.exit(0);
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                });
            }
            else {
                // Signal end of execution
                // If the device has screen, show a message in the console
                // Otherwise, shut it down
                try {
                    if (device == Devices.XU3)
                        ShellUtils.rootExec(Collections.singletonList("reboot -p"));
                    else
                        System.out.println("ALL BENCHMARKS FINISHED.");
                } catch (IOException ignored) {}
            }
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }

    public String[] getFileContents(String filename) {
        try {
            Scanner scanner = new Scanner(new File(RESOURCES_DIR + filename));
            List<String> lines = new ArrayList<>();
            while (scanner.hasNextLine())
                lines.add(scanner.nextLine());

            return lines.toArray(new String[0]);
        }
        catch (IOException e) {
            e.printStackTrace();
            return new String[0];
        }
    }
}
