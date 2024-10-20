// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */

    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,            KC_E,            KC_R,             KC_T,                   KC_Y,         KC_U,          KC_I,          KC_O,         KC_P,    KC_PIPE,
        KC_ESC,  KC_A,    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),     KC_G,                   KC_H,         RSFT_T(KC_J),  RCTL_T(KC_K),  RALT_T(KC_L), KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,            KC_C,            KC_V,             LGUI_T(KC_B),           RGUI_T(KC_N), KC_M,          KC_COMM,       KC_DOT,       KC_SLSH, KC_RSFT,
                                           KC_TAB,          KC_SPC,           KC_LGUI,                KC_BSPC,      LT(1, KC_ENT), KC_RALT
    ),

    // Symbols/Numbers
    [1] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_1,    KC_2,            KC_3,            KC_4,             KC_5,                   KC_6,         KC_7,         KC_8,          KC_9,         KC_0,    KC_PIPE,
        KC_PIPE, KC_HASH, KC_DOLLAR,       KC_LPRN,         KC_RPRN,          KC_EQL,                 KC_TILD,      KC_UNDS,      KC_MINUS,      KC_ASTR,      KC_AMPR, KC_GRV,
        KC_LCBR, KC_PERC, KC_CIRC,         KC_LBRC,         KC_RBRC,          KC_PLUS,                KC_AT,        KC_EXLM,      KC_COMM,       KC_DOT,       KC_BSLS, KC_RCBR,
                                           KC_TAB,          KC_SPC,           KC_LGUI,                KC_BSPC,      KC_ENT,       KC_RALT
    ),

};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
}
