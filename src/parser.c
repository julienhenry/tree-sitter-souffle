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
#define STATE_COUNT 294
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
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
  sym_MIN = 40,
  sym_MAX = 41,
  sym_AS = 42,
  sym_NIL = 43,
  sym_UNDERSCORE = 44,
  sym_COUNT = 45,
  sym_SUM = 46,
  sym_TRUE = 47,
  sym_FALSE = 48,
  sym_TOSTRING = 49,
  sym_TONUMBER = 50,
  sym_TOFLOAT = 51,
  sym_TOUNSIGNED = 52,
  sym_PLAN = 53,
  sym_PIPE = 54,
  sym_LBRACKET = 55,
  sym_RBRACKET = 56,
  sym_DOLLAR = 57,
  sym_PLUS = 58,
  sym_MINUS = 59,
  sym_LPAREN = 60,
  sym_RPAREN = 61,
  sym_COMMA = 62,
  sym_COLON = 63,
  sym_SEMICOLON = 64,
  sym_DOT = 65,
  sym_SUBTYPE = 66,
  sym_LE = 67,
  sym_GE = 68,
  sym_NE = 69,
  sym_EQUALS = 70,
  sym_EXCLAMATION = 71,
  sym_STAR = 72,
  sym_AT = 73,
  sym_SLASH = 74,
  sym_CARET = 75,
  sym_PERCENT = 76,
  sym_LBRACE = 77,
  sym_RBRACE = 78,
  sym_LT = 79,
  sym_GT = 80,
  sym_IF = 81,
  sym_INPUT = 82,
  sym_OUTPUT = 83,
  sym_CPP_VAR = 84,
  aux_sym_IDENT_token1 = 85,
  aux_sym_IDENT_token2 = 86,
  aux_sym_IDENT_token3 = 87,
  aux_sym_IDENT_token4 = 88,
  aux_sym_NUMBER_token1 = 89,
  aux_sym_NUMBER_token2 = 90,
  aux_sym_NUMBER_token3 = 91,
  sym_FLOAT = 92,
  sym_STRING = 93,
  sym_COMMENT = 94,
  sym_LOC = 95,
  anon_sym_POUNDinclude = 96,
  anon_sym_DQUOTE = 97,
  anon_sym_POUNDline = 98,
  anon_sym_POUNDdefine = 99,
  aux_sym_define_token1 = 100,
  sym_filename = 101,
  anon_sym_sips = 102,
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
  sym_plan_item = 131,
  sym_identifier_list = 132,
  sym_exec_order_list = 133,
  sym_term = 134,
  sym_atom = 135,
  sym_constraint = 136,
  sym_non_empty_arg_list = 137,
  sym_arg = 138,
  sym_functor_built_in = 139,
  sym_component = 140,
  sym_component_head = 141,
  sym_comp_type = 142,
  sym_type_params = 143,
  sym_type_param_list = 144,
  sym_component_body = 145,
  sym_comp_init = 146,
  sym_functor_decl = 147,
  sym_pragma = 148,
  sym_io_head = 149,
  sym_io_directive_list = 150,
  sym_io_relation_list = 151,
  sym_non_empty_key_value_pairs = 152,
  sym_kvp_value = 153,
  aux_sym_source_file_repeat1 = 154,
  aux_sym_relation_tags_repeat1 = 155,
  aux_sym_component_repeat1 = 156,
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
  [anon_sym_sips] = "sips",
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
  [sym_plan_item] = "plan_item",
  [sym_identifier_list] = "identifier_list",
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
  [anon_sym_sips] = anon_sym_sips,
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
  [sym_plan_item] = sym_plan_item,
  [sym_identifier_list] = sym_identifier_list,
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
  [anon_sym_sips] = {
    .visible = true,
    .named = false,
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
  [sym_plan_item] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
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
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '%') ADVANCE(244);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(251);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '|') ADVANCE(216);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '%') ADVANCE(244);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(420);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(251);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(244);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(251);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(244);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(228);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(251);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(418);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(425);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '|') ADVANCE(216);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(241);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(429);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(1);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 140:
      if (lookahead == 'z') ADVANCE(49);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(429);
      if (lookahead == '\r') ADVANCE(431);
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(434);
      if (lookahead == '\r') ADVANCE(435);
      END_STATE();
    case 149:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(420);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '|') ADVANCE(216);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 150:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '|') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (lookahead == '_') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_BTREE_DELETE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_PLUS);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_AT);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(429);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_INPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_OUTPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_CPP_VAR);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'N') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'P') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'U') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == 'x') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 'x') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'n') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'o') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'q') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == 'v') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == 'v') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'P') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'T') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'U') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'U') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == '_') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == '_') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'b') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'c') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'f') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'g') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'h') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'h') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'm') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'p') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 's') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'u') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (lookahead == 'z') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_IDENT_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(451);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(450);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(147);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(445);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(427);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_LOC);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_LOC);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(148);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(445);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(442);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(442);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(450);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(433);
      if (lookahead == '"') ADVANCE(429);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_sips);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 149},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 149},
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
  [30] = {.lex_state = 152},
  [31] = {.lex_state = 152},
  [32] = {.lex_state = 152},
  [33] = {.lex_state = 149},
  [34] = {.lex_state = 152},
  [35] = {.lex_state = 149},
  [36] = {.lex_state = 149},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 150},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 149},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 149},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 149},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 149},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 149},
  [58] = {.lex_state = 149},
  [59] = {.lex_state = 149},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 150},
  [62] = {.lex_state = 150},
  [63] = {.lex_state = 149},
  [64] = {.lex_state = 149},
  [65] = {.lex_state = 149},
  [66] = {.lex_state = 149},
  [67] = {.lex_state = 149},
  [68] = {.lex_state = 149},
  [69] = {.lex_state = 149},
  [70] = {.lex_state = 150},
  [71] = {.lex_state = 149},
  [72] = {.lex_state = 150},
  [73] = {.lex_state = 150},
  [74] = {.lex_state = 149},
  [75] = {.lex_state = 149},
  [76] = {.lex_state = 149},
  [77] = {.lex_state = 149},
  [78] = {.lex_state = 149},
  [79] = {.lex_state = 153},
  [80] = {.lex_state = 149},
  [81] = {.lex_state = 149},
  [82] = {.lex_state = 149},
  [83] = {.lex_state = 149},
  [84] = {.lex_state = 149},
  [85] = {.lex_state = 149},
  [86] = {.lex_state = 150},
  [87] = {.lex_state = 149},
  [88] = {.lex_state = 149},
  [89] = {.lex_state = 153},
  [90] = {.lex_state = 153},
  [91] = {.lex_state = 149},
  [92] = {.lex_state = 153},
  [93] = {.lex_state = 149},
  [94] = {.lex_state = 153},
  [95] = {.lex_state = 149},
  [96] = {.lex_state = 149},
  [97] = {.lex_state = 149},
  [98] = {.lex_state = 150},
  [99] = {.lex_state = 149},
  [100] = {.lex_state = 149},
  [101] = {.lex_state = 149},
  [102] = {.lex_state = 151},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 149},
  [105] = {.lex_state = 149},
  [106] = {.lex_state = 149},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 149},
  [109] = {.lex_state = 149},
  [110] = {.lex_state = 149},
  [111] = {.lex_state = 149},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 149},
  [114] = {.lex_state = 149},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 151},
  [122] = {.lex_state = 149},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 149},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 149},
  [127] = {.lex_state = 149},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 149},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 149},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 2},
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
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 149},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 149},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 149},
  [220] = {.lex_state = 149},
  [221] = {.lex_state = 149},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 449},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 149},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 149},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 149},
  [263] = {.lex_state = 149},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 149},
  [269] = {.lex_state = 149},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 149},
  [274] = {.lex_state = 444},
  [275] = {.lex_state = 149},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 149},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 149},
  [285] = {.lex_state = 449},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 149},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 149},
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
    [sym_source_file] = STATE(253),
    [sym_io_macro] = STATE(106),
    [sym_IDENT] = STATE(158),
    [sym_unit] = STATE(10),
    [sym_include] = STATE(106),
    [sym_line] = STATE(106),
    [sym_define] = STATE(106),
    [sym_identifier] = STATE(237),
    [sym_type] = STATE(106),
    [sym_relation_decl] = STATE(106),
    [sym_fact] = STATE(106),
    [sym_rule] = STATE(106),
    [sym_rule_def] = STATE(50),
    [sym_head] = STATE(240),
    [sym_atom] = STATE(212),
    [sym_component] = STATE(106),
    [sym_component_head] = STATE(221),
    [sym_comp_init] = STATE(106),
    [sym_functor_decl] = STATE(106),
    [sym_pragma] = STATE(106),
    [sym_io_head] = STATE(106),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    [aux_sym_IDENT_token3] = ACTIONS(27),
    [aux_sym_IDENT_token4] = ACTIONS(27),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(29),
    [anon_sym_POUNDline] = ACTIONS(31),
    [anon_sym_POUNDdefine] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 31,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(180), 1,
      sym_term,
    STATE(194), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(266), 1,
      sym_body,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [113] = 31,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(180), 1,
      sym_term,
    STATE(194), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(256), 1,
      sym_body,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [226] = 31,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(180), 1,
      sym_term,
    STATE(194), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(271), 1,
      sym_functor_built_in,
    STATE(288), 1,
      sym_body,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [339] = 31,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(180), 1,
      sym_term,
    STATE(194), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(261), 1,
      sym_body,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [452] = 30,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(118), 1,
      sym_arg,
    STATE(180), 1,
      sym_term,
    STATE(194), 1,
      sym_conjunction,
    STATE(224), 1,
      sym_disjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [562] = 29,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(180), 1,
      sym_term,
    STATE(201), 1,
      sym_conjunction,
    STATE(237), 1,
      sym_identifier,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [669] = 28,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(202), 1,
      sym_term,
    STATE(237), 1,
      sym_identifier,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [773] = 28,
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
      sym_MINUS,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(49), 1,
      sym_NUMBER,
    STATE(103), 1,
      sym_IDENT,
    STATE(120), 1,
      sym_arg,
    STATE(192), 1,
      sym_term,
    STATE(237), 1,
      sym_identifier,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(190), 2,
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
  [877] = 24,
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
    ACTIONS(29), 1,
      anon_sym_POUNDinclude,
    ACTIONS(31), 1,
      anon_sym_POUNDline,
    ACTIONS(33), 1,
      anon_sym_POUNDdefine,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_rule_def,
    STATE(158), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(221), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(240), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(11), 2,
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
    STATE(106), 13,
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
  [970] = 24,
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
    ACTIONS(108), 1,
      anon_sym_POUNDinclude,
    ACTIONS(111), 1,
      anon_sym_POUNDline,
    ACTIONS(114), 1,
      anon_sym_POUNDdefine,
    STATE(50), 1,
      sym_rule_def,
    STATE(158), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(221), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(240), 1,
      sym_head,
    ACTIONS(93), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(102), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(105), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(11), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(81), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(99), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(106), 13,
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
  [1063] = 23,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    ACTIONS(119), 1,
      sym_RPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(248), 1,
      sym_non_empty_arg_list,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1150] = 23,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    ACTIONS(121), 1,
      sym_RPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(228), 1,
      sym_non_empty_arg_list,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1237] = 23,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    ACTIONS(123), 1,
      sym_RBRACKET,
    STATE(128), 1,
      sym_arg,
    STATE(225), 1,
      sym_non_empty_arg_list,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1324] = 23,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    ACTIONS(125), 1,
      sym_RPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(238), 1,
      sym_non_empty_arg_list,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1411] = 22,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(128), 1,
      sym_arg,
    STATE(245), 1,
      sym_non_empty_arg_list,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1495] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(129), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1576] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(133), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1657] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(53), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1738] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(134), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1819] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(130), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1900] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(127), 1,
      sym_LPAREN,
    STATE(133), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [1981] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(131), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2062] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(48), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2143] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(46), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2224] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(135), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2305] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(44), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2386] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(125), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2467] = 21,
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
      sym_MINUS,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(117), 1,
      sym_LPAREN,
    STATE(132), 1,
      sym_arg,
    STATE(271), 1,
      sym_functor_built_in,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    ACTIONS(69), 2,
      sym_FLOAT,
      sym_STRING,
    STATE(49), 2,
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
  [2548] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(32), 1,
      aux_sym_relation_tags_repeat1,
    STATE(91), 1,
      sym_relation_tags,
    ACTIONS(133), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(131), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(129), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2597] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(32), 1,
      aux_sym_relation_tags_repeat1,
    STATE(83), 1,
      sym_relation_tags,
    ACTIONS(137), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(131), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(135), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2646] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(34), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(143), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(141), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(139), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2692] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(147), 1,
      sym_TYPE,
    ACTIONS(149), 1,
      sym_INSTANTIATE,
    ACTIONS(153), 1,
      sym_OVERRIDE,
    ACTIONS(155), 1,
      sym_RBRACE,
    STATE(50), 1,
      sym_rule_def,
    STATE(158), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(221), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(240), 1,
      sym_head,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(151), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(35), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(145), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(127), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2768] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(34), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(162), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(159), 9,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
      sym_BTREE_DELETE_QUALIFIER,
    ACTIONS(157), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [2814] = 20,
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
      sym_RBRACE,
    STATE(50), 1,
      sym_rule_def,
    STATE(158), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(221), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(240), 1,
      sym_head,
    ACTIONS(179), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(190), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(193), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    STATE(35), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(167), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    ACTIONS(187), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    STATE(127), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2890] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(147), 1,
      sym_TYPE,
    ACTIONS(149), 1,
      sym_INSTANTIATE,
    ACTIONS(153), 1,
      sym_OVERRIDE,
    ACTIONS(196), 1,
      sym_RBRACE,
    STATE(50), 1,
      sym_rule_def,
    STATE(158), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(221), 1,
      sym_component_head,
    STATE(237), 1,
      sym_identifier,
    STATE(240), 1,
      sym_head,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(151), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(33), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(23), 3,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
    ACTIONS(145), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(127), 8,
      sym_io_macro,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_rule,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2966] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(158), 1,
      sym_IDENT,
    STATE(226), 1,
      sym_identifier,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(198), 12,
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
    ACTIONS(200), 15,
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
  [3015] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(204), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(202), 23,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3053] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(204), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(202), 25,
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
  [3090] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(208), 1,
      sym_LT,
    STATE(45), 1,
      sym_type_params,
    ACTIONS(210), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(206), 22,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(214), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(212), 23,
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
  [3167] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(218), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(216), 24,
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
  [3203] = 3,
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
  [3239] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(232), 2,
      sym_LT,
      sym_GT,
    ACTIONS(224), 11,
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
    ACTIONS(228), 11,
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
  [3280] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(236), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(234), 22,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3315] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(232), 4,
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
  [3350] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(238), 22,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3385] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(244), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(242), 23,
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
  [3420] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(198), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(200), 23,
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
  [3455] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      sym_PLAN,
    ACTIONS(252), 1,
      sym_LOC,
    STATE(68), 1,
      sym_exec_plan,
    ACTIONS(250), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(246), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3496] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(254), 23,
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
  [3531] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(244), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(242), 23,
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
  [3566] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(244), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(242), 23,
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
  [3601] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(232), 4,
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
  [3636] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(258), 23,
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
  [3671] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(264), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(262), 23,
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
  [3706] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(268), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(266), 21,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3740] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(270), 21,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3774] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(276), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(274), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(204), 7,
      sym_DOT,
      sym_LT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(202), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(280), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(278), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3876] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(284), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(282), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3910] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(288), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(286), 21,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3944] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(290), 21,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3978] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 1,
      sym_COMMA,
    ACTIONS(298), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(294), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4014] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(302), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(300), 21,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4048] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(306), 5,
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
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4082] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 1,
      sym_LOC,
    ACTIONS(310), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4117] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(316), 1,
      sym_PIPE,
    ACTIONS(318), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(314), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4152] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LBRACE,
    ACTIONS(284), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(282), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4187] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(322), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4220] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_DOT,
    ACTIONS(330), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_PRAGMA,
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4255] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_DOT,
    ACTIONS(334), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(332), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4290] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
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
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(342), 5,
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
      sym_PIPE,
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4356] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(346), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(344), 20,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      sym_LOC,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4389] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(350), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(348), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4421] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(354), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(352), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4453] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(358), 1,
      sym_DOT,
    ACTIONS(362), 1,
      anon_sym_stateful,
    ACTIONS(360), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(356), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4489] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(366), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(364), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4521] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(310), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_RBRACE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4553] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(370), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(368), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4585] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(133), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(129), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4617] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(374), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(372), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4649] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(378), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(376), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4681] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_DOT,
    ACTIONS(382), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(380), 18,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4715] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(386), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(384), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4747] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(390), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(388), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4779] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(358), 1,
      sym_DOT,
    ACTIONS(396), 1,
      anon_sym_stateful,
    ACTIONS(394), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(392), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4815] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(280), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(278), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4847] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(400), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(398), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4879] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(284), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(282), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4911] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(404), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(402), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4943] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(204), 7,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
      anon_sym_stateful,
    ACTIONS(202), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4975] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(408), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(406), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5007] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(412), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(410), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5039] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(416), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(414), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5071] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      sym_DOT,
    ACTIONS(420), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
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
      sym_PRAGMA,
      sym_PIPE,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5105] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(424), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(422), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5137] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(428), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(426), 19,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5169] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(432), 1,
      sym_LPAREN,
    ACTIONS(434), 1,
      sym_COMMA,
    ACTIONS(436), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(430), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5205] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(438), 1,
      sym_SUBTYPE,
    ACTIONS(440), 1,
      sym_EQUALS,
    ACTIONS(428), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(426), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5241] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(198), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(200), 17,
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
  [5274] = 4,
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
    ACTIONS(442), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5307] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(448), 1,
      sym_PIPE,
    ACTIONS(366), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(364), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5340] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(452), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(450), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5370] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(284), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(282), 16,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5400] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(456), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(454), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5430] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(460), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(458), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5460] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(464), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(462), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5490] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(466), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5520] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(280), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(278), 16,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5550] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(472), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(470), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5580] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(356), 17,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [5610] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LBRACE,
    ACTIONS(284), 6,
      sym_DOT,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(282), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5641] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(474), 1,
      sym_DOT,
    ACTIONS(330), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(326), 15,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5672] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(474), 1,
      sym_DOT,
    ACTIONS(334), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(332), 15,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5703] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(119), 1,
      sym_RPAREN,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(478), 2,
      sym_LT,
      sym_GT,
    ACTIONS(476), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(224), 11,
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
  [5740] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(474), 1,
      sym_DOT,
    ACTIONS(420), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(418), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5770] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(478), 2,
      sym_LT,
      sym_GT,
    ACTIONS(476), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(224), 11,
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
  [5804] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      sym_SUBTYPE,
    ACTIONS(482), 1,
      sym_EQUALS,
    ACTIONS(428), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(426), 13,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5836] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(432), 1,
      sym_LPAREN,
    ACTIONS(484), 1,
      sym_COMMA,
    ACTIONS(436), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(430), 13,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5868] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(474), 1,
      sym_DOT,
    ACTIONS(382), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(380), 14,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5898] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(486), 1,
      sym_PIPE,
    ACTIONS(366), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(364), 13,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5927] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(488), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(224), 11,
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
  [5958] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(492), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(490), 13,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [5984] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(496), 5,
      sym_INPUT,
      sym_OUTPUT,
      sym_CPP_VAR,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(494), 13,
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
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
  [6010] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(498), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(224), 11,
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
  [6039] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(500), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(224), 11,
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
  [6068] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(119), 1,
      sym_RPAREN,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(502), 1,
      sym_COMMA,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(224), 11,
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
  [6098] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(504), 1,
      sym_RPAREN,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(224), 11,
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
  [6125] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(506), 1,
      sym_COMMA,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(224), 11,
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
  [6152] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(508), 1,
      sym_COLON,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(224), 11,
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
  [6179] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(510), 1,
      sym_COMMA,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(224), 11,
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
  [6206] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(119), 1,
      sym_RPAREN,
    ACTIONS(230), 1,
      sym_CARET,
    ACTIONS(226), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(224), 11,
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
  [6233] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(512), 1,
      sym_LBRACKET,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(69), 1,
      sym_sum_branch,
    STATE(80), 1,
      sym_non_empty_sum_branch_list,
    STATE(115), 1,
      sym_IDENT,
    STATE(119), 1,
      sym_identifier,
    STATE(124), 1,
      sym_union_type_list,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6263] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(512), 1,
      sym_LBRACKET,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(69), 1,
      sym_sum_branch,
    STATE(70), 1,
      sym_IDENT,
    STATE(80), 1,
      sym_non_empty_sum_branch_list,
    STATE(98), 1,
      sym_identifier,
    STATE(105), 1,
      sym_union_type_list,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6293] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(524), 1,
      sym_STRING,
    STATE(243), 1,
      sym_kvp_value,
    STATE(247), 1,
      sym_IDENT,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(522), 2,
      sym_TRUE,
      sym_FALSE,
  [6318] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(524), 1,
      sym_STRING,
    STATE(223), 1,
      sym_kvp_value,
    STATE(247), 1,
      sym_IDENT,
    ACTIONS(25), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 2,
      aux_sym_IDENT_token3,
      aux_sym_IDENT_token4,
    ACTIONS(522), 2,
      sym_TRUE,
      sym_FALSE,
  [6343] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(526), 1,
      sym_LBRACE,
    STATE(54), 1,
      sym_atom,
    STATE(158), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6367] = 8,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(528), 1,
      sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_sips,
    STATE(65), 1,
      sym_plan_item,
    STATE(76), 1,
      sym_exec_plan_list,
    STATE(273), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6393] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(532), 1,
      sym_AT,
    STATE(158), 1,
      sym_IDENT,
    STATE(218), 1,
      sym_identifier,
    STATE(283), 1,
      sym_identifier_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6417] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(534), 1,
      sym_LBRACE,
    STATE(56), 1,
      sym_atom,
    STATE(158), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6441] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(99), 1,
      sym_io_directive_list,
    STATE(107), 1,
      sym_IDENT,
    STATE(117), 1,
      sym_identifier,
    STATE(122), 1,
      sym_io_relation_list,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6465] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(532), 1,
      sym_AT,
    STATE(158), 1,
      sym_IDENT,
    STATE(218), 1,
      sym_identifier,
    STATE(276), 1,
      sym_identifier_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6489] = 8,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(528), 1,
      sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_sips,
    STATE(65), 1,
      sym_plan_item,
    STATE(74), 1,
      sym_exec_plan_list,
    STATE(273), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6515] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(62), 1,
      sym_IDENT,
    STATE(73), 1,
      sym_identifier,
    STATE(99), 1,
      sym_io_directive_list,
    STATE(101), 1,
      sym_io_relation_list,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6539] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(532), 1,
      sym_AT,
    STATE(158), 1,
      sym_IDENT,
    STATE(218), 1,
      sym_identifier,
    STATE(265), 1,
      sym_identifier_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6563] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(536), 1,
      sym_RPAREN,
    STATE(231), 1,
      sym_non_empty_key_value_pairs,
    STATE(279), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6584] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(538), 1,
      sym_RBRACKET,
    STATE(229), 1,
      sym_non_empty_record_type_list,
    STATE(284), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6605] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    STATE(251), 1,
      sym_atom,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6626] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(540), 1,
      sym_RPAREN,
    STATE(232), 1,
      sym_non_empty_attributes,
    STATE(268), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6647] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(542), 1,
      sym_RPAREN,
    STATE(241), 1,
      sym_non_empty_attributes,
    STATE(268), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6668] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(69), 1,
      sym_sum_branch,
    STATE(84), 1,
      sym_non_empty_sum_branch_list,
    STATE(272), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6689] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    ACTIONS(544), 1,
      sym_RBRACE,
    STATE(239), 1,
      sym_non_empty_attributes,
    STATE(268), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6710] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(237), 1,
      sym_identifier,
    STATE(267), 1,
      sym_atom,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6731] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6749] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6761] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(96), 1,
      sym_comp_type,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6779] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6797] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(227), 1,
      sym_type_param_list,
    STATE(230), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6815] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6827] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(219), 1,
      sym_comp_type,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6845] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(214), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6863] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(107), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_identifier,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6881] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(209), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6899] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(96), 1,
      sym_comp_type,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6917] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(62), 1,
      sym_IDENT,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6935] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 1,
      aux_sym_IDENT_token3,
    STATE(89), 1,
      sym_identifier,
    STATE(92), 1,
      sym_IDENT,
    ACTIONS(546), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6953] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 1,
      aux_sym_IDENT_token3,
    STATE(79), 1,
      sym_identifier,
    STATE(92), 1,
      sym_IDENT,
    ACTIONS(546), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6971] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(242), 1,
      sym_IDENT,
    STATE(244), 1,
      sym_relation_list,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [6989] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(40), 1,
      sym_IDENT,
    STATE(220), 1,
      sym_comp_type,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7007] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(550), 1,
      sym_RPAREN,
    STATE(222), 1,
      sym_exec_order_list,
    STATE(233), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7027] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(107), 1,
      sym_IDENT,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7045] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(217), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7063] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(235), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7081] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(552), 1,
      sym_RPAREN,
    STATE(233), 1,
      sym_NUMBER,
    STATE(234), 1,
      sym_exec_order_list,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7101] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(62), 1,
      sym_IDENT,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7119] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(158), 1,
      sym_IDENT,
    STATE(246), 1,
      sym_identifier,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7137] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(554), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7148] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(236), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7163] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(259), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7178] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(112), 1,
      sym_IDENT,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7193] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(291), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7208] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(264), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7223] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(61), 1,
      sym_IDENT,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7238] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(126), 1,
      sym_IDENT,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7253] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(102), 1,
      sym_IDENT,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7268] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(80), 1,
      sym_IDENT,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7283] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(556), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7294] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(269), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7309] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7320] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(260), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7335] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(562), 1,
      sym_COMMA,
    ACTIONS(560), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7348] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(564), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7359] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(258), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7374] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 1,
      aux_sym_IDENT_token3,
    STATE(90), 1,
      sym_IDENT,
    ACTIONS(546), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7389] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 1,
      aux_sym_IDENT_token3,
    STATE(100), 1,
      sym_IDENT,
    ACTIONS(518), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7404] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(566), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7415] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7426] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(562), 1,
      sym_COMMA,
    ACTIONS(570), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7439] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7450] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(121), 1,
      sym_IDENT,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7465] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(250), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7480] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(80), 1,
      sym_IDENT,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7495] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(270), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7510] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(27), 1,
      aux_sym_IDENT_token3,
    STATE(162), 1,
      sym_IDENT,
    ACTIONS(25), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7525] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(516), 1,
      aux_sym_IDENT_token3,
    STATE(100), 1,
      sym_IDENT,
    ACTIONS(514), 3,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      aux_sym_IDENT_token4,
  [7540] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(574), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7552] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(249), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7566] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(578), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7578] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(582), 1,
      sym_DOT,
    ACTIONS(584), 1,
      sym_LE,
    ACTIONS(580), 2,
      sym_COMMA,
      sym_IF,
  [7592] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(254), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7606] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(586), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7617] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(588), 1,
      sym_SEMICOLON,
    ACTIONS(590), 2,
      sym_DOT,
      sym_RBRACE,
  [7628] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(592), 1,
      sym_RPAREN,
    ACTIONS(594), 1,
      sym_COMMA,
  [7641] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(596), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7652] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(598), 1,
      sym_RPAREN,
    ACTIONS(600), 1,
      sym_COMMA,
  [7665] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7674] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(604), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7683] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(608), 1,
      sym_LBRACE,
    ACTIONS(606), 2,
      sym_COMMA,
      sym_COLON,
  [7694] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(610), 1,
      sym_RPAREN,
    ACTIONS(612), 1,
      sym_COMMA,
  [7704] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(614), 2,
      sym_RPAREN,
      sym_COMMA,
  [7712] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(588), 1,
      sym_SEMICOLON,
    ACTIONS(616), 1,
      sym_RPAREN,
  [7722] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(119), 1,
      sym_RBRACKET,
    ACTIONS(618), 1,
      sym_COMMA,
  [7732] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(620), 1,
      sym_LPAREN,
  [7742] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(622), 1,
      sym_COMMA,
    ACTIONS(624), 1,
      sym_GT,
  [7752] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(618), 1,
      sym_COMMA,
    ACTIONS(626), 1,
      sym_RPAREN,
  [7762] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(628), 1,
      sym_RBRACKET,
    ACTIONS(630), 1,
      sym_COMMA,
  [7772] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(632), 2,
      sym_COMMA,
      sym_GT,
  [7780] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(634), 1,
      sym_RPAREN,
    ACTIONS(636), 1,
      sym_COMMA,
  [7790] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(638), 1,
      sym_RPAREN,
    ACTIONS(640), 1,
      sym_COMMA,
  [7800] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 2,
      sym_RPAREN,
      sym_COMMA,
  [7808] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(612), 1,
      sym_COMMA,
    ACTIONS(644), 1,
      sym_RPAREN,
  [7818] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(646), 1,
      sym_RPAREN,
  [7828] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(648), 2,
      sym_LPAREN,
      sym_COMMA,
  [7836] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(650), 1,
      sym_LPAREN,
  [7846] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(618), 1,
      sym_COMMA,
    ACTIONS(652), 1,
      sym_RPAREN,
  [7856] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 1,
      sym_COMMA,
    ACTIONS(654), 1,
      sym_RBRACE,
  [7866] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(656), 1,
      sym_COMMA,
    ACTIONS(658), 1,
      sym_IF,
  [7876] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 1,
      sym_COMMA,
    ACTIONS(660), 1,
      sym_RPAREN,
  [7886] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 2,
      sym_LPAREN,
      sym_COMMA,
  [7894] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 2,
      sym_RPAREN,
      sym_COMMA,
  [7902] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(666), 1,
      sym_LPAREN,
    ACTIONS(668), 1,
      sym_COMMA,
  [7912] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(618), 1,
      sym_COMMA,
    ACTIONS(670), 1,
      sym_RPAREN,
  [7922] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 1,
      sym_DOT,
    ACTIONS(670), 1,
      sym_RPAREN,
  [7932] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(672), 2,
      sym_RPAREN,
      sym_COMMA,
  [7940] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(121), 1,
      sym_RPAREN,
    ACTIONS(618), 1,
      sym_COMMA,
  [7950] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(674), 2,
      sym_RPAREN,
      sym_COMMA,
  [7958] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(676), 2,
      sym_COMMA,
      sym_GT,
  [7966] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(678), 2,
      sym_COMMA,
      sym_IF,
  [7974] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(680), 1,
      sym_LPAREN,
  [7981] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [7988] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
  [7995] = 2,
    ACTIONS(686), 1,
      sym_COMMENT,
    ACTIONS(688), 1,
      sym_filename,
  [8002] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(690), 1,
      sym_DOT,
  [8009] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(692), 1,
      sym_COLON,
  [8016] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(694), 1,
      sym_EQUALS,
  [8023] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(620), 1,
      sym_LPAREN,
  [8030] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(696), 1,
      sym_COLON,
  [8037] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(698), 1,
      sym_DOT,
  [8044] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(700), 1,
      sym_COLON,
  [8051] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(702), 1,
      sym_COLON,
  [8058] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(704), 1,
      sym_LPAREN,
  [8065] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(706), 1,
      sym_RPAREN,
  [8072] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      sym_RBRACE,
  [8079] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(708), 1,
      sym_IF,
  [8086] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(710), 1,
      sym_COLON,
  [8093] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(712), 1,
      sym_COLON,
  [8100] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(714), 1,
      sym_EQUALS,
  [8107] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(716), 1,
      sym_LPAREN,
  [8114] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LBRACE,
  [8121] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(718), 1,
      sym_COLON,
  [8128] = 2,
    ACTIONS(686), 1,
      sym_COMMENT,
    ACTIONS(720), 1,
      aux_sym_define_token1,
  [8135] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(722), 1,
      sym_COLON,
  [8142] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(724), 1,
      sym_RPAREN,
  [8149] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
  [8156] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(728), 1,
      sym_LPAREN,
  [8163] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(730), 1,
      sym_EQUALS,
  [8170] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(732), 1,
      sym_STRING,
  [8177] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(734), 1,
      anon_sym_DQUOTE,
  [8184] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(736), 1,
      sym_LPAREN,
  [8191] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(738), 1,
      sym_RPAREN,
  [8198] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(740), 1,
      sym_COLON,
  [8205] = 2,
    ACTIONS(686), 1,
      sym_COMMENT,
    ACTIONS(742), 1,
      sym_filename,
  [8212] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
  [8219] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(746), 1,
      sym_COLON,
  [8226] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(626), 1,
      sym_RBRACE,
  [8233] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(748), 1,
      sym_LPAREN,
  [8240] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(750), 1,
      sym_LPAREN,
  [8247] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(752), 1,
      sym_EQUALS,
  [8254] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(754), 1,
      sym_LPAREN,
  [8261] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(756), 1,
      sym_STRING,
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
  [SMALL_STATE(11)] = 970,
  [SMALL_STATE(12)] = 1063,
  [SMALL_STATE(13)] = 1150,
  [SMALL_STATE(14)] = 1237,
  [SMALL_STATE(15)] = 1324,
  [SMALL_STATE(16)] = 1411,
  [SMALL_STATE(17)] = 1495,
  [SMALL_STATE(18)] = 1576,
  [SMALL_STATE(19)] = 1657,
  [SMALL_STATE(20)] = 1738,
  [SMALL_STATE(21)] = 1819,
  [SMALL_STATE(22)] = 1900,
  [SMALL_STATE(23)] = 1981,
  [SMALL_STATE(24)] = 2062,
  [SMALL_STATE(25)] = 2143,
  [SMALL_STATE(26)] = 2224,
  [SMALL_STATE(27)] = 2305,
  [SMALL_STATE(28)] = 2386,
  [SMALL_STATE(29)] = 2467,
  [SMALL_STATE(30)] = 2548,
  [SMALL_STATE(31)] = 2597,
  [SMALL_STATE(32)] = 2646,
  [SMALL_STATE(33)] = 2692,
  [SMALL_STATE(34)] = 2768,
  [SMALL_STATE(35)] = 2814,
  [SMALL_STATE(36)] = 2890,
  [SMALL_STATE(37)] = 2966,
  [SMALL_STATE(38)] = 3015,
  [SMALL_STATE(39)] = 3053,
  [SMALL_STATE(40)] = 3090,
  [SMALL_STATE(41)] = 3131,
  [SMALL_STATE(42)] = 3167,
  [SMALL_STATE(43)] = 3203,
  [SMALL_STATE(44)] = 3239,
  [SMALL_STATE(45)] = 3280,
  [SMALL_STATE(46)] = 3315,
  [SMALL_STATE(47)] = 3350,
  [SMALL_STATE(48)] = 3385,
  [SMALL_STATE(49)] = 3420,
  [SMALL_STATE(50)] = 3455,
  [SMALL_STATE(51)] = 3496,
  [SMALL_STATE(52)] = 3531,
  [SMALL_STATE(53)] = 3566,
  [SMALL_STATE(54)] = 3601,
  [SMALL_STATE(55)] = 3636,
  [SMALL_STATE(56)] = 3671,
  [SMALL_STATE(57)] = 3706,
  [SMALL_STATE(58)] = 3740,
  [SMALL_STATE(59)] = 3774,
  [SMALL_STATE(60)] = 3808,
  [SMALL_STATE(61)] = 3842,
  [SMALL_STATE(62)] = 3876,
  [SMALL_STATE(63)] = 3910,
  [SMALL_STATE(64)] = 3944,
  [SMALL_STATE(65)] = 3978,
  [SMALL_STATE(66)] = 4014,
  [SMALL_STATE(67)] = 4048,
  [SMALL_STATE(68)] = 4082,
  [SMALL_STATE(69)] = 4117,
  [SMALL_STATE(70)] = 4152,
  [SMALL_STATE(71)] = 4187,
  [SMALL_STATE(72)] = 4220,
  [SMALL_STATE(73)] = 4255,
  [SMALL_STATE(74)] = 4290,
  [SMALL_STATE(75)] = 4323,
  [SMALL_STATE(76)] = 4356,
  [SMALL_STATE(77)] = 4389,
  [SMALL_STATE(78)] = 4421,
  [SMALL_STATE(79)] = 4453,
  [SMALL_STATE(80)] = 4489,
  [SMALL_STATE(81)] = 4521,
  [SMALL_STATE(82)] = 4553,
  [SMALL_STATE(83)] = 4585,
  [SMALL_STATE(84)] = 4617,
  [SMALL_STATE(85)] = 4649,
  [SMALL_STATE(86)] = 4681,
  [SMALL_STATE(87)] = 4715,
  [SMALL_STATE(88)] = 4747,
  [SMALL_STATE(89)] = 4779,
  [SMALL_STATE(90)] = 4815,
  [SMALL_STATE(91)] = 4847,
  [SMALL_STATE(92)] = 4879,
  [SMALL_STATE(93)] = 4911,
  [SMALL_STATE(94)] = 4943,
  [SMALL_STATE(95)] = 4975,
  [SMALL_STATE(96)] = 5007,
  [SMALL_STATE(97)] = 5039,
  [SMALL_STATE(98)] = 5071,
  [SMALL_STATE(99)] = 5105,
  [SMALL_STATE(100)] = 5137,
  [SMALL_STATE(101)] = 5169,
  [SMALL_STATE(102)] = 5205,
  [SMALL_STATE(103)] = 5241,
  [SMALL_STATE(104)] = 5274,
  [SMALL_STATE(105)] = 5307,
  [SMALL_STATE(106)] = 5340,
  [SMALL_STATE(107)] = 5370,
  [SMALL_STATE(108)] = 5400,
  [SMALL_STATE(109)] = 5430,
  [SMALL_STATE(110)] = 5460,
  [SMALL_STATE(111)] = 5490,
  [SMALL_STATE(112)] = 5520,
  [SMALL_STATE(113)] = 5550,
  [SMALL_STATE(114)] = 5580,
  [SMALL_STATE(115)] = 5610,
  [SMALL_STATE(116)] = 5641,
  [SMALL_STATE(117)] = 5672,
  [SMALL_STATE(118)] = 5703,
  [SMALL_STATE(119)] = 5740,
  [SMALL_STATE(120)] = 5770,
  [SMALL_STATE(121)] = 5804,
  [SMALL_STATE(122)] = 5836,
  [SMALL_STATE(123)] = 5868,
  [SMALL_STATE(124)] = 5898,
  [SMALL_STATE(125)] = 5927,
  [SMALL_STATE(126)] = 5958,
  [SMALL_STATE(127)] = 5984,
  [SMALL_STATE(128)] = 6010,
  [SMALL_STATE(129)] = 6039,
  [SMALL_STATE(130)] = 6068,
  [SMALL_STATE(131)] = 6098,
  [SMALL_STATE(132)] = 6125,
  [SMALL_STATE(133)] = 6152,
  [SMALL_STATE(134)] = 6179,
  [SMALL_STATE(135)] = 6206,
  [SMALL_STATE(136)] = 6233,
  [SMALL_STATE(137)] = 6263,
  [SMALL_STATE(138)] = 6293,
  [SMALL_STATE(139)] = 6318,
  [SMALL_STATE(140)] = 6343,
  [SMALL_STATE(141)] = 6367,
  [SMALL_STATE(142)] = 6393,
  [SMALL_STATE(143)] = 6417,
  [SMALL_STATE(144)] = 6441,
  [SMALL_STATE(145)] = 6465,
  [SMALL_STATE(146)] = 6489,
  [SMALL_STATE(147)] = 6515,
  [SMALL_STATE(148)] = 6539,
  [SMALL_STATE(149)] = 6563,
  [SMALL_STATE(150)] = 6584,
  [SMALL_STATE(151)] = 6605,
  [SMALL_STATE(152)] = 6626,
  [SMALL_STATE(153)] = 6647,
  [SMALL_STATE(154)] = 6668,
  [SMALL_STATE(155)] = 6689,
  [SMALL_STATE(156)] = 6710,
  [SMALL_STATE(157)] = 6731,
  [SMALL_STATE(158)] = 6749,
  [SMALL_STATE(159)] = 6761,
  [SMALL_STATE(160)] = 6779,
  [SMALL_STATE(161)] = 6797,
  [SMALL_STATE(162)] = 6815,
  [SMALL_STATE(163)] = 6827,
  [SMALL_STATE(164)] = 6845,
  [SMALL_STATE(165)] = 6863,
  [SMALL_STATE(166)] = 6881,
  [SMALL_STATE(167)] = 6899,
  [SMALL_STATE(168)] = 6917,
  [SMALL_STATE(169)] = 6935,
  [SMALL_STATE(170)] = 6953,
  [SMALL_STATE(171)] = 6971,
  [SMALL_STATE(172)] = 6989,
  [SMALL_STATE(173)] = 7007,
  [SMALL_STATE(174)] = 7027,
  [SMALL_STATE(175)] = 7045,
  [SMALL_STATE(176)] = 7063,
  [SMALL_STATE(177)] = 7081,
  [SMALL_STATE(178)] = 7101,
  [SMALL_STATE(179)] = 7119,
  [SMALL_STATE(180)] = 7137,
  [SMALL_STATE(181)] = 7148,
  [SMALL_STATE(182)] = 7163,
  [SMALL_STATE(183)] = 7178,
  [SMALL_STATE(184)] = 7193,
  [SMALL_STATE(185)] = 7208,
  [SMALL_STATE(186)] = 7223,
  [SMALL_STATE(187)] = 7238,
  [SMALL_STATE(188)] = 7253,
  [SMALL_STATE(189)] = 7268,
  [SMALL_STATE(190)] = 7283,
  [SMALL_STATE(191)] = 7294,
  [SMALL_STATE(192)] = 7309,
  [SMALL_STATE(193)] = 7320,
  [SMALL_STATE(194)] = 7335,
  [SMALL_STATE(195)] = 7348,
  [SMALL_STATE(196)] = 7359,
  [SMALL_STATE(197)] = 7374,
  [SMALL_STATE(198)] = 7389,
  [SMALL_STATE(199)] = 7404,
  [SMALL_STATE(200)] = 7415,
  [SMALL_STATE(201)] = 7426,
  [SMALL_STATE(202)] = 7439,
  [SMALL_STATE(203)] = 7450,
  [SMALL_STATE(204)] = 7465,
  [SMALL_STATE(205)] = 7480,
  [SMALL_STATE(206)] = 7495,
  [SMALL_STATE(207)] = 7510,
  [SMALL_STATE(208)] = 7525,
  [SMALL_STATE(209)] = 7540,
  [SMALL_STATE(210)] = 7552,
  [SMALL_STATE(211)] = 7566,
  [SMALL_STATE(212)] = 7578,
  [SMALL_STATE(213)] = 7592,
  [SMALL_STATE(214)] = 7606,
  [SMALL_STATE(215)] = 7617,
  [SMALL_STATE(216)] = 7628,
  [SMALL_STATE(217)] = 7641,
  [SMALL_STATE(218)] = 7652,
  [SMALL_STATE(219)] = 7665,
  [SMALL_STATE(220)] = 7674,
  [SMALL_STATE(221)] = 7683,
  [SMALL_STATE(222)] = 7694,
  [SMALL_STATE(223)] = 7704,
  [SMALL_STATE(224)] = 7712,
  [SMALL_STATE(225)] = 7722,
  [SMALL_STATE(226)] = 7732,
  [SMALL_STATE(227)] = 7742,
  [SMALL_STATE(228)] = 7752,
  [SMALL_STATE(229)] = 7762,
  [SMALL_STATE(230)] = 7772,
  [SMALL_STATE(231)] = 7780,
  [SMALL_STATE(232)] = 7790,
  [SMALL_STATE(233)] = 7800,
  [SMALL_STATE(234)] = 7808,
  [SMALL_STATE(235)] = 7818,
  [SMALL_STATE(236)] = 7828,
  [SMALL_STATE(237)] = 7836,
  [SMALL_STATE(238)] = 7846,
  [SMALL_STATE(239)] = 7856,
  [SMALL_STATE(240)] = 7866,
  [SMALL_STATE(241)] = 7876,
  [SMALL_STATE(242)] = 7886,
  [SMALL_STATE(243)] = 7894,
  [SMALL_STATE(244)] = 7902,
  [SMALL_STATE(245)] = 7912,
  [SMALL_STATE(246)] = 7922,
  [SMALL_STATE(247)] = 7932,
  [SMALL_STATE(248)] = 7940,
  [SMALL_STATE(249)] = 7950,
  [SMALL_STATE(250)] = 7958,
  [SMALL_STATE(251)] = 7966,
  [SMALL_STATE(252)] = 7974,
  [SMALL_STATE(253)] = 7981,
  [SMALL_STATE(254)] = 7988,
  [SMALL_STATE(255)] = 7995,
  [SMALL_STATE(256)] = 8002,
  [SMALL_STATE(257)] = 8009,
  [SMALL_STATE(258)] = 8016,
  [SMALL_STATE(259)] = 8023,
  [SMALL_STATE(260)] = 8030,
  [SMALL_STATE(261)] = 8037,
  [SMALL_STATE(262)] = 8044,
  [SMALL_STATE(263)] = 8051,
  [SMALL_STATE(264)] = 8058,
  [SMALL_STATE(265)] = 8065,
  [SMALL_STATE(266)] = 8072,
  [SMALL_STATE(267)] = 8079,
  [SMALL_STATE(268)] = 8086,
  [SMALL_STATE(269)] = 8093,
  [SMALL_STATE(270)] = 8100,
  [SMALL_STATE(271)] = 8107,
  [SMALL_STATE(272)] = 8114,
  [SMALL_STATE(273)] = 8121,
  [SMALL_STATE(274)] = 8128,
  [SMALL_STATE(275)] = 8135,
  [SMALL_STATE(276)] = 8142,
  [SMALL_STATE(277)] = 8149,
  [SMALL_STATE(278)] = 8156,
  [SMALL_STATE(279)] = 8163,
  [SMALL_STATE(280)] = 8170,
  [SMALL_STATE(281)] = 8177,
  [SMALL_STATE(282)] = 8184,
  [SMALL_STATE(283)] = 8191,
  [SMALL_STATE(284)] = 8198,
  [SMALL_STATE(285)] = 8205,
  [SMALL_STATE(286)] = 8212,
  [SMALL_STATE(287)] = 8219,
  [SMALL_STATE(288)] = 8226,
  [SMALL_STATE(289)] = 8233,
  [SMALL_STATE(290)] = 8240,
  [SMALL_STATE(291)] = 8247,
  [SMALL_STATE(292)] = 8254,
  [SMALL_STATE(293)] = 8261,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(171),
  [9] = {.count = 1, .reusable = true}, SHIFT(185),
  [11] = {.count = 1, .reusable = true}, SHIFT(147),
  [13] = {.count = 1, .reusable = true}, SHIFT(188),
  [15] = {.count = 1, .reusable = true}, SHIFT(163),
  [17] = {.count = 1, .reusable = true}, SHIFT(196),
  [19] = {.count = 1, .reusable = true}, SHIFT(198),
  [21] = {.count = 1, .reusable = true}, SHIFT(280),
  [23] = {.count = 1, .reusable = false}, SHIFT(278),
  [25] = {.count = 1, .reusable = true}, SHIFT(39),
  [27] = {.count = 1, .reusable = false}, SHIFT(39),
  [29] = {.count = 1, .reusable = true}, SHIFT(277),
  [31] = {.count = 1, .reusable = true}, SHIFT(213),
  [33] = {.count = 1, .reusable = true}, SHIFT(274),
  [35] = {.count = 1, .reusable = false}, SHIFT(24),
  [37] = {.count = 1, .reusable = false}, SHIFT(252),
  [39] = {.count = 1, .reusable = false}, SHIFT(18),
  [41] = {.count = 1, .reusable = false}, SHIFT(289),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, SHIFT(290),
  [47] = {.count = 1, .reusable = false}, SHIFT(49),
  [49] = {.count = 1, .reusable = false}, SHIFT(257),
  [51] = {.count = 1, .reusable = false}, SHIFT(199),
  [53] = {.count = 1, .reusable = true}, SHIFT(14),
  [55] = {.count = 1, .reusable = true}, SHIFT(37),
  [57] = {.count = 1, .reusable = true}, SHIFT(19),
  [59] = {.count = 1, .reusable = true}, SHIFT(6),
  [61] = {.count = 1, .reusable = true}, SHIFT(9),
  [63] = {.count = 1, .reusable = false}, SHIFT(182),
  [65] = {.count = 1, .reusable = false}, SHIFT(42),
  [67] = {.count = 1, .reusable = true}, SHIFT(42),
  [69] = {.count = 1, .reusable = true}, SHIFT(49),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [117] = {.count = 1, .reusable = true}, SHIFT(26),
  [119] = {.count = 1, .reusable = true}, SHIFT(54),
  [121] = {.count = 1, .reusable = true}, SHIFT(56),
  [123] = {.count = 1, .reusable = true}, SHIFT(52),
  [125] = {.count = 1, .reusable = true}, SHIFT(41),
  [127] = {.count = 1, .reusable = true}, SHIFT(21),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [131] = {.count = 1, .reusable = false}, SHIFT(32),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [141] = {.count = 1, .reusable = false}, SHIFT(34),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(144),
  [147] = {.count = 1, .reusable = true}, SHIFT(203),
  [149] = {.count = 1, .reusable = true}, SHIFT(184),
  [151] = {.count = 1, .reusable = true}, SHIFT(208),
  [153] = {.count = 1, .reusable = true}, SHIFT(187),
  [155] = {.count = 1, .reusable = true}, SHIFT(87),
  [157] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(34),
  [162] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(171),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(144),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(203),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(163),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(184),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(208),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(187),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(278),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(39),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(39),
  [196] = {.count = 1, .reusable = true}, SHIFT(77),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [208] = {.count = 1, .reusable = true}, SHIFT(161),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [224] = {.count = 1, .reusable = true}, SHIFT(25),
  [226] = {.count = 1, .reusable = false}, SHIFT(25),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [230] = {.count = 1, .reusable = true}, SHIFT(27),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [248] = {.count = 1, .reusable = true}, SHIFT(141),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [252] = {.count = 1, .reusable = true}, SHIFT(81),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_plan_item, 5),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_plan_item, 5),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_plan_item, 6),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_plan_item, 6),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_plan_item, 7),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_plan_item, 7),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 6),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 6),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(146),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 1),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_plan_item, 4),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_plan_item, 4),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_plan_item, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_plan_item, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [312] = {.count = 1, .reusable = true}, SHIFT(93),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [316] = {.count = 1, .reusable = true}, SHIFT(154),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(155),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 4),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 4),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [328] = {.count = 1, .reusable = false}, SHIFT(186),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 3),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 3),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 3),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 3),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [358] = {.count = 1, .reusable = false}, SHIFT(197),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [362] = {.count = 1, .reusable = false}, SHIFT(111),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [396] = {.count = 1, .reusable = false}, SHIFT(114),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_io_macro, 4),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_io_macro, 4),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [432] = {.count = 1, .reusable = true}, SHIFT(149),
  [434] = {.count = 1, .reusable = true}, SHIFT(168),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [438] = {.count = 1, .reusable = true}, SHIFT(189),
  [440] = {.count = 1, .reusable = true}, SHIFT(137),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [446] = {.count = 1, .reusable = true}, SHIFT(113),
  [448] = {.count = 1, .reusable = true}, SHIFT(178),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 8),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 8),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [474] = {.count = 1, .reusable = false}, SHIFT(183),
  [476] = {.count = 1, .reusable = true}, SHIFT(28),
  [478] = {.count = 1, .reusable = false}, SHIFT(28),
  [480] = {.count = 1, .reusable = true}, SHIFT(205),
  [482] = {.count = 1, .reusable = true}, SHIFT(136),
  [484] = {.count = 1, .reusable = true}, SHIFT(174),
  [486] = {.count = 1, .reusable = true}, SHIFT(165),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [502] = {.count = 1, .reusable = true}, SHIFT(16),
  [504] = {.count = 1, .reusable = true}, SHIFT(195),
  [506] = {.count = 1, .reusable = true}, SHIFT(23),
  [508] = {.count = 1, .reusable = true}, SHIFT(143),
  [510] = {.count = 1, .reusable = true}, SHIFT(179),
  [512] = {.count = 1, .reusable = true}, SHIFT(150),
  [514] = {.count = 1, .reusable = true}, SHIFT(60),
  [516] = {.count = 1, .reusable = false}, SHIFT(60),
  [518] = {.count = 1, .reusable = true}, SHIFT(38),
  [520] = {.count = 1, .reusable = false}, SHIFT(38),
  [522] = {.count = 1, .reusable = false}, SHIFT(247),
  [524] = {.count = 1, .reusable = true}, SHIFT(247),
  [526] = {.count = 1, .reusable = true}, SHIFT(4),
  [528] = {.count = 1, .reusable = true}, SHIFT(145),
  [530] = {.count = 1, .reusable = true}, SHIFT(263),
  [532] = {.count = 1, .reusable = false}, SHIFT(157),
  [534] = {.count = 1, .reusable = true}, SHIFT(2),
  [536] = {.count = 1, .reusable = true}, SHIFT(95),
  [538] = {.count = 1, .reusable = true}, SHIFT(82),
  [540] = {.count = 1, .reusable = true}, SHIFT(275),
  [542] = {.count = 1, .reusable = true}, SHIFT(31),
  [544] = {.count = 1, .reusable = true}, SHIFT(75),
  [546] = {.count = 1, .reusable = true}, SHIFT(94),
  [548] = {.count = 1, .reusable = false}, SHIFT(94),
  [550] = {.count = 1, .reusable = true}, SHIFT(58),
  [552] = {.count = 1, .reusable = true}, SHIFT(66),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [562] = {.count = 1, .reusable = true}, SHIFT(8),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [576] = {.count = 1, .reusable = true}, SHIFT(207),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [582] = {.count = 1, .reusable = true}, SHIFT(78),
  [584] = {.count = 1, .reusable = true}, SHIFT(156),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [588] = {.count = 1, .reusable = true}, SHIFT(7),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_list, 2),
  [594] = {.count = 1, .reusable = true}, SHIFT(148),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_list, 1),
  [600] = {.count = 1, .reusable = true}, SHIFT(142),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [606] = {.count = 1, .reusable = true}, SHIFT(172),
  [608] = {.count = 1, .reusable = true}, SHIFT(36),
  [610] = {.count = 1, .reusable = true}, SHIFT(63),
  [612] = {.count = 1, .reusable = true}, SHIFT(210),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [616] = {.count = 1, .reusable = true}, SHIFT(200),
  [618] = {.count = 1, .reusable = true}, SHIFT(17),
  [620] = {.count = 1, .reusable = true}, SHIFT(13),
  [622] = {.count = 1, .reusable = true}, SHIFT(204),
  [624] = {.count = 1, .reusable = true}, SHIFT(47),
  [626] = {.count = 1, .reusable = true}, SHIFT(51),
  [628] = {.count = 1, .reusable = true}, SHIFT(88),
  [630] = {.count = 1, .reusable = true}, SHIFT(191),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [634] = {.count = 1, .reusable = true}, SHIFT(85),
  [636] = {.count = 1, .reusable = true}, SHIFT(206),
  [638] = {.count = 1, .reusable = true}, SHIFT(287),
  [640] = {.count = 1, .reusable = true}, SHIFT(193),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [644] = {.count = 1, .reusable = true}, SHIFT(57),
  [646] = {.count = 1, .reusable = true}, SHIFT(97),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [650] = {.count = 1, .reusable = true}, SHIFT(15),
  [652] = {.count = 1, .reusable = true}, SHIFT(43),
  [654] = {.count = 1, .reusable = true}, SHIFT(71),
  [656] = {.count = 1, .reusable = true}, SHIFT(151),
  [658] = {.count = 1, .reusable = true}, SHIFT(5),
  [660] = {.count = 1, .reusable = true}, SHIFT(30),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [666] = {.count = 1, .reusable = true}, SHIFT(153),
  [668] = {.count = 1, .reusable = true}, SHIFT(181),
  [670] = {.count = 1, .reusable = true}, SHIFT(55),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [680] = {.count = 1, .reusable = true}, SHIFT(29),
  [682] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [684] = {.count = 1, .reusable = true}, SHIFT(285),
  [686] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [688] = {.count = 1, .reusable = false}, SHIFT(281),
  [690] = {.count = 1, .reusable = true}, SHIFT(64),
  [692] = {.count = 1, .reusable = true}, SHIFT(140),
  [694] = {.count = 1, .reusable = true}, SHIFT(159),
  [696] = {.count = 1, .reusable = true}, SHIFT(160),
  [698] = {.count = 1, .reusable = true}, SHIFT(59),
  [700] = {.count = 1, .reusable = true}, SHIFT(282),
  [702] = {.count = 1, .reusable = true}, SHIFT(293),
  [704] = {.count = 1, .reusable = true}, SHIFT(152),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_list, 4),
  [708] = {.count = 1, .reusable = true}, SHIFT(3),
  [710] = {.count = 1, .reusable = true}, SHIFT(166),
  [712] = {.count = 1, .reusable = true}, SHIFT(175),
  [714] = {.count = 1, .reusable = true}, SHIFT(139),
  [716] = {.count = 1, .reusable = true}, SHIFT(12),
  [718] = {.count = 1, .reusable = true}, SHIFT(292),
  [720] = {.count = 1, .reusable = false}, SHIFT(108),
  [722] = {.count = 1, .reusable = true}, SHIFT(169),
  [724] = {.count = 1, .reusable = true}, SHIFT(262),
  [726] = {.count = 1, .reusable = true}, SHIFT(255),
  [728] = {.count = 1, .reusable = true}, SHIFT(176),
  [730] = {.count = 1, .reusable = true}, SHIFT(138),
  [732] = {.count = 1, .reusable = true}, SHIFT(104),
  [734] = {.count = 1, .reusable = true}, SHIFT(109),
  [736] = {.count = 1, .reusable = true}, SHIFT(173),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_list, 3),
  [740] = {.count = 1, .reusable = true}, SHIFT(164),
  [742] = {.count = 1, .reusable = false}, SHIFT(286),
  [744] = {.count = 1, .reusable = true}, SHIFT(110),
  [746] = {.count = 1, .reusable = true}, SHIFT(170),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_functor_built_in, 1),
  [750] = {.count = 1, .reusable = true}, SHIFT(20),
  [752] = {.count = 1, .reusable = true}, SHIFT(167),
  [754] = {.count = 1, .reusable = true}, SHIFT(177),
  [756] = {.count = 1, .reusable = true}, SHIFT(67),
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
