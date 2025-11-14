#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "sendstring_swedish.h"

enum {
    TD_JL_TMUX_LAYER2,
};

enum layers {
    BASE,
    LAYER_1,
    LAYER_2,
};


bool td_alt_is_hold = false;

/* //---------------------------------------------------------------------------- */

   void jl_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        // Send Ctrl+a
        register_code(KC_LCTL);
        tap_code(KC_A);
        unregister_code(KC_LCTL);

        // Activate One Shot Layer 2
        set_oneshot_layer(LAYER_1, ONESHOT_START);
    }
}

void jl_reset(tap_dance_state_t *state, void *user_data) {
    // Nothing to reset
}

tap_dance_action_t tap_dance_actions[] = {
    /* [TD_ALT_COPY] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_copy_finished, alt_copy_reset), */
    [TD_JL_TMUX_LAYER2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, jl_finished, jl_reset),
};
