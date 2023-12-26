#include QMK_KEYBOARD_H

enum layer_number {
    _DVORAK = 0,
    _QWERTY,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [_DVORAK] = LAYOUT(
      KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
      KC_TAB,   KC_QUOT,   KC_COMM,    KC_DOT,    KC_P,    KC_Y,                     KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
      KC_LCTL,  KC_A,   KC_O,    KC_E,    KC_U,    KC_I,                     KC_D,    KC_H,    KC_T,    KC_N,    KC_S, KC_MINS,
      KC_LSFT,  KC_SCLN,   KC_Q,    KC_J,    KC_K,    KC_X, KC_LBRC,  KC_RBRC,  KC_B,    KC_M,    KC_W, KC_V,  KC_Z,  KC_RSFT,
                            KC_LALT, KC_LGUI, MO(_RAISE), KC_SPC, KC_ENT, MO(_ADJUST), KC_BSPC, KC_RSFT
    ),
    [_QWERTY] = LAYOUT(
      KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
      KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
      KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC, KC_RBRC,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                            KC_LALT, KC_LGUI, MO(_RAISE), KC_SPC, KC_ENT, MO(_ADJUST), KC_BSPC, KC_RSFT
    ),
    [_RAISE] = LAYOUT(
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,
      KC_LCTL, KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX,                     XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_EQL,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_CAPS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,  XXXXXXX, KC_DEL, KC_RSFT
    ),
    [_ADJUST] = LAYOUT(
      TO(_DVORAK), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU,
      TO(_QWERTY), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_BTN1, KC_BTN2, KC_BTN3, KC_MPLY, KC_MSTP,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT,
                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX
      )
};