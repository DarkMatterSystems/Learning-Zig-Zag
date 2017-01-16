
#include "~ZigZag.0000.0000.Header.h"


/* Simulator Zig Acquire Identity Event */

void adm_sim_acquire_identity_event_zig_start(
    void)
{
    adm_ent_zig_typ * ent_zig;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_zig_start");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_zig = adm_entity_system.ent_zig.live_list_head;

    while (
        entity_not_found &&
        ent_zig != NULL) {

        if (ent_zig->identity == identity) {

            adm_send_event_zig_start(
                NULL,
                ent_zig,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_zig = ent_zig->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_zig_start");
    #endif
}

void adm_sim_acquire_identity_event_zig_hold(
    void)
{
    adm_ent_zig_typ * ent_zig;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_zig_hold");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_zig = adm_entity_system.ent_zig.live_list_head;

    while (
        entity_not_found &&
        ent_zig != NULL) {

        if (ent_zig->identity == identity) {

            adm_send_event_zig_hold(
                NULL,
                ent_zig,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_zig = ent_zig->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_zig_hold");
    #endif
}

void adm_sim_acquire_identity_event_zig_kill(
    void)
{
    adm_ent_zig_typ * ent_zig;
    adm_base_integer_typ identity;
    adm_base_boolean_typ entity_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_zig_kill");
    #endif

    /* Fetch Identity */

    identity = adm_sim_idt_fetch();

    /* Generate Event */

    entity_not_found = TRUE;

    ent_zig = adm_entity_system.ent_zig.live_list_head;

    while (
        entity_not_found &&
        ent_zig != NULL) {

        if (ent_zig->identity == identity) {

            adm_send_event_zig_kill(
                NULL,
                ent_zig,
                0, 0, 0);

            entity_not_found = FALSE;
        }

        ent_zig = ent_zig->next;
    }

    /* Check Identity */

    if (entity_not_found)
        adm_sim_error_report(
            ADM_SIM_ERROR_UNKNOWN_IDENTITY,
            adm_sim_lib_itoa(identity));

    adm_sim_simulate();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_acquire_identity_event_zig_kill");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */