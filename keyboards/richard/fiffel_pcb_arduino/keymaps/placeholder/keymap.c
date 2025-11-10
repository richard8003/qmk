#include "keymap_swedish.h"
#include "sendstring_swedish.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_split_3x6_3(

      KC_NO,    KC_Q,     KC_W,       KC_F,       KC_P,        KC_B,             KC_J,      KC_L,         KC_U,        KC_Y,        KC_SCLN,     KC_LBRC,
      //-----------------------------------------------------------------             ------------------------------------------------------------------------
      KC_NO    ,KC_A,     KC_R,       KC_S,       KC_T,        KC_G,             KC_M,      KC_N,         KC_E,        KC_I,        KC_O,        KC_QUOT,
      //-----------------------------------------------------------------             -----------------------------------------------------------------------
      KC_NO,    KC_Z,     KC_X,       KC_C,       KC_D,        KC_V,             KC_K,      KC_H,         KC_COMM,     KC_DOT,      KC_PSLS,     KC_NO,
      //-----------------------------------------------------------------             ------------------------------------------------------------------------
                         LALT_T(KC_ESC),    KC_BSPC,  LGUI_T(KC_NO),             KC_ENT,    KC_SPC,       KC_NO
    ),








