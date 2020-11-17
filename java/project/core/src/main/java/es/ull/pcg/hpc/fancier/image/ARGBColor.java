package es.ull.pcg.hpc.fancier.image;

import es.ull.pcg.hpc.fancier.vector.Byte4;

public class ARGBColor {
  private ARGBColor () {}

  public static final int Red =   0xffff0000;
  public static final int Green = 0xff00ff00;
  public static final int Blue =  0xff0000ff;

  public static final int Yellow =  0xffffff00;
  public static final int Magenta = 0xffff00ff;
  public static final int Cyan =    0xff00ffff;

  public static final int White =  0xffffffff;
  public static final int LtGray = 0xffcccccc;
  public static final int Gray =   0xff888888;
  public static final int DkGray = 0xff444444;
  public static final int Black =  0xff000000;

  public static final int Transparent = 0x00000000;

  public static final int toArgb (Byte4 color) {
    return ((color.x & 0xff) << 24) |
           ((color.y & 0xff) << 16) |
           ((color.z & 0xff) <<  8) |
           ((color.w & 0xff) <<  0);
  }

  public static final Byte4 fromArgb (int argb) {
    return new Byte4((byte)((argb >> 24) & 0xff),
                     (byte)((argb >> 16) & 0xff),
                     (byte)((argb >>  8) & 0xff),
                     (byte)((argb >>  0) & 0xff));
  }

  public static final byte alpha (Byte4 color) {
    return color.x;
  }

  public static final byte red (Byte4 color) {
    return color.y;
  }

  public static final byte green (Byte4 color) {
    return color.z;
  }

  public static final byte blue (Byte4 color) {
    return color.w;
  }

  public static final Byte4 RED () {
    return fromArgb(Red);
  }

  public static final Byte4 GREEN () {
    return fromArgb(Green);
  }

  public static final Byte4 BLUE () {
    return fromArgb(Blue);
  }

  public static final Byte4 YELLOW () {
    return fromArgb(Yellow);
  }

  public static final Byte4 MAGENTA () {
    return fromArgb(Magenta);
  }

  public static final Byte4 CYAN () {
    return fromArgb(Cyan);
  }

  public static final Byte4 WHITE () {
    return fromArgb(White);
  }

  public static final Byte4 LTGRAY () {
    return fromArgb(LtGray);
  }

  public static final Byte4 GRAY () {
    return fromArgb(Gray);
  }

  public static final Byte4 DKGRAY () {
    return fromArgb(DkGray);
  }

  public static final Byte4 BLACK () {
    return fromArgb(Black);
  }
}
