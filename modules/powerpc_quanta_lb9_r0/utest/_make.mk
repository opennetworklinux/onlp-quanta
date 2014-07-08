###############################################################################
#
# powerpc_quanta_lb9_r0 Unit Test Makefile.
#
###############################################################################
UMODULE := powerpc_quanta_lb9_r0
UMODULE_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/utest.mk
