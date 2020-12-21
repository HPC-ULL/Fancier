package es.ull.pcg.hpc.fancier.androidtest.model;


import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.util.Log;

import es.ull.pcg.hpc.fancier.image.RGBAImage;


public class NativeImageFilter extends ImageFilter {
  static {
    System.loadLibrary("filters-lib");
  }

  @SuppressWarnings({"FieldMayBeFinal", "FieldCanBeLocal"})
  private long nativeInstancePtr = 0L;

  private final ImageFilters mKernel;
  private final AssetManager mAssets;

  public NativeImageFilter(AssetManager assets, ImageFilters kernel) {
    mAssets = assets;
    mKernel = kernel;
  }

  @Override
  public void setup() {
    setupImpl(mAssets, mKernel.ordinal());
  }

  @Override
  public void process(Bitmap output) {
    if (output.getWidth() != mOutput.getWidth() || output.getHeight() != mOutput.getHeight())
      throw new RuntimeException("Input and output dimensions do not match.");

    if (output.getConfig() != Bitmap.Config.ARGB_8888)
      Log.e("NativeImageFilter", "Output Bitmap has an unsupported format.");

    // Create output image and execute the filter
    processImpl(mInput, mOutput);

    mOutput.updateBitmap(output);
  }

  @Override
  public void release() {
    super.release();

    if (nativeInstancePtr != 0L)
      releaseImpl();
  }

  private native void setupImpl(AssetManager assetManager, int kernel);

  private native void processImpl(RGBAImage input, RGBAImage output);

  private native void releaseImpl();
}
