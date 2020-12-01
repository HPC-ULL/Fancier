#include <fancier/color.h>


const int fcARGBColor_Red = 0xffff0000;
const int fcARGBColor_Green = 0xff00ff00;
const int fcARGBColor_Blue = 0xff0000ff;

const int fcARGBColor_Yellow = 0xffffff00;
const int fcARGBColor_Magenta = 0xffff00ff;
const int fcARGBColor_Cyan = 0xff00ffff;

const int fcARGBColor_White = 0xffffffff;
const int fcARGBColor_LtGray = 0xffcccccc;
const int fcARGBColor_Gray = 0xff888888;
const int fcARGBColor_DkGray = 0xff444444;
const int fcARGBColor_Black = 0xff000000;

const int fcARGBColor_Transparent = 0x00000000;


const fcByte4 fcARGBColor_RED = {.s = {0xff, 0xff, 0x00, 0x00}};
const fcByte4 fcARGBColor_GREEN = {.s = {0xff, 0x00, 0xff, 0x00}};
const fcByte4 fcARGBColor_BLUE = {.s = {0xff, 0x00, 0x00, 0xff}};

const fcByte4 fcARGBColor_YELLOW = {.s = {0xff, 0xff, 0xff, 0x00}};
const fcByte4 fcARGBColor_MAGENTA = {.s = {0xff, 0xff, 0x00, 0xff}};
const fcByte4 fcARGBColor_CYAN = {.s = {0xff, 0x00, 0xff, 0xff}};

const fcByte4 fcARGBColor_WHITE = {.s = {0xff, 0xff, 0xff, 0xff}};
const fcByte4 fcARGBColor_LTGRAY = {.s = {0xff, 0xcc, 0xcc, 0xcc}};
const fcByte4 fcARGBColor_GRAY = {.s = {0xff, 0x88, 0x88, 0x88}};
const fcByte4 fcARGBColor_DKGRAY = {.s = {0xff, 0x44, 0x44, 0x44}};
const fcByte4 fcARGBColor_BLACK = {.s = {0xff, 0x00, 0x00, 0x00}};

const fcByte4 fcARGBColor_TRANSPARENT = {.s = {0x00, 0x00, 0x00, 0x00}};


FANCIER_API cl_int fcARGBColor_toArgb(fcByte4 color) {
  return ((color.x & 0xff) << 24) | ((color.y & 0xff) << 16) | ((color.z & 0xff) << 8) |
         ((color.w & 0xff) << 0x00);
}

FANCIER_API fcByte4 fcARGBColor_fromArgb(cl_int argb) {
  return fcByte4_create((cl_byte)((argb >> 24) & 0xff), (cl_byte)((argb >> 16) & 0xff),
                        (cl_byte)((argb >> 8) & 0xff), (cl_byte)((argb >> 0) & 0xff));
}

FANCIER_API cl_byte fcARGBColor_alpha(fcByte4 color) {
  return color.x;
}

FANCIER_API cl_byte fcARGBColor_red(fcByte4 color) {
  return color.y;
}

FANCIER_API cl_byte fcARGBColor_green(fcByte4 color) {
  return color.z;
}

FANCIER_API cl_byte fcARGBColor_blue(fcByte4 color) {
  return color.w;
}
