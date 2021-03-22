package es.ull.pcg.hpc.fancier.androidtest.model;


import android.graphics.Bitmap;

import java.util.concurrent.Executor;

import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.activity.MainActivity;
import es.ull.pcg.hpc.fancier.androidtest.test.ArrayTest;
import es.ull.pcg.hpc.fancier.androidtest.test.FilterTest;
import es.ull.pcg.hpc.fancier.androidtest.test.InitTest;
import es.ull.pcg.hpc.fancier.androidtest.test.MathTest;
import es.ull.pcg.hpc.fancier.androidtest.test.ReleaseTest;
import es.ull.pcg.hpc.fancier.androidtest.test.RuntimeTest;
import es.ull.pcg.hpc.fancier.androidtest.test.VectorArrayTest;
import es.ull.pcg.hpc.fancier.androidtest.test.VectorTest;
import es.ull.pcg.hpc.fancier.androidtest.view.ConsoleView;


public class FancierTestRunner {
  private final MainActivity mMain;

  public FancierTestRunner(MainActivity main) {
    this.mMain = main;
  }

  public void runTest(Tests selectedTest, String selectedName, Bitmap inBitmap, Bitmap outBitmap) {
    RuntimeTest test = null;

    // Create the RuntimeTest instance associated with the selected test
    // First try to build an image filter
    ImageFilter filter = ImageFilterBuilder.create(selectedTest.filterInfo);

    if (filter != null) {
      FilterTest filterTest = new FilterTest();
      filterTest.setInput(inBitmap);
      filterTest.setOutput(outBitmap);
      filterTest.setFilter(filter);
      test = filterTest;
    }
    else {
      switch (selectedTest) {
      case TEST_INIT:
        test = new InitTest(mMain.getCacheDir().getAbsolutePath());
        break;
      case TEST_RELEASE:
        test = new ReleaseTest();
        break;
      case TEST_MATH:
        test = new MathTest();
        break;
      case TEST_VECTOR:
        test = new VectorTest();
        break;
      case TEST_ARRAY:
        test = new ArrayTest();
        break;
      case TEST_VECTOR_ARRAY:
        test = new VectorArrayTest();
        break;
      default:
        printTestNotImplemented(selectedName);
        break;
      }
    }

    // If the selected test is valid, run it
    if (test != null) {
      ConsoleView outputPanel = mMain.findViewById(R.id.outputPanel);

      String fmt = mMain.getResources().getText(R.string.test_added).toString();
      int testID = mMain.getNextTestID();

      outputPanel.logInfo(String.format(fmt, testID, selectedName));

      // Create tasks for execution
      Executor executor = mMain.getTaskExecutor();

      boolean isGpuFilter = filter != null && selectedTest.filterInfo.nativeVersion == NativeImageFilter.Version.GPU;

      // Compile GPU kernels, if necessary
      if (isGpuFilter) {
        executor.execute(new Runnable() {
          @Override
          public void run() {
            NativeImageFilter.compileKernels(mMain.getAssets());
          }
        });
      }

      // Run the actual task
      executor.execute(new TestTask(mMain, selectedName, test, testID));

      // Release GPU kernels, if necessary
      if (isGpuFilter) {
        executor.execute(new Runnable() {
          @Override
          public void run() {
            NativeImageFilter.releaseKernels();
          }
        });
      }
    }
  }

  private void printTestNotImplemented(String selectedName) {
    ConsoleView outputPanel = mMain.findViewById(R.id.outputPanel);
    String fmt = mMain.getResources().getText(R.string.test_not_implemented).toString();

    outputPanel.logWarning(String.format(fmt, selectedName));
  }

  public enum Tests {
    TEST_INIT,

    TEST_MATH,
    TEST_VECTOR,
    TEST_ARRAY,
    TEST_VECTOR_ARRAY,

    TEST_OCL_GRAYSCALE(NativeImageFilter.Version.GPU, ImageFilters.GRAYSCALE),
    TEST_OCL_BLUR(NativeImageFilter.Version.GPU, ImageFilters.BLUR),
    TEST_OCL_CONVOLVE3(NativeImageFilter.Version.GPU, ImageFilters.CONVOLVE3),
    TEST_OCL_CONVOLVE5(NativeImageFilter.Version.GPU, ImageFilters.CONVOLVE5),
    TEST_OCL_BILATERAL(NativeImageFilter.Version.GPU, ImageFilters.BILATERAL),
    TEST_OCL_MEDIAN(NativeImageFilter.Version.GPU, ImageFilters.MEDIAN),
    TEST_OCL_CONTRAST(NativeImageFilter.Version.GPU, ImageFilters.CONTRAST),
    TEST_OCL_FISHEYE(NativeImageFilter.Version.GPU, ImageFilters.FISHEYE),
    TEST_OCL_LEVELS(NativeImageFilter.Version.GPU, ImageFilters.LEVELS),
    TEST_OCL_POSTERIZE(NativeImageFilter.Version.GPU, ImageFilters.POSTERIZE),

    TEST_NATIVE_GRAYSCALE(NativeImageFilter.Version.CPU, ImageFilters.GRAYSCALE),
    TEST_NATIVE_BLUR(NativeImageFilter.Version.CPU, ImageFilters.BLUR),
    TEST_NATIVE_CONVOLVE3(NativeImageFilter.Version.CPU, ImageFilters.CONVOLVE3),
    TEST_NATIVE_CONVOLVE5(NativeImageFilter.Version.CPU, ImageFilters.CONVOLVE5),
    TEST_NATIVE_BILATERAL(NativeImageFilter.Version.CPU, ImageFilters.BILATERAL),
    TEST_NATIVE_MEDIAN(NativeImageFilter.Version.CPU, ImageFilters.MEDIAN),
    TEST_NATIVE_CONTRAST(NativeImageFilter.Version.CPU, ImageFilters.CONTRAST),
    TEST_NATIVE_FISHEYE(NativeImageFilter.Version.CPU, ImageFilters.FISHEYE),
    TEST_NATIVE_LEVELS(NativeImageFilter.Version.CPU, ImageFilters.LEVELS),
    TEST_NATIVE_POSTERIZE(NativeImageFilter.Version.CPU, ImageFilters.POSTERIZE),

    TEST_JAVA_GRAYSCALE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.GRAYSCALE),
    TEST_JAVA_BLUR(JavaImageFilter.Version.PERFORMANCE, ImageFilters.BLUR),
    TEST_JAVA_CONVOLVE3(JavaImageFilter.Version.PERFORMANCE, ImageFilters.CONVOLVE3),
    TEST_JAVA_CONVOLVE5(JavaImageFilter.Version.PERFORMANCE, ImageFilters.CONVOLVE5),
    TEST_JAVA_BILATERAL(JavaImageFilter.Version.PERFORMANCE, ImageFilters.BILATERAL),
    TEST_JAVA_MEDIAN(JavaImageFilter.Version.PERFORMANCE, ImageFilters.MEDIAN),
    TEST_JAVA_CONTRAST(JavaImageFilter.Version.PERFORMANCE, ImageFilters.CONTRAST),
    TEST_JAVA_FISHEYE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.FISHEYE),
    TEST_JAVA_LEVELS(JavaImageFilter.Version.PERFORMANCE, ImageFilters.LEVELS),
    TEST_JAVA_POSTERIZE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.POSTERIZE),

    TEST_RELEASE;

    public final FilterInfo filterInfo;

    Tests() {
      this.filterInfo = null;
    }

    Tests(JavaImageFilter.Version version, ImageFilters kernel) {
      this.filterInfo = new FilterInfo(version, kernel);
    }

    Tests(NativeImageFilter.Version version, ImageFilters kernel) {
      this.filterInfo = new FilterInfo(version, kernel);
    }
  }
}
