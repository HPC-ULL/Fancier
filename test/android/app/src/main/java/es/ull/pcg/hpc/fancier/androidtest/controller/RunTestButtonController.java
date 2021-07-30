/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

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
import es.ull.pcg.hpc.fancier.androidtest.model.FancierTestRunner;


public class RunTestButtonController implements View.OnClickListener {
  private final MainActivity mMain;
  private final FancierTestRunner mRunner;

  public RunTestButtonController(MainActivity main) {
    this.mMain = main;
    this.mRunner = new FancierTestRunner(mMain);
  }

  @Override
  public void onClick(View view) {
    // Obtain the selected test from the spinner
    Spinner testSpinner = mMain.findViewById(R.id.testSpinner);
    int selectedTest = testSpinner.getSelectedItemPosition();

    Bitmap inBitmap = null, outBitmap = null;

    // Show/Hide images depending on the type of test
    View imagesPanel = mMain.findViewById(R.id.imagesPanel);
    if (selectedTest < FancierTestRunner.Tests.TEST_OCL_GRAYSCALE.ordinal() ||
        selectedTest == FancierTestRunner.Tests.TEST_RELEASE.ordinal()) {
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
    mRunner.runTest(FancierTestRunner.Tests.values()[selectedTest], selectedName, inBitmap, outBitmap);
  }
}
