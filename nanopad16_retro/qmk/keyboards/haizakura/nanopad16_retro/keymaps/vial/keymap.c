#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Default Layer
   * .-------------------.
   * |   1|   2|   3|   4|
   * |-------------------|
   * |   5|   6|   7|   8|
   * |-------------------|
   * |   9|   0|   +|   -|
   * |-------------------|
   * |   *|   /|   =|   .|
   * '-------------------'
   */
  [0] = LAYOUT(
    KC_P1,     KC_P2,    KC_P3,   KC_P4,
    KC_P5,     KC_P6,    KC_P7,   KC_P8,
    KC_P9,     KC_P0,  KC_PLUS, KC_MINS,
    KC_ASTR, KC_SLSH, KC_ENTER, KC_DOT
  ),
  [1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};

bool dip_switch_update_user(uint8_t index, bool active) {
  switch (index) {
    case 0:
      if (active) {
        tap_code(KC_AUDIO_MUTE);
      }
      break;
    case 1:
      if (active) {
        rgblight_toggle();
      }
      break;
  }
  return true;
};
