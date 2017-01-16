
#include "~ZigZag.0000.0000.Header.h"


/* Zig Data Access */

/* Make Entity Object */

adm_ent_zig_typ * adm_make_object_zig(
    adm_sta_zig_typ status)
{
    adm_ent_zig_typ * ent_zig;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_zig");
    #endif

    if (adm_entity_system.ent_zig.dead_list_head != NULL) {

        ent_zig = adm_entity_system.ent_zig.dead_list_head;

        if (adm_entity_system.ent_zig.dead_list_head == ent_zig) {

            adm_entity_system.ent_zig.dead_list_head = ent_zig->next;

        } else {

            (ent_zig->back)->next = ent_zig->next;
        }

        if (adm_entity_system.ent_zig.dead_list_tail == ent_zig) {

            adm_entity_system.ent_zig.dead_list_tail = ent_zig->back;

        } else {

            (ent_zig->next)->back = ent_zig->back;
        }

    } else {

        ent_zig = (adm_ent_zig_typ*)adm_allocate_memory(sizeof(adm_ent_zig_typ));
    }

    ent_zig->identity = ++adm_entity_system.ent_zig.tote;

    ent_zig->unique  = FALSE;
    ent_zig->deleted = FALSE;
    ent_zig->marked  = FALSE;
    ent_zig->status  = status;

    ent_zig->rel_relationship_zag_head = NULL;
    ent_zig->rel_relationship_zag_tail = NULL;

    ent_zig->back = NULL;
    ent_zig->next = NULL;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_make_object_zig");
    #endif

    return (ent_zig);
}


/* Bind Entity Object */

void adm_bind_object_zig(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_zig");
    #endif

    adm_object_existent_zig(
        ent_zig,
        error_file,
        error_line,
        error_rank);

    if (adm_entity_system.ent_zig.live_list_head == NULL) {

        ent_zig->back = NULL;

        adm_entity_system.ent_zig.live_list_head = ent_zig;

    } else {

        ent_zig->back = adm_entity_system.ent_zig.live_list_tail;

        (adm_entity_system.ent_zig.live_list_tail)->next = ent_zig;
    }

    ent_zig->next = NULL;

    adm_entity_system.ent_zig.live_list_tail = ent_zig;

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_bind_object_zig");
    #endif
}


/* Kill Entity Object */

void adm_kill_object_zig(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_zig");
    #endif

    adm_object_existent_zig(
        ent_zig,
        error_file,
        error_line,
        error_rank);

    if (source_object != ent_zig) {

        if (ent_zig->rel_relationship_zag_head != NULL) {

            adm_error_report(
                ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
                error_file, error_line, error_rank,
                "Zig",
                ent_zig->identity,
                "Relationship",
                "Zag");
        }

        if (adm_entity_system.ent_zig.live_list_head == ent_zig) {

            adm_entity_system.ent_zig.live_list_head = ent_zig->next;

        } else {

            (ent_zig->back)->next = ent_zig->next;
        }

        if (adm_entity_system.ent_zig.live_list_tail == ent_zig) {

            adm_entity_system.ent_zig.live_list_tail = ent_zig->back;

        } else {

            (ent_zig->next)->back = ent_zig->back;
        }

        ent_zig->deleted = TRUE;

        if (adm_entity_system.ent_zig.dead_list_head == NULL) {

            ent_zig->back = NULL;

            adm_entity_system.ent_zig.dead_list_head = ent_zig;

        } else {

            ent_zig->back = adm_entity_system.ent_zig.dead_list_tail;

            (adm_entity_system.ent_zig.dead_list_tail)->next = ent_zig;
        }

        ent_zig->next = NULL;

        adm_entity_system.ent_zig.dead_list_tail = ent_zig;

    } else {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
            error_file, error_line, error_rank,
            "Zig",
            ent_zig->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_object_zig");
    #endif
}


/* Link Entity Relations */

void adm_link_relation_zig_relationship_zag(
    adm_ent_zig_typ * ent_source_zig,
    adm_ent_zag_typ * ent_target_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    adm_rel_zig_relationship_zag_typ * rel_zig_relationship_zag;

    adm_base_boolean_typ zag_not_found;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_zig_relationship_zag");
    #endif

    adm_object_existent_zig(
        ent_source_zig,
        error_file,
        error_line,
        error_rank);

    zag_not_found = TRUE;

    rel_zig_relationship_zag = ent_source_zig->rel_relationship_zag_head;

    while (
        zag_not_found &&
        rel_zig_relationship_zag != NULL) {

        if (rel_zig_relationship_zag->ent_zag == ent_target_zag) {

            zag_not_found = FALSE;
        }

        rel_zig_relationship_zag = rel_zig_relationship_zag->next;
    }

    if (zag_not_found) {

        rel_zig_relationship_zag = (adm_rel_zig_relationship_zag_typ*)
            adm_allocate_memory(sizeof(adm_rel_zig_relationship_zag_typ));

        rel_zig_relationship_zag->ent_zag = ent_target_zag;

        if (ent_source_zig->rel_relationship_zag_head == NULL) {

            rel_zig_relationship_zag->back = NULL;

            ent_source_zig->rel_relationship_zag_head = rel_zig_relationship_zag;

        } else {

            rel_zig_relationship_zag->back = ent_source_zig->rel_relationship_zag_tail;

            (ent_source_zig->rel_relationship_zag_tail)->next = rel_zig_relationship_zag;
        }

        rel_zig_relationship_zag->next = NULL;

        ent_source_zig->rel_relationship_zag_tail = rel_zig_relationship_zag;

    } else {

        adm_error_report(
            ADM_ERROR_OBJECTS_ALREADY_RELATED,
            error_file, error_line, error_rank,
            "Zig",
            ent_source_zig->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_link_relation_zig_relationship_zag");
    #endif
}


/* Kill Entity Relations */

void adm_kill_relation_zig_relationship_zag(
    adm_ent_zig_typ * ent_zig,
    adm_rel_zig_relationship_zag_typ * rel_zig_relationship_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_zig_relationship_zag");
    #endif

    adm_object_existent_zig(
        ent_zig,
        error_file,
        error_line,
        error_rank);

    if (
        (adm_base_integer_typ)rel_zig_relationship_zag->next !=
        (adm_base_integer_typ)rel_zig_relationship_zag->ent_zag) {

        if (ent_zig->rel_relationship_zag_head != NULL) {

            if (ent_zig->rel_relationship_zag_head == rel_zig_relationship_zag) {

                ent_zig->rel_relationship_zag_head = rel_zig_relationship_zag->next;

            } else {

                (rel_zig_relationship_zag->back)->next = rel_zig_relationship_zag->next;
            }

            if (ent_zig->rel_relationship_zag_tail == rel_zig_relationship_zag) {

                ent_zig->rel_relationship_zag_tail = rel_zig_relationship_zag->back;

            } else {

                (rel_zig_relationship_zag->next)->back = rel_zig_relationship_zag->back;
            }

            adm_deallocate_memory(rel_zig_relationship_zag);

        } else {

            adm_error_report(
                ADM_ERROR_NO_RELATIONS_EXIST,
                error_file, error_line, error_rank,
                "Zig",
                ent_zig->identity,
                "Relationship",
                "Zag");
        }

    } else {

        adm_error_report(
            ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
            error_file, error_line, error_rank,
            "Zig",
            ent_zig->identity,
            "Relationship",
            "Zag");
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_kill_relation_zig_relationship_zag");
    #endif
}


/* Object Existent */

void adm_object_existent_zig(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank)
{
    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_zig");
    #endif

    if (ent_zig->deleted) {

        adm_error_report(
            ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
            error_file, error_line, error_rank,
            "Zig",
            ent_zig->identity,
            NULL, NULL);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_DATA_ACCESS, "adm_object_existent_zig");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */