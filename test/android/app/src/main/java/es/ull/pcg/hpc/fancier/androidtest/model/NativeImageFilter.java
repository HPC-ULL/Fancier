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
      mInput.syncToNative();
      mOutput.syncToNative();
      break;
    case GPU:
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
