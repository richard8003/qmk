void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_F)) {
        // Leader, f => Types the below string
        SEND_STRING("QMK is awesome.");

    } else if (leader_sequence_two_keys(KC_D, KC_D)) {
        // Leader, d, d => Ctrl+A, Ctrl+C
        SEND_STRING(SS_LCTL("a") SS_LCTL("c"));

    } else if (leader_sequence_two_keys(KC_S, KC_P)) {
        // Leader, d, d => Ctrl+A, Ctrl+C
        SEND_STRING("Translate this reply to sinhala in a casual way like people talk in everyday life. Also just print the sentance in sinhala script and roman letters, without any additional information or explanation: ");

    } else if (leader_sequence_three_keys(KC_H, KC_N, KC_D)) {
        // Leader, d, d, s => Types the below string
        SEND_STRING("Have a nice day!");

    } else if (leader_sequence_two_keys(KC_A, KC_S)) {
        // Leader, a, s => GUI+S
        tap_code16(LGUI(KC_S));

    }
}

