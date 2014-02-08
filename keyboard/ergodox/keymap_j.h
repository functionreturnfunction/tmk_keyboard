static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  |   6  |           |   `  |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | Nop  |           | [    |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | \      |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | '      |
     * |--------+------+------+------+------+------| ~L1  |           | ~L1  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| Nop  | LGui | LAlt | LAlt |                                       |  Lft |  Dn  |  Up  | Rght | RCtrl|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Home | End  |       | Del  | Ins  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | PgDn |       | PrScr|      |      |
     *                                 | Space| BkSpc|------|       |------| Enter| Space|
     *                                 |      |      | PgUp |       | Pause|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layout: layer 0: default
        // left hand
         ESC,    1,    2,    3,    4,    5,    6,
         TAB,    Q,    W,    E,    R,    T,   NO,
        BSLS,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B,  FN1,
        LCTL,   NO, LGUI, LALT, LALT,
                                      HOME,  END,
                                            PGUP,
                                 SPC, BSPC, PGDN,
        // right hand
         GRV,    7,    8,    9,    0, MINS,  EQL,
        LBRC,    Y,    U,    I,    O,    P, RBRC,
                 H,    J,    K,    L, SCLN, QUOT,
         FN1,    N,    M, COMM,  DOT, SLSH, RSFT,
                    LEFT, DOWN,   UP, RGHT, RCTL,
         DEL,  INS,
        PSCR,
        PAUS,  ENT, SPC
    ),

    KEYMAP(  // layout: layer 1: F-keys instead of numbers
        // left hand
         FN0,   F1,   F2,   F3,   F4,   F5,   F6,
          NO,   NO, MS_U,   NO,   NO,   NO,   NO,
          NO, MS_L, MS_D, MS_R,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO,  FN0,
        BTN1,   NO,   NO,   NO,   NO,
                                        NO,   NO,
                                            WH_U,
                                BTN3,   NO, WH_D,
        // right hand
          F7,   F8,   F9,  F10,  F11,  F12,   NO,
          NO,   NO,   P7,   P8,   P9,   NO,   NO,
                NO,   P4,   P5,   P6,   NO,   NO,
         FN0,   NO,   P1,   P2,   P3,   NO,   NO,
                      P0,   P0,  DOT,   NO,   NO,
          NO,   NO,
          NO,
          NO, TRNS, TRNS
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
  ACTION_LAYER_SET(0, ON_RELEASE),                // FN1 - switch to layer0
  ACTION_LAYER_TAP_TOGGLE(1)                      // FN2 - tap/toggle Layer1
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

