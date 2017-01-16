
/* Simulator System Entity Type Defines Header */

/* Domain Enumerations */

typedef enum {
    ADM_SIM_INDEX_DOMAIN_ZIGZAGOON
} adm_sim_index_domain_typ;

/* Entity Enumerations */

typedef enum {
    ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZIG,
    ADM_SIM_INDEX_ENTITY_ZIGZAGOON_ZAG
} adm_sim_index_entity_typ;

/* Event Enumerations */

typedef enum {
    ADM_SIM_INDEX_EVENT_ZIGZAGOON_ZIG_START,
    ADM_SIM_INDEX_EVENT_ZIGZAGOON_ZIG_HOLD,
    ADM_SIM_INDEX_EVENT_ZIGZAGOON_ZIG_KILL,
    ADM_SIM_INDEX_EVENT_ZIGZAGOON_ZAG_HOLD,
    ADM_SIM_INDEX_EVENT_ZIGZAGOON_ZAG_WAIT
} adm_sim_index_event_typ;

/* Entity Display Widths */

typedef struct {
    adm_base_integer_typ identity;
    adm_base_integer_typ status;
} adm_sim_width_zig_typ;

typedef struct {
    adm_base_integer_typ identity;
    adm_base_integer_typ status;
} adm_sim_width_zag_typ;

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */