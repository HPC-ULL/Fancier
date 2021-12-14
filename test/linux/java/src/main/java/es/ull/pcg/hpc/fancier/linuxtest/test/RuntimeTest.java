package es.ull.pcg.hpc.fancier.linuxtest.test;

public interface RuntimeTest {
    void setup();

    boolean run();

    void teardown();
}
