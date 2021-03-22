package es.ull.pcg.hpc.fancier.androidtest.activity;


import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Build;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ProgressBar;

import androidx.appcompat.app.AppCompatActivity;

import java.io.IOException;
import java.util.Collections;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import es.ull.pcg.hpc.fancier.Fancier;
import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.BenchmarkTask;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.DeviceDescriptor;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.Devices;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.OSUtils;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.ShellUtils;
import es.ull.pcg.hpc.fancier.androidtest.controller.RunTestButtonController;
import es.ull.pcg.hpc.fancier.androidtest.model.FancierTestRunner;
import es.ull.pcg.hpc.fancier.androidtest.view.ConsoleView;


public class MainActivity extends AppCompatActivity {
  private enum ExecutionMode {
    INTERACTIVE, TEST, BENCHMARK, QUICK_TEST
  }

  // Run each benchmark multiple times, so that each app execution is shorter and crashes are less
  // likely
  private static final int BENCHMARK_REPETITIONS = 10;
  private final ExecutionMode mMode = ExecutionMode.BENCHMARK;
  private static final boolean EXECUTE_FILTERED = true;
  private static final boolean BENCHMARK_ONLY_RELIABLE = false;

  private static final long RESTART_TIME_MS = 30 * 1000;
  private static final String BENCHMARK_ID_NAME = "es.ull.pcg.hpc.fancier.androidtest.BENCHMARK_ID";
  private final ExecutorService mTaskExecutor = Executors.newSingleThreadExecutor();
  private int mCurrentTestID = 0;

  public static class WakeUpReceiver extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
      int id = intent.getIntExtra(BENCHMARK_ID_NAME, 0);

      Intent restartIntent = new Intent(context, MainActivity.class);
      restartIntent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
      restartIntent.putExtra(BENCHMARK_ID_NAME, id);
      context.startActivity(restartIntent);
    }
  }

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);

    System.loadLibrary("test-lib");

    Button runButton = findViewById(R.id.runButton);
    runButton.setOnClickListener(new RunTestButtonController(this));

    ImageView inputImage = findViewById(R.id.inputImage);
    inputImage.setImageResource(R.drawable.fullhd);

    final ConsoleView outputPanel = findViewById(R.id.outputPanel);
    outputPanel.setHorizontallyScrolling(true);
    outputPanel.setMovementMethod(new ScrollingMovementMethod());

    switch (mMode) {
    case TEST:
      doTests();
      break;
    case BENCHMARK:
      doBenchmarks();
      break;
    case QUICK_TEST:
      try {
        DeviceDescriptor device = Devices.fromModelName(Build.MODEL);
        int first = device.firstBigCore(), last = device.lastBigCore();
        OSUtils.pinThreads(first, last);
        OSUtils.setPerformanceCpuGovernor(device, first, last);
        Fancier.init(getCacheDir().getAbsolutePath());
        doQuickTest();
        Fancier.release();
        OSUtils.setDefaultCpuGovernor(device, first, last);
        OSUtils.unpinThreads();
      } catch (IOException e) {
        Log.e("MainActivity", "Error setting up quick test", e);
      }
      break;
    default:
      break;
    }
  }

  public Executor getTaskExecutor() {
    return mTaskExecutor;
  }

  public int getNextTestID() {
    return ++mCurrentTestID;
  }

  private void doTests() {
    Resources res = getResources();

    BitmapFactory.Options options = new BitmapFactory.Options();
    options.inMutable = false;
    options.inPreferredConfig = Bitmap.Config.ARGB_8888;

    Bitmap inBitmap = BitmapFactory.decodeResource(res, R.drawable.vga, options);
    Bitmap outBitmap =
        Bitmap.createBitmap(inBitmap.getWidth(), inBitmap.getHeight(), inBitmap.getConfig());

    FancierTestRunner controller = new FancierTestRunner(this);
    String[] testNames = res.getStringArray(R.array.tests);

    FancierTestRunner.Tests[] enabledTests;

    if (EXECUTE_FILTERED) {
      enabledTests = new FancierTestRunner.Tests[]{FancierTestRunner.Tests.TEST_INIT,
                                                   FancierTestRunner.Tests.TEST_JAVA_BILATERAL,
                                                   FancierTestRunner.Tests.TEST_RELEASE};
    }
    else {
      enabledTests = FancierTestRunner.Tests.values();
    }

    for (FancierTestRunner.Tests selectedTest: enabledTests) {
      controller.runTest(selectedTest, testNames[selectedTest.ordinal()], inBitmap, outBitmap);
    }
  }

  private void doBenchmarks() {
    final ConsoleView outputPanel = findViewById(R.id.outputPanel);

    DeviceDescriptor device = Devices.fromModelName(Build.MODEL);
    BenchmarkTask benchmark = new BenchmarkTask(this, device);

    // Get ID from previous execution, or 0
    final int benchmarkID = getIntent().getIntExtra(BENCHMARK_ID_NAME, 0);

    // Run the benchmarks corresponding to this execution of the application
    BenchmarkTask.Benchmarks[] kernels;

    if (EXECUTE_FILTERED) {
      kernels = new BenchmarkTask.Benchmarks[]{
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_GRAYSCALE,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_BLUR,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_CONVOLVE3,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_CONVOLVE5,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_BILATERAL,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_MEDIAN,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_CONTRAST,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_FISHEYE,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_LEVELS,
          BenchmarkTask.Benchmarks.BENCHMARK_OCL_POSTERIZE,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_GRAYSCALE,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_BLUR,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_CONVOLVE3,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_CONVOLVE5,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_BILATERAL,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_MEDIAN,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_CONTRAST,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_FISHEYE,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_LEVELS,
          BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_POSTERIZE,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_GRAYSCALE,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_BLUR,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_CONVOLVE3,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_CONVOLVE5,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_BILATERAL,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_MEDIAN,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_CONTRAST,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_FISHEYE,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_LEVELS,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_REF_POSTERIZE,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_GRAYSCALE,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_BLUR,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_CONVOLVE3,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_CONVOLVE5,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_BILATERAL,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_MEDIAN,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_CONTRAST,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_FISHEYE,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_LEVELS,
          BenchmarkTask.Benchmarks.BENCHMARK_JAVA_PERF_POSTERIZE
      };
    }
    else {
      kernels = BenchmarkTask.Benchmarks.values();
    }

    final int totalBenchmarks = kernels.length * BENCHMARK_REPETITIONS;

    if (benchmarkID < totalBenchmarks) {
      benchmark.setupManager();

      // Show progress
      ProgressBar progressBar = findViewById(R.id.progressBar);
      progressBar.setVisibility(View.VISIBLE);
      benchmark.setProgressBar(progressBar);

      BenchmarkTask.Benchmarks kernel = kernels[benchmarkID % kernels.length];
      outputPanel.logInfo("EXECUTING BENCHMARK " + (benchmarkID + 1) + "/" + totalBenchmarks + "...");
      outputPanel.logInfo("KERNEL " + kernel);

      if (!BENCHMARK_ONLY_RELIABLE)
        benchmark.addConfiguration(kernel, false);

      benchmark.addConfiguration(kernel, true);

      mTaskExecutor.execute(benchmark);
      mTaskExecutor.execute(new Runnable() {
        @Override
        public void run() {
          // Restart application after finishing benchmarks
          runOnUiThread(new Runnable() {
            @Override
            public void run() {
              outputPanel.logInfo("RESTARTING...");

              Intent restartIntent = new Intent(MainActivity.this, WakeUpReceiver.class);
              restartIntent.putExtra(BENCHMARK_ID_NAME, benchmarkID + 1);

              AlarmManager alarm = (AlarmManager) getSystemService(Context.ALARM_SERVICE);
              PendingIntent pending = PendingIntent.getBroadcast(getApplicationContext(), 0, restartIntent, PendingIntent.FLAG_UPDATE_CURRENT);
              alarm.setExact(AlarmManager.RTC_WAKEUP, System.currentTimeMillis() + RESTART_TIME_MS, pending);
              System.exit(0);
            }
          });
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
          outputPanel.logInfo("ALL BENCHMARKS FINISHED.");
      } catch (IOException ignored) {}
    }
  }

  private native void doQuickTest();
}
