/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
//#define USE_SERIAL
//#define SERIAL

/* Handedness. */
//#define MASTER_RIGHT

#define MASTER_LEFT
//#define SERIAL_DEBUG
//#define SOFT_SERIAL_PIN D2  // or D1, D2, D3, E6
//#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: about 189kbps (Experimental only)
                                   //  1: about 137kbps (default)
                                   //  2: about 75kbps
                                   //  3: about 39kbps
                                   //  4: about 26kbps
                                   //  5: about 20kbps
//#define SOFT_SERIAL_PIN D2  // or D1, D2, D3, E6
// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* Reset. */
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define TAPPING_TERM 175

