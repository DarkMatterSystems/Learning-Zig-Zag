
#include "~ZigZag.0000.0000.Header.h"


/* Zag Event Senders */

void adm_send_event_zag_hold(
    void * source_object,
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_zag_typ * pool_target;
    adm_pool_target_zag_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zag_hold");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_zag_hold(
            ent_zag,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_zag(
            ent_zag,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_zag_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_zag_typ));

        pool_target->evente = ADM_EVENT_ZAG_HOLD;
        pool_target->ent_zag = ent_zag;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_zag) {

            if (adm_entity_system.ent_zag.home_pool_head == NULL) {

                adm_entity_system.ent_zag.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_zag.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_zag == ent_zag) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Zag",
                            ent_zag->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_zag.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zag.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_zag.away_pool_head == NULL) {

                adm_entity_system.ent_zag.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_zag.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zag.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zag_hold");
    #endif
}

void adm_send_event_zag_wait(
    void * source_object,
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_pool_target_zag_typ * pool_target;
    adm_pool_target_zag_typ * home_pool_target;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zag_wait");
    #endif

    if (adm_sim_err_success) {

        adm_sim_display_event_zag_wait(
            ent_zag,
            error_file,
            error_line,
            error_rank);

        adm_object_existent_zag(
            ent_zag,
            error_file,
            error_line,
            error_rank);

        pool_target = (adm_pool_target_zag_typ*)
            adm_allocate_memory(sizeof(adm_pool_target_zag_typ));

        pool_target->evente = ADM_EVENT_ZAG_WAIT;
        pool_target->ent_zag = ent_zag;
        pool_target->error_location.file = error_file;
        pool_target->error_location.line = error_line;
        pool_target->error_location.rank = error_rank;
        pool_target->next = NULL;

        if (source_object == ent_zag) {

            if (adm_entity_system.ent_zag.home_pool_head == NULL) {

                adm_entity_system.ent_zag.home_pool_head = pool_target;

            } else {

                home_pool_target = adm_entity_system.ent_zag.home_pool_head;

                while (home_pool_target != NULL) {

                    if (home_pool_target->ent_zag == ent_zag) {

                        adm_error_report(
                            ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
                            error_file, error_line, error_rank,
                            "Zag",
                            ent_zag->identity,
                            NULL, NULL);
                    }

                    home_pool_target = home_pool_target->next;
                }

                (adm_entity_system.ent_zag.home_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zag.home_pool_tail = pool_target;

        } else {

            if (adm_entity_system.ent_zag.away_pool_head == NULL) {

                adm_entity_system.ent_zag.away_pool_head = pool_target;

            } else {

                (adm_entity_system.ent_zag.away_pool_tail)->next = pool_target;
            }

            adm_entity_system.ent_zag.away_pool_tail = pool_target;
        }
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_EVENT_SENDER, "adm_send_event_zag_wait");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */