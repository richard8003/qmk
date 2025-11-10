#include QMK_KEYBOARD_H
#include "macros.c"
#include "definitions.c"

// SPECIAL CHARACTERS
const uint16_t PROGMEM single_quote[] = {KC_U, KC_N, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_M, KC_L, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM hyphen[] = {KC_T, KC_PSLS, COMBO_END};
const uint16_t PROGMEM lowhyphen[] = {KC_N, KC_D, COMBO_END};

/* () [] {} */
const uint16_t PROGMEM opening_parent[] = {KC_T, KC_L, COMBO_END};
const uint16_t PROGMEM closing_parent[] = {KC_T, KC_U, COMBO_END};
const uint16_t PROGMEM opening_bracket[] = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM closing_bracket[] = {KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM opening_curly[] = {KC_T, KC_M, COMBO_END};
const uint16_t PROGMEM closing_curly[] = {KC_T, KC_COMM, COMBO_END};

// multimedia
const uint16_t PROGMEM next_track[] = {KC_F, KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM previous_track[] = {KC_S, KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM vol_up[] = {KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM vol_down[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM play[] = {KC_T, KC_V, COMBO_END};

// cut, copy & paste
const uint16_t PROGMEM cut[] = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM copy[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_D, KC_V, COMBO_END};

// fubar is a macro that demonstrates the use of a RETURN key press in a macro
const uint16_t PROGMEM fubar[] = {KC_A, KC_X, COMBO_END};

// delete a whole line
const uint16_t PROGMEM delete_line[] = {KC_SCLN, KC_LBRC, COMBO_END};

// delete a whole word
const uint16_t PROGMEM delete_word_back[] = {KC_R, KC_S, KC_T, COMBO_END};

// jump one word back
const uint16_t PROGMEM jump_one_word_back[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM jump_one_word_forward[] = {KC_COMM, KC_DOT, COMBO_END};

// select all (cmd+a)
const uint16_t PROGMEM select_all[] = {KC_W, KC_F, KC_P, COMBO_END};

// tmux ctrl+a
const uint16_t PROGMEM ctrl_a[] = {KC_L, KC_U, KC_Y, COMBO_END};

// esc
const uint16_t PROGMEM ie_esc[] = {KC_I, KC_E, COMBO_END};

// alt
const uint16_t PROGMEM alt[] = {KC_R, KC_S, COMBO_END};

// shift
const uint16_t PROGMEM left_shift[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM right_shift[] = {KC_N, KC_E, COMBO_END};


// text string macros
const uint16_t PROGMEM tfe[] = {KC_T, KC_F, KC_E, COMBO_END};
const uint16_t PROGMEM organiser[] = {KC_O, KC_R, KC_G, COMBO_END};
const uint16_t PROGMEM smoothcomp[] = {KC_S, KC_M, KC_O, COMBO_END};
const uint16_t PROGMEM richard[] = {KC_R, KC_H, COMBO_END};
const uint16_t PROGMEM email_address[] = {KC_E, KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM associated[] = {KC_A, KC_O, KC_S, COMBO_END};
const uint16_t PROGMEM please[] = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM password[] = {KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM haveaniceday[] = {KC_M, KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM account[] = {KC_A, KC_C, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM user[] = {KC_U, KC_S, KC_R, COMBO_END};
const uint16_t PROGMEM registr[] = {KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM registration[] = {KC_R, KC_N, COMBO_END};
const uint16_t PROGMEM event[] = {KC_E, KC_V, COMBO_END};
const uint16_t PROGMEM academy[] = {KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM question[] = {KC_Q, KC_N, COMBO_END};
const uint16_t PROGMEM page[] = {KC_P, KC_E, COMBO_END};
const uint16_t PROGMEM change[] = {KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM affiliation[] = {KC_A, KC_F, KC_N, COMBO_END};
const uint16_t PROGMEM federation[] = {KC_F, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM access[] = {KC_X, KC_S, COMBO_END};

const uint16_t PROGMEM osl_layer2_right[] = {KC_N, KC_E, KC_I, KC_O, COMBO_END}; // NEIO
const uint16_t PROGMEM osl_layer2_left[] = {KC_A, KC_R, KC_S, KC_T, COMBO_END};  // ARST

const uint16_t PROGMEM qmk_reset[] = {KC_W, KC_F, KC_P, KC_L, KC_U, KC_Y, COMBO_END};

combo_t key_combos[] = {


    // qmk reset
    COMBO(qmk_reset, QK_BOOT),

    // one-shot-layer 2
    COMBO(osl_layer2_right, OSL(2)),
    COMBO(osl_layer2_left, OSL(2)),

    // cut, copy, paste
    COMBO(cut, LGUI(KC_X)),
    /* COMBO(copy, LGUI(KC_C)), */
    COMBO(paste, LGUI(KC_V)),
    /* COMBO(cut, TD(TD_ALTSHIFT_CUT)), */
    COMBO(copy, TD(TD_ALT_COPY)),
    /* COMBO(paste, TD(TD_ALTCTRLSHIFT_PASTE)), */

    // esc
    COMBO(ie_esc, KC_ESC),

    // alt
    COMBO(alt, KC_LALT),

    // shift keys
    COMBO(left_shift, KC_LSFT),
    COMBO(right_shift, KC_RSFT),

    // special characters
    COMBO(single_quote, KC_BSLS),
    COMBO(quote, LSFT(KC_2)),
    COMBO(question_mark, LSFT(KC_MINS)),
    COMBO(bang, LSFT(KC_1)),
    COMBO(hyphen, KC_SLSH),
    COMBO(lowhyphen, LSFT(KC_SLSH)),

    // delete one word
    COMBO(delete_word_back, LALT(KC_BSPC)),

    // // jumb by word
    COMBO(jump_one_word_back, LOPT(KC_LEFT)),
    COMBO(jump_one_word_forward, LOPT(KC_RIGHT)),

    // delete line
    COMBO(delete_line, LGUI(KC_BSPC)),

    // select all (cmd+a)
    COMBO(select_all, LGUI(KC_A)),

    // tmux ctrl+a
    COMBO(ctrl_a, LCTL(KC_A)),

    // ()[]{}
    COMBO(opening_bracket, LALT(KC_8)),
    COMBO(closing_bracket, LALT(KC_9)),
    COMBO(opening_parent, LSFT(KC_8)),
    COMBO(closing_parent, LSFT(KC_9)),
    COMBO(opening_curly, RSA(KC_8)),
    COMBO(closing_curly, RSA(KC_9)),


    // multimedia
    COMBO(next_track, KC_MNXT),
    COMBO(previous_track, KC_MPRV),
    COMBO(vol_up, KC_VOLU),
    COMBO(vol_down, KC_VOLD),
    COMBO(play, KC_MPLY),

    // macros from "macros.c"
    COMBO(registration, REGISTRATION),
    COMBO(registr, REGISTR),
    COMBO(event, EVENT),
    COMBO(academy, ACADEMY),
    COMBO(tfe, THANKYOUFORYOUREMAIL),
    COMBO(organiser, ORGANISER),
    COMBO(smoothcomp, SMOOTHCOMP),
    COMBO(associated, ASSOCIATED),
    COMBO(email_address, EMAIL_ADDRESS),
    COMBO(please, PLEASE),
    COMBO(haveaniceday, HAVEANICEDAY),
    COMBO(account, ACCOUNT),
    COMBO(user, USER),
    COMBO(access, AXESS),
    COMBO(question, QUESTION),
    COMBO(richard, RICHARD),
    COMBO(page, PAGE),
    COMBO(change, CHANGE),
    COMBO(password, PASSWORD),
    COMBO(federation, FEDERATION),
    COMBO(affiliation, AFFILIATION),

    COMBO(fubar, FUBAR),
};

