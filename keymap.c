#include QMK_KEYBOARD_H

// tap dance definitions
enum {
    TD_COMMA = 0,
    TD_DOT,
    TD_SLASH,
    TD_SCOLON,
    TD_QUOTE,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_COMMA] = ACTION_TAP_DANCE_DOUBLE(KC_COMMA, KC_KP_DOT),
    [TD_DOT] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, LSFT(KC_DOT)),
    [TD_SLASH] = ACTION_TAP_DANCE_DOUBLE(KC_SLASH, KC_SLASH),
    [TD_SCOLON] = ACTION_TAP_DANCE_DOUBLE(KC_SCOLON, LSFT(KC_SCOLON)),
    [TD_QUOTE] = ACTION_TAP_DANCE_DOUBLE(KC_QUOTE, LSFT(KC_QUOTE)),
};

// keymap layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // layer 0
    [0] = LAYOUT(
        KC_ESCAPE, KC_Q, KC_W, KC_E, KC_R, KC_T, 
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, 
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, 
        KC_NO, KC_NO, KC_NO, KC_LALT, KC_LCTRL, MO(2), 
        KC_BSPACE, KC_P, KC_O, KC_I, KC_U, KC_Y, 
        KC_QUOTE, KC_SCOLON, KC_L, KC_K, KC_J, KC_H, 
        KC_ENTER, KC_SLASH, TD(TD_COMMA), KC_COMMA, KC_M, KC_N, 
        KC_NO, KC_NO, KC_NO, KC_LGUI, KC_RSHIFT, LT(1, KC_SPACE)
    ),
    // layer 1
    [1] = LAYOUT(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, 
        KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, 
        KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCREEN, 
        KC_HOME, KC_NO, KC_PGUP, KC_NO, KC_VOLU, KC_VOLD, 
        KC_NO, LCTL(KC_LSHIFT), KC_RIGHT, KC_UP, KC_DOWN, KC_LEFT, 
        KC_END, LCTL(KC_LALT), KC_PGDOWN, KC_NO, KC_BRIU, KC_BRID, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO
    ),
    // layer 2
    [2] = LAYOUT(
        KC_TAB, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), 
        KC_LCTRL, KC_1, KC_2, KC_3, KC_4, KC_5, 
        KC_LSHIFT, KC_6, KC_7, KC_8, KC_9, KC_0, 
        KC_NO, KC_NO, KC_NO, KC_LGUI, KC_TRNS, KC_SPACE, 
        KC_BSPACE, LSFT(KC_0), LSFT(KC_9), LSFT(KC_8), LSFT(KC_7), LSFT(KC_6), 
        LSFT(KC_BSLASH), KC_BSLASH, KC_RBRACKET, KC_LBRACKET, KC_MINUS, LSFT(KC_GRAVE), 
        LSFT(KC_EQUAL), KC_EQUAL, LSFT(KC_RBRACKET), LSFT(KC_LBRACKET), LSFT(KC_MINUS), KC_GRAVE, 
        KC_NO, KC_NO, KC_NO, KC_RALT, KC_TRNS, KC_ENTER
    )
};
