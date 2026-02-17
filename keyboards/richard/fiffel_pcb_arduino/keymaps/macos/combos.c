#include QMK_KEYBOARD_H
#include "macros.c"
#include "definitions.h"
// #include "mac.c"
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Symbol / punctuation combos
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM single_quote[]           = {KC_U, KC_N, COMBO_END};                         //   '
const uint16_t PROGMEM quote[]                  = {KC_M, KC_L, COMBO_END};                         //   "
const uint16_t PROGMEM question_mark[]          = {KC_U, KC_Y, COMBO_END};                         //   ?
const uint16_t PROGMEM bang[]                   = {KC_Q, KC_W, COMBO_END};                         //   !
const uint16_t PROGMEM hyphen[]                 = {KC_T, KC_PSLS, COMBO_END};                      //   -
const uint16_t PROGMEM lowhyphen[]              = {KC_N, KC_D, COMBO_END};                         //   _
const uint16_t PROGMEM opening_parent[]         = {KC_T, KC_L, COMBO_END};                         //   (
const uint16_t PROGMEM closing_parent[]         = {KC_T, KC_U, COMBO_END};                         //   )
const uint16_t PROGMEM opening_bracket[]        = {KC_T, KC_N, COMBO_END};                         //   [
const uint16_t PROGMEM closing_bracket[]        = {KC_T, KC_E, COMBO_END};                         //   ]
const uint16_t PROGMEM opening_curly[]          = {KC_T, KC_H, COMBO_END};                         //   {
const uint16_t PROGMEM closing_curly[]          = {KC_T, KC_COMM, COMBO_END};                      //   }
const uint16_t PROGMEM ah[]                     = {LT(3, KC_SPC), KC_U, COMBO_END};                //   å
const uint16_t PROGMEM ae[]                     = {LT(3, KC_SPC), KC_E, COMBO_END};                //   ä
const uint16_t PROGMEM oe[]                     = {LT(3, KC_SPC), KC_I, COMBO_END};                //   ö
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Media keys
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM next_track[]             = {SGUI(KC_X), KC_Q, KC_W, COMBO_END};             //   next track
const uint16_t PROGMEM previous_track[]         = {LT(3, KC_CAPS), KC_A, KC_R, COMBO_END};         //   previous track
const uint16_t PROGMEM vol_up[]                 = {SGUI(KC_X), KC_Q, COMBO_END};                   //   vol up
const uint16_t PROGMEM vol_down[]               = {LALT_T(KC_CAPS), KC_A, COMBO_END};               //   vol down
const uint16_t PROGMEM play[]                   = {SGUI(KC_4), KC_Z, COMBO_END};                   //   play/stop
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Media keys
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
// const uint16_t PROGMEM ctrl_a_for_tmux[]             = {LT(1, KC_BSPC), LT(3, KC_SPC), COMBO_END}; //   play/stop
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Aerospace
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM float_window[]                  = {KC_F, KC_L, COMBO_END};                  //   cut
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Navigation / editing / layer control
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM cut[]                    = {KC_P, KC_B, COMBO_END};                         //   cut
const uint16_t PROGMEM copy[]                   = {KC_T, KC_G, COMBO_END};                         //   copy
const uint16_t PROGMEM paste[]                  = {KC_D, KC_V, COMBO_END};                         //   paste
const uint16_t PROGMEM ctrl_tab[]               = {KC_F, KC_T, COMBO_END};                         //   ctrl+tab->
const uint16_t PROGMEM ctrl_shift_tab[]         = {KC_W, KC_F, COMBO_END};                         //   ctrl+tab<-
// const uint16_t PROGMEM fubar[]                  = {KC_A, KC_X, COMBO_END};                         //   fubar is a macro that demonstrates the use of a RETURN key press in a macro
const uint16_t PROGMEM delete_line[]            = {KC_SCLN, KC_LBRC, COMBO_END};                   //   delete a whole line
const uint16_t PROGMEM delete_word_back[]       = {KC_R, KC_S, KC_T, COMBO_END};                   //   delete a whole word
const uint16_t PROGMEM jump_one_word_back[]     = {KC_X, KC_C, COMBO_END};                         //   jump one word back
const uint16_t PROGMEM jump_one_word_forward[]  = {KC_COMM, KC_DOT, COMBO_END};                    //   jump one word forward
const uint16_t PROGMEM end_of_the_line[]        = {L1_BSPC, KC_O, COMBO_END};                      //   jump to the end of the line
const uint16_t PROGMEM start_of_the_line[]      = {L1_SPC,  KC_A, COMBO_END};                      //   jump to the start of the line
const uint16_t PROGMEM select_all[]             = {KC_W, KC_F, KC_P, COMBO_END};                   //   select all (cmd+a)
const uint16_t PROGMEM ie_esc[]                 = {KC_I, KC_E, COMBO_END};                         //   ESC
const uint16_t PROGMEM alt[]                    = {KC_R, KC_S, COMBO_END};                         //   alt
const uint16_t PROGMEM left_shift[]             = {KC_S, KC_T, COMBO_END};                         //   left shift
const uint16_t PROGMEM right_shift[]            = {KC_N, KC_E, COMBO_END};                         //   right shift
const uint16_t PROGMEM osl_layer2_right[]       = {KC_N, KC_E, KC_I, KC_O, COMBO_END};             //   NEIO
const uint16_t PROGMEM osl_layer2_left[]        = {KC_A, KC_R, KC_S, KC_T, COMBO_END};             //   ARST
const uint16_t PROGMEM qmk_reset[]              = {KC_W, KC_F, KC_P, KC_L, KC_U, KC_Y, COMBO_END}; //   qmk reset
const uint16_t PROGMEM fiffel[]                 = {L1_BSPC, L1_SPC, COMBO_END};                    //   qmk reset
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
*  text string macros
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM tfe[]                    = {KC_T, KC_F, KC_E,         COMBO_END};           //   thank you for your email
const uint16_t PROGMEM sineng[]                 = {KC_A, KC_G,               COMBO_END};           //   thank you for your email
const uint16_t PROGMEM organiser[]              = {KC_O, KC_G,               COMBO_END};           //   organiser
const uint16_t PROGMEM smoothcomp[]             = {KC_S, KC_M, KC_O,         COMBO_END};           //   smoothcomp
const uint16_t PROGMEM richard[]                = {KC_R, KC_H,               COMBO_END};           //   richard
const uint16_t PROGMEM email_address[]          = {KC_E, KC_D,               COMBO_END};           //   email_address
const uint16_t PROGMEM associated[]             = {KC_A, KC_O, KC_S,         COMBO_END};           //   associated
const uint16_t PROGMEM please[]                 = {KC_P, KC_L,               COMBO_END};           //   please
const uint16_t PROGMEM haveaniceday[]           = {KC_K, KC_COMM, KC_H,      COMBO_END};           //   haveaniceday
const uint16_t PROGMEM account[]                = {KC_A, KC_O,               COMBO_END};           //   account
const uint16_t PROGMEM event[]                  = {KC_E, KC_V,               COMBO_END};           //   event
const uint16_t PROGMEM academy[]                = {KC_A, KC_Y,               COMBO_END};           //   academy
const uint16_t PROGMEM question[]               = {KC_Q, KC_N,               COMBO_END};           //   question
const uint16_t PROGMEM page[]                   = {KC_P, KC_E,               COMBO_END};           //   page
const uint16_t PROGMEM access[]                 = {KC_X, KC_S,               COMBO_END};           //   access
const uint16_t PROGMEM athlete[]                = {KC_A,  KC_H,              COMBO_END};           //   athlete
const uint16_t PROGMEM jag[]                    = {KC_I, KC_R,               COMBO_END};           //   jag
const uint16_t PROGMEM user[]                   = {KC_U, KC_S, KC_R,         COMBO_END};           //   user
const uint16_t PROGMEM stripe_42[]              = {KC_B, KC_J,               COMBO_END};           //   user


const uint16_t PROGMEM cap_q[]                  = {KC_N, KC_E, KC_Q,         COMBO_END};           //   user
const uint16_t PROGMEM cap_w[]                  = {KC_N, KC_E, KC_W,         COMBO_END};           //   user
const uint16_t PROGMEM cap_f[]                  = {KC_N, KC_E, KC_F,         COMBO_END};           //   user
const uint16_t PROGMEM cap_p[]                  = {KC_N, KC_E, KC_P,         COMBO_END};           //   user
const uint16_t PROGMEM cap_b[]                  = {KC_N, KC_E, KC_B,         COMBO_END};           //   user
const uint16_t PROGMEM cap_a[]                  = {KC_N, KC_E, KC_A,         COMBO_END};           //   user
const uint16_t PROGMEM cap_r[]                  = {KC_N, KC_E, KC_R,         COMBO_END};           //   user
const uint16_t PROGMEM cap_s[]                  = {KC_N, KC_E, KC_S,         COMBO_END};           //   user
const uint16_t PROGMEM cap_t[]                  = {KC_N, KC_E, KC_T,         COMBO_END};           //   user
const uint16_t PROGMEM cap_g[]                  = {KC_N, KC_E, KC_G,         COMBO_END};           //   user
const uint16_t PROGMEM cap_z[]                  = {KC_N, KC_E, KC_Z,         COMBO_END};           //   user
const uint16_t PROGMEM cap_x[]                  = {KC_N, KC_E, KC_X,         COMBO_END};           //   user
const uint16_t PROGMEM cap_c[]                  = {KC_N, KC_E, KC_C,         COMBO_END};           //   user
const uint16_t PROGMEM cap_d[]                  = {KC_N, KC_E, KC_D,         COMBO_END};           //   user
const uint16_t PROGMEM cap_v[]                  = {KC_N, KC_E, KC_V,         COMBO_END};           //   user


const uint16_t PROGMEM cap_j[]                  = {KC_S, KC_T, KC_J,         COMBO_END};           //   user
const uint16_t PROGMEM cap_l[]                  = {KC_S, KC_T, KC_L,         COMBO_END};           //   user
const uint16_t PROGMEM cap_u[]                  = {KC_S, KC_T, KC_U,         COMBO_END};           //   user
const uint16_t PROGMEM cap_y[]                  = {KC_S, KC_T, KC_Y,         COMBO_END};           //   user
const uint16_t PROGMEM cap_m[]                  = {KC_S, KC_T, KC_M,         COMBO_END};           //   user
const uint16_t PROGMEM cap_n[]                  = {KC_S, KC_T, KC_N,         COMBO_END};           //   user
const uint16_t PROGMEM cap_e[]                  = {KC_S, KC_T, KC_E,         COMBO_END};           //   user
const uint16_t PROGMEM cap_i[]                  = {KC_S, KC_T, KC_I,         COMBO_END};           //   user
const uint16_t PROGMEM cap_o[]                  = {KC_S, KC_T, KC_O,         COMBO_END};           //   user
const uint16_t PROGMEM cap_k[]                  = {KC_S, KC_T, KC_K,         COMBO_END};           //   user
const uint16_t PROGMEM cap_h[]                  = {KC_S, KC_T, KC_H,         COMBO_END};           //   user

combo_t key_combos[] = {

    COMBO(cap_q,                 LSFT(KC_Q)),
    COMBO(cap_w,                 LSFT(KC_W)),
    COMBO(cap_f,                 LSFT(KC_F)),
    COMBO(cap_p,                 LSFT(KC_P)),
    COMBO(cap_b,                 LSFT(KC_B)),
    COMBO(cap_a,                 LSFT(KC_A)),
    COMBO(cap_r,                 LSFT(KC_R)),
    COMBO(cap_s,                 LSFT(KC_S)),
    COMBO(cap_t,                 LSFT(KC_T)),
    COMBO(cap_g,                 LSFT(KC_G)),
    COMBO(cap_z,                 LSFT(KC_Z)),
    COMBO(cap_x,                 LSFT(KC_X)),
    COMBO(cap_c,                 LSFT(KC_C)),
    COMBO(cap_d,                 LSFT(KC_D)),
    COMBO(cap_v,                 LSFT(KC_V)),

    COMBO(cap_j,                 LSFT(KC_J)),
    COMBO(cap_l,                 LSFT(KC_L)),
    COMBO(cap_u,                 LSFT(KC_U)),
    COMBO(cap_y,                 LSFT(KC_Y)),
    COMBO(cap_m,                 LSFT(KC_M)),
    COMBO(cap_n,                 LSFT(KC_N)),
    COMBO(cap_e,                 LSFT(KC_E)),
    COMBO(cap_i,                 LSFT(KC_I)),
    COMBO(cap_o,                 LSFT(KC_O)),
    COMBO(cap_k,                 LSFT(KC_K)),
    COMBO(cap_h,                 LSFT(KC_H)),

    COMBO(float_window,          LALT(KC_Z)),
    COMBO(fiffel,                LT(4, KC_NO)),
    COMBO(ah,                    KC_LBRC),
    COMBO(ae,                    KC_QUOT),
    COMBO(oe,                    KC_SCLN),
    COMBO(ctrl_tab,              LCTL(KC_TAB)),
    COMBO(ctrl_shift_tab,        LCTL(LSFT(KC_TAB))),
    COMBO(qmk_reset,             QK_BOOT),
    COMBO(osl_layer2_right,      OSL(2)),
    COMBO(osl_layer2_left,       OSL(2)),
    COMBO(cut,                   LGUI(KC_X)),
    COMBO(paste,                 LGUI(KC_V)),
    COMBO(copy,                  LGUI(KC_C)),
    COMBO(ie_esc,                KC_ESC),
    COMBO(alt,                   KC_LALT),
    COMBO(left_shift,            KC_LSFT),
    COMBO(right_shift,           KC_LSFT),
    COMBO(single_quote,          KC_BSLS),
    COMBO(quote,                 LSFT(KC_2)),
    COMBO(question_mark,         LSFT(KC_MINS)),
    COMBO(bang,                  LSFT(KC_1)),
    COMBO(hyphen,                KC_SLSH),
    COMBO(lowhyphen,             LSFT(KC_SLSH)),
    COMBO(delete_word_back,      LALT(KC_BSPC)),
    COMBO(jump_one_word_back,    LOPT(KC_LEFT)),
    COMBO(jump_one_word_forward, LOPT(KC_RIGHT)),
    COMBO(delete_line,           LGUI(KC_BSPC)),
    COMBO(select_all,            LGUI(KC_A)),
    COMBO(opening_bracket,       LALT(KC_8)),
    COMBO(closing_bracket,       LALT(KC_9)),
    COMBO(opening_parent,        LSFT(KC_8)),
    COMBO(closing_parent,        LSFT(KC_9)),
    COMBO(opening_curly,         RSA(KC_8)),
    COMBO(closing_curly,         RSA(KC_9)),
    COMBO(next_track,            KC_MNXT),
    COMBO(previous_track,        KC_MPRV),
    COMBO(vol_up,                KC_VOLU),
    COMBO(vol_down,              KC_VOLD),
    COMBO(play,                  KC_MPLY),
    COMBO(end_of_the_line,       LGUI(KC_RIGHT)),
    COMBO(start_of_the_line,     LGUI(KC_LEFT)),
    // COMBO(ctrl_a_for_tmux,       LCTL(KC_A)),


    // COMBO(fubar,                 FUBAR),
    COMBO(jag,                   LSFT(KC_I)),
    COMBO(event,                 EVENT),
    COMBO(academy,               ACADEMY),
    COMBO(tfe,                   THANKYOUFORYOUREMAIL),
    COMBO(organiser,             ORGANISER),
    COMBO(smoothcomp,            SMOOTHCOMP),
    COMBO(associated,            ASSOCIATED),
    COMBO(email_address,         EMAIL_ADDRESS),
    COMBO(please,                PLEASE),
    COMBO(haveaniceday,          HAVEANICEDAY),
    COMBO(account,               ACCOUNT),
    COMBO(access,                AXESS),
    COMBO(question,              QUESTION),
    COMBO(richard,               RICHARD),
    COMBO(page,                  PAGE),
    COMBO(athlete,               ATHLETE),
    COMBO(user,                  USER),
    COMBO(sineng,                SINENG),
    COMBO(stripe_42,             STRIPE_ACC),
};
