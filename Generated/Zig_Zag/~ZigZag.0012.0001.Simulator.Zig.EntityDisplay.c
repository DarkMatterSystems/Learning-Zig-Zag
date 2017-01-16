
#include "~ZigZag.0000.0000.Header.h"


/* Zig Simulator Display Entity */

void adm_sim_display_entity_zig(
    void)
{
    adm_base_string_typ buffer [ADM_SIM_BUFFER_SIZE];

    adm_base_integer_typ width;

    adm_ent_zig_typ * ent_zig;

    adm_sim_width_zig_typ width_zig;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_zig");
    #endif

    width_zig.identity = strlen("Identity");
    width_zig.status = strlen("Status");

    ent_zig = adm_entity_system.ent_zig.live_list_head;

    while (ent_zig != NULL) {

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%d", ent_zig->identity);
        if (width > width_zig.identity) width_zig.identity = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_sim_status_zig[ent_zig->status]);
        if (width > width_zig.status) width_zig.status = width;

        ent_zig = ent_zig->next;
    }

    printf(NEWLINE);
    printf("Zig:");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    printf("%-*s", width_zig.identity, "Identity");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_zig.status, "Status");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    adm_sim_display_underline(width_zig.identity);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_zig.status);

    ent_zig = adm_entity_system.ent_zig.live_list_head;

    while (ent_zig != NULL) {

        printf(NEWLINE);
        printf(ADM_SIM_INDENT);
        printf("%*d", width_zig.identity, ent_zig->identity);
        printf(ADM_SIM_COLUMN_GAP);

        switch (ent_zig->status) {
            case ADM_STATUS_ZIG_ACTIVATE :
                printf("%-*s", width_zig.status, "Activate");
            break;
            case ADM_STATUS_ZIG_STARTING :
                printf("%-*s", width_zig.status, "Starting");
            break;
            case ADM_STATUS_ZIG_HOLDING :
                printf("%-*s", width_zig.status, "Holding");
            break;
            case ADM_STATUS_ZIG_VANISH :
                printf("%-*s", width_zig.status, "Vanish");
            break;
            default :
                printf("%-*s", width_zig.status, "ERROR");
            break;
        }


        ent_zig = ent_zig->next;
    }

    printf(NEWLINE);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_zig");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */