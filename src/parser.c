#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 273
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_DECL = 1,
  sym_FUNCTOR = 2,
  sym_INPUT_DECL = 3,
  sym_OUTPUT_DECL = 4,
  sym_PRINTSIZE_DECL = 5,
  sym_TYPE = 6,
  sym_COMPONENT = 7,
  sym_INSTANTIATE = 8,
  sym_NUMBER_TYPE = 9,
  sym_SYMBOL_TYPE = 10,
  sym_OVERRIDE = 11,
  sym_PRAGMA = 12,
  sym_BW_AND = 13,
  sym_BW_OR = 14,
  sym_BW_XOR = 15,
  sym_BW_NOT = 16,
  sym_BW_SHIFT_L = 17,
  sym_BW_SHIFT_R = 18,
  sym_BW_SHIFT_R_UNSIGNED = 19,
  sym_L_AND = 20,
  sym_L_OR = 21,
  sym_L_NOT = 22,
  sym_TMATCH = 23,
  sym_MEAN = 24,
  sym_CAT = 25,
  sym_ORD = 26,
  sym_RANGE = 27,
  sym_STRLEN = 28,
  sym_SUBSTR = 29,
  sym_TCONTAINS = 30,
  sym_OUTPUT_QUALIFIER = 31,
  sym_INPUT_QUALIFIER = 32,
  sym_OVERRIDABLE_QUALIFIER = 33,
  sym_PRINTSIZE_QUALIFIER = 34,
  sym_EQREL_QUALIFIER = 35,
  sym_INLINE_QUALIFIER = 36,
  sym_BRIE_QUALIFIER = 37,
  sym_BTREE_QUALIFIER = 38,
  sym_MIN = 39,
  sym_MAX = 40,
  sym_AS = 41,
  sym_NIL = 42,
  sym_UNDERSCORE = 43,
  sym_COUNT = 44,
  sym_SUM = 45,
  sym_TRUE = 46,
  sym_FALSE = 47,
  sym_TOSTRING = 48,
  sym_TONUMBER = 49,
  sym_TOFLOAT = 50,
  sym_TOUNSIGNED = 51,
  sym_PLAN = 52,
  sym_PIPE = 53,
  sym_LBRACKET = 54,
  sym_RBRACKET = 55,
  sym_DOLLAR = 56,
  sym_PLUS = 57,
  sym_MINUS = 58,
  sym_LPAREN = 59,
  sym_RPAREN = 60,
  sym_COMMA = 61,
  sym_COLON = 62,
  sym_SEMICOLON = 63,
  sym_DOT = 64,
  sym_SUBTYPE = 65,
  sym_LE = 66,
  sym_GE = 67,
  sym_NE = 68,
  sym_EQUALS = 69,
  sym_EXCLAMATION = 70,
  sym_STAR = 71,
  sym_AT = 72,
  sym_SLASH = 73,
  sym_CARET = 74,
  sym_PERCENT = 75,
  sym_LBRACE = 76,
  sym_RBRACE = 77,
  sym_LT = 78,
  sym_GT = 79,
  sym_IF = 80,
  sym_INPUT = 81,
  sym_OUTPUT = 82,
  sym_CPP_VAR = 83,
  aux_sym_IDENT_token1 = 84,
  aux_sym_IDENT_token2 = 85,
  aux_sym_NUMBER_token1 = 86,
  aux_sym_NUMBER_token2 = 87,
  aux_sym_NUMBER_token3 = 88,
  sym_FLOAT = 89,
  sym_STRING = 90,
  sym_COMMENT = 91,
  anon_sym_POUNDinclude = 92,
  anon_sym_DQUOTE = 93,
  anon_sym_POUNDline = 94,
  anon_sym_POUNDdefine = 95,
  aux_sym_define_token1 = 96,
  sym_filename = 97,
  anon_sym_stateful = 98,
  sym_source_file = 99,
  sym_io_macro = 100,
  sym_IDENT = 101,
  sym_NUMBER = 102,
  sym_unit = 103,
  sym_include = 104,
  sym_line = 105,
  sym_define = 106,
  sym_identifier = 107,
  sym_type = 108,
  sym_non_empty_sum_branch_list = 109,
  sym_non_empty_record_type_list = 110,
  sym_union_type_list = 111,
  sym_sum_branch = 112,
  sym_relation_decl = 113,
  sym_relation_list = 114,
  sym_non_empty_attributes = 115,
  sym_relation_tags = 116,
  sym_fact = 117,
  sym_rule = 118,
  sym_rule_def = 119,
  sym_head = 120,
  sym_body = 121,
  sym_disjunction = 122,
  sym_conjunction = 123,
  sym_exec_plan = 124,
  sym_exec_plan_list = 125,
  sym_exec_order_list = 126,
  sym_term = 127,
  sym_atom = 128,
  sym_constraint = 129,
  sym_non_empty_arg_list = 130,
  sym_arg = 131,
  sym_functor_built_in = 132,
  sym_component = 133,
  sym_component_head = 134,
  sym_comp_type = 135,
  sym_type_params = 136,
  sym_type_param_list = 137,
  sym_component_body = 138,
  sym_comp_init = 139,
  sym_functor_decl = 140,
  sym_pragma = 141,
  sym_io_head = 142,
  sym_io_directive_list = 143,
  sym_io_relation_list = 144,
  sym_non_empty_key_value_pairs = 145,
  sym_kvp_value = 146,
  aux_sym_source_file_repeat1 = 147,
  aux_sym_relation_tags_repeat1 = 148,
  aux_sym_component_repeat1 = 149,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_DECL] = "DECL",
  [sym_FUNCTOR] = "FUNCTOR",
  [sym_INPUT_DECL] = "INPUT_DECL",
  [sym_OUTPUT_DECL] = "OUTPUT_DECL",
  [sym_PRINTSIZE_DECL] = "PRINTSIZE_DECL",
  [sym_TYPE] = "TYPE",
  [sym_COMPONENT] = "COMPONENT",
  [sym_INSTANTIATE] = "INSTANTIATE",
  [sym_NUMBER_TYPE] = "NUMBER_TYPE",
  [sym_SYMBOL_TYPE] = "SYMBOL_TYPE",
  [sym_OVERRIDE] = "OVERRIDE",
  [sym_PRAGMA] = "PRAGMA",
  [sym_BW_AND] = "BW_AND",
  [sym_BW_OR] = "BW_OR",
  [sym_BW_XOR] = "BW_XOR",
  [sym_BW_NOT] = "BW_NOT",
  [sym_BW_SHIFT_L] = "BW_SHIFT_L",
  [sym_BW_SHIFT_R] = "BW_SHIFT_R",
  [sym_BW_SHIFT_R_UNSIGNED] = "BW_SHIFT_R_UNSIGNED",
  [sym_L_AND] = "L_AND",
  [sym_L_OR] = "L_OR",
  [sym_L_NOT] = "L_NOT",
  [sym_TMATCH] = "TMATCH",
  [sym_MEAN] = "MEAN",
  [sym_CAT] = "CAT",
  [sym_ORD] = "ORD",
  [sym_RANGE] = "RANGE",
  [sym_STRLEN] = "STRLEN",
  [sym_SUBSTR] = "SUBSTR",
  [sym_TCONTAINS] = "TCONTAINS",
  [sym_OUTPUT_QUALIFIER] = "OUTPUT_QUALIFIER",
  [sym_INPUT_QUALIFIER] = "INPUT_QUALIFIER",
  [sym_OVERRIDABLE_QUALIFIER] = "OVERRIDABLE_QUALIFIER",
  [sym_PRINTSIZE_QUALIFIER] = "PRINTSIZE_QUALIFIER",
  [sym_EQREL_QUALIFIER] = "EQREL_QUALIFIER",
  [sym_INLINE_QUALIFIER] = "INLINE_QUALIFIER",
  [sym_BRIE_QUALIFIER] = "BRIE_QUALIFIER",
  [sym_BTREE_QUALIFIER] = "BTREE_QUALIFIER",
  [sym_MIN] = "MIN",
  [sym_MAX] = "MAX",
  [sym_AS] = "AS",
  [sym_NIL] = "NIL",
  [sym_UNDERSCORE] = "UNDERSCORE",
  [sym_COUNT] = "COUNT",
  [sym_SUM] = "SUM",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_TOSTRING] = "TOSTRING",
  [sym_TONUMBER] = "TONUMBER",
  [sym_TOFLOAT] = "TOFLOAT",
  [sym_TOUNSIGNED] = "TOUNSIGNED",
  [sym_PLAN] = "PLAN",
  [sym_PIPE] = "PIPE",
  [sym_LBRACKET] = "LBRACKET",
  [sym_RBRACKET] = "RBRACKET",
  [sym_DOLLAR] = "DOLLAR",
  [sym_PLUS] = "PLUS",
  [sym_MINUS] = "MINUS",
  [sym_LPAREN] = "LPAREN",
  [sym_RPAREN] = "RPAREN",
  [sym_COMMA] = "COMMA",
  [sym_COLON] = "COLON",
  [sym_SEMICOLON] = "SEMICOLON",
  [sym_DOT] = "DOT",
  [sym_SUBTYPE] = "SUBTYPE",
  [sym_LE] = "LE",
  [sym_GE] = "GE",
  [sym_NE] = "NE",
  [sym_EQUALS] = "EQUALS",
  [sym_EXCLAMATION] = "EXCLAMATION",
  [sym_STAR] = "STAR",
  [sym_AT] = "AT",
  [sym_SLASH] = "SLASH",
  [sym_CARET] = "CARET",
  [sym_PERCENT] = "PERCENT",
  [sym_LBRACE] = "LBRACE",
  [sym_RBRACE] = "RBRACE",
  [sym_LT] = "LT",
  [sym_GT] = "GT",
  [sym_IF] = "IF",
  [sym_INPUT] = "INPUT",
  [sym_OUTPUT] = "OUTPUT",
  [sym_CPP_VAR] = "CPP_VAR",
  [aux_sym_IDENT_token1] = "IDENT_token1",
  [aux_sym_IDENT_token2] = "IDENT_token2",
  [aux_sym_NUMBER_token1] = "NUMBER_token1",
  [aux_sym_NUMBER_token2] = "NUMBER_token2",
  [aux_sym_NUMBER_token3] = "NUMBER_token3",
  [sym_FLOAT] = "FLOAT",
  [sym_STRING] = "STRING",
  [sym_COMMENT] = "COMMENT",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUNDline] = "#line",
  [anon_sym_POUNDdefine] = "#define",
  [aux_sym_define_token1] = "define_token1",
  [sym_filename] = "filename",
  [anon_sym_stateful] = "stateful",
  [sym_source_file] = "source_file",
  [sym_io_macro] = "io_macro",
  [sym_IDENT] = "IDENT",
  [sym_NUMBER] = "NUMBER",
  [sym_unit] = "unit",
  [sym_include] = "include",
  [sym_line] = "line",
  [sym_define] = "define",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [sym_non_empty_sum_branch_list] = "non_empty_sum_branch_list",
  [sym_non_empty_record_type_list] = "non_empty_record_type_list",
  [sym_union_type_list] = "union_type_list",
  [sym_sum_branch] = "sum_branch",
  [sym_relation_decl] = "relation_decl",
  [sym_relation_list] = "relation_list",
  [sym_non_empty_attributes] = "non_empty_attributes",
  [sym_relation_tags] = "relation_tags",
  [sym_fact] = "fact",
  [sym_rule] = "rule",
  [sym_rule_def] = "rule_def",
  [sym_head] = "head",
  [sym_body] = "body",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_exec_plan] = "exec_plan",
  [sym_exec_plan_list] = "exec_plan_list",
  [sym_exec_order_list] = "exec_order_list",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_constraint] = "constraint",
  [sym_non_empty_arg_list] = "non_empty_arg_list",
  [sym_arg] = "arg",
  [sym_functor_built_in] = "functor_built_in",
  [sym_component] = "component",
  [sym_component_head] = "component_head",
  [sym_comp_type] = "comp_type",
  [sym_type_params] = "type_params",
  [sym_type_param_list] = "type_param_list",
  [sym_component_body] = "component_body",
  [sym_comp_init] = "comp_init",
  [sym_functor_decl] = "functor_decl",
  [sym_pragma] = "pragma",
  [sym_io_head] = "io_head",
  [sym_io_directive_list] = "io_directive_list",
  [sym_io_relation_list] = "io_relation_list",
  [sym_non_empty_key_value_pairs] = "non_empty_key_value_pairs",
  [sym_kvp_value] = "kvp_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relation_tags_repeat1] = "relation_tags_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_DECL] = sym_DECL,
  [sym_FUNCTOR] = sym_FUNCTOR,
  [sym_INPUT_DECL] = sym_INPUT_DECL,
  [sym_OUTPUT_DECL] = sym_OUTPUT_DECL,
  [sym_PRINTSIZE_DECL] = sym_PRINTSIZE_DECL,
  [sym_TYPE] = sym_TYPE,
  [sym_COMPONENT] = sym_COMPONENT,
  [sym_INSTANTIATE] = sym_INSTANTIATE,
  [sym_NUMBER_TYPE] = sym_NUMBER_TYPE,
  [sym_SYMBOL_TYPE] = sym_SYMBOL_TYPE,
  [sym_OVERRIDE] = sym_OVERRIDE,
  [sym_PRAGMA] = sym_PRAGMA,
  [sym_BW_AND] = sym_BW_AND,
  [sym_BW_OR] = sym_BW_OR,
  [sym_BW_XOR] = sym_BW_XOR,
  [sym_BW_NOT] = sym_BW_NOT,
  [sym_BW_SHIFT_L] = sym_BW_SHIFT_L,
  [sym_BW_SHIFT_R] = sym_BW_SHIFT_R,
  [sym_BW_SHIFT_R_UNSIGNED] = sym_BW_SHIFT_R_UNSIGNED,
  [sym_L_AND] = sym_L_AND,
  [sym_L_OR] = sym_L_OR,
  [sym_L_NOT] = sym_L_NOT,
  [sym_TMATCH] = sym_TMATCH,
  [sym_MEAN] = sym_MEAN,
  [sym_CAT] = sym_CAT,
  [sym_ORD] = sym_ORD,
  [sym_RANGE] = sym_RANGE,
  [sym_STRLEN] = sym_STRLEN,
  [sym_SUBSTR] = sym_SUBSTR,
  [sym_TCONTAINS] = sym_TCONTAINS,
  [sym_OUTPUT_QUALIFIER] = sym_OUTPUT_QUALIFIER,
  [sym_INPUT_QUALIFIER] = sym_INPUT_QUALIFIER,
  [sym_OVERRIDABLE_QUALIFIER] = sym_OVERRIDABLE_QUALIFIER,
  [sym_PRINTSIZE_QUALIFIER] = sym_PRINTSIZE_QUALIFIER,
  [sym_EQREL_QUALIFIER] = sym_EQREL_QUALIFIER,
  [sym_INLINE_QUALIFIER] = sym_INLINE_QUALIFIER,
  [sym_BRIE_QUALIFIER] = sym_BRIE_QUALIFIER,
  [sym_BTREE_QUALIFIER] = sym_BTREE_QUALIFIER,
  [sym_MIN] = sym_MIN,
  [sym_MAX] = sym_MAX,
  [sym_AS] = sym_AS,
  [sym_NIL] = sym_NIL,
  [sym_UNDERSCORE] = sym_UNDERSCORE,
  [sym_COUNT] = sym_COUNT,
  [sym_SUM] = sym_SUM,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym_TOSTRING] = sym_TOSTRING,
  [sym_TONUMBER] = sym_TONUMBER,
  [sym_TOFLOAT] = sym_TOFLOAT,
  [sym_TOUNSIGNED] = sym_TOUNSIGNED,
  [sym_PLAN] = sym_PLAN,
  [sym_PIPE] = sym_PIPE,
  [sym_LBRACKET] = sym_LBRACKET,
  [sym_RBRACKET] = sym_RBRACKET,
  [sym_DOLLAR] = sym_DOLLAR,
  [sym_PLUS] = sym_PLUS,
  [sym_MINUS] = sym_MINUS,
  [sym_LPAREN] = sym_LPAREN,
  [sym_RPAREN] = sym_RPAREN,
  [sym_COMMA] = sym_COMMA,
  [sym_COLON] = sym_COLON,
  [sym_SEMICOLON] = sym_SEMICOLON,
  [sym_DOT] = sym_DOT,
  [sym_SUBTYPE] = sym_SUBTYPE,
  [sym_LE] = sym_LE,
  [sym_GE] = sym_GE,
  [sym_NE] = sym_NE,
  [sym_EQUALS] = sym_EQUALS,
  [sym_EXCLAMATION] = sym_EXCLAMATION,
  [sym_STAR] = sym_STAR,
  [sym_AT] = sym_AT,
  [sym_SLASH] = sym_SLASH,
  [sym_CARET] = sym_CARET,
  [sym_PERCENT] = sym_PERCENT,
  [sym_LBRACE] = sym_LBRACE,
  [sym_RBRACE] = sym_RBRACE,
  [sym_LT] = sym_LT,
  [sym_GT] = sym_GT,
  [sym_IF] = sym_IF,
  [sym_INPUT] = sym_INPUT,
  [sym_OUTPUT] = sym_OUTPUT,
  [sym_CPP_VAR] = sym_CPP_VAR,
  [aux_sym_IDENT_token1] = aux_sym_IDENT_token1,
  [aux_sym_IDENT_token2] = aux_sym_IDENT_token2,
  [aux_sym_NUMBER_token1] = aux_sym_NUMBER_token1,
  [aux_sym_NUMBER_token2] = aux_sym_NUMBER_token2,
  [aux_sym_NUMBER_token3] = aux_sym_NUMBER_token3,
  [sym_FLOAT] = sym_FLOAT,
  [sym_STRING] = sym_STRING,
  [sym_COMMENT] = sym_COMMENT,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUNDline] = anon_sym_POUNDline,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [aux_sym_define_token1] = aux_sym_define_token1,
  [sym_filename] = sym_filename,
  [anon_sym_stateful] = anon_sym_stateful,
  [sym_source_file] = sym_source_file,
  [sym_io_macro] = sym_io_macro,
  [sym_IDENT] = sym_IDENT,
  [sym_NUMBER] = sym_NUMBER,
  [sym_unit] = sym_unit,
  [sym_include] = sym_include,
  [sym_line] = sym_line,
  [sym_define] = sym_define,
  [sym_identifier] = sym_identifier,
  [sym_type] = sym_type,
  [sym_non_empty_sum_branch_list] = sym_non_empty_sum_branch_list,
  [sym_non_empty_record_type_list] = sym_non_empty_record_type_list,
  [sym_union_type_list] = sym_union_type_list,
  [sym_sum_branch] = sym_sum_branch,
  [sym_relation_decl] = sym_relation_decl,
  [sym_relation_list] = sym_relation_list,
  [sym_non_empty_attributes] = sym_non_empty_attributes,
  [sym_relation_tags] = sym_relation_tags,
  [sym_fact] = sym_fact,
  [sym_rule] = sym_rule,
  [sym_rule_def] = sym_rule_def,
  [sym_head] = sym_head,
  [sym_body] = sym_body,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_exec_plan] = sym_exec_plan,
  [sym_exec_plan_list] = sym_exec_plan_list,
  [sym_exec_order_list] = sym_exec_order_list,
  [sym_term] = sym_term,
  [sym_atom] = sym_atom,
  [sym_constraint] = sym_constraint,
  [sym_non_empty_arg_list] = sym_non_empty_arg_list,
  [sym_arg] = sym_arg,
  [sym_functor_built_in] = sym_functor_built_in,
  [sym_component] = sym_component,
  [sym_component_head] = sym_component_head,
  [sym_comp_type] = sym_comp_type,
  [sym_type_params] = sym_type_params,
  [sym_type_param_list] = sym_type_param_list,
  [sym_component_body] = sym_component_body,
  [sym_comp_init] = sym_comp_init,
  [sym_functor_decl] = sym_functor_decl,
  [sym_pragma] = sym_pragma,
  [sym_io_head] = sym_io_head,
  [sym_io_directive_list] = sym_io_directive_list,
  [sym_io_relation_list] = sym_io_relation_list,
  [sym_non_empty_key_value_pairs] = sym_non_empty_key_value_pairs,
  [sym_kvp_value] = sym_kvp_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relation_tags_repeat1] = aux_sym_relation_tags_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_FUNCTOR] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_PRINTSIZE_DECL] = {
    .visible = true,
    .named = true,
  },
  [sym_TYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_COMPONENT] = {
    .visible = true,
    .named = true,
  },
  [sym_INSTANTIATE] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER_TYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_TYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_OVERRIDE] = {
    .visible = true,
    .named = true,
  },
  [sym_PRAGMA] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_XOR] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_SHIFT_L] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_SHIFT_R] = {
    .visible = true,
    .named = true,
  },
  [sym_BW_SHIFT_R_UNSIGNED] = {
    .visible = true,
    .named = true,
  },
  [sym_L_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_L_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_L_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_TMATCH] = {
    .visible = true,
    .named = true,
  },
  [sym_MEAN] = {
    .visible = true,
    .named = true,
  },
  [sym_CAT] = {
    .visible = true,
    .named = true,
  },
  [sym_ORD] = {
    .visible = true,
    .named = true,
  },
  [sym_RANGE] = {
    .visible = true,
    .named = true,
  },
  [sym_STRLEN] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBSTR] = {
    .visible = true,
    .named = true,
  },
  [sym_TCONTAINS] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_OVERRIDABLE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_PRINTSIZE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_EQREL_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_INLINE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_BRIE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_BTREE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_MIN] = {
    .visible = true,
    .named = true,
  },
  [sym_MAX] = {
    .visible = true,
    .named = true,
  },
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [sym_NIL] = {
    .visible = true,
    .named = true,
  },
  [sym_UNDERSCORE] = {
    .visible = true,
    .named = true,
  },
  [sym_COUNT] = {
    .visible = true,
    .named = true,
  },
  [sym_SUM] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOSTRING] = {
    .visible = true,
    .named = true,
  },
  [sym_TONUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_TOFLOAT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOUNSIGNED] = {
    .visible = true,
    .named = true,
  },
  [sym_PLAN] = {
    .visible = true,
    .named = true,
  },
  [sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRACKET] = {
    .visible = true,
    .named = true,
  },
  [sym_RBRACKET] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_MINUS] = {
    .visible = true,
    .named = true,
  },
  [sym_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMA] = {
    .visible = true,
    .named = true,
  },
  [sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [sym_SEMICOLON] = {
    .visible = true,
    .named = true,
  },
  [sym_DOT] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBTYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_LE] = {
    .visible = true,
    .named = true,
  },
  [sym_GE] = {
    .visible = true,
    .named = true,
  },
  [sym_NE] = {
    .visible = true,
    .named = true,
  },
  [sym_EQUALS] = {
    .visible = true,
    .named = true,
  },
  [sym_EXCLAMATION] = {
    .visible = true,
    .named = true,
  },
  [sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [sym_AT] = {
    .visible = true,
    .named = true,
  },
  [sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_LT] = {
    .visible = true,
    .named = true,
  },
  [sym_GT] = {
    .visible = true,
    .named = true,
  },
  [sym_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_INPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_OUTPUT] = {
    .visible = true,
    .named = true,
  },
  [sym_CPP_VAR] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_IDENT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NUMBER_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NUMBER_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NUMBER_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_FLOAT] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stateful] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_io_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_sum_branch_list] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_record_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sum_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_list] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_def] = {
    .visible = true,
    .named = true,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_plan] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_plan_list] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_order_list] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_built_in] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_head] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_params] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_init] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_io_head] = {
    .visible = true,
    .named = true,
  },
  [sym_io_directive_list] = {
    .visible = true,
    .named = true,
  },
  [sym_io_relation_list] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_key_value_pairs] = {
    .visible = true,
    .named = true,
  },
  [sym_kvp_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(123);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '%') ADVANCE(211);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '0') ADVANCE(377);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(377);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '%') ADVANCE(211);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(211);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(211);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(377);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(384);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(388);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'z') ADVANCE(41);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(390);
      END_STATE();
    case 118:
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(379);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 119:
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 120:
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 121:
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 122:
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_AT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(388);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_INPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_CPP_VAR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'N') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'P') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'U') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == 'x') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 'x') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'i') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'q') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'U') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'U') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(353);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'c') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == 'u') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'm') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'p') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'x') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'x') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'z') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(408);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(407);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(386);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(408);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(390);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(386);
      if (lookahead == '\r') ADVANCE(392);
      if (lookahead == '"') ADVANCE(388);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 118},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 118},
  [10] = {.lex_state = 118},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 118},
  [29] = {.lex_state = 122},
  [30] = {.lex_state = 118},
  [31] = {.lex_state = 118},
  [32] = {.lex_state = 122},
  [33] = {.lex_state = 122},
  [34] = {.lex_state = 122},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 118},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 118},
  [53] = {.lex_state = 118},
  [54] = {.lex_state = 118},
  [55] = {.lex_state = 119},
  [56] = {.lex_state = 118},
  [57] = {.lex_state = 119},
  [58] = {.lex_state = 118},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 118},
  [61] = {.lex_state = 118},
  [62] = {.lex_state = 119},
  [63] = {.lex_state = 119},
  [64] = {.lex_state = 118},
  [65] = {.lex_state = 118},
  [66] = {.lex_state = 118},
  [67] = {.lex_state = 118},
  [68] = {.lex_state = 119},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 118},
  [71] = {.lex_state = 118},
  [72] = {.lex_state = 118},
  [73] = {.lex_state = 120},
  [74] = {.lex_state = 118},
  [75] = {.lex_state = 118},
  [76] = {.lex_state = 118},
  [77] = {.lex_state = 118},
  [78] = {.lex_state = 120},
  [79] = {.lex_state = 121},
  [80] = {.lex_state = 118},
  [81] = {.lex_state = 118},
  [82] = {.lex_state = 118},
  [83] = {.lex_state = 118},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 120},
  [86] = {.lex_state = 118},
  [87] = {.lex_state = 118},
  [88] = {.lex_state = 119},
  [89] = {.lex_state = 120},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 119},
  [92] = {.lex_state = 118},
  [93] = {.lex_state = 118},
  [94] = {.lex_state = 118},
  [95] = {.lex_state = 118},
  [96] = {.lex_state = 118},
  [97] = {.lex_state = 118},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 118},
  [100] = {.lex_state = 118},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 118},
  [103] = {.lex_state = 118},
  [104] = {.lex_state = 118},
  [105] = {.lex_state = 118},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 118},
  [109] = {.lex_state = 118},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 118},
  [115] = {.lex_state = 121},
  [116] = {.lex_state = 118},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 118},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 118},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 118},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 118},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 118},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 118},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 118},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 118},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 118},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 118},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 118},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 118},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 118},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 118},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 118},
  [247] = {.lex_state = 406},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 118},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 118},
  [256] = {.lex_state = 406},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 118},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 118},
  [262] = {.lex_state = 118},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 118},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 401},
  [272] = {.lex_state = 118},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_DECL] = ACTIONS(1),
    [sym_FUNCTOR] = ACTIONS(1),
    [sym_INPUT_DECL] = ACTIONS(1),
    [sym_OUTPUT_DECL] = ACTIONS(1),
    [sym_PRINTSIZE_DECL] = ACTIONS(1),
    [sym_TYPE] = ACTIONS(1),
    [sym_COMPONENT] = ACTIONS(1),
    [sym_INSTANTIATE] = ACTIONS(1),
    [sym_NUMBER_TYPE] = ACTIONS(1),
    [sym_SYMBOL_TYPE] = ACTIONS(1),
    [sym_OVERRIDE] = ACTIONS(1),
    [sym_PRAGMA] = ACTIONS(1),
    [sym_BW_AND] = ACTIONS(1),
    [sym_BW_OR] = ACTIONS(1),
    [sym_BW_XOR] = ACTIONS(1),
    [sym_BW_NOT] = ACTIONS(1),
    [sym_BW_SHIFT_L] = ACTIONS(1),
    [sym_BW_SHIFT_R] = ACTIONS(1),
    [sym_BW_SHIFT_R_UNSIGNED] = ACTIONS(1),
    [sym_L_AND] = ACTIONS(1),
    [sym_L_OR] = ACTIONS(1),
    [sym_L_NOT] = ACTIONS(1),
    [sym_TMATCH] = ACTIONS(1),
    [sym_MEAN] = ACTIONS(1),
    [sym_CAT] = ACTIONS(1),
    [sym_ORD] = ACTIONS(1),
    [sym_RANGE] = ACTIONS(1),
    [sym_STRLEN] = ACTIONS(1),
    [sym_SUBSTR] = ACTIONS(1),
    [sym_TCONTAINS] = ACTIONS(1),
    [sym_OUTPUT_QUALIFIER] = ACTIONS(1),
    [sym_INPUT_QUALIFIER] = ACTIONS(1),
    [sym_OVERRIDABLE_QUALIFIER] = ACTIONS(1),
    [sym_PRINTSIZE_QUALIFIER] = ACTIONS(1),
    [sym_EQREL_QUALIFIER] = ACTIONS(1),
    [sym_INLINE_QUALIFIER] = ACTIONS(1),
    [sym_BRIE_QUALIFIER] = ACTIONS(1),
    [sym_BTREE_QUALIFIER] = ACTIONS(1),
    [sym_MIN] = ACTIONS(1),
    [sym_MAX] = ACTIONS(1),
    [sym_AS] = ACTIONS(1),
    [sym_NIL] = ACTIONS(1),
    [sym_UNDERSCORE] = ACTIONS(1),
    [sym_COUNT] = ACTIONS(1),
    [sym_SUM] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym_TOSTRING] = ACTIONS(1),
    [sym_TONUMBER] = ACTIONS(1),
    [sym_TOFLOAT] = ACTIONS(1),
    [sym_TOUNSIGNED] = ACTIONS(1),
    [sym_PIPE] = ACTIONS(1),
    [sym_LBRACKET] = ACTIONS(1),
    [sym_RBRACKET] = ACTIONS(1),
    [sym_DOLLAR] = ACTIONS(1),
    [sym_PLUS] = ACTIONS(1),
    [sym_MINUS] = ACTIONS(1),
    [sym_LPAREN] = ACTIONS(1),
    [sym_RPAREN] = ACTIONS(1),
    [sym_COMMA] = ACTIONS(1),
    [sym_COLON] = ACTIONS(1),
    [sym_SEMICOLON] = ACTIONS(1),
    [sym_DOT] = ACTIONS(1),
    [sym_SUBTYPE] = ACTIONS(1),
    [sym_LE] = ACTIONS(1),
    [sym_GE] = ACTIONS(1),
    [sym_NE] = ACTIONS(1),
    [sym_EQUALS] = ACTIONS(1),
    [sym_EXCLAMATION] = ACTIONS(1),
    [sym_STAR] = ACTIONS(1),
    [sym_AT] = ACTIONS(1),
    [sym_SLASH] = ACTIONS(1),
    [sym_CARET] = ACTIONS(1),
    [sym_PERCENT] = ACTIONS(1),
    [sym_LBRACE] = ACTIONS(1),
    [sym_RBRACE] = ACTIONS(1),
    [sym_LT] = ACTIONS(1),
    [sym_GT] = ACTIONS(1),
    [sym_IF] = ACTIONS(1),
    [sym_INPUT] = ACTIONS(1),
    [sym_OUTPUT] = ACTIONS(1),
    [sym_CPP_VAR] = ACTIONS(1),
    [aux_sym_IDENT_token1] = ACTIONS(1),
    [aux_sym_IDENT_token2] = ACTIONS(1),
    [aux_sym_NUMBER_token1] = ACTIONS(1),
    [aux_sym_NUMBER_token2] = ACTIONS(1),
    [aux_sym_NUMBER_token3] = ACTIONS(1),
    [sym_FLOAT] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_stateful] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(269),
    [sym_io_macro] = STATE(109),
    [sym_IDENT] = STATE(136),
    [sym_unit] = STATE(9),
    [sym_include] = STATE(109),
    [sym_line] = STATE(109),
    [sym_define] = STATE(109),
    [sym_identifier] = STATE(211),
    [sym_type] = STATE(109),
    [sym_relation_decl] = STATE(109),
    [sym_fact] = STATE(109),
    [sym_rule] = STATE(90),
    [sym_rule_def] = STATE(67),
    [sym_head] = STATE(212),
    [sym_atom] = STATE(188),
    [sym_component] = STATE(109),
    [sym_component_head] = STATE(189),
    [sym_comp_init] = STATE(109),
    [sym_functor_decl] = STATE(109),
    [sym_pragma] = STATE(109),
    [sym_io_head] = STATE(109),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_DECL] = ACTIONS(7),
    [sym_FUNCTOR] = ACTIONS(9),
    [sym_INPUT_DECL] = ACTIONS(11),
    [sym_OUTPUT_DECL] = ACTIONS(11),
    [sym_PRINTSIZE_DECL] = ACTIONS(11),
    [sym_TYPE] = ACTIONS(13),
    [sym_COMPONENT] = ACTIONS(15),
    [sym_INSTANTIATE] = ACTIONS(17),
    [sym_NUMBER_TYPE] = ACTIONS(19),
    [sym_SYMBOL_TYPE] = ACTIONS(19),
    [sym_PRAGMA] = ACTIONS(21),
    [sym_INPUT] = ACTIONS(23),
    [sym_OUTPUT] = ACTIONS(23),
    [sym_CPP_VAR] = ACTIONS(23),
    [aux_sym_IDENT_token1] = ACTIONS(25),
    [aux_sym_IDENT_token2] = ACTIONS(25),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(27),
    [anon_sym_POUNDline] = ACTIONS(29),
    [anon_sym_POUNDdefine] = ACTIONS(31),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(101), 1,
      sym_arg,
    STATE(142), 1,
      sym_term,
    STATE(155), 1,
      sym_conjunction,
    STATE(206), 1,
      sym_disjunction,
    STATE(211), 1,
      sym_identifier,
    STATE(241), 1,
      sym_functor_built_in,
    STATE(260), 1,
      sym_body,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [106] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(101), 1,
      sym_arg,
    STATE(142), 1,
      sym_term,
    STATE(155), 1,
      sym_conjunction,
    STATE(206), 1,
      sym_disjunction,
    STATE(211), 1,
      sym_identifier,
    STATE(241), 1,
      sym_functor_built_in,
    STATE(267), 1,
      sym_body,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [212] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(101), 1,
      sym_arg,
    STATE(142), 1,
      sym_term,
    STATE(155), 1,
      sym_conjunction,
    STATE(206), 1,
      sym_disjunction,
    STATE(211), 1,
      sym_identifier,
    STATE(241), 1,
      sym_functor_built_in,
    STATE(250), 1,
      sym_body,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [318] = 28,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(98), 1,
      sym_arg,
    STATE(142), 1,
      sym_term,
    STATE(155), 1,
      sym_conjunction,
    STATE(211), 1,
      sym_identifier,
    STATE(230), 1,
      sym_disjunction,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [421] = 27,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(101), 1,
      sym_arg,
    STATE(142), 1,
      sym_term,
    STATE(146), 1,
      sym_conjunction,
    STATE(211), 1,
      sym_identifier,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [521] = 26,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(101), 1,
      sym_arg,
    STATE(145), 1,
      sym_term,
    STATE(211), 1,
      sym_identifier,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [618] = 26,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(55), 1,
      sym_LPAREN,
    ACTIONS(57), 1,
      sym_EXCLAMATION,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(69), 1,
      sym_IDENT,
    STATE(101), 1,
      sym_arg,
    STATE(158), 1,
      sym_term,
    STATE(211), 1,
      sym_identifier,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(35), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(49), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [715] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(9), 1,
      sym_FUNCTOR,
    ACTIONS(13), 1,
      sym_TYPE,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(17), 1,
      sym_INSTANTIATE,
    ACTIONS(21), 1,
      sym_PRAGMA,
    ACTIONS(27), 1,
      anon_sym_POUNDinclude,
    ACTIONS(29), 1,
      anon_sym_POUNDline,
    ACTIONS(31), 1,
      anon_sym_POUNDdefine,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_rule_def,
    STATE(90), 1,
      sym_rule,
    STATE(136), 1,
      sym_IDENT,
    STATE(188), 1,
      sym_atom,
    STATE(189), 1,
      sym_component_head,
    STATE(211), 1,
      sym_identifier,
    STATE(212), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(109), 12,
      sym_io_macro,
      sym_include,
      sym_line,
      sym_define,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_functor_decl,
      sym_pragma,
      sym_io_head,
  [806] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_DECL,
    ACTIONS(74), 1,
      sym_FUNCTOR,
    ACTIONS(80), 1,
      sym_TYPE,
    ACTIONS(83), 1,
      sym_COMPONENT,
    ACTIONS(86), 1,
      sym_INSTANTIATE,
    ACTIONS(92), 1,
      sym_PRAGMA,
    ACTIONS(101), 1,
      anon_sym_POUNDinclude,
    ACTIONS(104), 1,
      anon_sym_POUNDline,
    ACTIONS(107), 1,
      anon_sym_POUNDdefine,
    STATE(67), 1,
      sym_rule_def,
    STATE(90), 1,
      sym_rule,
    STATE(136), 1,
      sym_IDENT,
    STATE(188), 1,
      sym_atom,
    STATE(189), 1,
      sym_component_head,
    STATE(211), 1,
      sym_identifier,
    STATE(212), 1,
      sym_head,
    ACTIONS(89), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(98), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(77), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(95), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(109), 12,
      sym_io_macro,
      sym_include,
      sym_line,
      sym_define,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_functor_decl,
      sym_pragma,
      sym_io_head,
  [897] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    ACTIONS(112), 1,
      sym_RPAREN,
    STATE(119), 1,
      sym_arg,
    STATE(210), 1,
      sym_non_empty_arg_list,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [977] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    ACTIONS(114), 1,
      sym_RPAREN,
    STATE(119), 1,
      sym_arg,
    STATE(213), 1,
      sym_non_empty_arg_list,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1057] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    ACTIONS(116), 1,
      sym_RPAREN,
    STATE(119), 1,
      sym_arg,
    STATE(220), 1,
      sym_non_empty_arg_list,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1137] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    ACTIONS(118), 1,
      sym_RBRACKET,
    STATE(119), 1,
      sym_arg,
    STATE(231), 1,
      sym_non_empty_arg_list,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1217] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(119), 1,
      sym_arg,
    STATE(226), 1,
      sym_non_empty_arg_list,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1294] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(50), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1368] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(48), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1442] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(125), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1516] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(111), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1590] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(47), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1664] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1738] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(123), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1812] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(126), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1886] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(120), 1,
      sym_LPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1960] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2034] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(121), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2108] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(43), 1,
      sym_AS,
    ACTIONS(47), 1,
      sym_COUNT,
    ACTIONS(51), 1,
      sym_LBRACKET,
    ACTIONS(53), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_AT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(110), 1,
      sym_LPAREN,
    STATE(129), 1,
      sym_arg,
    STATE(241), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(41), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(45), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(65), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(39), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2182] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(124), 1,
      sym_TYPE,
    ACTIONS(126), 1,
      sym_INSTANTIATE,
    ACTIONS(130), 1,
      sym_OVERRIDE,
    ACTIONS(132), 1,
      sym_RBRACE,
    STATE(67), 1,
      sym_rule_def,
    STATE(114), 1,
      sym_rule,
    STATE(136), 1,
      sym_IDENT,
    STATE(188), 1,
      sym_atom,
    STATE(189), 1,
      sym_component_head,
    STATE(211), 1,
      sym_identifier,
    STATE(212), 1,
      sym_head,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(128), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(31), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(122), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(122), 7,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2256] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(34), 1,
      aux_sym_relation_tags_repeat1,
    STATE(75), 1,
      sym_relation_tags,
    ACTIONS(138), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(136), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(134), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2302] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(124), 1,
      sym_TYPE,
    ACTIONS(126), 1,
      sym_INSTANTIATE,
    ACTIONS(130), 1,
      sym_OVERRIDE,
    ACTIONS(140), 1,
      sym_RBRACE,
    STATE(67), 1,
      sym_rule_def,
    STATE(114), 1,
      sym_rule,
    STATE(136), 1,
      sym_IDENT,
    STATE(188), 1,
      sym_atom,
    STATE(189), 1,
      sym_component_head,
    STATE(211), 1,
      sym_identifier,
    STATE(212), 1,
      sym_head,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(128), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(28), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(122), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(122), 7,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2376] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(142), 1,
      sym_DECL,
    ACTIONS(148), 1,
      sym_TYPE,
    ACTIONS(151), 1,
      sym_COMPONENT,
    ACTIONS(154), 1,
      sym_INSTANTIATE,
    ACTIONS(160), 1,
      sym_OVERRIDE,
    ACTIONS(163), 1,
      sym_RBRACE,
    STATE(67), 1,
      sym_rule_def,
    STATE(114), 1,
      sym_rule,
    STATE(136), 1,
      sym_IDENT,
    STATE(188), 1,
      sym_atom,
    STATE(189), 1,
      sym_component_head,
    STATE(211), 1,
      sym_identifier,
    STATE(212), 1,
      sym_head,
    ACTIONS(157), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(168), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    STATE(31), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(145), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(165), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(122), 7,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2450] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(34), 1,
      aux_sym_relation_tags_repeat1,
    STATE(96), 1,
      sym_relation_tags,
    ACTIONS(173), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(136), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(171), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2496] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(33), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(180), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(177), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(175), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2539] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(33), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(186), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(184), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(182), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2582] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(41), 1,
      sym_IDENT,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(188), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(190), 16,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [2624] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(194), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(192), 25,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_LBRACE,
      sym_RBRACE,
  [2661] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(194), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(192), 21,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_SUBTYPE,
      sym_EQUALS,
      sym_LBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(198), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(196), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
      sym_IF,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(202), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(200), 24,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
      anon_sym_DQUOTE,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(204), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
      sym_IF,
  [2805] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 1,
      sym_LPAREN,
    ACTIONS(210), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(208), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(216), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(214), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(218), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [2913] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(224), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(222), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [2948] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(228), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(226), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [2983] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(232), 1,
      sym_LT,
    STATE(52), 1,
      sym_type_params,
    ACTIONS(234), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(230), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3022] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(210), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(208), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3057] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(216), 2,
      sym_LT,
      sym_GT,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(214), 11,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_RBRACE,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [3098] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(188), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(190), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(216), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(214), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3168] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(210), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(208), 23,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_RBRACKET,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_COMMA,
      sym_COLON,
      sym_SEMICOLON,
      sym_DOT,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
      sym_RBRACE,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(244), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(242), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3236] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(246), 20,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3269] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(250), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3301] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(258), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3365] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(262), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3397] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(268), 1,
      sym_COMMA,
    ACTIONS(270), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(266), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(194), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(192), 17,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_SUBTYPE,
      sym_EQUALS,
      sym_LBRACE,
      sym_RBRACE,
  [3463] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(274), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(272), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3495] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(276), 19,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 1,
      sym_DOT,
    ACTIONS(284), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(280), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3560] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 1,
      sym_DOT,
    ACTIONS(288), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(286), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3593] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(290), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PIPE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3624] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(294), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PIPE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3655] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 1,
      sym_PIPE,
    ACTIONS(302), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(298), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3688] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(306), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(304), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3719] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(308), 1,
      sym_LBRACE,
    ACTIONS(256), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 16,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3752] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(188), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(190), 17,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_RPAREN,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
      sym_STAR,
      sym_CARET,
      sym_PERCENT,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(310), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3816] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(316), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(314), 18,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3847] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(318), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(262), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3907] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(322), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3937] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(173), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(171), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3967] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(326), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(330), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(194), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(192), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4057] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(334), 1,
      sym_SUBTYPE,
    ACTIONS(336), 1,
      sym_EQUALS,
    ACTIONS(328), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(326), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4091] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(340), 1,
      sym_LPAREN,
    ACTIONS(342), 1,
      sym_COMMA,
    ACTIONS(344), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(338), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4125] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(346), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4155] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(352), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(350), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4185] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(354), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(254), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4245] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      sym_DOT,
    ACTIONS(364), 1,
      anon_sym_stateful,
    ACTIONS(362), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(358), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(368), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(366), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4309] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(372), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(370), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4339] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 1,
      sym_DOT,
    ACTIONS(376), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(374), 16,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4371] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      sym_DOT,
    ACTIONS(382), 1,
      anon_sym_stateful,
    ACTIONS(380), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(378), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4405] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(386), 1,
      sym_PLAN,
    STATE(71), 1,
      sym_exec_plan,
    ACTIONS(388), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(384), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4439] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 1,
      sym_DOT,
    ACTIONS(392), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(390), 16,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      sym_PIPE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4471] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(396), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(394), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4501] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(400), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(398), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4531] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(404), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(402), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4561] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(408), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(406), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4591] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(412), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(410), 17,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4621] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(418), 1,
      sym_STRING,
    ACTIONS(416), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(414), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4652] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(116), 1,
      sym_RPAREN,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(422), 2,
      sym_LT,
      sym_GT,
    ACTIONS(420), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [4689] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(424), 1,
      sym_PIPE,
    ACTIONS(332), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(330), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4720] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(428), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(426), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4748] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(422), 2,
      sym_LT,
      sym_GT,
    ACTIONS(420), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [4782] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(432), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(430), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4810] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(436), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(434), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4838] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(362), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(358), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(440), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(438), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4894] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 14,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(262), 14,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [4950] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(444), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(442), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4978] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(388), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(384), 15,
      ts_builtin_sym_end,
      sym_DECL,
      sym_FUNCTOR,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_PRAGMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5006] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(446), 1,
      sym_DOT,
    ACTIONS(284), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(280), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [5035] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(448), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5066] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(446), 1,
      sym_DOT,
    ACTIONS(288), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(286), 13,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [5095] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(308), 1,
      sym_LBRACE,
    ACTIONS(256), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 12,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_RBRACE,
  [5124] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(386), 1,
      sym_PLAN,
    STATE(71), 1,
      sym_exec_plan,
    ACTIONS(452), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(450), 11,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
  [5154] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(454), 1,
      sym_SUBTYPE,
    ACTIONS(456), 1,
      sym_EQUALS,
    ACTIONS(328), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(326), 11,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
  [5184] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(340), 1,
      sym_LPAREN,
    ACTIONS(458), 1,
      sym_COMMA,
    ACTIONS(344), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(338), 11,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
  [5214] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(446), 1,
      sym_DOT,
    ACTIONS(376), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(374), 12,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_RBRACE,
  [5242] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(446), 1,
      sym_DOT,
    ACTIONS(392), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(390), 12,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_PIPE,
      sym_RBRACE,
  [5270] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(460), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5299] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(462), 1,
      sym_PIPE,
    ACTIONS(332), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(330), 11,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
  [5326] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(464), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5355] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(452), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(450), 11,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
  [5379] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(116), 1,
      sym_RPAREN,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(466), 1,
      sym_COMMA,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5409] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(470), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(468), 11,
      sym_DECL,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
      sym_TYPE,
      sym_COMPONENT,
      sym_INSTANTIATE,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
      sym_OVERRIDE,
      sym_RBRACE,
  [5433] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(472), 1,
      sym_COMMA,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5460] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(474), 1,
      sym_COMMA,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5487] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(476), 1,
      sym_COLON,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5514] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(478), 1,
      sym_RPAREN,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5541] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(116), 1,
      sym_RPAREN,
    ACTIONS(240), 1,
      sym_CARET,
    ACTIONS(238), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(236), 11,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_MINUS,
      sym_STAR,
      sym_PERCENT,
  [5568] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_LBRACKET,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(66), 1,
      sym_sum_branch,
    STATE(77), 1,
      sym_non_empty_sum_branch_list,
    STATE(113), 1,
      sym_IDENT,
    STATE(118), 1,
      sym_identifier,
    STATE(120), 1,
      sym_union_type_list,
  [5596] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_LBRACKET,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(66), 1,
      sym_sum_branch,
    STATE(68), 1,
      sym_IDENT,
    STATE(77), 1,
      sym_non_empty_sum_branch_list,
    STATE(91), 1,
      sym_identifier,
    STATE(99), 1,
      sym_union_type_list,
  [5624] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(492), 1,
      sym_STRING,
    STATE(223), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_kvp_value,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(490), 2,
      sym_TRUE,
      sym_FALSE,
  [5645] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(492), 1,
      sym_STRING,
    STATE(223), 1,
      sym_IDENT,
    STATE(229), 1,
      sym_kvp_value,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(490), 2,
      sym_TRUE,
      sym_FALSE,
  [5666] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(55), 1,
      sym_IDENT,
    STATE(62), 1,
      sym_identifier,
    STATE(80), 1,
      sym_io_relation_list,
    STATE(81), 1,
      sym_io_directive_list,
  [5688] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(494), 1,
      sym_LBRACE,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(42), 1,
      sym_atom,
    STATE(136), 1,
      sym_IDENT,
    STATE(211), 1,
      sym_identifier,
  [5710] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [5722] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(498), 1,
      sym_RPAREN,
    STATE(215), 1,
      sym_NUMBER,
    STATE(216), 1,
      sym_exec_order_list,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5742] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [5754] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(500), 1,
      sym_RPAREN,
    STATE(215), 1,
      sym_NUMBER,
    STATE(236), 1,
      sym_exec_order_list,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5774] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    ACTIONS(502), 1,
      sym_LBRACE,
    STATE(44), 1,
      sym_atom,
    STATE(136), 1,
      sym_IDENT,
    STATE(211), 1,
      sym_identifier,
  [5796] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(81), 1,
      sym_io_directive_list,
    STATE(106), 1,
      sym_IDENT,
    STATE(110), 1,
      sym_identifier,
    STATE(116), 1,
      sym_io_relation_list,
  [5818] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(504), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5829] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(66), 1,
      sym_sum_branch,
    STATE(83), 1,
      sym_non_empty_sum_branch_list,
    STATE(249), 1,
      sym_IDENT,
  [5848] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    ACTIONS(506), 1,
      sym_RBRACKET,
    STATE(217), 1,
      sym_non_empty_record_type_list,
    STATE(272), 1,
      sym_IDENT,
  [5867] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(508), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5878] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(512), 1,
      sym_COMMA,
    ACTIONS(510), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5891] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    ACTIONS(514), 1,
      sym_RPAREN,
    STATE(219), 1,
      sym_non_empty_key_value_pairs,
    STATE(265), 1,
      sym_IDENT,
  [5910] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    ACTIONS(516), 1,
      sym_RPAREN,
    STATE(221), 1,
      sym_non_empty_attributes,
    STATE(258), 1,
      sym_IDENT,
  [5929] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5940] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    ACTIONS(520), 1,
      sym_RPAREN,
    STATE(228), 1,
      sym_non_empty_attributes,
    STATE(258), 1,
      sym_IDENT,
  [5959] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5970] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(211), 1,
      sym_identifier,
    STATE(235), 1,
      sym_atom,
  [5989] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(58), 1,
      sym_exec_plan_list,
    STATE(255), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(524), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6017] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(512), 1,
      sym_COMMA,
    ACTIONS(526), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6030] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(528), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6041] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    ACTIONS(530), 1,
      sym_RBRACE,
    STATE(232), 1,
      sym_non_empty_attributes,
    STATE(258), 1,
      sym_IDENT,
  [6060] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(532), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6071] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(46), 1,
      sym_IDENT,
    STATE(207), 1,
      sym_comp_type,
  [6087] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(183), 1,
      sym_identifier,
  [6103] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(262), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6117] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(534), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [6129] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(106), 1,
      sym_IDENT,
    STATE(112), 1,
      sym_identifier,
  [6145] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(46), 1,
      sym_IDENT,
    STATE(95), 1,
      sym_comp_type,
  [6161] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      aux_sym_IDENT_token1,
    ACTIONS(540), 1,
      aux_sym_IDENT_token2,
    STATE(84), 1,
      sym_IDENT,
    STATE(89), 1,
      sym_identifier,
  [6177] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      aux_sym_IDENT_token1,
    ACTIONS(540), 1,
      aux_sym_IDENT_token2,
    STATE(84), 1,
      sym_IDENT,
    STATE(85), 1,
      sym_identifier,
  [6193] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(46), 1,
      sym_IDENT,
    STATE(195), 1,
      sym_comp_type,
  [6209] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(179), 1,
      sym_identifier,
  [6225] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(253), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6239] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(106), 1,
      sym_IDENT,
    STATE(117), 1,
      sym_identifier,
  [6255] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(55), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_identifier,
  [6271] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(222), 1,
      sym_IDENT,
    STATE(225), 1,
      sym_relation_list,
  [6287] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(237), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6301] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(162), 1,
      sym_identifier,
  [6317] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(55), 1,
      sym_IDENT,
    STATE(63), 1,
      sym_identifier,
  [6333] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(46), 1,
      sym_IDENT,
    STATE(95), 1,
      sym_comp_type,
  [6349] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(205), 1,
      sym_identifier,
  [6365] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(227), 1,
      sym_identifier,
  [6381] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(542), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [6393] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(214), 1,
      sym_type_param_list,
    STATE(218), 1,
      sym_IDENT,
  [6409] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(136), 1,
      sym_IDENT,
    STATE(209), 1,
      sym_identifier,
  [6425] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(259), 1,
      sym_IDENT,
  [6438] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(544), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6449] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(257), 1,
      sym_IDENT,
  [6462] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(233), 1,
      sym_IDENT,
  [6475] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(79), 1,
      sym_IDENT,
  [6488] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(270), 1,
      sym_IDENT,
  [6501] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 1,
      sym_DOT,
    ACTIONS(546), 2,
      sym_COMMA,
      sym_IF,
  [6512] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_LBRACE,
    ACTIONS(550), 2,
      sym_COMMA,
      sym_COLON,
  [6523] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(77), 1,
      sym_IDENT,
  [6536] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(76), 1,
      sym_IDENT,
  [6549] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(264), 1,
      sym_IDENT,
  [6562] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(115), 1,
      sym_IDENT,
  [6575] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      aux_sym_IDENT_token1,
    ACTIONS(540), 1,
      aux_sym_IDENT_token2,
    STATE(73), 1,
      sym_IDENT,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(554), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6597] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(107), 1,
      sym_IDENT,
  [6610] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(138), 1,
      sym_IDENT,
  [6623] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(224), 1,
      sym_IDENT,
  [6636] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(261), 1,
      sym_IDENT,
  [6649] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(77), 1,
      sym_IDENT,
  [6662] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(263), 1,
      sym_IDENT,
  [6675] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(76), 1,
      sym_IDENT,
  [6688] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      aux_sym_IDENT_token1,
    ACTIONS(488), 1,
      aux_sym_IDENT_token2,
    STATE(57), 1,
      sym_IDENT,
  [6701] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(25), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(254), 1,
      sym_IDENT,
  [6714] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(556), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6725] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_SEMICOLON,
    ACTIONS(560), 2,
      sym_DOT,
      sym_RBRACE,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(562), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6745] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(482), 1,
      aux_sym_IDENT_token1,
    ACTIONS(484), 1,
      aux_sym_IDENT_token2,
    STATE(124), 1,
      sym_IDENT,
  [6758] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(564), 1,
      sym_RPAREN,
  [6768] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(566), 1,
      sym_RPAREN,
    ACTIONS(568), 1,
      sym_COMMA,
  [6778] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(570), 1,
      sym_LPAREN,
  [6788] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 1,
      sym_COMMA,
    ACTIONS(574), 1,
      sym_IF,
  [6798] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_COMMA,
    ACTIONS(576), 1,
      sym_RPAREN,
  [6808] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_COMMA,
    ACTIONS(580), 1,
      sym_GT,
  [6818] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(582), 2,
      sym_RPAREN,
      sym_COMMA,
  [6826] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(584), 1,
      sym_RPAREN,
    ACTIONS(586), 1,
      sym_COMMA,
  [6836] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(588), 1,
      sym_RBRACKET,
    ACTIONS(590), 1,
      sym_COMMA,
  [6846] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(592), 2,
      sym_COMMA,
      sym_GT,
  [6854] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(594), 1,
      sym_RPAREN,
    ACTIONS(596), 1,
      sym_COMMA,
  [6864] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(114), 1,
      sym_RPAREN,
    ACTIONS(568), 1,
      sym_COMMA,
  [6874] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 1,
      sym_RPAREN,
    ACTIONS(600), 1,
      sym_COMMA,
  [6884] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 2,
      sym_LPAREN,
      sym_COMMA,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(604), 2,
      sym_RPAREN,
      sym_COMMA,
  [6900] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 2,
      sym_LPAREN,
      sym_COMMA,
  [6908] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(608), 1,
      sym_LPAREN,
    ACTIONS(610), 1,
      sym_COMMA,
  [6918] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_COMMA,
    ACTIONS(612), 1,
      sym_RPAREN,
  [6928] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 1,
      sym_DOT,
    ACTIONS(612), 1,
      sym_RPAREN,
  [6938] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(600), 1,
      sym_COMMA,
    ACTIONS(614), 1,
      sym_RPAREN,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(616), 2,
      sym_RPAREN,
      sym_COMMA,
  [6956] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_SEMICOLON,
    ACTIONS(618), 1,
      sym_RPAREN,
  [6966] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(116), 1,
      sym_RBRACKET,
    ACTIONS(568), 1,
      sym_COMMA,
  [6976] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(600), 1,
      sym_COMMA,
    ACTIONS(620), 1,
      sym_RBRACE,
  [6986] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(622), 2,
      sym_COMMA,
      sym_GT,
  [6994] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(624), 2,
      sym_RPAREN,
      sym_COMMA,
  [7002] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(626), 2,
      sym_COMMA,
      sym_IF,
  [7010] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(586), 1,
      sym_COMMA,
    ACTIONS(628), 1,
      sym_RPAREN,
  [7020] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(630), 2,
      sym_RPAREN,
      sym_COMMA,
  [7028] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(632), 1,
      anon_sym_DQUOTE,
  [7035] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(634), 1,
      sym_COLON,
  [7042] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(636), 1,
      sym_LPAREN,
  [7049] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(638), 1,
      sym_LPAREN,
  [7056] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 1,
      sym_LPAREN,
  [7063] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 1,
      sym_COLON,
  [7070] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(644), 1,
      sym_LPAREN,
  [7077] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(646), 1,
      sym_LPAREN,
  [7084] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(648), 1,
      sym_STRING,
  [7091] = 2,
    ACTIONS(650), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_filename,
  [7098] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
  [7105] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(308), 1,
      sym_LBRACE,
  [7112] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(656), 1,
      sym_DOT,
  [7119] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(658), 1,
      sym_LPAREN,
  [7126] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(660), 1,
      sym_COLON,
  [7133] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 1,
      anon_sym_DQUOTE,
  [7140] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 1,
      sym_LPAREN,
  [7147] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 1,
      sym_COLON,
  [7154] = 2,
    ACTIONS(650), 1,
      sym_COMMENT,
    ACTIONS(666), 1,
      sym_filename,
  [7161] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(668), 1,
      sym_EQUALS,
  [7168] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      sym_COLON,
  [7175] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(672), 1,
      sym_LPAREN,
  [7182] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(612), 1,
      sym_RBRACE,
  [7189] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(674), 1,
      sym_COLON,
  [7196] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(676), 1,
      sym_COLON,
  [7203] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(678), 1,
      sym_EQUALS,
  [7210] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(680), 1,
      sym_COLON,
  [7217] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(682), 1,
      sym_EQUALS,
  [7224] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(684), 1,
      sym_LPAREN,
  [7231] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_RBRACE,
  [7238] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
  [7245] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
  [7252] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(690), 1,
      sym_EQUALS,
  [7259] = 2,
    ACTIONS(650), 1,
      sym_COMMENT,
    ACTIONS(692), 1,
      aux_sym_define_token1,
  [7266] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(694), 1,
      sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 318,
  [SMALL_STATE(6)] = 421,
  [SMALL_STATE(7)] = 521,
  [SMALL_STATE(8)] = 618,
  [SMALL_STATE(9)] = 715,
  [SMALL_STATE(10)] = 806,
  [SMALL_STATE(11)] = 897,
  [SMALL_STATE(12)] = 977,
  [SMALL_STATE(13)] = 1057,
  [SMALL_STATE(14)] = 1137,
  [SMALL_STATE(15)] = 1217,
  [SMALL_STATE(16)] = 1294,
  [SMALL_STATE(17)] = 1368,
  [SMALL_STATE(18)] = 1442,
  [SMALL_STATE(19)] = 1516,
  [SMALL_STATE(20)] = 1590,
  [SMALL_STATE(21)] = 1664,
  [SMALL_STATE(22)] = 1738,
  [SMALL_STATE(23)] = 1812,
  [SMALL_STATE(24)] = 1886,
  [SMALL_STATE(25)] = 1960,
  [SMALL_STATE(26)] = 2034,
  [SMALL_STATE(27)] = 2108,
  [SMALL_STATE(28)] = 2182,
  [SMALL_STATE(29)] = 2256,
  [SMALL_STATE(30)] = 2302,
  [SMALL_STATE(31)] = 2376,
  [SMALL_STATE(32)] = 2450,
  [SMALL_STATE(33)] = 2496,
  [SMALL_STATE(34)] = 2539,
  [SMALL_STATE(35)] = 2582,
  [SMALL_STATE(36)] = 2624,
  [SMALL_STATE(37)] = 2661,
  [SMALL_STATE(38)] = 2697,
  [SMALL_STATE(39)] = 2733,
  [SMALL_STATE(40)] = 2769,
  [SMALL_STATE(41)] = 2805,
  [SMALL_STATE(42)] = 2843,
  [SMALL_STATE(43)] = 2878,
  [SMALL_STATE(44)] = 2913,
  [SMALL_STATE(45)] = 2948,
  [SMALL_STATE(46)] = 2983,
  [SMALL_STATE(47)] = 3022,
  [SMALL_STATE(48)] = 3057,
  [SMALL_STATE(49)] = 3098,
  [SMALL_STATE(50)] = 3133,
  [SMALL_STATE(51)] = 3168,
  [SMALL_STATE(52)] = 3203,
  [SMALL_STATE(53)] = 3236,
  [SMALL_STATE(54)] = 3269,
  [SMALL_STATE(55)] = 3301,
  [SMALL_STATE(56)] = 3333,
  [SMALL_STATE(57)] = 3365,
  [SMALL_STATE(58)] = 3397,
  [SMALL_STATE(59)] = 3431,
  [SMALL_STATE(60)] = 3463,
  [SMALL_STATE(61)] = 3495,
  [SMALL_STATE(62)] = 3527,
  [SMALL_STATE(63)] = 3560,
  [SMALL_STATE(64)] = 3593,
  [SMALL_STATE(65)] = 3624,
  [SMALL_STATE(66)] = 3655,
  [SMALL_STATE(67)] = 3688,
  [SMALL_STATE(68)] = 3719,
  [SMALL_STATE(69)] = 3752,
  [SMALL_STATE(70)] = 3785,
  [SMALL_STATE(71)] = 3816,
  [SMALL_STATE(72)] = 3847,
  [SMALL_STATE(73)] = 3877,
  [SMALL_STATE(74)] = 3907,
  [SMALL_STATE(75)] = 3937,
  [SMALL_STATE(76)] = 3967,
  [SMALL_STATE(77)] = 3997,
  [SMALL_STATE(78)] = 4027,
  [SMALL_STATE(79)] = 4057,
  [SMALL_STATE(80)] = 4091,
  [SMALL_STATE(81)] = 4125,
  [SMALL_STATE(82)] = 4155,
  [SMALL_STATE(83)] = 4185,
  [SMALL_STATE(84)] = 4215,
  [SMALL_STATE(85)] = 4245,
  [SMALL_STATE(86)] = 4279,
  [SMALL_STATE(87)] = 4309,
  [SMALL_STATE(88)] = 4339,
  [SMALL_STATE(89)] = 4371,
  [SMALL_STATE(90)] = 4405,
  [SMALL_STATE(91)] = 4439,
  [SMALL_STATE(92)] = 4471,
  [SMALL_STATE(93)] = 4501,
  [SMALL_STATE(94)] = 4531,
  [SMALL_STATE(95)] = 4561,
  [SMALL_STATE(96)] = 4591,
  [SMALL_STATE(97)] = 4621,
  [SMALL_STATE(98)] = 4652,
  [SMALL_STATE(99)] = 4689,
  [SMALL_STATE(100)] = 4720,
  [SMALL_STATE(101)] = 4748,
  [SMALL_STATE(102)] = 4782,
  [SMALL_STATE(103)] = 4810,
  [SMALL_STATE(104)] = 4838,
  [SMALL_STATE(105)] = 4866,
  [SMALL_STATE(106)] = 4894,
  [SMALL_STATE(107)] = 4922,
  [SMALL_STATE(108)] = 4950,
  [SMALL_STATE(109)] = 4978,
  [SMALL_STATE(110)] = 5006,
  [SMALL_STATE(111)] = 5035,
  [SMALL_STATE(112)] = 5066,
  [SMALL_STATE(113)] = 5095,
  [SMALL_STATE(114)] = 5124,
  [SMALL_STATE(115)] = 5154,
  [SMALL_STATE(116)] = 5184,
  [SMALL_STATE(117)] = 5214,
  [SMALL_STATE(118)] = 5242,
  [SMALL_STATE(119)] = 5270,
  [SMALL_STATE(120)] = 5299,
  [SMALL_STATE(121)] = 5326,
  [SMALL_STATE(122)] = 5355,
  [SMALL_STATE(123)] = 5379,
  [SMALL_STATE(124)] = 5409,
  [SMALL_STATE(125)] = 5433,
  [SMALL_STATE(126)] = 5460,
  [SMALL_STATE(127)] = 5487,
  [SMALL_STATE(128)] = 5514,
  [SMALL_STATE(129)] = 5541,
  [SMALL_STATE(130)] = 5568,
  [SMALL_STATE(131)] = 5596,
  [SMALL_STATE(132)] = 5624,
  [SMALL_STATE(133)] = 5645,
  [SMALL_STATE(134)] = 5666,
  [SMALL_STATE(135)] = 5688,
  [SMALL_STATE(136)] = 5710,
  [SMALL_STATE(137)] = 5722,
  [SMALL_STATE(138)] = 5742,
  [SMALL_STATE(139)] = 5754,
  [SMALL_STATE(140)] = 5774,
  [SMALL_STATE(141)] = 5796,
  [SMALL_STATE(142)] = 5818,
  [SMALL_STATE(143)] = 5829,
  [SMALL_STATE(144)] = 5848,
  [SMALL_STATE(145)] = 5867,
  [SMALL_STATE(146)] = 5878,
  [SMALL_STATE(147)] = 5891,
  [SMALL_STATE(148)] = 5910,
  [SMALL_STATE(149)] = 5929,
  [SMALL_STATE(150)] = 5940,
  [SMALL_STATE(151)] = 5959,
  [SMALL_STATE(152)] = 5970,
  [SMALL_STATE(153)] = 5989,
  [SMALL_STATE(154)] = 6006,
  [SMALL_STATE(155)] = 6017,
  [SMALL_STATE(156)] = 6030,
  [SMALL_STATE(157)] = 6041,
  [SMALL_STATE(158)] = 6060,
  [SMALL_STATE(159)] = 6071,
  [SMALL_STATE(160)] = 6087,
  [SMALL_STATE(161)] = 6103,
  [SMALL_STATE(162)] = 6117,
  [SMALL_STATE(163)] = 6129,
  [SMALL_STATE(164)] = 6145,
  [SMALL_STATE(165)] = 6161,
  [SMALL_STATE(166)] = 6177,
  [SMALL_STATE(167)] = 6193,
  [SMALL_STATE(168)] = 6209,
  [SMALL_STATE(169)] = 6225,
  [SMALL_STATE(170)] = 6239,
  [SMALL_STATE(171)] = 6255,
  [SMALL_STATE(172)] = 6271,
  [SMALL_STATE(173)] = 6287,
  [SMALL_STATE(174)] = 6301,
  [SMALL_STATE(175)] = 6317,
  [SMALL_STATE(176)] = 6333,
  [SMALL_STATE(177)] = 6349,
  [SMALL_STATE(178)] = 6365,
  [SMALL_STATE(179)] = 6381,
  [SMALL_STATE(180)] = 6393,
  [SMALL_STATE(181)] = 6409,
  [SMALL_STATE(182)] = 6425,
  [SMALL_STATE(183)] = 6438,
  [SMALL_STATE(184)] = 6449,
  [SMALL_STATE(185)] = 6462,
  [SMALL_STATE(186)] = 6475,
  [SMALL_STATE(187)] = 6488,
  [SMALL_STATE(188)] = 6501,
  [SMALL_STATE(189)] = 6512,
  [SMALL_STATE(190)] = 6523,
  [SMALL_STATE(191)] = 6536,
  [SMALL_STATE(192)] = 6549,
  [SMALL_STATE(193)] = 6562,
  [SMALL_STATE(194)] = 6575,
  [SMALL_STATE(195)] = 6588,
  [SMALL_STATE(196)] = 6597,
  [SMALL_STATE(197)] = 6610,
  [SMALL_STATE(198)] = 6623,
  [SMALL_STATE(199)] = 6636,
  [SMALL_STATE(200)] = 6649,
  [SMALL_STATE(201)] = 6662,
  [SMALL_STATE(202)] = 6675,
  [SMALL_STATE(203)] = 6688,
  [SMALL_STATE(204)] = 6701,
  [SMALL_STATE(205)] = 6714,
  [SMALL_STATE(206)] = 6725,
  [SMALL_STATE(207)] = 6736,
  [SMALL_STATE(208)] = 6745,
  [SMALL_STATE(209)] = 6758,
  [SMALL_STATE(210)] = 6768,
  [SMALL_STATE(211)] = 6778,
  [SMALL_STATE(212)] = 6788,
  [SMALL_STATE(213)] = 6798,
  [SMALL_STATE(214)] = 6808,
  [SMALL_STATE(215)] = 6818,
  [SMALL_STATE(216)] = 6826,
  [SMALL_STATE(217)] = 6836,
  [SMALL_STATE(218)] = 6846,
  [SMALL_STATE(219)] = 6854,
  [SMALL_STATE(220)] = 6864,
  [SMALL_STATE(221)] = 6874,
  [SMALL_STATE(222)] = 6884,
  [SMALL_STATE(223)] = 6892,
  [SMALL_STATE(224)] = 6900,
  [SMALL_STATE(225)] = 6908,
  [SMALL_STATE(226)] = 6918,
  [SMALL_STATE(227)] = 6928,
  [SMALL_STATE(228)] = 6938,
  [SMALL_STATE(229)] = 6948,
  [SMALL_STATE(230)] = 6956,
  [SMALL_STATE(231)] = 6966,
  [SMALL_STATE(232)] = 6976,
  [SMALL_STATE(233)] = 6986,
  [SMALL_STATE(234)] = 6994,
  [SMALL_STATE(235)] = 7002,
  [SMALL_STATE(236)] = 7010,
  [SMALL_STATE(237)] = 7020,
  [SMALL_STATE(238)] = 7028,
  [SMALL_STATE(239)] = 7035,
  [SMALL_STATE(240)] = 7042,
  [SMALL_STATE(241)] = 7049,
  [SMALL_STATE(242)] = 7056,
  [SMALL_STATE(243)] = 7063,
  [SMALL_STATE(244)] = 7070,
  [SMALL_STATE(245)] = 7077,
  [SMALL_STATE(246)] = 7084,
  [SMALL_STATE(247)] = 7091,
  [SMALL_STATE(248)] = 7098,
  [SMALL_STATE(249)] = 7105,
  [SMALL_STATE(250)] = 7112,
  [SMALL_STATE(251)] = 7119,
  [SMALL_STATE(252)] = 7126,
  [SMALL_STATE(253)] = 7133,
  [SMALL_STATE(254)] = 7140,
  [SMALL_STATE(255)] = 7147,
  [SMALL_STATE(256)] = 7154,
  [SMALL_STATE(257)] = 7161,
  [SMALL_STATE(258)] = 7168,
  [SMALL_STATE(259)] = 7175,
  [SMALL_STATE(260)] = 7182,
  [SMALL_STATE(261)] = 7189,
  [SMALL_STATE(262)] = 7196,
  [SMALL_STATE(263)] = 7203,
  [SMALL_STATE(264)] = 7210,
  [SMALL_STATE(265)] = 7217,
  [SMALL_STATE(266)] = 7224,
  [SMALL_STATE(267)] = 7231,
  [SMALL_STATE(268)] = 7238,
  [SMALL_STATE(269)] = 7245,
  [SMALL_STATE(270)] = 7252,
  [SMALL_STATE(271)] = 7259,
  [SMALL_STATE(272)] = 7266,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(172),
  [9] = {.count = 1, .reusable = true}, SHIFT(182),
  [11] = {.count = 1, .reusable = true}, SHIFT(134),
  [13] = {.count = 1, .reusable = true}, SHIFT(186),
  [15] = {.count = 1, .reusable = true}, SHIFT(167),
  [17] = {.count = 1, .reusable = true}, SHIFT(201),
  [19] = {.count = 1, .reusable = true}, SHIFT(202),
  [21] = {.count = 1, .reusable = true}, SHIFT(246),
  [23] = {.count = 1, .reusable = false}, SHIFT(240),
  [25] = {.count = 1, .reusable = false}, SHIFT(36),
  [27] = {.count = 1, .reusable = true}, SHIFT(238),
  [29] = {.count = 1, .reusable = true}, SHIFT(169),
  [31] = {.count = 1, .reusable = true}, SHIFT(271),
  [33] = {.count = 1, .reusable = false}, SHIFT(20),
  [35] = {.count = 1, .reusable = false}, SHIFT(242),
  [37] = {.count = 1, .reusable = false}, SHIFT(21),
  [39] = {.count = 1, .reusable = false}, SHIFT(245),
  [41] = {.count = 1, .reusable = false}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, SHIFT(244),
  [45] = {.count = 1, .reusable = false}, SHIFT(49),
  [47] = {.count = 1, .reusable = false}, SHIFT(243),
  [49] = {.count = 1, .reusable = false}, SHIFT(154),
  [51] = {.count = 1, .reusable = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true}, SHIFT(5),
  [57] = {.count = 1, .reusable = true}, SHIFT(8),
  [59] = {.count = 1, .reusable = true}, SHIFT(204),
  [61] = {.count = 1, .reusable = false}, SHIFT(39),
  [63] = {.count = 1, .reusable = true}, SHIFT(39),
  [65] = {.count = 1, .reusable = true}, SHIFT(49),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [98] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [110] = {.count = 1, .reusable = true}, SHIFT(27),
  [112] = {.count = 1, .reusable = true}, SHIFT(38),
  [114] = {.count = 1, .reusable = true}, SHIFT(44),
  [116] = {.count = 1, .reusable = true}, SHIFT(42),
  [118] = {.count = 1, .reusable = true}, SHIFT(51),
  [120] = {.count = 1, .reusable = true}, SHIFT(22),
  [122] = {.count = 1, .reusable = true}, SHIFT(141),
  [124] = {.count = 1, .reusable = true}, SHIFT(193),
  [126] = {.count = 1, .reusable = true}, SHIFT(187),
  [128] = {.count = 1, .reusable = true}, SHIFT(191),
  [130] = {.count = 1, .reusable = true}, SHIFT(208),
  [132] = {.count = 1, .reusable = true}, SHIFT(72),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [136] = {.count = 1, .reusable = false}, SHIFT(34),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [140] = {.count = 1, .reusable = true}, SHIFT(94),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(172),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(141),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(193),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(167),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(187),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(191),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(208),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(240),
  [168] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(36),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(33),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [184] = {.count = 1, .reusable = false}, SHIFT(33),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [212] = {.count = 1, .reusable = true}, SHIFT(12),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [232] = {.count = 1, .reusable = true}, SHIFT(180),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(16),
  [238] = {.count = 1, .reusable = false}, SHIFT(16),
  [240] = {.count = 1, .reusable = true}, SHIFT(17),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 7),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 7),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 5),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 5),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(161),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 4),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 4),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 6),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 6),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [282] = {.count = 1, .reusable = false}, SHIFT(203),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 3),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 3),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 4),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 4),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [300] = {.count = 1, .reusable = true}, SHIFT(143),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [308] = {.count = 1, .reusable = true}, SHIFT(157),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [334] = {.count = 1, .reusable = true}, SHIFT(200),
  [336] = {.count = 1, .reusable = true}, SHIFT(131),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [340] = {.count = 1, .reusable = true}, SHIFT(147),
  [342] = {.count = 1, .reusable = true}, SHIFT(175),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [360] = {.count = 1, .reusable = false}, SHIFT(194),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [364] = {.count = 1, .reusable = false}, SHIFT(102),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [382] = {.count = 1, .reusable = false}, SHIFT(104),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [386] = {.count = 1, .reusable = true}, SHIFT(153),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_io_macro, 4),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_io_macro, 4),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [418] = {.count = 1, .reusable = true}, SHIFT(103),
  [420] = {.count = 1, .reusable = true}, SHIFT(19),
  [422] = {.count = 1, .reusable = false}, SHIFT(19),
  [424] = {.count = 1, .reusable = true}, SHIFT(171),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 8),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 8),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [446] = {.count = 1, .reusable = false}, SHIFT(196),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [454] = {.count = 1, .reusable = true}, SHIFT(190),
  [456] = {.count = 1, .reusable = true}, SHIFT(130),
  [458] = {.count = 1, .reusable = true}, SHIFT(163),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [462] = {.count = 1, .reusable = true}, SHIFT(170),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [466] = {.count = 1, .reusable = true}, SHIFT(15),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [472] = {.count = 1, .reusable = true}, SHIFT(25),
  [474] = {.count = 1, .reusable = true}, SHIFT(178),
  [476] = {.count = 1, .reusable = true}, SHIFT(140),
  [478] = {.count = 1, .reusable = true}, SHIFT(156),
  [480] = {.count = 1, .reusable = true}, SHIFT(144),
  [482] = {.count = 1, .reusable = false}, SHIFT(59),
  [484] = {.count = 1, .reusable = true}, SHIFT(59),
  [486] = {.count = 1, .reusable = false}, SHIFT(37),
  [488] = {.count = 1, .reusable = true}, SHIFT(37),
  [490] = {.count = 1, .reusable = false}, SHIFT(223),
  [492] = {.count = 1, .reusable = true}, SHIFT(223),
  [494] = {.count = 1, .reusable = true}, SHIFT(3),
  [496] = {.count = 1, .reusable = true}, SHIFT(36),
  [498] = {.count = 1, .reusable = true}, SHIFT(60),
  [500] = {.count = 1, .reusable = true}, SHIFT(61),
  [502] = {.count = 1, .reusable = true}, SHIFT(2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [506] = {.count = 1, .reusable = true}, SHIFT(86),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [512] = {.count = 1, .reusable = true}, SHIFT(7),
  [514] = {.count = 1, .reusable = true}, SHIFT(87),
  [516] = {.count = 1, .reusable = true}, SHIFT(239),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [520] = {.count = 1, .reusable = true}, SHIFT(29),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [530] = {.count = 1, .reusable = true}, SHIFT(64),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [536] = {.count = 1, .reusable = true}, SHIFT(197),
  [538] = {.count = 1, .reusable = false}, SHIFT(78),
  [540] = {.count = 1, .reusable = true}, SHIFT(78),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(74),
  [550] = {.count = 1, .reusable = true}, SHIFT(159),
  [552] = {.count = 1, .reusable = true}, SHIFT(30),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [558] = {.count = 1, .reusable = true}, SHIFT(6),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [564] = {.count = 1, .reusable = true}, SHIFT(92),
  [566] = {.count = 1, .reusable = true}, SHIFT(40),
  [568] = {.count = 1, .reusable = true}, SHIFT(26),
  [570] = {.count = 1, .reusable = true}, SHIFT(11),
  [572] = {.count = 1, .reusable = true}, SHIFT(152),
  [574] = {.count = 1, .reusable = true}, SHIFT(4),
  [576] = {.count = 1, .reusable = true}, SHIFT(43),
  [578] = {.count = 1, .reusable = true}, SHIFT(185),
  [580] = {.count = 1, .reusable = true}, SHIFT(53),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [584] = {.count = 1, .reusable = true}, SHIFT(56),
  [586] = {.count = 1, .reusable = true}, SHIFT(173),
  [588] = {.count = 1, .reusable = true}, SHIFT(93),
  [590] = {.count = 1, .reusable = true}, SHIFT(199),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [594] = {.count = 1, .reusable = true}, SHIFT(82),
  [596] = {.count = 1, .reusable = true}, SHIFT(184),
  [598] = {.count = 1, .reusable = true}, SHIFT(252),
  [600] = {.count = 1, .reusable = true}, SHIFT(192),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [608] = {.count = 1, .reusable = true}, SHIFT(150),
  [610] = {.count = 1, .reusable = true}, SHIFT(198),
  [612] = {.count = 1, .reusable = true}, SHIFT(45),
  [614] = {.count = 1, .reusable = true}, SHIFT(32),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [618] = {.count = 1, .reusable = true}, SHIFT(149),
  [620] = {.count = 1, .reusable = true}, SHIFT(65),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [628] = {.count = 1, .reusable = true}, SHIFT(54),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [632] = {.count = 1, .reusable = true}, SHIFT(256),
  [634] = {.count = 1, .reusable = true}, SHIFT(165),
  [636] = {.count = 1, .reusable = true}, SHIFT(181),
  [638] = {.count = 1, .reusable = true}, SHIFT(13),
  [640] = {.count = 1, .reusable = true}, SHIFT(18),
  [642] = {.count = 1, .reusable = true}, SHIFT(135),
  [644] = {.count = 1, .reusable = true}, SHIFT(23),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_functor_built_in, 1),
  [648] = {.count = 1, .reusable = true}, SHIFT(97),
  [650] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [652] = {.count = 1, .reusable = false}, SHIFT(268),
  [654] = {.count = 1, .reusable = true}, SHIFT(100),
  [656] = {.count = 1, .reusable = true}, SHIFT(70),
  [658] = {.count = 1, .reusable = true}, SHIFT(137),
  [660] = {.count = 1, .reusable = true}, SHIFT(166),
  [662] = {.count = 1, .reusable = true}, SHIFT(247),
  [664] = {.count = 1, .reusable = true}, SHIFT(251),
  [666] = {.count = 1, .reusable = false}, SHIFT(248),
  [668] = {.count = 1, .reusable = true}, SHIFT(132),
  [670] = {.count = 1, .reusable = true}, SHIFT(168),
  [672] = {.count = 1, .reusable = true}, SHIFT(148),
  [674] = {.count = 1, .reusable = true}, SHIFT(177),
  [676] = {.count = 1, .reusable = true}, SHIFT(266),
  [678] = {.count = 1, .reusable = true}, SHIFT(164),
  [680] = {.count = 1, .reusable = true}, SHIFT(174),
  [682] = {.count = 1, .reusable = true}, SHIFT(133),
  [684] = {.count = 1, .reusable = true}, SHIFT(139),
  [686] = {.count = 1, .reusable = true}, SHIFT(108),
  [688] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [690] = {.count = 1, .reusable = true}, SHIFT(176),
  [692] = {.count = 1, .reusable = false}, SHIFT(105),
  [694] = {.count = 1, .reusable = true}, SHIFT(160),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_souffle(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
