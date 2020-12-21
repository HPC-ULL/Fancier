package es.ull.pcg.hpc.fancier.androidtest.model;


import android.graphics.Bitmap;
import android.util.Log;

import java.nio.ByteBuffer;

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
  private final ImageFilters mKernel;

  public JavaImageFilter(ImageFilters kernel) {
    mKernel = kernel;
  }

  @Override
  public void setup() {

  }

  @Override
  public void process(Bitmap output) {
    if (output.getWidth() != mOutput.getWidth() || output.getHeight() != mOutput.getHeight())
      throw new RuntimeException("Input and output dimensions do not match.");

    if (output.getConfig() != Bitmap.Config.ARGB_8888)
      Log.e("NativeImageFilter", "Output Bitmap has an unsupported format.");

    mInput.syncToNative();
    mOutput.syncToNative();

    switch (mKernel) {
    case GRAYSCALE:
      runGrayscale(mInput, mOutput);
      break;
    case BLUR:
      runBlur(mInput, mOutput);
      break;
    case CONVOLVE3:
      runConvolve3(mInput, mOutput);
      break;
    case CONVOLVE5:
      runConvolve5(mInput, mOutput);
      break;
    case BILATERAL:
      runBilateral(mInput, mOutput);
      break;
    case MEDIAN:
      runMedian(mInput, mOutput);
      break;
    case CONTRAST:
      runContrast(mInput, mOutput);
      break;
    case FISHEYE:
      runFisheye(mInput, mOutput);
      break;
    case LEVELS:
      runLevels(mInput, mOutput);
      break;
    case POSTERIZE:
      runPosterize(mInput, mOutput);
      break;
    }

    mOutput.updateBitmap(output);
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

  private static void runGrayscale(RGBAImage input, RGBAImage output) {
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
        input.getBuffer(iBuffer, x, y, pixelIn);
        pixelIn.asByte3(pixelInB3);
        pixelInB3.convertFloat3(pixelInF3);
        byte grayValue = (byte) Float3.dot(pixelInF3, GS_WEIGHTS);
        pixelOut.set(grayValue, grayValue, grayValue, pixelIn.w);
        output.setBuffer(oBuffer, x, y, pixelOut);
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
              int x_2 = Math.clamp(x + r, 0, width - 1);
              Float4.add(blurredPixel,
                         Float4.mul(input.get(x_2, y).convertFloat4(), gaussKernel[kernelIndex++]),
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
          Float4 blurred_pixel = new Float4(0.0f);
          int kernel_index = 0;

          if (y <= BLUR_RADIUS || y >= height - BLUR_RADIUS) {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              int y_2 = Math.clamp(y + r, 0, height - 1);
              Float4.add(blurred_pixel, Float4
                             .mul(buffer.get(x, y_2).convertFloat4(), gaussKernel[kernel_index++]),
                         blurred_pixel);
            }
          }
          else {
            for (int r = -BLUR_RADIUS; r <= BLUR_RADIUS; ++r) {
              Float4.add(blurred_pixel, Float4
                             .mul(buffer.get(x, y + r).convertFloat4(),
                                  gaussKernel[kernel_index++]),
                         blurred_pixel);
            }
          }

          output.set(x, y, blurred_pixel.convertByte4());
        }
      }
    }
  }

  private static void runBlur(RGBAImage input, RGBAImage output) {
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

  // Convolve3x3

  private static final float[] CONVOLVE3_MASK = {
      0, -1, 0,
      -1, 5, -1,
      0, -1, 0
  };

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
        int x0 = Math.max((int) x - 1, 0);
        int x1 = Math.min(x + 1, width - 1);
        int y0 = Math.max((int) y - 1, 0);
        int y1 = Math.min(y + 1, height - 1);

        Byte4 pixel = input.get(x, y);
        Float3 sum = new Float3(0.0f);

        Float3.add(sum, Float3.mul(input.get(x0, y0).asByte3().convertFloat3(), CONVOLVE3_MASK[0]), sum);
        Float3.add(sum, Float3.mul(input.get(x,  y0).asByte3().convertFloat3(), CONVOLVE3_MASK[1]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y0).asByte3().convertFloat3(), CONVOLVE3_MASK[2]), sum);

        Float3.add(sum, Float3.mul(input.get(x0, y).asByte3().convertFloat3(), CONVOLVE3_MASK[3]), sum);
        Float3.add(sum, Float3.mul(pixel.asByte3().convertFloat3(),            CONVOLVE3_MASK[4]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y).asByte3().convertFloat3(), CONVOLVE3_MASK[5]), sum);

        Float3.add(sum, Float3.mul(input.get(x0, y1).asByte3().convertFloat3(), CONVOLVE3_MASK[6]), sum);
        Float3.add(sum, Float3.mul(input.get(x,  y1).asByte3().convertFloat3(), CONVOLVE3_MASK[7]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y1).asByte3().convertFloat3(), CONVOLVE3_MASK[8]), sum);

        output.set(x, y, new Byte4(Float3.clamp(sum, 0.0f, 255.0f).convertByte3(), pixel.w));
      }
    }
  }

  private static void runConvolve3(RGBAImage input, RGBAImage output) {
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
        int x0 = Math.max((int) x - 1, 0);
        int x1 = Math.min(x + 1, width - 1);
        int y0 = Math.max((int) y - 1, 0);
        int y1 = Math.min(y + 1, height - 1);

        Byte4Array.getBuffer(iBuffer, y * width + x, pIn);
        sum.set(0.0f);

        calculateConvolveElement(x0, y0, width, CONVOLVE3_MASK[0], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y0, width, CONVOLVE3_MASK[1], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y0, width, CONVOLVE3_MASK[2], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y, width, CONVOLVE3_MASK[3], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y, width, CONVOLVE3_MASK[4], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y, width, CONVOLVE3_MASK[5], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y1, width, CONVOLVE3_MASK[6], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x, y1, width, CONVOLVE3_MASK[7], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y1, width, CONVOLVE3_MASK[8], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        Float3.clamp(sum, 0.0f, 255.0f, sum);
        sum.convertByte3(pOut);
        pOut4.set(pOut, pIn.w);
        Byte4Array.setBuffer(oBuffer, y * width + x, pOut4);
      }
    }
  }

  // Convolve 5x5

  private static final float[] CONVOLVE5_MASK = {
      0, 0, -1, 0, 0,
      0, -1, -2, -1, 0,
      -1, -2, 16, -2, -1,
      0, -1, -2, -1, 0,
      0, 0, -1, 0, 0
  };

  private static void runConvolve5Ref(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        int x0 = Math.max((int) x - 2, 0);
        int x1 = Math.max((int) x - 1, 0);
        int x2 = Math.min(x + 1, width - 1);
        int x3 = Math.min(x + 2, width - 1);

        int y0 = Math.max((int) y - 2, 0);
        int y1 = Math.max((int) y - 1, 0);
        int y2 = Math.min(y + 1, height - 1);
        int y3 = Math.min(y + 2, height - 1);

        Byte4 pixel = input.get(x, y);
        Float3 sum = new Float3(0.0f);

        Float3.add(sum, Float3.mul(input.get(x0, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[0]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[1]), sum);
        Float3.add(sum, Float3.mul(input.get(x,  y0).asByte3().convertFloat3(), CONVOLVE5_MASK[2]), sum);
        Float3.add(sum, Float3.mul(input.get(x2, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[3]), sum);
        Float3.add(sum, Float3.mul(input.get(x3, y0).asByte3().convertFloat3(), CONVOLVE5_MASK[4]), sum);

        Float3.add(sum, Float3.mul(input.get(x0, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[5]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[6]), sum);
        Float3.add(sum, Float3.mul(input.get(x,  y1).asByte3().convertFloat3(), CONVOLVE5_MASK[7]), sum);
        Float3.add(sum, Float3.mul(input.get(x2, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[8]), sum);
        Float3.add(sum, Float3.mul(input.get(x3, y1).asByte3().convertFloat3(), CONVOLVE5_MASK[9]), sum);

        Float3.add(sum, Float3.mul(input.get(x0, y).asByte3().convertFloat3(), CONVOLVE5_MASK[10]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y).asByte3().convertFloat3(), CONVOLVE5_MASK[11]), sum);
        Float3.add(sum, Float3.mul(pixel.asByte3().convertFloat3(),            CONVOLVE5_MASK[12]), sum);
        Float3.add(sum, Float3.mul(input.get(x2, y).asByte3().convertFloat3(), CONVOLVE5_MASK[13]), sum);
        Float3.add(sum, Float3.mul(input.get(x3, y).asByte3().convertFloat3(), CONVOLVE5_MASK[14]), sum);

        Float3.add(sum, Float3.mul(input.get(x0, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[15]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[16]), sum);
        Float3.add(sum, Float3.mul(input.get(x,  y2).asByte3().convertFloat3(), CONVOLVE5_MASK[17]), sum);
        Float3.add(sum, Float3.mul(input.get(x2, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[18]), sum);
        Float3.add(sum, Float3.mul(input.get(x3, y2).asByte3().convertFloat3(), CONVOLVE5_MASK[19]), sum);

        Float3.add(sum, Float3.mul(input.get(x0, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[20]), sum);
        Float3.add(sum, Float3.mul(input.get(x1, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[21]), sum);
        Float3.add(sum, Float3.mul(input.get(x,  y3).asByte3().convertFloat3(), CONVOLVE5_MASK[22]), sum);
        Float3.add(sum, Float3.mul(input.get(x2, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[23]), sum);
        Float3.add(sum, Float3.mul(input.get(x3, y3).asByte3().convertFloat3(), CONVOLVE5_MASK[24]), sum);

        output.set(x, y, new Byte4(Float3.clamp(sum, 0.0f, 255.0f).convertByte3(), pixel.w));
      }
    }
  }

  private static void runConvolve5(RGBAImage input, RGBAImage output) {
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
        int x0 = Math.max((int) x - 2, 0);
        int x1 = Math.max((int) x - 1, 0);
        int x2 = Math.min(x + 1, width - 1);
        int x3 = Math.min(x + 2, width - 1);

        int y0 = Math.max((int) y - 2, 0);
        int y1 = Math.max((int) y - 1, 0);
        int y2 = Math.min(y + 1, height - 1);
        int y3 = Math.min(y + 2, height - 1);

        Byte4Array.getBuffer(iBuffer, y * width + x, pIn);
        sum.set(0.0f);

        calculateConvolveElement(x0, y0, width, CONVOLVE5_MASK[0], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y0, width, CONVOLVE5_MASK[1], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x,  y0, width, CONVOLVE5_MASK[2], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y0, width, CONVOLVE5_MASK[3], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y0, width, CONVOLVE5_MASK[4], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y1, width, CONVOLVE5_MASK[5], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y1, width, CONVOLVE5_MASK[6], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x,  y1, width, CONVOLVE5_MASK[7], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y1, width, CONVOLVE5_MASK[8], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y1, width, CONVOLVE5_MASK[9], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y, width, CONVOLVE5_MASK[10], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y, width, CONVOLVE5_MASK[11], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x,  y, width, CONVOLVE5_MASK[12], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y, width, CONVOLVE5_MASK[13], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y, width, CONVOLVE5_MASK[14], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y2, width, CONVOLVE5_MASK[15], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y2, width, CONVOLVE5_MASK[16], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x,  y2, width, CONVOLVE5_MASK[17], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y2, width, CONVOLVE5_MASK[18], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y2, width, CONVOLVE5_MASK[19], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        calculateConvolveElement(x0, y3, width, CONVOLVE5_MASK[20], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x1, y3, width, CONVOLVE5_MASK[21], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x,  y3, width, CONVOLVE5_MASK[22], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x2, y3, width, CONVOLVE5_MASK[23], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);
        calculateConvolveElement(x3, y3, width, CONVOLVE5_MASK[24], iBuffer, oIn, oIn3, oIn3F, tmpMul);
        Float3.add(sum, tmpMul, sum);

        Float3.clamp(sum, 0.0f, 255.0f, sum);
        sum.convertByte3(pOut);
        pOut4.set(pOut, pIn.w);
        Byte4Array.setBuffer(oBuffer, y * width + x, pOut4);
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
            int x2 = Math.clamp((int) x + rx, 0, (int) width - 1);
            int y2 = Math.clamp((int) y + ry, 0, (int) height - 1);

            Float3 pixel = Float3.div(input.get(x2, y2).asByte3().convertFloat3(), 0xff);
            Float3 diff = Float3.sub(center, pixel);
            Float3.mul(diff, diff, diff);

            float diffMap =
                Math.exp(-(diff.x + diff.y + diff.z) * BILATERAL_PRESERVATION * 100.0f);
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

  private static void runBilateral(RGBAImage input, RGBAImage output) {
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
            int x2 = Math.clamp((int) x + rx, 0, (int) width - 1);
            int y2 = Math.clamp((int) y + ry, 0, (int) height - 1);

            Byte4Array.getBuffer(iBuffer, y2 * width + x2, pixel);
            pixel.asByte3(pixel3);
            pixel3.convertFloat3(pixel3F);
            Float3.div(pixel3F, 0xff, pixel3F);

            Float3.sub(center, pixel3F, diff);
            Float3.mul(diff, diff, diff);

            float diffMap = Math.exp(-(diff.x + diff.y + diff.z) * BILATERAL_PRESERVATION * 100.0f);
            float gaussianWeight = Math.exp(-0.5f * ((rx * rx) + (ry * ry)) / (float) BILATERAL_RADIUS);

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

  // Median

  private static int MEDIAN_RADIUS = 7;

  private static void runMedianRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    Int3[] val = new Int3[256];
    for (int i = 0; i < val.length; ++i)
      val[i] = new Int3();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        for (int i = 0; i < val.length; i++)
          val[i].set(0);

        for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx ++) {
          for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry ++) {
            int x2 = Math.clamp( x + rx, 0,  width - 1);
            int y2 = Math.clamp( y + ry, 0,  height - 1);

            byte pixel = input.get(x2, y2).x;
            Int3.add(val[pixel & 0xff], new Int3(1), val[pixel & 0xff]);
          }
        }

        int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
        Int3 rgb = new Int3(0);
        Byte4 out_pixel = new Byte4((byte)(0xff));

        for (byte i = 0; Int3.any(Byte3.isEqual(out_pixel.asByte3(), new Byte3((byte)(0xff)))) != 0; i = (byte)((i & 0xff) + 1)) {
          if ((out_pixel.x & 0xff) == 0xff){
            rgb.x += val[i & 0xff].x;

            if (rgb.x >= median)
              out_pixel.x = i;
          }

          if ((out_pixel.y & 0xff) == 0xff){
            rgb.y += val[i & 0xff].y;

            if (rgb.y >= median)
              out_pixel.y = i;
          }

          if ((out_pixel.z & 0xff) == 0xff){
            rgb.z += val[i & 0xff].z;

            if (rgb.z >= median)
              out_pixel.z = i;
          }
        }

        output.set(x, y, out_pixel);
      }
    }
  }

  private static void runMedian(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Byte4 pixelIn = new Byte4();
    Int3 rgb = new Int3();
    Byte4 pixelOut = new Byte4();

    Int3 ones = new Int3(1);
    Byte3 maxBytes = new Byte3((byte)(0xff));

    Int3 tmpComp = new Int3();
    Byte3 pixelOut3 = new Byte3();

    Int3[] val = new Int3[256];
    for (int i = 0; i < val.length; ++i)
      val[i] = new Int3();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        for (int i = 0; i < val.length; i++)
          val[i].set(0);

        for (int rx = -MEDIAN_RADIUS; rx <= MEDIAN_RADIUS; rx ++) {
          for (int ry = -MEDIAN_RADIUS; ry <= MEDIAN_RADIUS; ry ++) {
            int x2 = Math.clamp( x + rx, 0,  width - 1);
            int y2 = Math.clamp( y + ry, 0,  height - 1);

            Byte4Array.getBuffer(iBuffer, y2 * width + x2, pixelIn);
            Int3.add(val[pixelIn.x & 0xff], ones, val[pixelIn.x & 0xff]);
          }
        }

        int median = ((MEDIAN_RADIUS * 2 + 1) * (MEDIAN_RADIUS * 2 + 1)) / 2;
        rgb.set(0);
        pixelOut.set((byte) 0xff);

        pixelOut.asByte3(pixelOut3);
        Byte3.isEqual(pixelOut3, maxBytes, tmpComp);
        for (byte i = 0; Int3.any(tmpComp) != 0; i = (byte)((i & 0xff) + 1)) {
          if ((pixelOut.x & 0xff) == 0xff){
            rgb.x += val[i & 0xff].x;

            if (rgb.x >= median)
              pixelOut.x = i;
          }

          if ((pixelOut.y & 0xff) == 0xff){
            rgb.y += val[i & 0xff].y;

            if (rgb.y >= median)
              pixelOut.y = i;
          }

          if ((pixelOut.z & 0xff) == 0xff){
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

  // Contrast

  private static float CONTRAST_ENHANCEMENT = 0.5f;

  private static void runContrastRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        Byte4 pixelIn = input.get(x, y);
        float brightM = Math.exp2(CONTRAST_ENHANCEMENT);

        Float3 pixelOut = Float3.add(Float3.mul(pixelIn.asByte3().convertFloat3(), brightM), new Float3(127.0f * (1 - brightM)));
        Float3.clamp(pixelOut, 0.0f, 255.0f, pixelOut);
        output.set(x, y, new Byte4(pixelOut.convertByte3(), pixelIn.w));
      }
    }
  }

  private static void runContrast(RGBAImage input, RGBAImage output) {
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

  // Fisheye

  private static Float2 FISHEYE_CENTER = new Float2(0.5f, 0.5f);
  private static float FISHEYE_SCALE = 0.75f;

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

    Float4 out = Float4.add(Float4.mul(pXY0, ((float) y1 - coord.y)), Float4.mul(pXY1, (coord.y - (float) y0)));
    Float4.clamp(out, 0.0f, 255.0f, out);
    return out.convertByte4();
  }

  private static Byte4 bilinearInterp(ByteBuffer iBuffer, int width, int height, float x, float y,
                                      Byte4 tmpB4, Float4 p00, Float4 p01, Float4 p10, Float4 p11,
                                      Float4 pXY0, Float4 pXY1, Float4 tmpF41, Float4 tmpF42) {
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
        float factor = bound / (Math.M_PI_2_F - Math.atan(alpha / bound * Math.sqrt(radius2 - bound2)));

        Float2 coord = Float2.mad(new Float2(x, y), invDimensions, Float2.neg(FISHEYE_CENTER));
        Float2 scaledCoord = Float2.mul(axisScale, coord);

        float dist2 = scaledCoord.x * scaledCoord.x + scaledCoord.y * scaledCoord.y;
        float invDist = Math.rsqrt(dist2);

        float radian = Math.M_PI_2_F - Math.atan((alpha * Math.sqrt(radius2 - dist2)) * invDist);
        float scalar = radian * factor * invDist;
        Float2 newCoord = Float2.mul(new Float2(width, height), Float2.mad(coord, new Float2(scalar), FISHEYE_CENTER));

        output.set(x, y, bilinearInterpRef(input, new Int2(width, height), newCoord));
      }
    }
  }

  private static void runFisheye(RGBAImage input, RGBAImage output) {
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
        float factor = bound / (Math.M_PI_2_F - Math.atan(alpha / bound * Math.sqrt(radius2 - bound2)));

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
        pixelOut = bilinearInterp(iBuffer, width, height, newCoord.x, newCoord.y, pixelOut, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
        Byte4Array.setBuffer(oBuffer, y * width + x, pixelOut);
      }
    }
  }

  // Levels

  private static Float2 LEVELS_BLACK = new Float2(0.0f, 40.0f);
  private static Float2 LEVELS_WHITE = new Float2(200.0f, 255.0f);
  private static float LEVELS_SATURATION = 1.5f;

  private static void levelsBuildSatMatrixRef(Float3[] satMatrix, float saturation) {
    Float3 weights = Float3.mul(GS_WEIGHTS, 1.0f - saturation);

    satMatrix[0] = Float3.add(weights, new Float3(saturation, 0.0f, 0.0f));
    satMatrix[1] = Float3.add(weights, new Float3(0.0f, saturation, 0.0f));
    satMatrix[2] = Float3.add(weights, new Float3(0.0f, 0.0f, saturation));
  }

  private static void levelsBuildSatMatrix(Float3[] satMatrix, float saturation, Float3 weights, Float3 tmp) {
    Float3.mul(GS_WEIGHTS, 1.0f - saturation, weights);

    tmp.set(saturation, 0.0f, 0.0f);
    Float3.add(weights, tmp, satMatrix[0]);
    tmp.set(0.0f, saturation, 0.0f);
    Float3.add(weights, tmp, satMatrix[1]);
    tmp.set(0.0f, 0.0f, saturation);
    Float3.add(weights, tmp, satMatrix[2]);
  }

  private static Float3 matrix3x3VectorMultiplyRef(Float3[] m, Float3 v) {
    return new Float3(Float3.dot(m[0], v), Float3.dot(m[1], v), Float3.dot(m[2], v));
  }

  private static void matrix3x3VectorMultiply(Float3[] m, Float3 v, Float3 result) {
    result.set(Float3.dot(m[0], v), Float3.dot(m[1], v), Float3.dot(m[2], v));
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
        pixel = Float4.div(Float4.sub(pixel, new Float4(LEVELS_BLACK.x)), LEVELS_WHITE.x - LEVELS_BLACK.x);
        pixel = Float4.add(Float4.mul(pixel, (LEVELS_WHITE.y - LEVELS_BLACK.y)), new Float4(LEVELS_BLACK.y));

        Float4.clamp(pixel, 0.0f, 255.0f, pixel);
        Byte4 pixelOut = pixel.convertByte4();
        output.set(x, y, pixelOut);
      }
    }
  }

  private static void runLevels(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();
    ByteBuffer iBuffer = input.getBuffer();
    ByteBuffer oBuffer = output.getBuffer();

    Float3[] satMatrix = new Float3[3];
    for (int i = 0; i < satMatrix.length; ++i)
      satMatrix[i] = new Float3();

    Float3 tmp0 = new Float3();
    Float3 tmp1 = new Float3();
    levelsBuildSatMatrix(satMatrix, LEVELS_SATURATION, tmp0, tmp1);

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
        matrix3x3VectorMultiply(satMatrix, pixel.asFloat3(), mul);
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

  // Posterize

  private static final Float2[] POSTERIZE_INTENSITIES = new Float2[]{
      new Float2(0.0f, 0.2f),
      new Float2(0.2f, 0.4f),
      new Float2(0.4f, 0.6f),
      new Float2(0.6f, 0.8f),
      new Float2(0.8f, 1.0f)
  };
  private static final Byte4[] POSTERIZE_COLORS = new Byte4[]{
      RGBAColor.RED(), RGBAColor.GREEN(), RGBAColor.BLUE(), RGBAColor.YELLOW(), RGBAColor.CYAN()
  };

  private static void runPosterizeRef(RGBAImage input, RGBAImage output) {
    final int width = input.getWidth();
    final int height = input.getHeight();

    for (int stage = 0; stage < POSTERIZE_INTENSITIES.length; ++stage) {
      Float2 intensity = POSTERIZE_INTENSITIES[stage];
      Byte4 color = POSTERIZE_COLORS[stage];

      for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
          Byte4 pixel = input.get(x, y);
          float pixel_intensity = Float3.dot(Float3.div(pixel.asByte3().convertFloat3(), 0xff), GS_WEIGHTS);

          if ((pixel_intensity <= intensity.y) && (pixel_intensity >= intensity.x))
            output.set(x, y, color);
        }
      }
    }
  }

  private static void runPosterize(RGBAImage input, RGBAImage output) {
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
}
