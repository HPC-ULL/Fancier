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
    GPU, CPU
  }

  @SuppressWarnings({"FieldMayBeFinal", "FieldCanBeLocal"})
  private long nativeInstancePtr = 0L;

  private final ImageFilters mKernel;
  private final AssetManager mAssets;
  private final Version mVersion;

  public NativeImageFilter(AssetManager assets, ImageFilters kernel) {
    mKernel = kernel;
    mAssets = assets;
    mVersion = Version.GPU;
  }

  public NativeImageFilter(ImageFilters kernel) {
    mKernel = kernel;
    mAssets = null;
    mVersion = Version.CPU;
  }

  @Override
  public void setup() {
    switch (mVersion) {
    case CPU:
      setupCpu(mKernel.ordinal());
      mInput.syncToNative();
      mOutput.syncToNative();
      break;
    case GPU:
      setupGpu(mAssets, mKernel.ordinal());
      mInput.syncToOCL();
      mOutput.syncToOCL();
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
      break;
    }

    mOutput.updateBitmap(output);
  }

  @Override
  public void release() {
    super.release();

    if (nativeInstancePtr != 0L)
      releaseNative();
  }

  private native void setupGpu(AssetManager assetManager, int kernel);

  private native void setupCpu(int kernel);

  private native void processGpu(RGBAImage input, RGBAImage output);

  private native void processCpu(RGBAImage input, RGBAImage output);

  private native void releaseNative();
}
