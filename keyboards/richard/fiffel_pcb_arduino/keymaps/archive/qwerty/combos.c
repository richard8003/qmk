#include QMK_KEYBOARD_H
#include "macros.c"
#include "definitions.c"

// SPECIAL CHARACTERS
const uint16_t PROGMEM single_quote[] = {KC_I, KC_J, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_H, KC_U, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_J, KC_A, COMBO_END};
const uint16_t PROGMEM hyphen[] = {KC_F, KC_PSLS, COMBO_END};
const uint16_t PROGMEM lowhyphen[] = {KC_J, KC_V, COMBO_END};

/* () [] {} */
const uint16_t PROGMEM opening_parent[] = {KC_F, KC_U, COMBO_END};
const uint16_t PROGMEM closing_parent[] = {KC_F, KC_I, COMBO_END};
const uint16_t PROGMEM opening_bracket[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM closing_bracket[] = {KC_F, KC_K, COMBO_END};
const uint16_t PROGMEM opening_curly[] = {KC_F, KC_M, COMBO_END};
const uint16_t PROGMEM closing_curly[] = {KC_F, KC_COMM, COMBO_END};

// cut, copy & paste
const uint16_t PROGMEM cut[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM copy[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_V, KC_B, COMBO_END};

// layer 2
const uint16_t PROGMEM layer2[] = {KC_S, KC_D, COMBO_END};

// delete a whole line
const uint16_t PROGMEM delete_line[] = {KC_P, KC_LBRC, COMBO_END};
// delete a whole word
const uint16_t PROGMEM delete_word_back[] = {KC_S, KC_D, KC_F, COMBO_END};

// // jump one word back
const uint16_t PROGMEM jump_one_word_back[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM jump_one_word_forward[] = {KC_COMM, KC_DOT, COMBO_END};

// select all (cmd+a)
const uint16_t PROGMEM select_all[] = {KC_W, KC_E, KC_R, COMBO_END};

// tmux ctrl+a
const uint16_t PROGMEM ctrl_a[] = {KC_U, KC_I, KC_O, COMBO_END};

// esc
const uint16_t PROGMEM ie_esc[] = {KC_L, KC_K, COMBO_END};

// shift
const uint16_t PROGMEM left_shift[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM right_shift[] = {KC_J, KC_K, COMBO_END};

// fzf
const uint16_t PROGMEM fzf[] = {KC_G, KC_H, COMBO_END};

// flameshot and mission control
/* const uint16_t progmem f3_flameshot_tapdance[] = {kc_s, kc_v, combo_end}; */




// text string macros
const uint16_t PROGMEM tfe[] = {KC_E, KC_F, KC_K, COMBO_END};
const uint16_t PROGMEM organiser[] = {KC_O, KC_R, KC_G, COMBO_END};
const uint16_t PROGMEM smoothcomp[] = {KC_S, KC_M, KC_O, COMBO_END};
const uint16_t PROGMEM richard[] = {KC_R, KC_H, COMBO_END};
const uint16_t PROGMEM email_address[] = {KC_E, KC_A, KC_G, COMBO_END};
const uint16_t PROGMEM associated[] = {KC_A, KC_O, KC_S, COMBO_END};
const uint16_t PROGMEM please[] = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM password[] = {KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM haveaniceday[] = {KC_M, KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM account[] = {KC_A, KC_U, COMBO_END};
const uint16_t PROGMEM user[] = {KC_U, KC_R, COMBO_END};
const uint16_t PROGMEM registr[] = {KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM registration[] = {KC_R, KC_N, COMBO_END};
const uint16_t PROGMEM event[] = {KC_E, KC_V, COMBO_END};
const uint16_t PROGMEM academy[] = {KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM question[] = {KC_Q, KC_N, COMBO_END};
const uint16_t PROGMEM page[] = {KC_P, KC_E, COMBO_END};
const uint16_t PROGMEM change[] = {KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM affiliation[] = {KC_A, KC_F, KC_N, COMBO_END};
const uint16_t PROGMEM federation[] = {KC_F, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM access[] = {KC_X, KC_Z, COMBO_END};


const uint16_t PROGMEM aerospace_seivice_mode[] = {KC_H, KC_N, COMBO_END};

const uint16_t PROGMEM osl_layer4_right[] = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END}; // NEIO
const uint16_t PROGMEM osl_layer4_left[] = {KC_A, KC_S, KC_D, KC_F, COMBO_END};  // ARST

const uint16_t PROGMEM qmk_reset[] = {KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, COMBO_END};




combo_t key_combos[] = {



    // qmk reset
    COMBO(qmk_reset, QK_BOOT),

    // one-shot-layer 3
    COMBO(osl_layer4_right, OSL(3)),
    COMBO(osl_layer4_left, OSL(3)),

    // aerospace seivice mode
    COMBO(aerospace_seivice_mode, LAG(KC_S)),

    // Flameshot and mission control
    /* COMBO(f3_flameshot_tapdance, FLAMESHOT), */


    // cut, copy, paste
    COMBO(cut, LGUI(KC_X)),
    COMBO(copy, LGUI(KC_C)),
    COMBO(paste, LGUI(KC_V)),

    // esc
    COMBO(ie_esc, KC_ESC),

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

    // // F3
    // COMBO(ff, KC_F3),

    // layer 3
    COMBO(layer2, LT(2, KC_NO)),

    // delete one word
    COMBO(delete_word_back, LALT(KC_BSPC)),
    // COMBO(delete_word_back2, LALT(KC_BSPC)),

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

    // fzf: ctrl+t
    COMBO(fzf, LCTL(KC_T)),

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
};



