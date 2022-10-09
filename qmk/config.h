#pragma once

#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001

// the number of rows in your keyboard's matrix
#define MATRIX_ROWS 5

// the number of columns in your keyboard's matrix
#define MATRIX_COLS 12

// pins of the rows, from top to bottom
#define MATRIX_ROW_PINS \
    { B1, F7, F6, F5, F4 }

// pins of the columns, from left to right
#define MATRIX_COL_PINS \
    { D1, D0, D4, C6, D7, E6, B4, B5, B7, D5, C7, F1 }

// COL2ROW or ROW2COL
// how your matrix is configured
// COL2ROW means the black mark on your diode is facing to the rows and between the switch and the rows
#define DIODE_DIRECTION ROW2COL
