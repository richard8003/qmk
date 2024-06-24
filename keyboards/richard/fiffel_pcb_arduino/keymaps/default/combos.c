#include QMK_KEYBOARD_H

enum custom_keycodes {
    THANKYOUFORYOUREMAIL = SAFE_RANGE,
    SC_EMAIL,
    PRIVATE_EMAIL,
    ORGANISER,
    SMOOTHCOMP,
    RICHARD,
    EMAIL_ADDRESS,
    ASSOCIATED,
    PLEASE,
    HAVEANICEDAY,
    ACCOUNT,
    MANAGER,
    USER,
    ACCESS,
    REGISTR,
    // TILDE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case TILDE:
        // if (record->event.pressed) {
           // SEND_STRING("~");
        // } else {
            // // when keycode QMKURL is released
        // }
        // break;

    case MANAGER:
        if (record->event.pressed) {
           SEND_STRING("manager");
        } else {
            // when keycode QMKURL is released
        }
        break;

    case USER:
        if (record->event.pressed) {
           SEND_STRING("user");
        } else {
            // when keycode QMKURL is released
        }
        break;

    case ACCESS:
        if (record->event.pressed) {
           SEND_STRING("access");
        } else {
            // when keycode QMKURL is released
        }
        break;

    case ACCOUNT:
        if (record->event.pressed) {
           SEND_STRING("account");
        } else {
            // when keycode QMKURL is released
        }
        break;

    case THANKYOUFORYOUREMAIL:
        if (record->event.pressed) {
           SEND_STRING("Thank you for your email.\n"); // selects all and copies
        } else {
            // when keycode QMKURL is released
        }
        break;
    case ORGANISER:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("organiser");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case SMOOTHCOMP:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Smoothcomp");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case EMAIL_ADDRESS:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("email address");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case ASSOCIATED:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("associated");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PLEASE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("please");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case HAVEANICEDAY:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Have a nice day!");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }

    return true;
};


// SPECIAL CHARACTERS
// '
const uint16_t PROGMEM single_quote[] = {KC_U, KC_N, COMBO_END};
// "
const uint16_t PROGMEM quote[] = {KC_H, KC_L, COMBO_END};
// ?
const uint16_t PROGMEM question_mark[] = {KC_U, KC_Y, COMBO_END};
// !
const uint16_t PROGMEM bang[] = {KC_N, KC_A, COMBO_END};
// &
const uint16_t PROGMEM and_sign[] = {KC_N, KC_F, COMBO_END};
// -
const uint16_t PROGMEM hyphen[] = {KC_T, KC_PSLS, COMBO_END};
// _
const uint16_t PROGMEM lowhyphen[] = {KC_N, KC_V, COMBO_END};
// @
const uint16_t PROGMEM at_sign[] = {KC_N, KC_W, COMBO_END};
// '\'
const uint16_t PROGMEM forward_slash[] = {KC_N, KC_P, COMBO_END};
// ~
const uint16_t PROGMEM tilde[] = {KC_N, KC_G, COMBO_END};
// |
const uint16_t PROGMEM pipe[] = {KC_N, KC_Q, COMBO_END};
// #
const uint16_t PROGMEM hash[] = {KC_N, KC_S, COMBO_END};
// $
const uint16_t PROGMEM dollar[] = {KC_N, KC_T , COMBO_END};
// %
const uint16_t PROGMEM procent[] = {KC_N, KC_D, COMBO_END};


// F3
const uint16_t PROGMEM ff[] = {KC_A, KC_R, COMBO_END};


// cut, copy & paste
const uint16_t PROGMEM cut[] = {KC_P, KC_G, COMBO_END};
const uint16_t PROGMEM copy[] = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_V, KC_B, COMBO_END};

// layer 3
const uint16_t PROGMEM layer3_left[] = {KC_R, KC_S, COMBO_END};

// delete a whole word
const uint16_t PROGMEM delete_word_back[] = {KC_T, KC_S, KC_R, COMBO_END};

// mouse layer
// const uint16_t PROGMEM mouse_layer_5[] = {KC_T, KC_D, COMBO_END};

// esc
const uint16_t PROGMEM ie_esc[] = {KC_I, KC_E, COMBO_END};

// shift
// const uint16_t PROGMEM left_shift[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM right_shift[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM left_shift[] = {KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM right_shift[] = {KC_N, KC_E, COMBO_END};

// text string macros
const uint16_t PROGMEM tfe[] = {KC_T, KC_F, KC_E, COMBO_END};
const uint16_t PROGMEM private_email[] = {KC_ESC, KC_A, COMBO_END};
const uint16_t PROGMEM sc_email[] = {KC_F3, KC_Q, COMBO_END};
const uint16_t PROGMEM organiser[] = {KC_O, KC_R, KC_G, COMBO_END};     //org
const uint16_t PROGMEM smoothcomp[] = {KC_S, KC_M, KC_O, COMBO_END};    //smo
const uint16_t PROGMEM richard[] = {KC_R, KC_H, COMBO_END};             //rh
const uint16_t PROGMEM email_address[] = {KC_E, KC_A, KC_D, COMBO_END}; //ade
const uint16_t PROGMEM associated[] = {KC_A, KC_O, KC_S, COMBO_END};    //aos
const uint16_t PROGMEM please[] = {KC_P, KC_L, KC_E, COMBO_END};        //ple
const uint16_t PROGMEM haveaniceday[] = {KC_N, KC_I, KC_E, COMBO_END};  //nei
const uint16_t PROGMEM account[] = {KC_A, KC_C, KC_O, KC_U, COMBO_END}; //acou
const uint16_t PROGMEM manager[] = {KC_A, KC_N, KC_M, COMBO_END};       //man
const uint16_t PROGMEM user[] = {KC_U, KC_S, KC_R, COMBO_END};          //usr
const uint16_t PROGMEM access[] = {KC_A, KC_C, KC_S, KC_E, COMBO_END};  //acse
const uint16_t PROGMEM registr[] = {KC_R, KC_E, KC_G, COMBO_END};      //reg




combo_t key_combos[] = {

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
    COMBO(at_sign, LALT(KC_2)),
    COMBO(and_sign, LSFT(KC_6)),
    COMBO(forward_slash, LSA(KC_7)),
    COMBO(tilde, RALT(KC_RBRC)),
    COMBO(pipe, LALT(KC_7)),
    COMBO(hash, KC_HASH),
    COMBO(dollar, RALT(KC_4)),
    COMBO(procent, LSFT(KC_5)),

    // F3
    COMBO(ff, KC_F3),

    // layer 3
    COMBO(layer3_left, LT(3,KC_NO)),
    COMBO(delete_word_back, LALT(KC_BSPC)),

    // mouse layer
    // COMBO(mouse_layer_5, LT(5, KC_NO)),



// macros
    COMBO(tfe, THANKYOUFORYOUREMAIL),
    COMBO(organiser, ORGANISER),
    COMBO(smoothcomp, SMOOTHCOMP),
    COMBO(associated, ASSOCIATED),
    COMBO(email_address, EMAIL_ADDRESS),
    COMBO(please, PLEASE),
    COMBO(haveaniceday, HAVEANICEDAY),
    COMBO(account, ACCOUNT),
    COMBO(manager, MANAGER),
    COMBO(user, USER),
    COMBO(access, ACCESS),
};

