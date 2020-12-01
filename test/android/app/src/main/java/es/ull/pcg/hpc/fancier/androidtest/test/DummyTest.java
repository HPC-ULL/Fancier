package es.ull.pcg.hpc.fancier.androidtest.test;

public class DummyTest implements RuntimeTest {
    @Override
    public void setup () {}

    @Override
    public boolean run () {
        try {
            Thread.sleep(500);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return true;
    }

    @Override
    public void teardown () {}
}
