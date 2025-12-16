#include QMK_KEYBOARD_H
#include "macros.c"
#include "definitions.h"
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
const uint16_t PROGMEM ah[]                     = {L1_SPC, KC_U, COMBO_END};                       //   å
const uint16_t PROGMEM ae[]                     = {L1_SPC, KC_E, COMBO_END};                       //   ä
const uint16_t PROGMEM oe[]                     = {L1_SPC, KC_I, COMBO_END};                       //   ö
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Media keys
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM next_track[]             = {SGUI(KC_X), KC_Q, KC_W, COMBO_END};             //   next track
const uint16_t PROGMEM previous_track[]         = {LT(3, KC_CAPS), KC_A, KC_R, COMBO_END};         //   previous track
const uint16_t PROGMEM vol_up[]                 = {SGUI(KC_X), KC_Q, COMBO_END};                   //   vol up
const uint16_t PROGMEM vol_down[]               = {LT(3, KC_CAPS), KC_A, COMBO_END};               //   vol down
const uint16_t PROGMEM play[]                   = {SGUI(KC_4), KC_Z, COMBO_END};                   //   play/stop
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
 *  Navigation / editing / layer control
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
const uint16_t PROGMEM cut[]                    = {KC_P, KC_B, COMBO_END};                         //   cut
const uint16_t PROGMEM copy[]                   = {KC_T, KC_G, COMBO_END};                         //   copy
const uint16_t PROGMEM paste[]                  = {KC_D, KC_V, COMBO_END};                         //   paste
const uint16_t PROGMEM ctrl_tab[]               = {KC_F, KC_T, COMBO_END};                         //   ctrl+tab->
const uint16_t PROGMEM ctrl_shift_tab[]         = {KC_W, KC_F, COMBO_END};                         //   ctrl+tab<-
const uint16_t PROGMEM fu[]                     = {LT(1, KC_BSPC), KC_T, COMBO_END};               //   Arrows layer
const uint16_t PROGMEM fubar[]                  = {KC_A, KC_X, COMBO_END};                         //   fubar is a macro that demonstrates the use of a RETURN key press in a macro
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
const uint16_t PROGMEM you[]                    = {KC_W, KC_Y,               COMBO_END};           //   you
const uint16_t PROGMEM athlete[]                = {KC_A, KC_T, KC_H,         COMBO_END};           //   athlete
const uint16_t PROGMEM the[]                    = {KC_D, KC_H,               COMBO_END};           //   the
const uint16_t PROGMEM jag[]                    = {KC_I, KC_R,               COMBO_END};           //   jag
const uint16_t PROGMEM and_[]                   = {KC_G, KC_M,               COMBO_END};           //   the
const uint16_t PROGMEM are[]                    = {KC_V, KC_K,               COMBO_END};           //   the
// const uint16_t PROGMEM password[]               = {KC_P, KC_D,               COMBO_END};           //   password
// const uint16_t PROGMEM user[]                   = {KC_U, KC_S, KC_R,         COMBO_END};           //   user
// const uint16_t PROGMEM registr[]                = {KC_R, KC_E,               COMBO_END};           //   registr
// const uint16_t PROGMEM moved_from[]             = {KC_X, KC_C, KC_D,         COMBO_END};           //   moved_from
// const uint16_t PROGMEM registration[]           = {KC_R, KC_N,               COMBO_END};           //   registration
// const uint16_t PROGMEM change[]                 = {KC_C, KC_E,               COMBO_END};           //   change
// const uint16_t PROGMEM affiliation[]            = {KC_A, KC_F, KC_N,         COMBO_END};           //   affiliation
// const uint16_t PROGMEM admin[]                  = {KC_A, KC_M,               COMBO_END};           //   admin
// const uint16_t PROGMEM screenshot[]             = {KC_A, KC_S,               COMBO_END};           //   screenshot
// const uint16_t PROGMEM youtube[]                = {KC_Y, KC_T,               COMBO_END};           //   youtube
// const uint16_t PROGMEM myreply[]                = {KC_M, KC_R,               COMBO_END};           //   myreply
// const uint16_t PROGMEM sintoeng[]               = {KC_M, KC_R, KC_E,         COMBO_END};           //   sintoeng
// const uint16_t PROGMEM in[]                     = {KC_I, KC_N,               COMBO_END};           //   im
// const uint16_t PROGMEM it[]                     = {KC_I, KC_T,               COMBO_END};           //   im
// const uint16_t PROGMEM or[]                     = {KC_R, KC_O,               COMBO_END};           //   im
// const uint16_t PROGMEM of[]                     = {KC_O, KC_F,               COMBO_END};           //   jag
// const uint16_t PROGMEM for_[]                   = {KC_F, KC_O, KC_R,         COMBO_END};           //   jag
// const uint16_t PROGMEM is[]                     = {KC_I, KC_S,               COMBO_END};           //   jag
// const uint16_t PROGMEM to[]                     = {KC_T, KC_O,               COMBO_END};           //   jag
// const uint16_t PROGMEM my[]                     = {KC_M, KC_Y,               COMBO_END};           //   jag
// const uint16_t PROGMEM do_[]                    = {KC_D, KC_O,               COMBO_END};           //   jag
// const uint16_t PROGMEM we[]                     = {KC_W, KC_E,               COMBO_END};           //   jag
// const uint16_t PROGMEM at_[]                    = {KC_A, KC_T,               COMBO_END};           //   jag
// const uint16_t PROGMEM not_[]                   = {KC_N, KC_O, KC_T,         COMBO_END};           //   jagbbb
// const uint16_t PROGMEM now[]                    = {KC_N, KC_O, KC_W,         COMBO_END};           //   jagbbb
/* ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────
*  upper case letters
 * ────────────────────────────────────────────────────────────────────────────────────────────────────────────────── */
// right half
const uint16_t PROGMEM upper_j[]                = {KC_S, KC_T, KC_J,         COMBO_END};           //   J
const uint16_t PROGMEM upper_l[]                = {KC_S, KC_T, KC_L,         COMBO_END};           //   L
const uint16_t PROGMEM upper_u[]                = {KC_S, KC_T, KC_U,         COMBO_END};           //   U
const uint16_t PROGMEM upper_y[]                = {KC_S, KC_T, KC_Y,         COMBO_END};           //   Y
const uint16_t PROGMEM upper_m[]                = {KC_S, KC_T, KC_M,         COMBO_END};           //   M
const uint16_t PROGMEM upper_n[]                = {KC_S, KC_T, KC_N,         COMBO_END};           //   N
const uint16_t PROGMEM upper_e[]                = {KC_S, KC_T, KC_E,         COMBO_END};           //   E
const uint16_t PROGMEM upper_i[]                = {KC_S, KC_T, KC_I,         COMBO_END};           //   I
const uint16_t PROGMEM upper_o[]                = {KC_S, KC_T, KC_O,         COMBO_END};           //   O
const uint16_t PROGMEM upper_k[]                = {KC_S, KC_T, KC_K,         COMBO_END};           //   K
const uint16_t PROGMEM upper_h[]                = {KC_S, KC_T, KC_H,         COMBO_END};           //   H
const uint16_t PROGMEM upper_comm[]             = {KC_S, KC_T, KC_COMM,      COMBO_END};           //   :
const uint16_t PROGMEM upper_dot[]              = {KC_S, KC_T, KC_DOT,       COMBO_END};           //   ;
const uint16_t PROGMEM upper_ah[]               = {KC_S, KC_T, L1_SPC, KC_U, COMBO_END};           //   å
const uint16_t PROGMEM upper_ae[]               = {KC_S, KC_T, L1_SPC, KC_E, COMBO_END};           //   ä
const uint16_t PROGMEM upper_oe[]               = {KC_S, KC_T, L1_SPC, KC_I, COMBO_END};           //   ö
// left half
const uint16_t PROGMEM upper_q[]                = {KC_N, KC_E, KC_Q,         COMBO_END};           //   Q
const uint16_t PROGMEM upper_w[]                = {KC_N, KC_E, KC_W,         COMBO_END};           //   W
const uint16_t PROGMEM upper_f[]                = {KC_N, KC_E, KC_F,         COMBO_END};           //   F
const uint16_t PROGMEM upper_p[]                = {KC_N, KC_E, KC_P,         COMBO_END};           //   P
const uint16_t PROGMEM upper_b[]                = {KC_N, KC_E, KC_B,         COMBO_END};           //   B
const uint16_t PROGMEM upper_a[]                = {KC_N, KC_E, KC_A,         COMBO_END};           //   A
const uint16_t PROGMEM upper_r[]                = {KC_N, KC_E, KC_R,         COMBO_END};           //   R
const uint16_t PROGMEM upper_s[]                = {KC_N, KC_E, KC_S,         COMBO_END};           //   S
const uint16_t PROGMEM upper_t[]                = {KC_N, KC_E, KC_T,         COMBO_END};           //   T
const uint16_t PROGMEM upper_g[]                = {KC_N, KC_E, KC_G,         COMBO_END};           //   G
const uint16_t PROGMEM upper_z[]                = {KC_N, KC_E, KC_Z,         COMBO_END};           //   Z
const uint16_t PROGMEM upper_x[]                = {KC_N, KC_E, KC_X,         COMBO_END};           //   X
const uint16_t PROGMEM upper_c[]                = {KC_N, KC_E, KC_C,         COMBO_END};           //   C
const uint16_t PROGMEM upper_d[]                = {KC_N, KC_E, KC_D,         COMBO_END};           //   D
const uint16_t PROGMEM upper_v[]                = {KC_N, KC_E, KC_V,         COMBO_END};           //   V

combo_t key_combos[] = {
    COMBO(upper_j,               LSFT(KC_J)),
    COMBO(upper_l,               LSFT(KC_L)),
    COMBO(upper_u,               LSFT(KC_U)),
    COMBO(upper_y,               LSFT(KC_Y)),
    COMBO(upper_m,               LSFT(KC_M)),
    COMBO(upper_n,               LSFT(KC_N)),
    COMBO(upper_e,               LSFT(KC_E)),
    COMBO(upper_i,               LSFT(KC_I)),
    COMBO(upper_o,               LSFT(KC_O)),
    COMBO(upper_k,               LSFT(KC_K)),
    COMBO(upper_h,               LSFT(KC_H)),
    COMBO(upper_comm,            LSFT(KC_COMM)),
    COMBO(upper_dot,             LSFT(KC_DOT)),
    COMBO(upper_ah,              LSFT(KC_LBRC)),
    COMBO(upper_ae,              LSFT(KC_QUOT)),
    COMBO(upper_oe,              LSFT(KC_SCLN)),

    COMBO(upper_q,               LSFT(KC_Q)),
    COMBO(upper_w,               LSFT(KC_W)),
    COMBO(upper_f,               LSFT(KC_F)),
    COMBO(upper_p,               LSFT(KC_P)),
    COMBO(upper_b,               LSFT(KC_B)),
    COMBO(upper_a,               LSFT(KC_A)),
    COMBO(upper_r,               LSFT(KC_R)),
    COMBO(upper_s,               LSFT(KC_S)),
    COMBO(upper_t,               LSFT(KC_T)),
    COMBO(upper_g,               LSFT(KC_G)),
    COMBO(upper_z,               LSFT(KC_Z)),
    COMBO(upper_x,               LSFT(KC_X)),
    COMBO(upper_c,               LSFT(KC_C)),
    COMBO(upper_d,               LSFT(KC_D)),
    COMBO(upper_v,               LSFT(KC_V)),

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
    COMBO(fu,                    LT(3, KC_NO)),
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

    COMBO(jag,                   LSFT(KC_I)),
    COMBO(fubar,                 FUBAR),
    COMBO(the,                   THE),
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
    COMBO(and_,                  AND_),
    COMBO(are,                   ARE),
    COMBO(you,                   YOU),
    // COMBO(do_,                   DO_),
    // COMBO(not_,                  NOT_),
    // COMBO(at_,                   AT_),
    // COMBO(my,                    MY),
    // COMBO(of,                    OF_),
    // COMBO(to,                    TO),
    // COMBO(for_,                  FOR),
    // COMBO(it,                    IT),
    // COMBO(is,                    IS),
    // COMBO(in,                    IN),
    // COMBO(or,                    OR),
    // COMBO(registration,          REGISTRATION),
    // COMBO(registr,               REGISTR),
    // COMBO(user,                  USER),
    // COMBO(change,                CHANGE),
    // COMBO(password,              PASSWORD),
    // COMBO(affiliation,           AFFILIATION),
    // COMBO(moved_from,            MOVED_FROM),
    // COMBO(admin,                 ADMIN),
    // COMBO(screenshot,            SCREENSHOT),
    // COMBO(youtube,               YOUTUBE),
    // COMBO(myreply,               MYREPLY),
    // COMBO(sintoeng,              SINTOENG),
};
