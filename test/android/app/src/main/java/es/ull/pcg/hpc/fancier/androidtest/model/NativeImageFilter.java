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


import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.util.Log;

import es.ull.pcg.hpc.fancier.image.RGBAImage;


public class NativeImageFilter extends ImageFilter {
  static {
    System.loadLibrary("filters-lib");
  }

  public enum Version {
    GPU, CPU, REF
  }

  @SuppressWarnings({"FieldMayBeFinal", "FieldCanBeLocal"})
  private long nativeInstancePtr = 0L;

  private final Version mVersion;

  public NativeImageFilter(ImageFilters kernel, Version version) {
    mKernel = kernel;
    mVersion = version;
  }

  public Version getVersion() {
    return mVersion;
  }

  public static native void compileKernels(AssetManager assets);
  public static native void releaseKernels();

  @Override
  public void setup() {
    setupNative(mKernel.ordinal());

    switch (mVersion) {
    case CPU:
      mInput.syncToHost();
      mOutput.syncToHost();
      break;
    case GPU:
      mInput.syncToDevice();
      mOutput.syncToDevice();
      break;
    }
  }

  @Override
  public void process(Bitmap output) {
    if (output.getWidth() != mOutput.getWidth() || output.getHeight() != mOutput.getHeight())
      throw new RuntimeException("Input and output dimensions do not match.");

    if (output.getConfig() != Bitmap.Config.ARGB_8888)
      Log.e("NativeImageFilter", "Output Bitmap has an unsupported format.");

    switch (mVersion) {
    case CPU:
      processCpu(mInput, mOutput);
      break;
    case GPU:
      processGpu(mInput, mOutput);
      // Force to wait for the execution to finish, only needed if updateBitmap is not called
      mOutput.syncToHost();
      break;
    case REF:
      processRef(mBmpIn, output);
      break;
    }

    if (mVersion != Version.REF)
      mOutput.updateBitmap(output);
  }

  @Override
  public void release() {
    super.release();

    if (nativeInstancePtr != 0L)
      releaseNative();
  }

  private native void setupNative(int kernel);

  private native void processGpu(RGBAImage input, RGBAImage output);

  private native void processCpu(RGBAImage input, RGBAImage output);

  private native void processRef(Bitmap input, Bitmap output);

  private native void releaseNative();
}
