package es.ull.pcg.hpc.fancier;

public class Parallel {
  public static long getGlobalID (int dimensionID) {
    return 0L;
  }

  public static long getGlobalSize (int dimensionID) {
    return 1L;
  }

  public static long getGlobalOffset (int dimensionID) {
    return 0L;
  }

  public static long getGroupID (int dimensionID) {
    return 0L;
  }

  public static long getLocalID (int dimensionID) {
    return 0L;
  }

  public static long getLocalSize (int dimensionID) {
    return 1L;
  }

  public static long getNumGroups (int dimensionID) {
    return 1L;
  }

  public static int getWorkDim () {
    return 1;
  }
}
