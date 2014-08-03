/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/
#include <powerpc_quanta_lb9_r0/powerpc_quanta_lb9_r0_config.h>
#include "powerpc_quanta_lb9_r0_int.h"
#include "powerpc_quanta_lb9_r0_log.h"
#include "system.h"

int
powerpc_quanta_lb9_r0_system_airflow_get(void)
{
    /*
     * TODO -- CPLD access to determine current airflow settings.
     * For now, return F2B.
     */
    return 0;
}

char*
powerpc_quanta_lb9_r0_system_hwmon_dir(void)
{
    /*
     * Determine the correct HW monitor path based on
     * current system settings.
     */
    if(powerpc_quanta_lb9_r0_system_airflow_get() == 0) {
        return SYS_CONTROLLER_PREFIX_F2B;
    }
    else {
        return SYS_CONTROLLER_PREFIX_B2F;
    }
}

char*
powerpc_quanta_lb8_r9_system_psu_dir(int pid)
{
    if(pid == PSU_ID_PSU1) {
        return SYS_PSU1_PREFIX;
    }
    if(pid == PSU_ID_PSU2) {
        return SYS_PSU2_PREFIX;
    }
    else {
        AIM_LOG_ERROR("Invalid PSU id %d", pid);
        return SYS_PSU1_PREFIX;
    }
}
