#include "definitions.h"

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
    EVENT,
    ACADEMY,
    QUESTION,
    PAGE,
    PASSWORD,
    FEDERATION,
    AFFILIATION,
    AXESS,
    RUNE,
    FUBAR,
    SC_USR,
    ATHLETE,
    SINENG,
    STRIPE_ACC,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Clear oneshot layer after first keypress
    if (record->event.pressed) {
        if (get_oneshot_layer_state() == ONESHOT_PRESSED) {
            clear_oneshot_layer_state(ONESHOT_PRESSED);
        }
    }
    switch (keycode) {
        case SC_EMAIL:
            if (record->event.pressed) {
                SEND_STRING("johansson@Smoothcomp.com");
            } else {
                // when keycode QMKURL is released
            }
            break;

        case PRIVATE_EMAIL:
            if (record->event.pressed) {
                SEND_STRING("richard.johansson.8003@gmail.com");
            } else {
                // when keycode QMKURL is released
            }
            break;

        case AFFILIATION:
            if (record->event.pressed) {
                SEND_STRING("affiliation");
            } else {
                // when keycode QMKURL is released
            }
            break;

        case FEDERATION:
            if (record->event.pressed) {
                SEND_STRING("federation");
            } else {
                // when keycode QMKURL is released
            }
            break;

        case PASSWORD:
            if (record->event.pressed) {
                SEND_STRING("password");
            } else {
                // when keycode QMKURL is releasedLT | QK_LGUI | (kc)
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

        case AXESS:
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
                SEND_STRING("Thank you for your email."); // selects all and copies
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
        case FUBAR:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING(":!ls");
                tap_code(KC_ENTER);
                /* tap_code16(KC_GRV); // Sends "<" */
                /* SEND_STRING("CR"); */
                /* tap_code16(LSFT(KC_GRV));  // Sends ">" */
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case ATHLETE:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("athlete");
            } else {
                // when keycode QMKBEST is released
            }
            break;

        case SINENG:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("translate to sinhala and print the reply with roman letters as well as sinhala script: ");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case STRIPE_ACC:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("4242424242424242" SS_TAP(X_TAB) "0444" SS_TAP(X_TAB) "444");
            } else {
                // when keycode QMKBEST is released
            }
            break;
    }
    return true;

};
