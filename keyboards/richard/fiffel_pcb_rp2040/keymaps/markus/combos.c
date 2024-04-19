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
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case REGISTR:
        if (record->event.pressed) {
           SEND_STRING("register");
        } else {
            // when keycode QMKURL is released
        }
        break;
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
    case SC_EMAIL:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("johansson@smoothcomp.com");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PRIVATE_EMAIL:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("richard.johansson.8003@gmail.com");
        } else {
            // when keycode QMKBEST is released
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
    case RICHARD:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Richard");
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


const uint16_t PROGMEM cut[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM copy[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM single_quote[] = {KC_U, KC_N, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_H, KC_L, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM hyphen[] = {KC_T, KC_PSLS, COMBO_END};
const uint16_t PROGMEM lowhyphen[] = {KC_N, KC_V, COMBO_END};
const uint16_t PROGMEM layer3_left[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM layer3_right[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM pipe[] = {KC_N, KC_Q, COMBO_END};
const uint16_t PROGMEM change_tmux_tab[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM jump_word_back[] = {KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM jump_word_forward[] = {KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM delete_word_back[] = {KC_T, KC_S, KC_R, COMBO_END};
const uint16_t PROGMEM zoom_in[] = {KC_SCLN, KC_LBRC, COMBO_END};
const uint16_t PROGMEM zoom_out[] = {KC_O, KC_QUOT, COMBO_END};

// macros
const uint16_t PROGMEM tfe[] = {KC_T, KC_F, KC_E, COMBO_END};
const uint16_t PROGMEM private_email[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM sc_email[] = {KC_Q, KC_W, COMBO_END};
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
    COMBO(cut, LGUI(KC_X)),
    COMBO(copy, LGUI(KC_C)),
    COMBO(paste, LGUI(KC_V)), // keycodes with modifiers are possible too!
    COMBO(single_quote, KC_BSLS), // keycodes with modifiers are possible too!
    COMBO(question_mark, LSFT(KC_MINS)), // keycodes with modifiers are possible too!
    COMBO(bang, LSFT(KC_1)), // keycodes with modifiers are possible too!
    COMBO(hyphen, KC_SLSH), // keycodes with modifiers are possible too!
    COMBO(lowhyphen, LSFT(KC_SLSH)), // keycodes with modifiers are possible too!
    COMBO(layer3_left, LT(3,KC_NO)), // keycodes with modifiers are possible too!
    COMBO(layer3_right, LT(3,KC_NO)), // keycodes with modifiers are possible too!
    COMBO(quote, LSFT(KC_2)), // keycodes with modifiers are possible too!
    COMBO(pipe, LALT(KC_7)), // keycodes with modifiers are possible too!
    COMBO(change_tmux_tab, LCTL(KC_A)), // keycodes with modifiers are possible too!
    COMBO(jump_word_back, LALT(KC_LEFT)), // keycodes with modifiers are possible too!
    COMBO(jump_word_forward, LALT(KC_RIGHT)), // keycodes with modifiers are possible too!
    COMBO(delete_word_back, LALT(KC_BSPC)), // keycodes with modifiers are possible too!
    COMBO(zoom_in, LGUI(KC_MINS)), // keycodes with modifiers are possible too!
    COMBO(zoom_out, LGUI(KC_SLSH)), // keycodes with modifiers are possible too!


// macros
    // COMBO(tfe, THANKYOUFORYOUREMAIL), // keycodes with modifiers are possible too!
    // COMBO(private_email, PRIVATE_EMAIL), // keycodes with modifiers are possible too!
    // COMBO(sc_email, SC_EMAIL), // keycodes with modifiers are possible too!
    // COMBO(organiser, ORGANISER), // keycodes with modifiers are possible too!
    // COMBO(smoothcomp, SMOOTHCOMP), // keycodes with modifiers are possible too!
    // COMBO(richard, RICHARD), // keycodes with modifiers are possible too!
    // COMBO(associated, ASSOCIATED), // keycodes with modifiers are possible too!
    // COMBO(email_address, EMAIL_ADDRESS), // keycodes with modifiers are possible too!
    // COMBO(please, PLEASE), // keycodes with modifiers are possible too!
    // COMBO(haveaniceday, HAVEANICEDAY), // keycodes with modifiers are possible too!
    // COMBO(account, ACCOUNT), // keycodes with modifiers are possible too!
    // COMBO(manager, MANAGER), // keycodes with modifiers are possible too!
    // COMBO(user, USER), // keycodes with modifiers are possible too!
    // COMBO(access, ACCESS), // keycodes with modifiers are possible too!
    // COMBO(registr, REGISTR), // keycodes with modifiers are possible too!
};
