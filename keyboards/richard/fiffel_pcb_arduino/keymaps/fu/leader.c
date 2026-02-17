void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_F)) {
        // Leader, f => Types the below string
        SEND_STRING("QMK is awesome.");

    } else if (leader_sequence_two_keys(KC_T, KC_E)) {
        // Leader, d, d => Ctrl+A, Ctrl+C
        SEND_STRING("Translate to English: ");

    } else if (leader_sequence_three_keys(KC_L, KC_T, KC_E)) {
        // Leader, d, d => Ctrl+A, Ctrl+C
        SEND_STRING("Please send me the (URL) link to the event in question. ");

    } else if (leader_sequence_three_keys(KC_U, KC_N, KC_D)) {
        // Leader, d, d => Ctrl+A, Ctrl+C
        SEND_STRING("I'm not sure I understand.");

    } else if (leader_sequence_two_keys(KC_P, KC_L)) {
        SEND_STRING("Please send me the email address associated with your Smoothcomp user account.");

    } else if (leader_sequence_two_keys(KC_T, KC_F)) {
        // Leader, d, d, s => Types the below string
        SEND_STRING("Hi!\nThank you for your email.\n");

    } else if (leader_sequence_one_key(KC_G)) {
        // Leader, a, s => GUI+S
        tap_code16(LGUI(KC_M));
    } else if (leader_sequence_two_keys(KC_N, KC_Q)) {
        // Hi!\nThank you for your email.\n\nPlease provide as much information about your current account as you can. Information such as:\n- Date of birth\n- Home adress\n- Phone number\n- Academy membership\n- Are there any shared profiles on your account\n\nAlso include a photo of some kind of ID (passport and driver's license being the more common ones) so that we may confirm you.\nIf you have not already provided information about the current email address and which email address you would like to switch to, please do so.\n
        SEND_STRING("Hi!\nThank you for your email.\n\nPlease provide as much information about your current account as you can. Information such as:\n- Date of birth\nHome adress\nPhone number\nAcademy membership\nAre there any shared profiles on your account\n\n\nAlso include a photo of some kind of ID (passport and driver's license being the more common ones) so that we may confirm you.\nIf you have not already provided information about the current email address and which email address you would like to switch to, please do so.\n");
    }
}
