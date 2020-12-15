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


FANCIER_API cl_int fcRGBAColor_toRgba(fcByte4 color);
FANCIER_API fcByte4 fcRGBAColor_fromRgba(cl_int argb);

FANCIER_API cl_byte fcRGBAColor_alpha(fcByte4 color);
FANCIER_API cl_byte fcRGBAColor_red(fcByte4 color);
FANCIER_API cl_byte fcRGBAColor_green(fcByte4 color);
FANCIER_API cl_byte fcRGBAColor_blue(fcByte4 color);

#endif  // _FANCIER_COLOR_H_
