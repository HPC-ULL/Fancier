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
