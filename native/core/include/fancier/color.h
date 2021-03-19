#ifndef _FANCIER_COLOR_H_
#define _FANCIER_COLOR_H_

#include <fancier/platform.h>
#include <fancier/vector.h>


extern const int fcRGBAColor_Red;
extern const int fcRGBAColor_Green;
extern const int fcRGBAColor_Blue;
extern const int fcRGBAColor_Yellow;
extern const int fcRGBAColor_Magenta;
extern const int fcRGBAColor_Cyan;
extern const int fcRGBAColor_White;
extern const int fcRGBAColor_LtGray;
extern const int fcRGBAColor_Gray;
extern const int fcRGBAColor_DkGray;
extern const int fcRGBAColor_Black;
extern const int fcRGBAColor_Transparent;

extern const fcByte4 fcRGBAColor_RED;
extern const fcByte4 fcRGBAColor_GREEN;
extern const fcByte4 fcRGBAColor_BLUE;
extern const fcByte4 fcRGBAColor_YELLOW;
extern const fcByte4 fcRGBAColor_MAGENTA;
extern const fcByte4 fcRGBAColor_CYAN;
extern const fcByte4 fcRGBAColor_WHITE;
extern const fcByte4 fcRGBAColor_LTGRAY;
extern const fcByte4 fcRGBAColor_GRAY;
extern const fcByte4 fcRGBAColor_DKGRAY;
extern const fcByte4 fcRGBAColor_BLACK;
extern const fcByte4 fcRGBAColor_TRANSPARENT;


FANCIER_STATIC cl_int fcRGBAColor_toRgba(fcByte4 color) {
  return ((color.s[0] & 0xff) << 24) | ((color.s[1] & 0xff) << 16) | ((color.s[2] & 0xff) << 8) |
         ((color.s[3] & 0xff) << 0);
}

FANCIER_STATIC fcByte4 fcRGBAColor_fromRgba(cl_int rgba) {
  return fcByte4_create1111((cl_byte)((rgba >> 24) & 0xff), (cl_byte)((rgba >> 16) & 0xff),
                            (cl_byte)((rgba >> 8) & 0xff), (cl_byte)((rgba >> 0) & 0xff));
}

FANCIER_STATIC cl_byte fcRGBAColor_alpha(fcByte4 color) {
  return color.s[0];
}

FANCIER_STATIC cl_byte fcRGBAColor_red(fcByte4 color) {
  return color.s[1];
}

FANCIER_STATIC cl_byte fcRGBAColor_green(fcByte4 color) {
  return color.s[2];
}

FANCIER_STATIC cl_byte fcRGBAColor_blue(fcByte4 color) {
  return color.s[3];
}

#endif  // _FANCIER_COLOR_H_
