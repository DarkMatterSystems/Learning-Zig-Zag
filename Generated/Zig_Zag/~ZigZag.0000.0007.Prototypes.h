
/* System Prototypes Header */

/* Main Prototype */

int main(
    int,
    char * []);


/* System Library */

void * adm_allocate_memory(
    adm_base_integer_typ amount);

void adm_deallocate_memory(
    void * memory);

void adm_open_test_result_file  (void);
void adm_close_test_result_file (void);

void adm_open_stream_file(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_close_stream_file(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_write_int(
    adm_base_integer_typ number);

void adm_write_bln(
    adm_base_boolean_typ value);

void adm_write_fxd(
    adm_base_fixed_typ number);

void adm_write_flt(
    adm_base_float_typ number);

void adm_write_str(
    adm_base_string_typ * string);

void adm_write_newline(void);

void adm_template_tab_in(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_template_tab_out(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_display_tab_in(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_display_tab_out(
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_convert_string_upper_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_lower_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_sentence_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_capital_case(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_remove_spaces(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_convert_string_convert_underlines(
    adm_base_string_typ * source_string,
    adm_base_string_typ * target_string);

void adm_integrity_check(void);


#if ADM_PROBE

void adm_probe_enter(
    adm_probe_group_typ   group,
    adm_base_string_typ * procedure_name);

void adm_probe_leave(
    adm_probe_group_typ   group,
    adm_base_string_typ * procedure_name);

void adm_add_spaces(
    adm_base_string_typ  * space_string,
    adm_base_integer_typ   space_number);

#endif


/* System Error Handler */

void adm_error_report(
    adm_err_number_typ     error,
    adm_err_file_typ       file,
    adm_err_line_typ       line,
    adm_err_rank_typ       rank,
    adm_err_problem_typ  * source,
    adm_base_integer_typ   identity,
    adm_err_problem_typ  * relation,
    adm_err_problem_typ  * target);


/* Initialisation Prototype */

void adm_initialisation(void);


/* Domain Initialisation Prototypes */

void adm_initialisation_zigzagoon(void);


/* System Scheduler Prototypes */

void adm_scheduler(void);

void adm_scheduler_dom_zigzagoon(void);


/* System Initialisation Scheduler Prototypes */

void adm_scheduler_initialisation(void);

void adm_scheduler_initialisation_zigzagoon(void);


/* System Determine Termination Scheduler Prototypes */

adm_base_boolean_typ adm_scheduler_determine_termination(void);

adm_base_boolean_typ adm_scheduler_determine_termination_dom_zigzagoon(void);


/* Data Access Prototypes */

adm_ent_zig_typ * adm_make_object_zig(
    adm_sta_zig_typ status);

adm_ent_zag_typ * adm_make_object_zag(
    adm_sta_zag_typ status);

void adm_bind_object_zig(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_bind_object_zag(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_zig(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_object_zag(
    void * source_object,
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_zig_relationship_zag(
    adm_ent_zig_typ * ent_source_zig,
    adm_ent_zag_typ * ent_target_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_link_relation_zag_relationship_zig(
    adm_ent_zag_typ * ent_source_zag,
    adm_ent_zig_typ * ent_target_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_zig_relationship_zag(
    adm_ent_zig_typ * ent_zig,
    adm_rel_zig_relationship_zag_typ * rel_zig_relationship_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_kill_relation_zag_relationship_zig(
    adm_ent_zag_typ * ent_zag,
    adm_rel_zag_relationship_zig_typ * rel_zag_relationship_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_zig(
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_object_existent_zag(
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);


/* Event Sender Prototypes */

void adm_send_event_zig_start(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_zig_hold(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_zig_kill(
    void * source_object,
    adm_ent_zig_typ * ent_zig,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_zag_hold(
    void * source_object,
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);

void adm_send_event_zag_wait(
    void * source_object,
    adm_ent_zag_typ * ent_zag,
    adm_err_file_typ error_file,
    adm_err_line_typ error_line,
    adm_err_rank_typ error_rank);


/* Dispatcher Prototypes */

void adm_dispatcher_zig         (void);
void adm_dispatch_home_pool_zig (void);

adm_pool_target_zig_typ * adm_find_home_target_event_zig (void);
adm_pool_target_zig_typ * adm_find_away_target_event_zig (void);

void adm_dispatch_state_action_zig(
    adm_pool_target_zig_typ * pool_target_zig);

void adm_dispatcher_zag         (void);
void adm_dispatch_home_pool_zag (void);

adm_pool_target_zag_typ * adm_find_home_target_event_zag (void);
adm_pool_target_zag_typ * adm_find_away_target_event_zag (void);

void adm_dispatch_state_action_zag(
    adm_pool_target_zag_typ * pool_target_zag);


/* State Action Prototypes */

void adm_state_action_zig_starting(
    adm_ent_zig_typ * ent_zig);

void adm_state_action_zig_holding(
    adm_ent_zig_typ * ent_zig);

void adm_state_action_zig_vanish(
    adm_ent_zig_typ * ent_zig);

void adm_state_action_zag_holding(
    adm_ent_zag_typ * ent_zag);

void adm_state_action_zag_waiting(
    adm_ent_zag_typ * ent_zag);

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */