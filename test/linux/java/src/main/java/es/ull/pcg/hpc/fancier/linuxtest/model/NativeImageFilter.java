package es.ull.pcg.hpc.fancier.linuxtest.model;


import es.ull.pcg.hpc.fancier.image.RGBAImage;

import java.awt.image.BufferedImage;
import java.awt.image.DataBufferInt;

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

    public static native void compileKernels(String dir);
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
    public void process(BufferedImage output) {
        if (output.getWidth() != mOutput.getWidth() || output.getHeight() != mOutput.getHeight())
            throw new RuntimeException("Input and output dimensions do not match.");

        if (output.getType() != BufferedImage.TYPE_INT_ARGB)
            System.out.println("Output BufferedImage has an unsupported format.");

        switch (mVersion) {
            case CPU:
                processCpu(mInput, mOutput);
                break;
            case GPU:
                processGpu(mInput, mOutput);
                // Force to wait for the execution to finish, only needed if updateBitmap is not called
                mOutput.syncToNative();
                break;
            case REF:
                processBff(mBffIn, output);
                break;
        }

        if (mVersion != Version.REF)
            mOutput.updateImage(output);
    }

    @Override
    public void release() {
        super.release();

        if (nativeInstancePtr != 0L)
            releaseNative();
    }

    private void processBff(BufferedImage input, BufferedImage output) {
        int[] inputArr = ((DataBufferInt)input.getRaster().getDataBuffer()).getData();
        int[] outputArr = ((DataBufferInt)output.getRaster().getDataBuffer()).getData();

        processArray(inputArr, outputArr, input.getWidth(), input.getHeight());
    }

    private native void setupNative(int kernel);

    private native void processGpu(RGBAImage input, RGBAImage output);

    private native void processCpu(RGBAImage input, RGBAImage output);

    private native void processArray(int[] input, int[] output, int width, int height);

    private native void releaseNative();
}
