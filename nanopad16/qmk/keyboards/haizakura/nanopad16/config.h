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
#define MANUFACTURER HAIZAKURA
#define PRODUCT      NanoPad 16

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* nanopad16 PCB default pin-out */
#define MATRIX_ROW_PINS { A4, A5, A6, A7 }
#define MATRIX_COL_PINS { A0, A1, A2, A3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY 10