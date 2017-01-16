
#include "~ZigZag.0000.0000.Header.h"


/* Zig Dispatcher */

/* Dispatcher */

void adm_dispatcher_zig(
    void)
{
    adm_pool_target_zig_typ * pool_target_zig;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_zig");
    #endif

    pool_target_zig = adm_find_away_target_event_zig();

    adm_dispatch_state_action_zig(pool_target_zig);

    adm_dispatch_home_pool_zig();

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatcher_zig");
    #endif
}


/* Dispatch Home Pool */

void adm_dispatch_home_pool_zig(
    void)
{
    adm_pool_target_zig_typ * pool_target_zig;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_zig");
    #endif

    while (adm_entity_system.ent_zig.home_pool_head != NULL) {

        pool_target_zig = adm_find_home_target_event_zig();

        adm_dispatch_state_action_zig(pool_target_zig);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_home_pool_zig");
    #endif
}


/* Find Home Target Event */

adm_pool_target_zig_typ * adm_find_home_target_event_zig(
    void)
{
    adm_pool_target_zig_typ * pool_target_zig;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_zig");
    #endif

    pool_target_zig = adm_entity_system.ent_zig.home_pool_head;

    adm_entity_system.ent_zig.home_pool_head = pool_target_zig->next;

    if (adm_entity_system.ent_zig.home_pool_head == NULL) {

        adm_entity_system.ent_zig.home_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_home_target_event_zig");
    #endif

    return (pool_target_zig);
}


/* Find Away Target Event */

adm_pool_target_zig_typ * adm_find_away_target_event_zig(
    void)
{
    adm_pool_target_zig_typ * pool_target_zig;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_zig");
    #endif

    pool_target_zig = adm_entity_system.ent_zig.away_pool_head;

    adm_entity_system.ent_zig.away_pool_head = pool_target_zig->next;

    if (adm_entity_system.ent_zig.away_pool_head == NULL) {

        adm_entity_system.ent_zig.away_pool_tail = NULL;
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_find_away_target_event_zig");
    #endif

    return (pool_target_zig);
}


/* Dispatch State Action */

void adm_dispatch_state_action_zig(
    adm_pool_target_zig_typ * pool_target)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_zig");
    #endif

    if (pool_target->ent_zig != NULL) {

        adm_object_existent_zig(
            pool_target->ent_zig,
            pool_target->error_location.file,
            pool_target->error_location.line,
            pool_target->error_location.rank);
    }

    switch (pool_target->evente) {

        /* Dynamic Events */

        case ADM_EVENT_ZIG_START :

            switch ((pool_target->ent_zig)->status) {

                case ADM_STATUS_ZIG_ACTIVATE :

                    adm_sim_display_state_zig_starting(pool_target);

                    (pool_target->ent_zig)->status = ADM_STATUS_ZIG_STARTING;

                    adm_state_action_zig_starting(
                        pool_target->ent_zig);

                break;

                case ADM_STATUS_ZIG_STARTING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Start",
                        "State:Starting");

                break;

                case ADM_STATUS_ZIG_HOLDING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Start",
                        "State:Holding");

                break;

                case ADM_STATUS_ZIG_VANISH :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Start",
                        "State:Vanish");

                break;
            }

        break;

        case ADM_EVENT_ZIG_HOLD :

            switch ((pool_target->ent_zig)->status) {

                case ADM_STATUS_ZIG_ACTIVATE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Hold",
                        "State:Activate");

                break;

                case ADM_STATUS_ZIG_STARTING :

                    adm_sim_display_state_zig_holding(pool_target);

                    (pool_target->ent_zig)->status = ADM_STATUS_ZIG_HOLDING;

                    adm_state_action_zig_holding(
                        pool_target->ent_zig);

                break;

                case ADM_STATUS_ZIG_HOLDING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Hold",
                        "State:Holding");

                break;

                case ADM_STATUS_ZIG_VANISH :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Hold",
                        "State:Vanish");

                break;
            }

        break;

        /* Deletion Events */

        case ADM_EVENT_ZIG_KILL :

            switch ((pool_target->ent_zig)->status) {

                case ADM_STATUS_ZIG_ACTIVATE :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Kill",
                        "State:Activate");

                break;

                case ADM_STATUS_ZIG_STARTING :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Kill",
                        "State:Starting");

                break;

                case ADM_STATUS_ZIG_HOLDING :

                    adm_sim_display_state_zig_vanish(pool_target);

                    adm_state_action_zig_vanish(
                        pool_target->ent_zig);

                    adm_kill_object_zig(
                        NULL,
                        pool_target->ent_zig,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank);

                break;

                case ADM_STATUS_ZIG_VANISH :

                    adm_error_report(
                        ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
                        pool_target->error_location.file,
                        pool_target->error_location.line,
                        pool_target->error_location.rank,
                        "Entity:Zig",
                        (pool_target->ent_zig)->identity,
                        "Event:Kill",
                        "State:Vanish");

                break;
            }

        break;
    }

    adm_deallocate_memory(pool_target);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DISPATCHER, "adm_dispatch_state_action_zig");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */