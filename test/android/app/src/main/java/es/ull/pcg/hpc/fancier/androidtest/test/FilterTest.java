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

package es.ull.pcg.hpc.fancier.androidtest.test;


import android.graphics.Bitmap;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

import es.ull.pcg.hpc.fancier.androidtest.model.ImageFilter;


public class FilterTest implements RuntimeTest {
  private static final boolean EXPORT_IMAGE = false;

  private ImageFilter mFilter;
  private Bitmap mInput, mOutput;

  public FilterTest() {
    mFilter = null;
    mInput = mOutput = null;
  }

  public void setFilter(ImageFilter filter) {
    mFilter = filter;
  }

  public ImageFilter getFilter() {
    return mFilter;
  }

  public void setInput(Bitmap input) {
    mInput = input;
  }

  public Bitmap getInput() {
    return mInput;
  }

  public void setOutput(Bitmap output) {
    mOutput = output;
  }

  public Bitmap getOutput() {
    return mOutput;
  }

  @Override
  public void setup() {
    if (mFilter == null || mInput == null || mOutput == null)
      throw new RuntimeException("Invalid filter, input or output");

    mFilter.setInput(mInput);
    mFilter.setup();
  }

  @Override
  public boolean run() {
    if (mFilter == null)
      return false;

    mFilter.process(mOutput);

    if (EXPORT_IMAGE) {
      try (FileOutputStream fos = new FileOutputStream(new File("/data/data/es.ull.pcg.hpc.fancier.androidtest/cache/output.png"))) {
        mOutput.compress(Bitmap.CompressFormat.PNG, 70, fos);
      } catch (IOException ignored) {}
    }

    return true;
  }

  @Override
  public void teardown() {
    if (mFilter != null)
      mFilter.release();
  }
}
