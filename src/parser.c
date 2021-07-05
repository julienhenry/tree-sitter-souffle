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
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 155
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
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
  aux_sym_IDENT_token3 = 88,
  aux_sym_IDENT_token4 = 89,
  aux_sym_NUMBER_token1 = 90,
  aux_sym_NUMBER_token2 = 91,
  aux_sym_NUMBER_token3 = 92,
  sym_FLOAT = 93,
  sym_STRING = 94,
  sym_COMMENT = 95,
  sym_LOC = 96,
  anon_sym_POUNDinclude = 97,
  anon_sym_DQUOTE = 98,
  anon_sym_POUNDline = 99,
  anon_sym_POUNDdefine = 100,
  aux_sym_define_token1 = 101,
  sym_filename = 102,
  anon_sym_stateful = 103,
  sym_source_file = 104,
  sym_io_macro = 105,
  sym_IDENT = 106,
  sym_NUMBER = 107,
  sym_unit = 108,
  sym_include = 109,
  sym_line = 110,
  sym_define = 111,
  sym_identifier = 112,
  sym_type = 113,
  sym_non_empty_sum_branch_list = 114,
  sym_non_empty_record_type_list = 115,
  sym_union_type_list = 116,
  sym_sum_branch = 117,
  sym_relation_decl = 118,
  sym_relation_list = 119,
  sym_non_empty_attributes = 120,
  sym_relation_tags = 121,
  sym_fact = 122,
  sym_rule = 123,
  sym_rule_def = 124,
  sym_head = 125,
  sym_body = 126,
  sym_disjunction = 127,
  sym_conjunction = 128,
  sym_exec_plan = 129,
  sym_exec_plan_list = 130,
  sym_exec_order_list = 131,
  sym_term = 132,
  sym_atom = 133,
  sym_constraint = 134,
  sym_non_empty_arg_list = 135,
  sym_arg = 136,
  sym_functor_built_in = 137,
  sym_component = 138,
  sym_component_head = 139,
  sym_comp_type = 140,
  sym_type_params = 141,
  sym_type_param_list = 142,
  sym_component_body = 143,
  sym_comp_init = 144,
  sym_functor_decl = 145,
  sym_pragma = 146,
  sym_io_head = 147,
  sym_io_directive_list = 148,
  sym_io_relation_list = 149,
  sym_non_empty_key_value_pairs = 150,
  sym_kvp_value = 151,
  aux_sym_source_file_repeat1 = 152,
  aux_sym_relation_tags_repeat1 = 153,
  aux_sym_component_repeat1 = 154,
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
  [aux_sym_IDENT_token3] = "IDENT_token3",
  [aux_sym_IDENT_token4] = "IDENT_token4",
  [aux_sym_NUMBER_token1] = "NUMBER_token1",
  [aux_sym_NUMBER_token2] = "NUMBER_token2",
  [aux_sym_NUMBER_token3] = "NUMBER_token3",
  [sym_FLOAT] = "FLOAT",
  [sym_STRING] = "STRING",
  [sym_COMMENT] = "COMMENT",
  [sym_LOC] = "LOC",
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
  [aux_sym_IDENT_token3] = aux_sym_IDENT_token3,
  [aux_sym_IDENT_token4] = aux_sym_IDENT_token4,
  [aux_sym_NUMBER_token1] = aux_sym_NUMBER_token1,
  [aux_sym_NUMBER_token2] = aux_sym_NUMBER_token2,
  [aux_sym_NUMBER_token3] = aux_sym_NUMBER_token3,
  [sym_FLOAT] = sym_FLOAT,
  [sym_STRING] = sym_STRING,
  [sym_COMMENT] = sym_COMMENT,
  [sym_LOC] = sym_LOC,
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
  [aux_sym_IDENT_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token4] = {
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
  [sym_LOC] = {
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
      if (eof) ADVANCE(152);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '0') ADVANCE(417);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(227);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == '@') ADVANCE(240);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '^') ADVANCE(242);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '|') ADVANCE(215);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(433);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(237);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(417);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(227);
      if (lookahead == '@') ADVANCE(240);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(227);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '^') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(227);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '^') ADVANCE(242);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(227);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '^') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(417);
      if (lookahead == '@') ADVANCE(240);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(424);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '|') ADVANCE(215);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(428);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(232);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(1);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'q') ADVANCE(200);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 138:
      if (lookahead == 'z') ADVANCE(50);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(430);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(433);
      if (lookahead == '\r') ADVANCE(434);
      END_STATE();
    case 147:
      if (eof) ADVANCE(152);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(419);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '|') ADVANCE(215);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 148:
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '|') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 149:
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 150:
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'O') ADVANCE(259);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (lookahead == '_') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_BTREE_DELETE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_LEQ_RULE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_PLUS);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_AT);
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(428);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(232);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '=') ADVANCE(233);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(233);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_INPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_CPP_VAR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'N') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'P') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'U') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == 'x') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 'x') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'i') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'q') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'U') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'U') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == '_') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == '_') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'f') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'h') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'h') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'p') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == 'x') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'x') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'z') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(450);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(449);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(145);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(450);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_LOC);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_LOC);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(146);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(442);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(441);
      if (lookahead == '/') ADVANCE(431);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(441);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead == '/') ADVANCE(429);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(449);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(432);
      if (lookahead == '"') ADVANCE(428);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 147},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 147},
  [11] = {.lex_state = 147},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 151},
  [31] = {.lex_state = 151},
  [32] = {.lex_state = 147},
  [33] = {.lex_state = 151},
  [34] = {.lex_state = 147},
  [35] = {.lex_state = 147},
  [36] = {.lex_state = 151},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 148},
  [39] = {.lex_state = 147},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 147},
  [43] = {.lex_state = 147},
  [44] = {.lex_state = 147},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 147},
  [50] = {.lex_state = 147},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 148},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 147},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 147},
  [60] = {.lex_state = 147},
  [61] = {.lex_state = 148},
  [62] = {.lex_state = 147},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 147},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 147},
  [69] = {.lex_state = 147},
  [70] = {.lex_state = 147},
  [71] = {.lex_state = 148},
  [72] = {.lex_state = 148},
  [73] = {.lex_state = 148},
  [74] = {.lex_state = 147},
  [75] = {.lex_state = 147},
  [76] = {.lex_state = 149},
  [77] = {.lex_state = 147},
  [78] = {.lex_state = 149},
  [79] = {.lex_state = 147},
  [80] = {.lex_state = 147},
  [81] = {.lex_state = 147},
  [82] = {.lex_state = 149},
  [83] = {.lex_state = 147},
  [84] = {.lex_state = 147},
  [85] = {.lex_state = 150},
  [86] = {.lex_state = 147},
  [87] = {.lex_state = 149},
  [88] = {.lex_state = 149},
  [89] = {.lex_state = 147},
  [90] = {.lex_state = 147},
  [91] = {.lex_state = 148},
  [92] = {.lex_state = 148},
  [93] = {.lex_state = 147},
  [94] = {.lex_state = 147},
  [95] = {.lex_state = 147},
  [96] = {.lex_state = 147},
  [97] = {.lex_state = 147},
  [98] = {.lex_state = 147},
  [99] = {.lex_state = 147},
  [100] = {.lex_state = 147},
  [101] = {.lex_state = 147},
  [102] = {.lex_state = 147},
  [103] = {.lex_state = 147},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 147},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 147},
  [108] = {.lex_state = 147},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 147},
  [111] = {.lex_state = 147},
  [112] = {.lex_state = 147},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 150},
  [117] = {.lex_state = 147},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 147},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 147},
  [124] = {.lex_state = 147},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 147},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 147},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 147},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 147},
  [207] = {.lex_state = 147},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 147},
  [212] = {.lex_state = 147},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 147},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 147},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 147},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 448},
  [255] = {.lex_state = 147},
  [256] = {.lex_state = 147},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 147},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 147},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 147},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 147},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 443},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 147},
  [272] = {.lex_state = 147},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 448},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
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
    [aux_sym_IDENT_token3] = ACTIONS(1),
    [aux_sym_IDENT_token4] = ACTIONS(1),
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
    [sym_source_file] = STATE(267),
    [sym_io_macro] = STATE(110),
    [sym_IDENT] = STATE(155),
    [sym_unit] = STATE(11),
    [sym_include] = STATE(110),
    [sym_line] = STATE(110),
    [sym_define] = STATE(110),
    [sym_identifier] = STATE(230),
    [sym_type] = STATE(110),
    [sym_relation_decl] = STATE(110),
    [sym_fact] = STATE(110),
    [sym_rule] = STATE(110),
    [sym_rule_def] = STATE(42),
    [sym_head] = STATE(241),
    [sym_atom] = STATE(210),
    [sym_component] = STATE(110),
    [sym_component_head] = STATE(211),
    [sym_comp_init] = STATE(110),
    [sym_functor_decl] = STATE(110),
    [sym_pragma] = STATE(110),
    [sym_io_head] = STATE(110),
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
    [aux_sym_IDENT_token3] = ACTIONS(29),
    [aux_sym_IDENT_token4] = ACTIONS(29),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(31),
    [anon_sym_POUNDline] = ACTIONS(33),
    [anon_sym_POUNDdefine] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(200), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(208), 1,
      sym_disjunction,
    STATE(230), 1,
      sym_identifier,
    STATE(250), 1,
      sym_body,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [113] = 31,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(200), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(208), 1,
      sym_disjunction,
    STATE(230), 1,
      sym_identifier,
    STATE(247), 1,
      sym_body,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [226] = 31,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(200), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(208), 1,
      sym_disjunction,
    STATE(230), 1,
      sym_identifier,
    STATE(257), 1,
      sym_functor_built_in,
    STATE(268), 1,
      sym_body,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [339] = 31,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(200), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(208), 1,
      sym_disjunction,
    STATE(230), 1,
      sym_identifier,
    STATE(248), 1,
      sym_body,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [452] = 30,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(118), 1,
      sym_arg,
    STATE(200), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(227), 1,
      sym_disjunction,
    STATE(230), 1,
      sym_identifier,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [562] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(192), 1,
      sym_conjunction,
    STATE(200), 1,
      sym_term,
    STATE(230), 1,
      sym_identifier,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [669] = 28,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(190), 1,
      sym_term,
    STATE(230), 1,
      sym_identifier,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [773] = 28,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(61), 1,
      sym_LPAREN,
    ACTIONS(63), 1,
      sym_EXCLAMATION,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(66), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_arg,
    STATE(193), 1,
      sym_term,
    STATE(230), 1,
      sym_identifier,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(53), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(196), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [877] = 25,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_DECL,
    ACTIONS(78), 1,
      sym_FUNCTOR,
    ACTIONS(84), 1,
      sym_TYPE,
    ACTIONS(87), 1,
      sym_COMPONENT,
    ACTIONS(90), 1,
      sym_INSTANTIATE,
    ACTIONS(96), 1,
      sym_PRAGMA,
    ACTIONS(99), 1,
      sym_LEQ_RULE,
    ACTIONS(111), 1,
      anon_sym_POUNDinclude,
    ACTIONS(114), 1,
      anon_sym_POUNDline,
    ACTIONS(117), 1,
      anon_sym_POUNDdefine,
    STATE(42), 1,
      sym_rule_def,
    STATE(155), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_atom,
    STATE(211), 1,
      sym_component_head,
    STATE(230), 1,
      sym_identifier,
    STATE(241), 1,
      sym_head,
    ACTIONS(93), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(105), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(108), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(81), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(102), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(110), 13,
      sym_io_macro,
      sym_include,
      sym_line,
      sym_define,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_functor_decl,
      sym_pragma,
      sym_io_head,
  [973] = 25,
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
    ACTIONS(31), 1,
      anon_sym_POUNDinclude,
    ACTIONS(33), 1,
      anon_sym_POUNDline,
    ACTIONS(35), 1,
      anon_sym_POUNDdefine,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_rule_def,
    STATE(155), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_atom,
    STATE(211), 1,
      sym_component_head,
    STATE(230), 1,
      sym_identifier,
    STATE(241), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    STATE(110), 13,
      sym_io_macro,
      sym_include,
      sym_line,
      sym_define,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_functor_decl,
      sym_pragma,
      sym_io_head,
  [1069] = 23,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    ACTIONS(124), 1,
      sym_RPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(219), 1,
      sym_non_empty_arg_list,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1156] = 23,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    ACTIONS(126), 1,
      sym_RBRACKET,
    STATE(127), 1,
      sym_arg,
    STATE(239), 1,
      sym_non_empty_arg_list,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1243] = 23,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    ACTIONS(128), 1,
      sym_RPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(220), 1,
      sym_non_empty_arg_list,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1330] = 23,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    ACTIONS(130), 1,
      sym_RPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(228), 1,
      sym_non_empty_arg_list,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1417] = 22,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(127), 1,
      sym_arg,
    STATE(234), 1,
      sym_non_empty_arg_list,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1501] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(55), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1582] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(48), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1663] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(54), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1744] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(51), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1825] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(126), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1906] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(132), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [1987] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(130), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2068] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(125), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2149] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2230] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(129), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2311] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(132), 1,
      sym_LPAREN,
    STATE(131), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2392] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(133), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2473] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(57), 1,
      sym_DOLLAR,
    ACTIONS(59), 1,
      sym_MINUS,
    ACTIONS(65), 1,
      sym_AT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(122), 1,
      sym_LPAREN,
    STATE(131), 1,
      sym_arg,
    STATE(257), 1,
      sym_functor_built_in,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(37), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(41), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(71), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(66), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(43), 9,
      sym_CAT,
      sym_ORD,
      sym_RANGE,
      sym_STRLEN,
      sym_SUBSTR,
      sym_TOSTRING,
      sym_TONUMBER,
      sym_TOFLOAT,
      sym_TOUNSIGNED,
  [2554] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(33), 1,
      aux_sym_relation_tags_repeat1,
    STATE(86), 1,
      sym_relation_tags,
    ACTIONS(138), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(136), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(134), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2604] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(33), 1,
      aux_sym_relation_tags_repeat1,
    STATE(83), 1,
      sym_relation_tags,
    ACTIONS(142), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(136), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(140), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2654] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(144), 1,
      sym_DECL,
    ACTIONS(150), 1,
      sym_TYPE,
    ACTIONS(153), 1,
      sym_COMPONENT,
    ACTIONS(156), 1,
      sym_INSTANTIATE,
    ACTIONS(162), 1,
      sym_OVERRIDE,
    ACTIONS(165), 1,
      sym_LEQ_RULE,
    ACTIONS(168), 1,
      sym_RBRACE,
    STATE(42), 1,
      sym_rule_def,
    STATE(155), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_atom,
    STATE(211), 1,
      sym_component_head,
    STATE(230), 1,
      sym_identifier,
    STATE(241), 1,
      sym_head,
    ACTIONS(159), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(173), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(176), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(32), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(147), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(170), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(123), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2733] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(36), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(183), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(181), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(179), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2780] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      sym_LEQ_RULE,
    ACTIONS(187), 1,
      sym_TYPE,
    ACTIONS(189), 1,
      sym_INSTANTIATE,
    ACTIONS(193), 1,
      sym_OVERRIDE,
    ACTIONS(195), 1,
      sym_RBRACE,
    STATE(42), 1,
      sym_rule_def,
    STATE(155), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_atom,
    STATE(211), 1,
      sym_component_head,
    STATE(230), 1,
      sym_identifier,
    STATE(241), 1,
      sym_head,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(191), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(32), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(25), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(185), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(123), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2859] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      sym_LEQ_RULE,
    ACTIONS(187), 1,
      sym_TYPE,
    ACTIONS(189), 1,
      sym_INSTANTIATE,
    ACTIONS(193), 1,
      sym_OVERRIDE,
    ACTIONS(197), 1,
      sym_RBRACE,
    STATE(42), 1,
      sym_rule_def,
    STATE(155), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_atom,
    STATE(211), 1,
      sym_component_head,
    STATE(230), 1,
      sym_identifier,
    STATE(241), 1,
      sym_head,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(191), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(34), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(25), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(185), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(123), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2938] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(36), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(204), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(201), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(199), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2985] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(47), 1,
      sym_IDENT,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(206), 12,
      sym_BW_AND,
      sym_BW_OR,
      sym_BW_XOR,
      sym_BW_SHIFT_L,
      sym_BW_SHIFT_R,
      sym_BW_SHIFT_R_UNSIGNED,
      sym_L_AND,
      sym_L_OR,
      sym_PLUS,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(208), 15,
      sym_RBRACKET,
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
  [3031] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(210), 24,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3070] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(216), 1,
      sym_LT,
    STATE(44), 1,
      sym_type_params,
    ACTIONS(218), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(214), 23,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(210), 25,
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
  [3149] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(222), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(220), 23,
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
  [3185] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(226), 1,
      sym_PLAN,
    ACTIONS(230), 1,
      sym_LOC,
    STATE(69), 1,
      sym_exec_plan,
    ACTIONS(228), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(224), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(232), 23,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(238), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(236), 23,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(240), 24,
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
  [3335] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(246), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(244), 23,
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
  [3371] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 1,
      sym_LPAREN,
    ACTIONS(250), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(248), 23,
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
  [3409] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(250), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(248), 23,
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
  [3444] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(254), 22,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3479] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(258), 22,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3514] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(250), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(248), 23,
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
  [3549] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(262), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3584] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(250), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(248), 23,
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
  [3619] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(274), 2,
      sym_LT,
      sym_GT,
    ACTIONS(266), 11,
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
    ACTIONS(270), 11,
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
  [3660] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(274), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(270), 23,
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
  [3695] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(276), 23,
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
  [3730] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(280), 22,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(274), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(270), 23,
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
  [3800] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(286), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(284), 22,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3835] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(290), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(288), 22,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3870] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(292), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3905] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(298), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(296), 22,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3940] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(302), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(300), 23,
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
  [3975] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(210), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [4010] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(306), 1,
      sym_COMMA,
    ACTIONS(308), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(304), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 4,
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
  [4082] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(310), 23,
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
  [4117] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(316), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(314), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4151] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(322), 1,
      sym_LOC,
    ACTIONS(320), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(318), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4187] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(326), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(324), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4221] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_LBRACE,
    ACTIONS(264), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(262), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4257] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      sym_DOT,
    ACTIONS(334), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(330), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4293] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      sym_DOT,
    ACTIONS(338), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(336), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4329] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(342), 1,
      sym_PIPE,
    ACTIONS(344), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(340), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(346), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4398] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(212), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(210), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4431] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(352), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(350), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4464] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4497] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(354), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4530] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(358), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4563] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(364), 1,
      sym_LPAREN,
    ACTIONS(366), 1,
      sym_COMMA,
    ACTIONS(368), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(362), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4600] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
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
      sym_LEQ_RULE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4633] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(138), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(134), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4666] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(372), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(370), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4699] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(376), 1,
      sym_SUBTYPE,
    ACTIONS(378), 1,
      sym_EQUALS,
    ACTIONS(380), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4736] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(384), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(382), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4769] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(388), 1,
      sym_DOT,
    ACTIONS(392), 1,
      anon_sym_stateful,
    ACTIONS(390), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4806] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(388), 1,
      sym_DOT,
    ACTIONS(398), 1,
      anon_sym_stateful,
    ACTIONS(396), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4843] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(380), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(374), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4876] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(402), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(400), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4909] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      sym_DOT,
    ACTIONS(406), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(404), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4944] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      sym_DOT,
    ACTIONS(410), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(408), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(414), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(412), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5012] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(418), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(416), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5045] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(422), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(420), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5078] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(426), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(424), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5111] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(430), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(428), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5144] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(434), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(432), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(438), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(436), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5210] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(318), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5243] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(440), 1,
      sym_PIPE,
    ACTIONS(426), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(424), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5277] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(446), 1,
      sym_STRING,
    ACTIONS(444), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(442), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5311] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(450), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(448), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5342] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(292), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5373] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(454), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(452), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5404] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(206), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(208), 17,
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
  [5437] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(458), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(456), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5468] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(462), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(460), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5499] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(262), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5530] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(466), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(464), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5561] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(396), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_PRAGMA,
      sym_LEQ_RULE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5592] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(470), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(468), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5623] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_LBRACE,
    ACTIONS(264), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(262), 15,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5655] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(472), 1,
      sym_DOT,
    ACTIONS(338), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(336), 16,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5687] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(472), 1,
      sym_DOT,
    ACTIONS(334), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(330), 16,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5719] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(474), 1,
      sym_SUBTYPE,
    ACTIONS(476), 1,
      sym_EQUALS,
    ACTIONS(380), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(374), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5752] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(364), 1,
      sym_LPAREN,
    ACTIONS(478), 1,
      sym_COMMA,
    ACTIONS(368), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(362), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5785] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 1,
      sym_RPAREN,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(482), 2,
      sym_LT,
      sym_GT,
    ACTIONS(480), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(266), 11,
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
  [5822] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(472), 1,
      sym_DOT,
    ACTIONS(410), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(408), 15,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5853] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(472), 1,
      sym_DOT,
    ACTIONS(406), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(404), 15,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5884] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      sym_PIPE,
    ACTIONS(426), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(424), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5914] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(482), 2,
      sym_LT,
      sym_GT,
    ACTIONS(480), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(266), 11,
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
  [5948] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(488), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(486), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5975] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(492), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(490), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [6002] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(494), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(266), 11,
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
  [6033] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(496), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(266), 11,
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
  [6062] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(498), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(266), 11,
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
  [6091] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 1,
      sym_RPAREN,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(500), 1,
      sym_COMMA,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(266), 11,
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
  [6121] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 1,
      sym_RPAREN,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(266), 11,
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
  [6148] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(502), 1,
      sym_COMMA,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(266), 11,
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
  [6175] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(504), 1,
      sym_COLON,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(266), 11,
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
  [6202] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(506), 1,
      sym_RPAREN,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(266), 11,
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
  [6229] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      sym_CARET,
    ACTIONS(508), 1,
      sym_COMMA,
    ACTIONS(268), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(266), 11,
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
  [6256] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(510), 1,
      sym_LBRACKET,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(74), 1,
      sym_sum_branch,
    STATE(96), 1,
      sym_non_empty_sum_branch_list,
    STATE(113), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_type_list,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6286] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(510), 1,
      sym_LBRACKET,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(71), 1,
      sym_IDENT,
    STATE(74), 1,
      sym_sum_branch,
    STATE(91), 1,
      sym_identifier,
    STATE(96), 1,
      sym_non_empty_sum_branch_list,
    STATE(101), 1,
      sym_union_type_list,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6316] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      sym_STRING,
    STATE(233), 1,
      sym_IDENT,
    STATE(243), 1,
      sym_kvp_value,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(520), 2,
      sym_TRUE,
      sym_FALSE,
  [6341] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      sym_STRING,
    STATE(216), 1,
      sym_kvp_value,
    STATE(233), 1,
      sym_IDENT,
    ACTIONS(27), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(29), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(520), 2,
      sym_TRUE,
      sym_FALSE,
  [6366] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(524), 1,
      sym_LBRACE,
    STATE(56), 1,
      sym_atom,
    STATE(155), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6390] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(526), 1,
      sym_LBRACE,
    STATE(58), 1,
      sym_atom,
    STATE(155), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6414] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(77), 1,
      sym_io_directive_list,
    STATE(109), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_identifier,
    STATE(117), 1,
      sym_io_relation_list,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6438] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(52), 1,
      sym_IDENT,
    STATE(73), 1,
      sym_identifier,
    STATE(77), 1,
      sym_io_directive_list,
    STATE(81), 1,
      sym_io_relation_list,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6462] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(528), 1,
      sym_RPAREN,
    STATE(226), 1,
      sym_non_empty_key_value_pairs,
    STATE(259), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6483] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(530), 1,
      sym_RPAREN,
    STATE(232), 1,
      sym_non_empty_attributes,
    STATE(249), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6504] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_identifier,
    STATE(277), 1,
      sym_atom,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6525] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_identifier,
    STATE(274), 1,
      sym_atom,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6546] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(532), 1,
      sym_RBRACKET,
    STATE(217), 1,
      sym_non_empty_record_type_list,
    STATE(264), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6567] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(534), 1,
      sym_RBRACE,
    STATE(242), 1,
      sym_non_empty_attributes,
    STATE(249), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6588] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(74), 1,
      sym_sum_branch,
    STATE(93), 1,
      sym_non_empty_sum_branch_list,
    STATE(246), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6609] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    ACTIONS(536), 1,
      sym_RPAREN,
    STATE(215), 1,
      sym_non_empty_attributes,
    STATE(249), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6630] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(229), 1,
      sym_atom,
    STATE(230), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6651] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(538), 1,
      sym_RPAREN,
    STATE(222), 1,
      sym_NUMBER,
    STATE(223), 1,
      sym_exec_order_list,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6671] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(39), 1,
      sym_IDENT,
    STATE(214), 1,
      sym_comp_type,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6689] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(218), 1,
      sym_relation_list,
    STATE(236), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6707] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(204), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6725] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6737] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(39), 1,
      sym_IDENT,
    STATE(95), 1,
      sym_comp_type,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6755] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(540), 1,
      sym_RPAREN,
    STATE(222), 1,
      sym_NUMBER,
    STATE(237), 1,
      sym_exec_order_list,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6775] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(221), 1,
      sym_type_param_list,
    STATE(225), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6793] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(109), 1,
      sym_IDENT,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6811] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6829] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(235), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6847] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(544), 1,
      aux_sym_IDENT_token3,
    STATE(82), 1,
      sym_IDENT,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(542), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6865] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(544), 1,
      aux_sym_IDENT_token3,
    STATE(82), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_identifier,
    ACTIONS(542), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6883] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(52), 1,
      sym_IDENT,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6901] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6919] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(39), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_comp_type,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6937] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(52), 1,
      sym_IDENT,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6955] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6973] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6985] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(109), 1,
      sym_IDENT,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7003] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(155), 1,
      sym_IDENT,
    STATE(224), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7021] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(39), 1,
      sym_IDENT,
    STATE(95), 1,
      sym_comp_type,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7039] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(255), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7054] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(61), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7069] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(279), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7084] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(85), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7099] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(169), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7114] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(263), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7129] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(96), 1,
      sym_IDENT,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7144] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(65), 1,
      sym_exec_plan_list,
    STATE(256), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7161] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(89), 1,
      sym_IDENT,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7176] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(116), 1,
      sym_IDENT,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7191] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(89), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7206] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(231), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7221] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(124), 1,
      sym_IDENT,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7236] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(518), 1,
      aux_sym_IDENT_token3,
    STATE(96), 1,
      sym_IDENT,
    ACTIONS(516), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7251] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(544), 1,
      aux_sym_IDENT_token3,
    STATE(78), 1,
      sym_IDENT,
    ACTIONS(542), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7266] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      aux_sym_IDENT_token3,
    STATE(104), 1,
      sym_IDENT,
    ACTIONS(512), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7281] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(280), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7296] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(546), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7307] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7318] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_COMMA,
    ACTIONS(550), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7331] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(554), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7342] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(238), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7357] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(278), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7372] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(556), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7383] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(251), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7398] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(29), 1,
      aux_sym_IDENT_token3,
    STATE(273), 1,
      sym_IDENT,
    ACTIONS(27), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7413] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7424] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(560), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7435] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(562), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7446] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 1,
      sym_COMMA,
    ACTIONS(564), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7459] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(271), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7473] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(566), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7485] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(570), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7497] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(240), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7511] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(67), 1,
      aux_sym_NUMBER_token1,
    STATE(275), 1,
      sym_NUMBER,
    ACTIONS(69), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7525] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 1,
      sym_SEMICOLON,
    ACTIONS(574), 2,
      sym_DOT,
      sym_RBRACE,
  [7536] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(576), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7547] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(580), 1,
      sym_DOT,
    ACTIONS(578), 2,
      sym_COMMA,
      sym_IF,
  [7558] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(584), 1,
      sym_LBRACE,
    ACTIONS(582), 2,
      sym_COMMA,
      sym_COLON,
  [7569] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(586), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7578] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(588), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7589] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7598] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(592), 1,
      sym_RPAREN,
    ACTIONS(594), 1,
      sym_COMMA,
  [7608] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(596), 2,
      sym_RPAREN,
      sym_COMMA,
  [7616] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 1,
      sym_RBRACKET,
    ACTIONS(600), 1,
      sym_COMMA,
  [7626] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 1,
      sym_LPAREN,
    ACTIONS(604), 1,
      sym_COMMA,
  [7636] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(128), 1,
      sym_RPAREN,
    ACTIONS(606), 1,
      sym_COMMA,
  [7646] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 1,
      sym_COMMA,
    ACTIONS(608), 1,
      sym_RPAREN,
  [7656] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(610), 1,
      sym_COMMA,
    ACTIONS(612), 1,
      sym_GT,
  [7666] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(614), 2,
      sym_RPAREN,
      sym_COMMA,
  [7674] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(616), 1,
      sym_RPAREN,
    ACTIONS(618), 1,
      sym_COMMA,
  [7684] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(620), 1,
      sym_RPAREN,
  [7694] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(622), 2,
      sym_COMMA,
      sym_GT,
  [7702] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(624), 1,
      sym_RPAREN,
    ACTIONS(626), 1,
      sym_COMMA,
  [7712] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 1,
      sym_SEMICOLON,
    ACTIONS(628), 1,
      sym_RPAREN,
  [7722] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 1,
      sym_COMMA,
    ACTIONS(630), 1,
      sym_RPAREN,
  [7732] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(632), 2,
      sym_COMMA,
      sym_IF,
  [7740] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(634), 1,
      sym_LPAREN,
  [7750] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(636), 2,
      sym_LPAREN,
      sym_COMMA,
  [7758] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(594), 1,
      sym_COMMA,
    ACTIONS(638), 1,
      sym_RPAREN,
  [7768] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 2,
      sym_RPAREN,
      sym_COMMA,
  [7776] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 1,
      sym_COMMA,
    ACTIONS(642), 1,
      sym_RPAREN,
  [7786] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_DOT,
    ACTIONS(642), 1,
      sym_RPAREN,
  [7796] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(644), 2,
      sym_LPAREN,
      sym_COMMA,
  [7804] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(618), 1,
      sym_COMMA,
    ACTIONS(646), 1,
      sym_RPAREN,
  [7814] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(648), 2,
      sym_COMMA,
      sym_GT,
  [7822] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 1,
      sym_RBRACKET,
    ACTIONS(606), 1,
      sym_COMMA,
  [7832] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(650), 2,
      sym_RPAREN,
      sym_COMMA,
  [7840] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_COMMA,
    ACTIONS(654), 1,
      sym_IF,
  [7850] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(594), 1,
      sym_COMMA,
    ACTIONS(656), 1,
      sym_RBRACE,
  [7860] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(658), 2,
      sym_RPAREN,
      sym_COMMA,
  [7868] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(660), 1,
      sym_LPAREN,
  [7875] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 1,
      sym_LPAREN,
  [7882] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_LBRACE,
  [7889] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 1,
      sym_DOT,
  [7896] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(666), 1,
      sym_DOT,
  [7903] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(668), 1,
      sym_COLON,
  [7910] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 1,
      sym_RBRACE,
  [7917] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      sym_COLON,
  [7924] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(672), 1,
      sym_LPAREN,
  [7931] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(674), 1,
      sym_LPAREN,
  [7938] = 2,
    ACTIONS(676), 1,
      sym_COMMENT,
    ACTIONS(678), 1,
      sym_filename,
  [7945] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(680), 1,
      sym_COLON,
  [7952] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(682), 1,
      sym_COLON,
  [7959] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(684), 1,
      sym_LPAREN,
  [7966] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(686), 1,
      sym_COLON,
  [7973] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(688), 1,
      sym_EQUALS,
  [7980] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(690), 1,
      sym_COLON,
  [7987] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(692), 1,
      sym_LPAREN,
  [7994] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(694), 1,
      sym_COLON,
  [8001] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(696), 1,
      sym_EQUALS,
  [8008] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(698), 1,
      sym_COLON,
  [8015] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
  [8022] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(702), 1,
      sym_LPAREN,
  [8029] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
  [8036] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(608), 1,
      sym_RBRACE,
  [8043] = 2,
    ACTIONS(676), 1,
      sym_COMMENT,
    ACTIONS(706), 1,
      aux_sym_define_token1,
  [8050] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
  [8057] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(710), 1,
      sym_COLON,
  [8064] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(712), 1,
      sym_STRING,
  [8071] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(714), 1,
      sym_LPAREN,
  [8078] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(716), 1,
      sym_IF,
  [8085] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
  [8092] = 2,
    ACTIONS(676), 1,
      sym_COMMENT,
    ACTIONS(720), 1,
      sym_filename,
  [8099] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(722), 1,
      sym_LE,
  [8106] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(724), 1,
      sym_EQUALS,
  [8113] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(726), 1,
      sym_EQUALS,
  [8120] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 1,
      sym_LPAREN,
  [8127] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 226,
  [SMALL_STATE(5)] = 339,
  [SMALL_STATE(6)] = 452,
  [SMALL_STATE(7)] = 562,
  [SMALL_STATE(8)] = 669,
  [SMALL_STATE(9)] = 773,
  [SMALL_STATE(10)] = 877,
  [SMALL_STATE(11)] = 973,
  [SMALL_STATE(12)] = 1069,
  [SMALL_STATE(13)] = 1156,
  [SMALL_STATE(14)] = 1243,
  [SMALL_STATE(15)] = 1330,
  [SMALL_STATE(16)] = 1417,
  [SMALL_STATE(17)] = 1501,
  [SMALL_STATE(18)] = 1582,
  [SMALL_STATE(19)] = 1663,
  [SMALL_STATE(20)] = 1744,
  [SMALL_STATE(21)] = 1825,
  [SMALL_STATE(22)] = 1906,
  [SMALL_STATE(23)] = 1987,
  [SMALL_STATE(24)] = 2068,
  [SMALL_STATE(25)] = 2149,
  [SMALL_STATE(26)] = 2230,
  [SMALL_STATE(27)] = 2311,
  [SMALL_STATE(28)] = 2392,
  [SMALL_STATE(29)] = 2473,
  [SMALL_STATE(30)] = 2554,
  [SMALL_STATE(31)] = 2604,
  [SMALL_STATE(32)] = 2654,
  [SMALL_STATE(33)] = 2733,
  [SMALL_STATE(34)] = 2780,
  [SMALL_STATE(35)] = 2859,
  [SMALL_STATE(36)] = 2938,
  [SMALL_STATE(37)] = 2985,
  [SMALL_STATE(38)] = 3031,
  [SMALL_STATE(39)] = 3070,
  [SMALL_STATE(40)] = 3112,
  [SMALL_STATE(41)] = 3149,
  [SMALL_STATE(42)] = 3185,
  [SMALL_STATE(43)] = 3227,
  [SMALL_STATE(44)] = 3263,
  [SMALL_STATE(45)] = 3299,
  [SMALL_STATE(46)] = 3335,
  [SMALL_STATE(47)] = 3371,
  [SMALL_STATE(48)] = 3409,
  [SMALL_STATE(49)] = 3444,
  [SMALL_STATE(50)] = 3479,
  [SMALL_STATE(51)] = 3514,
  [SMALL_STATE(52)] = 3549,
  [SMALL_STATE(53)] = 3584,
  [SMALL_STATE(54)] = 3619,
  [SMALL_STATE(55)] = 3660,
  [SMALL_STATE(56)] = 3695,
  [SMALL_STATE(57)] = 3730,
  [SMALL_STATE(58)] = 3765,
  [SMALL_STATE(59)] = 3800,
  [SMALL_STATE(60)] = 3835,
  [SMALL_STATE(61)] = 3870,
  [SMALL_STATE(62)] = 3905,
  [SMALL_STATE(63)] = 3940,
  [SMALL_STATE(64)] = 3975,
  [SMALL_STATE(65)] = 4010,
  [SMALL_STATE(66)] = 4047,
  [SMALL_STATE(67)] = 4082,
  [SMALL_STATE(68)] = 4117,
  [SMALL_STATE(69)] = 4151,
  [SMALL_STATE(70)] = 4187,
  [SMALL_STATE(71)] = 4221,
  [SMALL_STATE(72)] = 4257,
  [SMALL_STATE(73)] = 4293,
  [SMALL_STATE(74)] = 4329,
  [SMALL_STATE(75)] = 4365,
  [SMALL_STATE(76)] = 4398,
  [SMALL_STATE(77)] = 4431,
  [SMALL_STATE(78)] = 4464,
  [SMALL_STATE(79)] = 4497,
  [SMALL_STATE(80)] = 4530,
  [SMALL_STATE(81)] = 4563,
  [SMALL_STATE(82)] = 4600,
  [SMALL_STATE(83)] = 4633,
  [SMALL_STATE(84)] = 4666,
  [SMALL_STATE(85)] = 4699,
  [SMALL_STATE(86)] = 4736,
  [SMALL_STATE(87)] = 4769,
  [SMALL_STATE(88)] = 4806,
  [SMALL_STATE(89)] = 4843,
  [SMALL_STATE(90)] = 4876,
  [SMALL_STATE(91)] = 4909,
  [SMALL_STATE(92)] = 4944,
  [SMALL_STATE(93)] = 4979,
  [SMALL_STATE(94)] = 5012,
  [SMALL_STATE(95)] = 5045,
  [SMALL_STATE(96)] = 5078,
  [SMALL_STATE(97)] = 5111,
  [SMALL_STATE(98)] = 5144,
  [SMALL_STATE(99)] = 5177,
  [SMALL_STATE(100)] = 5210,
  [SMALL_STATE(101)] = 5243,
  [SMALL_STATE(102)] = 5277,
  [SMALL_STATE(103)] = 5311,
  [SMALL_STATE(104)] = 5342,
  [SMALL_STATE(105)] = 5373,
  [SMALL_STATE(106)] = 5404,
  [SMALL_STATE(107)] = 5437,
  [SMALL_STATE(108)] = 5468,
  [SMALL_STATE(109)] = 5499,
  [SMALL_STATE(110)] = 5530,
  [SMALL_STATE(111)] = 5561,
  [SMALL_STATE(112)] = 5592,
  [SMALL_STATE(113)] = 5623,
  [SMALL_STATE(114)] = 5655,
  [SMALL_STATE(115)] = 5687,
  [SMALL_STATE(116)] = 5719,
  [SMALL_STATE(117)] = 5752,
  [SMALL_STATE(118)] = 5785,
  [SMALL_STATE(119)] = 5822,
  [SMALL_STATE(120)] = 5853,
  [SMALL_STATE(121)] = 5884,
  [SMALL_STATE(122)] = 5914,
  [SMALL_STATE(123)] = 5948,
  [SMALL_STATE(124)] = 5975,
  [SMALL_STATE(125)] = 6002,
  [SMALL_STATE(126)] = 6033,
  [SMALL_STATE(127)] = 6062,
  [SMALL_STATE(128)] = 6091,
  [SMALL_STATE(129)] = 6121,
  [SMALL_STATE(130)] = 6148,
  [SMALL_STATE(131)] = 6175,
  [SMALL_STATE(132)] = 6202,
  [SMALL_STATE(133)] = 6229,
  [SMALL_STATE(134)] = 6256,
  [SMALL_STATE(135)] = 6286,
  [SMALL_STATE(136)] = 6316,
  [SMALL_STATE(137)] = 6341,
  [SMALL_STATE(138)] = 6366,
  [SMALL_STATE(139)] = 6390,
  [SMALL_STATE(140)] = 6414,
  [SMALL_STATE(141)] = 6438,
  [SMALL_STATE(142)] = 6462,
  [SMALL_STATE(143)] = 6483,
  [SMALL_STATE(144)] = 6504,
  [SMALL_STATE(145)] = 6525,
  [SMALL_STATE(146)] = 6546,
  [SMALL_STATE(147)] = 6567,
  [SMALL_STATE(148)] = 6588,
  [SMALL_STATE(149)] = 6609,
  [SMALL_STATE(150)] = 6630,
  [SMALL_STATE(151)] = 6651,
  [SMALL_STATE(152)] = 6671,
  [SMALL_STATE(153)] = 6689,
  [SMALL_STATE(154)] = 6707,
  [SMALL_STATE(155)] = 6725,
  [SMALL_STATE(156)] = 6737,
  [SMALL_STATE(157)] = 6755,
  [SMALL_STATE(158)] = 6775,
  [SMALL_STATE(159)] = 6793,
  [SMALL_STATE(160)] = 6811,
  [SMALL_STATE(161)] = 6829,
  [SMALL_STATE(162)] = 6847,
  [SMALL_STATE(163)] = 6865,
  [SMALL_STATE(164)] = 6883,
  [SMALL_STATE(165)] = 6901,
  [SMALL_STATE(166)] = 6919,
  [SMALL_STATE(167)] = 6937,
  [SMALL_STATE(168)] = 6955,
  [SMALL_STATE(169)] = 6973,
  [SMALL_STATE(170)] = 6985,
  [SMALL_STATE(171)] = 7003,
  [SMALL_STATE(172)] = 7021,
  [SMALL_STATE(173)] = 7039,
  [SMALL_STATE(174)] = 7054,
  [SMALL_STATE(175)] = 7069,
  [SMALL_STATE(176)] = 7084,
  [SMALL_STATE(177)] = 7099,
  [SMALL_STATE(178)] = 7114,
  [SMALL_STATE(179)] = 7129,
  [SMALL_STATE(180)] = 7144,
  [SMALL_STATE(181)] = 7161,
  [SMALL_STATE(182)] = 7176,
  [SMALL_STATE(183)] = 7191,
  [SMALL_STATE(184)] = 7206,
  [SMALL_STATE(185)] = 7221,
  [SMALL_STATE(186)] = 7236,
  [SMALL_STATE(187)] = 7251,
  [SMALL_STATE(188)] = 7266,
  [SMALL_STATE(189)] = 7281,
  [SMALL_STATE(190)] = 7296,
  [SMALL_STATE(191)] = 7307,
  [SMALL_STATE(192)] = 7318,
  [SMALL_STATE(193)] = 7331,
  [SMALL_STATE(194)] = 7342,
  [SMALL_STATE(195)] = 7357,
  [SMALL_STATE(196)] = 7372,
  [SMALL_STATE(197)] = 7383,
  [SMALL_STATE(198)] = 7398,
  [SMALL_STATE(199)] = 7413,
  [SMALL_STATE(200)] = 7424,
  [SMALL_STATE(201)] = 7435,
  [SMALL_STATE(202)] = 7446,
  [SMALL_STATE(203)] = 7459,
  [SMALL_STATE(204)] = 7473,
  [SMALL_STATE(205)] = 7485,
  [SMALL_STATE(206)] = 7497,
  [SMALL_STATE(207)] = 7511,
  [SMALL_STATE(208)] = 7525,
  [SMALL_STATE(209)] = 7536,
  [SMALL_STATE(210)] = 7547,
  [SMALL_STATE(211)] = 7558,
  [SMALL_STATE(212)] = 7569,
  [SMALL_STATE(213)] = 7578,
  [SMALL_STATE(214)] = 7589,
  [SMALL_STATE(215)] = 7598,
  [SMALL_STATE(216)] = 7608,
  [SMALL_STATE(217)] = 7616,
  [SMALL_STATE(218)] = 7626,
  [SMALL_STATE(219)] = 7636,
  [SMALL_STATE(220)] = 7646,
  [SMALL_STATE(221)] = 7656,
  [SMALL_STATE(222)] = 7666,
  [SMALL_STATE(223)] = 7674,
  [SMALL_STATE(224)] = 7684,
  [SMALL_STATE(225)] = 7694,
  [SMALL_STATE(226)] = 7702,
  [SMALL_STATE(227)] = 7712,
  [SMALL_STATE(228)] = 7722,
  [SMALL_STATE(229)] = 7732,
  [SMALL_STATE(230)] = 7740,
  [SMALL_STATE(231)] = 7750,
  [SMALL_STATE(232)] = 7758,
  [SMALL_STATE(233)] = 7768,
  [SMALL_STATE(234)] = 7776,
  [SMALL_STATE(235)] = 7786,
  [SMALL_STATE(236)] = 7796,
  [SMALL_STATE(237)] = 7804,
  [SMALL_STATE(238)] = 7814,
  [SMALL_STATE(239)] = 7822,
  [SMALL_STATE(240)] = 7832,
  [SMALL_STATE(241)] = 7840,
  [SMALL_STATE(242)] = 7850,
  [SMALL_STATE(243)] = 7860,
  [SMALL_STATE(244)] = 7868,
  [SMALL_STATE(245)] = 7875,
  [SMALL_STATE(246)] = 7882,
  [SMALL_STATE(247)] = 7889,
  [SMALL_STATE(248)] = 7896,
  [SMALL_STATE(249)] = 7903,
  [SMALL_STATE(250)] = 7910,
  [SMALL_STATE(251)] = 7917,
  [SMALL_STATE(252)] = 7924,
  [SMALL_STATE(253)] = 7931,
  [SMALL_STATE(254)] = 7938,
  [SMALL_STATE(255)] = 7945,
  [SMALL_STATE(256)] = 7952,
  [SMALL_STATE(257)] = 7959,
  [SMALL_STATE(258)] = 7966,
  [SMALL_STATE(259)] = 7973,
  [SMALL_STATE(260)] = 7980,
  [SMALL_STATE(261)] = 7987,
  [SMALL_STATE(262)] = 7994,
  [SMALL_STATE(263)] = 8001,
  [SMALL_STATE(264)] = 8008,
  [SMALL_STATE(265)] = 8015,
  [SMALL_STATE(266)] = 8022,
  [SMALL_STATE(267)] = 8029,
  [SMALL_STATE(268)] = 8036,
  [SMALL_STATE(269)] = 8043,
  [SMALL_STATE(270)] = 8050,
  [SMALL_STATE(271)] = 8057,
  [SMALL_STATE(272)] = 8064,
  [SMALL_STATE(273)] = 8071,
  [SMALL_STATE(274)] = 8078,
  [SMALL_STATE(275)] = 8085,
  [SMALL_STATE(276)] = 8092,
  [SMALL_STATE(277)] = 8099,
  [SMALL_STATE(278)] = 8106,
  [SMALL_STATE(279)] = 8113,
  [SMALL_STATE(280)] = 8120,
  [SMALL_STATE(281)] = 8127,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(153),
  [9] = {.count = 1, .reusable = true}, SHIFT(198),
  [11] = {.count = 1, .reusable = true}, SHIFT(141),
  [13] = {.count = 1, .reusable = true}, SHIFT(176),
  [15] = {.count = 1, .reusable = true}, SHIFT(152),
  [17] = {.count = 1, .reusable = true}, SHIFT(195),
  [19] = {.count = 1, .reusable = true}, SHIFT(183),
  [21] = {.count = 1, .reusable = true}, SHIFT(272),
  [23] = {.count = 1, .reusable = true}, SHIFT(144),
  [25] = {.count = 1, .reusable = false}, SHIFT(245),
  [27] = {.count = 1, .reusable = true}, SHIFT(40),
  [29] = {.count = 1, .reusable = false}, SHIFT(40),
  [31] = {.count = 1, .reusable = true}, SHIFT(270),
  [33] = {.count = 1, .reusable = true}, SHIFT(207),
  [35] = {.count = 1, .reusable = true}, SHIFT(269),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(253),
  [41] = {.count = 1, .reusable = false}, SHIFT(29),
  [43] = {.count = 1, .reusable = false}, SHIFT(244),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = false}, SHIFT(261),
  [49] = {.count = 1, .reusable = false}, SHIFT(66),
  [51] = {.count = 1, .reusable = false}, SHIFT(260),
  [53] = {.count = 1, .reusable = false}, SHIFT(199),
  [55] = {.count = 1, .reusable = true}, SHIFT(13),
  [57] = {.count = 1, .reusable = true}, SHIFT(37),
  [59] = {.count = 1, .reusable = true}, SHIFT(20),
  [61] = {.count = 1, .reusable = true}, SHIFT(6),
  [63] = {.count = 1, .reusable = true}, SHIFT(8),
  [65] = {.count = 1, .reusable = false}, SHIFT(189),
  [67] = {.count = 1, .reusable = false}, SHIFT(45),
  [69] = {.count = 1, .reusable = true}, SHIFT(45),
  [71] = {.count = 1, .reusable = true}, SHIFT(66),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [122] = {.count = 1, .reusable = true}, SHIFT(26),
  [124] = {.count = 1, .reusable = true}, SHIFT(58),
  [126] = {.count = 1, .reusable = true}, SHIFT(53),
  [128] = {.count = 1, .reusable = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = true}, SHIFT(46),
  [132] = {.count = 1, .reusable = true}, SHIFT(25),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [136] = {.count = 1, .reusable = false}, SHIFT(33),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(153),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(140),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(182),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(152),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(175),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(181),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(185),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(144),
  [168] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(245),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(40),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(40),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [181] = {.count = 1, .reusable = false}, SHIFT(36),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [185] = {.count = 1, .reusable = true}, SHIFT(140),
  [187] = {.count = 1, .reusable = true}, SHIFT(182),
  [189] = {.count = 1, .reusable = true}, SHIFT(175),
  [191] = {.count = 1, .reusable = true}, SHIFT(181),
  [193] = {.count = 1, .reusable = true}, SHIFT(185),
  [195] = {.count = 1, .reusable = true}, SHIFT(84),
  [197] = {.count = 1, .reusable = true}, SHIFT(75),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(36),
  [204] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [216] = {.count = 1, .reusable = true}, SHIFT(158),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [226] = {.count = 1, .reusable = true}, SHIFT(180),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [230] = {.count = 1, .reusable = true}, SHIFT(100),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(14),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 7),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 7),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(17),
  [268] = {.count = 1, .reusable = false}, SHIFT(17),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(19),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 4),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 4),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 7),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 7),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 6),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 6),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 5),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 5),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(203),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 3),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [322] = {.count = 1, .reusable = true}, SHIFT(98),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 4),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 4),
  [328] = {.count = 1, .reusable = true}, SHIFT(147),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [332] = {.count = 1, .reusable = false}, SHIFT(174),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [342] = {.count = 1, .reusable = true}, SHIFT(148),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [364] = {.count = 1, .reusable = true}, SHIFT(142),
  [366] = {.count = 1, .reusable = true}, SHIFT(164),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [376] = {.count = 1, .reusable = true}, SHIFT(186),
  [378] = {.count = 1, .reusable = true}, SHIFT(135),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [388] = {.count = 1, .reusable = false}, SHIFT(187),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [392] = {.count = 1, .reusable = false}, SHIFT(111),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [398] = {.count = 1, .reusable = false}, SHIFT(108),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_io_macro, 4),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_io_macro, 4),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 3),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [440] = {.count = 1, .reusable = true}, SHIFT(167),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [446] = {.count = 1, .reusable = true}, SHIFT(112),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 8),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 8),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [472] = {.count = 1, .reusable = false}, SHIFT(188),
  [474] = {.count = 1, .reusable = true}, SHIFT(179),
  [476] = {.count = 1, .reusable = true}, SHIFT(134),
  [478] = {.count = 1, .reusable = true}, SHIFT(159),
  [480] = {.count = 1, .reusable = true}, SHIFT(24),
  [482] = {.count = 1, .reusable = false}, SHIFT(24),
  [484] = {.count = 1, .reusable = true}, SHIFT(170),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [500] = {.count = 1, .reusable = true}, SHIFT(16),
  [502] = {.count = 1, .reusable = true}, SHIFT(161),
  [504] = {.count = 1, .reusable = true}, SHIFT(138),
  [506] = {.count = 1, .reusable = true}, SHIFT(201),
  [508] = {.count = 1, .reusable = true}, SHIFT(22),
  [510] = {.count = 1, .reusable = true}, SHIFT(146),
  [512] = {.count = 1, .reusable = true}, SHIFT(64),
  [514] = {.count = 1, .reusable = false}, SHIFT(64),
  [516] = {.count = 1, .reusable = true}, SHIFT(38),
  [518] = {.count = 1, .reusable = false}, SHIFT(38),
  [520] = {.count = 1, .reusable = false}, SHIFT(233),
  [522] = {.count = 1, .reusable = true}, SHIFT(233),
  [524] = {.count = 1, .reusable = true}, SHIFT(2),
  [526] = {.count = 1, .reusable = true}, SHIFT(4),
  [528] = {.count = 1, .reusable = true}, SHIFT(97),
  [530] = {.count = 1, .reusable = true}, SHIFT(31),
  [532] = {.count = 1, .reusable = true}, SHIFT(79),
  [534] = {.count = 1, .reusable = true}, SHIFT(68),
  [536] = {.count = 1, .reusable = true}, SHIFT(258),
  [538] = {.count = 1, .reusable = true}, SHIFT(57),
  [540] = {.count = 1, .reusable = true}, SHIFT(60),
  [542] = {.count = 1, .reusable = true}, SHIFT(76),
  [544] = {.count = 1, .reusable = false}, SHIFT(76),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [552] = {.count = 1, .reusable = true}, SHIFT(9),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [568] = {.count = 1, .reusable = true}, SHIFT(177),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [572] = {.count = 1, .reusable = true}, SHIFT(7),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [580] = {.count = 1, .reusable = true}, SHIFT(99),
  [582] = {.count = 1, .reusable = true}, SHIFT(166),
  [584] = {.count = 1, .reusable = true}, SHIFT(35),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [592] = {.count = 1, .reusable = true}, SHIFT(262),
  [594] = {.count = 1, .reusable = true}, SHIFT(173),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [598] = {.count = 1, .reusable = true}, SHIFT(90),
  [600] = {.count = 1, .reusable = true}, SHIFT(197),
  [602] = {.count = 1, .reusable = true}, SHIFT(143),
  [604] = {.count = 1, .reusable = true}, SHIFT(184),
  [606] = {.count = 1, .reusable = true}, SHIFT(21),
  [608] = {.count = 1, .reusable = true}, SHIFT(67),
  [610] = {.count = 1, .reusable = true}, SHIFT(194),
  [612] = {.count = 1, .reusable = true}, SHIFT(43),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [616] = {.count = 1, .reusable = true}, SHIFT(62),
  [618] = {.count = 1, .reusable = true}, SHIFT(206),
  [620] = {.count = 1, .reusable = true}, SHIFT(94),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [624] = {.count = 1, .reusable = true}, SHIFT(80),
  [626] = {.count = 1, .reusable = true}, SHIFT(178),
  [628] = {.count = 1, .reusable = true}, SHIFT(191),
  [630] = {.count = 1, .reusable = true}, SHIFT(41),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [634] = {.count = 1, .reusable = true}, SHIFT(15),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [638] = {.count = 1, .reusable = true}, SHIFT(30),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [642] = {.count = 1, .reusable = true}, SHIFT(63),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [646] = {.count = 1, .reusable = true}, SHIFT(50),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [652] = {.count = 1, .reusable = true}, SHIFT(150),
  [654] = {.count = 1, .reusable = true}, SHIFT(3),
  [656] = {.count = 1, .reusable = true}, SHIFT(70),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_functor_built_in, 1),
  [662] = {.count = 1, .reusable = true}, SHIFT(171),
  [664] = {.count = 1, .reusable = true}, SHIFT(49),
  [666] = {.count = 1, .reusable = true}, SHIFT(59),
  [668] = {.count = 1, .reusable = true}, SHIFT(160),
  [670] = {.count = 1, .reusable = true}, SHIFT(168),
  [672] = {.count = 1, .reusable = true}, SHIFT(151),
  [674] = {.count = 1, .reusable = true}, SHIFT(28),
  [676] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [678] = {.count = 1, .reusable = false}, SHIFT(281),
  [680] = {.count = 1, .reusable = true}, SHIFT(154),
  [682] = {.count = 1, .reusable = true}, SHIFT(252),
  [684] = {.count = 1, .reusable = true}, SHIFT(12),
  [686] = {.count = 1, .reusable = true}, SHIFT(162),
  [688] = {.count = 1, .reusable = true}, SHIFT(137),
  [690] = {.count = 1, .reusable = true}, SHIFT(139),
  [692] = {.count = 1, .reusable = true}, SHIFT(23),
  [694] = {.count = 1, .reusable = true}, SHIFT(163),
  [696] = {.count = 1, .reusable = true}, SHIFT(136),
  [698] = {.count = 1, .reusable = true}, SHIFT(165),
  [700] = {.count = 1, .reusable = true}, SHIFT(105),
  [702] = {.count = 1, .reusable = true}, SHIFT(157),
  [704] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [706] = {.count = 1, .reusable = false}, SHIFT(103),
  [708] = {.count = 1, .reusable = true}, SHIFT(276),
  [710] = {.count = 1, .reusable = true}, SHIFT(266),
  [712] = {.count = 1, .reusable = true}, SHIFT(102),
  [714] = {.count = 1, .reusable = true}, SHIFT(149),
  [716] = {.count = 1, .reusable = true}, SHIFT(5),
  [718] = {.count = 1, .reusable = true}, SHIFT(254),
  [720] = {.count = 1, .reusable = false}, SHIFT(265),
  [722] = {.count = 1, .reusable = true}, SHIFT(145),
  [724] = {.count = 1, .reusable = true}, SHIFT(156),
  [726] = {.count = 1, .reusable = true}, SHIFT(172),
  [728] = {.count = 1, .reusable = true}, SHIFT(107),
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
