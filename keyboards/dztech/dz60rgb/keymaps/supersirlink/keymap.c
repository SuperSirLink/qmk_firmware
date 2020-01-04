#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
┌-------------------------------------------------------------------------------------------------------------------------------------------------┐
|   Esc   |    1    |    2    |    3    |    4    |    5    |    6    |    7    |    8    |    9    |    0    |    -    |    =    |   Backspace   |
|    ~    |    !    |    @    |    #    |    $    |    %    |    ^    |    &    |    *    |    (    |    )    |    _    |    +    |               |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------------┤
|     Tab    |    Q    |    W    |    E    |    R    |    T    |    Y    |    U    |    I    |    O    |    P    |    [    |    ]    |     \      |
|            |         |         |         |         |         |         |         |         |         |         |         |         |            |
|------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+------------┤
|      Fn       |    A    |    S    |    D    |    F    |    G    |    H    |    J    |    K    |    L    |    ;    |    '    |       Enter       |
|               |         |         |         |         |         |         |         |         |         |         |         |                   |
|---------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+-------------------┤
|      LShift       |    Z    |    X    |    C    |     V    |    B    |    N    |    M    |    ,    |    .    |    RShift    |    Up   |    /    |
|                   |         |         |         |          |         |         |         |         |         |              |         |    ?    |
|-------------------+---------+---------+---------+----------+---------+---------+---------+---------+---------+--------------+---------+---------┤
|   Ctrl   |    Alt    |    Cmd    |                            Space                           |   Cmd   |   FN    |  Left   |  Down   |  Right  |
|          |           |           |                                                            |         |         |         |         |         |
└-------------------------------------------------------------------------------------------------------------------------------------------------┘
*/
	[_LAYER0] = LAYOUT(
	    KC_GESC,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,           KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,
	    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,           KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,
	    MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,           KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,
	    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,           KC_COMM,    KC_DOT,     KC_RSFT,    KC_UP,      KC_SLSH,
	    KC_LCTL,    KC_LALT,    KC_LGUI,    KC_SPC,     KC_LGUI,    MO(1),      KC_LEFT,    KC_DOWN,        KC_RGHT),
/*
┌-------------------------------------------------------------------------------------------------------------------------------------------------┐
|    `    |    F1   |    F2   |    F3   |    F4   |    F5   |    F6   |    F7   |    F8   |    F9   |   F10   |   F11   |   F12   |    Delete     |
|         |         |         |         |         |         |         |         |         |         |         |         |         |               |
|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------------┤
|   RGB      |         |   Up    |         |  Reset  |   RGB   |   RGB   |         |   Up    |         |         |  Home   |  Page   |  RGB       |
|   Mode +   |         |         |         |         |Effect + |Effect - |         |         |         |         |         |   Up    |  Mode -    |
|------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+------------┤
|     Trans     |  Left   |  Down   |  Right  |         |   RGB   |   RGB   |  Left   |  Down   |  Right  |   End   |  Page   |        RGB        |
|               |         |         |         |         |  Hue +  |  Hue -  |         |         |         |         |  Down   |       Toggle      |
|---------------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+-------------------┤
|       RGB         |   RGB   |         |         |          |   RGB   |   RGB   |         |         |         |   RShift     | RGB     |  Reset  |
|   Brightness +    |  Plain  |         |         |          |  Sat +  |  Sat -  |         |         |         |              |Bright + |         |
|-------------------+---------+---------+---------+----------+---------+---------+---------+---------+---------+--------------+---------+---------┤
|   Ctrl   |    Alt    |    Cmd    |                            Caps                            |  Eject  |  Trans  |         | RGB     |         |
|          |           |           |                            Lock                            |         |         |         |Bright - |         |
└-------------------------------------------------------------------------------------------------------------------------------------------------┘
*/
	[_LAYER1] = LAYOUT(
	    KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,          KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,
	    RGB_MOD,    KC_NO,      KC_UP,      KC_NO,      RESET,      RGB_SPI,    RGB_SPD,    KC_NO,          KC_UP,      KC_NO,      KC_NO,      KC_HOME,    KC_PGUP,    RGB_RMOD,
	    KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_NO,      RGB_HUI,    RGB_HUD,    KC_LEFT,        KC_DOWN,    KC_RIGHT,   KC_END,     KC_PGDN,    RGB_TOG,
	    KC_LSFT,    RGB_M_P,    KC_NO,      KC_NO,      KC_NO,      RGB_SAI,    RGB_SAD,    KC_NO,          KC_NO,      KC_NO,      KC_RSFT,    RGB_VAI,    RESET,
	    KC_LCTL,    KC_LALT,    KC_LGUI,    KC_CAPS,    KC_EJCT,    KC_TRNS,    KC_NO,    RGB_VAD,    KC_NO)
};


void keyboard_pre_init_user(void) {
    // user pre initialization
}

void matrix_init_user(void) {
    //user initialization
}

void keyboard_post_init_user(void) {
    // user post initialization
}

void matrix_scan_user(void) {
    //user matrix
}

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RESET:
            if (record->event.pressed && (get_mods() & (MOD_MASK_CA)) == MOD_MASK_CA) {
                return true;
            } else {
                return false;
            }
    }
    return true;
}

uint32_t default_layer_state_set_user(uint32_t state) {
uint32_t layer_state_set_user(uint32_t state) { */
/*
    switch (biton32(state)) {
    case _LAYER0:
      rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_RGB_LAYER0);
      break;
    }
    return state;
}

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case _LAYER1:
      rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_RGB_LAYER1);
      break;
    default:
      default_layer_state_set_user(default_layer_state);
      break;
    }
  return state;
}
*/
