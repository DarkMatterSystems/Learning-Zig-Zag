
#include "~ZigZag.0000.0000.Header.h"


/* Simulator Zag Display State */

void adm_sim_display_state_zag_holding(
    adm_pool_target_zag_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zag_holding");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (1:112:42) - Zag[");
        printf("%d", (pool_target->ent_zag)->identity);
        printf("] ");
        printf("Holding");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZAG, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_zag[(pool_target->ent_zag)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zag_holding");
    #endif
}

void adm_sim_display_state_zag_waiting(
    adm_pool_target_zag_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zag_waiting");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (1:143:42) - Zag[");
        printf("%d", (pool_target->ent_zag)->identity);
        printf("] ");
        printf("Waiting");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZAG, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_zag[(pool_target->ent_zag)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zag_waiting");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */