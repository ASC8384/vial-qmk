VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
EXTRAKEY_ENABLE = yes

CONSOLE_ENABLE = no
COMMAND_ENABLE = no

ifeq ($(strip $(MCU)), atmega32u4)
    QMK_SETTINGS = no
endif
