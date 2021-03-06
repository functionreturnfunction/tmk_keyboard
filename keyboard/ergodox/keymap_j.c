#include <util/delay.h>
#include "action_layer.h"
#include "action_util.h"
#include "bootloader.h"
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  |   6  |           |   `  |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  Nop |           | [    |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | \      |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | '      |
     * |--------+------+------+------+------+------| ~L3  |           | ~L3  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LCtrl| LGui | LAlt | LAlt |                                       |  Lft |  Dn  |  Up  | Rght | RCtrl|
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
         TAB,    Q,    W,    E,    R,    T,   NO,
        BSLS,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B,  FN1,
        LCTL, LCTL, LGUI, LALT, LALT,
                                      HOME,  END,
                                            PGUP,
                                 FN2, BSPC, PGDN,
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

    /* Keymap 1: Clean Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  |   6  |           |   `  |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L0  |           |  [   |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | \      |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | '      |
     * |--------+------+------+------+------+------|  ~L3 |           |  ~L3 |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LCtrl| LGui | LAlt | LAlt |                                       |  Lft |  Dn  |  Up  | Rght | RAlt |
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
         TAB,    Q,    W,    E,    R,    T,  FN0,
        BSLS,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B,  FN1,
        LCTL, LCTL, LGUI, LALT, LALT,
                                      HOME,  END,
                                            PGUP,
                                 SPC, BSPC, PGDN,
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

    /* Keymap 2: Macro Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Lock  | C-x 1| C-x 2| C-x 3|  Nop |  Nop |  Nop |           |HomPth|  Nop |  Nop |  Nop |  Nop |  Nop | HshRckt|
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Indent |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |           |  M-{ |  Nop |  Nop |  Nop | C-x,o|  Nop |  M-}   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | IndentB|  Nop |C-xC-s|  Nop |C-xC-f|  C-g |------|           |------|  Nop |  Nop | KillB|  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|  Nop |           |  Nop |------+------+------+------+------+--------|
     * |  Nop   |  Nop |  Nop |  Nop |  Nop | C-x,b|      |           |      |  Nop |  Nop |  M-< |  M-> |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  Nop |  Nop |  Nop |  Nop |  Nop |                                       |  Nop |  Nop |  Nop |  Nop |  Nop |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Nop |  Nop |       |  Nop |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 | TRNS |  Nop |------|       |------|  Nop | Nop  |
     *                                 |      |      |  Nop |       |  Nop |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         FN9, FN12, FN13, FN14,   NO,   NO,   NO,
         FN6,   NO,   NO,   NO,   NO,   NO,   NO,
         FN7,   NO, FN15,   NO, FN10, FN23,
          NO,   NO,   NO,   NO,   NO, FN20,   NO,
          NO,   NO,   NO,   NO,   NO,
                                        NO,   NO,
                                              NO,
                                TRNS,   NO,   NO,
        // right hand
        FN11,   NO,   NO,   NO,   NO,   NO,  FN8,
        FN16,   NO,   NO,   NO, FN22,   NO, FN17,
                NO,   NO, FN21,   NO,   NO,   NO,
          NO,   NO,   NO, FN18, FN19,   NO,   NO,
                      NO,   NO,   NO,   NO,   NO,
          NO,   NO,
          NO,
          NO,   NO,   NO
    ),

    /* Keymap 3: Fn keys, number pad, mouse controls
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  L0    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  Nop   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TRNS  |  Nop |MousUp|  Nop |  Nop |  Nop |  L4  |           |  L1  |  Nop |   7  |   8  |   9  |  NUM |  Nop   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Nop   |MousLf|MousDn|MousRt|  Nop |  Nop |------|           |------|  Nop |   4  |   5  |   6  |  Nop |  Nop   |
     * |--------+------+------+------+------+------| TRNS |           | TRNS |------+------+------+------+------+--------|
     * |  TRNS  |  Nop |  Nop |  Nop |  Nop |  Nop |      |           |      |  Nop |   1  |   2  |   3  | TRNS |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | TRNS | TRNS | TRNS | TRNS | TRNS |                                       |   0  |   0  |   .  | Btn1 | Btn2 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Btn2 |  Nop |       | Mute |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | VolUp|      |      |
     *                                 | Btn1 | TRNS |------|       |------| TRNS | TRNS |
     *                                 |      |      | TRNS |       | VolDn|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         FN0,   F1,   F2,   F3,   F4,   F5,   F6,
        TRNS,   NO, MS_U,   NO,   NO,   NO,  FN3,
          NO, MS_L, MS_D, MS_R,   NO,   NO,
        TRNS,   NO,   NO,   NO,   NO,   NO, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      BTN2,   NO,
                                            TRNS,
                                BTN1, TRNS, TRNS,
        // right hand
          F7,   F8,   F9,  F10,  F11,  F12,   NO,
         FN4,   NO,   P7,   P8,   P9, NLCK,   NO,
                NO,   P4,   P5,   P6,   NO,   NO,
        TRNS,   NO,   P1,   P2,   P3, TRNS,   NO,
                      P0,   P0,  DOT, BTN1, BTN2,
        MUTE,   NO,
        VOLU,
        VOLD, TRNS, TRNS
    ),

    /* Keymap 4: Gaming Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  |   6  |           |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L0  |           |  Nop |  Nop |  Nop |  Up  |  Nop |  Nop |  Nop   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | \      |   A  |   S  |   D  |   F  |   G  |------|           |------|  Nop |  Lft |  Dn  | Rght |  Nop |  Nop   |
     * |--------+------+------+------+------+------|  Nop |           |  Nop |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |  Nop |  Nop |  Nop |  Nop |  Nop |  Nop   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LCtrl| LGui | LAlt | LAlt |                                       |  Alt |  Nop |  Nop |  Nop | Ctrl |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Home | End  |       | Mute |  Nop |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | PgDn |       | VolUp|      |      |
     *                                 | Space| BkSpc|------|       |------| Enter| Space|
     *                                 |      |      | PgUp |       | VolDn|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         ESC,    1,    2,    3,    4,    5,    6,
         TAB,    Q,    W,    E,    R,    T,  FN0,
        BSLS,    A,    S,    D,    F,    G,
        LSFT,    Z,    X,    C,    V,    B,   NO,
        LCTL, LCTL, LGUI, LALT, LALT,
                                      HOME,  END,
                                            PGUP,
                                 SPC, BSPC, PGDN,
        // right hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  UP,  NO,  NO,  NO,
               NO,LEFT,DOWN,RGHT,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
                  RALT,  NO,  NO,  NO,RCTL,
        MUTE,  NO,
        VOLU,
        VOLD, ENT, SPC
    ),

};

/* id for user defined functions */
enum function_id {
    BLINKENLIGHTS,
};

/* id for user-defined macros */
enum macro_id {
    INDENT,
    INDENT_BUFFER,
    HASH_ROCKET,
    BRACES,
    FIND_FILE,
    HOME_PATH,
    DELETE_OTHER_WINDOWS,
    SPLIT_WINDOW_BELOW,
    SPLIT_WINDOW_RIGHT,
    SAVE_BUFFER,
    BACKWARD_PARAGRAPH,
    FORWARD_PARAGRAPH,
    BEGINNING_OF_BUFFER,
    END_OF_BUFFER,
    THATS_WHAT_SHE_SAID,
    LOCK_MACHINE,
    KILL_BUFFER,
    SWITCH_BUFFER,
    OTHER_BUFFER,
    C_G,
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [ 0] =     ACTION_LAYER_SET(0, ON_RELEASE),                // FN0  - switch to layer0
    [ 1] =     ACTION_LAYER_TAP_TOGGLE(3),                     // FN1  - tap/toggle Layer3
    [ 2] =     ACTION_LAYER_TAP_KEY(2, KC_SPC),                // FN2  - space when tapped, layer2 when held
    [ 3] =     ACTION_LAYER_TOGGLE(4),                         // FN3  - toggle layer4
    [ 4] =     ACTION_LAYER_TOGGLE(1),                         // FN4  - toggle layer1

    [ 6] =     ACTION_MACRO(INDENT),                           // FN6  - indent current line
    [ 7] =     ACTION_MACRO(INDENT_BUFFER),                    // FN7  - indent current buffer
    [ 8] =     ACTION_MACRO(HASH_ROCKET),                      // FN8  - type =>
    [ 9] =     ACTION_MACRO(LOCK_MACHINE),                     // FN9  - Win+L
    [10] =     ACTION_MACRO(FIND_FILE),                        // FN10 - C-x, C-f
    [11] =     ACTION_MACRO(HOME_PATH),                        // FN11 - type ~/
    [12] =     ACTION_MACRO(DELETE_OTHER_WINDOWS),             // FN12 - C-x 1
    [13] =     ACTION_MACRO(SPLIT_WINDOW_BELOW),               // FN13 - C-x 2
    [14] =     ACTION_MACRO(SPLIT_WINDOW_RIGHT),               // FN14 - C-x 3
    [15] =     ACTION_MACRO(SAVE_BUFFER),                      // FN15 - C-x, C-s
    [16] =     ACTION_MACRO(BACKWARD_PARAGRAPH),               // FN16 - M-{
    [17] =     ACTION_MACRO(FORWARD_PARAGRAPH),                // FN17 - M-}
    [18] =     ACTION_MACRO(BEGINNING_OF_BUFFER),              // FN18 - M-<
    [19] =     ACTION_MACRO(END_OF_BUFFER),                    // FN19 - M->
    [20] =     ACTION_MACRO(SWITCH_BUFFER),                    // FN20 - C-x, b
    [21] =     ACTION_MACRO(KILL_BUFFER),                      // FN21 - kill current buffer
    [22] =     ACTION_MACRO(OTHER_BUFFER),                     // FN22 - C-x, o
    [23] =     ACTION_MACRO(C_G),                              // FN23 - C-g

    [30] =     ACTION_FUNCTION(BLINKENLIGHTS),                 // FN30 - das blinkenlights
}; // NOTE TO J: YOU ONLY HAVE 32 OF THESE TO PLAY WITH, BUT THERE MAY BE WAYS TO WORK AROUND THAT

#define C_(...) D(LCTRL), __VA_ARGS__, U(LCTRL)
#define M_(...) D(LALT), __VA_ARGS__, U(LALT)
#define SFT_(...) D(LSFT), __VA_ARGS__, U(LSFT)
#define C_X_COMMA C_(T(X))
#define SIMPLE_MACRO(...) (event.pressed ? MACRO(__VA_ARGS__, END) : MACRO_NONE)
#define NAVIGATE_MACRO(key) (event.pressed ? MACRO(D(LALT), D(LSFT), D(key), END) : MACRO(U(key), U(LALT), U(LSFT), END))

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    // TODO: figure out what this guy does!
    // tap_t tap = record->tap;

    switch (id) {
            // move to the beginning of the line, press tab, move to the next line
        case INDENT:
            return SIMPLE_MACRO(C_(T(A)), T(TAB), C_(T(N)));
            // highlight the current buffer, call indent-region
        case INDENT_BUFFER:
            return SIMPLE_MACRO(C_(M_(SFT_(T(BSLS)))));
            // =>
        case HASH_ROCKET:
            return SIMPLE_MACRO(T(EQL), SFT_(T(DOT)));
            // open curly brace, enter, tab
        case BRACES:
            return SIMPLE_MACRO(SFT_(T(LBRC)), T(ENT), T(TAB));
            // C-x, C-f
        case FIND_FILE:
            return SIMPLE_MACRO(C_(T(X), T(F)));
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
            return SIMPLE_MACRO(C_(T(X)), C_(T(S)), U(LCTRL));
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
            // C-x, b
        case SWITCH_BUFFER:
            return SIMPLE_MACRO(C_X_COMMA, T(B));
            // C-x, o
        case OTHER_BUFFER:
            return SIMPLE_MACRO(C_X_COMMA, T(O));
            // Win+L
        case LOCK_MACHINE:
            return SIMPLE_MACRO(D(LGUI), T(L), U(LGUI));
            // C-x, k, enter
        case KILL_BUFFER:
            return SIMPLE_MACRO(C_X_COMMA, T(K), T(ENT));
        case C_G:
            return SIMPLE_MACRO(C_(T(G)));
    }

    return MACRO_NONE;
}


void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    // ensure we're not duplicating a command
    if (!event.pressed) {
        return;
    }

    switch (id) {
        case BLINKENLIGHTS:
            ergodox_blink_all_leds();
            break;
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
