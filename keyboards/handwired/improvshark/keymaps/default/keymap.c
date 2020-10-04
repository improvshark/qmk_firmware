#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, 
		KC_9, KC_0, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, 
		KC_G, KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N, 
		KC_O, KC_P, KC_Q, KC_R, KC_S, KC_T, KC_U, KC_V, 
		KC_W, KC_X, KC_Y, KC_X, KC_Z, KC_F1, KC_F2, KC_F3, 
		KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
		KC_F12, KC_SCLN, KC_QUOT, KC_GRV, KC_COMM, KC_DOT, KC_SLSH, KC_2, 
		KC_TAB, KC_ENT, KC_ESC, KC_SPC, KC_LCTL, KC_LALT, KC_BSPC, KC_0),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}