###############################################################################
#
#
#
###############################################################################

include ../../../init.mk
MODULE := quanta_sys_eeprom_utest
TEST_MODULE := quanta_sys_eeprom
DEPENDMODULES := AIM onlplib IOF
DEPENDMODULE_HEADERS := onlp

GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_MODULES_INIT=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_MAIN=1
include $(BUILDER)/build-unit-test.mk
