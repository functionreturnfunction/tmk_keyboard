#include "action_layer.h"

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
        case THATS_WHAT_SHE_SAID:
            return SIMPLE_MACRO(T(T), T(W), T(S), T(S));
    }

    return MACRO_NONE;
}

void state_layer(keyevent_t event)
{
    uint8_t layer = biton32(layer_state);
    const macro_t *macro;

    switch (layer) {
        case 0:
            macro = SIMPLE_MACRO(T(D), T(E), T(F), T(A), T(U), T(L), T(T));
            break;
        case 1:
            macro = SIMPLE_MACRO(T(N), T(U), T(M), T(B), T(E), T(R), T(S));
            break;
        case 2:
            macro = SIMPLE_MACRO(T(M), T(A), T(C), T(R), T(O), T(S));
            break;
        case 3:
            macro = SIMPLE_MACRO(T(C), T(L), T(E), T(A), T(N));
            break;
        default:
            macro = SIMPLE_MACRO(T(V), SFT_(T(O)), T(V));
            break;
    }

    action_macro_play(macro);
}


void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");

    if (!event.pressed) {
        return;
    }

    switch (id) {
        case TEENSY_KEY:
            clear_keyboard();
            print("\n\nJump to bootloader... ");
            _delay_ms(250);
            bootloader_jump(); // should not return
            print("not supported.\n");
            break;
        case BLINKENLIGHTS:
            ergodox_blink_all_leds();
            break;
        case STATE_LAYER:
            state_layer(event);
            break;
    }
}
