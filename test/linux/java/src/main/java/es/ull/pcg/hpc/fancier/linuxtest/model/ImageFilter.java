package es.ull.pcg.hpc.fancier.linuxtest.model;

import es.ull.pcg.hpc.fancier.image.RGBAImage;

import java.awt.image.BufferedImage;

public abstract class ImageFilter implements AutoCloseable {
    protected BufferedImage mBffIn;
    protected RGBAImage mInput, mOutput;
    protected ImageFilters mKernel;

    public void setInput(BufferedImage input) {

        mBffIn = input;

        if (mInput != null) {
            if (input.getWidth() == mInput.getWidth() && input.getHeight() == mInput.getHeight()) {
                mInput.setPixels(input);
            }
            else {
                mInput.release();
                mInput = null;
            }
        }

        if (mInput == null) {
            mInput = new RGBAImage(input);
        }

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

    public abstract void process(BufferedImage output);
}
