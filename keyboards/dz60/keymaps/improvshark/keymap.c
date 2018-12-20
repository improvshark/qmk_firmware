#include "dz60.h"
#define _______ KC_TRNS
#define ___X___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*		Base Layer
	 */
	LAYOUT(
		KC_GESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC, KC_DEL,
		KC_TAB  ,          KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
		LT(MO(1), KC_CAPS),KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT ,
		KC_LSFT , ___X___, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          TD(0)  ,
		KC_LCTL ,          KC_LGUI, KC_LALT, LT(MO(1), KC_SPC), KC_F12 ,         KC_SPC , KC_RALT, KC_RGUI, ___X___, KC_MENU,         KC_RCTL),
	/*
		Function Layer
	 */
	LAYOUT(
		KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10  , KC_F11 , KC_F12 , KC_PSCR, KC_INS ,
		_______,          _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END  , _______, _______, _______, _______,
		_______,          _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT, _______, _______,          _______,
		_______, ___X___, _______, _______, _______, _______, _______, _______, _______, _______, _______ , _______, _______,          _______,
		_______,          _______, _______, _______,          TO(0)  ,          _______, _______, _______ , ___X___, _______,          RESET  ),
	 /*
		Gaming Layer
	 */
	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		_______, ___X___, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          TO(0)  ,
		_______,          _______, _______,  KC_SPC,           MO(1) ,           KC_SPC, _______, _______, ___X___, _______,          _______),
	 /*
		RGB Layer
	 */
	LAYOUT(
		RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_K, RGB_M_G, RGB_M_SW, RGB_M_SN, _______, _______, _______, _______, _______, _______, RGB_M_X,
		_______,          _______, _______, _______, _______, _______,  _______,  RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______,  _______, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, _______,          _______,
		_______, ___X___, _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______, _______,          TO(0)  ,
		_______,          _______, _______, TO(0)  ,          TO(0)  ,            _______, _______, _______, ___X___, _______,          _______)
};

void changeLayer (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_on(2);
  } else {
    layer_on(3);
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
	ACTION_TAP_DANCE_FN (changeLayer)
};
