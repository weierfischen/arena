#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  MAGIC_KEY,
  KC_QU,
};



#define DUAL_FUNC_0 LT(2, KC_F1)
#define DUAL_FUNC_1 LT(1, KC_Y)
#define DUAL_FUNC_2 LT(12, KC_F3)
#define DUAL_FUNC_3 LT(3, KC_F19)
#define DUAL_FUNC_4 LT(5, KC_F17)
#define DUAL_FUNC_5 LT(8, KC_E)
#define DUAL_FUNC_6 LT(6, KC_O)
#define DUAL_FUNC_7 LT(11, KC_F20)
#define DUAL_FUNC_8 LT(3, KC_E)
#define DUAL_FUNC_9 MT(MOD_LALT, MAGIC_KEY)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_DELETE,      KC_7,           KC_8,           KC_9,           KC_0,           KC_LEFT_GUI,    
    KC_TAB,         KC_X,           KC_G,           KC_R,           KC_F,           KC_V,                                           KC_BSPC,        DUAL_FUNC_2,    DUAL_FUNC_3,    KC_COMMA,       ST_MACRO_0,     CW_TOGG,        
    OSL(1),         KC_L,           DUAL_FUNC_1,    MT(MOD_LSFT, KC_N),MT(MOD_LCTL, KC_D),KC_P,                                           KC_K,           MT(MOD_RCTL, KC_I),MT(MOD_RSFT, KC_E),DUAL_FUNC_4,    KC_H,           KC_TRANSPARENT, 
    TG(2),          KC_W,           KC_Z,           KC_M,           KC_C,           KC_B,                                           KC_J,           KC_Y,           ST_MACRO_1,     KC_DOT,         KC_MINUS,       TG(2),          
                                                    DUAL_FUNC_9,    LT(3, KC_SPACE),                                DUAL_FUNC_5,    OSM(MOD_LSFT)
  ),
  [1] = LAYOUT_voyager(
    US_SECT,        KC_PLUS,        KC_AT,          US_HASH,        US_DEG,         KC_PERC,                                        KC_AMPR,        KC_SLASH,       KC_ASTR,        KC_TILD,        KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       US_DIAE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SCLN,        KC_Q,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_3,     US_EACU,        US_AACU,        US_CCED,        KC_TRANSPARENT, 
    KC_TRANSPARENT, US_EURO,        US_PND,         US_DLR,         KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_6,    DUAL_FUNC_7,    KC_DQUO,        KC_COLN,        KC_UNDS,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    OSL(4),         US_SUP1,        US_SUP2,        US_SUP3,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_BSPC,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_EQUAL,    KC_KP_0,        KC_SPACE,       DUAL_FUNC_8,    KC_KP_SLASH,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ENTER,    KC_TAB
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,                                        LCTL(KC_DELETE),KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_Z),     LCTL(KC_Y),                                     LCTL(KC_BSPC),  LCTL(KC_LEFT),  KC_UP,          LCTL(KC_RIGHT), KC_TRANSPARENT, KC_CAPS,        
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_T),                                     LCTL(LSFT(KC_LEFT)),KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(LSFT(KC_RIGHT)),KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_W),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_T)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_B, MT(MOD_LCTL, KC_D), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_RCTL, KC_I), KC_J, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_LCTL, KC_D), KC_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
    COMBO(combo1, KC_ENTER),
    COMBO(combo2, ST_MACRO_5),
    COMBO(combo3, ST_MACRO_6),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DUAL_FUNC_0:
            return TAPPING_TERM + 50;
        case KC_X:
            return TAPPING_TERM + 50;
        case KC_R:
            return TAPPING_TERM + 50;
        case KC_F:
            return TAPPING_TERM + 50;
        case KC_L:
            return TAPPING_TERM + 50;
        case DUAL_FUNC_1:
            return TAPPING_TERM + 100;
        case MT(MOD_LSFT, KC_N):
            return TAPPING_TERM + 50;
        case KC_Z:
            return TAPPING_TERM + 50;
        case MT(MOD_RSFT, KC_E):
            return TAPPING_TERM + 50;
        case KC_H:
            return TAPPING_TERM + 50;
        case DUAL_FUNC_5:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

bool capslock_active = false;

// Magic key functionality
static uint16_t last_keycode = KC_NO;
static bool magic_key_active = false;

// Helper function to check if a keycode is a vowel
bool is_vowel(uint16_t keycode) {
    return (keycode == KC_A || keycode == KC_E || keycode == KC_I ||
            keycode == KC_O || keycode == KC_U);
}

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {18,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {18,255,248}, {18,255,248}, {18,255,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,248,225}, {139,234,239}, {139,234,239}, {139,234,239}, {9,248,225}, {0,0,0}, {9,248,225}, {139,234,239}, {139,234,239}, {139,234,239}, {9,248,225}, {0,0,0}, {0,0,0}, {139,234,239}, {139,234,239}, {139,234,239}, {9,248,225}, {0,0,0}, {9,248,225}, {139,234,239}, {9,248,225}, {139,234,239}, {9,248,225}, {0,0,0}, {9,248,225}, {9,248,225} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,234,239}, {9,248,225}, {139,234,239}, {0,0,0}, {0,0,0}, {9,248,225}, {139,234,239}, {18,255,248}, {139,234,239}, {0,0,0}, {9,248,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {9,248,225}, {0,0,0}, {139,234,239}, {0,0,0}, {0,0,0}, {0,0,0}, {9,248,225}, {139,234,239}, {18,255,248}, {139,234,239}, {0,0,0}, {18,255,248}, {139,234,239}, {18,255,248}, {18,255,248}, {18,255,248}, {139,234,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 3) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 94, 238, 225 });
    rgb_matrix_set_color( 37, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q)SS_DELAY(1)  SS_TAP(X_U));
      last_keycode = KC_QU;  // Track "qu" sequence
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(1)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_LBRC))SS_DELAY(1)  SS_RALT(SS_TAP(X_RBRC))SS_DELAY(1)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9))SS_DELAY(1)  SS_LSFT(SS_TAP(X_0))SS_DELAY(1)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_HOME)SS_DELAY(100)  SS_LSFT(SS_TAP(X_END)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(1)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(1)  SS_TAP(X_H));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SYSTEM_SLEEP);
        } else {
          unregister_code16(KC_SYSTEM_SLEEP);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_S);
        } else {
          unregister_code16(KC_S);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_SS);
        } else {
          unregister_code16(US_SS);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_UDIA);
        } else {
          unregister_code16(US_UDIA);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_ODIA);
        } else {
          unregister_code16(US_ODIA);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_ADIA);
        } else {
          unregister_code16(US_ADIA);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
          last_keycode = KC_U;  // Track for magic key
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_UDIA);
          last_keycode = KC_U;  // Track ü as u for magic key
        } else {
          unregister_code16(US_UDIA);
        }
      }
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
          last_keycode = KC_O;  // Track for magic key
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_ODIA);
          last_keycode = KC_O;  // Track ö as o for magic key
        } else {
          unregister_code16(US_ODIA);
        }
      }
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
          last_keycode = KC_A;  // Track for magic key
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_ADIA);
          last_keycode = KC_A;  // Track ä as a for magic key
        } else {
          unregister_code16(US_ADIA);
        }
      }
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_T);
          last_keycode = KC_T;  // Track for magic key
        } else {
          unregister_code16(KC_T);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_T));
          last_keycode = KC_NO;  // Don't track shifted T
        } else {
          unregister_code16(LSFT(KC_T));
        }
      }
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_IQUE);
        } else {
          unregister_code16(US_IQUE);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_IEXL);
        } else {
          unregister_code16(US_IEXL);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_COLN);
        } else {
          unregister_code16(KC_COLN);
        }  
      }  
      return false;
    case MAGIC_KEY:
      if (record->event.pressed) {
        // Magic key pressed - check last key
        if (last_keycode == KC_T || is_vowel(last_keycode)) {
          // Send 'h' for 't' or vowels
          register_code16(KC_H);
        } else if (last_keycode == KC_QU) {
          // Send backspace to delete 'u' from "qu"
          tap_code16(KC_BSPC);
        }
        magic_key_active = true;
      } else {
        if ((last_keycode == KC_T || is_vowel(last_keycode)) && magic_key_active) {
          unregister_code16(KC_H);
        }
        // KC_QU uses tap_code16, no need to unregister
        magic_key_active = false;
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }

  // Track last keycode for magic key functionality (for regular keys)
  if (record->event.pressed && keycode != MAGIC_KEY && keycode != DUAL_FUNC_9 &&
      keycode != DUAL_FUNC_5 && keycode != DUAL_FUNC_2 && keycode != DUAL_FUNC_3 && keycode != DUAL_FUNC_4) {
    // Handle mod-tap keys for I and E
    if (keycode == MT(MOD_RCTL, KC_I)) {
      if (record->tap.count > 0) {
        last_keycode = KC_I;  // Track I for magic key
      } else {
        last_keycode = KC_NO;  // Don't track when used as modifier
      }
    } else if (keycode == MT(MOD_RSFT, KC_E)) {
      if (record->tap.count > 0) {
        last_keycode = KC_E;  // Track E for magic key
      } else {
        last_keycode = KC_NO;  // Don't track when used as modifier
      }
    } else if (keycode >= KC_A && keycode <= KC_Z) {
      // For regular keycodes, store as-is
      last_keycode = keycode;
    } else {
      last_keycode = KC_NO;
    }
  }

  return true;
}
