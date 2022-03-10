#pragma once

#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001

// the number of rows in your keyboard's matrix
#define MATRIX_ROWS 10

// the number of columns in your keyboard's matrix
#define MATRIX_COLS 6

// pins of the rows, from top to bottom
#define MATRIX_ROW_PINS \
    { D4, D6, B3, B2, B6 }

// pins of the columns, from left to right
#define MATRIX_COL_PINS \
    { D7, E6, B4, B5, F7, B1 }

// COL2ROW or ROW2COL
// how your matrix is configured
// COL2ROW means the black mark on your diode is facing to the rows and between the switch and the rows
#define DIODE_DIRECTION COL2ROW

// master half is defined to be the right half
#define MASTER_RIGHT

// when using serial, define this
// one of `D0`, `D1`, `D2`, `D3`, `E6`
#define SOFT_SERIAL_PIN D2
