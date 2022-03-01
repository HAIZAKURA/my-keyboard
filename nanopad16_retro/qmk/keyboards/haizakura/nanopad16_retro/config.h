/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0002
#define DEVICE_VER   0x0001
#define MANUFACTURER HAIZAKURA
#define PRODUCT      NanoPad 16 Retro

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { C4, C3, C2, C1 }
#define MATRIX_COL_PINS { D5, D6, D7, B0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// #define TAP_CODE_DELAY 10

/* Underglow options */
#define RGB_DI_PIN D4
#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LIMIT_VAL 128
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

/* RGB LED Conversion macro from physical array to electric array */
#define LED_LAYOUT( \
    L00, L01, L02, L03,  \
    L13, L12, L11, L10,  \
    L20, L21, L22, L23,  \
    L33, L32, L31, L30 ) \
  { \
    L00, L01, L02, L03,  \
    L13, L12, L11, L10,  \
    L20, L21, L22, L23,  \
    L33, L32, L31, L30   \
  }

/* RGB LED logical order map */
#define RGBLIGHT_LED_MAP LED_LAYOUT( \
   0,  1,  2,  3,  \
   4,  5,  6,  7,  \
   8,  9, 10, 11,  \
  12, 13, 14, 15 )
