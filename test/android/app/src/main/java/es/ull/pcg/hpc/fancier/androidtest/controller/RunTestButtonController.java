package es.ull.pcg.hpc.fancier.androidtest.controller;


import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.view.View;
import android.widget.ImageView;
import android.widget.Spinner;

import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.activity.MainActivity;
import es.ull.pcg.hpc.fancier.androidtest.model.TestRunner;


public class RunTestButtonController implements View.OnClickListener {
  private final MainActivity mMain;
  private final TestRunner mRunner;

  public RunTestButtonController(MainActivity main) {
    this.mMain = main;
    this.mRunner = new TestRunner(mMain);
  }

  @Override
  public void onClick(View view) {
    // Obtain the selected test from the spinner
    Spinner testSpinner = mMain.findViewById(R.id.testSpinner);
    int selectedTest = testSpinner.getSelectedItemPosition();

    Bitmap inBitmap = null, outBitmap = null;

    // Show/Hide images depending on the type of test
    View imagesPanel = mMain.findViewById(R.id.imagesPanel);
    if (selectedTest < TestRunner.Tests.TEST_OCL_GRAYSCALE.ordinal() ||
        selectedTest == TestRunner.Tests.TEST_RELEASE.ordinal()) {
      imagesPanel.setVisibility(View.GONE);
    }
    else {
      imagesPanel.setVisibility(View.VISIBLE);

      ImageView inputImage = mMain.findViewById(R.id.inputImage);
      ImageView outputImage = mMain.findViewById(R.id.outputImage);

      BitmapFactory.Options options = new BitmapFactory.Options();
      options.inMutable = false;
      options.inPreferredConfig = Bitmap.Config.ARGB_8888;

      // First try to get Bitmaps from the ImageViews, in case they are already present
      Drawable drawable = inputImage.getDrawable();
      if (drawable instanceof BitmapDrawable)
        inBitmap = ((BitmapDrawable) drawable).getBitmap();

      drawable = outputImage.getDrawable();
      if (drawable instanceof BitmapDrawable)
        outBitmap = ((BitmapDrawable) drawable).getBitmap();

      // If the ImageViews did not already have Bitmaps in them, create and set them
      if (inBitmap == null) {
        inBitmap = BitmapFactory.decodeResource(mMain.getResources(), R.drawable.fullhd, options);
        inputImage.setImageBitmap(inBitmap);
      }

      if (outBitmap == null) {
        outBitmap =
            Bitmap.createBitmap(inBitmap.getWidth(), inBitmap.getHeight(), inBitmap.getConfig());
        outputImage.setImageBitmap(outBitmap);
      }
    }

    // Run the test
    final String selectedName = testSpinner.getSelectedItem().toString();
    mRunner.runTest(TestRunner.Tests.values()[selectedTest], selectedName, inBitmap, outBitmap);
  }
}
