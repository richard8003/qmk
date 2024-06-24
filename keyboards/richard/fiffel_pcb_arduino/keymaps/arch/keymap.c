#include QMK_KEYBOARD_H
#include "combos.c"
#include "keymap_swedish.h"
#include "sendstring_swedish.h"

// Tap Dance declarations

enum {
    TD_ESC_CAPS = 0,
    TD_SLNGSHT,
    TD_SCRSHT,
    CT_CLN,
};

void dance_cln_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_RSFT);
        register_code(KC_SCLN);
    } else {
        register_code(KC_SCLN);
    }
}

void dance_cln_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_RSFT);
        unregister_code(KC_SCLN);
    } else {
        unregister_code(KC_SCLN);
    }
}

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
    [TD_SLNGSHT]  = ACTION_TAP_DANCE_DOUBLE(KC_F3, SGUI(KC_X)),
    [TD_SCRSHT]   = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, SGUI(KC_4)),
    [CT_CLN]      = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_cln_finished, dance_cln_reset)};
// Add tap dance item to your keymap in place of a keycode


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_split_3x6_3(
                                            /*+-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                              |       |   Q   |   W   |   F   |   P   |   G   |          |   J   |   L   |   U   |   Y   |   Ö   |   Å   |
                                              +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                              | (LT2) |       |       |       |       |       |          |       |       |       |       |       |       |
                                              |  ESC  |   A   |   R   |   S   |   T   |   D   |          |   H   |   N   |   E   |   I   |   O   |   Ä   |
                                              +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                              | LSHFT |   Z   |   X   |   C   |   V   |   B   |          |   K   |   M   |   ,   |   .   |   /   | RSHFT |
                                              +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                                                      | (LT3) | (LT1) | (LGUI)|          | RCTL  | (LT1) | (lalt)|
                                                                      |   C   |  BSPC |  TAB  |          |RETURN | SPACE |       |
                                                                      +-------+-------+-------+          +-------+-------+-------+*/

                      TD(TD_SLNGSHT),     KC_Q,     KC_W,     KC_F,      KC_P,      KC_G,                    KC_J,      KC_L,      KC_U,       KC_Y,       KC_SCLN,     KC_LBRC,
                   /**---------------------------------------------------------------------**/            /**-------------------------------------------------------------------**/
                      LT(2,KC_ESC),       KC_A,     KC_R,     KC_S,      KC_T,      KC_D,                    KC_H,      KC_N,      KC_E,       KC_I,       KC_O,        KC_QUOT,
                   /**---------------------------------------------------------------------**/            /**-------------------------------------------------------------------**/
                      TD(TD_SCRSHT),      KC_Z,     KC_X,     KC_C,      KC_V,      KC_B,                    KC_K,      KC_M,      KC_COMM,    KC_DOT,     KC_PSLS,     KC_RSFT,
                   /**---------------------------------------------------------------------**/            /**-------------------------------------------------------------------**/
                                            LM(3, KC_NO),  LT(1,KC_BSPC),  LGUI_T(KC_TAB),                   RCTL_T(KC_ENT),    LT(1,KC_SPC),    LALT_T(KC_NO)),
                                            /**--------------------------------------------**/            /**------------------------------------------------**/

//***********************************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************************

	[1] = LAYOUT_split_3x6_3(
                                             /*+-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                               |       |   |   |   @   |   &   |   \   |   ~   |          |   +   |   7   |   8   |   9   |   [   |   ]   |
                                               +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                               |       |   !   |   "   |   #   |   $   |   %   |          |   =   |   4   |   5   |   6   |   (   |   )   |
                                               +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                               |       |   `   |   <   |   >   |   _   |   -   |          |   *   |   1   |   2   |   3   |   {   |   }   |
                                               +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                                                       |       |      |      |          |      |      |   0   |
                                                                       +-------+-------+-------+          +-------+-------+-------+*/
/**---------------------------------------------------------------------------------------**/               /**-----------------------------------------------------------------------------------------------**/
   RALT(KC_RBRC), LALT(KC_7),   RALT(KC_2),   LSFT(KC_6),    LSA(KC_7),        RALT(KC_RBRC),                 KC_PPLS,       KC_7,          KC_8,           KC_9,           LALT(KC_8),       LALT(KC_9),
/**---------------------------------------------------------------------------------------**/               /**-----------------------------------------------------------------------------------------------**/
   RALT(KC_4),    KC_EXLM,      LSFT(KC_2),   KC_HASH,       RALT(KC_4),       LSFT(KC_5),                    KC_PEQL,       KC_4,          KC_5,           KC_6,           LSFT(KC_8),       LSFT(KC_9),
/**---------------------------------------------------------------------------------------**/               /**-----------------------------------------------------------------------------------------------**/
   // SGUI(KC_4),    KC_PLUS,      RSA(KC_Z),       KC_TILD,       LSFT(KC_SLSH),    KC_SLSH,                       KC_PIPE,       KC_1,          KC_2,           KC_3,           RSA(KC_8),        RSA(KC_9),
   SGUI(KC_4),    KC_PLUS,      KC_GRV,       KC_TILD,       LSFT(KC_SLSH),    KC_SLSH,                       KC_PIPE,       KC_1,          KC_2,           KC_3,           RSA(KC_8),        RSA(KC_9),
/**---------------------------------------------------------------------------------------**/               /**--------------------------------------------------------------------------------------------**/
                                              KC_NO,         KC_LEFT,          KC_RGHT,                       KC_DOWN,       KC_UP,         KC_0),
                                           /**--------------------------------------------**/               /**----------------------------------**/

//***********************************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************************

	[2] = LAYOUT_split_3x6_3(
                                             /*+-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                               |       |   󰒮   |   󰝞   |   󰐎   |   󰝝   |   󰒭   |          |      |      |       |       |      |      |
                                               +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                               |       |       |       |       |       |       |          |      |       |       |       |       |       |
                                               +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                               |       |       |       |       |       |       |          |      |       |       |       |       |       |
                                               +-------+-------+-------+-------+-------+-------+          +-------+-------+-------+-------+-------+-------+
                                                                       | RESET |       |       |          |       |       |       |
                                                                       +-------+-------+-------+          +-------+-------+-------+*/
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                KC_NO,     KC_MPRV,     KC_VOLD,     KC_MPLY,     KC_VOLU,     KC_MNXT,                        KC_UP,          KC_RGHT,        KC_NO,         KC_NO,     LGUI(KC_SLSH),   LGUI(KC_MINS),
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                KC_NO,     KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,                          KC_LEFT,        KC_NO,          KC_NO,         KC_NO,     KC_NO,           KC_NO,
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                KC_NO,     KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,                          KC_DOWN,        KC_NO,          KC_NO,         KC_NO,     KC_NO,           KC_NO,
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                                                     QK_BOOT,     KC_NO,       KC_NO,                          KC_NO,          KC_NO,          KC_NO),
                                                 /**--------------------------------------**/                /**----------------------------------**/

//***********************************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************************

	[3] = LAYOUT_split_3x6_3(
                      /*+-----------+-----------+-----------+-----------+-----------+-----------+           +-----------+-----------+-----------+-----------+-----------+-----------+
                        |           |           |           |           |           |           | y = yabai |           |           |           |   y:nav   |           |           |
                        | desktop 1 | desktop 2 | desktop 3 | desktop 4 | desktop 5 | desktop 6 |           |           |           |           |          |           |           |
                        |           |           |           |           |           |           |           |           |           |           |           |           |           |
                        +-----------+-----------+-----------+-----------+-----------+-----------+           +-----------+-----------+-----------+-----------+-----------+-----------+
                        |           |           |           |           |           |           |           |           |           |   y:nav   |   y:nav   |   y:nav   |           |
                        |           |  spotify  | terminal  | browser   |  discord  |           |           |           |           |          |          |          |           |
                        |           |           |           |           |           |           |           |           |           |           |           |           |           |
                        +-----------+-----------+-----------+-----------+-----------+-----------+           +-----------+-----------+-----------+-----------+-----------+-----------+
                        |           |           |           |           |           |           |           |           | move win  | move win  | move win  |           |           |
                        |           |           |           |           |           |           |           |           |to desktop |to desktop |to desktop |           |           |
                        |           |           |           |           |           |           |           |           |    1      |    2      |    3      |           |           |
                        +-----------+-----------+-----------+-----------+-----------+-----------+           +-----------+-----------+-----------+-----------+-----------+-----------+
                                                            |           |           |           |           |           |           |           |
                                                            |           |           |           |           |           |           |           |
                                                            |           |           |           |           |           |           |           |
                                                            +-----------+-----------+-----------+           +-----------+-----------+-----------+*/
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                LGUI(KC_1),  LGUI(KC_2),  LGUI(KC_3),    LGUI(KC_4),   LGUI(KC_5), LGUI(KC_6),                      KC_NO,     KC_NO,       LGUI(KC_UP),    LAG(KC_Y),   KC_NO,     KC_NO,
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                KC_NO,       LALT(KC_U),  LALT(KC_ENT),  LALT(KC_SPC), LALT(KC_D),  KC_NO,                          KC_NO,     LGUI(KC_LEFT),      LGUI(KC_DOWN),     LGUI(KC_RIGHT),   LAG(KC_O), KC_NO,
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                LT(4,KC_NO), KC_NO,       KC_NO,         KC_NO,     KC_NO,      LGUI(KC_K),                         KC_NO,     LAG(KC_1),      LAG(KC_2),    LAG(KC_3),    KC_NO,    KC_NO,
/**---------------------------------------------------------------------------------------**/                /**--------------------------------------------------------------------------------------------**/
                                                         KC_NO, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),                   KC_NO,   LAG(KC_SPC),   KC_NO),
                                                      /**--------------------------------------**/                /**----------------------------------**/

	[4] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, LAG(KC_F), KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, LAG(KC_R), LAG(KC_S), LAG(KC_T), KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO),

	[5] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_MS_ACCEL0, KC_NO, KC_NO, KC_NO,    KC_MS_WH_UP, KC_NO, KC_MS_UP, KC_NO, KC_NO, KC_MS_ACCEL0,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO, KC_MS_ACCEL1,
        TD(TD_ESC_CAPS), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_ACCEL2,
                             KC_NO, LSFT(KC_MS_WH_UP), LSFT(KC_MS_WH_DOWN),    KC_MS_BTN1, KC_MS_BTN2, KC_NO
    )

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

