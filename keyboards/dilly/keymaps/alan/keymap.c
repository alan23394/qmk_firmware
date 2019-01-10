#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN4 4
#define _FN5 5

#define _______ KC_TRNS

// Tap-Hold keys
#define KC_ASFT MT(MOD_LSFT, KC_A)
#define KC_T_L3 LT(_FN3, KC_T)
//#define KC_ZCTL MT(MOD_LCTL, KC_Z)
#define KC_ZSFT MT(MOD_LSFT, KC_Z)
#define KC_XALT MT(MOD_LALT, KC_X)
#define KC_CGUI MT(MOD_LGUI, KC_C)
#define KC_D_L4 LT(_FN4, KC_D)
#define KC_SPL1 LT(_FN1, KC_SPC)
#define KC_B_L1 LT(_FN1, KC_B)
#define KC_H_L5 LT(_FN5, KC_H)
#define KC_KALT MT(MOD_RALT, KC_K)
//#define KC_ESCT MT(MOD_RCTL, KC_ESC)
#define KC_ESL2 LT(_FN2, KC_ESC)
#define KC_ENTS MT(MOD_RSFT, KC_ENT)
// #define KC_ESCS MT(MOD_RSFT, KC_ESC)

#define KC_GUIC LGUI(KC_C)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*
  [_BASE] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_V,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_BSPC,
    KC_ASFT, KC_R,    KC_S,    KC_T_L3, KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
    KC_ZCTL, KC_XALT, KC_CGUI, KC_D_L4, KC_SPL2, KC_B_L1, KC_H_L5, KC_KALT, KC_ESCT, KC_ENTS
  ),
  */
  [_BASE] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_V,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_BSPC,
    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
    KC_ZSFT, KC_X,    KC_C,    KC_D_L4, KC_SPL1, KC_ESL2, KC_H_L5, KC_B,    KC_K,    KC_ENTS
  ),

  /*
  [_FN1] = LAYOUT_ortho_3x10(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    _______, _______, _______, _______, KC_BSPC, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
  ),
  */
  [_FN1] = LAYOUT_ortho_3x10(
    KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_TILD, KC_SLSH, KC_7,    KC_8,    KC_9,    KC_MINS,
    KC_LABK, KC_RABK, KC_LCBR, KC_RCBR, KC_EQL,  KC_ASTR, KC_4,    KC_5,    KC_6,    KC_PLUS,
    _______, _______, _______, _______, _______, KC_BSPC, KC_1,    KC_2,    KC_3,    KC_0
  ),

  /*
  ** Esc  `    Ins  Home Pgup           !    ?    \
  ** Tab       Del  End  Pgdn      .    ,    ;    '
  ** Shft Ctrl Alt  Win        ()
  **      +--OneShot--+
  */
  /*
  ** [    ]    (    )    ~    /    7    8    9    -
  ** <    >    {    }    =    *    4    5    6    +
  **                      ()  Bksp 1    2    3    0
  */

  [_FN2] = LAYOUT_ortho_3x10(
    KC_ESC,  KC_GRV,  KC_INS,  KC_HOME, KC_PGUP, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_TAB,  KC_F12,  KC_DEL,  KC_END,  KC_PGDN, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_GRV,
    KC_LSFT, KC_CTRL, KC_LALT, KC_WIN,  _______, KC_DEL,  _______, _______, _______, _______
  ),

  [_FN3] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    KC_TAB,  _______, _______, _______, _______, KC_COMM, KC_DOT,  KC_SLSH, KC_SCLN, KC_QUOT,
    _______, _______, _______, _______, KC_BSPC, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_FN4] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
    KC_TAB,  _______, _______, _______, _______, KC_LT,   KC_GT,   KC_QUES, KC_COLN, KC_DQUO,
    _______, _______, KC_GUIC, _______, KC_BSPC, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
  ),

  [_FN5] = LAYOUT_ortho_3x10(
    RGB_TOG, RGB_MOD, _______, RESET,   RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______,
    _______, _______, DEBUG,   _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______,
    BL_STEP, _______, KC_GUIC, _______, _______, _______, _______, _______, _______, _______
  )

};
