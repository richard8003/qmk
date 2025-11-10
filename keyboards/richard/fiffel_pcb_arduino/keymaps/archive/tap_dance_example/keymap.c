#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "sendstring_swedish.h"
#include "definitions.c"
// #include "tapdance.c"
// #include "combos.c"

//---------------------------------------------------------------
typedef struct {
  bool is_press_action;
  int state;
} tap;

//Tap dance enums
enum {
    X_CTL = 0,
    SINGLE_TAP = 1,
    SINGLE_HOLD = 2,
    DOUBLE_TAP = 3,
    DOUBLE_HOLD = 4,
    DOUBLE_SINGLE_TAP = 5, //send two single taps
    TRIPLE_TAP = 6,
    TRIPLE_HOLD = 7,
    SOME_OTHER_DANCE,
    TD_ESC_CAPS,
    TD_SLNGSHT,
    TD_SCRSHT,
    CT_CLN,
    TD_PARENT,
};

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
};

int cur_dance (tap_dance_state_t *state);
//for the x tap dance. Put it here so it can be used in any keymap
void x_finished (tap_dance_state_t *state, void *user_data);
void x_reset (tap_dance_state_t *state, void *user_data);
//---------------------------------------------------------------


void dance_cln_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_LGUI);
        register_code(KC_C);
    } else {
        register_code(KC_C);
    }
}

void dance_cln_reset(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code(KC_LGUI);
        unregister_code(KC_C);
    } else {
        unregister_code(KC_C);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

    case PASSWORD:
        if (record->event.pressed) {
           SEND_STRING("password");
        } else {
            // when keycode QMKURL is released
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
/* +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   | FLAME |   Q   |   W   |   F   |   P   |   G   |   |   J   |   L   |   U   |   Y   |   Ö   |   Å   |
   +-(LT2)-+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |  ESC  |   A   |   R   |   S   |   T   |   D   |   |   H   |   N   |   E   |   I   |   O   |   Ä   |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   | SRC_P |   Z   |   X   |   C   |   V   |   B   |   |   K   |   M   |   ,   |   .   |   /   |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                           | (LT3) | (LT1) | (LGUI)|   | (RCTL)| (LT1) | (LALT)|
                           |  ESC  |  BSPC |  TAB  |   |RETURN | SPACE |       |
                           +-------+-------+-------+   +-------+-------+-------*/

  //----------------------------------------------      ---------------------------------------------------
  NONE,  KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,    KC_J,  KC_L,  KC_U,     KC_Y,    KC_SCLN,  KC_LBRC,
  // TD(TD_SLNGSHT),  KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,    KC_J,  KC_L,  KC_U,     KC_Y,    KC_SCLN,  KC_LBRC,
  //----------------------------------------------      ---------------------------------------------------
  LT(2, KC_CAPS),  KC_A,  KC_R,  KC_S,  KC_T,  KC_D,    KC_H,  KC_N,  KC_E,     KC_I,    KC_O,     KC_QUOT,
  //----------------------------------------------      --------------------------------------------------
  // MT(MOD_LSFT, KC_ESC),   KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,    KC_K,  KC_M,  KC_COMM,  KC_DOT,  KC_PSLS,  NONE,
  TD(X_CTL),   KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,    KC_K,  KC_M,  KC_COMM,  KC_DOT,  KC_PSLS,  NONE,
  //----------------------------------------------      -----------------------------------------------
  LT(3,KC_ESC), LT(1, KC_BSPC),  LGUI_T(KC_TAB),    RCTL_T(KC_ENT), LT(1, KC_SPC),  LALT_T(KC_ESC)),
  //------------------------------------------------    ---------------------------

//****************************************************************************************************

	[1] = LAYOUT_split_3x6_3(
/* +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |   |   |   @   |   &   |   \   |   ~   |   |   +   |   7   |   8   |   9   |       |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |   !   |   "   |   #   |   $   |   %   |   |   =   |   4   |   5   |   6   |       |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |   `   |   <   |   >   |   _   |   -   |   |   *   |   1   |   2   |   3   |       |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                           |       |      |      |   |      |      |   0   |
                           +-------+-------+-------+   +-------+-------+-------*/

  //-----------------------------------------------------------------------    -----------------------------------------
  NONE,  LALT(KC_7),  RALT(KC_2),  LSFT(KC_6),  LSA(KC_7),   RALT(KC_RBRC),    KC_PPLS,  KC_7,  KC_8,  KC_9,  NONE,  NONE,
  //-----------------------------------------------------------------------    -----------------------------------------
  NONE,  KC_EXLM,     LSFT(KC_2),  KC_HASH,     RALT(KC_4),  LSFT(KC_5),       KC_PEQL,  KC_4,  KC_5,  KC_6,  NONE,  NONE,
  //------------------------------------------------   --------------------    --------------------
  NONE,  KC_PLUS,     KC_GRV,      KC_TILD,     KC_SLSH,     LSFT(KC_SLSH),    KC_PIPE,  KC_1,  KC_2,  KC_3,  NONE,  NONE,
  //------------------------------------------------   --------------------    --------------------
                          NONE,   KC_LEFT,  KC_RGHT,   KC_DOWN,  KC_UP,  KC_0),
                          //------------------------   ------------------------

//****************************************************************************************************

	[2] = LAYOUT_split_3x6_3(
/* +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |       |       |       |       |       |   |       |       |       |       |       |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |       |       |       |       |       |   |       |       |       |       |       |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |       |       |       |       |       |   |       |       |       |       |       |       |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                           | RESET |       |       |   |       |       |       |
                           +-------+-------+-------+   +-------+-------+-------*/


          //----------------------------------------   ----------------------------------------
            NONE,  NONE,  NONE,  NONE,  NONE,  NONE,   NONE,  NONE,  NONE,  NONE,  NONE,  NONE,
          //----------------------------------------   ----------------------------------------
            NONE,  NONE,  NONE,  NONE,  NONE,  NONE,   NONE,  NONE,  NONE,  NONE,  NONE,  NONE,
          //----------------------------------------   ----------------------------------------
            NONE,  NONE,  NONE,  NONE,  NONE,  NONE,   NONE,  NONE,  NONE,  NONE,  NONE,  NONE,
          //----------------------------------------   ----------------------------------------
                              QK_BOOT,  NONE,  NONE,   NONE,  NONE,  NONE),
                              //--------------------   --------------------

//****************************************************************************************************

	[3] = LAYOUT_split_3x6_3(
/* +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |  L4   |       | desk1 | desk2 | desk3 |       |   |      |      |      |y:float|      |      |
   +-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
   |       |spotify| term  |chrome |discord|       |   |      |      |      |      |y:f.scr|       |
   +-------+-----------+-----------+-----------+----   ----+-----------+-------+-------+-------+-------+
   |       |   󰒮   |   󰝞   |   󰐎   |   󰝝   |   󰒭   |   |      |m:scr1 |m:scr2 |m:scr3 |       |       |
   +-------+-----------+-----------+-------+-------+   +---------------+-------+-------+-------+-------+
                           |       |       |       |   |   L4  |       |  L4   |
                           +-----------+-----------+   +-------+-------+-------*/

   //------------------------------------------------------------   ----------------------------------------------------------------------------------------
   L4,     NONE,       DESK1,    DESK2,     DESK3,    NONE,         UPP,   RIGHT,            YABAI_NAV_UP,      YABAI_FLOAT,       ZOOM_OUT,        ZOOM_IN,
   //------------------------------------------------------------   -----------------------------------------------
   NONE,   SPOTIFY,    TERMINAL, CHROME,    DISCORD,  CMD_K,        LEFT,  YABAI_NAV_LEFT,   YABAI_NAV_DOWN,    YABAI_NAV_RIGHT,   YABAI_FULL_SRC,  NONE,
   //------------------------------------------------------------   ----------------------------------------------------------------------------------------
   NONE,   PREV_TRACK, VOL_DOWN, PLAY_PAUS, VOL_UP,   NEXT_TRACK,   DOWN,  YABAI_MOVE_SRC1,  YABAI_MOVE_SRC2,    YABAI_MOVE_SRC3,  NONE,            NONE,
   //------------------------------------------------------------   ---------------------------                ------------------------------------------------
                        NONE, BROWS_TAB,    BROWS_SHIFT_TAB,        L4,    YABAI_LAYOUT,     L4),
                      //---------------------------------------   ---------------------------

	[4] = LAYOUT_split_3x6_3(
        NONE, NONE, NONE, NONE, NONE, NONE,         NONE, NONE,           YABAI_MOV_UP,   NONE,            NONE, NONE,
        NONE, NONE, NONE, NONE, NONE, NONE,         NONE, YABAI_MOV_LEFT, YABAI_MOV_DOWN, YABAI_MOV_RIGHT, NONE, NONE,
        NONE, NONE, NONE, NONE, NONE, NONE,         NONE, NONE,           NONE,           NONE,            NONE, NONE,
                          NONE, NONE, NONE,         NONE, NONE, NONE),


};



// SPECIAL CHARACTERS
const uint16_t PROGMEM single_quote[] = {KC_U, KC_N, COMBO_END};
const uint16_t PROGMEM quote[] = {KC_H, KC_L, COMBO_END};
const uint16_t PROGMEM question_mark[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM bang[] = {KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM hyphen[] = {KC_T, KC_PSLS, COMBO_END};
const uint16_t PROGMEM lowhyphen[] = {KC_N, KC_V, COMBO_END};

/* () [] {} */
const uint16_t PROGMEM opening_parent[] = {KC_T, KC_L, COMBO_END};
const uint16_t PROGMEM closing_parent[] = {KC_T, KC_U, COMBO_END};
const uint16_t PROGMEM opening_bracket[] = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM closing_bracket[] = {KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM opening_curly[] = {KC_T, KC_M, COMBO_END};
const uint16_t PROGMEM closing_curly[] = {KC_T, KC_COMM, COMBO_END};

// // F3
// const uint16_t PROGMEM ff[] = {KC_S, KC_V, COMBO_END};

// cut, copy & paste
const uint16_t PROGMEM cut[] = {KC_P, KC_G, COMBO_END};
const uint16_t PROGMEM copy[] = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM paste[] = {KC_V, KC_B, COMBO_END};

// layer 3
const uint16_t PROGMEM layer3_left[] = {KC_R, KC_S, COMBO_END};

// delete a whole word
const uint16_t PROGMEM delete_word_back[] = {KC_T, KC_S, KC_R, COMBO_END};

// delete a whole line
const uint16_t PROGMEM delete_line[] = {KC_A, KC_R, KC_S, COMBO_END};

// jump one word back
const uint16_t PROGMEM jump_one_word_back[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM jump_one_word_forward[] = {KC_COMM, KC_DOT, COMBO_END};

// select all (cmd+a)
const uint16_t PROGMEM select_all[] = {KC_W, KC_F, KC_P, COMBO_END};

// tmux ctrl+a
const uint16_t PROGMEM ctrl_a[] = {KC_L, KC_U, KC_Y, COMBO_END};

// esc
const uint16_t PROGMEM ie_esc[] = {KC_I, KC_E, COMBO_END};

// shift
const uint16_t PROGMEM left_shift[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM right_shift[] = {KC_N, KC_E, COMBO_END};

// fzf
const uint16_t PROGMEM fzf[] = {KC_D, KC_H, COMBO_END};


// text string macros
const uint16_t PROGMEM tfe[] = {KC_T, KC_F, KC_E, COMBO_END};
const uint16_t PROGMEM private_email[] = {KC_ESC, KC_A, COMBO_END};
const uint16_t PROGMEM sc_email[] = {KC_F3, KC_Q, COMBO_END};
const uint16_t PROGMEM organiser[] = {KC_O, KC_R, KC_G, COMBO_END};
const uint16_t PROGMEM smoothcomp[] = {KC_S, KC_M, KC_O, COMBO_END};
const uint16_t PROGMEM richard[] = {KC_R, KC_H, COMBO_END};
const uint16_t PROGMEM email_address[] = {KC_E, KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM associated[] = {KC_A, KC_O, KC_S, COMBO_END};
const uint16_t PROGMEM please[] = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM password[] = {KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM haveaniceday[] = {KC_N, KC_I, KC_E, COMBO_END};
const uint16_t PROGMEM account[] = {KC_A, KC_C, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM user[] = {KC_U, KC_S, KC_R, COMBO_END};
const uint16_t PROGMEM access[] = {KC_A, KC_C, KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM registr[] = {KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM registration[] = {KC_R, KC_N, COMBO_END};
const uint16_t PROGMEM event[] = {KC_E, KC_V, COMBO_END};
const uint16_t PROGMEM academy[] = {KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM question[] = {KC_Q, KC_N, COMBO_END};
const uint16_t PROGMEM page[] = {KC_P, KC_E, COMBO_END};
const uint16_t PROGMEM change[] = {KC_C, KC_E, COMBO_END};

const uint16_t PROGMEM f3_flameshot_tapdance[] = {KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM fubar[] = {KC_T, KC_B, COMBO_END};



combo_t key_combos[] = {

    COMBO(f3_flameshot_tapdance, FLAMESHOT),
    COMBO(fubar, TD(X_CTL)),

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
    COMBO(layer3_left, LT(3,KC_NO)),

    // delete one word
    COMBO(delete_word_back, LALT(KC_BSPC)),

    // jumb by word
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
    COMBO(access, ACCESS),
    COMBO(question, QUESTION),
    COMBO(richard, RICHARD),
    COMBO(page, PAGE),
    COMBO(change, CHANGE),
    COMBO(password, PASSWORD),
};








/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
int cur_dance (tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->interrupted || !state->pressed)  return SINGLE_TAP;
    //key has not been interrupted, but they key is still held. Means you want to send a 'HOLD'.
    else return SINGLE_HOLD;
  }
  else if (state->count == 2) {
    /*
     * DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
     * action when hitting 'pp'. Suggested use case for this return value is when you want to send two
     * keystrokes of the key, and not the 'double tap' action/macro.
    */
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  }
  //Assumes no one is trying to type the same letter three times (at least not quickly).
  //If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
  //an exception here to return a 'TRIPLE_SINGLE_TAP', and define that enum just like 'DOUBLE_SINGLE_TAP'
  if (state->count == 3) {
    if (state->interrupted || !state->pressed)  return TRIPLE_TAP;
    else return TRIPLE_HOLD;
  }
  else return 8; //magic number. At some point this method will expand to work for more presses
}

//instanalize an instance of 'tap' for the 'x' tap dance.
static tap xtap_state = {
  .is_press_action = true,
  .state = 0
};

// cmd+c
#define COPY (MOD_LGUI | (KC_C))
#define FU (MOD_LGUI | (KC_V))

void x_finished (tap_dance_state_t *state, void *user_data) {
  xtap_state.state = cur_dance(state);

  switch (xtap_state.state) {
    // case SINGLE_TAP: register_mods(COPY); break;
    case SINGLE_TAP: register_mods(COPY); break;
    case SINGLE_HOLD: register_code(KC_ESC); break;
    case DOUBLE_TAP: register_mods(FU); break;
    case DOUBLE_HOLD: register_code(KC_J); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_X); unregister_code(KC_X); register_code(KC_X);
    //Last case is for fast typing. Assuming your key is `f`:
    //For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
    //In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
  }
}

void x_reset (tap_dance_state_t *state, void *user_data) {
  switch (xtap_state.state) {
    // case SINGLE_TAP: unregister_mods(COPY); break;
    case SINGLE_TAP: unregister_mods(COPY); break;
    case SINGLE_HOLD: unregister_code(KC_ESC); break;
    case DOUBLE_TAP: unregister_mods(FU); break;
    case DOUBLE_HOLD: unregister_code(KC_J);
    case DOUBLE_SINGLE_TAP: unregister_code(KC_X);


  }
  xtap_state.state = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [X_CTL]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL,x_finished, x_reset),
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
    [TD_SLNGSHT]  = ACTION_TAP_DANCE_DOUBLE(KC_F3, SGUI(KC_X)),
    [TD_PARENT]  = ACTION_TAP_DANCE_DOUBLE(KC_Y, LSFT(KC_9)),
    [TD_SCRSHT]   = ACTION_TAP_DANCE_DOUBLE(KC_Q, SGUI(KC_4)),
    [CT_CLN]      = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_cln_finished, dance_cln_reset),
};



