#pragma once

#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define QUICK_TAP_TERM_PER_KEY
#define OLED_TIMEOUT 20000 // now OLED screens offs after 20 seconds.
#define OLED_BRIGHTNESS 50 // Max: 255, about 19% brightness
#define SPLIT_WPM_ENABLE   // Enable WPM across split keyboards (+268).
#define SPLIT_OLED_ENABLE  // Sync on/off OLED state between halves (+100).

#undef TAPPING_TERM
#define TAPPING_TERM 200

// #define TAP_CODE_DELAY 10

#if 0
#    define RGBLIGHT_SLEEP
//
#    define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#    define RGB_DI_PIN D3

#    ifdef RGB_MATRIX_ENABLE
#        define RGBLED_NUM 35 // Number of LEDs
#        define RGBLED_NUM 35 // Number of LEDs
#        define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    endif

#    ifdef RGBLIGHT_ENABLE
#        undef RGBLED_NUM

// #define RGBLIGHT_EFFECT_BREATHING
#        define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_TWINKLE

#        define RGBLED_NUM 70
// #define RGBLED_SPLIT
#        define RGBLED_SPLIT \
            { 35, 35 } // haven't figured out how to use this yet

// #define RGBLED_NUM 30
#        define RGBLIGHT_LIMIT_VAL 120
#        define RGBLIGHT_HUE_STEP 10
#        define RGBLIGHT_SAT_STEP 17
#        define RGBLIGHT_VAL_STEP 17
#    endif

#    ifdef RGB_MATRIX_ENABLE
#        define RGB_MATRIX_KEYPRESSES          // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#        define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#        define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#        define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.

#        define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT

#        define RGB_MATRIX_HUE_STEP 8
#        define RGB_MATRIX_SAT_STEP 8
#        define RGB_MATRIX_VAL_STEP 8
#        define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
// #   undef ENABLE_RGB_MATRIX_ALPHAS_MODS
// #   undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #   undef ENABLE_RGB_MATRIX_BREATHING
// #   undef ENABLE_RGB_MATRIX_CYCLE_ALL
// #   undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #   undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #   undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #   undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #   undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #   undef ENABLE_RGB_MATRIX_DUAL_BEACON
// #   undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #   undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #   undef ENABLE_RGB_MATRIX_RAINDROPS
// #   undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #   undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #   undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #   undef ENABLE_RGB_MATRIX_SPLASH
// #   undef ENABLE_RGB_MATRIX_MULTISPLASH
// #   undef ENABLE_RGB_MATRIX_SOLID_SPLASH
// #   undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#    endif
#endif
