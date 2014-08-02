/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/
#include <onlp/platformi/sysi.h>
#include "powerpc_quanta_ly2_r0_int.h"
#include "powerpc_quanta_ly2_r0_log.h"

const char*
onlp_sysi_platform_get(void)
{
    return "powerpc-quanta-ly2-r0";
}

int
onlp_sysi_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_sysi_oids_get(onlp_oid_t* table, int max)
{
    onlp_oid_t* e = table;
    memset(table, 0, max*sizeof(onlp_oid_t));

    /*
     * 5 thermal sensors
     */
    *e++ = THERMAL_OID_THERMAL1;
    *e++ = THERMAL_OID_THERMAL2;
    *e++ = THERMAL_OID_THERMAL3;
    *e++ = THERMAL_OID_THERMAL4;
    *e++ = THERMAL_OID_THERMAL5;

    /*
     * 4 Fans
     */
    *e++ = FAN_OID_FAN1;
    *e++ = FAN_OID_FAN2;
    *e++ = FAN_OID_FAN3;
    *e++ = FAN_OID_FAN4;

    /*
     * 2 PSUs
     */
    *e++ = PSU_OID_PSU1;
    *e++ = PSU_OID_PSU2;

    /*
     * Todo - LEDs
     */
    return 0;
}