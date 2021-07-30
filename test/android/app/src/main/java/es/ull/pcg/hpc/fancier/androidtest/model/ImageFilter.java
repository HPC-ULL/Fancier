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

package es.ull.pcg.hpc.fancier.androidtest.model;


import android.graphics.Bitmap;

import es.ull.pcg.hpc.fancier.image.RGBAImage;


public abstract class ImageFilter implements AutoCloseable {
  protected Bitmap mBmpIn;
  protected RGBAImage mInput, mOutput;
  protected ImageFilters mKernel;

  public void setInput(Bitmap input) {
    mBmpIn = input;

    if (mInput != null) {
      if (input.getWidth() == mInput.getWidth() && input.getHeight() == mInput.getHeight()) {
        mInput.setPixels(input);
      }
      else {
        mInput.release();
        mInput = null;
      }
    }

    if (mInput == null)
      mInput = new RGBAImage(input);

    if (mOutput != null &&
        (input.getWidth() != mOutput.getWidth() || input.getHeight() != mOutput.getHeight())) {
      mOutput.release();
      mOutput = null;
    }

    if (mOutput == null)
      mOutput = new RGBAImage(input.getWidth(), input.getHeight());
  }

  public void release() {
    if (mInput != null) {
      mInput.release();
      mInput = null;
    }

    if (mOutput != null) {
      mOutput.release();
      mOutput = null;
    }
  }

  public ImageFilters getKernel() {
    return mKernel;
  }

  @Override
  public void close() {
    release();
  }

  public abstract void setup();

  public abstract void process(Bitmap output);
}
