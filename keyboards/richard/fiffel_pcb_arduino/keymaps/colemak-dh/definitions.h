#pragma once

#define       NONE              KC_NO
#define       ZOOM_OUT          LGUI(KC_SLSH)
#define       ZOOM_IN           LGUI(KC_MINS)

// layer0
#define       L1_BSPC           LT(1, KC_BSPC)
#define       L1_SPC            LT(1, KC_SPC)
#define       L2_ESC            LT(2, KC_ESC)
#define       CMD_TAB           LGUI_T(KC_TAB)
#define       CTRL_ENT          RCTL_T(KC_ENT)

// layer1
#define       PIPE              LALT(KC_7)
#define       AT                RALT(KC_2)
#define       AND               LSFT(KC_6)
#define       SLASH             LSA(KC_7)
#define       TILDE             RALT(KC_RBRC)
#define       PLUS              KC_PPLS
#define       BANG              KC_EXLM
#define       QUO               LSFT(KC_2)
#define       HASH              KC_HASH
#define       DOLLAR            RALT(KC_4)
#define       PCENT             LSFT(KC_5)
#define       EQUAL             LSFT(KC_0)
#define       ODD_QUO           KC_PLUS
#define       LESS              KC_GRV
#define       MORE              KC_TILD
#define       HYPH              LSFT(KC_SLSH)
#define       LOW_HYPH          KC_SLSH
#define       TIMES             KC_PIPE,

// layer2
#define       GO_TO_1           LCA(KC_1)
#define       GO_TO_2           LCA(KC_2)
#define       GO_TO_3           LCA(KC_3)
#define       GO_TO_4           LCA(KC_4)
#define       GO_TO_5           LCA(KC_5)
#define       GO_TO_6           LCA(KC_6)
#define       GO_TO_7           LCA(KC_7)
#define       GO_TO_8           LCA(KC_8)
#define       GO_TO_9           LCA(KC_9)

// oneshot layers
#define       MOVE_TO_1         LCA(LSFT(KC_1))
#define       MOVE_TO_2         LCA(LSFT(KC_2))
#define       MOVE_TO_3         LCA(LSFT(KC_3))
#define       MOVE_TO_4         LCA(LSFT(KC_4))
#define       MOVE_TO_5         LCA(LSFT(KC_5))
#define       MOVE_TO_6         LCA(LSFT(KC_6))
#define       MOVE_TO_7         LCA(LSFT(KC_7))
#define       MOVE_TO_8         LCA(LSFT(KC_8))
#define       MOVE_TO_9         LCA(LSFT(KC_9))

#define       CTRL_TAB          LCTL(LSFT(KC_TAB))
#define       CTRL_SFT_TAB      LCTL(KC_TAB)
