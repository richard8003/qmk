#include QMK_KEYBOARD_H
#include "combos.c"
#include "tapdance.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_F3, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, LT(2,KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_PSLS, KC_RSFT, LT(3,KC_NO), LT(1,KC_BSPC), LGUI_T(KC_TAB), RCTL_T(KC_ENT), LT(1,KC_SPC), LT(3,KC_NO)),
	[1] = LAYOUT_split_3x6_3(KC_NO, LALT(KC_7), LALT(KC_2), LSFT(KC_6), LSA(KC_7), LALT(KC_RBRC), KC_PPLS, KC_7, KC_8, KC_9, LALT(KC_8), LALT(KC_9), LCTL(KC_A), KC_EXLM, LSFT(KC_2), KC_HASH, LALT(KC_4), LSFT(KC_5), KC_PEQL, KC_4, KC_5, KC_6, LSFT(KC_8), LSFT(KC_9), KC_NO, KC_PLUS, KC_GRV, KC_TILD, LSFT(KC_SLSH), KC_SLSH, KC_PIPE, KC_1, KC_2, KC_3, RSA(KC_8), RSA(KC_9), KC_NO, KC_LEFT, KC_RGHT, KC_DOWN, KC_UP, KC_0),
	[2] = LAYOUT_split_3x6_3(KC_NO, KC_MPRV, KC_VOLD, KC_MPLY, KC_VOLU, KC_MNXT, KC_UP, KC_RGHT, KC_NO, KC_NO, LGUI(KC_SLSH), LGUI(KC_MINS), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, LALT(KC_LEFT), KC_NO, LALT(KC_RGHT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOWN, LSA(KC_LEFT), KC_NO, LSA(KC_RGHT), KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), KC_NO, LCTL(KC_J), LCTL(KC_L), LAG(KC_U), LAG(KC_Y), KC_NO, KC_NO, KC_NO, LALT(KC_U), LALT(KC_ENT), LALT(KC_SPC), LALT(KC_D), KC_NO, LCTL(KC_H), LAG(KC_N), LAG(KC_E), LAG(KC_I), LAG(KC_O), KC_NO, LT(4,KC_NO), KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_K), LCTL(KC_K), LAG(KC_1), LAG(KC_2), LAG(KC_3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LAG(KC_SPC), KC_NO),
	[4] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LAG(KC_F), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LAG(KC_R), LAG(KC_S), LAG(KC_T), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
