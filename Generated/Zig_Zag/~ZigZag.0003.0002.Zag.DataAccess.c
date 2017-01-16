
#include "~ZigZag.0000.0000.Header.h"


/* Zag Data Access */

/* Make Entity Object */

adm_ent_zag_typ * adm_make_object_zag(
    adm_sta_zag_typ status)
{
    adm_ent_zag_typ * ent_zag;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_zag");
    #endif

    if (adm_entity_system.ent_zag.dead_list_head != NULL) {

        ent_zag = adm_entity_system.ent_zag.dead_list_head;

        if (adm_entity_system.ent_zag.dead_list_head == ent_zag) {

            adm_entity_system.ent_zag.dead_list_head = ent_zag->next;

        } else {

            (ent_zag->back)->next = ent_zag->next;
        }

        if (adm_entity_system.ent_zag.dead_list_tail == ent_zag) {

            adm_entity_system.ent_zag.dead_list_tail = ent_zag->back;

        } else {

            (ent_zag->next)->back = ent_zag->back;
        }

    } else {

        ent_zag = (adm_ent_zag_typ*)adm_allocate_memory(sizeof(adm_ent_zag_typ));
    }

    ent_zag->identity = ++adm_entity_system.ent_zag.tote;

    ent_zag->unique  = FALSE;
    ent_zag->deleted = FALSE;
    ent_zag->marked  = FALSE;
    ent_zag->status  = status;

    ent_zag->rel_relationship_zig_head = NULL;
    ent_zag->rel_relationship_zig_tail = NULL;

    ent_zag->back = NULL;
    ent_zag->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_zag");
    #endif

    return (ent_zag);
}


/* Bind Entity Object */

void adm_bind_object_zag(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_zag");
    #endif

    adm_object_existent_zag(
        ent_zag,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_zag.live_list_head == NULL) {

        ent_zag->back = NULL;

        adm_entity_system.ent_zag.live_list_head = ent_zag;

    } else {

        ent_zag->back = adm_entity_system.ent_zag.live_list_tail;

        (adm_entity_system.ent_zag.live_list_tail)->next = ent_zag;
    }

    ent_zag->next = NULL;

    adm_entity_system.ent_zag.live_list_tail = ent_zag;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_zag");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_zag(
    void * source_object,
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_zag");
    #endif

    adm_object_existent_zag(
        ent_zag,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_zag) {

        if (ent_zag->rel_relationship_zig_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Zag",
                ent_zag->identity,
                "Relationship",
                "Zig");
        }

        if (adm_entity_system.ent_zag.live_list_head == ent_zag) {

            adm_entity_system.ent_zag.live_list_head = ent_zag->next;

        } else {

            (ent_zag->back)->next = ent_zag->next;
        }

        if (adm_entity_system.ent_zag.live_list_tail == ent_zag) {

            adm_entity_system.ent_zag.live_list_tail = ent_zag->back;

        } else {

            (ent_zag->next)->back = ent_zag->back;
        }

        ent_zag->deleted = TRUE;

        if (adm_entity_system.ent_zag.dead_list_head == NULL) {

            ent_zag->back = NULL;

            adm_entity_system.ent_zag.dead_list_head = ent_zag;

        } else {

            ent_zag->back = adm_entity_system.ent_zag.dead_list_tail;

            (adm_entity_system.ent_zag.dead_list_tail)->next = ent_zag;
        }

        ent_zag->next = NULL;

        adm_entity_system.ent_zag.dead_list_tail = ent_zag;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Zag",
            ent_zag->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_zag");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_zag_relationship_zig(
    adm_ent_zag_typ * ent_source_zag,
    adm_ent_zig_typ * ent_target_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_zag_relationship_zig_typ * rel_zag_relationship_zig;

    adm_base_boolean_typ zig_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_zag_relationship_zig");
    #endif

    adm_object_existent_zag(
        ent_source_zag,
        error_file,
        error_line,
        error_rank);

    zig_not_found = TRUE;

    rel_zag_relationship_zig = ent_source_zag->rel_relationship_zig_head;

    while (
        zig_not_found &&
        rel_zag_relationship_zig != NULL) {

        if (rel_zag_relationship_zig->ent_zig == ent_target_zig) {

            zig_not_found = FALSE;
        }

        rel_zag_relationship_zig = rel_zag_relationship_zig->next;
    }

    if (zig_not_found) {

        rel_zag_relationship_zig = (adm_rel_zag_relationship_zig_typ*)
            adm_allocate_memory(sizeof(adm_rel_zag_relationship_zig_typ));

        rel_zag_relationship_zig->ent_zig = ent_target_zig;

        if (ent_source_zag->rel_relationship_zig_head == NULL) {

            rel_zag_relationship_zig->back = NULL;

            ent_source_zag->rel_relationship_zig_head = rel_zag_relationship_zig;

        } else {

            rel_zag_relationship_zig->back = ent_source_zag->rel_relationship_zig_tail;

            (ent_source_zag->rel_relationship_zig_tail)->next = rel_zag_relationship_zig;
        }

        rel_zag_relationship_zig->next = NULL;

        ent_source_zag->rel_relationship_zig_tail = rel_zag_relationship_zig;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Zag",
            ent_source_zag->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_zag_relationship_zig");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_zag_relationship_zig(
    adm_ent_zag_typ * ent_zag,
    adm_rel_zag_relationship_zig_typ * rel_zag_relationship_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_zag_relationship_zig");
    #endif

    adm_object_existent_zag(
        ent_zag,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_zag_relationship_zig->next !=
        (adm_base_integer_typ)rel_zag_relationship_zig->ent_zig) {

        if (ent_zag->rel_relationship_zig_head != NULL) {

            if (ent_zag->rel_relationship_zig_head == rel_zag_relationship_zig) {

                ent_zag->rel_relationship_zig_head = rel_zag_relationship_zig->next;

            } else {

                (rel_zag_relationship_zig->back)->next = rel_zag_relationship_zig->next;
            }

            if (ent_zag->rel_relationship_zig_tail == rel_zag_relationship_zig) {

                ent_zag->rel_relationship_zig_tail = rel_zag_relationship_zig->back;

            } else {

                (rel_zag_relationship_zig->next)->back = rel_zag_relationship_zig->back;
            }

            adm_deallocate_memory(rel_zag_relationship_zig);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Zag",
                ent_zag->identity,
                "Relationship",
                "Zig");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Zag",
            ent_zag->identity,
            "Relationship",
            "Zig");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_zag_relationship_zig");
    #endif
}


/* Object Existent */

void adm_object_existent_zag(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_zag");
    #endif

    if (ent_zag->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Zag",
            ent_zag->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_zag");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */