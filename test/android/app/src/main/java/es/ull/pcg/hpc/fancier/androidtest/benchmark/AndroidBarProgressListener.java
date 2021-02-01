package es.ull.pcg.hpc.fancier.androidtest.benchmark;


import android.app.Activity;
import android.widget.ProgressBar;

import es.ull.pcg.hpc.rancid.progress.RelativeProgressListener;


public class AndroidBarProgressListener extends RelativeProgressListener {
  private final Activity mParent;
  private final ProgressBar mBar;

  public AndroidBarProgressListener(Activity parent, ProgressBar bar) {
    this.mParent = parent;
    this.mBar = bar;
  }

  @Override
  public void updateProgress(final double globalProgress, double benchmarksProgress,
                             double parametersProgress) {
    mParent.runOnUiThread(new Runnable() {
      @Override
      public void run() {
        mBar.setProgress((int) (mBar.getMax() * globalProgress));
      }
    });
  }
}
