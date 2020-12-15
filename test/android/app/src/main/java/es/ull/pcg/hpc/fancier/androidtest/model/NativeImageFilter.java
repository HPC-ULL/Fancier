package es.ull.pcg.hpc.fancier.androidtest.model;


import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.util.Log;

import es.ull.pcg.hpc.fancier.image.RGBAImage;


public class NativeImageFilter extends ImageFilter {
  static {
    System.loadLibrary("filters-lib");
  }

  public enum Kernels {
    GRAYSCALE, BLUR, CONVOLVE3, CONVOLVE5, BILATERAL, MEDIAN, CONTRAST, FISHEYE, LEVELS, POSTERIZE
  }

  @SuppressWarnings({"FieldMayBeFinal", "FieldCanBeLocal"})
  private long nativeInstancePtr = 0L;

  private final Kernels mKernel;
  private final AssetManager mAssets;
  private RGBAImage mInputImg = null;

  public NativeImageFilter(AssetManager assets, Kernels kernel) {
    mAssets = assets;
    mKernel = kernel;
  }

  @Override
  public void setInput(Bitmap input) {
    super.setInput(input);

    if (mInputImg != null) {
      if (input.getWidth() == mInputImg.getWidth() && input.getHeight() == mInputImg.getHeight()) {
        mInputImg.setPixels(input);
      }
      else {
        mInputImg.release();
        mInputImg = null;
      }
    }

    if (mInputImg == null)
      mInputImg = new RGBAImage(input);
  }

  @Override
  public void setup() {
    setupImpl(mAssets, mKernel.ordinal());
  }

  @Override
  public void process(Bitmap output) {
    if (output.getWidth() != mInput.getWidth() || output.getHeight() != mInput.getHeight())
      throw new RuntimeException("Input and output dimensions do not match.");

    if (output.getConfig() != Bitmap.Config.ARGB_8888)
      Log.e("NativeImageFilter", "Output Bitmap has an unsupported format.");

    // Create output image and execute the filter
    RGBAImage outputImg = new RGBAImage(mInputImg.getDims());
    processImpl(mInputImg, outputImg);

    outputImg.updateBitmap(output);
  }

  @Override
  public void release() {
    if (mInputImg != null)
      mInputImg.release();

    mInputImg = null;

    if (nativeInstancePtr != 0L)
      releaseImpl();
  }

  private native void setupImpl(AssetManager assetManager, int kernel);

  private native void processImpl(RGBAImage input, RGBAImage output);

  private native void releaseImpl();
}
