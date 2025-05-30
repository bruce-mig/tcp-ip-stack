/*
 * =====================================================================================
 *
 *       Filename:  clistd.h
 *
 *    Description:  All Validation functions for leaves and standard default
 *                  callbacks are defined in this file
 *
 *        Version:  1.0
 *        Created:  Thursday 22 May 2025 21:15:29  CAT
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  BRUCE MIGERI, Software Developer (BM), bmigeri@gmail.com
 *
 *
 * =====================================================================================
 */

#ifndef __CLISTD__
#define __CLISTD__

#include "libcliid.h"

typedef struct leaf leaf_t;
typedef struct _param_t_ param_t;

typedef struct serialized_buffer ser_buff_t;

typedef enum { VALIDATION_FAILED = -1, VALIDATION_SUCCESS } CLI_VAL_RC;

/*Default validation handlers for Data types*/

CLI_VAL_RC
int_validation_handler(leaf_t *leaf, char *value_passed);

CLI_VAL_RC
string_validation_handler(leaf_t *leaf, char *value_passed);

CLI_VAL_RC
ipv4_validation_handler(leaf_t *leaf, char *value_passed);

CLI_VAL_RC
ipv6_validation_handler(leaf_t *leaf, char *value_passed);

CLI_VAL_RC
float_validation_handler(leaf_t *leaf, char *value_passed);

CLI_VAL_RC
boolean_validation_handler(leaf_t *leaf, char *value_passed);

int enable_disable_validation_handler(char *value_passed);

int grep_pattern_validation(char *value_passed);

/* Default command handlers */
int config_console_name_handler(param_t *param, ser_buff_t *b,
                                op_mode enable_or_disable);

int repeat_last_command(param_t *param, ser_buff_t *b,
                        op_mode enable_or_disable);

int mode_enter_callback(param_t *param, ser_buff_t *b,
                        op_mode enable_or_disable);

int display_sub_options_callback(param_t *param, ser_buff_t *b,
                                 op_mode enable_or_disable);

int display_cmd_expansion_callback(param_t *param, ser_buff_t *b,
                                   op_mode enable_or_disable);

int show_history_callback(param_t *param, ser_buff_t *b,
                          op_mode enable_or_disable);

int clear_screen_handler(param_t *param, ser_buff_t *b,
                         op_mode enable_or_disable);

int exit_cmd_handler(param_t *param, ser_buff_t *b, op_mode enable_or_disable);

int end_cmd_handler(param_t *param, ser_buff_t *b, op_mode enable_or_disable);

int config_mode_enter_handler(param_t *param, ser_buff_t *b,
                              op_mode enable_or_disable);

int negate_callback(param_t *param, ser_buff_t *b, op_mode enable_or_disable);

int supportsave_handler(param_t *param, ser_buff_t *b,
                        op_mode enable_or_disable);

int cli_terminate_handler(param_t *param, ser_buff_t *b,
                          op_mode enable_or_disable);

int show_help_handler(param_t *param, ser_buff_t *b, op_mode enable_or_disable);

int show_resgistered_cmd_handler(param_t *param, ser_buff_t *b,
                                 op_mode enable_or_disable);

int show_cmd_tree(param_t *param, ser_buff_t *tlv_buf,
                  op_mode enable_or_disable);

void record_command(char *hist_file, char *cons_input_buffer,
                    unsigned int cmd_len);

int show_extension_param_handler(param_t *param, ser_buff_t *b,
                                 op_mode enable_or_disable);

int pipe_handler(param_t *param, ser_buff_t *b, op_mode enable_or_disable);

#endif /* __CLISTD__ */
