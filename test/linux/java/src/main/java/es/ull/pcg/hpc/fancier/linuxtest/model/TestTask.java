package es.ull.pcg.hpc.fancier.linuxtest.model;

import es.ull.pcg.hpc.fancier.linuxtest.Main;
import es.ull.pcg.hpc.fancier.linuxtest.test.RuntimeTest;

import java.io.PrintWriter;
import java.io.StringWriter;

public class TestTask implements Runnable {

    private final String TEST_START = "Test starting.";
    private final String TEST_SETUP = "Set-up finished. Running test.";
    private final String TEST_SUCCESS = "Test finished successfully!";
    private final String TEST_ERROR = "Test finished with an error!";
    private final String TEST_TEARDOWN = "Tearing down test.";
    private final String TEST_TEARDOWN_FINISH = "Tear-down finished.";

    private final Main mMain;
    private final String mTestName;
    private final RuntimeTest mTest;
    private final int mTestID;

    public TestTask(Main main, String testName, RuntimeTest test, int id) {
        this.mMain = main;
        this.mTestName = testName;
        this.mTest = test;
        this.mTestID = id;
    }

    @Override
    public void run() {
        try {
            // Setup
            log(TEST_START);
            mTest.setup();

            // Run
            log(TEST_SETUP);
            if (mTest.run())
                log(TEST_SUCCESS);
            else
                log(TEST_ERROR);

            // Teardown
            log(TEST_TEARDOWN);
            mTest.teardown();
            log(TEST_TEARDOWN_FINISH);
            System.out.println("");
        }
        catch (Throwable e) {
            StringWriter w = new StringWriter();
            e.printStackTrace(new PrintWriter(w));

            log(mTestID + " " + mTestName + ": " + w);
        }
    }

    private void log(final String text) {
        System.out.println(text);
    }
}
