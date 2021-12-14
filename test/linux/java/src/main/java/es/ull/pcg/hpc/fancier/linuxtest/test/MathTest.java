package es.ull.pcg.hpc.fancier.linuxtest.test;

import es.ull.pcg.hpc.fancier.Math;

public class MathTest implements RuntimeTest {
    @Override
    public void setup() {}

    @Override
    public boolean run() {
        if (Math.abs(10) != 10)
            return false;

        if (Math.abs(-10L) != 10L)
            return false;

        if (Math.max(10.0, 5.0) != 10.0)
            return false;

        if (Math.min(10.1f, 10.0f) != 10.0f)
            return false;

        if (Math.clamp((byte) 18, (byte) 5, (byte) 15) != (byte) 15)
            return false;

        if (Math.clamp((byte) 4, (byte) 5, (byte) 15) != (byte) 5)
            return false;

        if (Math.asin(Math.M_PI_4) != java.lang.Math.asin(Math.M_PI_4))
            return false;

        if (Math.cosh(Math.M_PI_2) != java.lang.Math.cosh(Math.M_PI_2))
            return false;

        if (Math.fract(3.25) != 0.25)
            return false;

        // Will fail because Math.addSat is not implemented yet
        // if (Math.addSat(Integer.MAX_VALUE, 5) != Integer.MAX_VALUE)
        //     return false;

        return nativeRun();
    }

    @Override
    public void teardown() {}

    private native boolean nativeRun();
}
