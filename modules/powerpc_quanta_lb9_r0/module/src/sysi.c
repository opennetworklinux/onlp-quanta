/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/
#include <onlp/platformi/sysi.h>

const char*
onlp_sysi_platform_get(void)
{
    return "powerpc-quanta-lb9-r0";
}

int
onlp_sysi_init(void)
{
    return ONLP_STATUS_OK;
}
