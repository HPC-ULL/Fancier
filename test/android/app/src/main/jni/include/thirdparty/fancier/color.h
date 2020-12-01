#ifndef _FANCIER_COLOR_H_
#define _FANCIER_COLOR_H_

#include <fancier/platform.h>
#include <fancier/vector.h>


extern const int fcARGBColor_Red;
extern const int fcARGBColor_Green;
extern const int fcARGBColor_Blue;
extern const int fcARGBColor_Yellow;
extern const int fcARGBColor_Magenta;
extern const int fcARGBColor_Cyan;
extern const int fcARGBColor_White;
extern const int fcARGBColor_LtGray;
extern const int fcARGBColor_Gray;
extern const int fcARGBColor_DkGray;
extern const int fcARGBColor_Black;
extern const int fcARGBColor_Transparent;

extern const fcByte4 fcARGBColor_RED;
extern const fcByte4 fcARGBColor_GREEN;
extern const fcByte4 fcARGBColor_BLUE;
extern const fcByte4 fcARGBColor_YELLOW;
extern const fcByte4 fcARGBColor_MAGENTA;
extern const fcByte4 fcARGBColor_CYAN;
extern const fcByte4 fcARGBColor_WHITE;
extern const fcByte4 fcARGBColor_LTGRAY;
extern const fcByte4 fcARGBColor_GRAY;
extern const fcByte4 fcARGBColor_DKGRAY;
extern const fcByte4 fcARGBColor_BLACK;
extern const fcByte4 fcARGBColor_TRANSPARENT;


FANCIER_API cl_int fcARGBColor_toArgb(fcByte4 color);
FANCIER_API fcByte4 fcARGBColor_fromArgb(cl_int argb);

FANCIER_API cl_byte fcARGBColor_alpha(fcByte4 color);
FANCIER_API cl_byte fcARGBColor_red(fcByte4 color);
FANCIER_API cl_byte fcARGBColor_green(fcByte4 color);
FANCIER_API cl_byte fcARGBColor_blue(fcByte4 color);

#endif  // _FANCIER_COLOR_H_
