package es.ull.pcg.hpc.fancier.androidtest.test;


import android.graphics.Bitmap;

import es.ull.pcg.hpc.fancier.androidtest.model.ImageFilter;


public class FilterTest implements RuntimeTest {
  private ImageFilter mFilter;
  private Bitmap mInput, mOutput;

  public FilterTest() {
    mFilter = null;
    mInput = mOutput = null;
  }

  public void setFilter(ImageFilter filter) {
    mFilter = filter;

    if (filter != null)
      mFilter.setup();
  }

  public void setInput(Bitmap input) {
    mInput = input;
  }

  public void setOutput(Bitmap output) {
    mOutput = output;
  }

  @Override
  public void setup() {
    if (mFilter == null || mInput == null || mOutput == null)
      throw new RuntimeException("Invalid filter, input or output");

    mFilter.setInput(mInput);
  }

  @Override
  public boolean run() {
    if (mFilter == null)
      return false;

    mFilter.process(mOutput);
    return true;
  }

  @Override
  public void teardown() {
    if (mFilter != null)
      mFilter.release();
  }
}
