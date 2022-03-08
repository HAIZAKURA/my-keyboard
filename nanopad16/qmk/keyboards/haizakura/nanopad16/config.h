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
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER "HAIZAKURA"
#define PRODUCT      "NanoPad 16"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* nanopad16 PCB default pin-out */
#define MATRIX_ROW_PINS { B3, B4, B5, B6, B7 }
#define MATRIX_COL_PINS { B13, B14, B15, A8 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN B12

#ifdef RGB_DI_PIN
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_ANIMATIONS
#endif

/* Encoder */
#define ENCODERS_PAD_A { B8 }
#define ENCODERS_PAD_B { B9 }
#define ENCODER_RESOLUTION 4
