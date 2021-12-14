package es.ull.pcg.hpc.fancier.linuxtest.test;

import es.ull.pcg.hpc.fancier.array.FloatArray;
import es.ull.pcg.hpc.fancier.array.ShortArray;

import java.nio.ByteBuffer;

public class ArrayTest implements RuntimeTest {
    final int n = 10;
    final float[] x = new float[]{1.0F, 2.5F, 4.0F};

    @Override
    public void setup() {}

    @Override
    public boolean run() {
        // Short array
        try (ShortArray s0 = new ShortArray(n)) {
            // Initialization tests
            if (s0.length() != n)
                return false;

            for (int i = 0; i < n; ++i)
                s0.set(i, (short) (i * 2));

            s0.syncToNative();

            for (int i = 0; i < n; ++i) {
                if (s0.get(i) != (short) (i * 2))
                    return false;
            }

            // Automatic sync-to-native test
            s0.syncToOCL();

            short[] s0Array = s0.getArray();
            ByteBuffer s0Buffer = s0.getBuffer();

            // getArray and getBuffer test
            for (int i = 0; i < n; ++i) {
                if (s0.get(i) != s0Array[i] || s0.get(i) != ShortArray.getBuffer(s0Buffer, i))
                    return false;
            }

            // getArray must return a copy
            s0Array[0] = (short) (s0Array[0] + 10);
            if (s0Array[0] == s0.get(0))
                return false;

            // getBuffer must return a modifiable reference
            s0Buffer.putShort(0, (short) (s0Buffer.getShort(0) + 50));
            if (s0Buffer.getShort(0) != s0.get(0))
                return false;

            // setArray test
            s0.setArray(s0Array);

            for (int i = 0; i < n; ++i) {
                if (s0.get(i) != s0Array[i])
                    return false;
            }

            // setBuffer test, using the same buffer as input and output
            s0.setBuffer(s0Buffer);
            s0Buffer.rewind();
            for (int i = 0; i < n; ++i) {
                if (s0.get(i) != s0Buffer.getShort())
                    return false;
            }
        }

        // Double array
        try (FloatArray d0 = new FloatArray(x)) {
            // Initialization tests
            if (d0.length() != x.length)
                return false;

            for (int i = 0; i < d0.length(); ++i) {
                if (d0.get(i) != x[i])
                    return false;
            }

            // OpenCL execution test
            float[] d0_ = d0.getArray();

            nativeProcess(d0);

            for (int i = 0; i < d0.length(); ++i) {
                if (d0.get(i) != d0_[i] * 2)
                    return false;
            }

            // Array copy test
            try (FloatArray d1 = new FloatArray(d0)) {
                if (d1.length() != d0.length())
                    return false;

                for (int i = 0; i < d0.length(); ++i) {
                    if (d0.get(i) != d1.get(i))
                        return false;
                }

                d1.set(0, d1.get(0) + 10);
                if (d0.get(0) == d1.get(0))
                    return false;
            }
        }

        // Native tests
        return nativeRun();
    }

    @Override
    public void teardown() {}

    private native boolean nativeRun();
    private native void nativeProcess(FloatArray array);
}
