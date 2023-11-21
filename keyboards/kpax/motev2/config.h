// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once



// 重启功能配置
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U






/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define PERMISSIVE_HOLD

// 旋钮配置
#define ENCODERS_PAD_A { GP3 }
#define ENCODERS_PAD_B { GP5 }
#define ENCODER_RESOLUTION 4
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
// 震动配置
#define SOLENOID_PIN GP25
#define HAPTIC_OFF_IN_LOW_POWER 1
#define SOLENOID_RANDOM_FIRE
#define SOLENOID_DEFAULT_BUZZ 1
#define SOLENOID_DEFAULT_DWELL 90
#define SOLENOID_MIN_DWELL 4
#define SOLENOID_MAX_DWELL 100
#define SOLENOID_DWELL_STEP_SIZE 10
#define SOLENOID_BUZZ_ACTUATED SOLENOID_MIN_DWELL
#define SOLENOID_BUZZ_NONACTUATED SOLENOID_MIN_DWELL
#define NO_HAPTIC_ALPHA
#define NO_HAPTIC_NUMERIC
#define NO_HAPTIC_NAV



// 灯光配置
#ifdef RGB_MATRIX_ENABLE
#    define WS2812_DI_PIN GP4
#    define WS2812_PIO_USE_PIO1
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_LED_COUNT 100
#    define RGB_MATRIX_SPLIT { 50, 50 }
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 40
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define RGB_MATRIX_DEFAULT_SPD 32

#endif





// 定义蜂鸣器针脚
#ifdef AUDIO_ENABLE
#define AUDIO_PIN GP2
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_DEFAULT 200.0f
#define AUDIO_CLICKY_FREQ_MIN 61.0f
#define AUDIO_CLICKY_FREQ_MAX 1500.0f
#define AUDIO_CLICKY_FREQ_FACTOR 1.18921f
#define AUDIO_CLICKY_FREQ_RANDOMNESS 1.0f
#define AUDIO_CLICKY_DELAY_DURATION 6
#define AUDIO_INIT_DELAY 2
#define STARTUP_SONG SONG(ROCK_A_BYE_BABY)
#define GOODBYE_SONG SONG(CAMPANELLA)
#define MUSIC_ON_SONG SONG(ZELDA_PUZZLE)
#endif


// 分体键盘配置
#define SPLIT_HAND_MATRIX_GRID GP18,GP9
#define SPLIT_HAND_MATRIX_GRID_LOW_IS_RIGHT
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_POINTING_ENABLE
#define SPLIT_HAPTIC_ENABLE
#define SPLIT_ACTIVITY_ENABLE
// 左右通讯
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_PIN_SWAP
#define SERIAL_PIO_USE_PIO0
// 强制全键无冲
#define FORCE_NKRO
// 设置vbus检测
// #define SPLIT_USB_TIMEOUT 5000
// #define SPLIT_USB_TIMEOUT_POLL 25
#define USB_VBUS_PIN GP19
// 定义刷机按钮位置
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 6
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0


#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0
