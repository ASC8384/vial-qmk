// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "quantum.h"




// 改变点设备dpi
// #ifdef POINTING_DEVICE_ENABLE
// #    ifndef NO_DILEMMA_KEYCODES
// enum dilemma_keycodes {
//     POINTER_DEFAULT_DPI_FORWARD = QK_KB_0,
//     POINTER_DEFAULT_DPI_REVERSE,
//     POINTER_SNIPING_DPI_FORWARD,
//     POINTER_SNIPING_DPI_REVERSE,
//     SNIPING_MODE,
//     SNIPING_MODE_TOGGLE,
//     DRAGSCROLL_MODE,
//     DRAGSCROLL_MODE_TOGGLE,
// };

// #        define DPI_MOD POINTER_DEFAULT_DPI_FORWARD
// #        define DPI_RMOD POINTER_DEFAULT_DPI_REVERSE
// #        define S_D_MOD POINTER_SNIPING_DPI_FORWARD
// #        define S_D_RMOD POINTER_SNIPING_DPI_REVERSE
// #        define SNIPING SNIPING_MODE
// #        define SNP_TOG SNIPING_MODE_TOGGLE
// #        define DRGSCRL DRAGSCROLL_MODE
// #        define DRG_TOG DRAGSCROLL_MODE_TOGGLE
// #    endif // !NO_DILEMMA_KEYCODES

// /** \brief Return the current DPI value for the pointer's default mode. */
// uint16_t dilemma_get_pointer_default_dpi(void);

// /**
//  * \brief Update the pointer's default DPI to the next or previous step.
//  *
//  * Increases the DPI value if `forward` is `true`, decreases it otherwise.
//  * The increment/decrement steps are equal to DILEMMA_DEFAULT_DPI_CONFIG_STEP.
//  *
//  * The new value is persisted in EEPROM.
//  */
// void dilemma_cycle_pointer_default_dpi(bool forward);

// /**
//  * \brief Same as `dilemma_cycle_pointer_default_dpi`, but do not write to
//  * EEPROM.
//  *
//  * This means that reseting the board will revert the value to the last
//  * persisted one.
//  */
// void dilemma_cycle_pointer_default_dpi_noeeprom(bool forward);

// /** \brief Return the current DPI value for the pointer's sniper-mode. */
// uint16_t dilemma_get_pointer_sniping_dpi(void);

// /**
//  * \brief Update the pointer's sniper-mode DPI to the next or previous step.
//  *
//  * Increases the DPI value if `forward` is `true`, decreases it otherwise.
//  * The increment/decrement steps are equal to DILEMMA_SNIPING_DPI_CONFIG_STEP.
//  *
//  * The new value is persisted in EEPROM.
//  */
// void dilemma_cycle_pointer_sniping_dpi(bool forward);

// /**
//  * \brief Same as `dilemma_cycle_pointer_sniping_dpi`, but do not write to
//  * EEPROM.
//  *
//  * This means that reseting the board will revert the value to the last
//  * persisted one.
//  */
// void dilemma_cycle_pointer_sniping_dpi_noeeprom(bool forward);

// /** \brief Whether sniper-mode is enabled. */
// bool dilemma_get_pointer_sniping_enabled(void);

// /**
//  * \brief Enable/disable sniper mode.
//  *
//  * When sniper mode is enabled the dpi is reduced to slow down the pointer for
//  * more accurate movements.
//  */
// void dilemma_set_pointer_sniping_enabled(bool enable);

// /** \brief Whether drag-scroll is enabled. */
// bool dilemma_get_pointer_dragscroll_enabled(void);

// /**
//  * \brief Enable/disable drag-scroll mode.
//  *
//  * When drag-scroll mode is enabled, horizontal and vertical pointer movements
//  * are translated into horizontal and vertical scroll movements.
//  */
// void dilemma_set_pointer_dragscroll_enabled(bool enable);
// #endif // POINTING_DEVICE_ENABLE

