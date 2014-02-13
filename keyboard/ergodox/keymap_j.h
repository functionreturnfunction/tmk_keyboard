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
     *                                 | L2/  |      | PgDn |       | PrScr|      |      |
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
     * |  L0    | C-x 1| C-x 2| C-x 3|  Nop |  Nop |  Nop |           |HomPth|  Nop |  Nop |  Nop |  Nop |  Nop | HshRckt|
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Indent |  Nop |  Nop |  Nop |  Nop | Type | TRNS |           |Braces|  M-{ |  Nop |  Nop |  Nop |  Nop |  M-}   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | IndentB|  Nop |C-xC-s|  Nop |C-xC-f|  Nop |------|           |------|  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|  Nop |           |  Nop |------+------+------+------+------+--------|
     * |  Nop   |  Nop |  Nop |  Nop |  Nop |  Nop |      |           |      |  Nop |  Nop |  M-< |  M-> |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  Nop |  Nop |  Nop |  Nop |  Nop |                                       |  Nop |  Nop |  Nop |  Nop |TEENSY|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Nop |  Nop |       |  Nop |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 | TRNS |  Nop |------|       |------|  Nop |  Nop |
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         FN0,FN11,FN12,FN13,  NO,  NO,  NO,
         FN4,  NO,  NO,  NO,  NO, FN9,TRNS,
         FN5,  NO,FN14,  NO, FN8,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                   NO,  NO,
                                        NO,
                            TRNS,  NO,  NO,
        // right hand
        FN10,  NO,  NO,  NO,  NO,  NO, FN6,
         FN7,FN15,  NO,  NO,  NO,  NO,FN16,
               NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,FN17,FN18,  NO,  NO,
                    NO,  NO,  NO,  NO,FN19,
          NO,  NO,
          NO,
          NO,  NO,  NO
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
    HOME_PATH,
    DELETE_OTHER_WINDOWS,
    SPLIT_WINDOW_BELOW,
    SPLIT_WINDOW_RIGHT,
    SAVE_BUFFER,
    BACKWARD_PARAGRAPH,
    FORWARD_PARAGRAPH,
    BEGINNING_OF_BUFFER,
    END_OF_BUFFER,
};

#define C_(...) D(LCTRL), __VA_ARGS__, U(LCTRL)
#define M_(...) D(LALT), __VA_ARGS__, U(LALT)
#define SFT_(...) D(LSFT), __VA_ARGS__, U(LSFT)
#define C_X_COMMA C_(T(X))
#define SIMPLE_MACRO(...) (event.pressed ? MACRO(__VA_ARGS__, END) : MACRO_NONE)
#define NAVIGATE_MACRO(key) (event.pressed ? MACRO(D(LALT), D(LSFT), D(key), END) : MACRO(U(key), U(LALT), U(LSFT), END))

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
            // move to the beginning of the line, press tab, move to the next line
        case INDENT:
            return SIMPLE_MACRO(C_(T(A)), T(TAB), C_(T(N)));
            // highlight the current buffer, call indent-region
        case INDENT_BUFFER:
            return SIMPLE_MACRO(C_X_COMMA, T(H), C_(M_(T(BSLS))));
            // =>
        case HASH_ROCKET:
            return SIMPLE_MACRO(T(EQL), SFT_(T(DOT)));
            // open curly brace, enter, tab
        case BRACES:
            return SIMPLE_MACRO(SFT_(T(LBRC)), T(ENT), T(TAB));
            // C-x, C-f
        case FIND_FILE:
            return SIMPLE_MACRO(C_(T(X), T(F)));
            // C-c, C-t (visual studio)
        case FIND_TYPE:
            return SIMPLE_MACRO(C_(T(C), T(T)));
            // ~/
        case HOME_PATH:
            return SIMPLE_MACRO(SFT_(T(GRV)), T(SLSH));
            // C-x, 1
        case DELETE_OTHER_WINDOWS:
            return SIMPLE_MACRO(C_X_COMMA, T(1));
            // C-x, 2
        case SPLIT_WINDOW_BELOW:
            return SIMPLE_MACRO(C_X_COMMA, T(2));
            // C-x, 3
        case SPLIT_WINDOW_RIGHT:
            return SIMPLE_MACRO(C_X_COMMA, T(3));
            // C-x, C-s
        case SAVE_BUFFER:
            return SIMPLE_MACRO(C_(T(X), T(S)));
            // M-{
        case BACKWARD_PARAGRAPH:
            return NAVIGATE_MACRO(LBRC);
            // M-}
        case FORWARD_PARAGRAPH:
            return NAVIGATE_MACRO(RBRC);
            // M-<
        case BEGINNING_OF_BUFFER:
            return NAVIGATE_MACRO(COMM);
            // M->
        case END_OF_BUFFER:
            return NAVIGATE_MACRO(DOT);
        /* case BACKWARD_PARAGRAPH: */
        /*     return SIMPLE_MACRO(M_(SFT_(T(LBRC)))); */
        /*     // M-} */
        /* case FORWARD_PARAGRAPH: */
        /*     return SIMPLE_MACRO(M_(SFT_(T(RBRC)))); */
        /*     // M-< */
        /* case BEGINNING_OF_BUFFER: */
        /*     return SIMPLE_MACRO(M_(SFT_(T(COMM)))); */
        /*     // M-> */
        /* case END_OF_BUFFER: */
        /*     return SIMPLE_MACRO(M_(SFT_(T(DOT)))); */
    }

    return MACRO_NONE;
}

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_SET(0, ON_RELEASE),                // FN0  - switch to layer0
    ACTION_LAYER_TAP_TOGGLE(1),                     // FN1  - tap/toggle Layer1
    ACTION_LAYER_TAP_KEY(2, KC_SPC),                // FN2  - space when tapped, layer2 when held
    ACTION_LAYER_TOGGLE(3),                         // FN3  - toggle layer 3

    ACTION_MACRO(INDENT),                           // FN4  - indent current line
    ACTION_MACRO(INDENT_BUFFER),                    // FN5  - indent current buffer
    ACTION_MACRO(HASH_ROCKET),                      // FN6  - type =>
    ACTION_MACRO(BRACES),                           // FN7  - curly braces
    ACTION_MACRO(FIND_FILE),                        // FN8  - find file
    ACTION_MACRO(FIND_TYPE),                        // FN9  - find type
    ACTION_MACRO(HOME_PATH),                        // FN10 - type ~/
    ACTION_MACRO(DELETE_OTHER_WINDOWS),             // FN11 - C-x 1
    ACTION_MACRO(SPLIT_WINDOW_BELOW),               // FN12 - C-x 2
    ACTION_MACRO(SPLIT_WINDOW_RIGHT),               // FN13 - C-x 3
    ACTION_MACRO(SAVE_BUFFER),                      // FN14 - C-x, C-s
    ACTION_MACRO(BACKWARD_PARAGRAPH),               // FN15 - M-{
    ACTION_MACRO(FORWARD_PARAGRAPH),                // FN16 - M-}
    ACTION_MACRO(BEGINNING_OF_BUFFER),              // FN17 - M-<
    ACTION_MACRO(END_OF_BUFFER),                    // FN18 - M->
    ACTION_FUNCTION(TEENSY_KEY),                    // FN19 - teensy key
}; // NOTE TO J: YOU ONLY HAVE 32 OF THESE TO PLAY WITH, BUT THERE MAY BE WAYS TO WORK AROUND THAT

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
