package es.ull.pcg.hpc.fancier.androidtest.test;


import es.ull.pcg.hpc.fancier.array.DoubleArray;
import es.ull.pcg.hpc.fancier.array.ShortArray;


public class ArrayTest implements RuntimeTest {
  final int n = 10;
  final double[] x = new double[]{ 1.0, 2.5, 4.0 };

  @Override
  public void setup() {}

  @Override
  public boolean run() {
    ShortArray s0 = new ShortArray(n);

    if (s0.length() != n)
      return false;

    for (int i = 0; i < n; ++i)
      s0.set(i, (short)(i * 2));

    s0.syncToNative();

    for (int i = 0; i < n; ++i) {
      if (s0.get(i) != (short)(i * 2))
        return false;
    }

    s0.syncToOCL();

    short[] s0_ = s0.getContents();
    for (int i = 0; i < n; ++i) {
      if (s0.get(i) != s0_[i])
        return false;
    }

    s0_[0] = (short)(s0_[0] + 10);
    if (s0_[0] == s0.get(0))
      return false;

    s0.setContents(s0_);

    for (int i = 0; i < n; ++i) {
      if (s0.get(i) != s0_[i])
        return false;
    }

    DoubleArray d0 = new DoubleArray(x);

    if (d0.length() != x.length)
      return false;

    for (int i = 0; i < d0.length(); ++i) {
      if (d0.get(i) != x[i])
        return false;
    }

    double[] d0_ = d0.getContents();
    nativeProcess(d0);

    for (int i = 0; i < d0.length(); ++i) {
      if (d0.get(i) != d0_[i] * 2)
        return false;
    }

    DoubleArray d1 = new DoubleArray(d0);

    if (d1.length() != d0.length())
      return false;

    for (int i = 0; i < d0.length(); ++i) {
      if (d0.get(i) != d1.get(i))
        return false;
    }

    d1.set(0, d1.get(0) + 10);
    if (d0.get(0) == d1.get(0))
      return false;

    s0.release();
    d0.release();
    d1.release();

    return nativeRun();
  }

  @Override
  public void teardown() {}

  private native boolean nativeRun();
  private native void nativeProcess(DoubleArray array);
}
