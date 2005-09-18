/*
 * $Id: p595.c,v 1.1 2005-09-18 22:05:44 dhmunro Exp $
 * 5x9x5 rgb colormap for p_palette(w,p_595,225)
 */
/* Copyright (c) 2005, The Regents of the University of California.
 * All rights reserved.
 * This file is part of yorick (http://yorick.sourceforge.net).
 * Read the accompanying LICENSE file for details.
 */

#include "play.h"

/* 5x9x5 rgb colormap used by Mesa for 8-bit deep pseudocolor displays */
p_col_t p_595[225] = {
  0x01000000,0x0100003f,0x0100007f,0x010000bf,0x010000ff,0x01001f00,0x01001f3f,
  0x01001f7f,0x01001fbf,0x01001fff,0x01003f00,0x01003f3f,0x01003f7f,0x01003fbf,
  0x01003fff,0x01005f00,0x01005f3f,0x01005f7f,0x01005fbf,0x01005fff,0x01007f00,
  0x01007f3f,0x01007f7f,0x01007fbf,0x01007fff,0x01009f00,0x01009f3f,0x01009f7f,
  0x01009fbf,0x01009fff,0x0100bf00,0x0100bf3f,0x0100bf7f,0x0100bfbf,0x0100bfff,
  0x0100df00,0x0100df3f,0x0100df7f,0x0100dfbf,0x0100dfff,0x0100ff00,0x0100ff3f,
  0x0100ff7f,0x0100ffbf,0x0100ffff,0x013f0000,0x013f003f,0x013f007f,0x013f00bf,
  0x013f00ff,0x013f1f00,0x013f1f3f,0x013f1f7f,0x013f1fbf,0x013f1fff,0x013f3f00,
  0x013f3f3f,0x013f3f7f,0x013f3fbf,0x013f3fff,0x013f5f00,0x013f5f3f,0x013f5f7f,
  0x013f5fbf,0x013f5fff,0x013f7f00,0x013f7f3f,0x013f7f7f,0x013f7fbf,0x013f7fff,
  0x013f9f00,0x013f9f3f,0x013f9f7f,0x013f9fbf,0x013f9fff,0x013fbf00,0x013fbf3f,
  0x013fbf7f,0x013fbfbf,0x013fbfff,0x013fdf00,0x013fdf3f,0x013fdf7f,0x013fdfbf,
  0x013fdfff,0x013fff00,0x013fff3f,0x013fff7f,0x013fffbf,0x013fffff,0x017f0000,
  0x017f003f,0x017f007f,0x017f00bf,0x017f00ff,0x017f1f00,0x017f1f3f,0x017f1f7f,
  0x017f1fbf,0x017f1fff,0x017f3f00,0x017f3f3f,0x017f3f7f,0x017f3fbf,0x017f3fff,
  0x017f5f00,0x017f5f3f,0x017f5f7f,0x017f5fbf,0x017f5fff,0x017f7f00,0x017f7f3f,
  0x017f7f7f,0x017f7fbf,0x017f7fff,0x017f9f00,0x017f9f3f,0x017f9f7f,0x017f9fbf,
  0x017f9fff,0x017fbf00,0x017fbf3f,0x017fbf7f,0x017fbfbf,0x017fbfff,0x017fdf00,
  0x017fdf3f,0x017fdf7f,0x017fdfbf,0x017fdfff,0x017fff00,0x017fff3f,0x017fff7f,
  0x017fffbf,0x017fffff,0x01bf0000,0x01bf003f,0x01bf007f,0x01bf00bf,0x01bf00ff,
  0x01bf1f00,0x01bf1f3f,0x01bf1f7f,0x01bf1fbf,0x01bf1fff,0x01bf3f00,0x01bf3f3f,
  0x01bf3f7f,0x01bf3fbf,0x01bf3fff,0x01bf5f00,0x01bf5f3f,0x01bf5f7f,0x01bf5fbf,
  0x01bf5fff,0x01bf7f00,0x01bf7f3f,0x01bf7f7f,0x01bf7fbf,0x01bf7fff,0x01bf9f00,
  0x01bf9f3f,0x01bf9f7f,0x01bf9fbf,0x01bf9fff,0x01bfbf00,0x01bfbf3f,0x01bfbf7f,
  0x01bfbfbf,0x01bfbfff,0x01bfdf00,0x01bfdf3f,0x01bfdf7f,0x01bfdfbf,0x01bfdfff,
  0x01bfff00,0x01bfff3f,0x01bfff7f,0x01bfffbf,0x01bfffff,0x01ff0000,0x01ff003f,
  0x01ff007f,0x01ff00bf,0x01ff00ff,0x01ff1f00,0x01ff1f3f,0x01ff1f7f,0x01ff1fbf,
  0x01ff1fff,0x01ff3f00,0x01ff3f3f,0x01ff3f7f,0x01ff3fbf,0x01ff3fff,0x01ff5f00,
  0x01ff5f3f,0x01ff5f7f,0x01ff5fbf,0x01ff5fff,0x01ff7f00,0x01ff7f3f,0x01ff7f7f,
  0x01ff7fbf,0x01ff7fff,0x01ff9f00,0x01ff9f3f,0x01ff9f7f,0x01ff9fbf,0x01ff9fff,
  0x01ffbf00,0x01ffbf3f,0x01ffbf7f,0x01ffbfbf,0x01ffbfff,0x01ffdf00,0x01ffdf3f,
  0x01ffdf7f,0x01ffdfbf,0x01ffdfff,0x01ffff00,0x01ffff3f,0x01ffff7f,0x01ffffbf,
  0x01ffffff };
