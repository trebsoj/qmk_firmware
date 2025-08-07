/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/*
    ======================================================================================================================
        DOBLE TOC A UNA TECLA
    ======================================================================================================================
*/
enum {
    TD_CAPS_PRINT,
    TD_WIN_FULL
};
tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPS_PRINT] = ACTION_TAP_DANCE_DOUBLE(KC_CAPS, KC_PSCR),
    [TD_WIN_FULL] = ACTION_TAP_DANCE_DOUBLE(LGUI(KC_UP), LGUI(KC_PGUP))
};



/*
    ======================================================================================================================
        COMBOS
    ======================================================================================================================
*/
const uint16_t PROGMEM combo_lock [] = {LT(12,KC_Z), KC_X, COMBO_END};
//const uint16_t PROGMEM combo_copy[] = {LCTL(KC_C),  LCTL(KC_V), COMBO_END};
// COMBO_COUNT configurat en el fitxer config.h
combo_t key_combos[] = {
  COMBO(combo_lock, LGUI(KC_L)),
//  COMBO(combo_copy, LGUI(KC_V)),
}; 



/*
    ======================================================================================================================
        DEFINICIO CAPES TECLAT
    ======================================================================================================================
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_planck_mit(
    KC_ESC,         KC_Q,       LT(11,KC_W),     KC_E,   KC_R,  KC_T,        KC_Y,   KC_U,   KC_I,     KC_O,    KC_P,     KC_BSPC,
    KC_TAB,         KC_A,       KC_S,     KC_D,   KC_F,  KC_G,        KC_H,   KC_J,   KC_K,     KC_L,    KC_SCLN,  KC_ENT,
    KC_LSFT,        LT(12,KC_Z),       KC_X,     KC_C,   LT(5,KC_V),  KC_B,        KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_MINS,  KC_DEL,
    LCTL_T(KC_GRV), KC_LGUI,    KC_LALT,  MO(2),  MO(4), LT(6,KC_SPC),        MO(1),  MO(8),    KC_RALT, TD(TD_CAPS_PRINT),  LT(10,KC_QUOT)
),
/* SIMBOLS */
[1] = LAYOUT_planck_mit(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,     KC_PERC, KC_AMPR,   KC_LPRN, KC_RPRN, KC_QUES,       KC_PPLS, KC_TRNS,
    KC_TRNS, KC_EQL,  KC_NO,   MO(4),   RALT(KC_5), KC_CIRC, KC_PIPE,   KC_LCBR, KC_RCBR, RALT(KC_SLSH), KC_PMNS,  KC_TRNS,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_QUES,    KC_BSLS, KC_SLSH,   KC_LBRC, KC_RBRC, KC_NO,       KC_NO,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   MO(4),      KC_TRNS,            KC_TRNS, LALT(KC_C), KC_NO,         KC_NO,  KC_NO
),
/* CALC */
[2] = LAYOUT_planck_mit(
    KC_NUM, KC_NO,      KC_NO,         KC_NO,      KC_NO,        KC_NO, KC_PERC,     KC_P7,    KC_P8,    KC_P9,    KC_PPLS, KC_TRNS,
    KC_TRNS, LCTL(KC_A),      KC_NO,         KC_NO,      KC_NO,        KC_NO,      KC_CIRC,     KC_P4,    KC_P5,    KC_P6,    KC_PMNS, LALT(KC_ENT),
    KC_TRNS, KC_NO,      KC_NO,         LCA(KC_C),      LCA(KC_V),        KC_NO,      KC_PCMM,     KC_P1,    KC_P2,    KC_P3,    KC_PAST, KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS,       KC_TRNS,    MO(4),        KC_TRNS,                 KC_P0,    KC_PDOT,  KC_COMM,  KC_PSLS, KC_EQL
),
/* RGB */
[3] = LAYOUT_planck_mit(
    RGB_TOG,  KC_NO,    KC_NO,   KC_NO,   KC_NO,   QK_BOOT,   DB_TOGG,   KC_NO,   RGB_SAI,  RGB_SAD, RGB_SPI, RGB_SPD,
    RGB_M_P,  RGB_M_B,  RGB_M_R, BL_TOGG, KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_VAI,  RGB_VAD, KC_NO,   KC_NO,
    RGB_M_SW, RGB_M_SN, RGB_M_K, BL_STEP, KC_NO,   KC_BRIU, KC_BRID, KC_NO,   RGB_HUI,  RGB_HUD, BL_UP,  BL_DOWN,
    RGB_M_X,  RGB_M_G,  RGB_M_T, BL_BRTG, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, RGB_RMOD, BL_ON,   BL_OFF
),
/* DIRECCIO */
[4] = LAYOUT_planck_mit(
    KC_TRNS, HYPR(KC_P1),   LCTL(KC_A),      LCTL(KC_Z),  LCTL(KC_Y),    KC_NO,   KC_NO,        KC_HOME,     KC_UP,   KC_END,  KC_NO,   KC_TRNS,
    KC_TRNS, LSFT(KC_LCTL), LCTL(KC_S), LCTL(KC_D),  KC_NO, MO(7),        LSFT(KC_TAB), KC_LEFT,     KC_DOWN, KC_RGHT, KC_TAB,  KC_TRNS,
    KC_TRNS, KC_LCTL,       LCTL(KC_X), LCTL(KC_C),  LCTL(KC_V),  LCTL(KC_F),  LCTL(KC_PSLS),LCTL(KC_F2), KC_LGUI, LCTL(KC_F3), KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,       KC_TRNS,    MO(14),     KC_NO,       KC_TRNS,                    MO(15),      KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
),
[5] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_MSTP,     KC_VOLU, KC_MPLY, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_MPRV,     KC_VOLD, KC_MNXT, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,       KC_MUTE, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, LGUI(KC_F1), KC_NO,   KC_NO,   KC_NO
),
/* Functions */
[6] = LAYOUT_planck_mit(
    KC_TRNS, KC_F1,      KC_F2,       KC_F3,       KC_F4,       KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_TRNS,
    KC_TRNS, KC_F11,     KC_F12,      MEH(KC_F1),  MEH(KC_F2),  MEH(KC_F3), MEH(KC_F4), MEH(KC_F5), MEH(KC_F6), MEH(KC_F7), MEH(KC_F8), KC_TRNS,
    KC_TRNS, MEH(KC_F9), MEH(KC_F10), MEH(KC_F11), MEH(KC_F12), KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,       KC_TRNS,                KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO
),
[7] = LAYOUT_planck_mit(
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, LCTL(KC_HOME), KC_PGUP, LCTL(KC_END),  KC_NO, KC_TRNS,
    KC_TRNS, KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_NO,   KC_NO, LCTL(KC_PGUP), KC_PGDN, LCTL(KC_PGDN), KC_NO, KC_TRNS,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_NO, KC_NO,         KC_NO,   KC_NO,         KC_NO, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_NO,         KC_NO,   KC_NO,         KC_NO, KC_NO
),
[8] = LAYOUT_planck_mit(
    KC_TRNS,  HYPR(KC_P1),      HYPR(KC_P2),      HYPR(KC_P3),      HYPR(KC_P4), HYPR(KC_P5), KC_NO,      KC_NO,      KC_NO,   KC_NO, LCTL(KC_F4), LALT(KC_F4),
    KC_TRNS,  HYPR(KC_P6), HYPR(KC_P7), HYPR(KC_P8), HYPR(KC_P8), HYPR(KC_P0), KC_NO, KC_NO,      KC_NO,  KC_NO, KC_NO,       KC_TRNS,
    KC_TRNS,  KC_NO,      KC_NO,      KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO, KC_NO,       KC_NO,
    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    MO(9),      KC_TRNS,                LALT(KC_G), KC_NO,          KC_NO, KC_NO,       LCA(KC_DEL)
),
[9] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_WH_U, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_MS_U, KC_NO,   KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,        KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO
),
[10] = LAYOUT_planck_mit(
    KC_NO, HYPR(KC_F1),  HYPR(KC_F2),  HYPR(KC_F3),  HYPR(KC_F4),    HYPR(KC_F5),  HYPR(KC_F6),  HYPR(KC_F7),  HYPR(KC_F8),  HYPR(KC_F9),  HYPR(KC_F10), KC_NO,
    KC_NO, HYPR(KC_F11), HYPR(KC_F12), HYPR(KC_F13), HYPR(KC_F14),   HYPR(KC_F15), HYPR(KC_F16), HYPR(KC_F17), HYPR(KC_F18), HYPR(KC_F19), HYPR(KC_F20), KC_NO,
    KC_NO, HYPR(KC_F21), HYPR(KC_F22), HYPR(KC_F23), HYPR(KC_F24),   KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
    KC_NO, KC_NO,        KC_NO,        KC_NO,        MO(3),          KC_NO,                      KC_TRNS,      KC_NO,        KC_NO,        KC_NO,        KC_NO
),
[11] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  TD(TD_WIN_FULL),  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RGHT), KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO
),
[12] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  LCTL(KC_EQL),  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  LCTL(KC_MINS),  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO
),
[13] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO
),
/* CALC COPY */
[14] = LAYOUT_planck_mit(
    KC_TRNS, KC_NO,   KC_NO,      KC_NO, KC_NO, KC_NO,   KC_PERC, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_TRNS,
    KC_TRNS, KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_CIRC, KC_4,    KC_5,    KC_6,    KC_PMNS, LALT(KC_ENT),
    KC_TRNS, KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_PCMM, KC_1,    KC_2,    KC_3,    KC_PAST, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,          KC_0,    KC_PDOT, KC_COMM, KC_PSLS, KC_EQL
),
/* SIMBOLS COPY */
[15] = LAYOUT_planck_mit(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,     KC_PERC, KC_AMPR, KC_LPRN, KC_RPRN, KC_QUES,       KC_PPLS, KC_TRNS,
    KC_TRNS, KC_EQL,  KC_NO,   KC_NO,   RALT(KC_5), KC_CIRC, KC_PIPE, KC_LCBR, KC_RCBR, RALT(KC_SLSH), KC_PMNS,  KC_TRNS,
    KC_TRNS, KC_NO,   KC_NO,   LCA(KC_C),   LCA(KC_V),    KC_BSLS, KC_SLSH, KC_LBRC, KC_RBRC, KC_TRNS,       KC_NO,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,      KC_TRNS,          KC_TRNS, KC_NO,   KC_NO,         KC_NO,  KC_NO
)
};
