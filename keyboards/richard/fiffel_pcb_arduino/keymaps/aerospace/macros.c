
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
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {


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
    }

    return true;
};
