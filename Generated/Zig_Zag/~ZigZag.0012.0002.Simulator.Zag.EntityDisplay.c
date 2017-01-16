
#include "~ZigZag.0000.0000.Header.h"


/* Zag Simulator Display Entity */

void adm_sim_display_entity_zag(
    void)
{
    adm_base_string_typ buffer [ADM_SIM_BUFFER_SIZE];

    adm_base_integer_typ width;

    adm_ent_zag_typ * ent_zag;

    adm_sim_width_zag_typ width_zag;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_zag");
    #endif

    width_zag.identity = strlen("Identity");
    width_zag.status = strlen("Status");

    ent_zag = adm_entity_system.ent_zag.live_list_head;

    while (ent_zag != NULL) {

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%d", ent_zag->identity);
        if (width > width_zag.identity) width_zag.identity = width;

        width = sprintf_s(buffer, ADM_SIM_BUFFER_SIZE, "%s", adm_sim_status_zag[ent_zag->status]);
        if (width > width_zag.status) width_zag.status = width;

        ent_zag = ent_zag->next;
    }

    printf(NEWLINE);
    printf("Zag:");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    printf("%-*s", width_zag.identity, "Identity");
    printf(ADM_SIM_COLUMN_GAP);
    printf("%-*s", width_zag.status, "Status");

    printf(NEWLINE);
    printf(ADM_SIM_INDENT);
    adm_sim_display_underline(width_zag.identity);
    printf(ADM_SIM_COLUMN_GAP);
    adm_sim_display_underline(width_zag.status);

    ent_zag = adm_entity_system.ent_zag.live_list_head;

    while (ent_zag != NULL) {

        printf(NEWLINE);
        printf(ADM_SIM_INDENT);
        printf("%*d", width_zag.identity, ent_zag->identity);
        printf(ADM_SIM_COLUMN_GAP);

        switch (ent_zag->status) {
            case ADM_STATUS_ZAG_ACTIVATE :
                printf("%-*s", width_zag.status, "Activate");
            break;
            case ADM_STATUS_ZAG_HOLDING :
                printf("%-*s", width_zag.status, "Holding");
            break;
            case ADM_STATUS_ZAG_WAITING :
                printf("%-*s", width_zag.status, "Waiting");
            break;
            default :
                printf("%-*s", width_zag.status, "ERROR");
            break;
        }


        ent_zag = ent_zag->next;
    }

    printf(NEWLINE);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_entity_zag");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */