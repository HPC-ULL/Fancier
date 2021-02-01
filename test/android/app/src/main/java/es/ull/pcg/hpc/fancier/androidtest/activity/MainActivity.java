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

import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.BenchmarkTask;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.DeviceDescriptor;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.Devices;
import es.ull.pcg.hpc.fancier.androidtest.benchmark.ShellUtils;
import es.ull.pcg.hpc.fancier.androidtest.controller.RunTestButtonController;
import es.ull.pcg.hpc.fancier.androidtest.model.FancierTestRunner;
import es.ull.pcg.hpc.fancier.androidtest.view.ConsoleView;


public class MainActivity extends AppCompatActivity {
  // Run each benchmark multiple times, so that each app execution is shorter and crashes are less
  // likely
  private static final int BENCHMARK_REPETITIONS = 9;
  private static final long RESTART_TIME_MS = 30 * 1000;
  private static final String BENCHMARK_ID_NAME = "es.ull.pcg.hpc.fancier.androidtest.BENCHMARK_ID";
  private static final BenchmarkTask.Benchmarks SINGLE_BENCHMARK = null;

  private enum ExecutionMode {
    INTERACTIVE, TEST, BENCHMARK
  }

  private final ExecutionMode mMode = ExecutionMode.BENCHMARK;
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

    if (mMode == ExecutionMode.TEST)
      doTests();
    else if (mMode == ExecutionMode.BENCHMARK)
      doBenchmarks();
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

    Bitmap inBitmap = BitmapFactory.decodeResource(res, R.drawable.test, options);
    Bitmap outBitmap =
        Bitmap.createBitmap(inBitmap.getWidth(), inBitmap.getHeight(), inBitmap.getConfig());

    FancierTestRunner controller = new FancierTestRunner(this);
    String[] testNames = res.getStringArray(R.array.tests);

    //FancierTestRunner.Tests[] enabledTests = FancierTestRunner.Tests.values();
    FancierTestRunner.Tests[] enabledTests =
        {FancierTestRunner.Tests.TEST_INIT,
         FancierTestRunner.Tests.TEST_NATIVE_GRAYSCALE,
         FancierTestRunner.Tests.TEST_RELEASE};

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
    //BenchmarkTask.Benchmarks[] kernels = BenchmarkTask.Benchmarks.values();
    BenchmarkTask.Benchmarks[] kernels = new BenchmarkTask.Benchmarks[]{
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_GRAYSCALE,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_BLUR,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_CONVOLVE3,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_CONVOLVE5,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_BILATERAL,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_MEDIAN,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_CONTRAST,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_FISHEYE,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_LEVELS,
        BenchmarkTask.Benchmarks.BENCHMARK_JAVA_BMP_POSTERIZE,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_GRAYSCALE,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_BLUR,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_CONVOLVE3,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_CONVOLVE5,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_BILATERAL,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_MEDIAN,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_CONTRAST,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_FISHEYE,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_LEVELS,
        BenchmarkTask.Benchmarks.BENCHMARK_NATIVE_REF_POSTERIZE
    };
    final int totalBenchmarks = kernels.length * BENCHMARK_REPETITIONS;

    if (SINGLE_BENCHMARK != null || benchmarkID < totalBenchmarks) {
      benchmark.setupManager();

      // Show progress
      ProgressBar progressBar = findViewById(R.id.progressBar);
      progressBar.setVisibility(View.VISIBLE);
      benchmark.setProgressBar(progressBar);
    }

    if (SINGLE_BENCHMARK != null) {
      benchmark.addConfiguration(SINGLE_BENCHMARK, false);
      outputPanel.logInfo("KERNEL " + SINGLE_BENCHMARK);

      mTaskExecutor.execute(benchmark);
      mTaskExecutor.execute(new Runnable() {
        @Override
        public void run() {
          runOnUiThread(new Runnable() {
            @Override
            public void run() {
              outputPanel.logSuccess("EXECUTION FINISHED.");
            }
          });
        }
      });
    }
    else if (benchmarkID < totalBenchmarks) {
      BenchmarkTask.Benchmarks kernel = kernels[benchmarkID % kernels.length];
      outputPanel.logInfo("EXECUTING BENCHMARK " + (benchmarkID + 1) + "/" + totalBenchmarks + "...");
      outputPanel.logInfo("KERNEL " + kernel);

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
}
