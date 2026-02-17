#include QMK_KEYBOARD_H
#include "macros.c"

const uint16_t PROGMEM single_quote[] = {KC_U, KC_N, COMBO_END}; //   '

combo_t key_combos[] = {
    COMBO(single_quote, KC_BSLS),

};
