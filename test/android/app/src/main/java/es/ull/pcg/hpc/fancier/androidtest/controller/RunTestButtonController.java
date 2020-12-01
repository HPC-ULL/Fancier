package es.ull.pcg.hpc.fancier.androidtest.controller;

import android.view.View;
import android.widget.Spinner;
import es.ull.pcg.hpc.fancier.androidtest.*;
import es.ull.pcg.hpc.fancier.androidtest.activity.MainActivity;
import es.ull.pcg.hpc.fancier.androidtest.model.TestRunner;

public class RunTestButtonController implements View.OnClickListener {
    private final MainActivity mMain;
    private final TestRunner mRunner;

    public RunTestButtonController (MainActivity main) {
        this.mMain = main;
        this.mRunner = new TestRunner(mMain);
    }

    @Override
    public void onClick (View view) {
        // Obtain the selected test from the spinner
        Spinner testSpinner = mMain.findViewById(R.id.testSpinner);
        int selectedTest = testSpinner.getSelectedItemPosition();

        // Show/Hide images depending on the type of test
        View imagesPanel = mMain.findViewById(R.id.imagesPanel);
        if (selectedTest < TestRunner.Tests.TEST_GRAYSCALE.ordinal())
            imagesPanel.setVisibility(View.GONE);
        else
            imagesPanel.setVisibility(View.VISIBLE);

        // Run the test
        final String selectedName = testSpinner.getSelectedItem().toString();
        mRunner.runTest(TestRunner.Tests.values()[selectedTest], selectedName);
    }
}
