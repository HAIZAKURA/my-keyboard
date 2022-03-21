#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Default Layer
   * .--------------.
   * |   1|   2|   3|
   * |--------------|
   * |   5|   6|   7|
   * |--------------|
   * |   9|   0|   +|
   * '--------------'
   */
  [0] = LAYOUT(
    KC_P1,     KC_P2,    KC_P3,
    KC_P5,     KC_P6,    KC_P7,
    KC_P9,     KC_P0,  KC_PLUS
  )
};
