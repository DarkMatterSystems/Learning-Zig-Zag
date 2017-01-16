
#include "~ZigZag.0000.0000.Header.h"


/* Zig Event Senders */

void adm_send_event_zig_start(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_zig_typ * pool_target;
    adm_pool_target_zig_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zig_start");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_zig_start(
            ent_zig,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_zig(
            ent_zig,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_zig_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_zig_typ));

        pool_target->evente = ADM_EVENT_ZIG_START;
        pool_target->ent_zig = ent_zig;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_zig) {

            if (adm_entity_system.ent_zig.home_pool_head == NULL) {

                adm_entity_system.ent_zig.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_zig.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_zig == ent_zig) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Zig",
                            ent_zig->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_zig.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zig.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_zig.away_pool_head == NULL) {

                adm_entity_system.ent_zig.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_zig.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zig.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zig_start");
    #endif
}

void adm_send_event_zig_hold(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_zig_typ * pool_target;
    adm_pool_target_zig_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zig_hold");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_zig_hold(
            ent_zig,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_zig(
            ent_zig,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_zig_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_zig_typ));

        pool_target->evente = ADM_EVENT_ZIG_HOLD;
        pool_target->ent_zig = ent_zig;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_zig) {

            if (adm_entity_system.ent_zig.home_pool_head == NULL) {

                adm_entity_system.ent_zig.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_zig.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_zig == ent_zig) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Zig",
                            ent_zig->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_zig.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zig.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_zig.away_pool_head == NULL) {

                adm_entity_system.ent_zig.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_zig.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zig.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zig_hold");
    #endif
}

void adm_send_event_zig_kill(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_zig_typ * pool_target;
    adm_pool_target_zig_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zig_kill");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_zig_kill(
            ent_zig,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_zig(
            ent_zig,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_zig_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_zig_typ));

        pool_target->evente = ADM_EVENT_ZIG_KILL;
        pool_target->ent_zig = ent_zig;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_zig) {

            if (adm_entity_system.ent_zig.home_pool_head == NULL) {

                adm_entity_system.ent_zig.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_zig.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_zig == ent_zig) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Zig",
                            ent_zig->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_zig.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zig.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_zig.away_pool_head == NULL) {

                adm_entity_system.ent_zig.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_zig.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zig.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zig_kill");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */