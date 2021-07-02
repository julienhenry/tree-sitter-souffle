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
#define STATE_COUNT 279
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
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
  sym_BTREE_DELETE_QUALIFIER = 39,
  sym_LEQ_RULE = 40,
  sym_MIN = 41,
  sym_MAX = 42,
  sym_AS = 43,
  sym_NIL = 44,
  sym_UNDERSCORE = 45,
  sym_COUNT = 46,
  sym_SUM = 47,
  sym_TRUE = 48,
  sym_FALSE = 49,
  sym_TOSTRING = 50,
  sym_TONUMBER = 51,
  sym_TOFLOAT = 52,
  sym_TOUNSIGNED = 53,
  sym_PLAN = 54,
  sym_PIPE = 55,
  sym_LBRACKET = 56,
  sym_RBRACKET = 57,
  sym_DOLLAR = 58,
  sym_PLUS = 59,
  sym_MINUS = 60,
  sym_LPAREN = 61,
  sym_RPAREN = 62,
  sym_COMMA = 63,
  sym_COLON = 64,
  sym_SEMICOLON = 65,
  sym_DOT = 66,
  sym_SUBTYPE = 67,
  sym_LE = 68,
  sym_GE = 69,
  sym_NE = 70,
  sym_EQUALS = 71,
  sym_EXCLAMATION = 72,
  sym_STAR = 73,
  sym_AT = 74,
  sym_SLASH = 75,
  sym_CARET = 76,
  sym_PERCENT = 77,
  sym_LBRACE = 78,
  sym_RBRACE = 79,
  sym_LT = 80,
  sym_GT = 81,
  sym_IF = 82,
  sym_INPUT = 83,
  sym_OUTPUT = 84,
  sym_CPP_VAR = 85,
  aux_sym_IDENT_token1 = 86,
  aux_sym_IDENT_token2 = 87,
  aux_sym_NUMBER_token1 = 88,
  aux_sym_NUMBER_token2 = 89,
  aux_sym_NUMBER_token3 = 90,
  sym_FLOAT = 91,
  sym_STRING = 92,
  sym_COMMENT = 93,
  anon_sym_POUNDinclude = 94,
  anon_sym_DQUOTE = 95,
  anon_sym_POUNDline = 96,
  anon_sym_POUNDdefine = 97,
  aux_sym_define_token1 = 98,
  sym_filename = 99,
  anon_sym_stateful = 100,
  sym_source_file = 101,
  sym_io_macro = 102,
  sym_IDENT = 103,
  sym_NUMBER = 104,
  sym_unit = 105,
  sym_include = 106,
  sym_line = 107,
  sym_define = 108,
  sym_identifier = 109,
  sym_type = 110,
  sym_non_empty_sum_branch_list = 111,
  sym_non_empty_record_type_list = 112,
  sym_union_type_list = 113,
  sym_sum_branch = 114,
  sym_relation_decl = 115,
  sym_relation_list = 116,
  sym_non_empty_attributes = 117,
  sym_relation_tags = 118,
  sym_fact = 119,
  sym_rule = 120,
  sym_rule_def = 121,
  sym_head = 122,
  sym_body = 123,
  sym_disjunction = 124,
  sym_conjunction = 125,
  sym_exec_plan = 126,
  sym_exec_plan_list = 127,
  sym_exec_order_list = 128,
  sym_term = 129,
  sym_atom = 130,
  sym_constraint = 131,
  sym_non_empty_arg_list = 132,
  sym_arg = 133,
  sym_functor_built_in = 134,
  sym_component = 135,
  sym_component_head = 136,
  sym_comp_type = 137,
  sym_type_params = 138,
  sym_type_param_list = 139,
  sym_component_body = 140,
  sym_comp_init = 141,
  sym_functor_decl = 142,
  sym_pragma = 143,
  sym_io_head = 144,
  sym_io_directive_list = 145,
  sym_io_relation_list = 146,
  sym_non_empty_key_value_pairs = 147,
  sym_kvp_value = 148,
  aux_sym_source_file_repeat1 = 149,
  aux_sym_relation_tags_repeat1 = 150,
  aux_sym_component_repeat1 = 151,
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
  [sym_BTREE_DELETE_QUALIFIER] = "BTREE_DELETE_QUALIFIER",
  [sym_LEQ_RULE] = "LEQ_RULE",
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
  [sym_BTREE_DELETE_QUALIFIER] = sym_BTREE_DELETE_QUALIFIER,
  [sym_LEQ_RULE] = sym_LEQ_RULE,
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
  [sym_BTREE_DELETE_QUALIFIER] = {
    .visible = true,
    .named = true,
  },
  [sym_LEQ_RULE] = {
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
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(210);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '0') ADVANCE(387);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '^') ADVANCE(214);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(387);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '^') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '^') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '^') ADVANCE(214);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(387);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(394);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(398);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(204);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'q') ADVANCE(173);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 114:
      if (lookahead == 'z') ADVANCE(42);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 119:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(398);
      if (lookahead == '\r') ADVANCE(400);
      END_STATE();
    case 120:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(389);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 121:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ',') ADVANCE(196);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 122:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'I') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_BTREE_DELETE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_LEQ_RULE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_AT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(398);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(204);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_INPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_CPP_VAR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'N') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'P') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'U') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 'x') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'q') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'U') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'U') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'c') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'm') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'p') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'x') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'z') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(418);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(119);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(412);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(396);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(418);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\r') ADVANCE(400);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '/') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(12);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(414);
      if (lookahead == '/') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(396);
      if (lookahead == '\r') ADVANCE(402);
      if (lookahead == '"') ADVANCE(398);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 120},
  [11] = {.lex_state = 120},
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
  [22] = {.lex_state = 124},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 124},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 120},
  [32] = {.lex_state = 120},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 120},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 121},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 120},
  [54] = {.lex_state = 120},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 120},
  [57] = {.lex_state = 121},
  [58] = {.lex_state = 121},
  [59] = {.lex_state = 120},
  [60] = {.lex_state = 120},
  [61] = {.lex_state = 120},
  [62] = {.lex_state = 120},
  [63] = {.lex_state = 120},
  [64] = {.lex_state = 120},
  [65] = {.lex_state = 121},
  [66] = {.lex_state = 121},
  [67] = {.lex_state = 120},
  [68] = {.lex_state = 120},
  [69] = {.lex_state = 120},
  [70] = {.lex_state = 121},
  [71] = {.lex_state = 120},
  [72] = {.lex_state = 120},
  [73] = {.lex_state = 120},
  [74] = {.lex_state = 121},
  [75] = {.lex_state = 120},
  [76] = {.lex_state = 120},
  [77] = {.lex_state = 122},
  [78] = {.lex_state = 122},
  [79] = {.lex_state = 120},
  [80] = {.lex_state = 120},
  [81] = {.lex_state = 122},
  [82] = {.lex_state = 120},
  [83] = {.lex_state = 121},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 120},
  [86] = {.lex_state = 120},
  [87] = {.lex_state = 120},
  [88] = {.lex_state = 120},
  [89] = {.lex_state = 120},
  [90] = {.lex_state = 120},
  [91] = {.lex_state = 122},
  [92] = {.lex_state = 120},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 120},
  [95] = {.lex_state = 122},
  [96] = {.lex_state = 120},
  [97] = {.lex_state = 120},
  [98] = {.lex_state = 123},
  [99] = {.lex_state = 120},
  [100] = {.lex_state = 120},
  [101] = {.lex_state = 120},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 120},
  [104] = {.lex_state = 120},
  [105] = {.lex_state = 120},
  [106] = {.lex_state = 120},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 120},
  [109] = {.lex_state = 120},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 120},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 120},
  [120] = {.lex_state = 123},
  [121] = {.lex_state = 120},
  [122] = {.lex_state = 120},
  [123] = {.lex_state = 120},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 120},
  [143] = {.lex_state = 120},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 120},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 120},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 120},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 120},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 120},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 120},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 120},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 0},
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
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 120},
  [244] = {.lex_state = 120},
  [245] = {.lex_state = 416},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 120},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 120},
  [252] = {.lex_state = 120},
  [253] = {.lex_state = 120},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 411},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 120},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 120},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 120},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 120},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 416},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
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
    [sym_BTREE_DELETE_QUALIFIER] = ACTIONS(1),
    [sym_LEQ_RULE] = ACTIONS(1),
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
    [sym_source_file] = STATE(254),
    [sym_io_macro] = STATE(108),
    [sym_IDENT] = STATE(137),
    [sym_unit] = STATE(11),
    [sym_include] = STATE(108),
    [sym_line] = STATE(108),
    [sym_define] = STATE(108),
    [sym_identifier] = STATE(234),
    [sym_type] = STATE(108),
    [sym_relation_decl] = STATE(108),
    [sym_fact] = STATE(108),
    [sym_rule] = STATE(96),
    [sym_rule_def] = STATE(69),
    [sym_head] = STATE(235),
    [sym_atom] = STATE(203),
    [sym_component] = STATE(108),
    [sym_component_head] = STATE(199),
    [sym_comp_init] = STATE(108),
    [sym_functor_decl] = STATE(108),
    [sym_pragma] = STATE(108),
    [sym_io_head] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    [sym_LEQ_RULE] = ACTIONS(23),
    [sym_INPUT] = ACTIONS(25),
    [sym_OUTPUT] = ACTIONS(25),
    [sym_CPP_VAR] = ACTIONS(25),
    [aux_sym_IDENT_token1] = ACTIONS(27),
    [aux_sym_IDENT_token2] = ACTIONS(27),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(29),
    [anon_sym_POUNDline] = ACTIONS(31),
    [anon_sym_POUNDdefine] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(152), 1,
      sym_term,
    STATE(153), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_disjunction,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    STATE(278), 1,
      sym_body,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
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
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(152), 1,
      sym_term,
    STATE(153), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_disjunction,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    STATE(268), 1,
      sym_body,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
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
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(152), 1,
      sym_term,
    STATE(153), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_disjunction,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    STATE(264), 1,
      sym_body,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [318] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(152), 1,
      sym_term,
    STATE(153), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_disjunction,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    STATE(265), 1,
      sym_body,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [424] = 28,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(107), 1,
      sym_arg,
    STATE(152), 1,
      sym_term,
    STATE(153), 1,
      sym_conjunction,
    STATE(226), 1,
      sym_disjunction,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [527] = 27,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(148), 1,
      sym_conjunction,
    STATE(152), 1,
      sym_term,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [627] = 26,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(149), 1,
      sym_term,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [724] = 26,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(57), 1,
      sym_LPAREN,
    ACTIONS(59), 1,
      sym_EXCLAMATION,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(46), 1,
      sym_NUMBER,
    STATE(93), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_arg,
    STATE(150), 1,
      sym_term,
    STATE(234), 1,
      sym_identifier,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(51), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(151), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [821] = 25,
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
    ACTIONS(95), 1,
      sym_LEQ_RULE,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(107), 1,
      anon_sym_POUNDline,
    ACTIONS(110), 1,
      anon_sym_POUNDdefine,
    STATE(69), 1,
      sym_rule_def,
    STATE(96), 1,
      sym_rule,
    STATE(137), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(203), 1,
      sym_atom,
    STATE(234), 1,
      sym_identifier,
    STATE(235), 1,
      sym_head,
    ACTIONS(89), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(101), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(77), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(98), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(108), 12,
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
  [915] = 25,
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
    ACTIONS(23), 1,
      sym_LEQ_RULE,
    ACTIONS(29), 1,
      anon_sym_POUNDinclude,
    ACTIONS(31), 1,
      anon_sym_POUNDline,
    ACTIONS(33), 1,
      anon_sym_POUNDdefine,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_rule_def,
    STATE(96), 1,
      sym_rule,
    STATE(137), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(203), 1,
      sym_atom,
    STATE(234), 1,
      sym_identifier,
    STATE(235), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(25), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(108), 12,
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
  [1009] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    ACTIONS(117), 1,
      sym_RPAREN,
    STATE(124), 1,
      sym_arg,
    STATE(217), 1,
      sym_non_empty_arg_list,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1089] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    ACTIONS(119), 1,
      sym_RPAREN,
    STATE(124), 1,
      sym_arg,
    STATE(238), 1,
      sym_non_empty_arg_list,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1169] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    ACTIONS(121), 1,
      sym_RBRACKET,
    STATE(124), 1,
      sym_arg,
    STATE(218), 1,
      sym_non_empty_arg_list,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1249] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    ACTIONS(123), 1,
      sym_RPAREN,
    STATE(124), 1,
      sym_arg,
    STATE(236), 1,
      sym_non_empty_arg_list,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1329] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(124), 1,
      sym_arg,
    STATE(231), 1,
      sym_non_empty_arg_list,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1406] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(118), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1480] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1554] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(125), 1,
      sym_LPAREN,
    STATE(129), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1628] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(51), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1702] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(129), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1776] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(34), 1,
      aux_sym_relation_tags_repeat1,
    STATE(88), 1,
      sym_relation_tags,
    ACTIONS(131), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(129), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(127), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [1824] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(47), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1898] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(125), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1972] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(126), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2046] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(130), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2120] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(131), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2194] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(34), 1,
      aux_sym_relation_tags_repeat1,
    STATE(80), 1,
      sym_relation_tags,
    ACTIONS(135), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(129), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(133), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2242] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(52), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2316] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(45), 1,
      sym_AS,
    ACTIONS(49), 1,
      sym_COUNT,
    ACTIONS(53), 1,
      sym_LBRACKET,
    ACTIONS(55), 1,
      sym_DOLLAR,
    ACTIONS(61), 1,
      sym_AT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(115), 1,
      sym_LPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(256), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(35), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(43), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(47), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(67), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(46), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(41), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2390] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      sym_LEQ_RULE,
    ACTIONS(139), 1,
      sym_TYPE,
    ACTIONS(141), 1,
      sym_INSTANTIATE,
    ACTIONS(145), 1,
      sym_OVERRIDE,
    ACTIONS(147), 1,
      sym_RBRACE,
    STATE(69), 1,
      sym_rule_def,
    STATE(117), 1,
      sym_rule,
    STATE(137), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(203), 1,
      sym_atom,
    STATE(234), 1,
      sym_identifier,
    STATE(235), 1,
      sym_head,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(143), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(35), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(25), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(137), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(123), 7,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2467] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      sym_LEQ_RULE,
    ACTIONS(139), 1,
      sym_TYPE,
    ACTIONS(141), 1,
      sym_INSTANTIATE,
    ACTIONS(145), 1,
      sym_OVERRIDE,
    ACTIONS(149), 1,
      sym_RBRACE,
    STATE(69), 1,
      sym_rule_def,
    STATE(117), 1,
      sym_rule,
    STATE(137), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(203), 1,
      sym_atom,
    STATE(234), 1,
      sym_identifier,
    STATE(235), 1,
      sym_head,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(143), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(31), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(25), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(137), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(123), 7,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2544] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(33), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(156), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(153), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(151), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2589] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(33), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(162), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(160), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(158), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2634] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(164), 1,
      sym_DECL,
    ACTIONS(170), 1,
      sym_TYPE,
    ACTIONS(173), 1,
      sym_COMPONENT,
    ACTIONS(176), 1,
      sym_INSTANTIATE,
    ACTIONS(182), 1,
      sym_OVERRIDE,
    ACTIONS(185), 1,
      sym_LEQ_RULE,
    ACTIONS(188), 1,
      sym_RBRACE,
    STATE(69), 1,
      sym_rule_def,
    STATE(117), 1,
      sym_rule,
    STATE(137), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(203), 1,
      sym_atom,
    STATE(234), 1,
      sym_identifier,
    STATE(235), 1,
      sym_head,
    ACTIONS(179), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(193), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    STATE(35), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(167), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(190), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(123), 7,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2711] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(40), 1,
      sym_IDENT,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(196), 11,
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
    ACTIONS(198), 16,
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
  [2753] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(202), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(200), 22,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_SUBTYPE,
      sym_EQUALS,
      sym_LBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2790] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(202), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(200), 25,
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
  [2827] = 3,
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
  [2863] = 4,
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
  [2901] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(216), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
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
  [2937] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_LT,
    STATE(54), 1,
      sym_type_params,
    ACTIONS(222), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(218), 21,
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
      sym_LEQ_RULE,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(226), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(224), 24,
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
  [3013] = 3,
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
  [3048] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(228), 23,
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
  [3083] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(196), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(198), 23,
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
  [3118] = 3,
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
  [3153] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(232), 23,
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
  [3188] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(238), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(236), 23,
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
  [3223] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(240), 23,
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
  [3258] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(242), 2,
      sym_LT,
      sym_GT,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(240), 11,
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
    ACTIONS(244), 11,
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
  [3299] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(240), 23,
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
  [3334] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(250), 21,
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
      sym_LEQ_RULE,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3368] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 21,
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
      sym_LEQ_RULE,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(202), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(200), 18,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_SUBTYPE,
      sym_EQUALS,
      sym_LBRACE,
      sym_RBRACE,
  [3435] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 1,
      sym_COMMA,
    ACTIONS(262), 5,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(266), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(264), 19,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3503] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(270), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(268), 19,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3536] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(274), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(272), 20,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3569] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(276), 20,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3602] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(280), 20,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(286), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(284), 20,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3668] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(290), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(288), 19,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3700] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 1,
      sym_PIPE,
    ACTIONS(296), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(292), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3734] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 1,
      sym_DOT,
    ACTIONS(302), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(298), 18,
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
      sym_LEQ_RULE,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3768] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 1,
      sym_DOT,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      sym_LPAREN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3802] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(310), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(308), 19,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3834] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(314), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(312), 19,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3866] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(318), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(316), 19,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3898] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LBRACE,
    ACTIONS(270), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(268), 17,
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
      sym_LEQ_RULE,
      sym_PIPE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(322), 19,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3964] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(326), 19,
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
      sym_LEQ_RULE,
      sym_PLAN,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3996] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      sym_LPAREN,
    ACTIONS(334), 1,
      sym_COMMA,
    ACTIONS(336), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(330), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4031] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 1,
      sym_DOT,
    ACTIONS(340), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(338), 17,
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
      sym_LEQ_RULE,
      sym_PIPE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4064] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(344), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(342), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4095] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(346), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(266), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(264), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(270), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(268), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(352), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(350), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4219] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(354), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4250] = 5,
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
    ACTIONS(358), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4285] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(368), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(366), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4316] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 1,
      sym_DOT,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      sym_PIPE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4349] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(376), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(374), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(380), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(378), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4411] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(384), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(382), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4442] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(388), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(386), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4473] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(135), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(133), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4504] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(392), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(390), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4535] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(396), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(394), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(202), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(200), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4597] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(400), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(398), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4628] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(268), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(196), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(198), 17,
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
  [4661] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(404), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(402), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4692] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      sym_DOT,
    ACTIONS(410), 1,
      anon_sym_stateful,
    ACTIONS(408), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(406), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4727] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(414), 1,
      sym_PLAN,
    STATE(63), 1,
      sym_exec_plan,
    ACTIONS(416), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(412), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4762] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(420), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(418), 18,
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
      sym_LEQ_RULE,
      sym_RBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4793] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(422), 1,
      sym_SUBTYPE,
    ACTIONS(424), 1,
      sym_EQUALS,
    ACTIONS(420), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(418), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4828] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(430), 1,
      sym_STRING,
    ACTIONS(428), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(426), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4860] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(432), 1,
      sym_PIPE,
    ACTIONS(400), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(398), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(436), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(434), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(266), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(264), 15,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [4950] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(440), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(438), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(408), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(406), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5008] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(444), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(442), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5037] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(448), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(446), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5066] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(452), 2,
      sym_LT,
      sym_GT,
    ACTIONS(450), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(244), 11,
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
  [5103] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(416), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(412), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5132] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(456), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(454), 16,
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
      sym_LEQ_RULE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5161] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(270), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(268), 15,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [5190] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(458), 1,
      sym_DOT,
    ACTIONS(302), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(298), 14,
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
      sym_LEQ_RULE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [5220] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(458), 1,
      sym_DOT,
    ACTIONS(306), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(304), 14,
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
      sym_LEQ_RULE,
      sym_LPAREN,
      sym_COMMA,
      sym_RBRACE,
  [5250] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LBRACE,
    ACTIONS(270), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(268), 13,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_RBRACE,
  [5280] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(452), 2,
      sym_LT,
      sym_GT,
    ACTIONS(450), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(244), 11,
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
  [5314] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(458), 1,
      sym_DOT,
    ACTIONS(340), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(338), 13,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_RBRACE,
  [5343] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(458), 1,
      sym_DOT,
    ACTIONS(372), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(370), 13,
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
      sym_LEQ_RULE,
      sym_PIPE,
      sym_RBRACE,
  [5372] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(414), 1,
      sym_PLAN,
    STATE(63), 1,
      sym_exec_plan,
    ACTIONS(462), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(460), 12,
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
      sym_LEQ_RULE,
      sym_RBRACE,
  [5403] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(464), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(244), 11,
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
  [5434] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      sym_LPAREN,
    ACTIONS(466), 1,
      sym_COMMA,
    ACTIONS(336), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(330), 12,
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
      sym_LEQ_RULE,
      sym_RBRACE,
  [5465] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      sym_SUBTYPE,
    ACTIONS(470), 1,
      sym_EQUALS,
    ACTIONS(420), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(418), 12,
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
      sym_LEQ_RULE,
      sym_RBRACE,
  [5496] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(472), 1,
      sym_PIPE,
    ACTIONS(400), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(398), 12,
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
      sym_LEQ_RULE,
      sym_RBRACE,
  [5524] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(476), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(474), 12,
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
      sym_LEQ_RULE,
      sym_RBRACE,
  [5549] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(462), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(460), 12,
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
      sym_LEQ_RULE,
      sym_RBRACE,
  [5574] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(478), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(244), 11,
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
  [5603] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(480), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(244), 11,
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
  [5632] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(482), 1,
      sym_COMMA,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(244), 11,
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
  [5662] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RPAREN,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(244), 11,
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
  [5689] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(484), 1,
      sym_COMMA,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(244), 11,
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
  [5716] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(486), 1,
      sym_COLON,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(244), 11,
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
  [5743] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(488), 1,
      sym_COMMA,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(244), 11,
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
  [5770] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_CARET,
    ACTIONS(490), 1,
      sym_RPAREN,
    ACTIONS(246), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(244), 11,
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
  [5797] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(492), 1,
      sym_LBRACKET,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(64), 1,
      sym_sum_branch,
    STATE(92), 1,
      sym_non_empty_sum_branch_list,
    STATE(113), 1,
      sym_IDENT,
    STATE(116), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_type_list,
  [5825] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(492), 1,
      sym_LBRACKET,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(64), 1,
      sym_sum_branch,
    STATE(70), 1,
      sym_IDENT,
    STATE(83), 1,
      sym_identifier,
    STATE(92), 1,
      sym_non_empty_sum_branch_list,
    STATE(100), 1,
      sym_union_type_list,
  [5853] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(504), 1,
      sym_STRING,
    STATE(212), 1,
      sym_kvp_value,
    STATE(227), 1,
      sym_IDENT,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(502), 2,
      sym_TRUE,
      sym_FALSE,
  [5874] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(504), 1,
      sym_STRING,
    STATE(227), 1,
      sym_IDENT,
    STATE(240), 1,
      sym_kvp_value,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(502), 2,
      sym_TRUE,
      sym_FALSE,
  [5895] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(225), 1,
      sym_atom,
    STATE(229), 1,
      sym_head,
    STATE(234), 1,
      sym_identifier,
  [5917] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(268), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [5929] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(508), 1,
      sym_LBRACE,
    STATE(50), 1,
      sym_atom,
    STATE(137), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_identifier,
  [5951] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(58), 1,
      sym_IDENT,
    STATE(65), 1,
      sym_identifier,
    STATE(73), 1,
      sym_io_relation_list,
    STATE(79), 1,
      sym_io_directive_list,
  [5973] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(510), 1,
      sym_LBRACE,
    STATE(45), 1,
      sym_atom,
    STATE(137), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_identifier,
  [5995] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6007] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(512), 1,
      sym_RPAREN,
    STATE(219), 1,
      sym_NUMBER,
    STATE(241), 1,
      sym_exec_order_list,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6027] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(514), 1,
      sym_RPAREN,
    STATE(219), 1,
      sym_NUMBER,
    STATE(220), 1,
      sym_exec_order_list,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6047] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(79), 1,
      sym_io_directive_list,
    STATE(110), 1,
      sym_IDENT,
    STATE(111), 1,
      sym_identifier,
    STATE(119), 1,
      sym_io_relation_list,
  [6069] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(516), 1,
      sym_RBRACKET,
    STATE(233), 1,
      sym_non_empty_record_type_list,
    STATE(253), 1,
      sym_IDENT,
  [6088] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(56), 1,
      sym_exec_plan_list,
    STATE(244), 1,
      sym_NUMBER,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6105] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6116] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      sym_COMMA,
    ACTIONS(520), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(524), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(526), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6151] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(528), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6162] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(530), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6173] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      sym_COMMA,
    ACTIONS(532), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6186] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(534), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6197] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(536), 1,
      sym_RPAREN,
    STATE(221), 1,
      sym_non_empty_key_value_pairs,
    STATE(272), 1,
      sym_IDENT,
  [6216] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6227] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(64), 1,
      sym_sum_branch,
    STATE(89), 1,
      sym_non_empty_sum_branch_list,
    STATE(249), 1,
      sym_IDENT,
  [6246] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(540), 1,
      sym_RBRACE,
    STATE(228), 1,
      sym_non_empty_attributes,
    STATE(266), 1,
      sym_IDENT,
  [6265] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(542), 1,
      sym_RPAREN,
    STATE(222), 1,
      sym_non_empty_attributes,
    STATE(266), 1,
      sym_IDENT,
  [6284] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    ACTIONS(544), 1,
      sym_RPAREN,
    STATE(224), 1,
      sym_non_empty_attributes,
    STATE(266), 1,
      sym_IDENT,
  [6303] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_atom,
    STATE(234), 1,
      sym_identifier,
  [6322] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(239), 1,
      sym_IDENT,
    STATE(242), 1,
      sym_relation_list,
  [6338] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(215), 1,
      sym_type_param_list,
    STATE(216), 1,
      sym_IDENT,
  [6354] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(42), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_comp_type,
  [6370] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(546), 1,
      aux_sym_IDENT_token1,
    ACTIONS(548), 1,
      aux_sym_IDENT_token2,
    STATE(78), 1,
      sym_IDENT,
    STATE(81), 1,
      sym_identifier,
  [6386] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(277), 1,
      sym_NUMBER,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6400] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(110), 1,
      sym_IDENT,
    STATE(115), 1,
      sym_identifier,
  [6416] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(197), 1,
      sym_identifier,
  [6432] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(181), 1,
      sym_identifier,
  [6448] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
  [6464] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(58), 1,
      sym_IDENT,
    STATE(74), 1,
      sym_identifier,
  [6480] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(42), 1,
      sym_IDENT,
    STATE(76), 1,
      sym_comp_type,
  [6496] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(546), 1,
      aux_sym_IDENT_token1,
    ACTIONS(548), 1,
      aux_sym_IDENT_token2,
    STATE(78), 1,
      sym_IDENT,
    STATE(95), 1,
      sym_identifier,
  [6512] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(58), 1,
      sym_IDENT,
    STATE(66), 1,
      sym_identifier,
  [6528] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(176), 1,
      sym_identifier,
  [6544] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(550), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [6556] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(110), 1,
      sym_IDENT,
    STATE(112), 1,
      sym_identifier,
  [6572] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(251), 1,
      sym_NUMBER,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6586] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(42), 1,
      sym_IDENT,
    STATE(188), 1,
      sym_comp_type,
  [6602] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(196), 1,
      sym_identifier,
  [6618] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(554), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [6630] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_IDENT,
    STATE(232), 1,
      sym_identifier,
  [6646] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(63), 1,
      aux_sym_NUMBER_token1,
    STATE(213), 1,
      sym_NUMBER,
    ACTIONS(65), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6660] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(42), 1,
      sym_IDENT,
    STATE(76), 1,
      sym_comp_type,
  [6676] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(273), 1,
      sym_IDENT,
  [6689] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(92), 1,
      sym_IDENT,
  [6702] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(546), 1,
      aux_sym_IDENT_token1,
    ACTIONS(548), 1,
      aux_sym_IDENT_token2,
    STATE(77), 1,
      sym_IDENT,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(556), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6724] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(122), 1,
      sym_IDENT,
  [6737] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_SEMICOLON,
    ACTIONS(560), 2,
      sym_DOT,
      sym_RBRACE,
  [6748] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(120), 1,
      sym_IDENT,
  [6761] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(97), 1,
      sym_IDENT,
  [6774] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(262), 1,
      sym_IDENT,
  [6787] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(92), 1,
      sym_IDENT,
  [6800] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(97), 1,
      sym_IDENT,
  [6813] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(562), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6824] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(564), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6835] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(252), 1,
      sym_IDENT,
  [6848] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_LBRACE,
    ACTIONS(566), 2,
      sym_COMMA,
      sym_COLON,
  [6859] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(214), 1,
      sym_IDENT,
  [6872] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 1,
      aux_sym_IDENT_token1,
    ACTIONS(496), 1,
      aux_sym_IDENT_token2,
    STATE(102), 1,
      sym_IDENT,
  [6885] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(276), 1,
      sym_IDENT,
  [6898] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 1,
      sym_DOT,
    ACTIONS(570), 2,
      sym_COMMA,
      sym_IF,
  [6909] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(57), 1,
      sym_IDENT,
  [6922] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(243), 1,
      sym_IDENT,
  [6935] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(223), 1,
      sym_IDENT,
  [6948] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 1,
      aux_sym_IDENT_token1,
    ACTIONS(500), 1,
      aux_sym_IDENT_token2,
    STATE(98), 1,
      sym_IDENT,
  [6961] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(269), 1,
      sym_IDENT,
  [6974] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(260), 1,
      sym_IDENT,
  [6987] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(574), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6996] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token1,
    ACTIONS(506), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
  [7009] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 2,
      sym_RPAREN,
      sym_COMMA,
  [7017] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 2,
      sym_RPAREN,
      sym_COMMA,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(580), 2,
      sym_COMMA,
      sym_GT,
  [7033] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(582), 1,
      sym_COMMA,
    ACTIONS(584), 1,
      sym_GT,
  [7043] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(586), 2,
      sym_COMMA,
      sym_GT,
  [7051] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(588), 1,
      sym_RPAREN,
    ACTIONS(590), 1,
      sym_COMMA,
  [7061] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(123), 1,
      sym_RBRACKET,
    ACTIONS(590), 1,
      sym_COMMA,
  [7071] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(592), 2,
      sym_RPAREN,
      sym_COMMA,
  [7079] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(594), 1,
      sym_RPAREN,
    ACTIONS(596), 1,
      sym_COMMA,
  [7089] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 1,
      sym_RPAREN,
    ACTIONS(600), 1,
      sym_COMMA,
  [7099] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 1,
      sym_RPAREN,
    ACTIONS(604), 1,
      sym_COMMA,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 2,
      sym_LPAREN,
      sym_COMMA,
  [7117] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(604), 1,
      sym_COMMA,
    ACTIONS(608), 1,
      sym_RPAREN,
  [7127] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(570), 2,
      sym_COMMA,
      sym_IF,
  [7135] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_SEMICOLON,
    ACTIONS(610), 1,
      sym_RPAREN,
  [7145] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(612), 2,
      sym_RPAREN,
      sym_COMMA,
  [7153] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(604), 1,
      sym_COMMA,
    ACTIONS(614), 1,
      sym_RBRACE,
  [7163] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(616), 1,
      sym_COMMA,
    ACTIONS(618), 1,
      sym_IF,
  [7173] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(620), 2,
      sym_COMMA,
      sym_IF,
  [7181] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 1,
      sym_COMMA,
    ACTIONS(622), 1,
      sym_RPAREN,
  [7191] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(622), 1,
      sym_RPAREN,
  [7201] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(624), 1,
      sym_RBRACKET,
    ACTIONS(626), 1,
      sym_COMMA,
  [7211] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(628), 1,
      sym_LPAREN,
  [7221] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(616), 1,
      sym_COMMA,
    ACTIONS(630), 1,
      sym_IF,
  [7231] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(117), 1,
      sym_RPAREN,
    ACTIONS(590), 1,
      sym_COMMA,
  [7241] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_DOT,
    ACTIONS(632), 1,
      sym_RPAREN,
  [7251] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 1,
      sym_COMMA,
    ACTIONS(634), 1,
      sym_RPAREN,
  [7261] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(636), 2,
      sym_LPAREN,
      sym_COMMA,
  [7269] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(638), 2,
      sym_RPAREN,
      sym_COMMA,
  [7277] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(596), 1,
      sym_COMMA,
    ACTIONS(640), 1,
      sym_RPAREN,
  [7287] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 1,
      sym_LPAREN,
    ACTIONS(644), 1,
      sym_COMMA,
  [7297] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(646), 1,
      sym_COLON,
  [7304] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(648), 1,
      sym_COLON,
  [7311] = 2,
    ACTIONS(650), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_filename,
  [7318] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(654), 1,
      sym_LPAREN,
  [7325] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(656), 1,
      sym_LPAREN,
  [7332] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(658), 1,
      sym_COLON,
  [7339] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LBRACE,
  [7346] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
  [7353] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 1,
      sym_COLON,
  [7360] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 1,
      sym_COLON,
  [7367] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(666), 1,
      sym_COLON,
  [7374] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
  [7381] = 2,
    ACTIONS(650), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      aux_sym_define_token1,
  [7388] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(672), 1,
      sym_LPAREN,
  [7395] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
  [7402] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(676), 1,
      sym_LPAREN,
  [7409] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(678), 1,
      sym_COLON,
  [7416] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(680), 1,
      sym_LPAREN,
  [7423] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(682), 1,
      sym_STRING,
  [7430] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(684), 1,
      sym_EQUALS,
  [7437] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(686), 1,
      sym_LPAREN,
  [7444] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(688), 1,
      sym_DOT,
  [7451] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(622), 1,
      sym_RBRACE,
  [7458] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(690), 1,
      sym_COLON,
  [7465] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(692), 1,
      sym_LPAREN,
  [7472] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(694), 1,
      sym_DOT,
  [7479] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(696), 1,
      sym_EQUALS,
  [7486] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(698), 1,
      sym_COLON,
  [7493] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
  [7500] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(702), 1,
      sym_EQUALS,
  [7507] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 1,
      sym_LPAREN,
  [7514] = 2,
    ACTIONS(650), 1,
      sym_COMMENT,
    ACTIONS(704), 1,
      sym_filename,
  [7521] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(706), 1,
      sym_LPAREN,
  [7528] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(708), 1,
      sym_EQUALS,
  [7535] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
  [7542] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(588), 1,
      sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 318,
  [SMALL_STATE(6)] = 424,
  [SMALL_STATE(7)] = 527,
  [SMALL_STATE(8)] = 627,
  [SMALL_STATE(9)] = 724,
  [SMALL_STATE(10)] = 821,
  [SMALL_STATE(11)] = 915,
  [SMALL_STATE(12)] = 1009,
  [SMALL_STATE(13)] = 1089,
  [SMALL_STATE(14)] = 1169,
  [SMALL_STATE(15)] = 1249,
  [SMALL_STATE(16)] = 1329,
  [SMALL_STATE(17)] = 1406,
  [SMALL_STATE(18)] = 1480,
  [SMALL_STATE(19)] = 1554,
  [SMALL_STATE(20)] = 1628,
  [SMALL_STATE(21)] = 1702,
  [SMALL_STATE(22)] = 1776,
  [SMALL_STATE(23)] = 1824,
  [SMALL_STATE(24)] = 1898,
  [SMALL_STATE(25)] = 1972,
  [SMALL_STATE(26)] = 2046,
  [SMALL_STATE(27)] = 2120,
  [SMALL_STATE(28)] = 2194,
  [SMALL_STATE(29)] = 2242,
  [SMALL_STATE(30)] = 2316,
  [SMALL_STATE(31)] = 2390,
  [SMALL_STATE(32)] = 2467,
  [SMALL_STATE(33)] = 2544,
  [SMALL_STATE(34)] = 2589,
  [SMALL_STATE(35)] = 2634,
  [SMALL_STATE(36)] = 2711,
  [SMALL_STATE(37)] = 2753,
  [SMALL_STATE(38)] = 2790,
  [SMALL_STATE(39)] = 2827,
  [SMALL_STATE(40)] = 2863,
  [SMALL_STATE(41)] = 2901,
  [SMALL_STATE(42)] = 2937,
  [SMALL_STATE(43)] = 2977,
  [SMALL_STATE(44)] = 3013,
  [SMALL_STATE(45)] = 3048,
  [SMALL_STATE(46)] = 3083,
  [SMALL_STATE(47)] = 3118,
  [SMALL_STATE(48)] = 3153,
  [SMALL_STATE(49)] = 3188,
  [SMALL_STATE(50)] = 3223,
  [SMALL_STATE(51)] = 3258,
  [SMALL_STATE(52)] = 3299,
  [SMALL_STATE(53)] = 3334,
  [SMALL_STATE(54)] = 3368,
  [SMALL_STATE(55)] = 3402,
  [SMALL_STATE(56)] = 3435,
  [SMALL_STATE(57)] = 3470,
  [SMALL_STATE(58)] = 3503,
  [SMALL_STATE(59)] = 3536,
  [SMALL_STATE(60)] = 3569,
  [SMALL_STATE(61)] = 3602,
  [SMALL_STATE(62)] = 3635,
  [SMALL_STATE(63)] = 3668,
  [SMALL_STATE(64)] = 3700,
  [SMALL_STATE(65)] = 3734,
  [SMALL_STATE(66)] = 3768,
  [SMALL_STATE(67)] = 3802,
  [SMALL_STATE(68)] = 3834,
  [SMALL_STATE(69)] = 3866,
  [SMALL_STATE(70)] = 3898,
  [SMALL_STATE(71)] = 3932,
  [SMALL_STATE(72)] = 3964,
  [SMALL_STATE(73)] = 3996,
  [SMALL_STATE(74)] = 4031,
  [SMALL_STATE(75)] = 4064,
  [SMALL_STATE(76)] = 4095,
  [SMALL_STATE(77)] = 4126,
  [SMALL_STATE(78)] = 4157,
  [SMALL_STATE(79)] = 4188,
  [SMALL_STATE(80)] = 4219,
  [SMALL_STATE(81)] = 4250,
  [SMALL_STATE(82)] = 4285,
  [SMALL_STATE(83)] = 4316,
  [SMALL_STATE(84)] = 4349,
  [SMALL_STATE(85)] = 4380,
  [SMALL_STATE(86)] = 4411,
  [SMALL_STATE(87)] = 4442,
  [SMALL_STATE(88)] = 4473,
  [SMALL_STATE(89)] = 4504,
  [SMALL_STATE(90)] = 4535,
  [SMALL_STATE(91)] = 4566,
  [SMALL_STATE(92)] = 4597,
  [SMALL_STATE(93)] = 4628,
  [SMALL_STATE(94)] = 4661,
  [SMALL_STATE(95)] = 4692,
  [SMALL_STATE(96)] = 4727,
  [SMALL_STATE(97)] = 4762,
  [SMALL_STATE(98)] = 4793,
  [SMALL_STATE(99)] = 4828,
  [SMALL_STATE(100)] = 4860,
  [SMALL_STATE(101)] = 4892,
  [SMALL_STATE(102)] = 4921,
  [SMALL_STATE(103)] = 4950,
  [SMALL_STATE(104)] = 4979,
  [SMALL_STATE(105)] = 5008,
  [SMALL_STATE(106)] = 5037,
  [SMALL_STATE(107)] = 5066,
  [SMALL_STATE(108)] = 5103,
  [SMALL_STATE(109)] = 5132,
  [SMALL_STATE(110)] = 5161,
  [SMALL_STATE(111)] = 5190,
  [SMALL_STATE(112)] = 5220,
  [SMALL_STATE(113)] = 5250,
  [SMALL_STATE(114)] = 5280,
  [SMALL_STATE(115)] = 5314,
  [SMALL_STATE(116)] = 5343,
  [SMALL_STATE(117)] = 5372,
  [SMALL_STATE(118)] = 5403,
  [SMALL_STATE(119)] = 5434,
  [SMALL_STATE(120)] = 5465,
  [SMALL_STATE(121)] = 5496,
  [SMALL_STATE(122)] = 5524,
  [SMALL_STATE(123)] = 5549,
  [SMALL_STATE(124)] = 5574,
  [SMALL_STATE(125)] = 5603,
  [SMALL_STATE(126)] = 5632,
  [SMALL_STATE(127)] = 5662,
  [SMALL_STATE(128)] = 5689,
  [SMALL_STATE(129)] = 5716,
  [SMALL_STATE(130)] = 5743,
  [SMALL_STATE(131)] = 5770,
  [SMALL_STATE(132)] = 5797,
  [SMALL_STATE(133)] = 5825,
  [SMALL_STATE(134)] = 5853,
  [SMALL_STATE(135)] = 5874,
  [SMALL_STATE(136)] = 5895,
  [SMALL_STATE(137)] = 5917,
  [SMALL_STATE(138)] = 5929,
  [SMALL_STATE(139)] = 5951,
  [SMALL_STATE(140)] = 5973,
  [SMALL_STATE(141)] = 5995,
  [SMALL_STATE(142)] = 6007,
  [SMALL_STATE(143)] = 6027,
  [SMALL_STATE(144)] = 6047,
  [SMALL_STATE(145)] = 6069,
  [SMALL_STATE(146)] = 6088,
  [SMALL_STATE(147)] = 6105,
  [SMALL_STATE(148)] = 6116,
  [SMALL_STATE(149)] = 6129,
  [SMALL_STATE(150)] = 6140,
  [SMALL_STATE(151)] = 6151,
  [SMALL_STATE(152)] = 6162,
  [SMALL_STATE(153)] = 6173,
  [SMALL_STATE(154)] = 6186,
  [SMALL_STATE(155)] = 6197,
  [SMALL_STATE(156)] = 6216,
  [SMALL_STATE(157)] = 6227,
  [SMALL_STATE(158)] = 6246,
  [SMALL_STATE(159)] = 6265,
  [SMALL_STATE(160)] = 6284,
  [SMALL_STATE(161)] = 6303,
  [SMALL_STATE(162)] = 6322,
  [SMALL_STATE(163)] = 6338,
  [SMALL_STATE(164)] = 6354,
  [SMALL_STATE(165)] = 6370,
  [SMALL_STATE(166)] = 6386,
  [SMALL_STATE(167)] = 6400,
  [SMALL_STATE(168)] = 6416,
  [SMALL_STATE(169)] = 6432,
  [SMALL_STATE(170)] = 6448,
  [SMALL_STATE(171)] = 6464,
  [SMALL_STATE(172)] = 6480,
  [SMALL_STATE(173)] = 6496,
  [SMALL_STATE(174)] = 6512,
  [SMALL_STATE(175)] = 6528,
  [SMALL_STATE(176)] = 6544,
  [SMALL_STATE(177)] = 6556,
  [SMALL_STATE(178)] = 6572,
  [SMALL_STATE(179)] = 6586,
  [SMALL_STATE(180)] = 6602,
  [SMALL_STATE(181)] = 6618,
  [SMALL_STATE(182)] = 6630,
  [SMALL_STATE(183)] = 6646,
  [SMALL_STATE(184)] = 6660,
  [SMALL_STATE(185)] = 6676,
  [SMALL_STATE(186)] = 6689,
  [SMALL_STATE(187)] = 6702,
  [SMALL_STATE(188)] = 6715,
  [SMALL_STATE(189)] = 6724,
  [SMALL_STATE(190)] = 6737,
  [SMALL_STATE(191)] = 6748,
  [SMALL_STATE(192)] = 6761,
  [SMALL_STATE(193)] = 6774,
  [SMALL_STATE(194)] = 6787,
  [SMALL_STATE(195)] = 6800,
  [SMALL_STATE(196)] = 6813,
  [SMALL_STATE(197)] = 6824,
  [SMALL_STATE(198)] = 6835,
  [SMALL_STATE(199)] = 6848,
  [SMALL_STATE(200)] = 6859,
  [SMALL_STATE(201)] = 6872,
  [SMALL_STATE(202)] = 6885,
  [SMALL_STATE(203)] = 6898,
  [SMALL_STATE(204)] = 6909,
  [SMALL_STATE(205)] = 6922,
  [SMALL_STATE(206)] = 6935,
  [SMALL_STATE(207)] = 6948,
  [SMALL_STATE(208)] = 6961,
  [SMALL_STATE(209)] = 6974,
  [SMALL_STATE(210)] = 6987,
  [SMALL_STATE(211)] = 6996,
  [SMALL_STATE(212)] = 7009,
  [SMALL_STATE(213)] = 7017,
  [SMALL_STATE(214)] = 7025,
  [SMALL_STATE(215)] = 7033,
  [SMALL_STATE(216)] = 7043,
  [SMALL_STATE(217)] = 7051,
  [SMALL_STATE(218)] = 7061,
  [SMALL_STATE(219)] = 7071,
  [SMALL_STATE(220)] = 7079,
  [SMALL_STATE(221)] = 7089,
  [SMALL_STATE(222)] = 7099,
  [SMALL_STATE(223)] = 7109,
  [SMALL_STATE(224)] = 7117,
  [SMALL_STATE(225)] = 7127,
  [SMALL_STATE(226)] = 7135,
  [SMALL_STATE(227)] = 7145,
  [SMALL_STATE(228)] = 7153,
  [SMALL_STATE(229)] = 7163,
  [SMALL_STATE(230)] = 7173,
  [SMALL_STATE(231)] = 7181,
  [SMALL_STATE(232)] = 7191,
  [SMALL_STATE(233)] = 7201,
  [SMALL_STATE(234)] = 7211,
  [SMALL_STATE(235)] = 7221,
  [SMALL_STATE(236)] = 7231,
  [SMALL_STATE(237)] = 7241,
  [SMALL_STATE(238)] = 7251,
  [SMALL_STATE(239)] = 7261,
  [SMALL_STATE(240)] = 7269,
  [SMALL_STATE(241)] = 7277,
  [SMALL_STATE(242)] = 7287,
  [SMALL_STATE(243)] = 7297,
  [SMALL_STATE(244)] = 7304,
  [SMALL_STATE(245)] = 7311,
  [SMALL_STATE(246)] = 7318,
  [SMALL_STATE(247)] = 7325,
  [SMALL_STATE(248)] = 7332,
  [SMALL_STATE(249)] = 7339,
  [SMALL_STATE(250)] = 7346,
  [SMALL_STATE(251)] = 7353,
  [SMALL_STATE(252)] = 7360,
  [SMALL_STATE(253)] = 7367,
  [SMALL_STATE(254)] = 7374,
  [SMALL_STATE(255)] = 7381,
  [SMALL_STATE(256)] = 7388,
  [SMALL_STATE(257)] = 7395,
  [SMALL_STATE(258)] = 7402,
  [SMALL_STATE(259)] = 7409,
  [SMALL_STATE(260)] = 7416,
  [SMALL_STATE(261)] = 7423,
  [SMALL_STATE(262)] = 7430,
  [SMALL_STATE(263)] = 7437,
  [SMALL_STATE(264)] = 7444,
  [SMALL_STATE(265)] = 7451,
  [SMALL_STATE(266)] = 7458,
  [SMALL_STATE(267)] = 7465,
  [SMALL_STATE(268)] = 7472,
  [SMALL_STATE(269)] = 7479,
  [SMALL_STATE(270)] = 7486,
  [SMALL_STATE(271)] = 7493,
  [SMALL_STATE(272)] = 7500,
  [SMALL_STATE(273)] = 7507,
  [SMALL_STATE(274)] = 7514,
  [SMALL_STATE(275)] = 7521,
  [SMALL_STATE(276)] = 7528,
  [SMALL_STATE(277)] = 7535,
  [SMALL_STATE(278)] = 7542,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(162),
  [9] = {.count = 1, .reusable = true}, SHIFT(209),
  [11] = {.count = 1, .reusable = true}, SHIFT(139),
  [13] = {.count = 1, .reusable = true}, SHIFT(207),
  [15] = {.count = 1, .reusable = true}, SHIFT(179),
  [17] = {.count = 1, .reusable = true}, SHIFT(193),
  [19] = {.count = 1, .reusable = true}, SHIFT(195),
  [21] = {.count = 1, .reusable = true}, SHIFT(261),
  [23] = {.count = 1, .reusable = true}, SHIFT(136),
  [25] = {.count = 1, .reusable = false}, SHIFT(258),
  [27] = {.count = 1, .reusable = false}, SHIFT(38),
  [29] = {.count = 1, .reusable = true}, SHIFT(257),
  [31] = {.count = 1, .reusable = true}, SHIFT(166),
  [33] = {.count = 1, .reusable = true}, SHIFT(255),
  [35] = {.count = 1, .reusable = false}, SHIFT(23),
  [37] = {.count = 1, .reusable = false}, SHIFT(263),
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = false}, SHIFT(246),
  [43] = {.count = 1, .reusable = false}, SHIFT(19),
  [45] = {.count = 1, .reusable = false}, SHIFT(247),
  [47] = {.count = 1, .reusable = false}, SHIFT(46),
  [49] = {.count = 1, .reusable = false}, SHIFT(248),
  [51] = {.count = 1, .reusable = false}, SHIFT(156),
  [53] = {.count = 1, .reusable = true}, SHIFT(14),
  [55] = {.count = 1, .reusable = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true}, SHIFT(6),
  [59] = {.count = 1, .reusable = true}, SHIFT(8),
  [61] = {.count = 1, .reusable = true}, SHIFT(185),
  [63] = {.count = 1, .reusable = false}, SHIFT(43),
  [65] = {.count = 1, .reusable = true}, SHIFT(43),
  [67] = {.count = 1, .reusable = true}, SHIFT(46),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [98] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(30),
  [117] = {.count = 1, .reusable = true}, SHIFT(45),
  [119] = {.count = 1, .reusable = true}, SHIFT(39),
  [121] = {.count = 1, .reusable = true}, SHIFT(44),
  [123] = {.count = 1, .reusable = true}, SHIFT(50),
  [125] = {.count = 1, .reusable = true}, SHIFT(25),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [129] = {.count = 1, .reusable = false}, SHIFT(34),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [137] = {.count = 1, .reusable = true}, SHIFT(144),
  [139] = {.count = 1, .reusable = true}, SHIFT(191),
  [141] = {.count = 1, .reusable = true}, SHIFT(202),
  [143] = {.count = 1, .reusable = true}, SHIFT(192),
  [145] = {.count = 1, .reusable = true}, SHIFT(189),
  [147] = {.count = 1, .reusable = true}, SHIFT(90),
  [149] = {.count = 1, .reusable = true}, SHIFT(86),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(33),
  [156] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [160] = {.count = 1, .reusable = false}, SHIFT(33),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(162),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(144),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(191),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(179),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(202),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(192),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(189),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(136),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(258),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(38),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [212] = {.count = 1, .reusable = true}, SHIFT(12),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [220] = {.count = 1, .reusable = true}, SHIFT(163),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [244] = {.count = 1, .reusable = true}, SHIFT(29),
  [246] = {.count = 1, .reusable = false}, SHIFT(29),
  [248] = {.count = 1, .reusable = true}, SHIFT(20),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [260] = {.count = 1, .reusable = true}, SHIFT(178),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 7),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 7),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 6),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 6),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 4),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 4),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 5),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 5),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [294] = {.count = 1, .reusable = true}, SHIFT(157),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [300] = {.count = 1, .reusable = false}, SHIFT(204),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(158),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 4),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 4),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 5),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 5),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [332] = {.count = 1, .reusable = true}, SHIFT(155),
  [334] = {.count = 1, .reusable = true}, SHIFT(174),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_io_macro, 4),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_io_macro, 4),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [360] = {.count = 1, .reusable = false}, SHIFT(187),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [364] = {.count = 1, .reusable = false}, SHIFT(104),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [410] = {.count = 1, .reusable = false}, SHIFT(106),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [414] = {.count = 1, .reusable = true}, SHIFT(146),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [422] = {.count = 1, .reusable = true}, SHIFT(194),
  [424] = {.count = 1, .reusable = true}, SHIFT(133),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [430] = {.count = 1, .reusable = true}, SHIFT(105),
  [432] = {.count = 1, .reusable = true}, SHIFT(171),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 8),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 8),
  [450] = {.count = 1, .reusable = true}, SHIFT(17),
  [452] = {.count = 1, .reusable = false}, SHIFT(17),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [458] = {.count = 1, .reusable = false}, SHIFT(201),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [466] = {.count = 1, .reusable = true}, SHIFT(177),
  [468] = {.count = 1, .reusable = true}, SHIFT(186),
  [470] = {.count = 1, .reusable = true}, SHIFT(132),
  [472] = {.count = 1, .reusable = true}, SHIFT(167),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [482] = {.count = 1, .reusable = true}, SHIFT(16),
  [484] = {.count = 1, .reusable = true}, SHIFT(27),
  [486] = {.count = 1, .reusable = true}, SHIFT(140),
  [488] = {.count = 1, .reusable = true}, SHIFT(182),
  [490] = {.count = 1, .reusable = true}, SHIFT(154),
  [492] = {.count = 1, .reusable = true}, SHIFT(145),
  [494] = {.count = 1, .reusable = false}, SHIFT(55),
  [496] = {.count = 1, .reusable = true}, SHIFT(55),
  [498] = {.count = 1, .reusable = false}, SHIFT(37),
  [500] = {.count = 1, .reusable = true}, SHIFT(37),
  [502] = {.count = 1, .reusable = false}, SHIFT(227),
  [504] = {.count = 1, .reusable = true}, SHIFT(227),
  [506] = {.count = 1, .reusable = true}, SHIFT(38),
  [508] = {.count = 1, .reusable = true}, SHIFT(2),
  [510] = {.count = 1, .reusable = true}, SHIFT(5),
  [512] = {.count = 1, .reusable = true}, SHIFT(60),
  [514] = {.count = 1, .reusable = true}, SHIFT(61),
  [516] = {.count = 1, .reusable = true}, SHIFT(82),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [522] = {.count = 1, .reusable = true}, SHIFT(9),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [536] = {.count = 1, .reusable = true}, SHIFT(94),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [540] = {.count = 1, .reusable = true}, SHIFT(68),
  [542] = {.count = 1, .reusable = true}, SHIFT(270),
  [544] = {.count = 1, .reusable = true}, SHIFT(22),
  [546] = {.count = 1, .reusable = false}, SHIFT(91),
  [548] = {.count = 1, .reusable = true}, SHIFT(91),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [552] = {.count = 1, .reusable = true}, SHIFT(211),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [558] = {.count = 1, .reusable = true}, SHIFT(7),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [566] = {.count = 1, .reusable = true}, SHIFT(164),
  [568] = {.count = 1, .reusable = true}, SHIFT(32),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [572] = {.count = 1, .reusable = true}, SHIFT(87),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [582] = {.count = 1, .reusable = true}, SHIFT(200),
  [584] = {.count = 1, .reusable = true}, SHIFT(53),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [588] = {.count = 1, .reusable = true}, SHIFT(49),
  [590] = {.count = 1, .reusable = true}, SHIFT(24),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [594] = {.count = 1, .reusable = true}, SHIFT(62),
  [596] = {.count = 1, .reusable = true}, SHIFT(183),
  [598] = {.count = 1, .reusable = true}, SHIFT(84),
  [600] = {.count = 1, .reusable = true}, SHIFT(208),
  [602] = {.count = 1, .reusable = true}, SHIFT(259),
  [604] = {.count = 1, .reusable = true}, SHIFT(198),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [608] = {.count = 1, .reusable = true}, SHIFT(28),
  [610] = {.count = 1, .reusable = true}, SHIFT(147),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [614] = {.count = 1, .reusable = true}, SHIFT(71),
  [616] = {.count = 1, .reusable = true}, SHIFT(161),
  [618] = {.count = 1, .reusable = true}, SHIFT(3),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [622] = {.count = 1, .reusable = true}, SHIFT(48),
  [624] = {.count = 1, .reusable = true}, SHIFT(85),
  [626] = {.count = 1, .reusable = true}, SHIFT(205),
  [628] = {.count = 1, .reusable = true}, SHIFT(13),
  [630] = {.count = 1, .reusable = true}, SHIFT(4),
  [632] = {.count = 1, .reusable = true}, SHIFT(75),
  [634] = {.count = 1, .reusable = true}, SHIFT(41),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [640] = {.count = 1, .reusable = true}, SHIFT(59),
  [642] = {.count = 1, .reusable = true}, SHIFT(160),
  [644] = {.count = 1, .reusable = true}, SHIFT(206),
  [646] = {.count = 1, .reusable = true}, SHIFT(180),
  [648] = {.count = 1, .reusable = true}, SHIFT(267),
  [650] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [652] = {.count = 1, .reusable = false}, SHIFT(271),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_functor_built_in, 1),
  [656] = {.count = 1, .reusable = true}, SHIFT(26),
  [658] = {.count = 1, .reusable = true}, SHIFT(138),
  [660] = {.count = 1, .reusable = true}, SHIFT(101),
  [662] = {.count = 1, .reusable = true}, SHIFT(275),
  [664] = {.count = 1, .reusable = true}, SHIFT(169),
  [666] = {.count = 1, .reusable = true}, SHIFT(168),
  [668] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [670] = {.count = 1, .reusable = false}, SHIFT(103),
  [672] = {.count = 1, .reusable = true}, SHIFT(15),
  [674] = {.count = 1, .reusable = true}, SHIFT(274),
  [676] = {.count = 1, .reusable = true}, SHIFT(170),
  [678] = {.count = 1, .reusable = true}, SHIFT(173),
  [680] = {.count = 1, .reusable = true}, SHIFT(159),
  [682] = {.count = 1, .reusable = true}, SHIFT(99),
  [684] = {.count = 1, .reusable = true}, SHIFT(184),
  [686] = {.count = 1, .reusable = true}, SHIFT(18),
  [688] = {.count = 1, .reusable = true}, SHIFT(67),
  [690] = {.count = 1, .reusable = true}, SHIFT(175),
  [692] = {.count = 1, .reusable = true}, SHIFT(143),
  [694] = {.count = 1, .reusable = true}, SHIFT(72),
  [696] = {.count = 1, .reusable = true}, SHIFT(135),
  [698] = {.count = 1, .reusable = true}, SHIFT(165),
  [700] = {.count = 1, .reusable = true}, SHIFT(109),
  [702] = {.count = 1, .reusable = true}, SHIFT(134),
  [704] = {.count = 1, .reusable = false}, SHIFT(250),
  [706] = {.count = 1, .reusable = true}, SHIFT(142),
  [708] = {.count = 1, .reusable = true}, SHIFT(172),
  [710] = {.count = 1, .reusable = true}, SHIFT(245),
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
