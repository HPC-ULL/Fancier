package es.ull.pcg.hpc.fancier.androidtest.activity;

import android.text.method.ScrollingMovementMethod;
import android.widget.Button;
import android.widget.ImageView;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.controller.RunTestButtonController;
import es.ull.pcg.hpc.fancier.androidtest.model.TestRunner;
import es.ull.pcg.hpc.fancier.androidtest.view.ConsoleView;

import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

public class MainActivity extends AppCompatActivity {
    private static final boolean INTERACTIVE = false;

    private final Executor mTestExecutor = Executors.newSingleThreadExecutor();
    private int mCurrentTestID = 0;

    @Override
    protected void onCreate (Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        System.loadLibrary("test-lib");

        Button runButton = findViewById(R.id.runButton);
        runButton.setOnClickListener(new RunTestButtonController(this));

        ImageView inputImage = findViewById(R.id.inputImage);
        inputImage.setImageResource(R.drawable.fullhd);

        ConsoleView outputPanel = findViewById(R.id.outputPanel);
        outputPanel.setHorizontallyScrolling(true);
        outputPanel.setMovementMethod(new ScrollingMovementMethod());

        if (!INTERACTIVE) {
            TestRunner.Tests[] testSequence = new TestRunner.Tests[]{
                    TestRunner.Tests.TEST_INIT,

                    TestRunner.Tests.TEST_MATH,
                    TestRunner.Tests.TEST_VECTOR,

                    TestRunner.Tests.TEST_RELEASE
            };

            TestRunner controller = new TestRunner(this);
            String[] testNames = getResources().getStringArray(R.array.tests);

            for (TestRunner.Tests selectedTest: testSequence)
                controller.runTest(selectedTest, testNames[selectedTest.ordinal()]);
        }
    }

    public Executor getTestExecutor () {
        return mTestExecutor;
    }

    public int getNextTestID () {
        return ++mCurrentTestID;
    }
}
