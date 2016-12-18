/*
 * This C file has been generated by smidump 0.4.8.
 * It is intended to be used with the NET-SNMP agent library.
 *
 * This C file is derived from the ICINGA-ICINGA2-MIB module.
 *
 * $Id$
 */

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "icinga-icinga2-mib.h"

#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_impl.h>
#include <ucd-snmp/snmp_vars.h>

static oid icinga_icinga2_mib_caps[] = {0,0};

void init_icinga_icinga2_mib(void)
{
}

void deinit_icinga_icinga2_mib()
{
    unregister_sysORTable(icinga_icinga2_mib_caps, sizeof(icinga_icinga2_mib_caps));
}

int term_icinga_icinga2_mib()
{
    deinit_icinga_icinga2_mib();
    return 0;
}
