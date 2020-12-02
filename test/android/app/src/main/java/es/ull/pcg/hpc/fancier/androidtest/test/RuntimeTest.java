package es.ull.pcg.hpc.fancier.androidtest.test;


public interface RuntimeTest {
  void setup();

  boolean run();

  void teardown();
}
