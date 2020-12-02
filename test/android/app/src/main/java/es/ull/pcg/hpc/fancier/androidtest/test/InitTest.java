package es.ull.pcg.hpc.fancier.androidtest.test;


import es.ull.pcg.hpc.fancier.Fancier;


public class InitTest implements RuntimeTest {
  private final String mBasePath;

  public InitTest(String basePath) {
    this.mBasePath = basePath;
  }

  @Override
  public void setup() {}

  @Override
  public boolean run() {
    Fancier.init(mBasePath);
    return true;
  }

  @Override
  public void teardown() {}
}
