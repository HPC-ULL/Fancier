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


import java.io.DataOutputStream;
import java.io.IOException;
import java.util.Collection;
import java.util.Scanner;


public class ShellUtils {
  public static void exec(Collection<String> cmds) throws IOException {
    Runtime rt = Runtime.getRuntime();

    for (String cmd: cmds)
      waitProcess(execProcess(rt, cmd));
  }

  public static void rootExec(Collection<String> cmds) throws IOException {
    Runtime rt = Runtime.getRuntime();
    Process su = execProcess(rt, "su");

    try (DataOutputStream stream = new DataOutputStream(su.getOutputStream())) {
      for (String cmd: cmds) {
        stream.writeBytes(cmd);
        stream.writeBytes("\n");
        stream.flush();
      }

      stream.writeBytes("exit\n");
      stream.flush();
      waitProcess(su);
    }
  }

  public static String rootRead(String fileName) throws IOException {
    String result = null;
    Runtime rt = Runtime.getRuntime();
    Process su = execProcess(rt, "su");

    try (DataOutputStream stream = new DataOutputStream(su.getOutputStream());
         Scanner scanner = new Scanner(su.getInputStream())) {
      String cmd = "cat \"" + fileName + "\"";

      stream.writeBytes(cmd);
      stream.writeBytes("\n");
      stream.flush();

      stream.writeBytes("exit\n");
      stream.flush();
      waitProcess(su);

      scanner.useDelimiter("\\A");
      if (scanner.hasNext())
        result = scanner.next();
    }

    return result;
  }

  private static Process execProcess(Runtime rt, String cmd) throws IOException {
    return rt.exec(cmd);
  }

  private static void waitProcess(Process process) {
    boolean finished = false;
    while (!finished) {
      try {
        process.waitFor();
        finished = true;
      } catch (InterruptedException ignored) {}
    }
  }

  private ShellUtils() {}
}
