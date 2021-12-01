package es.ull.pcg.hpc.fancier.linuxtest.test;

import es.ull.pcg.hpc.fancier.linuxtest.Main;
import es.ull.pcg.hpc.fancier.linuxtest.model.ImageFilter;

import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.FileOutputStream;
import java.io.IOException;

public class FilterTest implements RuntimeTest {
    private static final boolean EXPORT_IMAGE = false;

    private ImageFilter mFilter;
    private BufferedImage mInput, mOutput;

    public FilterTest() {
        mFilter = null;
        mInput = mOutput = null;
    }

    public void setFilter(ImageFilter filter) {
        mFilter = filter;
    }

    public ImageFilter getFilter() {
        return mFilter;
    }

    public void setInput(BufferedImage input) {
        mInput = input;
    }

    public BufferedImage getInput() {
        return mInput;
    }

    public void setOutput(BufferedImage output) {
        mOutput = output;
    }

    public BufferedImage getOutput() {
        return mOutput;
    }

    @Override
    public void setup() {
        if (mFilter == null || mInput == null || mOutput == null)
            throw new RuntimeException("Invalid filter, input or output");

        mFilter.setInput(mInput);
        mFilter.setup();
    }

    @Override
    public boolean run() {
        if (mFilter == null)
            return false;

        mFilter.process(mOutput);

        if (EXPORT_IMAGE) {
            try (FileOutputStream fos = new FileOutputStream(Main.RESOURCES_DIR + "outputs/out.png")) {
                ImageIO.write(mOutput, "png", fos);
            }
            catch (IOException ignored) {}
        }

        return true;
    }

    @Override
    public void teardown() {
        if (mFilter != null)
            mFilter.release();
    }
}
