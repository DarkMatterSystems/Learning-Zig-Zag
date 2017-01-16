
#include "~ZigZag.0000.0000.Header.h"


/* Domain Scheduler */

void adm_scheduler_dom_zigzagoon(
    void)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_dom_zigzagoon");
    #endif

    if (adm_entity_system.ent_zig.away_pool_head != NULL) adm_dispatcher_zig();
    if (adm_entity_system.ent_zag.away_pool_head != NULL) adm_dispatcher_zag();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_dom_zigzagoon");
    #endif
}

adm_base_boolean_typ adm_scheduler_determine_termination_dom_zigzagoon(
    void)
{
    adm_base_boolean_typ event_pending;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_determine_termination_dom_zigzagoon");
    #endif

    event_pending =
        (adm_entity_system.ent_zig.away_pool_head != NULL) ||
        (adm_entity_system.ent_zag.away_pool_head != NULL);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SCHEDULER, "adm_scheduler_determine_termination_dom_zigzagoon");
    #endif

    return (event_pending);
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */