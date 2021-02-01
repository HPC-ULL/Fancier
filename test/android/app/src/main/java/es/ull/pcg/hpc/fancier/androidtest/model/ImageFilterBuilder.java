package es.ull.pcg.hpc.fancier.androidtest.model;


public class ImageFilterBuilder {
  public static ImageFilter create(FilterInfo info) {
    if (info == null)
      return null;

    if (info.isJava())
      return new JavaImageFilter(info.kernel, info.javaVersion);
    else
      return new NativeImageFilter(info.kernel, info.nativeVersion);
  }
}
