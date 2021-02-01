package es.ull.pcg.hpc.fancier.androidtest.benchmark;


import android.app.ActivityManager;

import com.jaredrummler.android.processes.AndroidProcesses;
import com.jaredrummler.android.processes.models.AndroidAppProcess;

import java.io.IOException;
import java.util.Collections;


public class AndroidUtils {
  public static void killBackgroundApps(ActivityManager mgr, String appPackage) {
    // TODO Remove 3rd-party dependencies
    if (mgr != null) {
      for (AndroidAppProcess proc: AndroidProcesses.getRunningAppProcesses()) {
        String name = proc.getPackageName();

        if (name != null && !name.equals(appPackage))
          mgr.killBackgroundProcesses(name);
      }
    }
  }

  public static void enforceAOTCompile(String appPackage) throws IOException {
    ShellUtils.rootExec(Collections.singletonList("cmd package compile -m speed -f " + appPackage));
  }
}
