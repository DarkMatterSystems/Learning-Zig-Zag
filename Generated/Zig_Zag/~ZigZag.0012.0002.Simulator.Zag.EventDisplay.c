
#include "~ZigZag.0000.0000.Header.h"


/* Simulator Zag Display Event */

void adm_sim_display_event_zag_hold(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_zag_hold");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.events) {

        printf(NEWLINE);
        printf("EVENT (");
        printf("%d:%d:%d)", error_file, error_line, error_rank);
        printf(" - Zag[");
        printf("%d", ent_zag->identity);
        printf("] Hold (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_zag_hold");
    #endif
}

void adm_sim_display_event_zag_wait(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_zag_wait");
    #endif

    if (
        adm_sim_trace.all &&
        adm_sim_trace.events) {

        printf(NEWLINE);
        printf("EVENT (");
        printf("%d:%d:%d)", error_file, error_line, error_rank);
        printf(" - Zag[");
        printf("%d", ent_zag->identity);
        printf("] Wait (");
        printf(")");
        printf(NEWLINE);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_SIMULATOR, "adm_sim_display_event_zag_wait");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */