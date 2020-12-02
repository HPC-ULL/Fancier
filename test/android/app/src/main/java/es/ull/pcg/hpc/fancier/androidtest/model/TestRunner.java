package es.ull.pcg.hpc.fancier.androidtest.model;


import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.activity.MainActivity;
import es.ull.pcg.hpc.fancier.androidtest.test.ArrayTest;
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

  public void runTest(Tests selectedTest, String selectedName) {
    ConsoleView outputPanel = mMain.findViewById(R.id.outputPanel);

    RuntimeTest test = null;
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
    // TODO Write and use actual tests
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
    case TEST_LAPLACE:
    case TEST_CONVOLVE3:
    case TEST_CONVOLVE5:
    default:
      String fmt = mMain.getResources().getText(R.string.test_not_implemented).toString();
      outputPanel.logWarning(String.format(fmt, selectedName));
      break;
    }

    if (test != null) {
      int testID = mMain.getNextTestID();

      String fmt = mMain.getResources().getText(R.string.test_added).toString();
      outputPanel.logInfo(String.format(fmt, testID, selectedName));

      // Create new task and enqueue for execution
      mMain.getTestExecutor().execute(new TestTask(mMain, selectedName, test, testID));
    }
  }

  public enum Tests {
    TEST_INIT, TEST_RELEASE,

    TEST_MATH, TEST_VECTOR, TEST_ARRAY, TEST_VECTOR_ARRAY,

    TEST_GRAYSCALE, TEST_BLUR, TEST_LAPLACE, TEST_CONVOLVE3, TEST_CONVOLVE5
  }
}
