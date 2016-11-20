/*
 * This C file has been generated by smidump 0.4.8.
 * It is intended to be used with the NET-SNMP library.
 *
 * This C file is derived from the KOBOLDMAKI-ICINGA2-MIB module.
 *
 * $Id$
 */

#include <stdlib.h>

#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_client.h>

#include "koboldmaki-icinga2-mib.h"

static oid i2ObjectType[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 0, 1};
static oid i2DisplayName[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 0, 2};
static oid i2StateType[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 0, 3};
static oid i2HostName[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 1, 1};
static oid i2StateHost[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 1, 4};
static oid i2StateService[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 2, 2};
static oid i2NotificationType[] = {1, 3, 6, 1, 4, 1, 12483, 999, 2, 1, 6};

int koboldmaki_icinga2_mib_mgr_get_i2Field(struct snmp_session *s, i2Field_t **i2Field)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, i2ObjectType, sizeof(i2ObjectType)/sizeof(oid));
    snmp_add_null_var(request, i2DisplayName, sizeof(i2DisplayName)/sizeof(oid));
    snmp_add_null_var(request, i2StateType, sizeof(i2StateType)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *i2Field = (i2Field_t *) malloc(sizeof(i2Field_t));
    if (! *i2Field) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(i2ObjectType)/sizeof(oid)
            && memcmp(vars->name, i2ObjectType, sizeof(i2ObjectType)) == 0) {
            (*i2Field)->__i2ObjectType = *vars->val.integer;
            (*i2Field)->i2ObjectType = &((*i2Field)->__i2ObjectType);
        }
        if (vars->name_length > sizeof(i2DisplayName)/sizeof(oid)
            && memcmp(vars->name, i2DisplayName, sizeof(i2DisplayName)) == 0) {
            memcpy((*i2Field)->__i2DisplayName, vars->val.string, vars->val_len);
            (*i2Field)->_i2DisplayNameLength = vars->val_len;
            (*i2Field)->i2DisplayName = (*i2Field)->__i2DisplayName;
        }
        if (vars->name_length > sizeof(i2StateType)/sizeof(oid)
            && memcmp(vars->name, i2StateType, sizeof(i2StateType)) == 0) {
            (*i2Field)->__i2StateType = *vars->val.integer;
            (*i2Field)->i2StateType = &((*i2Field)->__i2StateType);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}

int koboldmaki_icinga2_mib_mgr_get_i2HostField(struct snmp_session *s, i2HostField_t **i2HostField)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, i2HostName, sizeof(i2HostName)/sizeof(oid));
    snmp_add_null_var(request, i2StateHost, sizeof(i2StateHost)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *i2HostField = (i2HostField_t *) malloc(sizeof(i2HostField_t));
    if (! *i2HostField) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(i2HostName)/sizeof(oid)
            && memcmp(vars->name, i2HostName, sizeof(i2HostName)) == 0) {
            memcpy((*i2HostField)->__i2HostName, vars->val.string, vars->val_len);
            (*i2HostField)->_i2HostNameLength = vars->val_len;
            (*i2HostField)->i2HostName = (*i2HostField)->__i2HostName;
        }
        if (vars->name_length > sizeof(i2StateHost)/sizeof(oid)
            && memcmp(vars->name, i2StateHost, sizeof(i2StateHost)) == 0) {
            (*i2HostField)->__i2StateHost = *vars->val.integer;
            (*i2HostField)->i2StateHost = &((*i2HostField)->__i2StateHost);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}

int koboldmaki_icinga2_mib_mgr_get_i2ServiceField(struct snmp_session *s, i2ServiceField_t **i2ServiceField)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, i2StateService, sizeof(i2StateService)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *i2ServiceField = (i2ServiceField_t *) malloc(sizeof(i2ServiceField_t));
    if (! *i2ServiceField) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(i2StateService)/sizeof(oid)
            && memcmp(vars->name, i2StateService, sizeof(i2StateService)) == 0) {
            (*i2ServiceField)->__i2StateService = *vars->val.integer;
            (*i2ServiceField)->i2StateService = &((*i2ServiceField)->__i2StateService);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}


