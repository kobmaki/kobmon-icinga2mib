/*
 * This C file has been generated by smidump 0.4.8.
 * It is intended to be used with the NET-SNMP agent library.
 *
 * This C file is derived from the KOBOLDMAKI-ICINGA2-MIB module.
 *
 * $Id$
 */

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "koboldmaki-icinga2-mib.h"

#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_impl.h>
#include <ucd-snmp/snmp_vars.h>

static oid koboldmaki_icinga2_mib_caps[] = {0,0};

void init_koboldmaki_icinga2_mib(void)
{
}

void deinit_koboldmaki_icinga2_mib()
{
    unregister_sysORTable(koboldmaki_icinga2_mib_caps, sizeof(koboldmaki_icinga2_mib_caps));
}

int term_koboldmaki_icinga2_mib()
{
    deinit_koboldmaki_icinga2_mib();
    return 0;
}

