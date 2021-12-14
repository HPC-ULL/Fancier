package es.ull.pcg.hpc.fancier.linuxtest.model;

import es.ull.pcg.hpc.fancier.linuxtest.Main;
import es.ull.pcg.hpc.fancier.linuxtest.test.*;

import java.awt.image.BufferedImage;
import java.util.concurrent.Executor;

public class FancierTestRunner {

    private final Main mMain;

    public FancierTestRunner(Main mMain) {
        this.mMain = mMain;
    }

    public void runTest(Tests selectedTest, String selectedName, BufferedImage inBff, BufferedImage outBff) {
        RuntimeTest test = null;

	    // Create the RuntimeTest instance associated with the selected test
        // First try to build an image filter
        ImageFilter filter = ImageFilterBuilder.create(selectedTest.filterInfo);

    	if (filter != null) {
            FilterTest filterTest = new FilterTest();
            filterTest.setInput(inBff);
            filterTest.setOutput(outBff);
            filterTest.setFilter(filter);
            test = filterTest;
        }
        else {
            switch (selectedTest) {
                case TEST_INIT:
                    test = new InitTest();
                    break;
                case TEST_RELEASE:
                    test = new ReleaseTest();
                    break;
                case TEST_MATH:
                    test = new MathTest();
                    break;
                case TEST_VECTOR:
                    test = new VectorTest();
                    break;
                case TEST_ARRAY:
                    test = new ArrayTest();
                    break;
                case TEST_VECTOR_ARRAY:
                    test = new VectorArrayTest();
                    break;
                default:
                    printTestNotImplemented(selectedName);
                    break;
            }
        }

        // If the selected test is valid, run it
        if (test != null) {

            int testID = mMain.getNextTestID();
            System.out.println("Test added to the queue | " + testID + " | " + selectedName);

            // Create tasks for execution
            Executor executor = mMain.getTaskExecutor();

            boolean isGpuFilter = filter != null && selectedTest.filterInfo.nativeVersion == NativeImageFilter.Version.GPU;

            // Compile GPU kernels, if necessary
            if (isGpuFilter) {
                executor.execute(new Runnable() {
                    @Override
                    public void run() {
                        NativeImageFilter.compileKernels(Main.OPC_KERNELS_DIR);
                    }
                });
            }

            // Run the actual task
            executor.execute(
                new TestTask(mMain, selectedName, test, testID)
            );

            // Release GPU kernels, if necessary
            if (isGpuFilter) {
                executor.execute(NativeImageFilter::releaseKernels);
            }
        }
    }

    private void printTestNotImplemented(String selectedName) {
        System.out.println("[WARNING]: Test not implemented (" + selectedName + ")");
    }

    public enum Tests {
        TEST_INIT,

        TEST_MATH,
        TEST_VECTOR,
        TEST_ARRAY,     // DON'T WORK
        TEST_VECTOR_ARRAY,  // DON'T WORK

        TEST_OCL_GRAYSCALE(NativeImageFilter.Version.GPU, ImageFilters.GRAYSCALE),
        TEST_OCL_BLUR(NativeImageFilter.Version.GPU, ImageFilters.BLUR),
        TEST_OCL_CONVOLVE3(NativeImageFilter.Version.GPU, ImageFilters.CONVOLVE3),
        TEST_OCL_CONVOLVE5(NativeImageFilter.Version.GPU, ImageFilters.CONVOLVE5),
        TEST_OCL_BILATERAL(NativeImageFilter.Version.GPU, ImageFilters.BILATERAL),
        TEST_OCL_MEDIAN(NativeImageFilter.Version.GPU, ImageFilters.MEDIAN),
        TEST_OCL_CONTRAST(NativeImageFilter.Version.GPU, ImageFilters.CONTRAST),
        TEST_OCL_FISHEYE(NativeImageFilter.Version.GPU, ImageFilters.FISHEYE),
        TEST_OCL_LEVELS(NativeImageFilter.Version.GPU, ImageFilters.LEVELS),
        TEST_OCL_POSTERIZE(NativeImageFilter.Version.GPU, ImageFilters.POSTERIZE),

        TEST_NATIVE_GRAYSCALE(NativeImageFilter.Version.REF, ImageFilters.GRAYSCALE),
        TEST_NATIVE_BLUR(NativeImageFilter.Version.REF, ImageFilters.BLUR),
        TEST_NATIVE_CONVOLVE3(NativeImageFilter.Version.REF, ImageFilters.CONVOLVE3),
        TEST_NATIVE_CONVOLVE5(NativeImageFilter.Version.REF, ImageFilters.CONVOLVE5),
        TEST_NATIVE_BILATERAL(NativeImageFilter.Version.REF, ImageFilters.BILATERAL),
        TEST_NATIVE_MEDIAN(NativeImageFilter.Version.REF, ImageFilters.MEDIAN),
        TEST_NATIVE_CONTRAST(NativeImageFilter.Version.REF, ImageFilters.CONTRAST),
        TEST_NATIVE_FISHEYE(NativeImageFilter.Version.REF, ImageFilters.FISHEYE),
        TEST_NATIVE_LEVELS(NativeImageFilter.Version.REF, ImageFilters.LEVELS),
        TEST_NATIVE_POSTERIZE(NativeImageFilter.Version.REF, ImageFilters.POSTERIZE),

        TEST_JAVA_GRAYSCALE(JavaImageFilter.Version.PERFORMANCE, ImageFilters.GRAYSCALE),
        TEST_JAVA_BLUR(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.BLUR),
        TEST_JAVA_CONVOLVE3(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.CONVOLVE3),
        TEST_JAVA_CONVOLVE5(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.CONVOLVE5),
        TEST_JAVA_BILATERAL(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.BILATERAL),
        TEST_JAVA_MEDIAN(JavaImageFilter.Version.PERFORMANCE, ImageFilters.MEDIAN),
        TEST_JAVA_CONTRAST(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.CONTRAST),
        TEST_JAVA_FISHEYE(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.FISHEYE),
        TEST_JAVA_LEVELS(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.LEVELS),
        TEST_JAVA_POSTERIZE(JavaImageFilter.Version.BUFFEREDIMAGE, ImageFilters.POSTERIZE),

        TEST_RELEASE;

        public final FilterInfo filterInfo;

        Tests() {
            this.filterInfo = null;
        }

        Tests(JavaImageFilter.Version version, ImageFilters kernel) {
            this.filterInfo = new FilterInfo(version, kernel);
        }

        Tests(NativeImageFilter.Version version, ImageFilters kernel) {
            this.filterInfo = new FilterInfo(version, kernel);
        }
    }
}
