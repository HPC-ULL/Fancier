package es.ull.pcg.hpc.fancier.linuxtest.benchmark;


import es.ull.pcg.hpc.rancid.progress.RelativeProgressListener;

public class JreProgressListener extends RelativeProgressListener {
    public JreProgressListener() {}

    @Override
    public void updateProgress(final double globalProgress, double benchmarksProgress,
                               double parametersProgress) {
        System.out.println("Progress: " +  globalProgress);
    }
}
