#pragma once
#include QMK_KEYBOARD_H

#define ___x___ KC_NO

//Windows Left
#define WOS_A    LGUI_T(KC_A) 
#define WOS_R    LSFT_T(KC_R)
#define WOS_S    LCTL_T(KC_S)
#define WOS_T    LALT_T(KC_T)
//Windows Right
#define WOS_N    RALT_T(KC_N)
#define WOS_E    RCTL_T(KC_E) 
#define WOS_I    RSFT_T(KC_I)
#define WOS_O    RGUI_T(KC_O)
// MacOS Left
#define MOS_A    LALT_T(KC_A)
#define MOS_R    LSFT_T(KC_R)
#define MOS_S    LGUI_T(KC_S)
#define MOS_T    LCTL_T(KC_T)
//MacOs Right
#define MOS_N    RCTL_T(KC_N)
#define MOS_E    RGUI_T(KC_E) 
#define MOS_I    RSFT_T(KC_I)
#define MOS_O    RALT_T(KC_O)