#pragma once

//#define CONFIG_H

#include "config_common.h"

#define PRODUCT_ID      0xBADD
#define VENDOR_ID       0xA5E5
#define MANUFACTURER    "cest73"
#define DEVICE_VER      0x0001
#define PRODUCT         "orthDIY"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* Planck PCB default pin-out */
/* matrix sz handy ruler:  1   2   3   4   5   6   7   8   9  10  11  12 */
/* key matrix pins */
/*    row    handy ruler: r0  r1  r2  r3  r4  r5  r6  r7  r8  r9  r10 */
#define MATRIX_ROW_PINS { C7, B6, B5, B4, B3, B2, B1, B0 }
/*    column handy ruler: c0  c1  c2  c3  c4  c5  c6  c7  c8  c9 */
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7 }

#define UNUSED_PINS     { E6, C6, D0, D1, D2, D3, D4, D5, D7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* force n-key rollover */
#define FORCE_NKRO

/*One Shot Keys are usually called "Sticky keys" or "Dead keys"*/
#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

/* Enable kinetic mouse cursor mode */
//#define MK_KINETIC_SPEED
//#define MOUSEKEY_INTERVAL   8 // the smoothnes of movement (default = 8)

/*uncomment to use Combined mode*/
#define MK_COMBINED

/*better safe than sorry:*/
#define DYNAMIC_MACRO_NO_NESTING

/*Unicode input methods*/
#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */


/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

