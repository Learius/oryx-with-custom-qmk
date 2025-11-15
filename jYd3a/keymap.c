#include QMK_KEYBOARD_H
#include "version.h"

#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_PSCR,
    KC_TAB,         KC_B,           KC_Y,           KC_O,           KC_U,           KC_QUOTE,       KC_GRAVE,                                       KC_EQUAL,       KC_SCLN,        KC_L,           KC_D,           KC_W,           KC_V,           KC_Z,
    CW_TOGG,        KC_C,           KC_I,           MT(MOD_LGUI | MOD_LSFT | MOD_LALT, KC_E),KC_A,           KC_COMMA,                                                                       KC_DOT,         KC_H,           MT(MOD_LGUI | MOD_LSFT | MOD_LALT, KC_T),KC_S,           KC_N,           KC_Q,
    KC_LEFT_SHIFT,  KC_G,           KC_X,           KC_J,           KC_K,           KC_MINUS,       KC_NUBS,                                        KC_BSLS,        KC_SLASH,       KC_R,           KC_M,           KC_F,           KC_P,           KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_ALT,    KC_RIGHT_ALT,                                                                                                   KC_RIGHT_ALT,   KC_LEFT_ALT,    KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_RIGHT_CTRL,
                                                                                                    KC_LBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_RBRC,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LT(6, KC_SPACE),KC_DELETE,      LT(7, KC_HOME), LT(7, KC_END),  KC_BSPC,        KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_GRAVE,                                       KC_EQUAL,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_NO,                                          KC_MINUS,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_LBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_RBRC,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(7, KC_END),  KC_BSPC,        KC_ENTER
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, RSFT(KC_BSLS),  RSFT(KC_EQUAL),                                 KC_GRAVE,       LSFT(KC_2),     KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_V,           KC_Y,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,                                                                       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       RALT(KC_Q),                                     LSFT(KC_4),     LSFT(KC_MINUS), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(3),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(4),                                                                                                          MO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RALT(KC_8),     KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_9),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    RSFT(KC_ESCAPE),KC_RBRC,        RSFT(KC_RBRC),  RSFT(KC_7),     RSFT(KC_0),     KC_NUBS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_NUBS),  RALT(KC_NUBS),  LSFT(KC_6),     LSFT(KC_5),     KC_BSLS,        LSFT(KC_PSCR),
    RSFT(KC_TAB),   RSFT(KC_B),     RSFT(KC_Z),     RSFT(KC_O),     RSFT(KC_U),     RSFT(KC_8),     RALT(KC_MINUS),                                 RALT(KC_RBRC),  LSFT(KC_9),     LSFT(KC_L),     LSFT(KC_D),     LSFT(KC_W),     LSFT(KC_V),     LSFT(KC_Y),
    KC_NO,          RSFT(KC_C),     RSFT(KC_I),     RSFT(KC_E),     RSFT(KC_A),     RSFT(KC_COMMA),                                                                 LSFT(KC_DOT),   LSFT(KC_H),     LSFT(KC_T),     LSFT(KC_S),     LSFT(KC_N),     LSFT(KC_Q),
    KC_TRANSPARENT, RSFT(KC_G),     RSFT(KC_X),     RSFT(KC_J),     RSFT(KC_K),     RSFT(KC_SLASH), KC_NO,                                          KC_NO,          LSFT(KC_1),     LSFT(KC_R),     LSFT(KC_M),     LSFT(KC_F),     LSFT(KC_P),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(5),                                                                                                          MO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RALT(KC_7),     KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_0),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    RSFT(KC_SPACE), RSFT(KC_DELETE),LSFT(KC_HOME),  LSFT(KC_END),   LSFT(KC_BSPC),  LSFT(KC_ENTER)
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_SCLN,        KC_LBRC,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_QUOTE,       KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_MINUS,       KC_NO,          KC_NO,
    MO(5),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MO(5),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          RSFT(KC_SCLN),  RSFT(KC_LBRC),  KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          RSFT(KC_QUOTE), KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_I,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_MINUS,    KC_W,           KC_KP_PLUS,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     LSFT(KC_P),     KC_COMMA,       KC_UP,          KC_DOT,         LSFT(KC_N),     KC_T,
    KC_NUM,         KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_TRANSPARENT,                                                                 RSFT(KC_COMMA), KC_LEFT,        KC_DOWN,        KC_RIGHT,       LSFT(KC_DOT),   KC_F,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_MINUS,       KC_J,           KC_K,           KC_L,           KC_EQUAL,       KC_M,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_W,           KC_C,           KC_O,           KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    DM_REC1,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         DM_REC2,
    DM_RSTP,        KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_AUDIO_VOL_DOWN,                                KC_AUDIO_VOL_UP,KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         DM_RSTP,
    DM_PLY1,        KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DM_PLY2,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,                                KC_BRIGHTNESS_UP,KC_TRANSPARENT, QK_BOOT,        KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_ergodox(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L',
  '*', '*',
  '*', '*', '*', '*',
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 
  '*', '*',
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_7, KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_3, KC_2, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_4, KC_3, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_6, KC_7, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_8, KC_7, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_0, KC_9, KC_PSCR, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_W, KC_V, KC_Z, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_S, KC_N, KC_Q, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_ESCAPE, KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_BSPC, KC_1, LT(7, KC_END), KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_BSPC, LT(7, KC_END), KC_2, KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_BSPC, LT(7, KC_END), KC_ENTER, KC_3, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_W, KC_V, KC_Y, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(6)),
    COMBO(combo1, KC_F2),
    COMBO(combo2, KC_F3),
    COMBO(combo3, KC_F4),
    COMBO(combo4, KC_F5),
    COMBO(combo5, KC_F6),
    COMBO(combo6, KC_F7),
    COMBO(combo7, KC_F8),
    COMBO(combo8, KC_F9),
    COMBO(combo9, KC_F10),
    COMBO(combo10, KC_F11),
    COMBO(combo11, KC_F12),
    COMBO(combo12, KC_F1),
    COMBO(combo13, TO(0)),
    COMBO(combo14, TO(1)),
    COMBO(combo15, TO(2)),
    COMBO(combo16, KC_F11),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT(KC_I):
            return TAPPING_TERM -65;
        case RSFT(KC_E):
            return TAPPING_TERM -65;
        case RSFT(KC_A):
            return TAPPING_TERM -65;
        case RSFT(KC_DELETE):
            return TAPPING_TERM + 250;
        case LSFT(KC_H):
            return TAPPING_TERM -65;
        case LSFT(KC_T):
            return TAPPING_TERM -65;
        case LSFT(KC_S):
            return TAPPING_TERM -65;
        case KC_F5:
            return TAPPING_TERM + 250;
        case KC_F6:
            return TAPPING_TERM + 250;
        default:
            return TAPPING_TERM;
    }
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

uint16_t layer_state_set_user(uint16_t state) {
    uint8_t layer = biton16(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 6:
      ergodox_right_led_1_on();
      break;
    case 7:
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

