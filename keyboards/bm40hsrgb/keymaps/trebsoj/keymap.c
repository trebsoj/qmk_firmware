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

enum {
    TD_ALT_CAPS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_planck_mit(
    KC_ESC,         KC_Q,         KC_W,       KC_E,            KC_R,  KC_T,           KC_Y,   KC_U,       KC_I,           KC_O,           KC_P,           KC_BSPC, 
    KC_TAB,         KC_A,         LT(8,KC_S), LT(4,KC_D),      KC_F,  KC_G,           KC_H,   KC_J,       KC_K,           KC_L,           KC_SCLN,        KC_ENT, 
    KC_LSFT,        LT(11,KC_Z),  KC_X,       KC_C,            KC_V,  KC_B,           KC_N,   KC_M,       KC_COMM,        KC_DOT,         KC_MINS,        KC_DEL, 
    LCTL_T(KC_GRV), KC_LGUI,      KC_DEL,     TD(TD_ALT_CAPS), MO(2), LT(6,KC_SPC),           MO(1),      KC_RALT,        ALL_T(KC_PAST), LCTL(KC_PSLS),  LT(10,KC_QUOT)
),
/* SIMBOLS */
[1] = LAYOUT_planck_mit(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,     KC_PERC, KC_AMPR, KC_LPRN, KC_RPRN, KC_QUES,       KC_EQL, KC_TRNS, 
    KC_TRNS, KC_EQL,  KC_NO,   MO(4),   RALT(KC_5), KC_CIRC, KC_PIPE, KC_LCBR, KC_RCBR, RALT(KC_SLSH), KC_NO,  KC_TRNS, 
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_QUES,    KC_BSLS, KC_SLSH, KC_LBRC, KC_RBRC, KC_TRNS, KC_NO,  KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3),      KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,         KC_NO
),
/* CALC */
[2] = LAYOUT_planck_mit(
    KC_TRNS, KC_NO,      KC_NO,      LCTL(KC_Z), LCTL(KC_Y), KC_NO,      KC_PERC,     KC_P7,    KC_P8,    KC_P9,    KC_PPLS, KC_TRNS, 
    KC_TRNS, KC_LALT,    KC_NO,      MO(4),      KC_NO,      KC_NO,      KC_CIRC,     KC_P4,    KC_P5,    KC_P6,    KC_PMNS, LALT(KC_ENT), 
    KC_TRNS, KC_NO,      LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO,      KC_NO,       KC_P1,    KC_P2,    KC_P3,    KC_PAST, KC_TRNS, 
    KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_P0,       KC_PDOT,  KC_COMM,  KC_PSLS,  KC_EQL
),
/* RGB */
[3] = LAYOUT_planck_mit(
    RGB_TOG,  KC_NO,    KC_NO,   KC_NO,   KC_NO,   RESET,   DEBUG,   KC_NO,   RGB_SAI,  RGB_SAD, RGB_SPI, RGB_SPD, 
    RGB_M_P,  RGB_M_B,  RGB_M_R, BL_TOGG, KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_VAI,  RGB_VAD, KC_NO,   KC_NO, 
    RGB_M_SW, RGB_M_SN, RGB_M_K, BL_STEP, KC_NO,   KC_BRIU, KC_BRID, KC_NO,   RGB_HUI,  RGB_HUD, BL_INC,  BL_DEC, 
    RGB_M_X,  RGB_M_G,  RGB_M_T, BL_BRTG, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, RGB_RMOD, BL_ON,   BL_OFF
),
/* DIRECCIO */
[4] = LAYOUT_planck_mit(
    KC_TRNS, KC_TRNS,       MO(5),      LCTL(KC_Z),  LCTL(KC_Y),    KC_NO,      KC_NO,        KC_HOME,    KC_UP,      KC_END,     KC_NO,   KC_TRNS, 
    KC_TRNS, LSFT(KC_LCTL), MO(7),      KC_TRNS,     LCTL(KC_LGUI), MO(9),      LSFT(KC_TAB), KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_TAB,  KC_TRNS, 
    KC_TRNS, KC_LCTL,       LCTL(KC_X), LCTL(KC_C),  LCTL(KC_V),    KC_NO,      KC_NO,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS, 
    KC_TRNS, KC_TRNS,       KC_TRNS,    KC_TRNS,     MO(14),        KC_TRNS,    MO(15),       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
),
[5] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_MSTP,     KC_VOLU, KC_MPLY, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_MPRV,     KC_VOLD, KC_MNXT, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,       KC_MUTE, KC_NO,   KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, LGUI(KC_F1), KC_NO,   KC_NO,   KC_NO
),
[6] = LAYOUT_planck_mit(
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, 
    KC_TRNS, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_TRNS, 
    KC_TRNS, KC_F21, KC_F22, KC_F23, KC_F24, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO
),
[7] = LAYOUT_planck_mit(
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_HOME), KC_PGUP, LCTL(KC_END), KC_NO, KC_TRNS, 
    KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, LCTL(KC_PGUP), KC_PGDN, LCTL(KC_PGDN), KC_NO, KC_TRNS, 
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),
[8] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_F4), LALT(KC_F4), 
    KC_CAPS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_L), KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, SGUI(KC_S), KC_PSCR, KC_NO, LALT(KC_G), KC_NO, KC_NO, KC_NO, LCA(KC_DEL)
),
[9] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO
),
[10] = LAYOUT_planck_mit(
    KC_NO, HYPR(KC_F1), HYPR(KC_F2), HYPR(KC_F3), HYPR(KC_F4), HYPR(KC_F5), HYPR(KC_F6), HYPR(KC_F7), HYPR(KC_F8), HYPR(KC_F9), HYPR(KC_F10), KC_NO, 
    KC_NO, HYPR(KC_F11), HYPR(KC_F12), HYPR(KC_F13), HYPR(KC_F14), HYPR(KC_F15), HYPR(KC_F16), HYPR(KC_F17), HYPR(KC_F18), HYPR(KC_F19), HYPR(KC_F20), KC_NO, 
    KC_NO, HYPR(KC_F21), HYPR(KC_F22), HYPR(KC_F23), HYPR(KC_F24), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
),
[11] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO,      LCTL(KC_Z), LCTL(KC_Y), KC_NO, KC_NO, KC_NO, LCTL(KC_EQL),  KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, LCTL(KC_S), KC_NO,      KC_NO,      KC_NO, KC_NO, KC_NO, LCTL(KC_MINS), KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO
),
[12] = LAYOUT_planck_mit(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
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
    KC_TRNS, KC_NO,   KC_NO,      LCTL(KC_Z), LCTL(KC_Y), KC_NO,   KC_PERC, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_TRNS, 
    KC_TRNS, KC_LALT, KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_CIRC, KC_4,    KC_5,    KC_6,    KC_PMNS, LALT(KC_ENT), 
    KC_TRNS, KC_NO,   LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO,   KC_NO,   KC_1,    KC_2,    KC_3,    KC_PAST, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_0,    KC_PDOT, KC_COMM, KC_PSLS, KC_EQL
),
/* SIMBOLS COPY */
[15] = LAYOUT_planck_mit(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,     KC_PERC, KC_AMPR, KC_LPRN, KC_RPRN, KC_QUES,       KC_EQL, KC_TRNS, 
    KC_TRNS, KC_EQL,  KC_NO,   KC_NO,   RALT(KC_5), KC_CIRC, KC_PIPE, KC_LCBR, KC_RCBR, RALT(KC_SLSH), KC_NO,  KC_TRNS, 
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_QUES,    KC_BSLS, KC_SLSH, KC_LBRC, KC_RBRC, KC_TRNS, KC_NO,  KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
)
};

/* NO HO FAIG SERVIR DE MOMENT, ÉS PER FER DOBLE TOC A UNA TECLA */
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_ALT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_CAPS)
};

/*  REDEFINIM ELS TEMPS DE TAPPING PER LES TECLES QUE HAN DE CANVIAR DE CAPA
    AIXI HO ACTIVEM ABANS */
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(11,KC_Z):       return 150;
        case LT(4,KC_D):        return 160;
        case LCTL_T(KC_GRV):    return 125;
        default:                return TAPPING_TERM;
    }
};
