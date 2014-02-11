static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  |   6  |           |   `  |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L3  |           | [    |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | \      |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | '      |
     * |--------+------+------+------+------+------| ~L1  |           | ~L1  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| Nop  | LGui | LAlt | LAlt |                                       |  Lft |  Dn  |  Up  | Rght | RAlt |
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
         TAB,    Q,    W,    E,    R,    T,  FN3,
        BSLS,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B,  FN1,
        LCTL,   NO, LGUI, LALT, LALT,
                                      HOME,  END,
                                            PGUP,
                                 FN2, BSPC, PGDN,
        // right hand
         GRV,    7,    8,    9,    0, MINS,  EQL,
        LBRC,    Y,    U,    I,    O,    P, RBRC,
                 H,    J,    K,    L, SCLN, QUOT,
         FN1,    N,    M, COMM,  DOT, SLSH, RSFT,
                    LEFT, DOWN,   UP, RGHT, RALT,
         DEL,  INS,
        PSCR,
        PAUS,  ENT, SPC
    ),

    /* Keymap 1: Fn keys, number pad, mouse controls
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  L0    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  Nop   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TRNS  |  Nop |MousUp|  Nop |  Nop |  Nop |  Nop |           |  Nop |  Nop |   7  |   8  |   9  |  Nop |  Nop   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Nop   |MousLf|MousDn|MousRt|  Nop |  Nop |------|           |------|  Nop |   4  |   5  |   6  |  Nop |  Nop   |
     * |--------+------+------+------+------+------| TRNS |           | TRNS |------+------+------+------+------+--------|
     * |  TRNS  |  Nop |  Nop |  Nop |  Nop |  Nop |      |           |      |  Nop |   1  |   2  |   3  |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | TRNS | Btn2 | TRNS | TRNS | TRNS |                                       |   0  |   0  |   .  | Btn1 | Btn2 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Nop |  Nop |       | Mute |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | VolUp|      |      |
     *                                 | Btn1 | TRNS |------|       |------| TRNS | TRNS |
     *                                 |      |      | TRNS |       | VolDn|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         FN0,   F1,   F2,   F3,   F4,   F5,   F6,
        TRNS,   NO, MS_U,   NO,   NO,   NO, TRNS,
          NO, MS_L, MS_D, MS_R,   NO,   NO,
        TRNS,   NO,   NO,   NO,   NO,   NO, TRNS,
        TRNS, BTN2, TRNS, TRNS, TRNS,
                                        NO,   NO,
                                            TRNS,
                                BTN1, TRNS, TRNS,
        // right hand
          F7,   F8,   F9,  F10,  F11,  F12,   NO,
          NO,   NO,   P7,   P8,   P9,   NO,   NO,
                NO,   P4,   P5,   P6,   NO,   NO,
        TRNS,   NO,   P1,   P2,   P3,   NO,   NO,
                      P0,   P0,  DOT, BTN1, BTN2,
        MUTE,   NO,
        VOLU,
        VOLD, TRNS, TRNS
    ),

    /* Keymap 2: Macro Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  L0    |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |           |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop | HshRckt|
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Indent |  Nop |  Nop |  Nop |  Nop | Type | TRNS |           |Braces|  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | IndentB|  Nop |  Nop |  Nop | File |  Nop |------|           |------|  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|  Nop |           |  Nop |------+------+------+------+------+--------|
     * |  Nop   |  Nop |  Nop |  Nop |  Nop |  Nop |      |           |      |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  Nop |  Nop |  Nop |  Nop |  Nop |                                       |  Nop |  Nop |  Nop |  Nop |  Nop |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Nop |  Nop |       |  Nop |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 |  Nop |  Nop |------|       |------|  Nop | TRNS |
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         FN0,  NO,  NO,  NO,  NO,  NO,  NO,
         FN4,  NO,  NO,  NO,  NO, FN9,TRNS,
         FN5,  NO,  NO,  NO, FN8,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                   NO,  NO,
                                        NO,
                            TRNS,  NO,  NO,
        // right hand
          NO,  NO,  NO,  NO,  NO,  NO, FN6,
         FN7,  NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
                    NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,TRNS
    ),

    /* Keymap 3: Clean Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  |   6  |           |   `  |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L0  |           |  [   |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | \      |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | '      |
     * |--------+------+------+------+------+------|  Nop |           |  Nop |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| Nop  | LGui | LAlt | LAlt |                                       |  Lft |  Dn  |  Up  | Rght | RAlt |
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
         TAB,    Q,    W,    E,    R,    T, TRNS,
        BSLS,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B,   NO,
        LCTL,   NO, LGUI, LALT, LALT,
                                      HOME,  END,
                                            PGUP,
                                 SPC, BSPC, PGDN,
        // right hand
         GRV,    7,    8,    9,    0, MINS,  EQL,
        LBRC,    Y,    U,    I,    O,    P, RBRC,
                 H,    J,    K,    L, SCLN, QUOT,
          NO,    N,    M, COMM,  DOT, SLSH, RSFT,
                    LEFT, DOWN,   UP, RGHT, RALT,
         DEL,  INS,
        PSCR,
        PAUS,  ENT, SPC
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/* id for user-defined macros */
enum macro_id {
    INDENT,
    INDENT_BUFFER,
    HASH_ROCKET,
    BRACES,
    FIND_FILE,
    FIND_TYPE,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
        case INDENT:
            // move to the beginning of the line, press tab, move to the next line
            return (event.pressed ?
                    MACRO(D(LCTRL), T(A), U(LCTRL), T(TAB), D(LCTRL), T(N), U(LCTRL), END) :
                    MACRO_NONE);
        case INDENT_BUFFER:
            // highlight the current buffer, call indent-region
            return (event.pressed ?
                    MACRO(D(LCTRL), T(X), U(LCTRL), T(H), D(LCTRL), D(LALT), T(BSLS), U(LALT), U(LCTRL), END) :
                    MACRO_NONE);
            // =>
        case HASH_ROCKET:
            return (event.pressed ?
                    MACRO(T(EQL), D(LSFT), T(DOT), U(LSFT), END) :
                    MACRO_NONE);
            // open curly brace, enter, tab
        case BRACES:
            return (event.pressed ?
                    MACRO(D(LSFT), T(LBRC), U(LSFT), T(ENT), T(TAB), END) :
                    MACRO_NONE);
        case FIND_FILE:
            return (event.pressed ?
                    MACRO(D(LCTRL), T(X), T(F), U(LCTRL), END) :
                    MACRO_NONE);
        case FIND_TYPE:
            return (event.pressed ?
                    MACRO(D(LCTRL), T(C), T(T), U(LCTRL), END) :
                    MACRO_NONE);
    }

    return MACRO_NONE;
}

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_SET(0, ON_RELEASE),                // FN0 - switch to layer0
    ACTION_LAYER_TAP_TOGGLE(1),                     // FN1 - tap/toggle Layer1
    ACTION_LAYER_TAP_KEY(2, KC_SPC),                // FN2 - space when tapped, layer2 when held
    ACTION_LAYER_TOGGLE(3),                         // FN3 - toggle layer 3

    ACTION_MACRO(INDENT),                           // FN4 - indent current line
    ACTION_MACRO(INDENT_BUFFER),                    // FN5 - indent current buffer
    ACTION_MACRO(HASH_ROCKET),                      // FN6 - type hash rocket
    ACTION_MACRO(BRACES),                           // FN7 - curly braces
    ACTION_MACRO(FIND_FILE),                        // FN8 - find file
    ACTION_MACRO(FIND_TYPE),                        // FN9 - find type
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


    /* Empty template for new layers
     *
     * Layer N:
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Nop   |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |           |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Nop   |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |           |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Nop   |  Nop |  Nop |  Nop |  Nop |  Nop |------|           |------|  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|  Nop |           |  Nop |------+------+------+------+------+--------|
     * |  Nop   |  Nop |  Nop |  Nop |  Nop |  Nop |      |           |      |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  Nop |  Nop |  Nop |  Nop |  Nop |                                       |  Nop |  Nop |  Nop |  Nop |  Nop |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Nop |  Nop |       |  Nop |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 |  Nop |  Nop |------|       |------|  Nop |  Nop |
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 `--------------------'       `--------------------'
    KEYMAP(
        // left hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                   NO,  NO,
                                        NO,
                              NO,  NO,  NO,
        // right hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
                    NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
    ),
     */
