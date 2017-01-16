
#include "~ZigZag.0000.0000.Header.h"


/* Zig State Actions */

void adm_state_action_zig_starting(
    adm_ent_zig_typ * ent_zig)
{
    /* Entity Objects */
    adm_ent_zag_typ * ent_zag_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zig_starting");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("Zig:Starting");

    /* Create */

    ent_zag_0000000001 = adm_make_object_zag(
        ADM_STATUS_ZAG_ACTIVATE);

    /* Relate */

    adm_link_relation_zig_relationship_zag(
        ent_zig,
        ent_zag_0000000001,
        1, 36, 45);

    /* Relate */

    adm_link_relation_zag_relationship_zig(
        ent_zag_0000000001,
        ent_zig,
        1, 37, 45);

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("Hold ->");

    /* GenerateEvent */

    adm_send_event_zag_hold(
        ent_zig,
        ent_zag_0000000001,
        1, 46, 45);

    adm_bind_object_zag(
        ent_zag_0000000001,
        1, 34, 50);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zig_starting");
    #endif
}

void adm_state_action_zig_holding(
    adm_ent_zig_typ * ent_zig)
{
    /* Entity Objects */
    adm_ent_zag_typ * ent_zag_0000000001;

    /* Relationship Relations */
    adm_rel_zig_relationship_zag_typ * rel_zig_relationship_zag_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zig_holding");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("Zig:Holding");

    /* Traverse - TraverseSelection */

    adm_object_existent_zig(
        ent_zig,
        1, 61, 45);

    rel_zig_relationship_zag_0000000001 = ent_zig->rel_relationship_zag_head;

    if (rel_zig_relationship_zag_0000000001 != NULL) {

        ent_zag_0000000001 = rel_zig_relationship_zag_0000000001->ent_zag;

        /* Template */

        adm_write_newline();
        adm_write_str("    ");
        adm_write_str("    ");
        adm_write_str("    ");
        adm_write_str("    ");
        adm_write_str("    ");
        adm_write_str("Wait ->");

        /* GenerateEvent */

        adm_send_event_zag_wait(
            ent_zig,
            ent_zag_0000000001,
            1, 71, 49);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zig_holding");
    #endif
}

void adm_state_action_zig_vanish(
    adm_ent_zig_typ * ent_zig)
{
    /* Entity Objects */
    adm_ent_zag_typ * ent_zag_0000000001;

    /* Relationship Relations */
    adm_rel_zig_relationship_zag_typ * rel_zig_relationship_zag_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zig_vanish");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("Zig:Vanish");
    adm_write_newline();

    /* Traverse - TraverseSelection */

    adm_object_existent_zig(
        ent_zig,
        1, 87, 45);

    rel_zig_relationship_zag_0000000001 = ent_zig->rel_relationship_zag_head;

    if (rel_zig_relationship_zag_0000000001 != NULL) {

        ent_zag_0000000001 = rel_zig_relationship_zag_0000000001->ent_zag;

        /* Unrelate */

        adm_kill_relation_zig_relationship_zag(
            ent_zig,
            rel_zig_relationship_zag_0000000001,
            1, 90, 49);

        /* Delete */

        adm_kill_object_zag(
            ent_zig,
            ent_zag_0000000001,
            1, 92, 49);
    }

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zig_vanish");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */