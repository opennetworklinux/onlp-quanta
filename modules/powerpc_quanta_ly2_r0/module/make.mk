###############################################################################
#
# 
#
###############################################################################
THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
powerpc_quanta_ly2_r0_INCLUDES := -I $(THIS_DIR)inc
powerpc_quanta_ly2_r0_INTERNAL_INCLUDES := -I $(THIS_DIR)src
powerpc_quanta_ly2_r0_DEPENDMODULE_ENTRIES := init:powerpc_quanta_ly2_r0 ucli:powerpc_quanta_ly2_r0

