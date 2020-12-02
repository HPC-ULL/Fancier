package es.ull.pcg.hpc.fancier.androidtest.test;


import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Float3;
import es.ull.pcg.hpc.fancier.vector.Int3;
import es.ull.pcg.hpc.fancier.vector.Int4;
import es.ull.pcg.hpc.fancier.vector.array.Byte4Array;
import es.ull.pcg.hpc.fancier.vector.array.Float3Array;


public class VectorArrayTest implements RuntimeTest {
  final int n = 10;
  final byte[] x = new byte[]{10, 10, 10, 10, 20, 20, 20, 20, 30, 30, 30, 30, 40, 50, 60, 70};

  @Override
  public void setup() {}

  @Override
  public boolean run() {
    Float3Array f0 = new Float3Array(n);

    if (f0.length() != n)
      return false;

    for (int i = 0; i < n; ++i)
      f0.set(i, new Float3(1.0f * i, 1.5f * i, 2.0f * i));

    f0.syncToNative();

    for (int i = 0; i < n; ++i) {
      if (Int3.any(Float3.isNotEqual(f0.get(i), new Float3(1.0f * i, 1.5f * i, 2.0f * i))) != 0)
        return false;
    }

    f0.syncToOCL();

    float[] f0_ = f0.getContents();
    for (int i = 0; i < n; ++i) {
      Float3 elem = f0.get(i);
      int baseIdx = i * 3;

      if (elem.x != f0_[baseIdx] || elem.y != f0_[baseIdx+1] || elem.z != f0_[baseIdx+2])
        return false;
    }

    f0_[0] = f0_[0] + 10;
    if (f0_[0] == f0.get(0).x || f0_[1] != f0.get(0).y || f0_[2] != f0.get(0).z)
      return false;

    f0.setContents(f0_);

    for (int i = 0; i < n; ++i) {
      Float3 elem = f0.get(i);
      int baseIdx = i * 3;

      if (elem.x != f0_[baseIdx] || elem.y != f0_[baseIdx+1] || elem.z != f0_[baseIdx+2])
        return false;
    }

    Byte4Array b0 = new Byte4Array(x);

    if (b0.length() != x.length / 4)
      return false;

    for (int i = 0; i < b0.length(); ++i) {
      Byte4 elem = b0.get(i);
      int baseIdx = i * 4;

      if (elem.x != x[baseIdx] || elem.y != x[baseIdx+1] || elem.z != x[baseIdx+2] || elem.w != x[baseIdx+3])
        return false;
    }

    byte[] b0_ = b0.getContents();
    nativeProcess(b0);

    for (int i = 0; i < b0.length(); ++i) {
      Byte4 elem = b0.get(i);
      int baseIdx = i * 4;

      if (elem.x != b0_[baseIdx] + 1 ||
          elem.y != b0_[baseIdx+1] + 2 ||
          elem.z != b0_[baseIdx+2] + 3 ||
          elem.w != b0_[baseIdx+3] + 4)
        return false;
    }

    Byte4Array b1 = new Byte4Array(b0);

    if (b1.length() != b0.length())
      return false;

    for (int i = 0; i < b0.length(); ++i) {
      if (Int4.any(Byte4.isNotEqual(b0.get(i), b1.get(i))) != 0)
        return false;
    }

    b1.set(0, new Byte4((byte)(b1.get(0).x + 10), b1.get(0).y, b1.get(0).hi()));
    Int4 b0b1_eq = Byte4.isEqual(b0.get(0), b1.get(0));

    if (b0b1_eq.x != 0 || Int3.all(new Int3(b0b1_eq.y, b0b1_eq.z, b0b1_eq.w)) == 0)
      return false;

    f0.release();
    b0.release();
    b1.release();

    return nativeRun();
  }

  @Override
  public void teardown() {}

  private native boolean nativeRun();
  private native void nativeProcess(Byte4Array array);
}
