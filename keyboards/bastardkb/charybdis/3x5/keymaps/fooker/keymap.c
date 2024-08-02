/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

#include "keymap_german.h"

#define LG(x) LGUI_T(x)
#define LA(x) LALT_T(x)
#define LC(x) LCTL_T(x)
#define LS(x) LSFT_T(x)

#define RS(x) RSFT_T(x)
#define RC(x) RCTL_T(x)
#define RA(x) RALT_T(x)
#define RG(x) RGUI_T(x)

// Long-press keys are mapped to a dummy-layer and processed in `process_user_record` below
#define LP_Q LT(0, DE_Q)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       LP_Q   , DE_W   , DE_E   , DE_R   , DE_T   ,    DE_Z   , DE_U   , DE_I   , DE_O   , DE_P   ,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
      LA(DE_A),LC(DE_S),LG(DE_D),LS(DE_F), DE_G   ,    DE_H   ,RS(DE_J),RG(DE_K),RC(DE_L), DE_COLN,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       DE_Y   , DE_X   , DE_C   , DE_V   , DE_B   ,    DE_N   , DE_M   , DE_COMM,  DE_DOT, DE_MINS,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                MO(4), LT(3,KC_SPC), LT(6,KC_BSPC),   LT(5,KC_TAB),LSFT_T(KC_ENT)
  //           ╰───────────────────────────────────╯ ╰───────────────────────────╯
  ),

  [1] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       LP_Q   , DE_D   , DE_R   , DE_W   , DE_B   ,    DE_J   , DE_F   , DE_U   , DE_P   , DE_COLN,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
      LA(DE_A),LC(DE_S),LG(DE_H),LS(DE_T), DE_G   ,    DE_Y   ,RS(DE_N),RG(DE_E),RG(DE_O),RA(DE_I),
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       DE_Z   , DE_X   , DE_M   , DE_C   , DE_V   ,    DE_K   , DE_L   , DE_COMM, DE_DOT , DE_MINS,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                MO(4), LT(3,KC_SPC), LT(6,KC_BSPC),   LT(5,KC_TAB),LSFT_T(KC_ENT)
  //           ╰───────────────────────────────────╯ ╰───────────────────────────╯
  ),

  [2] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       DE_Q   , DE_W   , DE_E   , DE_R   , DE_T   ,    DE_Z   , DE_U   , DE_I   , DE_O   , DE_P   ,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       DE_A   , DE_S   , DE_D   , DE_F   , DE_G   ,    DE_H   , DE_J   , DE_K   , DE_L   , DE_COLN,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       DE_Y   , DE_X   , DE_C   , DE_V   , DE_B   ,    DE_N   , DE_M   , DE_COMM, DE_DOT , DE_MINS,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         MO(4)  , KC_SPC , MO(6)  ,   LT(5,KC_TAB), KC_ENT
  //                   ╰───────────────────────────╯ ╰────────────────────╯
  ),

  [3] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       DE_EXLM, DE_AT  , DE_LCBR, DE_RCBR, DE_GRV ,    DE_QUOT, DE_UDIA, DE_CIRC, DE_ODIA, DE_ASTR,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       DE_ADIA, DE_SS  , DE_LPRN, DE_RPRN, DE_PLUS,    DE_DQUO, DE_EQL , DE_DLR , DE_HASH, DE_SCLN,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       DE_PIPE, DE_AMPR, DE_LBRC, DE_RBRC, DE_TILD,    DE_PERC, DE_LABK, DE_RABK, DE_QUES, DE_UNDS,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, _______, XXXXXXX,    DE_SLSH, KC_RSFT
  //                   ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [4] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       KC_ESC , _______, _______, _______, _______,    _______, _______, _______, _______, _______,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, _______,    KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         _______, XXXXXXX, XXXXXXX,    _______, _______
  //                   ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [5] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       _______, _______, _______, _______, _______,    KC_DEL , KC_PGUP, KC_UP  , KC_PGDN, KC_INS ,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, _______,    KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END ,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       _______, _______, _______, _______, _______,    _______, _______, _______, _______, TG(4)  ,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         _______, KC_BSPC, KC_DEL ,    _______, OSL(7)
  //                   ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [6] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
      LA(KC_1),LC(KC_2),LG(KC_3),LS(KC_4), KC_5   ,    KC_6   ,RS(KC_7),RG(KC_8),RC(KC_9),RA(KC_0),
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       _______, _______, _______, DE_COLN, DE_DOT ,    _______, _______, _______, _______, _______,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, XXXXXXX, _______,    DE_BSLS, _______
  //                   ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [7] = LAYOUT_charybdis_3x5(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       QK_RBT , _______, DF(2)  , DF(1)  , DF(0)  ,    DF(0)  , DF(1)  , DF(2)  , _______, QK_RBT ,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       QK_BOOT, _______, _______, _______, _______,    _______, _______, _______, _______, QK_BOOT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         _______, _______, _______,    _______, _______
  //                   ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on

// Map long-press Q via dummy layer to ESC
static bool process_tap_or_long_press_key(keyrecord_t* record, uint16_t alt_keycode) {
	if (record->tap.count != 0) {
		return true;
	}

	if (record->event.pressed) {
		tap_code16(alt_keycode);
	}
	return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
	switch (keycode) {
		case LP_Q:
			return process_tap_or_long_press_key(record, KC_ESC);
	}

	return true;
}



uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case LA(DE_A):
		case LC(DE_S):
		case LG(DE_D):
		case LS(DE_F):
		case RS(DE_J):
		case RG(DE_K):
		case RC(DE_L):
		case LA(KC_1):
		case LC(KC_2):
		case LG(KC_3):
		case LS(KC_4):
		case RS(KC_7):
		case RG(KC_8):
		case RC(KC_9):
		case LT(3,KC_SPC):
		case LSFT_T(KC_ENT):
			return 0;
		default:
            return QUICK_TAP_TERM;
	}
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

	if (get_mods() & MOD_MASK_SHIFT) {
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 255, 0, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 255, 0, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 255, 0, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 255, 0, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 255, 0, 0);
		return true;
	}

	if (layer_state_is(2)) { // GAMING
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 0, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 0, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 0, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 0, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 0, 0, 255);
		return true;
	}

	if (layer_state_is(3)) { // SYMBOLS
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 225, 213, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 225, 213, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 225, 213, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 225, 213, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 225, 213, 0);
		return true;
	}

	if (layer_state_is(4)) { // MOUSE
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 155, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 155, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 155, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 155, 0, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 155, 0, 255);
		return true;
	}

	if (layer_state_is(5)) { // NAVIGATION
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 84, 255, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 84, 255, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 84, 255, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 84, 255, 0);
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 84, 255, 0);
		return true;
	}

	if (layer_state_is(6)) { // NUMBERS
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 0, 234, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 0, 234, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 0, 234, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 0, 234, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 0, 234, 255);
		return true;
	}

	if (layer_state_is(7)) { // SETTINGS
		RGB_MATRIX_INDICATOR_SET_COLOR(17, 255, 255, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(15, 255, 255, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(16, 255, 255, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(33, 255, 255, 255);
		RGB_MATRIX_INDICATOR_SET_COLOR(34, 255, 255, 255);
		return true;
	}

	return false;
}

void keyboard_post_init_user(void) {
	// Enables RGB, without saving settings
	rgb_matrix_enable_noeeprom();
	rgb_matrix_sethsv_noeeprom(FOOKER_GLOW);
	rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS);
	rgb_matrix_set_speed_noeeprom(100);
}

