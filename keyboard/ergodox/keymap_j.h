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
    KEYMAP(
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

    /* Keymap 1: Fn keys, number pad, mouse controls
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | L0     |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  Nop   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Nop    |  Nop |MousUp|  Nop |  Nop |  Nop |  Nop |           |  Nop |  Nop |   7  |   8  |   9  |  Nop |  Nop   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Nop    |MousLf|MousDn|MousRt|  Nop |  Nop |------|           |------|  Nop |   4  |   5  |   6  |  Nop |  Nop   |
     * |--------+------+------+------+------+------| TRNS |           | TRNS |------+------+------+------+------+--------|
     * | Nop    |  Nop |  Nop |  Nop |  Nop |  Nop |      |           |      |  Nop |   1  |   2  |   3  |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Btn1 |  Nop |  Nop |  Nop |  Nop |                                       |   0  |   0  |   .  |  Nop |  Nop |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Nop |  Nop |       | Mute |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | VolUp|      |      |
     *                                 | Btn2 | TRNS |------|       |------| TRNS | TRNS |
     *                                 |      |      | TRNS |       | VolDn|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         FN0,   F1,   F2,   F3,   F4,   F5,   F6,
          NO,   NO, MS_U,   NO,   NO,   NO,   NO,
          NO, MS_L, MS_D, MS_R,   NO,   NO,
          NO,   NO,   NO,   NO,   NO,   NO, TRNS,
        BTN1,   NO,   NO,   NO,   NO,
                                        NO,   NO,
                                            TRNS,
                                BTN2, TRNS, TRNS,
        // right hand
          F7,   F8,   F9,  F10,  F11,  F12,   NO,
          NO,   NO,   P7,   P8,   P9,   NO,   NO,
                NO,   P4,   P5,   P6,   NO,   NO,
        TRNS,   NO,   P1,   P2,   P3,   NO,   NO,
                      P0,   P0,  DOT,   NO,   NO,
        MUTE,   NO,
        VOLU,
        VOLD, TRNS, TRNS
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
  ACTION_LAYER_SET(0, ON_RELEASE),                // FN0 - switch to layer0
  ACTION_LAYER_TAP_TOGGLE(1)                      // FN1 - tap/toggle Layer1
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

