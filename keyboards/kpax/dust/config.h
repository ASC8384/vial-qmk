// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// 强制全键无冲
#define FORCE_NKRO
// 设置vbus检测
// 定义刷机按钮位置
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
// 重启功能配置
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// spi配置给lcd和触控板用
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MOSI_PIN GP23
#define SPI_MISO_PIN GP20
// 显示屏针脚配置
#define LCD_RST_PIN GP26
#define LCD_DC_PIN GP20
#define LCD_CS_PIN GP21
#define STRONT_DISPLAY_LEFT
#define BACKLIGHT_PIN GP27
#define BACKLIGHT_PWM_DRIVER PWMD5
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B

// 显示屏超时关闭
// #define QUANTUM_PAINTER_DISPLAY_TIMEOUT 9000
// lvgl自定义
#define QUANTUM_PAINTER_LVGL_USE_CUSTOM_CONF

#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0
#define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS TRUE
#define QUANTUM_PAINTER_NUM_IMAGES 32
#define QUANTUM_PAINTER_CONCURRENT_ANIMATIONS 32
#define QUANTUM_PAINTER_PIXDATA_BUFFER_SIZE 32768

// 旋钮配置
#define ENCODERS_PAD_A \
    { GP3, GP24 }
#define ENCODERS_PAD_B \
    { GP5, GP25 }
// #define ENCODER_RESOLUTION 4
#define ENCODER_RESOLUTIONS \
    { 4, 8 }

// 震动配置
#ifdef HAPTIC_ENABLE
#    define HAPTIC_OFF_IN_LOW_POWER 0
#    define NO_HAPTIC_FN
#    define NO_HAPTIC_ALPHA
#    define NO_HAPTIC_PUNCTUATION
#    define NO_HAPTIC_NAV
#    define NO_HAPTIC_NUMERIC
#    define DRV2605L_GREETING 7
#    define DRV2605L_DEFAULT_MODE DRV2605L_EFFECT_SHARP_TICK_1_100
// DRV2605L 线性马达设置 LRA
#    define DRV2605L_FB_ERM_LRA 1
#    define DRV2605L_FB_BRAKEFACTOR 3 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#    define DRV2605L_FB_LOOPGAIN 1    /* For  Low:0, Medium:1, High:2, Very High:3 */

#    define DRV2605L_RATED_VOLTAGE 5
#    define DRV2605L_V_PEAK 2.8
#    define DRV2605L_V_RMS 2.0
#    define DRV2605L_F_LRA 220 /* resonance freq */
// drv2605l的i2c配置
#    define I2C_DRIVER I2CD1
#    define I2C1_SCL_PIN GP7
#    define I2C1_SDA_PIN GP6
// #define MY_I2C_ADDRESS (0x5A << 1)
// #define DRV2605L_I2C_ADDRESS (0x5A << 1)
#endif

// 灯光配置
#ifdef RGB_MATRIX_ENABLE
#    define WS2812_DI_PIN GP4
#    define WS2812_PIO_USE_PIO1
#    define RGB_MATRIX_LED_COUNT 21
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_SLEEP
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_KEYPRESSES
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_HUE_BREATHING
#    define ENABLE_RGB_MATRIX_HUE_PENDULUM
#    define ENABLE_RGB_MATRIX_HUE_WAVE
#    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#    define ENABLE_RGB_MATRIX_PIXEL_FLOW
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
// 开机灯效和速度
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define RGB_MATRIX_DEFAULT_SPD 80
#endif

// 音效蜂鸣器配置
#ifdef AUDIO_ENABLE
#    define AUDIO_VOICES
#    define AUDIO_PIN GP2
#    define AUDIO_PWM_DRIVER PWMD1
#    define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#    define AUDIO_CLICKY
#    define AUDIO_CLICKY_FREQ_DEFAULT 1500.0f
#    define AUDIO_CLICKY_FREQ_MIN 61.0f
#    define AUDIO_CLICKY_FREQ_MAX 1500.0f
#    define AUDIO_CLICKY_FREQ_FACTOR 1.18921f
#    define AUDIO_CLICKY_FREQ_RANDOMNESS 1.0f
#    define AUDIO_CLICKY_DELAY_DURATION 6
#    define AUDIO_INIT_DELAY 2
#    define STARTUP_SONG SONG(ROCK_A_BYE_BABY)
#    define GOODBYE_SONG SONG(CAMPANELLA)
#    define MUSIC_ON_SONG SONG(ZELDA_PUZZLE)
#    define AUDIO_VOICES
#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND) }
#endif

/* Fix for Apple Silicon Macs struggling to detect board after suspend/sleep */
#define USB_SUSPEND_WAKEUP_DELAY 200

/* CRC. */
// #define CRC8_USE_TABLE
// #define CRC8_OPTIMIZE_SPEED
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

// #define PERMISSIVE_HOLD

// #ifdef OLED_ENABLE
// #define OLED_DISPLAY_128X32
// #define I2C_DRIVER I2CD1
// #define OLED_BRIGostTNESS 128
// #endif

// vial配置
#define VIAL_KEYBOARD_UID \
    { 0xF6, 0x56, 0xB6, 0x63, 0x1A, 0xFA, 0x56, 0x30 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 6 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0 }

#define VIAL_COMBO_ENTRIES 20

#define DYNAMIC_KEYMAP_MACRO_COUNT 50

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// 定义去抖
#define DEBOUNCE 10
