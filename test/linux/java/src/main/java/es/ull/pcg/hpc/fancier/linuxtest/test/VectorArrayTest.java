package es.ull.pcg.hpc.fancier.linuxtest.test;

import es.ull.pcg.hpc.fancier.vector.Byte4;
import es.ull.pcg.hpc.fancier.vector.Float3;
import es.ull.pcg.hpc.fancier.vector.Int3;
import es.ull.pcg.hpc.fancier.vector.Int4;
import es.ull.pcg.hpc.fancier.vector.array.*;

import java.nio.ByteBuffer;

public class VectorArrayTest implements RuntimeTest {
    final int n = 10;
    final byte[] x = new byte[]{10, 10, 10, 10, 20, 20, 20, 20, 30, 30, 30, 30, 40, 50, 60, 70};

    @Override
    public void setup() {}

    @Override
    public boolean run() {
        // Float3 array
        try (Float3Array f0 = new Float3Array(n)) {
            // Initialization tests
            if (f0.length() != n)
                return false;

            for (int i = 0; i < n; ++i) { f0.set(i, new Float3(1.0f * i, 1.5f * i, 2.0f * i)); }

            f0.syncToHost();

            for (int i = 0; i < n; ++i) {
                if (Int3.any(Float3.isNotEqual(f0.get(i), new Float3(1.0f * i, 1.5f * i, 2.0f * i))) != 0)
                    return false;
            }

            // Automatic sync-to-native test
            f0.syncToDevice();

            float[] f0Array = f0.getArray();
            ByteBuffer f0Buffer = f0.getBuffer();

            // getArray and getBuffer test
            for (int i = 0; i < n; ++i) {
                Float3 elem = f0.get(i);
                Float3 elemBuffer = Float3Array.getBuffer(f0Buffer, i);

                int baseIdx = i * 3;
                if (elem.x != f0Array[baseIdx] || elem.y != f0Array[baseIdx + 1] ||
                        elem.z != f0Array[baseIdx + 2] || Int3.any(Float3.isNotEqual(elem, elemBuffer)) != 0)
                    return false;
            }

            // getArray must return a copy
            f0Array[0] = f0Array[0] + 10;
            if (f0Array[0] == f0.get(0).x || f0Array[1] != f0.get(0).y || f0Array[2] != f0.get(0).z)
                return false;

            // getBuffer must return a modifiable reference
            Float3 firstElem = Float3Array.getBuffer(f0Buffer, 0);
            firstElem.x += 50;
            Float3Array.setBuffer(f0Buffer, 0, firstElem);
            if (Int3.any(Float3.isNotEqual(Float3Array.getBuffer(f0Buffer, 0), f0.get(0))) != 0)
                return false;

            // setArray test
            f0.setArray(f0Array);

            for (int i = 0; i < n; ++i) {
                Float3 elem = f0.get(i);
                int baseIdx = i * 3;

                if (elem.x != f0Array[baseIdx] || elem.y != f0Array[baseIdx + 1] ||
                        elem.z != f0Array[baseIdx + 2])
                    return false;
            }

            // setBuffer test, using the same buffer as input and output
            f0.setBuffer(f0Buffer);
            for (int i = 0; i < n; ++i) {
                if (Int3.any(Float3.isNotEqual(f0.get(i), Float3Array.getBuffer(f0Buffer, i))) != 0)
                    return false;
            }
        }

        // Byte4 array
        try (Byte4Array b0 = new Byte4Array(x)) {
            // Initialization tests
            if (b0.length() != x.length / 4)
                return false;

            for (int i = 0; i < b0.length(); ++i) {
                Byte4 elem = b0.get(i);
                int baseIdx = i * 4;

                if (elem.x != x[baseIdx] || elem.y != x[baseIdx + 1] || elem.z != x[baseIdx + 2] ||
                        elem.w != x[baseIdx + 3])
                    return false;
            }

            // OpenCL execution test
            byte[] b0_ = b0.getArray();
            nativeProcess(b0);

            for (int i = 0; i < b0.length(); ++i) {
                Byte4 elem = b0.get(i);
                int baseIdx = i * 4;

                if (elem.x != b0_[baseIdx] + 1 || elem.y != b0_[baseIdx + 1] + 2 ||
                        elem.z != b0_[baseIdx + 2] + 3 || elem.w != b0_[baseIdx + 3] + 4)
                    return false;
            }

            // Vector array copy test
            try (Byte4Array b1 = new Byte4Array(b0)) {
                if (b1.length() != b0.length())
                    return false;

                for (int i = 0; i < b0.length(); ++i) {
                    if (Int4.any(Byte4.isNotEqual(b0.get(i), b1.get(i))) != 0)
                        return false;
                }

                b1.set(0, new Byte4((byte) (b1.get(0).x + 10), b1.get(0).y, b1.get(0).hi()));
                Int4 b0b1_eq = Byte4.isEqual(b0.get(0), b1.get(0));

                if (b0b1_eq.x != 0 || Int3.all(new Int3(b0b1_eq.y, b0b1_eq.z, b0b1_eq.w)) == 0)
                    return false;
            }
        }

        return nativeRun();
    }

    @Override
    public void teardown() {}

    private native boolean nativeRun();

    private native void nativeProcess(Byte4Array array);
}
