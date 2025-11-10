#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "sendstring_swedish.h"

enum {
    TD_ALT_COPY,
    /* TD_ALTSHIFT_CUT, */
    /* TD_ALTCTRLSHIFT_PASTE */
};

bool td_alt_is_hold = false;
/* bool td_altshift_is_hold = false; */
/* bool td_altctrlshift_is_hold = false; */


// alt copy
//----------------------------------------------------------------------------
void alt_copy_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        if (state->pressed) {
            // It's a hold
            td_alt_is_hold = true;
            register_code(KC_LALT);
        } else {
            // It's a tap
            tap_code16(LGUI(KC_C));
        }
    }
}

void alt_copy_reset(tap_dance_state_t *state, void *user_data) {
    if (td_alt_is_hold) {
        unregister_code(KC_LALT);
        td_alt_is_hold = false;
    }
}

/* // alt-shift cut */
/* //---------------------------------------------------------------------------- */
/* void altshift_cut_finished(tap_dance_state_t *state, void *user_data) { */
/*     if (state->count == 1) { */
/*         if (state->pressed) { */
/*             // Register Alt + Shift only when key is held */
/*             td_altshift_is_hold = true; */
/*             register_code(KC_LALT);  // Register Alt */
/*             register_code(KC_LSFT);  // Register Shift */
/*         } else { */
/*             // Send Cmd+X (cut) when tapped */
/*             tap_code16(LGUI(KC_X));  // Send Cmd + X (cut) */
/*         } */
/*     } */
/* } */
/**/
/* void altshift_cut_reset(tap_dance_state_t *state, void *user_data) { */
/*     if (td_altshift_is_hold) { */
/*         // Unregister Alt and Shift only when hold is detected */
/*         unregister_code(KC_LALT); */
/*         unregister_code(KC_LSFT); */
/*         td_altshift_is_hold = false; */
/*     } */
/* } */
/**/
/* //------------------------------ */
/**/
/* void altctrlshift_paste_finished(tap_dance_state_t *state, void *user_data) { */
/*     if (state->count == 1) { */
/*         if (state->pressed) { */
/*             // Register Alt + Ctrl + Shift when holding */
/*             td_altctrlshift_is_hold = true; */
/*             register_code(KC_LALT);  // Register Alt */
/*             register_code(KC_LCTL);  // Register Ctrl */
/*             register_code(KC_LSFT);  // Register Shift */
/*         } else { */
/*             // Send Cmd + V (paste) on tap */
/*             tap_code16(LGUI(KC_V));  // Send Cmd + V (paste) */
/*         } */
/*     } */
/* } */
/**/
/* void altctrlshift_paste_reset(tap_dance_state_t *state, void *user_data) { */
/*     if (td_altctrlshift_is_hold) { */
/*         // Unregister Alt + Ctrl + Shift when released */
/*         unregister_code(KC_LALT); */
/*         unregister_code(KC_LCTL); */
/*         unregister_code(KC_LSFT); */
/*         td_altctrlshift_is_hold = false; */
/*     } */
/* } */
/**/


//----------------------------------------------------------------------------

tap_dance_action_t tap_dance_actions[] = {
    [TD_ALT_COPY] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_copy_finished, alt_copy_reset),
    /* [TD_ALTSHIFT_CUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, altshift_cut_finished, altshift_cut_reset), */
    /*     [TD_ALTCTRLSHIFT_PASTE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, altctrlshift_paste_finished, altctrlshift_paste_reset), */


};
