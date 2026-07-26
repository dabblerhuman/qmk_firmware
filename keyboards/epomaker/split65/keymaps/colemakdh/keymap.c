// Copyright 2025 EPOMAKER (@Epomaker)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"
#include "../keymap_alias.h"

enum layers {
    _WOS = 0,
    _NAV_WOS,
    _FUNC_WOS,
    _MOS,
    _FUNC_MOS,
    _NAV_MOS,
    _EPOMKR,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_WOS] = LAYOUT( /* Windows */
        QK_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,               KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS, KC_DEL,
        KC_CAPS,  WOS_A,    WOS_R,    WOS_S,    WOS_T,    KC_G,               KC_M,     WOS_N,    WOS_E,    WOS_I,    WOS_O,    KC_QUOT,  KC_ENT,            KC_PGUP,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,               KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,   KC_PGDN,
        KC_LCTL,  KC_LCMD,  KC_LALT,  KC_SPC,                                 TO(_NAV_WOS),   KC_RALT,  MO(_FUNC_WOS),  KC_RCTL,          KC_LEFT,  KC_DOWN, KC_RGHT),
        
    [_NAV_WOS] = LAYOUT( 
        KC_ESC,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,           ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,   ___x___, ___x___,
        ___x___,  ___x___,  KC_HOME,  KC_END,  ___x___,  ___x___,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,   ___x___, ___x___,
        ___x___,  KC_RGHT,  KC_UP,  KC_DOWN,  KC_LEFT,  ___x___,          ___x___,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_LCMD,  ___x___,  ___x___,           ___x___,
        KC_LSFT,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,            KC_RSFT,   ___x___, ___x___,
        KC_LCTL,  KC_LCMD,  KC_LALT, TO(_WOS),                              ___x___,  KC_RALT,  ___x___,            KC_RCTL,             ___x___,  ___x___, ___x___),

    [_FUNC_WOS] = LAYOUT( 
        ___x___,  KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,         ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,
        ___x___,  KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,         ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  TO(_MOS),
        ___x___,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,         ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,            ___x___,
        ___x___,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,            ___x___,  ___x___,  ___x___,
        ___x___,  ___x___,  ___x___,  ___x___,                            ___x___,  ___x___,  ___x___,  ___x___,                      ___x___,  ___x___,  ___x___),

    [_MOS] = LAYOUT(/* MacOs Layer */ 
        QK_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,               KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS, KC_DEL,
        KC_CAPS,  MOS_A,     MOS_R,     MOS_S,     MOS_T,     KC_G,               KC_M,     MOS_N,     MOS_E,     MOS_I,     MOS_O,     KC_QUOT,  KC_ENT,            KC_PGUP,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,               KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,   KC_PGDN,
        KC_LGUI,  KC_LALT,  KC_LCTL,  KC_SPC,                                 TO(_NAV_MOS),   KC_LCTL,  MO(_FUNC_MOS),      KC_RGUI,            KC_LEFT,  KC_DOWN, KC_RGHT),

    [_NAV_MOS] = LAYOUT( 
        KC_ESC,   ___x___,  ___x___,  ___x___,  ___x___,  ___x___,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___, ___x___,
        ___x___,  ___x___,  KC_HOME,  KC_END,  ___x___,  ___x___,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___, ___x___,
        ___x___,  KC_LEFT,  KC_UP,  KC_DOWN,  KC_RGHT,  ___x___,            ___x___,  KC_LCTL,  KC_LGUI,  KC_LSFT,  KC_LALT,  ___x___,  ___x___,           TO(_WOS),
        KC_LSFT,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,           KC_RSFT,  ___x___, ___x___,
        KC_LGUI,  KC_LALT,  KC_LCTL,  TO(_MOS),                             ___x___, KC_LCTL,  ___x___,          KC_RGUI,                 ___x___, ___x___, ___x___),

    [_FUNC_MOS] = LAYOUT(
        ___x___,  KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,         ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,
        ___x___,  KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,         ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,
        ___x___,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,         ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,            ___x___,
        ___x___,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,          ___x___,  ___x___,  ___x___,  ___x___,  ___x___,            ___x___,  ___x___,  ___x___,
        ___x___,  ___x___,  ___x___,  ___x___,                            ___x___,  ___x___,  ___x___,  ___x___,                      ___x___,  ___x___,  ___x___),

    [_EPOMKR] = LAYOUT(
        ___x___,   ___x___,  ___x___,  ___x___,  ___x___,  ___x___,           ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  ___x___,
        RM_NEXT,  KC_BT1,    KC_BT2,   KC_BT3,   KC_2G4,   ___x___,           ___x___,  ___x___,  ___x___,  ___x___,  ___x___,  RM_HUED,  RM_HUEU,  ___x___,  ___x___,
        ___x___,  ___x___,   ___x___,  ___x___,  ___x___,  ___x___,           ___x___,  ___x___,  ___x___,  ___x___,  RM_SATD,  RM_SATU,  ___x___,            ___x___,
        ___x___,  ___x___,   RM_TOGG,  ___x___,  ___x___,  HS_BATQ,           NK_TOGG,  ___x___,  ___x___,  ___x___,  ___x___,            ___x___,  RM_VALU,  ___x___,
        KC_FILP,  ___x___,   ___x___,  KC_BATQ,                               ___x___,  ___x___,  ___x___,  ___x___,                      RM_SPDD,  RM_VALD,  RM_SPDU),

};


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif
// clang-format on

bool is_keyboard_master(void) {
    gpio_set_pin_input(SPLIT_HAND_PIN);
    return gpio_read_pin(SPLIT_HAND_PIN);
}
