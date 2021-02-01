package es.ull.pcg.hpc.fancier.androidtest.benchmark;


import android.util.Log;

import es.ull.pcg.hpc.rancid.OutputPrinter;


public class AndroidLogOutputPrinter extends OutputPrinter {
  private final StringBuilder mBuffer = new StringBuilder();
  private final String mTag;

  public AndroidLogOutputPrinter(String tag) {
    this.mTag = tag;
  }

  @Override
  public void print(String s) {
    mBuffer.append(s);
  }

  @Override
  public void flush() {
    Log.i(mTag, mBuffer.toString());
    mBuffer.setLength(0);
  }
}
