/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _FANCIER_COLOR_H_
#define _FANCIER_COLOR_H_

#include <fancier/platform.h>
#include <fancier/vector.h>


extern const fcInt fcRGBAColor_Red;
extern const fcInt fcRGBAColor_Green;
extern const fcInt fcRGBAColor_Blue;
extern const fcInt fcRGBAColor_Yellow;
extern const fcInt fcRGBAColor_Magenta;
extern const fcInt fcRGBAColor_Cyan;
extern const fcInt fcRGBAColor_White;
extern const fcInt fcRGBAColor_LtGray;
extern const fcInt fcRGBAColor_Gray;
extern const fcInt fcRGBAColor_DkGray;
extern const fcInt fcRGBAColor_Black;
extern const fcInt fcRGBAColor_Transparent;

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


FANCIER_STATIC fcInt fcRGBAColor_toRgba(fcByte4 color) {
  return ((color.s[0] & 0xff) << 24) | ((color.s[1] & 0xff) << 16) | ((color.s[2] & 0xff) << 8) |
         ((color.s[3] & 0xff) << 0);
}

FANCIER_STATIC fcByte4 fcRGBAColor_fromRgba(fcInt rgba) {
  return fcByte4_create1111((fcByte)((rgba >> 24) & 0xff), (fcByte)((rgba >> 16) & 0xff),
                            (fcByte)((rgba >> 8) & 0xff), (fcByte)((rgba >> 0) & 0xff));
}

FANCIER_STATIC fcByte fcRGBAColor_alpha(fcByte4 color) {
  return color.s[0];
}

FANCIER_STATIC fcByte fcRGBAColor_red(fcByte4 color) {
  return color.s[1];
}

FANCIER_STATIC fcByte fcRGBAColor_green(fcByte4 color) {
  return color.s[2];
}

FANCIER_STATIC fcByte fcRGBAColor_blue(fcByte4 color) {
  return color.s[3];
}

#endif  // _FANCIER_COLOR_H_
