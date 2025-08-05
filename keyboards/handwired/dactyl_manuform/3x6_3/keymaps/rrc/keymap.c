// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include "keymap_us.h"
#include QMK_KEYBOARD_H

enum {
    LYR_BSE,
    LYR_GAM,
    LYR_SYM,
    LYR_NUM,
    LYR_NAV,
    LYR_FUN,
};

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

    [LYR_BSE] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,         KC_W,         KC_E,         KC_R,                KC_T,                        KC_Y,                KC_U,                 KC_I,         KC_O,         KC_P,            KC_PIPE,
        KC_ESC,  LALT_T(KC_A), RGUI_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F),        KC_G,                        KC_H,                RSFT_T(KC_J),         RCTL_T(KC_K), RGUI_T(KC_L), RALT_T(KC_SCLN), KC_QUOT,
        KC_LSFT, KC_Z,         KC_X,         KC_C,         KC_V,                KC_B,                        KC_N,                KC_M,                 KC_COMM,      KC_DOT,       KC_SLSH,         KC_RSFT,
                                             KC_SPC,       LT(LYR_NAV, KC_TAB), LT(LYR_FUN, KC_ESC),         LT(LYR_SYM, KC_ENT), LT(LYR_NUM, KC_BSPC), KC_ESC
    ),

    [LYR_GAM] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q, KC_W, KC_E,   KC_R,    KC_T,                KC_Y,                KC_U,    KC_I,    KC_O,   KC_P,    KC_PIPE,
        KC_ESC,  KC_A, KC_S, KC_D,   KC_F,    KC_G,                KC_H,                KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C,   KC_V,    KC_B,                KC_N,                KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                             KC_SPC, KC_LCTL, MO(LYR_FUN),         LT(LYR_SYM, KC_ENT), KC_BSPC, KC_ESC
    ),

    [LYR_SYM] = LAYOUT_split_3x6_3(
        KC_TAB,  _______, _______,   KC_LCBR, KC_RCBR, _______,         _______, _______, KC_DQUO,  KC_GRV,  _______, KC_PIPE,
        KC_PIPE, KC_HASH, KC_DOLLAR, KC_LPRN, KC_RPRN, KC_EQL,          KC_TILD, KC_UNDS, KC_MINUS, KC_ASTR, KC_AMPR, KC_GRV,
        KC_LCBR, KC_PERC, KC_CIRC,   KC_LBRC, KC_RBRC, KC_PLUS,         KC_AT,   KC_EXLM, KC_COMM,  KC_QUOT, KC_BSLS, KC_RCBR,
                                     _______, CW_TOGG, _______,         _______, _______, _______
    ),

    [LYR_NUM] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, KC_MINS, KC_PLUS,         _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [LYR_NAV] = LAYOUT_split_3x6_3(
        _______, KC_WH_D, KC_MS_U, KC_WH_U,    _______,    QK_BOOT,         _______,    _______,    _______, _______, _______, QK_BOOT,
        _______, KC_MS_L, KC_MS_D, KC_MS_R,    _______,    KC_DEL,          KC_LEFT,    KC_DOWN,    KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, _______,    KC_BRID,    KC_BRIU,         _______,    _______,    _______, _______, _______, _______,
                                   KC_MS_BTN1, KC_MS_BTN2, _______,         KC_MS_BTN1, KC_MS_BTN2, _______
    ),

    [LYR_FUN] = LAYOUT_split_3x6_3(
        _______, KC_F1, KC_F2,  KC_F3,   KC_F4,   TG(LYR_GAM),         _______, _______, _______, _______, _______, _______,
        _______, KC_F5, KC_F6,  KC_F7,   KC_F8,   _______,             _______, _______, _______, _______, _______, _______,
        _______, KC_F9, KC_F10, KC_F11,  KC_F12,  _______,             _______, _______, _______, _______, _______, _______,
                                _______, _______, _______,             _______, _______, _______
    ),

};

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = true;
    debug_mouse    = true;
}

// Override caps word to not shift - to _
// https://docs.qmk.fm/features/caps_word
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_MINS:
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}

