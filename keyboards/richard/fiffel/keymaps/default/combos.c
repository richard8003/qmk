#include QMK_KEYBOARD_H


const uint16_t PROGMEM copy[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM single_quote[] = {KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM comma[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM fubar[] = {KC_E, KC_I, COMBO_END};


combo_t key_combos[] = {
    COMBO(copy, LGUI(KC_C)),
    COMBO(paste, LGUI(KC_V)), // keycodes with modifiers are possible too!
    COMBO(single_quote, KC_BSLS), // keycodes with modifiers are possible too!
    COMBO(single_quote, KC_BSLS), // keycodes with modifiers are possible too!
    COMBO(question_mark, LSFT(KC_MINS)), // keycodes with modifiers are possible too!
    COMBO(bang, LSFT(KC_1)), // keycodes with modifiers are possible too!
    COMBO(comma, KC_COMM), // keycodes with modifiers are possible too!
    COMBO(fubar, LT(2,KC_NO)), // keycodes with modifiers are possible too!

};
