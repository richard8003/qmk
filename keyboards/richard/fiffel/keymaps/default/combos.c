#include QMK_KEYBOARD_H


const uint16_t PROGMEM copy[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM single_quote[] = {KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_U, KC_Y, COMBO_END};
// const uint16_t PROGMEM flameshot[] = {KC_Q, KC_W, COMBO_END};
// const uint16_t PROGMEM screenshot[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_W, KC_F, COMBO_END};


combo_t key_combos[] = {
    COMBO(copy, LGUI(KC_C)),
    COMBO(paste, LGUI(KC_V)), // keycodes with modifiers are possible too!
    COMBO(single_quote, KC_BSLS), // keycodes with modifiers are possible too!
    COMBO(single_quote, KC_BSLS), // keycodes with modifiers are possible too!
    COMBO(question_mark, LSFT(KC_MINS)), // keycodes with modifiers are possible too!
    // COMBO(flameshot, LGUI(LSFT(KC_X))), // keycodes with modifiers are possible too!
    // COMBO(screenshot, LGUI(LSFT(KC_4))), // keycodes with modifiers are possible too!
    COMBO(bang, LSFT(KC_1)), // keycodes with modifiers are possible too!
};
