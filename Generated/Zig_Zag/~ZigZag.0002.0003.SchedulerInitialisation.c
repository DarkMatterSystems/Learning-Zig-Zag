
#include "~ZigZag.0000.0000.Header.h"


/* Domain Scheduler Initialisation */

void adm_scheduler_initialisation_zigzagoon(
    void)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_INITIALISATION, "adm_scheduler_initialisation_zigzagoon");
    #endif

    adm_dispatch_home_pool_zig();
    adm_dispatch_home_pool_zag();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_INITIALISATION, "adm_scheduler_initialisation_zigzagoon");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */