# MCU name
MCU = atmega32u4

BOOTLOADER = atmel-dfu

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = full     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
DYNAMIC_MACRO_ENABLE = yes  # defined by the user from the keyboard and are lost when the keyboard is unplugged
UNICODE_ENABLE = no         # For that elusive degree sign ...
UNICODEMAP_ENABLE = yes     # For built in cyrillic alternate default layer
VIA_SUPPORT = yes           #

#LAYOUTS = LAYOUT_all
