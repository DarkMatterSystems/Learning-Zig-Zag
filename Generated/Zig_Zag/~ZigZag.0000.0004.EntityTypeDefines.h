
/* Entity Type Defines Header */

/* Entity Status Type Defines */

typedef enum {
    ADM_STATUS_ZIG_ACTIVATE,
    ADM_STATUS_ZIG_STARTING,
    ADM_STATUS_ZIG_HOLDING,
    ADM_STATUS_ZIG_VANISH
} adm_sta_zig_typ;

typedef enum {
    ADM_STATUS_ZAG_ACTIVATE,
    ADM_STATUS_ZAG_HOLDING,
    ADM_STATUS_ZAG_WAITING
} adm_sta_zag_typ;


/* Entity Event Type Defines */

typedef enum {
    ADM_EVENT_ZIG_START,
    ADM_EVENT_ZIG_HOLD,
    ADM_EVENT_ZIG_KILL
} adm_evt_zig_typ;

typedef enum {
    ADM_EVENT_ZAG_HOLD,
    ADM_EVENT_ZAG_WAIT
} adm_evt_zag_typ;


/* Entity Type Defines */

/* Zig */

typedef struct adm_ent_zig {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_zig_typ status;
    struct adm_rel_zig_relationship_zag * rel_relationship_zag_head;
    struct adm_rel_zig_relationship_zag * rel_relationship_zag_tail;
    struct adm_ent_zig * back;
    struct adm_ent_zig * next;
} adm_ent_zig_typ;

/* Zag */

typedef struct adm_ent_zag {
    adm_base_integer_typ identity;
    adm_base_boolean_typ unique;
    adm_base_boolean_typ deleted;
    adm_base_boolean_typ marked;
    adm_sta_zag_typ status;
    struct adm_rel_zag_relationship_zig * rel_relationship_zig_head;
    struct adm_rel_zag_relationship_zig * rel_relationship_zig_tail;
    struct adm_ent_zag * back;
    struct adm_ent_zag * next;
} adm_ent_zag_typ;


/* Relationship Type Defines */

typedef struct adm_rel_zig_relationship_zag {
    adm_ent_zag_typ * ent_zag;
    struct adm_rel_zig_relationship_zag * back;
    struct adm_rel_zig_relationship_zag * next;
} adm_rel_zig_relationship_zag_typ;

typedef struct adm_rel_zag_relationship_zig {
    adm_ent_zig_typ * ent_zig;
    struct adm_rel_zag_relationship_zig * back;
    struct adm_rel_zag_relationship_zig * next;
} adm_rel_zag_relationship_zig_typ;


/* Error Location Type Define */

typedef struct {
    adm_base_integer_typ file;
    adm_base_integer_typ line;
    adm_base_integer_typ rank;
} adm_error_location_typ;


/* Entity Event Pool Target Type Defines */

typedef struct adm_pool_target_zig {
    adm_evt_zig_typ evente;
    adm_ent_zig_typ * ent_zig;
    adm_error_location_typ error_location;
    struct adm_pool_target_zig * next;
} adm_pool_target_zig_typ;

typedef struct adm_pool_target_zag {
    adm_evt_zag_typ evente;
    adm_ent_zag_typ * ent_zag;
    adm_error_location_typ error_location;
    struct adm_pool_target_zag * next;
} adm_pool_target_zag_typ;


/* Entity System - Entity Type Defines */

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_zig_typ * live_list_head;
    adm_ent_zig_typ * live_list_tail;
    adm_ent_zig_typ * dead_list_head;
    adm_ent_zig_typ * dead_list_tail;
    adm_pool_target_zig_typ * home_pool_head;
    adm_pool_target_zig_typ * home_pool_tail;
    adm_pool_target_zig_typ * away_pool_head;
    adm_pool_target_zig_typ * away_pool_tail;
} adm_entity_system_zig_typ;

typedef struct {
    adm_base_integer_typ tote;
    adm_ent_zag_typ * live_list_head;
    adm_ent_zag_typ * live_list_tail;
    adm_ent_zag_typ * dead_list_head;
    adm_ent_zag_typ * dead_list_tail;
    adm_pool_target_zag_typ * home_pool_head;
    adm_pool_target_zag_typ * home_pool_tail;
    adm_pool_target_zag_typ * away_pool_head;
    adm_pool_target_zag_typ * away_pool_tail;
} adm_entity_system_zag_typ;


/* Entity System - System Type Define */

typedef struct {
    adm_entity_system_zig_typ ent_zig;
    adm_entity_system_zag_typ ent_zag;
} adm_entity_system_typ;

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */