package es.ull.pcg.hpc.fancier.androidtest.test;


import es.ull.pcg.hpc.fancier.Fancier;


public class ReleaseTest implements RuntimeTest {
  @Override
  public void setup() {}

  @Override
  public boolean run() {
    Fancier.release();
    return true;
  }

  @Override
  public void teardown() {}
}
