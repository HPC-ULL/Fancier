package es.ull.pcg.hpc.fancier.androidtest.model;


import android.content.res.AssetManager;
import android.graphics.Bitmap;

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


public class TestRunner {
  private final MainActivity mMain;

  public TestRunner(MainActivity main) {
    this.mMain = main;
  }

  public void runTest(Tests selectedTest, String selectedName, Bitmap inBitmap, Bitmap outBitmap) {
    RuntimeTest test = null;
    FilterTest filterTest = null;

    // Create the RuntimeTest instance associated with the selected test
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
    case TEST_OCL_GRAYSCALE:
    case TEST_OCL_BLUR:
    case TEST_OCL_CONVOLVE3:
    case TEST_OCL_CONVOLVE5:
    case TEST_OCL_BILATERAL:
    case TEST_OCL_MEDIAN:
    case TEST_OCL_CONTRAST:
    case TEST_OCL_FISHEYE:
    case TEST_OCL_LEVELS:
    case TEST_OCL_POSTERIZE:
    case TEST_NATIVE_GRAYSCALE:
    case TEST_NATIVE_BLUR:
    case TEST_NATIVE_CONVOLVE3:
    case TEST_NATIVE_CONVOLVE5:
    case TEST_NATIVE_BILATERAL:
    case TEST_NATIVE_MEDIAN:
    case TEST_NATIVE_CONTRAST:
    case TEST_NATIVE_FISHEYE:
    case TEST_NATIVE_LEVELS:
    case TEST_NATIVE_POSTERIZE:
    case TEST_JAVA_GRAYSCALE:
    case TEST_JAVA_BLUR:
    case TEST_JAVA_CONVOLVE3:
    case TEST_JAVA_CONVOLVE5:
    case TEST_JAVA_BILATERAL:
    case TEST_JAVA_MEDIAN:
    case TEST_JAVA_CONTRAST:
    case TEST_JAVA_FISHEYE:
    case TEST_JAVA_LEVELS:
    case TEST_JAVA_POSTERIZE:
      filterTest = new FilterTest();
      break;
    default:
      printTestNotImplemented(selectedName);
      break;
    }

    // If it is a FilterTest, set the filter accordingly
    if (filterTest != null) {
      AssetManager assets = mMain.getResources().getAssets();
      ImageFilters kernel = null;
      ImageFilter filter = null;

      switch (selectedTest) {
      case TEST_OCL_GRAYSCALE:
      case TEST_NATIVE_GRAYSCALE:
      case TEST_JAVA_GRAYSCALE:
        kernel = ImageFilters.GRAYSCALE;
        break;
      case TEST_OCL_BLUR:
      case TEST_NATIVE_BLUR:
      case TEST_JAVA_BLUR:
        kernel = ImageFilters.BLUR;
        break;
      case TEST_OCL_CONVOLVE3:
      case TEST_NATIVE_CONVOLVE3:
      case TEST_JAVA_CONVOLVE3:
        kernel = ImageFilters.CONVOLVE3;
        break;
      case TEST_OCL_CONVOLVE5:
      case TEST_NATIVE_CONVOLVE5:
      case TEST_JAVA_CONVOLVE5:
        kernel = ImageFilters.CONVOLVE5;
        break;
      case TEST_OCL_BILATERAL:
      case TEST_NATIVE_BILATERAL:
      case TEST_JAVA_BILATERAL:
        kernel = ImageFilters.BILATERAL;
        break;
      case TEST_OCL_MEDIAN:
      case TEST_NATIVE_MEDIAN:
      case TEST_JAVA_MEDIAN:
        kernel = ImageFilters.MEDIAN;
        break;
      case TEST_OCL_CONTRAST:
      case TEST_NATIVE_CONTRAST:
      case TEST_JAVA_CONTRAST:
        kernel = ImageFilters.CONTRAST;
        break;
      case TEST_OCL_FISHEYE:
      case TEST_NATIVE_FISHEYE:
      case TEST_JAVA_FISHEYE:
        kernel = ImageFilters.FISHEYE;
        break;
      case TEST_OCL_LEVELS:
      case TEST_NATIVE_LEVELS:
      case TEST_JAVA_LEVELS:
        kernel = ImageFilters.LEVELS;
        break;
      case TEST_OCL_POSTERIZE:
      case TEST_NATIVE_POSTERIZE:
      case TEST_JAVA_POSTERIZE:
        kernel = ImageFilters.POSTERIZE;
        break;
      }

      switch (selectedTest) {
      case TEST_OCL_GRAYSCALE:
      case TEST_OCL_BLUR:
      case TEST_OCL_CONVOLVE3:
      case TEST_OCL_CONVOLVE5:
      case TEST_OCL_BILATERAL:
      case TEST_OCL_MEDIAN:
      case TEST_OCL_CONTRAST:
      case TEST_OCL_FISHEYE:
      case TEST_OCL_LEVELS:
      case TEST_OCL_POSTERIZE:
        filter = new NativeImageFilter(assets, kernel);
        break;
      case TEST_NATIVE_GRAYSCALE:
      case TEST_NATIVE_BLUR:
      case TEST_NATIVE_CONVOLVE3:
      case TEST_NATIVE_CONVOLVE5:
      case TEST_NATIVE_BILATERAL:
      case TEST_NATIVE_MEDIAN:
      case TEST_NATIVE_CONTRAST:
      case TEST_NATIVE_FISHEYE:
      case TEST_NATIVE_LEVELS:
      case TEST_NATIVE_POSTERIZE:
        filter = new NativeImageFilter(kernel);
        break;
      case TEST_JAVA_GRAYSCALE:
      case TEST_JAVA_BLUR:
      case TEST_JAVA_CONVOLVE3:
      case TEST_JAVA_CONVOLVE5:
      case TEST_JAVA_BILATERAL:
      case TEST_JAVA_MEDIAN:
      case TEST_JAVA_CONTRAST:
      case TEST_JAVA_FISHEYE:
      case TEST_JAVA_LEVELS:
      case TEST_JAVA_POSTERIZE:
        filter = new JavaImageFilter(kernel);
        break;
      default:
        printTestNotImplemented(selectedName);
        break;
      }

      if (filter != null) {
        filterTest.setInput(inBitmap);
        filterTest.setOutput(outBitmap);
        filterTest.setFilter(filter);
        test = filterTest;
      }
    }

    // If the selected test is valid, run it
    if (test != null) {
      ConsoleView outputPanel = mMain.findViewById(R.id.outputPanel);

      String fmt = mMain.getResources().getText(R.string.test_added).toString();
      int testID = mMain.getNextTestID();

      outputPanel.logInfo(String.format(fmt, testID, selectedName));

      // Create new task and enqueue for execution
      mMain.getTaskExecutor().execute(new TestTask(mMain, selectedName, test, testID));
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

    TEST_OCL_GRAYSCALE,
    TEST_OCL_BLUR,
    TEST_OCL_CONVOLVE3,
    TEST_OCL_CONVOLVE5,
    TEST_OCL_BILATERAL,
    TEST_OCL_MEDIAN,
    TEST_OCL_CONTRAST,
    TEST_OCL_FISHEYE,
    TEST_OCL_LEVELS,
    TEST_OCL_POSTERIZE,

    TEST_NATIVE_GRAYSCALE,
    TEST_NATIVE_BLUR,
    TEST_NATIVE_CONVOLVE3,
    TEST_NATIVE_CONVOLVE5,
    TEST_NATIVE_BILATERAL,
    TEST_NATIVE_MEDIAN,
    TEST_NATIVE_CONTRAST,
    TEST_NATIVE_FISHEYE,
    TEST_NATIVE_LEVELS,
    TEST_NATIVE_POSTERIZE,

    TEST_JAVA_GRAYSCALE,
    TEST_JAVA_BLUR,
    TEST_JAVA_CONVOLVE3,
    TEST_JAVA_CONVOLVE5,
    TEST_JAVA_BILATERAL,
    TEST_JAVA_MEDIAN,
    TEST_JAVA_CONTRAST,
    TEST_JAVA_FISHEYE,
    TEST_JAVA_LEVELS,
    TEST_JAVA_POSTERIZE,

    TEST_RELEASE
  }
}
