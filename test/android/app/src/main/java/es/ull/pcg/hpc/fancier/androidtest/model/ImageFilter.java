package es.ull.pcg.hpc.fancier.androidtest.model;


import android.graphics.Bitmap;


public abstract class ImageFilter implements AutoCloseable {
  protected Bitmap mInput;

  public void setInput(Bitmap input) {
    this.mInput = input;
  }

  @Override
  public void close() {
    release();
  }

  public abstract void setup();

  public abstract void process(Bitmap output);

  public abstract void release();
}
