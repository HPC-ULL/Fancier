/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

package es.ull.pcg.hpc.fancier.androidtest.model;


import android.content.res.Resources;

import java.io.PrintWriter;
import java.io.StringWriter;

import es.ull.pcg.hpc.fancier.androidtest.R;
import es.ull.pcg.hpc.fancier.androidtest.activity.MainActivity;
import es.ull.pcg.hpc.fancier.androidtest.test.RuntimeTest;
import es.ull.pcg.hpc.fancier.androidtest.view.ConsoleView;


public class TestTask implements Runnable {
  private final MainActivity mMain;
  private final Resources mRes;
  private final ConsoleView mOut;
  private final String mTestName;
  private final RuntimeTest mTest;
  private final int mTestID;

  public TestTask(MainActivity main, String testName, RuntimeTest test, int id) {
    this.mMain = main;
    this.mRes = mMain.getResources();
    this.mOut = mMain.findViewById(R.id.outputPanel);
    this.mTestName = testName;
    this.mTest = test;
    this.mTestID = id;
  }

  @Override
  public void run() {
    try {
      // Setup
      log(R.string.test_start, ConsoleView.MessageType.MSG_INFO);
      mTest.setup();

      // Run
      log(R.string.test_setup, ConsoleView.MessageType.MSG_INFO);
      if (mTest.run())
        log(R.string.test_success, ConsoleView.MessageType.MSG_SUCCESS);
      else
        log(R.string.test_error, ConsoleView.MessageType.MSG_ERROR);

      // Teardown
      log(R.string.test_teardown, ConsoleView.MessageType.MSG_INFO);
      mTest.teardown();
      log(R.string.test_teardown_finish, ConsoleView.MessageType.MSG_INFO);
    } catch (Throwable e) {
      StringWriter w = new StringWriter();
      e.printStackTrace(new PrintWriter(w));

      String fmt = mRes.getText(R.string.test_exception).toString();
      log(String.format(fmt, mTestID, mTestName, w.toString()), ConsoleView.MessageType.MSG_ERROR);
    }
  }

  private void log(final int textRes, final ConsoleView.MessageType type) {
    String fmt = mRes.getText(textRes).toString();
    log(String.format(fmt, mTestID, mTestName), type);
  }

  private void log(final CharSequence text, final ConsoleView.MessageType type) {
    mMain.runOnUiThread(new Runnable() {
      @Override
      public void run() {
        mOut.log(text, type);
      }
    });
  }
}
