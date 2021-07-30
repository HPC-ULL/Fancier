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

#include <fancier/color.h>


const fcInt fcRGBAColor_Red = 0xff0000ff;
const fcInt fcRGBAColor_Green = 0x00ff00ff;
const fcInt fcRGBAColor_Blue = 0x0000ffff;

const fcInt fcRGBAColor_Yellow = 0xffff00ff;
const fcInt fcRGBAColor_Magenta = 0xff00ffff;
const fcInt fcRGBAColor_Cyan = 0x00ffffff;

const fcInt fcRGBAColor_White = 0xffffffff;
const fcInt fcRGBAColor_LtGray = 0xccccccff;
const fcInt fcRGBAColor_Gray = 0x888888ff;
const fcInt fcRGBAColor_DkGray = 0x444444ff;
const fcInt fcRGBAColor_Black = 0x000000ff;

const fcInt fcRGBAColor_Transparent = 0x00000000;


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
