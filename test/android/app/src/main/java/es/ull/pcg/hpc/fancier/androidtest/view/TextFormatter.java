package es.ull.pcg.hpc.fancier.androidtest.view;


public class TextFormatter {
  public static String formatColor(CharSequence text, int color) {
    return "<font color=#" + Integer.toHexString(color & 0xFFFFFF) + ">" + text + "</font>";
  }
}
