package es.ull.pcg.hpc.fancier.androidtest.test;

public class ArrayTest implements RuntimeTest {
    @Override
    public void setup() {

    }

    @Override
    public boolean run() {
        return nativeRun();
    }

    @Override
    public void teardown() {

    }

    private native boolean nativeRun ();
}
