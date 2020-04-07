#include QMK_KEYBOARD_H

enum layer_names {
  _QW,
  _L1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  /*┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
    │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ ^ │ ¥ |BS │ 15
    ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
    │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ @ │ [ │ Ent │ 13
    ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
    │ Ctrl │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ : │ ] │    │ 14
    ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
    │Shft   │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ _ | ↑ |Sft│ 14
    ├────┬──┴─┬─┴──┬┴───┴───┼───┴───┼───┴───┼───┼───┼───┼───┼───┤
    │Alt │Win │CTRL│  MHNK  | Space |  HNK  |Alt│FN │ ← │ ↓ │ → │ 11
    └────┴────┴────┴────────┴───────┴───────┴───┴───┴───┴───┴───┘
    FnキーをL1レイヤーへの切り替えキーに指定
    */
  [_QW] = LAYOUT_yuzuki_jis_67( \
//  1        2        3        4        5        6        7        8        9        10       11       12       13       14       15
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,
    KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    KC_LCTL,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RO,   KC_UP,   KC_RSFT,
    MO(_L1), KC_LGUI, KC_LCTL, KC_MHEN,                   KC_SPC,                    KC_HENK, KC_RALT, MO(_L1), KC_LEFT, KC_DOWN, KC_RIGHT
  ),

  /* 1: fn 1 */
  /*┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
    │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│   |Del│
    ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
    │     │   │   │   │   │   │   │   │   │   │Prn│   │Hom│     │
    ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
    │      │   │   │   │   │   │   │   │   │   │   │   │End│    │
    ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
    │       │HUI│HUD│VAI│   │   │   │Mut│   │   │   │   |Bup|   │
    ├────┬──┴─┬─┴──┬┴───┴───┼───┴───┼───┴───┼───┼───┼───┼───┼───┤
    │    │    │    │        |       |       |   │   │Vdo│Bdo│Vup│
    └────┴────┴────┴────────┴───────┴───────┴───┴───┴───┴───┴───┘
    HUI…色相を変更
    HUD…色相を逆方向に変更
    VAI…光度をアップ、Shiftを押しながらでダウン
    */
  [_L1] = LAYOUT_yuzuki_jis_67( \
//  1        2        3        4        5        6        7        8        9        10       11       12       13       14       15
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, KC_HOME,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_END,  _______,
    _______,          RGB_HUI, RGB_HUD, RGB_VAI, _______, _______, _______, KC_MUTE, _______, _______, _______, _______, KC_BRIU, _______,
    _______, _______, _______, _______,                   _______,                   _______, _______, _______, KC_VOLD, KC_BRID, KC_VOLU
  ),
};
