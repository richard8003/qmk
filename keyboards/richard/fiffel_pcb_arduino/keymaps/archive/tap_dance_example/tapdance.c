#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "sendstring_swedish.h"

enum {
    TD_ESC_CAPS = 0,
    TD_SLNGSHT,
    TD_SCRSHT,
    CT_CLN,
    TD_PARENT,
};


//------------------------------------------------------------

void dance_cln_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_LGUI);
        register_code(KC_C);
    } else {
        register_code(KC_C);
    }
}

void dance_cln_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_LGUI);
        unregister_code(KC_C);
    } else {
        unregister_code(KC_C);
    }
}




// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
    [TD_SLNGSHT]  = ACTION_TAP_DANCE_DOUBLE(KC_F3, SGUI(KC_X)),
    [TD_PARENT]  = ACTION_TAP_DANCE_DOUBLE(KC_Y, LSFT(KC_9)),
    [TD_SCRSHT]   = ACTION_TAP_DANCE_DOUBLE(KC_Q, SGUI(KC_4)),
    // it helh = shift, if doublepressed screenshot tool
    [CT_CLN]      = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_cln_finished, dance_cln_reset),
    // [FUBAR] = ACTION_TAP_DANCE_TAP_HOLD(KC_COLN, KC_SCLN),
};

//------------------------------------------------------------




