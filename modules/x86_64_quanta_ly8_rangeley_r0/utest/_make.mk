###############################################################################
#
# x86_64_quanta_ly8_rangeley_r0 Unit Test Makefile.
#
###############################################################################
UMODULE := x86_64_quanta_ly8_rangeley_r0
UMODULE_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/utest.mk
