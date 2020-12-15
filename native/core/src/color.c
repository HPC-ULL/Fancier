#include <fancier/color.h>


const int fcRGBAColor_Red = 0xff0000ff;
const int fcRGBAColor_Green = 0x00ff00ff;
const int fcRGBAColor_Blue = 0x0000ffff;

const int fcRGBAColor_Yellow = 0xffff00ff;
const int fcRGBAColor_Magenta = 0xff00ffff;
const int fcRGBAColor_Cyan = 0x00ffffff;

const int fcRGBAColor_White = 0xffffffff;
const int fcRGBAColor_LtGray = 0xccccccff;
const int fcRGBAColor_Gray = 0x888888ff;
const int fcRGBAColor_DkGray = 0x444444ff;
const int fcRGBAColor_Black = 0x000000ff;

const int fcRGBAColor_Transparent = 0x00000000;


const fcByte4 fcRGBAColor_RED = {.s = {0xff, 0x00, 0x00, 0xff}};
const fcByte4 fcRGBAColor_GREEN = {.s = {0x00, 0xff, 0x00, 0xff}};
const fcByte4 fcRGBAColor_BLUE = {.s = {0x00, 0x00, 0xff, 0xff}};

const fcByte4 fcRGBAColor_YELLOW = {.s = {0xff, 0xff, 0x00, 0xff}};
const fcByte4 fcRGBAColor_MAGENTA = {.s = {0xff, 0x00, 0xff, 0xff}};
const fcByte4 fcRGBAColor_CYAN = {.s = {0x00, 0xff, 0xff, 0xff}};

const fcByte4 fcRGBAColor_WHITE = {.s = {0xff, 0xff, 0xff, 0xff}};
const fcByte4 fcRGBAColor_LTGRAY = {.s = {0xcc, 0xcc, 0xcc, 0xff}};
const fcByte4 fcRGBAColor_GRAY = {.s = {0x88, 0x88, 0x88, 0xff}};
const fcByte4 fcRGBAColor_DKGRAY = {.s = {0x44, 0x44, 0x44, 0xff}};
const fcByte4 fcRGBAColor_BLACK = {.s = {0x00, 0x00, 0x00, 0xff}};

const fcByte4 fcRGBAColor_TRANSPARENT = {.s = {0x00, 0x00, 0x00, 0x00}};


FANCIER_API cl_int fcRGBAColor_toRgba(fcByte4 color) {
  return ((color.x & 0xff) << 24) | ((color.y & 0xff) << 16) | ((color.z & 0xff) << 8) |
         ((color.w & 0xff) << 0);
}

FANCIER_API fcByte4 fcRGBAColor_fromRgba(cl_int rgba) {
  return fcByte4_create1111((cl_byte)((rgba >> 24) & 0xff), (cl_byte)((rgba >> 16) & 0xff),
                            (cl_byte)((rgba >> 8) & 0xff), (cl_byte)((rgba >> 0) & 0xff));
}

FANCIER_API cl_byte fcRGBAColor_alpha(fcByte4 color) {
  return color.x;
}

FANCIER_API cl_byte fcRGBAColor_red(fcByte4 color) {
  return color.y;
}

FANCIER_API cl_byte fcRGBAColor_green(fcByte4 color) {
  return color.z;
}

FANCIER_API cl_byte fcRGBAColor_blue(fcByte4 color) {
  return color.w;
}
