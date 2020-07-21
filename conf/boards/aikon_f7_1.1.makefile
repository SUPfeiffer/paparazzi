#
# aikon_f7_1.1.makefile
#
#
#

BOARD=aikon_f7
BOARD_VERSION=1.1
BOARD_CFG=\"boards/$(BOARD)/$(BOARD)_$(BOARD_VERSION).h\"

ARCH=stm32
ARCH_L=f7

HARD_FLOAT=yes
ARCH_DIR=stm32
SRC_ARCH=arch/$(ARCH_DIR)
$(TARGET).ARCHDIR = $(ARCH)
$(TARGET).LDSCRIPT=$(SRC_ARCH)/aikon_f7.ld


# Default Flash mode is DFU
FLASH_MODE ?= DFU

## Not sure if these parameters need to be set
#DFU_ADDR = 0x8004000
#DFU_PRODUCT = any

