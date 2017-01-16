
/* System Error Messages Header */

/* Error List Type Define */

enum adm_error_list_typ {
    ADM_ERROR_NO_ERROR,
    ADM_ERROR_INVALID_INTEGER_ARGUMENT,
    ADM_ERROR_TOO_MANY_ARGUMENTS,
    ADM_ERROR_OUT_OF_MEMORY,
    ADM_ERROR_TRANSITION_CANNOT_HAPPEN,
    ADM_ERROR_OBJECT_HAS_EXISTING_RELATION,
    ADM_ERROR_OBJECTS_ALREADY_RELATED,
    ADM_ERROR_NO_RELATIONS_EXIST,
    ADM_ERROR_ENUMERATION_INCREMENTED_OUT_OF_BOUNDS,
    ADM_ERROR_ENUMERATION_DECREMENTED_OUT_OF_BOUNDS,
    ADM_ERROR_ATTEMPT_TO_DELETE_CURRENT_OBJECT,
    ADM_ERROR_ATTEMPT_TO_USE_DELETED_OBJECT,
    ADM_ERROR_RELATIONSHIP_ALREADY_UNRELATED,
    ADM_ERROR_CONDITIONALITY_INTEGRITY_VIOLATION,
    ADM_ERROR_MULTIPLICITY_INTEGRITY_VIOLATION,
    ADM_ERROR_ONLY_ONE_SELF_DIRECTED_EVENT_ALLOWED,
    ADM_ERROR_VALUE_OUTSIDE_RANGE_FOR_TYPE,
    ADM_ERROR_CREATE_RESULT_FILE_FAILED,
    ADM_ERROR_CLOSE_RESULT_FILE_FAILED,
    ADM_ERROR_FILE_RESULT_WRITE_FAILED,
    ADM_ERROR_CREATE_STREAM_FILE_FAILED,
    ADM_ERROR_CLOSE_STREAM_FILE_FAILED,
    ADM_ERROR_FILE_STREAM_WRITE_FAILED,
    ADM_ERROR_FOREIGN_KEY_IDENTIFIER_RELATION_INVALID,
    ADM_ERROR_OBJECT_IDENTIFIER_ATTRIBUTES_NOT_UNIQUE,
    ADM_ERROR_TEMPLATE_MAXIMUM_TAB_INDENT_EXCEEDED,
    ADM_ERROR_TEMPLATE_MINIMUM_TAB_INDENT_OFFPAGE,
    ADM_ERROR_DISPLAY_MAXIMUM_TAB_INDENT_EXCEEDED,
    ADM_ERROR_DISPLAY_MINIMUM_TAB_INDENT_OFFPAGE,
    /**/
    ADM_ERROR_MESSAGE_NULL
};

/* Copyright (C) 2017 Dark Matter Systems Ltd. All rights reserved. */