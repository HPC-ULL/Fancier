package es.ull.pcg.hpc.fancier.androidtest.model;


import android.graphics.Bitmap;
import android.graphics.Color;
import android.util.Log;

import java.nio.ByteBuffer;
import java.util.Arrays;

import es.ull.pcg.hpc.fancier.Math;
import es.ull.pcg.hpc.fancier.image.RGBAColor;
import es.ull.pcg.hpc.fancier.image.RGBAImage;
import es.ull.pcg.hpc.fancier.vector.Byte3;
import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Float2;
import es.ull.pcg.hpc.fancier.vector.Float3;
import es.ull.pcg.hpc.fancier.vector.Float4;
import es.ull.pcg.hpc.fancier.vector.Int2;
import es.ull.pcg.hpc.fancier.vector.Int3;
import es.ull.pcg.hpc.fancier.vector.array.Byte4Array;


public class JavaImageFilter extends ImageFilter {
  public enum Version {
    REFERENCE, PERFORMANCE, BITMAP
  }

  private final Version mVersion;

  public JavaImageFilter(ImageFilters kernel, Version version) {
    mKernel = kernel;
    mVersion = version;
  }

  public JavaImageFilter(ImageFilters kernel) {
    this(kernel, Version.PERFORMANCE);
  }

  public Version getVersion() {
    return mVersion;
  }

  @Override
  public void setup() {
    mInput.syncToNative();
    mOutput.syncToNative();
  }

  @Override
  public void process(Bitmap output) {
    if (output.getWidth() != mOutput.getWidth() || output.getHeight() != mOutput.getHeight())
      throw new RuntimeException("Input and output dimensions do not match.");

    if (output.getConfig() != Bitmap.Config.ARGB_8888)
      Log.e("NativeImageFilter", "Output Bitmap has an unsupported format.");

    switch (mKernel) {
    case GRAYSCALE:
      switch (mVersion) {
      case REFERENCE:
        runGrayscaleRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runGrayscalePerf(mInput, mOutput);
        break;
      case BITMAP:
        runGrayscaleBmp(mBmpIn, output);
        break;
      }
      break;
    case BLUR:
      switch (mVersion) {
      case REFERENCE:
        runBlurRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runBlurPerf(mInput, mOutput);
        break;
      case BITMAP:
        runBlurBmp(mBmpIn, output);
        break;
      }
      break;
    case CONVOLVE3:
      switch (mVersion) {
      case REFERENCE:
        runConvolve3Ref(mInput, mOutput);
        break;
      case PERFORMANCE:
        runConvolve3Perf(mInput, mOutput);
        break;
      case BITMAP:
        runConvolve3Bmp(mBmpIn, output);
        break;
      }
      break;
    case CONVOLVE5:
      switch (mVersion) {
      case REFERENCE:
        runConvolve5Ref(mInput, mOutput);
        break;
      case PERFORMANCE:
        runConvolve5Perf(mInput, mOutput);
        break;
      case BITMAP:
        runConvolve5Bmp(mBmpIn, output);
        break;
      }
      break;
    case BILATERAL:
      switch (mVersion) {
      case REFERENCE:
        runBilateralRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runBilateralPerf(mInput, mOutput);
        break;
      case BITMAP:
        runBilateralBmp(mBmpIn, output);
        break;
      }
      break;
    case MEDIAN:
      switch (mVersion) {
      case REFERENCE:
        runMedianRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runMedianPerf(mInput, mOutput);
        break;
      case BITMAP:
        runMedianBmp(mBmpIn, output);
        break;
      }
      break;
    case CONTRAST:
      switch (mVersion) {
      case REFERENCE:
        runContrastRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runContrastPerf(mInput, mOutput);
        break;
      case BITMAP:
        runContrastBmp(mBmpIn, output);
        break;
      }
      break;
    case FISHEYE:
      switch (mVersion) {
      case REFERENCE:
        runFisheyeRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runFisheyePerf(mInput, mOutput);
        break;
      case BITMAP:
        runFisheyeBmp(mBmpIn, output);
        break;
      }
      break;
    case LEVELS:
      switch (mVersion) {
      case REFERENCE:
        runLevelsRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runLevelsPerf(mInput, mOutput);
        break;
      case BITMAP:
        runLevelsBmp(mBmpIn, output);
        break;
      }
      break;
    case POSTERIZE:
      switch (mVersion) {
      case REFERENCE:
        runPosterizeRef(mInput, mOutput);
        break;
      case PERFORMANCE:
        runPosterizePerf(mInput, mOutput);
        break;
      case BITMAP:
        runPosterizeBmp(mBmpIn, output);
        break;
      }
      break;
    }

    // TODO Remove to see results
    //if (mVersion != Version.BITMAP)
    //  mOutput.updateBitmap(output);
  }

  // Grayscale

  private static final Float3 GS_WEIGHTS = new Float3(0.299f, 0.587f, 0.114f);

  private static void runGrayscaleRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4 pixelIn = input.get(x, y);
        byte grayValue = (byte) Float3.dot(pixelIn.asByte3().convertFloat3(), GS_WEIGHTS);
        output.set(x, y, new Byte4(grayValue, grayValue, grayValue, pixelIn.w));
      }
    }
  }

  private static void runGrayscalePerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pixelIn = new Byte4();
    Byte3 pixelInB3 = new Byte3();
    Float3 pixelInF3 = new Float3();
    Byte4 pixelOut = new Byte4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4Array.getBuffer(iBuffer, y * width + x, pixelIn);
        pixelIn.asByte3(pixelInB3);
        pixelInB3.convertFloat3(pixelInF3);
        byte grayValue = (byte) Float3.dot(pixelInF3, GS_WEIGHTS);
        pixelOut.set(grayValue, grayValue, grayValue, pixelIn.w);
        Byte4Array.setBuffer(oBuffer, y * width + x, pixelOut);
      }
    }
  }

  private static void runGrayscaleBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int pixelIn = input.getPixel(x, y);
        int grayValue =
            (int) (Color.red(pixelIn) * GS_WEIGHTS.x + Color.green(pixelIn) * GS_WEIGHTS.y +
                   Color.blue(pixelIn) * GS_WEIGHTS.z);
        output.setPixel(x, y, Color.argb(Color.alpha(pixelIn), grayValue, grayValue, grayValue));
      }
    }
  }

  // Blur

  private static final int BLUR_RADIUS = 5;

  private static void blurBuildMask(float[] gaussKernel, int radius) {
    float sigma = 0.4f * radius + 0.6f;
    float coeff1 = 1.0f / (Math.sqrt(2.0f * Math.M_PI_F) * sigma);
    float coeff2 = -1.0f / (2.0f * sigma * sigma);

    float normalize_factor = 0.0f;
    for (int r = -radius; r <= radius; r++) {
      gaussKernel[r + radius] = coeff1 * Math.pow(Math.M_E_F, r * r * coeff2);
      normalize_factor += gaussKernel[r + radius];
    }

    normalize_factor = 1.0f / normalize_factor;
    for (int r = -radius; r <= radius; r++) {
      gaussKernel[r + radius] *= normalize_factor;
    }
  }

  private static void runBlurRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    float[] gaussKernel = new float[BLUR_RADIUS * 2 + 1];
    blurBuildMask(gaussKernel, BLUR_RADIUS);

    try (RGBAImage buffer = new RGBAImage(input.getDims())) {
      buffer.syncToNative();

      // Horizontal (input -> buffer)
      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          Float4 blurredPixel = new Float4(0.0f);
          int kernelIndex = 0;

          if (x <= BLUR_RADIUS || x >= width - BLUR_RADIUS) {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              int x2 = Math.clamp(x + r, 0, width - 1);
              Float4.add(blurredPixel,
                         Float4.mul(input.get(x2, y).convertFloat4(), gaussKernel[kernelIndex++]),
                         blurredPixel);
            }
          }
          else {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              Float4.add(blurredPixel, Float4
                             .mul(input.get(x + r, y).convertFloat4(), gaussKernel[kernelIndex++]),
                         blurredPixel);
            }
          }

          buffer.set(x, y, blurredPixel.convertByte4());
        }
      }

      // Vertical (buffer -> output)
      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          Float4 blurredPixel = new Float4(0.0f);
          int kernelIndex = 0;

          if (y <= BLUR_RADIUS || y >= height - BLUR_RADIUS) {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              int y2 = Math.clamp(y + r, 0, height - 1);
              Float4.add(blurredPixel,
                         Float4.mul(buffer.get(x, y2).convertFloat4(), gaussKernel[kernelIndex++]),
                         blurredPixel);
            }
          }
          else {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              Float4.add(blurredPixel, Float4
                             .mul(buffer.get(x, y + r).convertFloat4(), gaussKernel[kernelIndex++]),
                         blurredPixel);
            }
          }

          output.set(x, y, blurredPixel.convertByte4());
        }
      }
    }
  }

  private static void runBlurPerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    float[] gaussKernel = new float[BLUR_RADIUS * 2 + 1];
    blurBuildMask(gaussKernel, BLUR_RADIUS);

    Float4 blurredPixel = new Float4();
    Byte4 inputB = new Byte4();
    Float4 inputF = new Float4();
    Float4 tmpMul = new Float4();
    Byte4 outB = new Byte4();

    try (RGBAImage buffer = new RGBAImage(input.getDims())) {
      buffer.syncToNative();
      ByteBuffer bBuffer = buffer.getBuffer();

      // Horizontal (input -> buffer)
      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          blurredPixel.set(0.0f);
          int kernelIndex = 0;

          if (x <= BLUR_RADIUS || x >= width - BLUR_RADIUS) {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              int x_2 = Math.clamp(x + r, 0, width - 1);
              Byte4Array.getBuffer(iBuffer, y * width + x_2, inputB);
              inputB.convertFloat4(inputF);
              Float4.mul(inputF, gaussKernel[kernelIndex++], tmpMul);
              Float4.add(blurredPixel, tmpMul, blurredPixel);
            }
          }
          else {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              Byte4Array.getBuffer(iBuffer, y * width + (x + r), inputB);
              inputB.convertFloat4(inputF);
              Float4.mul(inputF, gaussKernel[kernelIndex++], tmpMul);
              Float4.add(blurredPixel, tmpMul, blurredPixel);
            }
          }

          blurredPixel.convertByte4(outB);
          Byte4Array.setBuffer(bBuffer, y * width + x, outB);
        }
      }

      // Vertical (buffer -> output)
      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          blurredPixel.set(0.0f);
          int kernelIndex = 0;

          if (y <= BLUR_RADIUS || y >= height - BLUR_RADIUS) {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              int y_2 = Math.clamp(y + r, 0, height - 1);
              Byte4Array.getBuffer(bBuffer, y_2 * width + x, inputB);
              inputB.convertFloat4(inputF);
              Float4.mul(inputF, gaussKernel[kernelIndex++], tmpMul);
              Float4.add(blurredPixel, tmpMul, blurredPixel);
            }
          }
          else {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              Byte4Array.getBuffer(bBuffer, (y + r) * width + x, inputB);
              inputB.convertFloat4(inputF);
              Float4.mul(inputF, gaussKernel[kernelIndex++], tmpMul);
              Float4.add(blurredPixel, tmpMul, blurredPixel);
            }
          }

          blurredPixel.convertByte4(outB);
          Byte4Array.setBuffer(oBuffer, y * width + x, outB);
        }
      }
    }
  }

  private static void runBlurBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    float[] gaussKernel = new float[BLUR_RADIUS * 2 + 1];
    blurBuildMask(gaussKernel, BLUR_RADIUS);

    Bitmap buffer = Bitmap.createBitmap(width, height, input.getConfig());

    // Horizontal (input -> buffer)
    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        float blurredPixelA = 0.0f;
        float blurredPixelR = 0.0f;
        float blurredPixelG = 0.0f;
        float blurredPixelB = 0.0f;
        int kernelIndex = 0;

        if (x <= BLUR_RADIUS || x >= width - BLUR_RADIUS) {
          for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
            int x2 = x + r;
            if (x2 < 0) x2 = 0;
            else if (x2 >= width) x2 = width - 1;

            int pixel = input.getPixel(x2, y);
            float kernelValue = gaussKernel[kernelIndex++];
            blurredPixelA += Color.alpha(pixel) * kernelValue;
            blurredPixelR += Color.red(pixel) * kernelValue;
            blurredPixelG += Color.green(pixel) * kernelValue;
            blurredPixelB += Color.blue(pixel) * kernelValue;
          }
        }
        else {
          for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
            int pixel = input.getPixel(x + r, y);
            float kernelValue = gaussKernel[kernelIndex++];
            blurredPixelA += Color.alpha(pixel) * kernelValue;
            blurredPixelR += Color.red(pixel) * kernelValue;
            blurredPixelG += Color.green(pixel) * kernelValue;
            blurredPixelB += Color.blue(pixel) * kernelValue;
          }
        }

        buffer.setPixel(x, y, Color
            .argb((int) blurredPixelA, (int) blurredPixelR, (int) blurredPixelG,
                  (int) blurredPixelB));
      }
    }

    // Vertical (buffer -> output)
    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        float blurredPixelA = 0.0f;
        float blurredPixelR = 0.0f;
        float blurredPixelG = 0.0f;
        float blurredPixelB = 0.0f;
        int kernelIndex = 0;

        if (y <= BLUR_RADIUS || y >= height - BLUR_RADIUS) {
          for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
            int y2 = y + r;
            if (y2 < 0)
              y2 = 0;
            else if (y2 >= height)
              y2 = height - 1;

            int pixel = buffer.getPixel(x, y2);
            float kernelValue = gaussKernel[kernelIndex++];
            blurredPixelA += Color.alpha(pixel) * kernelValue;
            blurredPixelR += Color.red(pixel) * kernelValue;
            blurredPixelG += Color.green(pixel) * kernelValue;
            blurredPixelB += Color.blue(pixel) * kernelValue;
          }
        }
        else {
          for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
            int pixel = buffer.getPixel(x, y + r);
            float kernelValue = gaussKernel[kernelIndex++];

            blurredPixelA += Color.alpha(pixel) * kernelValue;
            blurredPixelR += Color.red(pixel) * kernelValue;
            blurredPixelG += Color.green(pixel) * kernelValue;
            blurredPixelB += Color.blue(pixel) * kernelValue;
          }
        }

        output.setPixel(x, y, Color
            .argb((int) blurredPixelA, (int) blurredPixelR, (int) blurredPixelG,
                  (int) blurredPixelB));
      }
    }

    buffer.recycle();
  }

  // Convolve3x3

  private static final float[] CONVOLVE3_MASK = {0, -1, 0, -1, 5, -1, 0, -1, 0};

  private static void calculateConvolveElement(int x, int y, int width, float scale,
                                               ByteBuffer iBuffer, Byte4 p, Byte3 p3, Float3 p3F,
                                               Float3 mul) {
    Byte4Array.getBuffer(iBuffer, y * width + x, p);
    p.asByte3(p3);
    p3.convertFloat3(p3F);
    Float3.mul(p3F, scale, mul);
  }

  private static void runConvolve3Ref(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = Math.max(x - 1, 0);
        int x1 = Math.min(x + 1, width - 1);
        int y0 = Math.max(y - 1, 0);
        int y1 = Math.min(y + 1, height - 1);

        Byte4 pixel = input.get(x, y);
        Float3 sum = new Float3(0.0f);

        Float3.add(sum, Float3.mul(input.get(x0, y0).asByte3().convertFloat3(), CONVOLVE3_MASK[0]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x, y0).asByte3().convertFloat3(), CONVOLVE3_MASK[1]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y0).asByte3().convertFloat3(), CONVOLVE3_MASK[2]),
                   sum);

        Float3.add(sum, Float3.mul(input.get(x0, y).asByte3().convertFloat3(), CONVOLVE3_MASK[3]),
                   sum);
        Float3.add(sum, Float3.mul(pixel.asByte3().convertFloat3(), CONVOLVE3_MASK[4]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y).asByte3().convertFloat3(), CONVOLVE3_MASK[5]),
                   sum);

        Float3.add(sum, Float3.mul(input.get(x0, y1).asByte3().convertFloat3(), CONVOLVE3_MASK[6]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x, y1).asByte3().convertFloat3(), CONVOLVE3_MASK[7]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y1).asByte3().convertFloat3(), CONVOLVE3_MASK[8]),
                   sum);

        output.set(x, y, new Byte4(Float3.clamp(sum, 0.0f, 255.0f).convertByte3(), pixel.w));
      }
    }
  }

  private static void runConvolve3Perf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pIn = new Byte4();
    Byte4 oIn = new Byte4();
    Byte3 oIn3 = new Byte3();
    Float3 oIn3F = new Float3();

    Float3 tmpMul = new Float3();
    Float3 sum = new Float3();

    Byte3 pOut = new Byte3();
    Byte4 pOut4 = new Byte4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = Math.max(x - 1, 0);
        int x1 = Math.min(x + 1, width - 1);
        int y0 = Math.max(y - 1, 0);
        int y1 = Math.min(y + 1, height - 1);

        Byte4Array.getBuffer(iBuffer, y * width + x, pIn);
        sum.set(0.0f);

        calculateConvolveElement(x0, y0, width, CONVOLVE3_MASK[0], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y0, width, CONVOLVE3_MASK[1], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y0, width, CONVOLVE3_MASK[2], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y, width, CONVOLVE3_MASK[3], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y, width, CONVOLVE3_MASK[4], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y, width, CONVOLVE3_MASK[5], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y1, width, CONVOLVE3_MASK[6], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y1, width, CONVOLVE3_MASK[7], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y1, width, CONVOLVE3_MASK[8], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        Float3.clamp(sum, 0.0f, 255.0f, sum);
        sum.convertByte3(pOut);
        pOut4.set(pOut, pIn.w);
        Byte4Array.setBuffer(oBuffer, y * width + x, pOut4);
      }
    }
  }

  private static void runConvolve3Bmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = java.lang.Math.max(x - 1, 0);
        int x1 = java.lang.Math.min(x + 1, width - 1);
        int y0 = java.lang.Math.max(y - 1, 0);
        int y1 = java.lang.Math.min(y + 1, height - 1);

        int pixel = input.getPixel(x, y);
        int pixelA = Color.alpha(pixel);
        int pixelR = Color.red(pixel);
        int pixelG = Color.green(pixel);
        int pixelB = Color.blue(pixel);

        float sumR = 0.0f;
        float sumG = 0.0f;
        float sumB = 0.0f;

        int otherPixel = input.getPixel(x0, y0);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[0];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[0];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[0];
        otherPixel = input.getPixel(x, y0);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[1];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[1];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[1];
        otherPixel = input.getPixel(x1, y0);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[2];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[2];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[2];

        otherPixel = input.getPixel(x0, y);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[3];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[3];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[3];
        sumR += pixelR * CONVOLVE3_MASK[4];
        sumG += pixelG * CONVOLVE3_MASK[4];
        sumB += pixelB * CONVOLVE3_MASK[4];
        otherPixel = input.getPixel(x1, y);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[5];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[5];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[5];

        otherPixel = input.getPixel(x0, y1);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[6];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[6];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[6];
        otherPixel = input.getPixel(x, y1);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[7];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[7];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[7];
        otherPixel = input.getPixel(x1, y1);
        sumR += Color.red(otherPixel) * CONVOLVE3_MASK[8];
        sumG += Color.green(otherPixel) * CONVOLVE3_MASK[8];
        sumB += Color.blue(otherPixel) * CONVOLVE3_MASK[8];

        if (sumR < 0.0f) sumR = 0.0f;
        else if (sumR > 255.0f) sumR = 255.0f;
        if (sumG < 0.0f) sumG = 0.0f;
        else if (sumG > 255.0f) sumG = 255.0f;
        if (sumB < 0.0f) sumB = 0.0f;
        else if (sumB > 255.0f) sumB = 255.0f;

        output.setPixel(x, y, Color.argb(pixelA, (int) sumR, (int) sumG, (int) sumB));
      }
    }
  }

  // Convolve 5x5

  private static final float[] CONVOLVE5_MASK =
      {0, 0, -1, 0, 0, 0, -1, -2, -1, 0, -1, -2, 16, -2, -1, 0, -1, -2, -1, 0, 0, 0, -1, 0, 0};

  private static void runConvolve5Ref(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = Math.max(x - 2, 0);
        int x1 = Math.max(x - 1, 0);
        int x2 = Math.min(x + 1, width - 1);
        int x3 = Math.min(x + 2, width - 1);

        int y0 = Math.max(y - 2, 0);
        int y1 = Math.max(y - 1, 0);
        int y2 = Math.min(y + 1, height - 1);
        int y3 = Math.min(y + 2, height - 1);

        Byte4 pixel = input.get(x, y);
        Float3 sum = new Float3(0.0f);

        Float3.add(sum, Float3.mul(input.get(x0, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[0]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[1]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[2]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x2, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[3]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x3, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[4]),
                   sum);

        Float3.add(sum, Float3.mul(input.get(x0, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[5]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[6]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[7]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x2, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[8]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x3, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[9]),
                   sum);

        Float3.add(sum, Float3.mul(input.get(x0, y).asByte3().convertFloat3(), CONVOLVE5_MASK[10]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y).asByte3().convertFloat3(), CONVOLVE5_MASK[11]),
                   sum);
        Float3.add(sum, Float3.mul(pixel.asByte3().convertFloat3(), CONVOLVE5_MASK[12]), sum);
        Float3.add(sum, Float3.mul(input.get(x2, y).asByte3().convertFloat3(), CONVOLVE5_MASK[13]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x3, y).asByte3().convertFloat3(), CONVOLVE5_MASK[14]),
                   sum);

        Float3.add(sum, Float3.mul(input.get(x0, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[15]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[16]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[17]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x2, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[18]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x3, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[19]),
                   sum);

        Float3.add(sum, Float3.mul(input.get(x0, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[20]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x1, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[21]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[22]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x2, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[23]),
                   sum);
        Float3.add(sum, Float3.mul(input.get(x3, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[24]),
                   sum);

        output.set(x, y, new Byte4(Float3.clamp(sum, 0.0f, 255.0f).convertByte3(), pixel.w));
      }
    }
  }

  private static void runConvolve5Perf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pIn = new Byte4();
    Byte4 oIn = new Byte4();
    Byte3 oIn3 = new Byte3();
    Float3 oIn3F = new Float3();

    Float3 tmpMul = new Float3();
    Float3 sum = new Float3();

    Byte3 pOut = new Byte3();
    Byte4 pOut4 = new Byte4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = Math.max(x - 2, 0);
        int x1 = Math.max(x - 1, 0);
        int x2 = Math.min(x + 1, width - 1);
        int x3 = Math.min(x + 2, width - 1);

        int y0 = Math.max(y - 2, 0);
        int y1 = Math.max(y - 1, 0);
        int y2 = Math.min(y + 1, height - 1);
        int y3 = Math.min(y + 2, height - 1);

        Byte4Array.getBuffer(iBuffer, y * width + x, pIn);
        sum.set(0.0f);

        calculateConvolveElement(x0, y0, width, CONVOLVE5_MASK[0], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y0, width, CONVOLVE5_MASK[1], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y0, width, CONVOLVE5_MASK[2], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y0, width, CONVOLVE5_MASK[3], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y0, width, CONVOLVE5_MASK[4], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y1, width, CONVOLVE5_MASK[5], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y1, width, CONVOLVE5_MASK[6], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y1, width, CONVOLVE5_MASK[7], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y1, width, CONVOLVE5_MASK[8], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y1, width, CONVOLVE5_MASK[9], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y, width, CONVOLVE5_MASK[10], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y, width, CONVOLVE5_MASK[11], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y, width, CONVOLVE5_MASK[12], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y, width, CONVOLVE5_MASK[13], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y, width, CONVOLVE5_MASK[14], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y2, width, CONVOLVE5_MASK[15], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y2, width, CONVOLVE5_MASK[16], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y2, width, CONVOLVE5_MASK[17], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y2, width, CONVOLVE5_MASK[18], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y2, width, CONVOLVE5_MASK[19], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y3, width, CONVOLVE5_MASK[20], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y3, width, CONVOLVE5_MASK[21], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y3, width, CONVOLVE5_MASK[22], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y3, width, CONVOLVE5_MASK[23], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y3, width, CONVOLVE5_MASK[24], iBuffer, oIn, oIn3, oIn3F,
                                 tmpMul);
        Float3.add(sum, tmpMul, sum);

        Float3.clamp(sum, 0.0f, 255.0f, sum);
        sum.convertByte3(pOut);
        pOut4.set(pOut, pIn.w);
        Byte4Array.setBuffer(oBuffer, y * width + x, pOut4);
      }
    }
  }

  private static void runConvolve5Bmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = java.lang.Math.max(x - 2, 0);
        int x1 = java.lang.Math.max(x - 1, 0);
        int x2 = java.lang.Math.min(x + 1, width - 1);
        int x3 = java.lang.Math.min(x + 2, width - 1);

        int y0 = java.lang.Math.max(y - 2, 0);
        int y1 = java.lang.Math.max(y - 1, 0);
        int y2 = java.lang.Math.min(y + 1, height - 1);
        int y3 = java.lang.Math.min(y + 2, height - 1);

        int pixel = input.getPixel(x, y);
        int pixelA = Color.alpha(pixel);
        int pixelR = Color.red(pixel);
        int pixelG = Color.green(pixel);
        int pixelB = Color.blue(pixel);

        float sumR = 0.0f;
        float sumG = 0.0f;
        float sumB = 0.0f;

        int otherPixel = input.getPixel(x0, y0);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[0];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[0];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[0];
        otherPixel = input.getPixel(x1, y0);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[1];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[1];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[1];
        otherPixel = input.getPixel(x, y0);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[2];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[2];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[2];
        otherPixel = input.getPixel(x2, y0);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[3];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[3];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[3];
        otherPixel = input.getPixel(x3, y0);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[4];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[4];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[4];

        otherPixel = input.getPixel(x0, y1);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[5];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[5];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[5];
        otherPixel = input.getPixel(x1, y1);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[6];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[6];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[6];
        otherPixel = input.getPixel(x, y1);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[7];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[7];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[7];
        otherPixel = input.getPixel(x2, y1);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[8];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[8];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[8];
        otherPixel = input.getPixel(x3, y1);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[9];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[9];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[9];

        otherPixel = input.getPixel(x0, y);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[10];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[10];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[10];
        otherPixel = input.getPixel(x1, y);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[11];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[11];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[11];
        sumR += pixelR * CONVOLVE5_MASK[12];
        sumG += pixelG * CONVOLVE5_MASK[12];
        sumB += pixelB * CONVOLVE5_MASK[12];
        otherPixel = input.getPixel(x2, y);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[13];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[13];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[13];
        otherPixel = input.getPixel(x3, y);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[14];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[14];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[14];

        otherPixel = input.getPixel(x0, y2);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[15];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[15];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[15];
        otherPixel = input.getPixel(x1, y2);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[16];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[16];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[16];
        otherPixel = input.getPixel(x, y2);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[17];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[17];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[17];
        otherPixel = input.getPixel(x2, y2);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[18];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[18];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[18];
        otherPixel = input.getPixel(x3, y2);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[19];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[19];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[19];

        otherPixel = input.getPixel(x0, y3);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[20];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[20];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[20];
        otherPixel = input.getPixel(x1, y3);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[21];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[21];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[21];
        otherPixel = input.getPixel(x, y3);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[22];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[22];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[22];
        otherPixel = input.getPixel(x2, y3);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[23];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[23];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[23];
        otherPixel = input.getPixel(x3, y3);
        sumR += Color.red(otherPixel) * CONVOLVE5_MASK[24];
        sumG += Color.green(otherPixel) * CONVOLVE5_MASK[24];
        sumB += Color.blue(otherPixel) * CONVOLVE5_MASK[24];

        if (sumR < 0.0f)
          sumR = 0.0f;
        else if (sumR > 255.0f)
          sumR = 255.0f;
        if (sumG < 0.0f)
          sumG = 0.0f;
        else if (sumG > 255.0f)
          sumG = 255.0f;
        if (sumB < 0.0f)
          sumB = 0.0f;
        else if (sumB > 255.0f)
          sumB = 255.0f;

        output.setPixel(x, y, Color.argb(pixelA, (int) sumR, (int) sumG, (int) sumB));
      }
    }
  }

  // Bilateral

  private static final int BILATERAL_RADIUS = 10;
  private static final float BILATERAL_PRESERVATION = 0.5f;

  private static void runBilateralRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4 centerPixel = input.get(x, y);
        Float3 center = Float3.div(centerPixel.asByte3().convertFloat3(), 0xff);

        Float3 sum = new Float3(0.0f);
        float totalWeight = 0.0f;

        for (int rx = -BILATERAL_RADIUS; rx <= BILATERAL_RADIUS; ++rx) {
          for (int ry = -BILATERAL_RADIUS; ry <= BILATERAL_RADIUS; ++ry) {
            int x2 = Math.clamp(x + rx, 0, width - 1);
            int y2 = Math.clamp(y + ry, 0, height - 1);

            Float3 pixel = Float3.div(input.get(x2, y2).asByte3().convertFloat3(), 0xff);
            Float3 diff = Float3.sub(center, pixel);
            Float3.mul(diff, diff, diff);

            float diffMap = Math.exp(-(diff.x + diff.y + diff.z) * BILATERAL_PRESERVATION * 100.0f);
            float gaussianWeight =
                Math.exp(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

            float weight = diffMap * gaussianWeight;
            Float3.add(sum, Float3.mul(pixel, weight), sum);
            totalWeight += weight;
          }
        }

        output.set(x, y, new Byte4(Float3.mul(Float3.div(sum, totalWeight), 0xff).convertByte3(),
                                   centerPixel.w));
      }
    }
  }

  private static void runBilateralPerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 centerPixel = new Byte4();
    Byte3 centerPixel3 = new Byte3();
    Float3 centerPixel3F = new Float3();
    Float3 center = new Float3();

    Float3 sum = new Float3();

    Byte4 pixel = new Byte4();
    Byte3 pixel3 = new Byte3();
    Float3 pixel3F = new Float3();

    Float3 diff = new Float3();
    Float3 tmp = new Float3();
    Byte3 out = new Byte3();
    Byte4 out4 = new Byte4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4Array.getBuffer(iBuffer, y * width + x, centerPixel);
        centerPixel.asByte3(centerPixel3);
        centerPixel3.convertFloat3(centerPixel3F);
        Float3.div(centerPixel3F, 0xff, center);

        sum.set(0.0f);
        float totalWeight = 0.0f;

        for (int rx = -BILATERAL_RADIUS; rx <= BILATERAL_RADIUS; ++rx) {
          for (int ry = -BILATERAL_RADIUS; ry <= BILATERAL_RADIUS; ++ry) {
            int x2 = Math.clamp(x + rx, 0, width - 1);
            int y2 = Math.clamp(y + ry, 0, height - 1);

            Byte4Array.getBuffer(iBuffer, y2 * width + x2, pixel);
            pixel.asByte3(pixel3);
            pixel3.convertFloat3(pixel3F);
            Float3.div(pixel3F, 0xff, pixel3F);

            Float3.sub(center, pixel3F, diff);
            Float3.mul(diff, diff, diff);

            float diffMap = Math.exp(-(diff.x + diff.y + diff.z) * BILATERAL_PRESERVATION * 100.0f);
            float gaussianWeight =
                Math.exp(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

            float weight = diffMap * gaussianWeight;
            Float3.mul(pixel3F, weight, pixel3F);
            Float3.add(sum, pixel3F, sum);
            totalWeight += weight;
          }
        }

        Float3.div(sum, totalWeight, tmp);
        Float3.mul(tmp, 0xff, tmp);
        tmp.convertByte3(out);
        out4.set(out, centerPixel.w);

        Byte4Array.setBuffer(oBuffer, y * width + x, out4);
      }
    }
  }

  private static void runBilateralBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int centerPixel = input.getPixel(x, y);
        float centerR = (float) Color.red(centerPixel) / 0xff;
        float centerG = (float) Color.green(centerPixel) / 0xff;
        float centerB = (float) Color.blue(centerPixel) / 0xff;

        float sumR = 0.0f, sumG = 0.0f, sumB = 0.0f;
        float totalWeight = 0.0f;

        for (int rx = -BILATERAL_RADIUS; rx <= BILATERAL_RADIUS; ++rx) {
          for (int ry = -BILATERAL_RADIUS; ry <= BILATERAL_RADIUS; ++ry) {
            int x2 = x + rx;
            int y2 = y + ry;

            if (x2 < 0) x2 = 0;
            else if (x2 >= width) x2 = width - 1;
            if (y2 < 0) y2 = 0;
            else if (y2 >= height) y2 = height - 1;

            int otherPixel = input.getPixel(x2, y2);
            float pixelR = (float) Color.red(otherPixel) / 0xff;
            float pixelG = (float) Color.green(otherPixel) / 0xff;
            float pixelB = (float) Color.blue(otherPixel) / 0xff;

            float diffR = centerR - pixelR;
            float diffG = centerG - pixelG;
            float diffB = centerB - pixelB;

            diffR *= diffR;
            diffG *= diffG;
            diffB *= diffB;

            float diffMap = (float) java.lang.Math
                .exp(-(diffR + diffG + diffB) * BILATERAL_PRESERVATION * 100.0f);
            float gaussianWeight = (float) java.lang.Math
                .exp(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

            float weight = diffMap * gaussianWeight;
            sumR += pixelR * weight;
            sumG += pixelG * weight;
            sumB += pixelB * weight;
            totalWeight += weight;
          }
        }

        int outR = (int) ((sumR / totalWeight) * 0xff);
        int outG = (int) ((sumG / totalWeight) * 0xff);
        int outB = (int) ((sumB / totalWeight) * 0xff);
        output.setPixel(x, y, Color.argb(Color.alpha(centerPixel), outR, outG, outB));
      }
    }
  }

  // Median

  private static final int MEDIAN_RADIUS = 7;

  private static void runMedianRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    Int3[] val = new Int3[256];
    for (int i = 0; i < val.length; ++i) { val[i] = new Int3(); }

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        for (int i = 0; i < val.length; i++) { val[i].set(0); }

        for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx++) {
          for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry++) {
            int x2 = Math.clamp(x + rx, 0, width - 1);
            int y2 = Math.clamp(y + ry, 0, height - 1);

            byte pixel = input.get(x2, y2).x;
            Int3.add(val[pixel & 0xff], new Int3(1), val[pixel & 0xff]);
          }
        }

        int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
        Int3 rgb = new Int3(0);
        Byte4 out_pixel = new Byte4((byte) (0xff));

        for (byte i = 0;
             Int3.any(Byte3.isEqual(out_pixel.asByte3(), new Byte3((byte) (0xff)))) != 0;
             i = (byte) ((i & 0xff) + 1)) {
          if ((out_pixel.x & 0xff) == 0xff) {
            rgb.x += val[i & 0xff].x;

            if (rgb.x >= median)
              out_pixel.x = i;
          }

          if ((out_pixel.y & 0xff) == 0xff) {
            rgb.y += val[i & 0xff].y;

            if (rgb.y >= median)
              out_pixel.y = i;
          }

          if ((out_pixel.z & 0xff) == 0xff) {
            rgb.z += val[i & 0xff].z;

            if (rgb.z >= median)
              out_pixel.z = i;
          }
        }

        output.set(x, y, out_pixel);
      }
    }
  }

  private static void runMedianPerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pixelIn = new Byte4();
    Int3 rgb = new Int3();
    Byte4 pixelOut = new Byte4();

    Int3 ones = new Int3(1);
    Byte3 maxBytes = new Byte3((byte) (0xff));

    Int3 tmpComp = new Int3();
    Byte3 pixelOut3 = new Byte3();

    Int3[] val = new Int3[256];
    for (int i = 0; i < val.length; ++i) { val[i] = new Int3(); }

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        for (int i = 0; i < val.length; i++) { val[i].set(0); }

        for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx++) {
          for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry++) {
            int x2 = Math.clamp(x + rx, 0, width - 1);
            int y2 = Math.clamp(y + ry, 0, height - 1);

            Byte4Array.getBuffer(iBuffer, y2 * width + x2, pixelIn);
            Int3.add(val[pixelIn.x & 0xff], ones, val[pixelIn.x & 0xff]);
          }
        }

        int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
        rgb.set(0);
        pixelOut.set((byte) 0xff);

        pixelOut.asByte3(pixelOut3);
        Byte3.isEqual(pixelOut3, maxBytes, tmpComp);
        for (byte i = 0; Int3.any(tmpComp) != 0; i = (byte) ((i & 0xff) + 1)) {
          if ((pixelOut.x & 0xff) == 0xff) {
            rgb.x += val[i & 0xff].x;

            if (rgb.x >= median)
              pixelOut.x = i;
          }

          if ((pixelOut.y & 0xff) == 0xff) {
            rgb.y += val[i & 0xff].y;

            if (rgb.y >= median)
              pixelOut.y = i;
          }

          if ((pixelOut.z & 0xff) == 0xff) {
            rgb.z += val[i & 0xff].z;

            if (rgb.z >= median)
              pixelOut.z = i;
          }

          pixelOut.asByte3(pixelOut3);
          Byte3.isEqual(pixelOut3, maxBytes, tmpComp);
        }

        Byte4Array.setBuffer(oBuffer, y * width + x, pixelOut);
      }
    }
  }

  private static void runMedianBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    int[] val = new int[256 * 3];

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Arrays.fill(val, 0);

        for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx++) {
          for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry++) {
            int x2 = x + rx;
            int y2 = y + ry;

            if (x2 < 0)
              x2 = 0;
            else if (x2 >= width)
              x2 = width - 1;
            if (y2 < 0)
              y2 = 0;
            else if (y2 >= height)
              y2 = height - 1;

            int colorIndex = Color.red(input.getPixel(x2, y2));
            ++val[colorIndex * 3];
            ++val[colorIndex * 3 + 1];
            ++val[colorIndex * 3 + 2];
          }
        }

        int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
        int r = 0, g = 0, b = 0;
        int outPixelR = 0xff;
        int outPixelG = 0xff;
        int outPixelB = 0xff;

        for (byte i = 0; outPixelR == 0xff || outPixelG == 0xff || outPixelB == 0xff;
             i = (byte) ((i & 0xff) + 1)) {
          int intI = i & 0xff;
          if (outPixelR == 0xff) {
            r += val[intI * 3];

            if (r >= median)
              outPixelR = intI;
          }

          if (outPixelG == 0xff) {
            g += val[intI * 3 + 1];

            if (g >= median)
              outPixelG = intI;
          }

          if (outPixelB == 0xff) {
            b += val[intI * 3 + 2];

            if (b >= median)
              outPixelB = intI;
          }
        }

        output.setPixel(x, y, Color.argb(0xff, outPixelR, outPixelG, outPixelB));
      }
    }
  }

  // Contrast

  private static final float CONTRAST_ENHANCEMENT = 0.5f;

  private static void runContrastRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4 pixelIn = input.get(x, y);
        float brightM = Math.exp2(CONTRAST_ENHANCEMENT);

        Float3 pixelOut = Float3.add(Float3.mul(pixelIn.asByte3().convertFloat3(), brightM),
                                     new Float3(127.0f * (1 - brightM)));
        Float3.clamp(pixelOut, 0.0f, 255.0f, pixelOut);
        output.set(x, y, new Byte4(pixelOut.convertByte3(), pixelIn.w));
      }
    }
  }

  private static void runContrastPerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pixelIn = new Byte4();
    Byte3 pixelIn3 = new Byte3();
    Float3 pixelIn3F = new Float3();

    Float3 tmp = new Float3();
    Float3 tmp2 = new Float3();
    Byte3 pixelOut = new Byte3();
    Byte4 pixelOut4 = new Byte4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4Array.getBuffer(iBuffer, y * width + x, pixelIn);
        pixelIn.asByte3(pixelIn3);
        pixelIn3.convertFloat3(pixelIn3F);
        float brightM = Math.exp2(CONTRAST_ENHANCEMENT);

        Float3.mul(pixelIn3F, brightM, tmp);
        tmp2.set(127.0f * (1 - brightM));
        Float3.add(tmp, tmp2, tmp);
        Float3.clamp(tmp, 0.0f, 255.0f, tmp);

        tmp.convertByte3(pixelOut);
        pixelOut4.set(pixelOut, pixelIn.w);

        Byte4Array.setBuffer(oBuffer, y * width + x, pixelOut4);
      }
    }
  }

  private static void runContrastBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int pixelIn = input.getPixel(x, y);
        float brightM = (float) java.lang.Math.pow(2, CONTRAST_ENHANCEMENT);
        float offset = 127.0f * (1 - brightM);

        float pixelOutR = offset + Color.red(pixelIn) * brightM;
        float pixelOutG = offset + Color.green(pixelIn) * brightM;
        float pixelOutB = offset + Color.blue(pixelIn) * brightM;

        if (pixelOutR < 0.0f)
          pixelOutR = 0.0f;
        else if (pixelOutR > 255.0f)
          pixelOutR = 255.0f;
        if (pixelOutG < 0.0f)
          pixelOutG = 0.0f;
        else if (pixelOutG > 255.0f)
          pixelOutG = 255.0f;
        if (pixelOutB < 0.0f)
          pixelOutB = 0.0f;
        else if (pixelOutB > 255.0f)
          pixelOutB = 255.0f;

        output.setPixel(x, y, Color
            .argb(Color.alpha(pixelIn), (int) pixelOutR, (int) pixelOutG, (int) pixelOutB));
      }
    }
  }

  // Fisheye

  private static final Float2 FISHEYE_CENTER = new Float2(0.5f, 0.5f);
  private static final float FISHEYE_SCALE = 0.75f;

  private static Byte4 bilinearInterpRef(RGBAImage img, Int2 dims, Float2 coord) {
    Float2 posCoord = Float2.max(coord, 0.0f);

    int x0 = Math.min((int) Math.trunc(posCoord.x), dims.x - 1);
    int x1 = Math.min(x0 + 1, dims.x - 1);
    int y0 = Math.min((int) Math.trunc(posCoord.y), dims.y - 1);
    int y1 = Math.min(y0 + 1, dims.y - 1);

    Float4 p00 = img.get(x0, y0).convertFloat4();
    Float4 p01 = img.get(x0, y1).convertFloat4();
    Float4 p10 = img.get(x1, y0).convertFloat4();
    Float4 p11 = img.get(x1, y1).convertFloat4();

    float slopeX0 = (float) x1 - posCoord.x;
    float slopeX1 = posCoord.x - (float) x0;

    Float4 pXY0 = Float4.add(Float4.mul(p00, slopeX0), Float4.mul(p10, slopeX1));
    Float4 pXY1 = Float4.add(Float4.mul(p01, slopeX0), Float4.mul(p11, slopeX1));

    Float4 out = Float4
        .add(Float4.mul(pXY0, ((float) y1 - coord.y)), Float4.mul(pXY1, (coord.y - (float) y0)));
    Float4.clamp(out, 0.0f, 255.0f, out);
    return out.convertByte4();
  }

  private static Byte4 bilinearInterpPerf(ByteBuffer iBuffer, int width, int height, float x,
                                          float y, Byte4 tmpB4, Float4 p00, Float4 p01, Float4 p10,
                                          Float4 p11, Float4 pXY0, Float4 pXY1, Float4 tmpF41,
                                          Float4 tmpF42) {
    float posCoordX = Math.max(x, 0.0f);
    float posCoordY = Math.max(y, 0.0f);

    int x0 = Math.min((int) Math.trunc(posCoordX), width - 1);
    int x1 = Math.min(x0 + 1, width - 1);
    int y0 = Math.min((int) Math.trunc(posCoordY), height - 1);
    int y1 = Math.min(y0 + 1, height - 1);

    Byte4Array.getBuffer(iBuffer, y0 * width + x0, tmpB4);
    tmpB4.convertFloat4(p00);
    Byte4Array.getBuffer(iBuffer, y1 * width + x0, tmpB4);
    tmpB4.convertFloat4(p01);
    Byte4Array.getBuffer(iBuffer, y0 * width + x1, tmpB4);
    tmpB4.convertFloat4(p10);
    Byte4Array.getBuffer(iBuffer, y1 * width + x1, tmpB4);
    tmpB4.convertFloat4(p11);

    float slopeX0 = (float) x1 - posCoordX;
    float slopeX1 = posCoordX - (float) x0;

    Float4.mul(p00, slopeX0, tmpF41);
    Float4.mul(p10, slopeX1, tmpF42);
    Float4.add(tmpF41, tmpF42, pXY0);
    Float4.mul(p01, slopeX0, tmpF41);
    Float4.mul(p11, slopeX1, tmpF42);
    Float4.add(tmpF41, tmpF42, pXY1);

    Float4.mul(pXY0, ((float) y1 - y), pXY0);
    Float4.mul(pXY1, (y - (float) y0), pXY1);
    Float4.add(pXY0, pXY1, tmpF41);

    Float4.clamp(tmpF41, 0.0f, 255.0f, tmpF41);
    tmpF41.convertByte4(tmpB4);
    return tmpB4;
  }

  private static int bilinearInterpBmp(Bitmap img, int width, int height, float x, float y) {
    float posCoordX = java.lang.Math.max(x, 0.0f);
    float posCoordY = java.lang.Math.max(y, 0.0f);

    int x0 = Math.min((int) Math.trunc(posCoordX), width - 1);
    int x1 = Math.min(x0 + 1, width - 1);
    int y0 = Math.min((int) Math.trunc(posCoordY), height - 1);
    int y1 = Math.min(y0 + 1, height - 1);

    int p00 = img.getPixel(x0, y0);
    int p01 = img.getPixel(x0, y1);
    int p10 = img.getPixel(x1, y0);
    int p11 = img.getPixel(x1, y1);

    float p00A = Color.alpha(p00);
    float p00R = Color.red(p00);
    float p00G = Color.green(p00);
    float p00B = Color.blue(p00);
    float p01A = Color.alpha(p01);
    float p01R = Color.red(p01);
    float p01G = Color.green(p01);
    float p01B = Color.blue(p01);
    float p10A = Color.alpha(p10);
    float p10R = Color.red(p10);
    float p10G = Color.green(p10);
    float p10B = Color.blue(p10);
    float p11A = Color.alpha(p11);
    float p11R = Color.red(p11);
    float p11G = Color.green(p11);
    float p11B = Color.blue(p11);

    float slopeX0 = (float) x1 - posCoordX;
    float slopeX1 = posCoordX - (float) x0;
    float slopeY0 = (float) y1 - y;
    float slopeY1 = y - (float) y0;

    float pXY0A = (p00A * slopeX0 + p10A * slopeX1) * slopeY0;
    float pXY0R = (p00R * slopeX0 + p10R * slopeX1) * slopeY0;
    float pXY0G = (p00G * slopeX0 + p10G * slopeX1) * slopeY0;
    float pXY0B = (p00B * slopeX0 + p10B * slopeX1) * slopeY0;
    float pXY1A = (p01A * slopeX0 + p11A * slopeX1) * slopeY1;
    float pXY1R = (p01R * slopeX0 + p11R * slopeX1) * slopeY1;
    float pXY1G = (p01G * slopeX0 + p11G * slopeX1) * slopeY1;
    float pXY1B = (p01B * slopeX0 + p11B * slopeX1) * slopeY1;

    float outA = pXY0A + pXY1A;
    float outR = pXY0R + pXY1R;
    float outG = pXY0G + pXY1G;
    float outB = pXY0B + pXY1B;

    if (outA < 0.0f)
      outA = 0.0f;
    else if (outA > 255.0f)
      outA = 255.0f;
    if (outR < 0.0f)
      outR = 0.0f;
    else if (outR > 255.0f)
      outR = 255.0f;
    if (outG < 0.0f)
      outG = 0.0f;
    else if (outG > 255.0f)
      outG = 255.0f;
    if (outB < 0.0f)
      outB = 0.0f;
    else if (outB > 255.0f)
      outB = 255.0f;

    return Color.argb((int) outA, (int) outR, (int) outG, (int) outB);
  }

  private static void runFisheyeRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Float2 invDimensions = new Float2(1.0f / width, 1.0f / height);
        float alpha = FISHEYE_SCALE * 2.0f + 0.75f;
        Float2 axisScale = new Float2(1.0f);

        if (width > height)
          axisScale.y = height / (float) width;
        else
          axisScale.x = width / (float) height;

        float bound2 = 0.25f * (axisScale.x * axisScale.x + axisScale.y * axisScale.y);
        float bound = Math.sqrt(bound2);
        float radius = 1.15f * bound;
        float radius2 = radius * radius;
        float factor =
            bound / (Math.M_PI_2_F - Math.atan(alpha / bound * Math.sqrt(radius2 - bound2)));

        Float2 coord = Float2.mad(new Float2(x, y), invDimensions, Float2.neg(FISHEYE_CENTER));
        Float2 scaledCoord = Float2.mul(axisScale, coord);

        float dist2 = scaledCoord.x * scaledCoord.x + scaledCoord.y * scaledCoord.y;
        float invDist = Math.rsqrt(dist2);

        float radian = Math.M_PI_2_F - Math.atan((alpha * Math.sqrt(radius2 - dist2)) * invDist);
        float scalar = radian * factor * invDist;
        Float2 newCoord = Float2
            .mul(new Float2(width, height), Float2.mad(coord, new Float2(scalar), FISHEYE_CENTER));

        output.set(x, y, bilinearInterpRef(input, new Int2(width, height), newCoord));
      }
    }
  }

  private static void runFisheyePerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Float2 invDimensions = new Float2();
    Float2 axisScale = new Float2();
    Float2 id = new Float2();
    Float2 negCenter = new Float2();
    Float2 coord = new Float2();
    Float2 scaledCoord = new Float2();
    Int2 dims = new Int2();
    Float2 dimsF = new Float2();
    Float2 scalar2 = new Float2();
    Float2 newCoord = new Float2();

    Byte4 pixelOut = new Byte4();
    Float4 tmp0 = new Float4();
    Float4 tmp1 = new Float4();
    Float4 tmp2 = new Float4();
    Float4 tmp3 = new Float4();
    Float4 tmp4 = new Float4();
    Float4 tmp5 = new Float4();
    Float4 tmp6 = new Float4();
    Float4 tmp7 = new Float4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        invDimensions.set(1.0f / width, 1.0f / height);
        float alpha = FISHEYE_SCALE * 2.0f + 0.75f;
        axisScale.set(1.0f);

        if (width > height)
          axisScale.y = height / (float) width;
        else
          axisScale.x = width / (float) height;

        float bound2 = 0.25f * (axisScale.x * axisScale.x + axisScale.y * axisScale.y);
        float bound = Math.sqrt(bound2);
        float radius = 1.15f * bound;
        float radius2 = radius * radius;
        float factor =
            bound / (Math.M_PI_2_F - Math.atan(alpha / bound * Math.sqrt(radius2 - bound2)));

        id.x = x;
        id.y = y;
        Float2.neg(FISHEYE_CENTER, negCenter);
        Float2.mad(id, invDimensions, negCenter, coord);
        Float2.mul(axisScale, coord, scaledCoord);

        float dist2 = scaledCoord.x * scaledCoord.x + scaledCoord.y * scaledCoord.y;
        float invDist = Math.rsqrt(dist2);

        float radian = Math.M_PI_2_F - Math.atan((alpha * Math.sqrt(radius2 - dist2)) * invDist);
        float scalar = radian * factor * invDist;
        dimsF.set(width, height);
        scalar2.set(scalar);
        Float2.mad(coord, scalar2, FISHEYE_CENTER, newCoord);
        Float2.mul(dimsF, newCoord, newCoord);

        dims.set(width, height);
        pixelOut =
            bilinearInterpPerf(iBuffer, width, height, newCoord.x, newCoord.y, pixelOut, tmp0, tmp1,
                               tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
        Byte4Array.setBuffer(oBuffer, y * width + x, pixelOut);
      }
    }
  }

  private static void runFisheyeBmp(Bitmap input, Bitmap output) {
    final float PI_2 = (float) (java.lang.Math.PI / 2.0);
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        float invDimensionsX = 1.0f / width;
        float invDimensionsY = 1.0f / height;
        float axisScaleX = 1.0f;
        float axisScaleY = 1.0f;
        float alpha = FISHEYE_SCALE * 2.0f + 0.75f;

        if (width > height)
          axisScaleY = height / (float) width;
        else
          axisScaleX = width / (float) height;

        float bound2 = 0.25f * (axisScaleX * axisScaleX + axisScaleY * axisScaleY);
        float bound = (float) java.lang.Math.sqrt(bound2);
        float radius = 1.15f * bound;
        float radius2 = radius * radius;
        float factor = bound / (PI_2 - (float) java.lang.Math
            .atan(alpha / bound * java.lang.Math.sqrt(radius2 - bound2)));

        float coordX = x * invDimensionsX - FISHEYE_CENTER.x;
        float coordY = y * invDimensionsY - FISHEYE_CENTER.y;
        float scaledCoordX = axisScaleX * coordX;
        float scaledCoordY = axisScaleY * coordY;

        float dist2 = scaledCoordX * scaledCoordX + scaledCoordY * scaledCoordY;
        float invDist = 1.0f / (float) java.lang.Math.sqrt(dist2);

        float radian = PI_2 - (float) java.lang.Math
            .atan((alpha * java.lang.Math.sqrt(radius2 - dist2)) * invDist);
        float scalar = radian * factor * invDist;
        float newCoordX = width * (coordX * scalar + FISHEYE_CENTER.x);
        float newCoordY = height * (coordY * scalar + FISHEYE_CENTER.y);

        output.setPixel(x, y, bilinearInterpBmp(input, width, height, newCoordX, newCoordY));
      }
    }
  }

  // Levels

  private static final Float2 LEVELS_BLACK = new Float2(0.0f, 40.0f);
  private static final Float2 LEVELS_WHITE = new Float2(200.0f, 255.0f);
  private static final float LEVELS_SATURATION = 1.5f;

  private static void levelsBuildSatMatrixRef(Float3[] satMatrix, float saturation) {
    Float3 weights = Float3.mul(GS_WEIGHTS, 1.0f - saturation);

    satMatrix[0] = Float3.add(weights, new Float3(saturation, 0.0f, 0.0f));
    satMatrix[1] = Float3.add(weights, new Float3(0.0f, saturation, 0.0f));
    satMatrix[2] = Float3.add(weights, new Float3(0.0f, 0.0f, saturation));
  }

  private static void levelsBuildSatMatrixPerf(Float3[] satMatrix, float saturation, Float3 weights,
                                               Float3 tmp) {
    Float3.mul(GS_WEIGHTS, 1.0f - saturation, weights);

    tmp.set(saturation, 0.0f, 0.0f);
    Float3.add(weights, tmp, satMatrix[0]);
    tmp.set(0.0f, saturation, 0.0f);
    Float3.add(weights, tmp, satMatrix[1]);
    tmp.set(0.0f, 0.0f, saturation);
    Float3.add(weights, tmp, satMatrix[2]);
  }

  private static void levelsBuildSatMatrixBmp(float[] satMatrix, float saturation) {
    float weightsX = GS_WEIGHTS.x * (1.0f - saturation);
    float weightsY = GS_WEIGHTS.y * (1.0f - saturation);
    float weightsZ = GS_WEIGHTS.z * (1.0f - saturation);

    satMatrix[0] = weightsX + saturation;
    satMatrix[1] = weightsY;
    satMatrix[2] = weightsZ;
    satMatrix[3] = weightsX;
    satMatrix[4] = weightsY + saturation;
    satMatrix[5] = weightsZ;
    satMatrix[6] = weightsX;
    satMatrix[7] = weightsY;
    satMatrix[8] = weightsZ + saturation;
  }

  private static Float3 matrix3x3VectorMultiplyRef(Float3[] m, Float3 v) {
    return new Float3(Float3.dot(m[0], v), Float3.dot(m[1], v), Float3.dot(m[2], v));
  }

  private static void matrix3x3VectorMultiplyPerf(Float3[] m, Float3 v, Float3 result) {
    result.set(Float3.dot(m[0], v), Float3.dot(m[1], v), Float3.dot(m[2], v));
  }

  private static void matrix3x3VectorMultiplyBmp(float[] m, float vx, float vy, float vz,
                                                 float[] result) {
    result[0] = m[0] * vx + m[1] * vy + m[2] * vz;
    result[1] = m[3] * vx + m[4] * vy + m[5] * vz;
    result[2] = m[6] * vx + m[7] * vy + m[8] * vz;
  }

  private static void runLevelsRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    Float3[] satMatrix = new Float3[3];
    levelsBuildSatMatrixRef(satMatrix, LEVELS_SATURATION);

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Float4 pixel = input.get(x, y).convertFloat4();
        Float3 mul = matrix3x3VectorMultiplyRef(satMatrix, pixel.asFloat3());
        pixel.set(mul, pixel.w);
        pixel = Float4.clamp(pixel, 0.0f, 255.0f);
        pixel = Float4
            .div(Float4.sub(pixel, new Float4(LEVELS_BLACK.x)), LEVELS_WHITE.x - LEVELS_BLACK.x);
        pixel = Float4
            .add(Float4.mul(pixel, (LEVELS_WHITE.y - LEVELS_BLACK.y)), new Float4(LEVELS_BLACK.y));

        Float4.clamp(pixel, 0.0f, 255.0f, pixel);
        output.set(x, y, pixel.convertByte4());
      }
    }
  }

  private static void runLevelsPerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Float3[] satMatrix = new Float3[3];
    for (int i = 0; i < satMatrix.length; ++i) { satMatrix[i] = new Float3(); }

    Float3 tmp0 = new Float3();
    Float3 tmp1 = new Float3();
    levelsBuildSatMatrixPerf(satMatrix, LEVELS_SATURATION, tmp0, tmp1);

    Byte4 pixelIn = new Byte4();
    Float4 pixel = new Float4();
    Float3 mul = new Float3();
    Float4 blackX4 = new Float4();
    Float4 blackY4 = new Float4();
    Float4 tmp2 = new Float4();
    Float4 tmp3 = new Float4();
    Byte4 pixelOut = new Byte4();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4Array.getBuffer(iBuffer, y * width + x, pixelIn);
        pixelIn.convertFloat4(pixel);
        matrix3x3VectorMultiplyPerf(satMatrix, pixel.asFloat3(), mul);
        pixel.set(mul, pixel.w);
        Float4.clamp(pixel, 0.0f, 255.0f, pixel);

        blackX4.set(LEVELS_BLACK.x);
        blackY4.set(LEVELS_BLACK.y);
        Float4.sub(pixel, blackX4, tmp2);
        Float4.div(tmp2, LEVELS_WHITE.x - LEVELS_BLACK.x, pixel);
        Float4.mul(pixel, (LEVELS_WHITE.y - LEVELS_BLACK.y), tmp3);
        Float4.add(tmp3, blackY4, pixel);

        Float4.clamp(pixel, 0.0f, 255.0f, pixel);
        pixel.convertByte4(pixelOut);
        Byte4Array.setBuffer(oBuffer, y * width + x, pixelOut);
      }
    }
  }

  private static void runLevelsBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    float[] satMatrix = new float[3 * 3];
    float[] mul = new float[3];
    levelsBuildSatMatrixBmp(satMatrix, LEVELS_SATURATION);

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int pixel = input.getPixel(x, y);
        float pixelA = Color.alpha(pixel);
        float pixelR = Color.red(pixel);
        float pixelG = Color.green(pixel);
        float pixelB = Color.blue(pixel);

        matrix3x3VectorMultiplyBmp(satMatrix, pixelR, pixelG, pixelB, mul);
        pixelR = mul[0] < 0.0f ? 0.0f : java.lang.Math.min(mul[0], 255.0f);
        pixelG = mul[1] < 0.0f ? 0.0f : java.lang.Math.min(mul[1], 255.0f);
        pixelB = mul[2] < 0.0f ? 0.0f : java.lang.Math.min(mul[2], 255.0f);

        float diffMin = LEVELS_WHITE.x - LEVELS_BLACK.x;
        float diffMax = LEVELS_WHITE.y - LEVELS_BLACK.y;

        pixelA = (pixelA - LEVELS_BLACK.x) / diffMin;
        pixelR = (pixelR - LEVELS_BLACK.x) / diffMin;
        pixelG = (pixelG - LEVELS_BLACK.x) / diffMin;
        pixelB = (pixelB - LEVELS_BLACK.x) / diffMin;

        pixelA = pixelA * diffMax + LEVELS_BLACK.y;
        pixelR = pixelR * diffMax + LEVELS_BLACK.y;
        pixelG = pixelG * diffMax + LEVELS_BLACK.y;
        pixelB = pixelB * diffMax + LEVELS_BLACK.y;

        if (pixelA < 0.0f)
          pixelA = 0.0f;
        else if (pixelA > 255.0f)
          pixelA = 255.0f;
        if (pixelR < 0.0f)
          pixelR = 0.0f;
        else if (pixelR > 255.0f)
          pixelR = 255.0f;
        if (pixelG < 0.0f)
          pixelG = 0.0f;
        else if (pixelG > 255.0f)
          pixelG = 255.0f;
        if (pixelB < 0.0f)
          pixelB = 0.0f;
        else if (pixelB > 255.0f)
          pixelB = 255.0f;

        output.setPixel(x, y, Color.argb((int) pixelA, (int) pixelR, (int) pixelG, (int) pixelB));
      }
    }
  }

  // Posterize

  private static final Float2[] POSTERIZE_INTENSITIES =
      new Float2[]{new Float2(0.0f, 0.2f), new Float2(0.2f, 0.4f), new Float2(0.4f, 0.6f),
                   new Float2(0.6f, 0.8f), new Float2(0.8f, 1.0f)};

  private static final Byte4[] POSTERIZE_COLORS =
      new Byte4[]{RGBAColor.RED(), RGBAColor.GREEN(), RGBAColor.BLUE(), RGBAColor.YELLOW(),
                  RGBAColor.CYAN()};

  private static final float[] POSTERIZE_INTENSITIES_BMP =
      new float[]{0.0f, 0.2f, 0.4f, 0.6f, 0.8f, 1.0f};

  private static final int[] POSTERIZE_COLORS_BMP =
      new int[]{Color.RED, Color.GREEN, Color.BLUE, Color.YELLOW, Color.CYAN};

  private static void runPosterizeRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int stage = 0; stage < POSTERIZE_INTENSITIES.length; ++stage) {
      Float2 intensity = POSTERIZE_INTENSITIES[stage];
      Byte4 color = POSTERIZE_COLORS[stage];

      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          Byte4 pixel = input.get(x, y);
          float pixel_intensity =
              Float3.dot(Float3.div(pixel.asByte3().convertFloat3(), 0xff), GS_WEIGHTS);

          if ((pixel_intensity <= intensity.y) && (pixel_intensity >= intensity.x))
            output.set(x, y, color);
        }
      }
    }
  }

  private static void runPosterizePerf(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pixelIn = new Byte4();
    Byte3 pixelIn3 = new Byte3();
    Float3 pixelInF3 = new Float3();

    Float3 div = new Float3();

    for (int stage = 0; stage < POSTERIZE_INTENSITIES.length; ++stage) {
      Float2 intensity = POSTERIZE_INTENSITIES[stage];
      Byte4 color = POSTERIZE_COLORS[stage];

      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          Byte4Array.getBuffer(iBuffer, y * width + x, pixelIn);
          pixelIn.asByte3(pixelIn3);
          pixelIn3.convertFloat3(pixelInF3);

          Float3.div(pixelInF3, 0xff, div);
          float pixel_intensity = Float3.dot(div, GS_WEIGHTS);

          if ((pixel_intensity <= intensity.y) && (pixel_intensity >= intensity.x))
            Byte4Array.setBuffer(oBuffer, y * width + x, color);
        }
      }
    }
  }

  private static void runPosterizeBmp(Bitmap input, Bitmap output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int stage = 0; stage < POSTERIZE_INTENSITIES_BMP.length - 1; ++stage) {
      float intensityMin = POSTERIZE_INTENSITIES_BMP[stage];
      float intensityMax = POSTERIZE_INTENSITIES_BMP[stage + 1];
      int color = POSTERIZE_COLORS_BMP[stage];

      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          int pixel = input.getPixel(x, y);
          float pixelIntensityR = ((float) Color.red(pixel) / 0xff) * GS_WEIGHTS.x;
          float pixelIntensityG = ((float) Color.green(pixel) / 0xff) * GS_WEIGHTS.y;
          float pixelIntensityB = ((float) Color.blue(pixel) / 0xff) * GS_WEIGHTS.z;
          float pixelIntensity = pixelIntensityR + pixelIntensityG + pixelIntensityB;

          if ((pixelIntensity <= intensityMax) && (pixelIntensity >= intensityMin))
            output.setPixel(x, y, color);
        }
      }
    }
  }
}
