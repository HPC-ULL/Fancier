package es.ull.pcg.hpc.fancier;

/**
 * A class that represents runtime errors occurred in the execution of native code.
 */
public class NativeException extends RuntimeException {
  public NativeException() {
    super();
  }

  public NativeException(String message) {
    super(message);
  }

  public NativeException(String message, Throwable cause) {
    super(message, cause);
  }
}
