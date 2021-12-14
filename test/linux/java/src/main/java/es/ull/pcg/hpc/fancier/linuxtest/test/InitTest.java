package es.ull.pcg.hpc.fancier.linuxtest.test;

import es.ull.pcg.hpc.fancier.Fancier;

public class InitTest implements RuntimeTest {

    public InitTest() {}

    @Override
    public void setup() {}

    @Override
    public boolean run() {
        Fancier.init();
        return true;
    }

    @Override
    public void teardown() {}
}
