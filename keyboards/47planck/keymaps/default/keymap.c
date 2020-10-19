/* Copyright 2020 Rachmansyah B.S.
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _FN
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SPC_LWR LT(_LOWER, KC_SPC)
#define BS_RSE LT(_RAISE, KC_BSPC)
#define FN MO(_FN)
#define SFTCAPS MT(MOD_LSFT, KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_planck_mit(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        SFTCAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
        FN,      KC_LCTL, KC_LGUI, KC_LALT, SPC_LWR,      SPC_LWR,     BS_RSE,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),
    [_LOWER] = LAYOUT_planck_mit(
        KC_GRV,  KC_7,    KC_8,    KC_9,    _______, _______, _______, _______, KC_UP,   KC_LBRC, KC_RBRC, KC_BSLS,
        _______, KC_4,    KC_5,    KC_6,    _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_BSLS, _______,
        _______, KC_0,    _______, _______, _______,     _______,      KC_DEL,  KC_HOME, KC_PGDN, KC_PGUP, KC_END
    ),
    [_RAISE] = LAYOUT_planck_mit(
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    ),
    [_FN] = LAYOUT_planck_mit(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
