#include QMK_KEYBOARD_H

// Fillers to make layering more clear

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (qwerty)
 * +-----------------------------------------+               +-----------------------------------------+
 * |      |   q  |   w  |   e  |   r  |   t  |               |   y  |   u  |   i  |   o  |   p  |      |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |      |   a  |   s  |   d  |   f  |   g  |               |   h  |   j  |   k  |   l  |   ;  |      |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |      |   z  |   x  |   c  |   v  |   b  |               |   n  |   m  |   ,  |   .  |   /  |      |
 * +------+------+------+------+-------------+               +-------------+------+------+------+------+
 *               |      |      |                                           |      |      |
 *               +-------------+------+                             +------+-------------+
 *                             |      |                             |      |
 *                             +------+                             +------+
 *                                    +-------------+ +-------------+
 *                                    |      |      | |      |      |
 *                                    |------+------| |------+------|
 *                                    |      |      | |      |      |
 *                                    +-------------+ +-------------+
 */
        [0] = LAYOUT( \
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                 KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, \
        TO(3), KC_A, KC_S, KC_D, KC_F, KC_G,                 KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, \
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                 KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, \
                     KC_NO, KC_NO,                                       KC_LALT, KC_NO, \
                                 KC_LGUI, KC_NO,             KC_NO, KC_ENT,\
                                 TT(1), KC_SPC,             KC_LSFT, TT(2),\
                                 KC_LCTL, KC_ESC,             KC_BSPC,KC_TAB \
                      ),

        [1] = LAYOUT( \
        KC_NO, KC_NO, KC_GRV, KC_MINS, KC_EQL, KC_NO,        KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,      KC_0, KC_4, KC_5, KC_6, KC_NO, KC_NO,  \
        KC_NO, KC_NO, KC_SCLN, KC_QUOT, KC_SLSH, KC_NO,      KC_DOT, KC_1, KC_2, KC_3, KC_NO, KC_NO, \
                      KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, \
                                        KC_TRNS, KC_NO,      KC_NO, KC_TRNS, \
                                        KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, \
                                        KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS      \
                      ),

        [2] = LAYOUT( \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, \
                      KC_TRNS, KC_TRNS,                                        KC_TRNS, KC_TRNS, \
                                    KC_TRNS, KC_NO,          KC_NO, KC_TRNS,
                                    KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS \
                     ),


        [3] = LAYOUT( \
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                 KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, \
        TO(0), KC_A, KC_S, KC_D, KC_F, KC_G,               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, \
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                 KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, \
                     KC_1, KC_2,                                         KC_3, KC_4, \
                                KC_LSFT, KC_NO,              KC_NO, KC_RALT, \
                                KC_LCTL, KC_SPC,             KC_LSFT, TT(2), \
                                KC_TAB, KC_ESC,              KC_BSPC, KC_TAB \
                     ),

        [4] = LAYOUT( \
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
                     KC_NO, KC_NO,                                        KC_NO, KC_NO, \
                     KC_NO, KC_NO,            KC_NO, KC_NO, \
                     KC_NO, KC_NO,            KC_NO, KC_NO, \
                     KC_NO, KC_TRNS,          KC_NO, KC_NO            \
                     )

};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
