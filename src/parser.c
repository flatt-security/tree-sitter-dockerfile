#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 230
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym__user_name_or_group_token1 = 15,
  aux_sym_workdir_instruction_token1 = 16,
  aux_sym_arg_instruction_token1 = 17,
  aux_sym_arg_instruction_token2 = 18,
  anon_sym_EQ = 19,
  aux_sym_onbuild_instruction_token1 = 20,
  aux_sym_stopsignal_instruction_token1 = 21,
  aux_sym__stopsignal_value_token1 = 22,
  aux_sym_healthcheck_instruction_token1 = 23,
  anon_sym_NONE = 24,
  aux_sym_shell_instruction_token1 = 25,
  aux_sym_maintainer_instruction_token1 = 26,
  aux_sym_maintainer_instruction_token2 = 27,
  aux_sym_cross_build_instruction_token1 = 28,
  aux_sym_path_token1 = 29,
  aux_sym_path_token2 = 30,
  anon_sym_DOLLAR = 31,
  anon_sym_LBRACE = 32,
  aux_sym_expansion_token1 = 33,
  anon_sym_RBRACE = 34,
  sym_variable = 35,
  aux_sym__spaced_env_pair_token1 = 36,
  aux_sym__env_key_token1 = 37,
  aux_sym_expose_port_token1 = 38,
  anon_sym_SLASHtcp = 39,
  anon_sym_SLASHudp = 40,
  aux_sym_label_pair_token1 = 41,
  aux_sym_image_name_token1 = 42,
  aux_sym_image_tag_value_token1 = 43,
  anon_sym_AT = 44,
  aux_sym_image_digest_value_token1 = 45,
  anon_sym_DASH_DASH = 46,
  sym_param_name = 47,
  sym_param_value = 48,
  aux_sym_image_alias_token1 = 49,
  anon_sym_LBRACK = 50,
  anon_sym_COMMA = 51,
  anon_sym_RBRACK = 52,
  aux_sym_shell_fragment_token1 = 53,
  aux_sym_shell_fragment_token2 = 54,
  sym_line_continuation = 55,
  anon_sym_POUND = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_double_quoted_string_token1 = 58,
  aux_sym_unquoted_string_token1 = 59,
  anon_sym_BSLASH = 60,
  sym_escape_sequence = 61,
  sym__non_newline_whitespace = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym__instruction = 65,
  sym_from_instruction = 66,
  sym_run_instruction = 67,
  sym_cmd_instruction = 68,
  sym_label_instruction = 69,
  sym_expose_instruction = 70,
  sym_env_instruction = 71,
  sym_add_instruction = 72,
  sym_copy_instruction = 73,
  sym_entrypoint_instruction = 74,
  sym_volume_instruction = 75,
  sym_user_instruction = 76,
  aux_sym__user_name_or_group = 77,
  sym_workdir_instruction = 78,
  sym_arg_instruction = 79,
  sym_onbuild_instruction = 80,
  sym_stopsignal_instruction = 81,
  aux_sym__stopsignal_value = 82,
  sym_healthcheck_instruction = 83,
  sym_shell_instruction = 84,
  sym_maintainer_instruction = 85,
  sym_cross_build_instruction = 86,
  sym_path = 87,
  sym_expansion = 88,
  sym_env_pair = 89,
  sym__spaced_env_pair = 90,
  sym__env_key = 91,
  sym_expose_port = 92,
  sym_label_pair = 93,
  sym_image_spec = 94,
  sym_image_name = 95,
  sym_image_tag = 96,
  sym_image_tag_value = 97,
  sym_image_digest = 98,
  sym_image_digest_value = 99,
  sym_param = 100,
  sym_image_alias = 101,
  sym_string_array = 102,
  sym_shell_command = 103,
  sym_shell_fragment = 104,
  sym__comment_line = 105,
  sym__anon_comment = 106,
  sym_double_quoted_string = 107,
  sym_unquoted_string = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_label_instruction_repeat1 = 110,
  aux_sym_expose_instruction_repeat1 = 111,
  aux_sym_env_instruction_repeat1 = 112,
  aux_sym_volume_instruction_repeat1 = 113,
  aux_sym_healthcheck_instruction_repeat1 = 114,
  aux_sym_path_repeat1 = 115,
  aux_sym_image_name_repeat1 = 116,
  aux_sym_image_tag_value_repeat1 = 117,
  aux_sym_image_digest_value_repeat1 = 118,
  aux_sym_image_alias_repeat1 = 119,
  aux_sym_string_array_repeat1 = 120,
  aux_sym_shell_command_repeat1 = 121,
  aux_sym_shell_command_repeat2 = 122,
  aux_sym_shell_fragment_repeat1 = 123,
  aux_sym_double_quoted_string_repeat1 = 124,
  aux_sym_unquoted_string_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "FROM",
  [aux_sym_from_instruction_token2] = "AS",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [aux_sym_label_instruction_token1] = "LABEL",
  [aux_sym_expose_instruction_token1] = "EXPOSE",
  [aux_sym_env_instruction_token1] = "ENV",
  [aux_sym_add_instruction_token1] = "ADD",
  [aux_sym_copy_instruction_token1] = "COPY",
  [aux_sym_entrypoint_instruction_token1] = "ENTRYPOINT",
  [aux_sym_volume_instruction_token1] = "VOLUME",
  [aux_sym_user_instruction_token1] = "USER",
  [anon_sym_COLON] = ":",
  [aux_sym__user_name_or_group_token1] = "_user_name_or_group_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym__stopsignal_value_token1] = "_stopsignal_value_token1",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_maintainer_instruction_token1] = "MAINTAINER",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "CROSS_BUILD",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym__spaced_env_pair_token1] = "_spaced_env_pair_token1",
  [aux_sym__env_key_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_tag_value_token1] = "image_tag_value_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_value_token1] = "image_digest_value_token1",
  [anon_sym_DASH_DASH] = "--",
  [sym_param_name] = "param_name",
  [sym_param_value] = "param_value",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [aux_sym__user_name_or_group] = "_user_name_or_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [aux_sym__stopsignal_value] = "_stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym__env_key] = "_env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_tag_value] = "image_tag_value",
  [sym_image_digest] = "image_digest",
  [sym_image_digest_value] = "image_digest_value",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_value_repeat1] = "image_tag_value_repeat1",
  [aux_sym_image_digest_value_repeat1] = "image_digest_value_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__user_name_or_group_token1] = aux_sym__user_name_or_group_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym__stopsignal_value_token1] = aux_sym__stopsignal_value_token1,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym__spaced_env_pair_token1] = aux_sym__spaced_env_pair_token1,
  [aux_sym__env_key_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_tag_value_token1] = aux_sym_image_tag_value_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_value_token1] = aux_sym_image_digest_value_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_param_name] = sym_param_name,
  [sym_param_value] = sym_param_value,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [aux_sym__user_name_or_group] = aux_sym__user_name_or_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [aux_sym__stopsignal_value] = aux_sym__stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym__env_key] = sym__env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_tag_value] = sym_image_tag_value,
  [sym_image_digest] = sym_image_digest,
  [sym_image_digest_value] = sym_image_digest_value,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_value_repeat1] = aux_sym_image_tag_value_repeat1,
  [aux_sym_image_digest_value_repeat1] = aux_sym_image_digest_value_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__env_key_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_param_name] = {
    .visible = true,
    .named = true,
  },
  [sym_param_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__non_newline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__user_name_or_group] = {
    .visible = false,
    .named = false,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stopsignal_value] = {
    .visible = false,
    .named = false,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__env_key] = {
    .visible = false,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag_value] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest_value] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_line] = {
    .visible = false,
    .named = true,
  },
  [sym__anon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_user, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 0},
    {field_tag, 1},
  [7] =
    {field_digest, 1},
    {field_name, 0},
  [9] =
    {field_as, 3},
  [10] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_name, 0},
    {field_value, 2},
  [17] =
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_default, 3},
    {field_name, 1},
  [21] =
    {field_name, 1},
    {field_value, 3},
  [23] =
    {field_as, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = sym_unquoted_string,
  },
  [11] = {
    [1] = sym_unquoted_string,
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__user_name_or_group, 2,
    aux_sym__user_name_or_group,
    sym_unquoted_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(229);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 85:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 148:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_param_name);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 158},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 158},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 158},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 46},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 158},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 158},
  [112] = {.lex_state = 158},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 158},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 158},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 45},
  [126] = {.lex_state = 45},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 158},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 158},
  [134] = {.lex_state = 158},
  [135] = {.lex_state = 45},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 45},
  [139] = {.lex_state = 45},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 45},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 158},
  [148] = {.lex_state = 45},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 45},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 158},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 190},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 158},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 158},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 158},
  [183] = {.lex_state = 52},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 158},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 39},
  [194] = {.lex_state = 158},
  [195] = {.lex_state = 51},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 158},
  [199] = {.lex_state = 158},
  [200] = {.lex_state = 158},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 158},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 158},
  [205] = {.lex_state = 50},
  [206] = {.lex_state = 158},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 158},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 158},
  [211] = {.lex_state = 190},
  [212] = {.lex_state = 158},
  [213] = {.lex_state = 190},
  [214] = {.lex_state = 158},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 158},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 158},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 52},
  [221] = {.lex_state = 52},
  [222] = {.lex_state = 52},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 52},
  [225] = {.lex_state = 52},
  [226] = {.lex_state = 52},
  [227] = {.lex_state = 52},
  [228] = {.lex_state = 50},
  [229] = {.lex_state = 50},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_param_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(207),
    [sym__instruction] = STATE(209),
    [sym_from_instruction] = STATE(209),
    [sym_run_instruction] = STATE(209),
    [sym_cmd_instruction] = STATE(209),
    [sym_label_instruction] = STATE(209),
    [sym_expose_instruction] = STATE(209),
    [sym_env_instruction] = STATE(209),
    [sym_add_instruction] = STATE(209),
    [sym_copy_instruction] = STATE(209),
    [sym_entrypoint_instruction] = STATE(209),
    [sym_volume_instruction] = STATE(209),
    [sym_user_instruction] = STATE(209),
    [sym_workdir_instruction] = STATE(209),
    [sym_arg_instruction] = STATE(209),
    [sym_onbuild_instruction] = STATE(209),
    [sym_stopsignal_instruction] = STATE(209),
    [sym_healthcheck_instruction] = STATE(209),
    [sym_shell_instruction] = STATE(209),
    [sym_maintainer_instruction] = STATE(209),
    [sym_cross_build_instruction] = STATE(209),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_from_instruction_token1] = ACTIONS(7),
    [aux_sym_run_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
    [aux_sym_label_instruction_token1] = ACTIONS(13),
    [aux_sym_expose_instruction_token1] = ACTIONS(15),
    [aux_sym_env_instruction_token1] = ACTIONS(17),
    [aux_sym_add_instruction_token1] = ACTIONS(19),
    [aux_sym_copy_instruction_token1] = ACTIONS(21),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(23),
    [aux_sym_volume_instruction_token1] = ACTIONS(25),
    [aux_sym_user_instruction_token1] = ACTIONS(27),
    [aux_sym_workdir_instruction_token1] = ACTIONS(29),
    [aux_sym_arg_instruction_token1] = ACTIONS(31),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(33),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(35),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(37),
    [aux_sym_shell_instruction_token1] = ACTIONS(39),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(41),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(43),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(52), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(55), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(58), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(61), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(64), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(67), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(70), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(73), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(76), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(79), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(82), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(85), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(88), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(91), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(94), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(97), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(100), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(103), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(106), 1,
      sym_comment,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(209), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [92] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(209), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [184] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(187), 20,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [267] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 21,
      ts_builtin_sym_end,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_comment,
  [294] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(21), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(124), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [316] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(84), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(161), 1,
      sym__anon_comment,
    STATE(171), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(13), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [340] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(160), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [362] = 6,
    ACTIONS(129), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    ACTIONS(137), 1,
      sym_line_continuation,
    STATE(9), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(127), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [384] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(166), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [406] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      aux_sym_image_name_token1,
    ACTIONS(143), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_image_name,
    STATE(33), 1,
      sym_param,
    STATE(136), 1,
      sym_image_spec,
    STATE(14), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [432] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(121), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [454] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(84), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(159), 1,
      sym_shell_fragment,
    STATE(161), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(30), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [478] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      aux_sym_image_name_token1,
    STATE(9), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [500] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(201), 2,
      sym_string_array,
      sym_shell_command,
  [521] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(160), 1,
      aux_sym_label_pair_token1,
    ACTIONS(162), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [542] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(192), 2,
      sym_string_array,
      sym_shell_command,
  [563] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      aux_sym__env_key_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [584] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(173), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR,
    ACTIONS(177), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(171), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(20), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [605] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(181), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(179), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(20), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [626] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      aux_sym__env_key_token1,
    ACTIONS(195), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [647] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      aux_sym_label_pair_token1,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [668] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(203), 2,
      sym_string_array,
      sym_shell_command,
  [689] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    STATE(31), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [709] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(213), 1,
      sym_escape_sequence,
    STATE(47), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [729] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(217), 1,
      aux_sym_path_token2,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(26), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [747] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      aux_sym_path_token2,
    ACTIONS(227), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(26), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [765] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      aux_sym_expose_port_token1,
    STATE(28), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [783] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(227), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      aux_sym_path_token2,
    ACTIONS(237), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(27), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [801] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym__anon_comment,
    ACTIONS(241), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(30), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [819] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(254), 1,
      sym_escape_sequence,
    STATE(31), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [839] = 7,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_AT,
    STATE(91), 1,
      sym_image_tag,
    STATE(156), 1,
      sym_image_digest,
  [861] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      aux_sym_image_name_token1,
    STATE(32), 1,
      sym_image_name,
    STATE(157), 1,
      sym_image_spec,
    STATE(14), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [881] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(272), 1,
      aux_sym_image_digest_value_token1,
    STATE(34), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [901] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(279), 1,
      sym_escape_sequence,
    STATE(44), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [921] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(283), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [935] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DASH_DASH,
    STATE(50), 1,
      sym_expansion,
    STATE(89), 1,
      sym_param,
    STATE(196), 1,
      sym_path,
  [957] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(291), 1,
      anon_sym_NONE,
    ACTIONS(293), 1,
      anon_sym_DASH_DASH,
    STATE(158), 1,
      sym_cmd_instruction,
    STATE(57), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [977] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DASH_DASH,
    STATE(50), 1,
      sym_expansion,
    STATE(79), 1,
      sym_param,
    STATE(193), 1,
      sym_path,
  [999] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      aux_sym_expose_port_token1,
    STATE(28), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1017] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(303), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1031] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(310), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
    ACTIONS(305), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1051] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(317), 1,
      sym_escape_sequence,
    STATE(24), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1071] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(31), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1091] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      aux_sym_path_token1,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_expansion,
    STATE(107), 1,
      sym_path,
    STATE(191), 1,
      sym_string_array,
  [1113] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      aux_sym_image_digest_value_token1,
    STATE(34), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1133] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    STATE(31), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1153] = 7,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(339), 1,
      aux_sym__user_name_or_group_token1,
    STATE(42), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1175] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      sym__non_newline_whitespace,
    STATE(49), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1192] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      aux_sym_path_token2,
    ACTIONS(351), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      sym__non_newline_whitespace,
    STATE(70), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1209] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      aux_sym_image_alias_token1,
    STATE(77), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1226] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(366), 1,
      anon_sym_DOLLAR,
    STATE(52), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1243] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(283), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1256] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(283), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(281), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1269] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(373), 1,
      anon_sym_DOLLAR,
    STATE(52), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1286] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(61), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1303] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(293), 1,
      anon_sym_DASH_DASH,
    STATE(177), 1,
      sym_cmd_instruction,
    STATE(99), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1320] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(303), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(301), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1333] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(283), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(281), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1346] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(303), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(301), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1359] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      aux_sym_path_token2,
    STATE(64), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1376] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(303), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1389] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      aux_sym_image_alias_token1,
    STATE(164), 1,
      sym_image_alias,
    STATE(51), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1406] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      aux_sym_path_token2,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(64), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1423] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(303), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [1436] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      aux_sym_image_alias_token1,
    STATE(174), 1,
      sym_image_alias,
    STATE(51), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1453] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    ACTIONS(395), 1,
      aux_sym_image_tag_value_token1,
    STATE(104), 1,
      sym_image_tag_value,
    STATE(19), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1470] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(397), 1,
      anon_sym_DOLLAR,
    ACTIONS(399), 1,
      aux_sym_image_digest_value_token1,
    STATE(150), 1,
      sym_image_digest_value,
    STATE(46), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1487] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(283), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [1500] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      anon_sym_DOLLAR,
    ACTIONS(379), 1,
      sym__non_newline_whitespace,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    STATE(49), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1517] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      aux_sym__env_key_token1,
    STATE(180), 1,
      sym__env_key,
    STATE(71), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1534] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym__env_key_token1,
    STATE(180), 1,
      sym__env_key,
    STATE(71), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1551] = 4,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(414), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(416), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1566] = 6,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(418), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1585] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      aux_sym__env_key_token1,
    STATE(128), 1,
      sym__env_key,
    STATE(197), 1,
      sym__spaced_env_pair,
    STATE(72), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1602] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(422), 1,
      anon_sym_DOLLAR,
    ACTIONS(424), 1,
      aux_sym_expose_port_token1,
    STATE(40), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1617] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      aux_sym_image_alias_token1,
    STATE(77), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1634] = 4,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(436), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1648] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_expansion,
    STATE(178), 1,
      sym_path,
  [1664] = 4,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 1,
      aux_sym_label_pair_token1,
    STATE(80), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1678] = 4,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      aux_sym_label_pair_token1,
    STATE(80), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1692] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym_path_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(163), 1,
      sym_path,
  [1708] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(283), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1718] = 4,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(456), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1732] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(303), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1744] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(283), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1756] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(303), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1766] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym_path_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(165), 1,
      sym_path,
  [1782] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_expansion,
    STATE(179), 1,
      sym_path,
  [1798] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym_path_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(169), 1,
      sym_path,
  [1814] = 5,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      aux_sym_from_instruction_token2,
    STATE(149), 1,
      sym_image_digest,
  [1830] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      aux_sym_path_token1,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_expansion,
    STATE(123), 1,
      sym_path,
  [1846] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym_path_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(162), 1,
      sym_path,
  [1862] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(422), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      aux_sym__user_name_or_group_token1,
    STATE(74), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1878] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(303), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1890] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(283), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1902] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(422), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      aux_sym__user_name_or_group_token1,
    STATE(48), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1918] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(466), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    STATE(55), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(470), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(472), 1,
      anon_sym_DASH_DASH,
    STATE(99), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1946] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(475), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(477), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [1958] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym_path_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(188), 1,
      sym_path,
  [1974] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(303), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [1985] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [1996] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(479), 2,
      anon_sym_LF,
      anon_sym_AT,
  [2007] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(303), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2018] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      sym__non_newline_whitespace,
    ACTIONS(303), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2029] = 4,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      sym__non_newline_whitespace,
    STATE(109), 1,
      aux_sym_volume_instruction_repeat1,
  [2042] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2053] = 4,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      sym__non_newline_whitespace,
    ACTIONS(487), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_volume_instruction_repeat1,
  [2066] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2075] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_string_array_repeat1,
  [2088] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_double_quoted_string,
  [2101] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_string_array_repeat1,
  [2125] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      sym__non_newline_whitespace,
    ACTIONS(283), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2136] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_string_array_repeat1,
  [2149] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      aux_sym_label_pair_token1,
    STATE(81), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [2160] = 4,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      anon_sym_LF,
    ACTIONS(510), 1,
      sym__non_newline_whitespace,
    STATE(118), 1,
      aux_sym_volume_instruction_repeat1,
  [2173] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(303), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2184] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2195] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      aux_sym_label_pair_token1,
  [2205] = 3,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_shell_command_repeat2,
  [2215] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2223] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      aux_sym__env_key_token1,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      sym_variable,
  [2243] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      sym_variable,
  [2253] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_DOLLAR,
    ACTIONS(539), 1,
      aux_sym_image_name_token1,
  [2263] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(541), 1,
      anon_sym_EQ,
    ACTIONS(543), 1,
      aux_sym__spaced_env_pair_token1,
  [2273] = 3,
    ACTIONS(523), 1,
      sym_line_continuation,
    ACTIONS(545), 1,
      anon_sym_LF,
    STATE(122), 1,
      aux_sym_shell_command_repeat2,
  [2283] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_variable,
  [2293] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(551), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2301] = 3,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_shell_command_repeat2,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2319] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_double_quoted_string,
  [2329] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      sym_variable,
  [2339] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      aux_sym_from_instruction_token2,
  [2349] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 1,
      sym_variable,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(572), 1,
      sym_variable,
  [2369] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      sym_variable,
  [2379] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_variable,
  [2389] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      aux_sym_label_pair_token1,
  [2399] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      sym_variable,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      sym_variable,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_string_array,
  [2429] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_DOLLAR,
    ACTIONS(539), 1,
      aux_sym_path_token1,
  [2439] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_label_pair_token1,
  [2449] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2457] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      sym_variable,
  [2467] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      aux_sym_from_instruction_token2,
  [2477] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      aux_sym_from_instruction_token2,
  [2487] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      aux_sym__env_key_token1,
  [2497] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(610), 1,
      sym_variable,
  [2507] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_EQ,
  [2517] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2525] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym__env_key_token1,
  [2535] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      aux_sym_from_instruction_token2,
  [2545] = 3,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      aux_sym_from_instruction_token2,
  [2555] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_LF,
  [2562] = 2,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      sym_line_continuation,
  [2569] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_LF,
  [2576] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_LF,
  [2583] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_LF,
  [2590] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_LF,
  [2597] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_LF,
  [2604] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      anon_sym_LF,
  [2611] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      anon_sym_LF,
  [2618] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      aux_sym_maintainer_instruction_token2,
  [2625] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      anon_sym_LF,
  [2632] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_LF,
  [2639] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      anon_sym_LF,
  [2646] = 2,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      sym_line_continuation,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      aux_sym_arg_instruction_token2,
  [2660] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      anon_sym_LF,
  [2667] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_LF,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      sym_param_value,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [2688] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_LF,
  [2695] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      sym__non_newline_whitespace,
  [2702] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      sym__non_newline_whitespace,
  [2709] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(541), 1,
      anon_sym_EQ,
  [2716] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(670), 1,
      anon_sym_LF,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_EQ,
  [2730] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      aux_sym_expansion_token1,
  [2737] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_LF,
  [2744] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      anon_sym_LF,
  [2751] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_LF,
  [2758] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      anon_sym_LF,
  [2765] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_LF,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      sym_param_value,
  [2786] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      anon_sym_LF,
  [2793] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      anon_sym_LF,
  [2800] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      sym__non_newline_whitespace,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [2814] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      sym_param_value,
  [2821] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      sym__non_newline_whitespace,
  [2828] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      anon_sym_LF,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      anon_sym_EQ,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [2856] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      anon_sym_LF,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [2870] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(714), 1,
      anon_sym_LF,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      sym_param_name,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [2912] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(726), 1,
      anon_sym_LF,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [2926] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(730), 1,
      aux_sym_maintainer_instruction_token2,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
  [2940] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(734), 1,
      aux_sym_maintainer_instruction_token2,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
  [2954] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      aux_sym_expansion_token1,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [2968] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(742), 1,
      aux_sym_expansion_token1,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(744), 1,
      anon_sym_EQ,
  [2982] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(746), 1,
      aux_sym_expansion_token1,
  [2989] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(748), 1,
      aux_sym_expansion_token1,
  [2996] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(750), 1,
      aux_sym_expansion_token1,
  [3003] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(752), 1,
      aux_sym_expansion_token1,
  [3010] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(754), 1,
      aux_sym_expansion_token1,
  [3017] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      aux_sym_expansion_token1,
  [3024] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      aux_sym_expansion_token1,
  [3031] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(760), 1,
      aux_sym_expansion_token1,
  [3038] = 2,
    ACTIONS(137), 1,
      sym_line_continuation,
    ACTIONS(762), 1,
      aux_sym_expansion_token1,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(764), 1,
      sym_param_name,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(766), 1,
      sym_param_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 340,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 406,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 454,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 563,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 605,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 668,
  [SMALL_STATE(24)] = 689,
  [SMALL_STATE(25)] = 709,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 765,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 801,
  [SMALL_STATE(31)] = 819,
  [SMALL_STATE(32)] = 839,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 881,
  [SMALL_STATE(35)] = 901,
  [SMALL_STATE(36)] = 921,
  [SMALL_STATE(37)] = 935,
  [SMALL_STATE(38)] = 957,
  [SMALL_STATE(39)] = 977,
  [SMALL_STATE(40)] = 999,
  [SMALL_STATE(41)] = 1017,
  [SMALL_STATE(42)] = 1031,
  [SMALL_STATE(43)] = 1051,
  [SMALL_STATE(44)] = 1071,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1113,
  [SMALL_STATE(47)] = 1133,
  [SMALL_STATE(48)] = 1153,
  [SMALL_STATE(49)] = 1175,
  [SMALL_STATE(50)] = 1192,
  [SMALL_STATE(51)] = 1209,
  [SMALL_STATE(52)] = 1226,
  [SMALL_STATE(53)] = 1243,
  [SMALL_STATE(54)] = 1256,
  [SMALL_STATE(55)] = 1269,
  [SMALL_STATE(56)] = 1286,
  [SMALL_STATE(57)] = 1303,
  [SMALL_STATE(58)] = 1320,
  [SMALL_STATE(59)] = 1333,
  [SMALL_STATE(60)] = 1346,
  [SMALL_STATE(61)] = 1359,
  [SMALL_STATE(62)] = 1376,
  [SMALL_STATE(63)] = 1389,
  [SMALL_STATE(64)] = 1406,
  [SMALL_STATE(65)] = 1423,
  [SMALL_STATE(66)] = 1436,
  [SMALL_STATE(67)] = 1453,
  [SMALL_STATE(68)] = 1470,
  [SMALL_STATE(69)] = 1487,
  [SMALL_STATE(70)] = 1500,
  [SMALL_STATE(71)] = 1517,
  [SMALL_STATE(72)] = 1534,
  [SMALL_STATE(73)] = 1551,
  [SMALL_STATE(74)] = 1566,
  [SMALL_STATE(75)] = 1585,
  [SMALL_STATE(76)] = 1602,
  [SMALL_STATE(77)] = 1617,
  [SMALL_STATE(78)] = 1634,
  [SMALL_STATE(79)] = 1648,
  [SMALL_STATE(80)] = 1664,
  [SMALL_STATE(81)] = 1678,
  [SMALL_STATE(82)] = 1692,
  [SMALL_STATE(83)] = 1708,
  [SMALL_STATE(84)] = 1718,
  [SMALL_STATE(85)] = 1732,
  [SMALL_STATE(86)] = 1744,
  [SMALL_STATE(87)] = 1756,
  [SMALL_STATE(88)] = 1766,
  [SMALL_STATE(89)] = 1782,
  [SMALL_STATE(90)] = 1798,
  [SMALL_STATE(91)] = 1814,
  [SMALL_STATE(92)] = 1830,
  [SMALL_STATE(93)] = 1846,
  [SMALL_STATE(94)] = 1862,
  [SMALL_STATE(95)] = 1878,
  [SMALL_STATE(96)] = 1890,
  [SMALL_STATE(97)] = 1902,
  [SMALL_STATE(98)] = 1918,
  [SMALL_STATE(99)] = 1932,
  [SMALL_STATE(100)] = 1946,
  [SMALL_STATE(101)] = 1958,
  [SMALL_STATE(102)] = 1974,
  [SMALL_STATE(103)] = 1985,
  [SMALL_STATE(104)] = 1996,
  [SMALL_STATE(105)] = 2007,
  [SMALL_STATE(106)] = 2018,
  [SMALL_STATE(107)] = 2029,
  [SMALL_STATE(108)] = 2042,
  [SMALL_STATE(109)] = 2053,
  [SMALL_STATE(110)] = 2066,
  [SMALL_STATE(111)] = 2075,
  [SMALL_STATE(112)] = 2088,
  [SMALL_STATE(113)] = 2101,
  [SMALL_STATE(114)] = 2112,
  [SMALL_STATE(115)] = 2125,
  [SMALL_STATE(116)] = 2136,
  [SMALL_STATE(117)] = 2149,
  [SMALL_STATE(118)] = 2160,
  [SMALL_STATE(119)] = 2173,
  [SMALL_STATE(120)] = 2184,
  [SMALL_STATE(121)] = 2195,
  [SMALL_STATE(122)] = 2205,
  [SMALL_STATE(123)] = 2215,
  [SMALL_STATE(124)] = 2223,
  [SMALL_STATE(125)] = 2233,
  [SMALL_STATE(126)] = 2243,
  [SMALL_STATE(127)] = 2253,
  [SMALL_STATE(128)] = 2263,
  [SMALL_STATE(129)] = 2273,
  [SMALL_STATE(130)] = 2283,
  [SMALL_STATE(131)] = 2293,
  [SMALL_STATE(132)] = 2301,
  [SMALL_STATE(133)] = 2311,
  [SMALL_STATE(134)] = 2319,
  [SMALL_STATE(135)] = 2329,
  [SMALL_STATE(136)] = 2339,
  [SMALL_STATE(137)] = 2349,
  [SMALL_STATE(138)] = 2359,
  [SMALL_STATE(139)] = 2369,
  [SMALL_STATE(140)] = 2379,
  [SMALL_STATE(141)] = 2389,
  [SMALL_STATE(142)] = 2399,
  [SMALL_STATE(143)] = 2409,
  [SMALL_STATE(144)] = 2419,
  [SMALL_STATE(145)] = 2429,
  [SMALL_STATE(146)] = 2439,
  [SMALL_STATE(147)] = 2449,
  [SMALL_STATE(148)] = 2457,
  [SMALL_STATE(149)] = 2467,
  [SMALL_STATE(150)] = 2477,
  [SMALL_STATE(151)] = 2487,
  [SMALL_STATE(152)] = 2497,
  [SMALL_STATE(153)] = 2507,
  [SMALL_STATE(154)] = 2517,
  [SMALL_STATE(155)] = 2525,
  [SMALL_STATE(156)] = 2535,
  [SMALL_STATE(157)] = 2545,
  [SMALL_STATE(158)] = 2555,
  [SMALL_STATE(159)] = 2562,
  [SMALL_STATE(160)] = 2569,
  [SMALL_STATE(161)] = 2576,
  [SMALL_STATE(162)] = 2583,
  [SMALL_STATE(163)] = 2590,
  [SMALL_STATE(164)] = 2597,
  [SMALL_STATE(165)] = 2604,
  [SMALL_STATE(166)] = 2611,
  [SMALL_STATE(167)] = 2618,
  [SMALL_STATE(168)] = 2625,
  [SMALL_STATE(169)] = 2632,
  [SMALL_STATE(170)] = 2639,
  [SMALL_STATE(171)] = 2646,
  [SMALL_STATE(172)] = 2653,
  [SMALL_STATE(173)] = 2660,
  [SMALL_STATE(174)] = 2667,
  [SMALL_STATE(175)] = 2674,
  [SMALL_STATE(176)] = 2681,
  [SMALL_STATE(177)] = 2688,
  [SMALL_STATE(178)] = 2695,
  [SMALL_STATE(179)] = 2702,
  [SMALL_STATE(180)] = 2709,
  [SMALL_STATE(181)] = 2716,
  [SMALL_STATE(182)] = 2723,
  [SMALL_STATE(183)] = 2730,
  [SMALL_STATE(184)] = 2737,
  [SMALL_STATE(185)] = 2744,
  [SMALL_STATE(186)] = 2751,
  [SMALL_STATE(187)] = 2758,
  [SMALL_STATE(188)] = 2765,
  [SMALL_STATE(189)] = 2772,
  [SMALL_STATE(190)] = 2779,
  [SMALL_STATE(191)] = 2786,
  [SMALL_STATE(192)] = 2793,
  [SMALL_STATE(193)] = 2800,
  [SMALL_STATE(194)] = 2807,
  [SMALL_STATE(195)] = 2814,
  [SMALL_STATE(196)] = 2821,
  [SMALL_STATE(197)] = 2828,
  [SMALL_STATE(198)] = 2835,
  [SMALL_STATE(199)] = 2842,
  [SMALL_STATE(200)] = 2849,
  [SMALL_STATE(201)] = 2856,
  [SMALL_STATE(202)] = 2863,
  [SMALL_STATE(203)] = 2870,
  [SMALL_STATE(204)] = 2877,
  [SMALL_STATE(205)] = 2884,
  [SMALL_STATE(206)] = 2891,
  [SMALL_STATE(207)] = 2898,
  [SMALL_STATE(208)] = 2905,
  [SMALL_STATE(209)] = 2912,
  [SMALL_STATE(210)] = 2919,
  [SMALL_STATE(211)] = 2926,
  [SMALL_STATE(212)] = 2933,
  [SMALL_STATE(213)] = 2940,
  [SMALL_STATE(214)] = 2947,
  [SMALL_STATE(215)] = 2954,
  [SMALL_STATE(216)] = 2961,
  [SMALL_STATE(217)] = 2968,
  [SMALL_STATE(218)] = 2975,
  [SMALL_STATE(219)] = 2982,
  [SMALL_STATE(220)] = 2989,
  [SMALL_STATE(221)] = 2996,
  [SMALL_STATE(222)] = 3003,
  [SMALL_STATE(223)] = 3010,
  [SMALL_STATE(224)] = 3017,
  [SMALL_STATE(225)] = 3024,
  [SMALL_STATE(226)] = 3031,
  [SMALL_STATE(227)] = 3038,
  [SMALL_STATE(228)] = 3045,
  [SMALL_STATE(229)] = 3052,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(138),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(9),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(143),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(16),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(148),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag_value, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag_value, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(139),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(26),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(125),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(152),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(73),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(167),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(31),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(31),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(140),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(34),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(100),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(152),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest_value, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest_value, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(49),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(135),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(52),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(130),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(64),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(126),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(180),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(137),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(77),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(78),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(199),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(229),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(134),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(92),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(7),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [722] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
