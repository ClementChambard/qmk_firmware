#include QMK_KEYBOARD_H
#include "version.h"
#include "action_layer.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  CC_TOLL,
};

/* ======= Tap Dance =======
enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define CC_TDD0 TD(DANCE_0)
#define CC_TDD1 TD(DANCE_1)
*/

#define CC_ZCTL MT(MOD_LCTL, KC_Z)
#define CC_ALAP MT(MOD_LALT, KC_APPLICATION)
#define CC_CTSL MT(MOD_RCTL, KC_SLASH)
#define CC_CTES MT(MOD_LCTL, KC_ESCAPE)
#define CC_GUQU MT(MOD_LGUI, KC_QUOTE)
#define CC_BLK  LT(2, KC_GRAVE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQL , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LEFT,                 KC_RGHT, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , TG(4)  ,                 XXXXXXX, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
    KC_BSPC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_HYPR,                 KC_MEH , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, CC_GUQU,
    KC_LSFT, CC_ZCTL, KC_X   , KC_C   , KC_V   , KC_B   ,                                   KC_N   , KC_M   , KC_COMM, KC_DOT , CC_CTSL, KC_RSFT,
    CC_BLK , KC_LGUI, CAPSWRD, KC_LBRC, KC_RBRC,          CC_ALAP,                 CC_CTES,          KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, MO(2)  ,
                                        KC_SPC , KC_BSPC, KC_LALT,                 KC_RALT, KC_DEL , KC_ENT
  ),
  [1] = LAYOUT_moonlander(
    KC_ESC , _______, _______, _______, _______, _______, KC_EQL ,                 XXXXXXX, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                 XXXXXXX, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_GRV ,                 XXXXXXX, _______, _______, _______, _______, KC_SCLN, _______,
    _______, KC_Z   , _______, _______, _______, _______,                                   _______, _______, _______, KC_UP  , KC_SLSH, _______,
    KC_LCTL, _______, KC_LALT, _______, _______,          MO(2)  ,                 _______,          KC_DOT , KC_LEFT, KC_DOWN, _______, KC_RCTL,
                                        _______, _______, _______,                 _______, _______, _______
  ),
  [2] = LAYOUT_moonlander(
    KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______,                 KC_VOLU, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    _______, KC_EXLM, KC_AT  , KC_LCBR, KC_RCBR, KC_PIPE, _______,                 KC_VOLD, KC_PSLS, KC_KP_7, KC_KP_8, KC_KP_9, KC_PAST, KC_F12 ,
    _______, KC_HASH, KC_DLR , KC_LPRN, KC_RPRN, KC_GRV , AU_TOG ,                 KC_MUTE, KC_PMNS, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS, _______,
    _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                                   KC_AMPR, KC_KP_1, KC_KP_2, KC_KP_3, KC_BSLS, _______,
    _______, KC_COMM, _______, _______, _______,          RGB_MOD,                 RGB_TOG,          _______, KC_PDOT, KC_KP_0, KC_EQL , _______,
                                        RGB_VAD, RGB_VAI, TOGGLE_LAYER_COLOR,      RGB_SLD, RGB_HUD, RGB_HUI
  ),
  [3] = LAYOUT_moonlander(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX, _______,                 _______, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_BTN3,                 KC_LGUI,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        KC_BTN1, KC_BTN2, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX
  ),
  [4] = LAYOUT_moonlander(
    TO(0)  , TO(1)  , TO(2)  , TO(3)  , XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CC_TOLL,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    MU_TOG , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    MU_MOD , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,                 XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,
                                        RGB_M_K, RGB_M_X, RGB_M_SN,                XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define ___ {0,   0,   0} /* 0x000000 */
#define _W_ {0,   0, 255} /* 0xFFFFFF */
#define _R_ {0, 255, 255} /* 0xFF0000 */
#define _P_ {240,255,255} /* 0xFF0000 */
#define _G_ {108,255,255} /* 0xFF0000 */
#define _B_ {167,255,255} /* 0x0015FF */
#define _O_ { 18,244,245} /* 0xF56C0A */


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { _R_, _R_, _R_, _R_, _R_,
            _R_, _R_, _B_, _R_, _R_,
            _R_, _B_, _B_, _R_, _R_,
            _R_, _R_, _B_, _R_, _R_,
            _R_, _R_, _R_, _R_, _R_,
            _R_, _R_, _R_, _R_,
            ___, ___, ___,
            _B_, ___, ___, ___,

            _R_, _R_, _R_, _R_, _R_,
            _R_, _R_, _R_, _R_, _O_,
            _R_, _R_, _R_, _O_, _O_,
            _R_, _R_, _R_, _R_, _O_,
            _R_, _R_, _R_, _R_, _R_,
            _R_, _R_, _R_, _R_,
            ___, ___, ___,
            ___, ___, ___, ___ },

    [3] = { ___, ___, ___, ___, ___,
            ___, ___, _R_, ___, ___,
            ___, _R_, _R_, ___, ___,
            ___, ___, _R_, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, ___, ___,
            ___, ___, ___,
            _R_, _R_, ___, _R_,

            ___, ___, ___, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, _P_, ___, ___,
            ___, _R_, _P_, ___, ___,
            ___, _O_, _P_, ___, ___,
            ___, _G_, _P_, ___,
            ___, ___, ___,
            ___, ___, ___, ___ },

    [4] = { _R_, ___, ___, ___, ___,
            _R_, ___, ___, ___, ___,
            _R_, ___, ___, ___, ___,
            _R_, ___, ___, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, ___, ___,
            ___, ___, ___,
            ___, ___, ___, ___,

            ___, ___, ___, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, ___, ___, ___,
            ___, ___, ___, ___,
            ___, ___, ___,
            ___, ___, ___, ___ },

};

int lastLayer = 0;

void set_color_layer4(void)
{
    static uint8_t hue = 0;
    static int ctr = 0;
    static int reset_key_timer = 0;
    static int reset_point_timer = 0;

    float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;

    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
          .h = pgm_read_byte(&ledmap[4][i][0]),
          .s = pgm_read_byte(&ledmap[4][i][1]),
          .v = pgm_read_byte(&ledmap[4][i][2]),
        };
        hsv.h = hue + 2*i;
        RGB rgb = hsv_to_rgb( hsv );
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
    if (ctr==0) { hue++; ctr = 3; }
    ctr--;
    if (reset_key_timer-- == 0) reset_key_timer = 60;
    if (reset_point_timer-- == 0) reset_point_timer = 300;
    //rgb_matrix_set_color( 20, 255, 0, 0 );
    rgb_matrix_set_color( 40, (reset_key_timer>30?f*255:0), 0, 0 );
    if (reset_point_timer < 15) {
      rgb_matrix_set_color( 45, f * 255, 0, 0 );
      rgb_matrix_set_color( 39, f * 255, 0, 0 );
    } else if (reset_point_timer < 30) {
        rgb_matrix_set_color(50, f * 255, 0, 0);
        rgb_matrix_set_color(38, f * 255, 0, 0);
    } else if (reset_point_timer < 45) {
        rgb_matrix_set_color(55, f * 255, 0, 0);
        rgb_matrix_set_color(37, f * 255, 0, 0);
    } else if (reset_point_timer < 60) {
        rgb_matrix_set_color(60, f * 255, 0, 0);
        rgb_matrix_set_color(36, f * 255, 0, 0);
    }
}

void set_color_layer3(void) {
    static int ctr = 0;
    static int leds[] = {0, 5, 10, 15, 20, 25, 29, 65, 61, 56, 51, 46, 41, 36, 37, 38, 39, 40, 45, 50, 55, 60, -1, -1, -1, -1, 24, 19, 14, 9, 4, 3, 2, 1};
    static int dh = 255/33;
    float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;

    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
          .h = pgm_read_byte(&ledmap[3][i][0]),
          .s = pgm_read_byte(&ledmap[3][i][1]),
          .v = pgm_read_byte(&ledmap[3][i][2]),
        };
        RGB rgb = hsv_to_rgb( hsv );
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }

    HSV hsv = {0,255,255};
    for (int i = 0; i < 34; i++)
    {
        if (leds[i] == -1) continue;
        RGB rgb = hsv_to_rgb( hsv );
        int dist = abs(ctr/12-i);
        if (dist == 0)
          rgb_matrix_set_color( leds[i], f * rgb.r, f * rgb.g, f * rgb.b );
        if (dist == 1 || dist == 33)
          rgb_matrix_set_color( leds[i], f * 0.75 * rgb.r, f * 0.75 * rgb.g, f * 0.75 * rgb.b );
        if (dist == 2 || dist == 32)
          rgb_matrix_set_color( leds[i], f * 0.5 * rgb.r, f * 0.5 * rgb.g, f * 0.5 * rgb.b );
        if (dist == 3 || dist == 31)
          rgb_matrix_set_color( leds[i], f * 0.25 * rgb.r, f * 0.25 * rgb.g, f * 0.25 * rgb.b );
        hsv.h += dh;
    }

    if (ctr++ >= 34*12) ctr -= 34*12;
}

void set_layer_color(int layer) {

  if (layer == 3) { set_color_layer3(); return; }
  if (layer == 4) { set_color_layer4(); return; }

  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  int layer = biton32(layer_state);
  switch (layer) {
    case 1:
      set_layer_color(1);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  rgb_matrix_set_color( 30, f*255, f*255, f*255 );
  if (layer != 4) lastLayer = layer;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(0);
      }
      return false;
    case CC_TOLL: /* To last layer ********************************************/
        if (record->event.pressed) layer_move(lastLayer);
        return false;
  }
  return true;
}
