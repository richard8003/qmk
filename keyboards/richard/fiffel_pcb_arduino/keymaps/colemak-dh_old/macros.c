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
    REGISTR,
    REGISTRATION,
    EVENT,
    ACADEMY,
    QUESTION,
    PAGE,
    CHANGE,
    PASSWORD,
    FEDERATION,
    AFFILIATION,
    AXESS,
    RUNE,
    FUBAR,
    SC_USR,
    MOVED_FROM,
    ADMIN,
    SCREENSHOT,
    YOUTUBE,
    MYREPLY,
    SINTOENG,
    ATHLETE,
    THE
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
    case MOVED_FROM:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Moved from ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case ADMIN:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("admin");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case SCREENSHOT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("screenshot");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case YOUTUBE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("YouTube");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case MYREPLY:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Translate this reply to sinhala in a casual way like people talk in everyday life. Also just print the sentance in sinhala script and roman letters, without any additional information or explanation: ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case SINTOENG:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Translate to sinhala using roman letters: ");
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
    case THE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("the");
        } else {
            // when keycode QMKBEST is released
        }
        break;


    }
    return true;

};
