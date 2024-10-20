// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI1 TRUE
// 打开pwm给rgb用。
#undef RP_PWM_USE_PWM6
#define RP_PWM_USE_PWM6 TRUE
// 打开pwm给音频用
#undef RP_PWM_USE_PWM1
#define RP_PWM_USE_PWM1 TRUE
// 打开pwm给lcd背光用
#undef RP_PWM_USE_PWM7
#define RP_PWM_USE_PWM7 TRUE
// 打开adc给摇杆用
#undef RP_PWM_USE_ADC1
#define RP_PWM_USE_ADC1 TRUE
// 打开i2c给oled用
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 TRUE


