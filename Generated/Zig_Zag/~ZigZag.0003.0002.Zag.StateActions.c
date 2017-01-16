
#include "~ZigZag.0000.0000.Header.h"


/* Zag State Actions */

void adm_state_action_zag_holding(
    adm_ent_zag_typ * ent_zag)
{
    /* Entity Objects */
    adm_ent_zig_typ * ent_zig_0000000001;

    /* Relationship Relations */
    adm_rel_zag_relationship_zig_typ * rel_zag_relationship_zig_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zag_holding");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("Zag:Holding");

    /* Traverse - TraverseSelection */

    adm_object_existent_zag(
        ent_zag,
        1, 126, 45);

    rel_zag_relationship_zig_0000000001 = ent_zag->rel_relationship_zig_head;

    ent_zig_0000000001 = rel_zag_relationship_zig_0000000001->ent_zig;

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("<- Hold");

    /* GenerateEvent */

    adm_send_event_zig_hold(
        ent_zag,
        ent_zig_0000000001,
        1, 136, 49);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zag_holding");
    #endif
}

void adm_state_action_zag_waiting(
    adm_ent_zag_typ * ent_zag)
{
    /* Entity Objects */
    adm_ent_zig_typ * ent_zig_0000000001;

    /* Relationship Relations */
    adm_rel_zag_relationship_zig_typ * rel_zag_relationship_zig_0000000001;

    #if ADM_PROBE
    adm_probe_enter(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zag_waiting");
    #endif

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("Zag:Waiting");

    /* Traverse - TraverseSelection */

    adm_object_existent_zag(
        ent_zag,
        1, 157, 45);

    rel_zag_relationship_zig_0000000001 = ent_zag->rel_relationship_zig_head;

    ent_zig_0000000001 = rel_zag_relationship_zig_0000000001->ent_zig;

    /* Template */

    adm_write_newline();
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("    ");
    adm_write_str("<- Kill");

    /* GenerateEvent */

    adm_send_event_zig_kill(
        ent_zag,
        ent_zig_0000000001,
        1, 167, 49);

    /* Unrelate */

    adm_kill_relation_zag_relationship_zig(
        ent_zag,
        rel_zag_relationship_zig_0000000001,
        1, 169, 49);

    #if ADM_PROBE
    adm_probe_leave(ADM_PROBE_GROUP_STATE_ACTION, "adm_state_action_zag_waiting");
    #endif
}

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */