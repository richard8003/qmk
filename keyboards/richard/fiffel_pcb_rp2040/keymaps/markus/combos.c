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
    USER,
    ACCESS,
    REGISTR,
    REGISTRATION,
    EVENT,
    ACADEMY,
    QUESTION,
    PAGE,
    CHANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case CHANGE:
        if (record->event.pressed) {
           SEND_STRING("change");
        } else {
            // when keycode QMKURL is released
        }
        break;

    case PAGE:
        if (record->event.pressed) {
           SEND_STRING("page");
        } else {
            // when keycode QMKURL is released
        }
        break;
    case RICHARD:
        if (record->event.pressed) {
           SEND_STRING("Richard");
        } else {
            // when keycode QMKURL is released
        }
        break;
    case QUESTION:
        if (record->event.pressed) {
           SEND_STRING("question");
        } else {
            // when keycode QMKURL is released
        }
        break;
    case REGISTR:
        if (record->event.pressed) {
           SEND_STRING("register");
        } else {
            // when keycode QMKURL is released
        }
        break;

    case REGISTRATION:
        if (record->event.pressed) {
           SEND_STRING("registration");
        } else {
            // when keycode QMKURL is released
        }
        break;
    case EVENT:
        if (record->event.pressed) {
           SEND_STRING("event");
        } else {
            // when keycode QMKURL is released
        }
        break;
    case ACADEMY:
        if (record->event.pressed) {
           SEND_STRING("academy");
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
const uint16_t PROGMEM single_quote[] = {KC_U, KC_N, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_H, KC_L, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM hyphen[] = {KC_T, KC_PSLS, COMBO_END};
const uint16_t PROGMEM lowhyphen[] = {KC_N, KC_V, COMBO_END};

// () [] {}
const uint16_t PROGMEM opening_parent[] = {KC_T, KC_L, COMBO_END};
const uint16_t PROGMEM closing_parent[] = {KC_T, KC_U, COMBO_END};
const uint16_t PROGMEM opening_bracket[] = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM closing_bracket[] = {KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM opening_curly[] = {KC_T, KC_M, COMBO_END};
const uint16_t PROGMEM closing_curly[] = {KC_T, KC_COMM, COMBO_END};

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

// jump one word back
const uint16_t PROGMEM jump_one_word_back[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM jump_one_word_forward[] = {KC_COMM, KC_DOT, COMBO_END};

// select all (cmd+a)
const uint16_t PROGMEM select_all[] = {KC_W, KC_F, KC_P, COMBO_END};

// tmux ctrl+a
const uint16_t PROGMEM ctrl_a[] = {KC_L, KC_U, KC_Y, COMBO_END};

// esc
const uint16_t PROGMEM ie_esc[] = {KC_K, KC_L, COMBO_END};

// shift
const uint16_t PROGMEM left_shift[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM right_shift[] = {KC_J, KC_K, COMBO_END};

// fzf
const uint16_t PROGMEM fzf[] = {KC_D, KC_H, COMBO_END};


// arrows on nums
const uint16_t PROGMEM left_arrow[] = {KC_4, KC_5, COMBO_END};      //reg
const uint16_t PROGMEM right_arrow[] = {KC_5, KC_6, COMBO_END};      //reg

// text string macros
const uint16_t PROGMEM change[] = {KC_C, KC_E, COMBO_END};      //reg



combo_t key_combos[] = {

    // arrows
    COMBO(left_arrow, KC_LEFT),
    COMBO(right_arrow, KC_RIGHT),

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

    // F3
    COMBO(ff, KC_F3),

    // layer 3
    COMBO(layer3_left, LT(3,KC_NO)),

    // delete one word
    COMBO(delete_word_back, LALT(KC_BSPC)),
    COMBO(jump_one_word_back, LOPT(KC_LEFT)),
    COMBO(jump_one_word_forward, LOPT(KC_RIGHT)),

    // select all (cmd+a)
    COMBO(select_all, LGUI(KC_A)),

    // tmux ctrl+a
    COMBO(ctrl_a, LCTL(KC_A)),

    COMBO(opening_bracket, LALT(KC_8)),
    COMBO(closing_bracket, LALT(KC_9)),
    COMBO(opening_parent, LSFT(KC_8)),
    COMBO(closing_parent, LSFT(KC_9)),
    COMBO(opening_curly, RSA(KC_8)),
    COMBO(closing_curly, RSA(KC_9)),

    // fzf: ctrl+t
    COMBO(fzf, LCTL(KC_T)),

    // macros
    // COMBO(registration, REGISTRATION),
    // COMBO(registr, REGISTR),
    // COMBO(event, EVENT),
    // COMBO(academy, ACADEMY),
    // COMBO(tfe, THANKYOUFORYOUREMAIL),
    // COMBO(organiser, ORGANISER),
    // COMBO(smoothcomp, SMOOTHCOMP),
    // COMBO(associated, ASSOCIATED),
    // COMBO(email_address, EMAIL_ADDRESS),
    // COMBO(please, PLEASE),
    // COMBO(haveaniceday, HAVEANICEDAY),
    // COMBO(account, ACCOUNT),
    // COMBO(user, USER),
    // COMBO(access, ACCESS),
    // COMBO(question, QUESTION),
    // COMBO(richard, RICHARD),
    // COMBO(page, PAGE),
    // COMBO(change, CHANGE),
};




