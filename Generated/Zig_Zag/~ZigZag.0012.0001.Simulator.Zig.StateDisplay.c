
#include "~ZigZag.0000.0000.Header.h"


/* Simulator Zig Display State */

void adm_sim_display_state_zig_starting(
    adm_pool_target_zig_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zig_starting");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (1:29:42) - Zig[");
        printf("%d", (pool_target->ent_zig)->identity);
        printf("] ");
        printf("Starting");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZIG, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_zig[(pool_target->ent_zig)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zig_starting");
    #endif
}

void adm_sim_display_state_zig_holding(
    adm_pool_target_zig_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zig_holding");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (1:54:42) - Zig[");
        printf("%d", (pool_target->ent_zig)->identity);
        printf("] ");
        printf("Holding");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZIG, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_zig[(pool_target->ent_zig)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zig_holding");
    #endif
}

void adm_sim_display_state_zig_vanish(
    adm_pool_target_zig_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zig_vanish");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.states) {

        printf(NEWLINE);
        printf("STATE (1:79:43) - Zig[");
        printf("%d", (pool_target->ent_zig)->identity);
        printf("] ");
        printf("Vanish");
        printf(" {");
        printf("%s", adm_sim_find_event_name(ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZIG, pool_target->evente));
        printf(" -> ");
        printf("%s", adm_sim_status_zig[(pool_target->ent_zig)->status]);
        printf("} (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_state_zig_vanish");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */