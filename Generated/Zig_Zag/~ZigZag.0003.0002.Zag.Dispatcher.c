
#include "~ZigZag.0000.0000.Header.h"


/* Zag Dispatcher */

/* Dispatcher */

void adm_dispatcher_zag(
    void)
{
    adm_pool_target_zag_typ * pool_target_zag;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_zag");
    #endif

    pool_target_zag = adm_find_away_target_event_zag();

    adm_dispatch_state_action_zag(pool_target_zag);

    adm_dispatch_home_pool_zag();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_zag");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_zag(
    void)
{
    adm_pool_target_zag_typ * pool_target_zag;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_zag");
    #endif

    while (adm_entity_system.ent_zag.home_pool_head != NULL) {

        pool_target_zag = adm_find_home_target_event_zag();

        adm_dispatch_state_action_zag(pool_target_zag);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_zag");
    #endif
}


/* Find Home Target Event */

adm_pool_target_zag_typ * adm_find_home_target_event_zag(
    void)
{
    adm_pool_target_zag_typ * pool_target_zag;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_zag");
    #endif

    pool_target_zag = adm_entity_system.ent_zag.home_pool_head;

    adm_entity_system.ent_zag.home_pool_head = pool_target_zag->next;

    if (adm_entity_system.ent_zag.home_pool_head == NULL) {

        adm_entity_system.ent_zag.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_zag");
    #endif

    return (pool_target_zag);
}


/* Find Away Target Event */

adm_pool_target_zag_typ * adm_find_away_target_event_zag(
    void)
{
    adm_pool_target_zag_typ * pool_target_zag;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_zag");
    #endif

    pool_target_zag = adm_entity_system.ent_zag.away_pool_head;

    adm_entity_system.ent_zag.away_pool_head = pool_target_zag->next;

    if (adm_entity_system.ent_zag.away_pool_head == NULL) {

        adm_entity_system.ent_zag.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_zag");
    #endif

    return (pool_target_zag);
}


/* Dispatch State Action */

void adm_dispatch_state_action_zag(
    adm_pool_target_zag_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_zag");
    #endif

    if (pool_target->ent_zag != NULL) {

        adm_object_existent_zag(
            pool_target->ent_zag,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_ZAG_HOLD :

            switch ((pool_target->ent_zag)->status) {

                case ADM_STATUS_ZAG_ACTIVATE :

                    adm_sim_display_state_zag_holding(pool_target);

                    (pool_target->ent_zag)->status = ADM_STATUS_ZAG_HOLDING;

                    adm_state_action_zag_holding(
                        pool_target->ent_zag);

                break;

                case ADM_STATUS_ZAG_HOLDING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zag",
                        (pool_target->ent_zag)->identity,
                        "Event:Hold",
                        "State:Holding");

                break;

                case ADM_STATUS_ZAG_WAITING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zag",
                        (pool_target->ent_zag)->identity,
                        "Event:Hold",
                        "State:Waiting");

                break;
            }

        break;

        case ADM_EVENT_ZAG_WAIT :

            switch ((pool_target->ent_zag)->status) {

                case ADM_STATUS_ZAG_ACTIVATE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zag",
                        (pool_target->ent_zag)->identity,
                        "Event:Wait",
                        "State:Activate");

                break;

                case ADM_STATUS_ZAG_HOLDING :

                    adm_sim_display_state_zag_waiting(pool_target);

                    (pool_target->ent_zag)->status = ADM_STATUS_ZAG_WAITING;

                    adm_state_action_zag_waiting(
                        pool_target->ent_zag);

                break;

                case ADM_STATUS_ZAG_WAITING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zag",
                        (pool_target->ent_zag)->identity,
                        "Event:Wait",
                        "State:Waiting");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_zag");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */