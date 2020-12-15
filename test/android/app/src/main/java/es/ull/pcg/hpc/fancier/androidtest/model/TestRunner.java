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
    case TEST_GRAYSCALE:
    case TEST_BLUR:
    case TEST_CONVOLVE3:
    case TEST_CONVOLVE5:
    case TEST_BILATERAL:
    case TEST_MEDIAN:
    case TEST_CONTRAST:
    case TEST_FISHEYE:
    case TEST_LEVELS:
    case TEST_POSTERIZE:
      filterTest = new FilterTest();
      break;
    default:
      printTestNotImplemented(selectedName);
      break;
    }

    // If it is a FilterTest, set the filter accordingly
    if (filterTest != null) {
      AssetManager assets = mMain.getResources().getAssets();
      ImageFilter filter = null;

      switch (selectedTest) {
      case TEST_GRAYSCALE:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.GRAYSCALE);
        break;
      case TEST_BLUR:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.BLUR);
        break;
      case TEST_CONVOLVE3:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.CONVOLVE3);
        break;
      case TEST_CONVOLVE5:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.CONVOLVE5);
        break;
      case TEST_BILATERAL:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.BILATERAL);
        break;
      case TEST_MEDIAN:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.MEDIAN);
        break;
      case TEST_CONTRAST:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.CONTRAST);
        break;
      case TEST_FISHEYE:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.FISHEYE);
        break;
      case TEST_LEVELS:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.LEVELS);
        break;
      case TEST_POSTERIZE:
        filter = new NativeImageFilter(assets, NativeImageFilter.Kernels.POSTERIZE);
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
      mMain.getTestExecutor().execute(new TestTask(mMain, selectedName, test, testID));
    }
  }

  private void printTestNotImplemented(String selectedName) {
    ConsoleView outputPanel = mMain.findViewById(R.id.outputPanel);
    String fmt = mMain.getResources().getText(R.string.test_not_implemented).toString();

    outputPanel.logWarning(String.format(fmt, selectedName));
  }

  public enum Tests {
    TEST_INIT,

    TEST_MATH, TEST_VECTOR, TEST_ARRAY, TEST_VECTOR_ARRAY,

    TEST_GRAYSCALE, TEST_BLUR, TEST_CONVOLVE3, TEST_CONVOLVE5, TEST_BILATERAL, TEST_MEDIAN,
    TEST_CONTRAST, TEST_FISHEYE, TEST_LEVELS, TEST_POSTERIZE,

    TEST_RELEASE
  }
}
