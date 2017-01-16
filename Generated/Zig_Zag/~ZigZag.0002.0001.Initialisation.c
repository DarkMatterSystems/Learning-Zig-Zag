
#include "~ZigZag.0000.0000.Header.h"


/* Domain - Initialisation */

void adm_initialisation_zigzagoon(
    void)
{
    /* Declare Objects */

    /* Zig */
    adm_ent_zig_typ * ent_zig_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_INITIALISATION, "adm_initialisation_zigzagoon");
    #endif

    /* Entity System */

    adm_entity_system.ent_zig.tote = 0;
    adm_entity_system.ent_zag.tote = 0;

    adm_entity_system.ent_zig.live_list_head = NULL;
    adm_entity_system.ent_zag.live_list_head = NULL;

    adm_entity_system.ent_zig.live_list_tail = NULL;
    adm_entity_system.ent_zag.live_list_tail = NULL;

    adm_entity_system.ent_zig.dead_list_head = NULL;
    adm_entity_system.ent_zag.dead_list_head = NULL;

    adm_entity_system.ent_zig.dead_list_tail = NULL;
    adm_entity_system.ent_zag.dead_list_tail = NULL;

    adm_entity_system.ent_zig.home_pool_head = NULL;
    adm_entity_system.ent_zag.home_pool_head = NULL;

    adm_entity_system.ent_zig.home_pool_tail = NULL;
    adm_entity_system.ent_zag.home_pool_tail = NULL;

    adm_entity_system.ent_zig.away_pool_head = NULL;
    adm_entity_system.ent_zag.away_pool_head = NULL;

    adm_entity_system.ent_zig.away_pool_tail = NULL;
    adm_entity_system.ent_zag.away_pool_tail = NULL;


    /* Make Objects */

    /* Zig */
    ent_zig_0000000001 = adm_make_object_zig(ADM_STATUS_ZIG_ACTIVATE);


    /* Bind Objects */

    /* Zig */
    adm_bind_object_zig(
        ent_zig_0000000001,
        1, 182, 29);


    /* Generate Events */

    /* Zig */

    adm_send_event_zig_start(
        ent_zig_0000000001,
        ent_zig_0000000001, 
        1, 185, 29);


    /* Integrity Check */
    adm_integrity_check();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_INITIALISATION, "adm_initialisation_zigzagoon");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */