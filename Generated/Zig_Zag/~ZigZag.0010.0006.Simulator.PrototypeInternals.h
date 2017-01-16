
/* Simulator System Prototype Internals Header */

/* Display Entity Prototypes */

void adm_sim_display_entity_zig(
    void);

void adm_sim_display_entity_zag(
    void);


/* Acquire Identity Event Prototypes */

void adm_sim_acquire_identity_event_zig_start(
    void);

void adm_sim_acquire_identity_event_zig_hold(
    void);

void adm_sim_acquire_identity_event_zig_kill(
    void);

void adm_sim_acquire_identity_event_zag_hold(
    void);

void adm_sim_acquire_identity_event_zag_wait(
    void);


/* Acquire Identifier Event Prototypes */


/* Display Event Prototypes */

void adm_sim_display_event_zig_start(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_zig_hold(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_zig_kill(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_zag_hold(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_sim_display_event_zag_wait(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);


/* Display State Prototypes */

void adm_sim_display_state_zig_starting(
    adm_pool_target_zig_typ * pool_target);

void adm_sim_display_state_zig_holding(
    adm_pool_target_zig_typ * pool_target);

void adm_sim_display_state_zig_vanish(
    adm_pool_target_zig_typ * pool_target);

void adm_sim_display_state_zag_holding(
    adm_pool_target_zag_typ * pool_target);

void adm_sim_display_state_zag_waiting(
    adm_pool_target_zag_typ * pool_target);


/* Find Event Name Prototype */

adm_base_string_typ * adm_sim_find_event_name(
    adm_base_integer_typ entity_index,
    adm_base_integer_typ entity_event_index);

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */