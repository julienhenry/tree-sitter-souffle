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
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
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
  aux_sym_IDENT_token1 = 81,
  aux_sym_IDENT_token2 = 82,
  aux_sym_NUMBER_token1 = 83,
  aux_sym_NUMBER_token2 = 84,
  aux_sym_NUMBER_token3 = 85,
  sym_FLOAT = 86,
  sym_STRING = 87,
  sym_COMMENT = 88,
  anon_sym_POUNDinclude = 89,
  anon_sym_DQUOTE = 90,
  anon_sym_POUNDline = 91,
  anon_sym_POUNDdefine = 92,
  aux_sym_define_token1 = 93,
  sym_filename = 94,
  anon_sym_stateful = 95,
  anon_sym_number = 96,
  anon_sym_symbol = 97,
  anon_sym_float = 98,
  anon_sym_unsigned = 99,
  sym_source_file = 100,
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
  sym_predefined_type = 141,
  sym_pragma = 142,
  sym_io_head = 143,
  sym_io_directive_list = 144,
  sym_io_relation_list = 145,
  sym_non_empty_key_value_pairs = 146,
  sym_kvp_value = 147,
  aux_sym_source_file_repeat1 = 148,
  aux_sym_relation_tags_repeat1 = 149,
  aux_sym_component_repeat1 = 150,
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
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_float] = "float",
  [anon_sym_unsigned] = "unsigned",
  [sym_source_file] = "source_file",
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
  [sym_predefined_type] = "predefined_type",
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
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [sym_source_file] = sym_source_file,
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
  [sym_predefined_type] = sym_predefined_type,
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
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym_predefined_type] = {
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
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(226);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(382);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(382);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '<') ADVANCE(237);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '<') ADVANCE(237);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '<') ADVANCE(237);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(382);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(389);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(235);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(393);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(118);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 132:
      if (lookahead == 'z') ADVANCE(44);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(395);
      END_STATE();
    case 138:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(384);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 139:
      if (eof) ADVANCE(143);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(235);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 140:
      if (eof) ADVANCE(143);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 141:
      if (eof) ADVANCE(143);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(239);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_AT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(393);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == 'x') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'q') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == 'v') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == 'v') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == 'm') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'c') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'm') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'p') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == 'x') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'x') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'z') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(413);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(412);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(137);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(407);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(391);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(413);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(395);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(407);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '/') ADVANCE(396);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(391);
      if (lookahead == '\r') ADVANCE(397);
      if (lookahead == '"') ADVANCE(393);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 138},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 138},
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
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 142},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 138},
  [34] = {.lex_state = 138},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 142},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 138},
  [40] = {.lex_state = 142},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 139},
  [51] = {.lex_state = 138},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 138},
  [54] = {.lex_state = 138},
  [55] = {.lex_state = 139},
  [56] = {.lex_state = 138},
  [57] = {.lex_state = 138},
  [58] = {.lex_state = 138},
  [59] = {.lex_state = 138},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 138},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 139},
  [64] = {.lex_state = 138},
  [65] = {.lex_state = 138},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 139},
  [69] = {.lex_state = 139},
  [70] = {.lex_state = 138},
  [71] = {.lex_state = 138},
  [72] = {.lex_state = 138},
  [73] = {.lex_state = 138},
  [74] = {.lex_state = 138},
  [75] = {.lex_state = 138},
  [76] = {.lex_state = 140},
  [77] = {.lex_state = 140},
  [78] = {.lex_state = 140},
  [79] = {.lex_state = 138},
  [80] = {.lex_state = 140},
  [81] = {.lex_state = 138},
  [82] = {.lex_state = 138},
  [83] = {.lex_state = 139},
  [84] = {.lex_state = 138},
  [85] = {.lex_state = 138},
  [86] = {.lex_state = 138},
  [87] = {.lex_state = 138},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 138},
  [90] = {.lex_state = 139},
  [91] = {.lex_state = 138},
  [92] = {.lex_state = 141},
  [93] = {.lex_state = 140},
  [94] = {.lex_state = 138},
  [95] = {.lex_state = 138},
  [96] = {.lex_state = 138},
  [97] = {.lex_state = 138},
  [98] = {.lex_state = 138},
  [99] = {.lex_state = 138},
  [100] = {.lex_state = 138},
  [101] = {.lex_state = 138},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 138},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 138},
  [106] = {.lex_state = 138},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 138},
  [110] = {.lex_state = 138},
  [111] = {.lex_state = 138},
  [112] = {.lex_state = 138},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 138},
  [121] = {.lex_state = 138},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 141},
  [127] = {.lex_state = 138},
  [128] = {.lex_state = 138},
  [129] = {.lex_state = 138},
  [130] = {.lex_state = 138},
  [131] = {.lex_state = 138},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 138},
  [136] = {.lex_state = 138},
  [137] = {.lex_state = 138},
  [138] = {.lex_state = 138},
  [139] = {.lex_state = 138},
  [140] = {.lex_state = 138},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 138},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 138},
  [150] = {.lex_state = 138},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 138},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 138},
  [157] = {.lex_state = 138},
  [158] = {.lex_state = 138},
  [159] = {.lex_state = 138},
  [160] = {.lex_state = 138},
  [161] = {.lex_state = 138},
  [162] = {.lex_state = 138},
  [163] = {.lex_state = 138},
  [164] = {.lex_state = 138},
  [165] = {.lex_state = 138},
  [166] = {.lex_state = 138},
  [167] = {.lex_state = 138},
  [168] = {.lex_state = 138},
  [169] = {.lex_state = 138},
  [170] = {.lex_state = 138},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 138},
  [173] = {.lex_state = 138},
  [174] = {.lex_state = 138},
  [175] = {.lex_state = 138},
  [176] = {.lex_state = 138},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 138},
  [179] = {.lex_state = 138},
  [180] = {.lex_state = 138},
  [181] = {.lex_state = 138},
  [182] = {.lex_state = 138},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 138},
  [185] = {.lex_state = 138},
  [186] = {.lex_state = 138},
  [187] = {.lex_state = 138},
  [188] = {.lex_state = 138},
  [189] = {.lex_state = 138},
  [190] = {.lex_state = 138},
  [191] = {.lex_state = 138},
  [192] = {.lex_state = 138},
  [193] = {.lex_state = 138},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 138},
  [196] = {.lex_state = 138},
  [197] = {.lex_state = 138},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 138},
  [200] = {.lex_state = 138},
  [201] = {.lex_state = 138},
  [202] = {.lex_state = 138},
  [203] = {.lex_state = 138},
  [204] = {.lex_state = 138},
  [205] = {.lex_state = 138},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 138},
  [239] = {.lex_state = 138},
  [240] = {.lex_state = 138},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 138},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 138},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 406},
  [253] = {.lex_state = 138},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 138},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 411},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 138},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 411},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 138},
  [268] = {.lex_state = 138},
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
    [sym_source_file] = STATE(251),
    [sym_IDENT] = STATE(141),
    [sym_unit] = STATE(10),
    [sym_include] = STATE(105),
    [sym_line] = STATE(105),
    [sym_define] = STATE(105),
    [sym_identifier] = STATE(215),
    [sym_type] = STATE(105),
    [sym_relation_decl] = STATE(105),
    [sym_fact] = STATE(105),
    [sym_rule] = STATE(91),
    [sym_rule_def] = STATE(72),
    [sym_head] = STATE(216),
    [sym_atom] = STATE(198),
    [sym_component] = STATE(105),
    [sym_component_head] = STATE(186),
    [sym_comp_init] = STATE(105),
    [sym_functor_decl] = STATE(105),
    [sym_pragma] = STATE(105),
    [sym_io_head] = STATE(105),
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
    [aux_sym_IDENT_token1] = ACTIONS(23),
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_arg,
    STATE(144), 1,
      sym_term,
    STATE(154), 1,
      sym_conjunction,
    STATE(183), 1,
      sym_disjunction,
    STATE(215), 1,
      sym_identifier,
    STATE(241), 1,
      sym_body,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_arg,
    STATE(144), 1,
      sym_term,
    STATE(154), 1,
      sym_conjunction,
    STATE(183), 1,
      sym_disjunction,
    STATE(215), 1,
      sym_identifier,
    STATE(249), 1,
      sym_functor_built_in,
    STATE(250), 1,
      sym_body,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_arg,
    STATE(144), 1,
      sym_term,
    STATE(154), 1,
      sym_conjunction,
    STATE(183), 1,
      sym_disjunction,
    STATE(215), 1,
      sym_identifier,
    STATE(245), 1,
      sym_body,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(62), 1,
      sym_arg,
    STATE(144), 1,
      sym_term,
    STATE(154), 1,
      sym_conjunction,
    STATE(207), 1,
      sym_disjunction,
    STATE(215), 1,
      sym_identifier,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_arg,
    STATE(144), 1,
      sym_term,
    STATE(148), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_identifier,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_arg,
    STATE(142), 1,
      sym_term,
    STATE(215), 1,
      sym_identifier,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    STATE(41), 1,
      sym_NUMBER,
    STATE(52), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_arg,
    STATE(147), 1,
      sym_term,
    STATE(215), 1,
      sym_identifier,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(152), 2,
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
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_DECL,
    ACTIONS(72), 1,
      sym_FUNCTOR,
    ACTIONS(78), 1,
      sym_TYPE,
    ACTIONS(81), 1,
      sym_COMPONENT,
    ACTIONS(84), 1,
      sym_INSTANTIATE,
    ACTIONS(90), 1,
      sym_PRAGMA,
    ACTIONS(93), 1,
      aux_sym_IDENT_token1,
    ACTIONS(96), 1,
      aux_sym_IDENT_token2,
    ACTIONS(99), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDline,
    ACTIONS(105), 1,
      anon_sym_POUNDdefine,
    STATE(72), 1,
      sym_rule_def,
    STATE(91), 1,
      sym_rule,
    STATE(141), 1,
      sym_IDENT,
    STATE(186), 1,
      sym_component_head,
    STATE(198), 1,
      sym_atom,
    STATE(215), 1,
      sym_identifier,
    STATE(216), 1,
      sym_head,
    ACTIONS(87), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(9), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(75), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(105), 11,
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
  [802] = 24,
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
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(27), 1,
      anon_sym_POUNDinclude,
    ACTIONS(29), 1,
      anon_sym_POUNDline,
    ACTIONS(31), 1,
      anon_sym_POUNDdefine,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_rule_def,
    STATE(91), 1,
      sym_rule,
    STATE(141), 1,
      sym_IDENT,
    STATE(186), 1,
      sym_component_head,
    STATE(198), 1,
      sym_atom,
    STATE(215), 1,
      sym_identifier,
    STATE(216), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(9), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(105), 11,
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
  [889] = 21,
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
    STATE(104), 1,
      sym_arg,
    STATE(213), 1,
      sym_non_empty_arg_list,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [969] = 21,
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
    STATE(104), 1,
      sym_arg,
    STATE(209), 1,
      sym_non_empty_arg_list,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1049] = 21,
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
    STATE(104), 1,
      sym_arg,
    STATE(220), 1,
      sym_non_empty_arg_list,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1129] = 21,
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
    STATE(104), 1,
      sym_arg,
    STATE(225), 1,
      sym_non_empty_arg_list,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1209] = 20,
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
    STATE(104), 1,
      sym_arg,
    STATE(222), 1,
      sym_non_empty_arg_list,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1286] = 19,
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
    STATE(116), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1360] = 19,
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
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1434] = 19,
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
    STATE(49), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1508] = 19,
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
    STATE(108), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1582] = 19,
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
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1656] = 19,
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
    STATE(122), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1730] = 19,
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
    STATE(117), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1804] = 19,
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
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1878] = 19,
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
    STATE(88), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [1952] = 19,
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
    STATE(123), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [2026] = 19,
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
    STATE(118), 1,
      sym_arg,
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [2100] = 19,
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
    STATE(249), 1,
      sym_functor_built_in,
    ACTIONS(23), 2,
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
    STATE(41), 2,
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
  [2174] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(38), 1,
      sym_IDENT,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(122), 11,
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
    ACTIONS(124), 16,
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
  [2216] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(40), 1,
      aux_sym_relation_tags_repeat1,
    STATE(94), 1,
      sym_relation_tags,
    ACTIONS(130), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(128), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(126), 17,
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
  [2259] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(132), 25,
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
  [2296] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(40), 1,
      aux_sym_relation_tags_repeat1,
    STATE(89), 1,
      sym_relation_tags,
    ACTIONS(138), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(128), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(136), 17,
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
  [2339] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(142), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(140), 23,
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
  [2375] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(146), 1,
      sym_TYPE,
    ACTIONS(148), 1,
      sym_INSTANTIATE,
    ACTIONS(152), 1,
      sym_OVERRIDE,
    ACTIONS(154), 1,
      sym_RBRACE,
    STATE(72), 1,
      sym_rule_def,
    STATE(121), 1,
      sym_rule,
    STATE(141), 1,
      sym_IDENT,
    STATE(186), 1,
      sym_component_head,
    STATE(198), 1,
      sym_atom,
    STATE(215), 1,
      sym_identifier,
    STATE(216), 1,
      sym_head,
    ACTIONS(150), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(39), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(144), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(128), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2445] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(7), 1,
      sym_DECL,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(146), 1,
      sym_TYPE,
    ACTIONS(148), 1,
      sym_INSTANTIATE,
    ACTIONS(152), 1,
      sym_OVERRIDE,
    ACTIONS(156), 1,
      sym_RBRACE,
    STATE(72), 1,
      sym_rule_def,
    STATE(121), 1,
      sym_rule,
    STATE(141), 1,
      sym_IDENT,
    STATE(186), 1,
      sym_component_head,
    STATE(198), 1,
      sym_atom,
    STATE(215), 1,
      sym_identifier,
    STATE(216), 1,
      sym_head,
    ACTIONS(150), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(33), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(144), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(128), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(160), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(158), 23,
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
  [2551] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(36), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(167), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(164), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(162), 17,
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
  [2591] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(171), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(169), 24,
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
  [2627] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(177), 1,
      sym_LPAREN,
    ACTIONS(175), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(173), 23,
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
  [2665] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(179), 1,
      sym_DECL,
    ACTIONS(185), 1,
      sym_TYPE,
    ACTIONS(188), 1,
      sym_COMPONENT,
    ACTIONS(191), 1,
      sym_INSTANTIATE,
    ACTIONS(197), 1,
      sym_OVERRIDE,
    ACTIONS(200), 1,
      sym_RBRACE,
    ACTIONS(202), 1,
      aux_sym_IDENT_token1,
    ACTIONS(205), 1,
      aux_sym_IDENT_token2,
    STATE(72), 1,
      sym_rule_def,
    STATE(121), 1,
      sym_rule,
    STATE(141), 1,
      sym_IDENT,
    STATE(186), 1,
      sym_component_head,
    STATE(198), 1,
      sym_atom,
    STATE(215), 1,
      sym_identifier,
    STATE(216), 1,
      sym_head,
    ACTIONS(194), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(39), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(182), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(128), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2735] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(36), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(212), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(210), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(208), 17,
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
  [2775] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(122), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(124), 23,
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
  [2810] = 3,
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
  [2845] = 3,
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
  [2880] = 3,
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
  [2915] = 3,
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
  [2950] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(175), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(173), 23,
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
  [2985] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(175), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(173), 23,
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
  [3020] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(216), 2,
      sym_LT,
      sym_GT,
    ACTIONS(232), 2,
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
    ACTIONS(230), 11,
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
  [3061] = 3,
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
  [3096] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 3,
      sym_DOT,
      sym_LT,
      aux_sym_IDENT_token1,
    ACTIONS(132), 22,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3129] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(238), 1,
      sym_LT,
    ACTIONS(240), 1,
      aux_sym_IDENT_token1,
    STATE(53), 1,
      sym_type_params,
    ACTIONS(236), 21,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(122), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(124), 17,
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
  [3198] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(246), 1,
      aux_sym_IDENT_token1,
    ACTIONS(244), 21,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(250), 1,
      aux_sym_IDENT_token1,
    ACTIONS(248), 21,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3258] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(252), 19,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3287] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(258), 1,
      aux_sym_IDENT_token1,
    ACTIONS(256), 20,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3316] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(262), 1,
      aux_sym_IDENT_token1,
    ACTIONS(260), 20,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3345] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(266), 1,
      sym_COMMA,
    ACTIONS(268), 1,
      aux_sym_IDENT_token1,
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
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(272), 1,
      aux_sym_IDENT_token1,
    ACTIONS(270), 20,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3405] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 3,
      sym_DOT,
      sym_LT,
      aux_sym_IDENT_token1,
    ACTIONS(132), 18,
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
      aux_sym_IDENT_token2,
  [3434] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(276), 1,
      aux_sym_IDENT_token1,
    ACTIONS(274), 20,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3463] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(112), 1,
      sym_RPAREN,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(280), 2,
      sym_LT,
      sym_GT,
    ACTIONS(278), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(230), 11,
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
  [3500] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(242), 19,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3529] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(286), 1,
      sym_PIPE,
    ACTIONS(288), 1,
      aux_sym_IDENT_token1,
    ACTIONS(284), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3559] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(292), 1,
      aux_sym_IDENT_token1,
    ACTIONS(290), 19,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3587] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 1,
      sym_DOT,
    ACTIONS(298), 1,
      aux_sym_IDENT_token1,
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
      sym_PRAGMA,
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3617] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(280), 2,
      sym_LT,
      sym_GT,
    ACTIONS(278), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(230), 11,
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
  [3651] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 1,
      sym_DOT,
    ACTIONS(302), 1,
      aux_sym_IDENT_token1,
    ACTIONS(300), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3681] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 1,
      sym_LBRACE,
    ACTIONS(282), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(242), 17,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3711] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(308), 1,
      aux_sym_IDENT_token1,
    ACTIONS(306), 19,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3739] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(312), 1,
      aux_sym_IDENT_token1,
    ACTIONS(310), 19,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3767] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(316), 1,
      aux_sym_IDENT_token1,
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
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3795] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      aux_sym_IDENT_token1,
    ACTIONS(318), 19,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3823] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(324), 1,
      aux_sym_IDENT_token1,
    ACTIONS(322), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3850] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(328), 1,
      aux_sym_IDENT_token1,
    ACTIONS(326), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 4,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(252), 15,
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
  [3904] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 4,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(242), 15,
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
  [3931] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 4,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_stateful,
    ACTIONS(132), 15,
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
  [3958] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(332), 1,
      aux_sym_IDENT_token1,
    ACTIONS(330), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3985] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(336), 1,
      sym_DOT,
    ACTIONS(340), 1,
      anon_sym_stateful,
    ACTIONS(338), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(334), 15,
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
  [4016] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(344), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4043] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4070] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 1,
      sym_DOT,
    ACTIONS(352), 1,
      aux_sym_IDENT_token1,
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
      sym_PRAGMA,
      sym_PIPE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4099] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      aux_sym_IDENT_token1,
    ACTIONS(358), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(364), 1,
      aux_sym_IDENT_token1,
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
      sym_OVERRIDE,
      sym_PRAGMA,
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(368), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4207] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(370), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(230), 11,
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
  [4238] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(374), 1,
      aux_sym_IDENT_token1,
    ACTIONS(372), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 1,
      sym_DOT,
    ACTIONS(378), 1,
      aux_sym_IDENT_token1,
    ACTIONS(376), 17,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4294] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(382), 1,
      sym_PLAN,
    ACTIONS(384), 1,
      aux_sym_IDENT_token1,
    STATE(73), 1,
      sym_exec_plan,
    ACTIONS(380), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4325] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(364), 1,
      aux_sym_IDENT_token1,
    ACTIONS(386), 1,
      sym_SUBTYPE,
    ACTIONS(388), 1,
      sym_EQUALS,
    ACTIONS(362), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4356] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(336), 1,
      sym_DOT,
    ACTIONS(394), 1,
      anon_sym_stateful,
    ACTIONS(392), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(390), 15,
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
  [4387] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(138), 1,
      aux_sym_IDENT_token1,
    ACTIONS(136), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4414] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(398), 1,
      sym_LPAREN,
    ACTIONS(400), 1,
      sym_COMMA,
    ACTIONS(402), 1,
      aux_sym_IDENT_token1,
    ACTIONS(396), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4445] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(406), 1,
      aux_sym_IDENT_token1,
    ACTIONS(404), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4472] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(410), 1,
      aux_sym_IDENT_token1,
    ACTIONS(408), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(414), 1,
      aux_sym_IDENT_token1,
    ACTIONS(412), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4526] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(418), 1,
      aux_sym_IDENT_token1,
    ACTIONS(416), 18,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4553] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 1,
      aux_sym_IDENT_token1,
    ACTIONS(420), 1,
      sym_PIPE,
    ACTIONS(354), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4581] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(424), 1,
      aux_sym_IDENT_token1,
    ACTIONS(426), 1,
      sym_STRING,
    ACTIONS(422), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4609] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(254), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(252), 15,
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
      aux_sym_IDENT_token2,
  [4634] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(392), 1,
      aux_sym_IDENT_token1,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4659] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(428), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(230), 11,
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
  [4688] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(384), 1,
      aux_sym_IDENT_token1,
    ACTIONS(380), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4713] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(432), 1,
      aux_sym_IDENT_token1,
    ACTIONS(430), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4738] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(242), 15,
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
      aux_sym_IDENT_token2,
  [4763] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(434), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(230), 11,
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
  [4792] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(438), 1,
      aux_sym_IDENT_token1,
    ACTIONS(436), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4817] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(442), 1,
      aux_sym_IDENT_token1,
    ACTIONS(440), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4842] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(446), 1,
      aux_sym_IDENT_token1,
    ACTIONS(444), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4867] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(450), 1,
      aux_sym_IDENT_token1,
    ACTIONS(448), 16,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4892] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(298), 1,
      aux_sym_IDENT_token1,
    ACTIONS(452), 1,
      sym_DOT,
    ACTIONS(294), 14,
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
      aux_sym_IDENT_token2,
  [4918] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(302), 1,
      aux_sym_IDENT_token1,
    ACTIONS(452), 1,
      sym_DOT,
    ACTIONS(300), 14,
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
      aux_sym_IDENT_token2,
  [4944] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 1,
      sym_LBRACE,
    ACTIONS(282), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(242), 13,
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
      aux_sym_IDENT_token2,
  [4970] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(112), 1,
      sym_RPAREN,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(454), 1,
      sym_COMMA,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(230), 11,
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
  [5000] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(456), 1,
      sym_COMMA,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(230), 11,
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
  [5027] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(112), 1,
      sym_RPAREN,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(230), 11,
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
  [5054] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(458), 1,
      sym_RPAREN,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(230), 11,
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
  [5081] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(398), 1,
      sym_LPAREN,
    ACTIONS(402), 1,
      aux_sym_IDENT_token1,
    ACTIONS(460), 1,
      sym_COMMA,
    ACTIONS(396), 12,
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
      aux_sym_IDENT_token2,
  [5108] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(382), 1,
      sym_PLAN,
    ACTIONS(464), 1,
      aux_sym_IDENT_token1,
    STATE(73), 1,
      sym_exec_plan,
    ACTIONS(462), 12,
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
      aux_sym_IDENT_token2,
  [5135] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(466), 1,
      sym_COMMA,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(230), 11,
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
  [5162] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(234), 1,
      sym_CARET,
    ACTIONS(468), 1,
      sym_COLON,
    ACTIONS(232), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(230), 11,
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
  [5189] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(378), 1,
      aux_sym_IDENT_token1,
    ACTIONS(452), 1,
      sym_DOT,
    ACTIONS(376), 13,
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
      aux_sym_IDENT_token2,
  [5214] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(352), 1,
      aux_sym_IDENT_token1,
    ACTIONS(452), 1,
      sym_DOT,
    ACTIONS(350), 13,
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
      aux_sym_IDENT_token2,
  [5239] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(364), 1,
      aux_sym_IDENT_token1,
    ACTIONS(386), 1,
      sym_SUBTYPE,
    ACTIONS(470), 1,
      sym_EQUALS,
    ACTIONS(362), 12,
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
      aux_sym_IDENT_token2,
  [5266] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 1,
      aux_sym_IDENT_token1,
    ACTIONS(472), 1,
      sym_PIPE,
    ACTIONS(354), 12,
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
      aux_sym_IDENT_token2,
  [5290] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(464), 1,
      aux_sym_IDENT_token1,
    ACTIONS(462), 12,
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
      aux_sym_IDENT_token2,
  [5311] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(476), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5332] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(478), 1,
      sym_LBRACKET,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(64), 1,
      sym_sum_branch,
    STATE(84), 1,
      sym_non_empty_sum_branch_list,
    STATE(115), 1,
      sym_IDENT,
    STATE(124), 1,
      sym_identifier,
    STATE(127), 1,
      sym_union_type_list,
  [5360] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(478), 1,
      sym_LBRACKET,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(64), 1,
      sym_sum_branch,
    STATE(69), 1,
      sym_IDENT,
    STATE(84), 1,
      sym_non_empty_sum_branch_list,
    STATE(90), 1,
      sym_identifier,
    STATE(100), 1,
      sym_union_type_list,
  [5388] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(490), 1,
      sym_STRING,
    STATE(224), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_kvp_value,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(488), 2,
      sym_TRUE,
      sym_FALSE,
  [5409] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(490), 1,
      sym_STRING,
    STATE(208), 1,
      sym_kvp_value,
    STATE(224), 1,
      sym_IDENT,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(488), 2,
      sym_TRUE,
      sym_FALSE,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [5442] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(492), 1,
      sym_LBRACE,
    STATE(42), 1,
      sym_atom,
    STATE(141), 1,
      sym_IDENT,
    STATE(215), 1,
      sym_identifier,
  [5464] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(494), 1,
      sym_RPAREN,
    STATE(210), 1,
      sym_NUMBER,
    STATE(233), 1,
      sym_exec_order_list,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5484] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(96), 1,
      sym_io_directive_list,
    STATE(107), 1,
      sym_IDENT,
    STATE(113), 1,
      sym_identifier,
    STATE(120), 1,
      sym_io_relation_list,
  [5506] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(496), 1,
      sym_LBRACE,
    STATE(43), 1,
      sym_atom,
    STATE(141), 1,
      sym_IDENT,
    STATE(215), 1,
      sym_identifier,
  [5528] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(498), 1,
      sym_RPAREN,
    STATE(210), 1,
      sym_NUMBER,
    STATE(211), 1,
      sym_exec_order_list,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5548] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(66), 1,
      sym_identifier,
    STATE(95), 1,
      sym_io_relation_list,
    STATE(96), 1,
      sym_io_directive_list,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [5582] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(500), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5593] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(502), 1,
      sym_RBRACKET,
    STATE(219), 1,
      sym_non_empty_record_type_list,
    STATE(268), 1,
      sym_IDENT,
  [5612] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(504), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5623] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(84), 1,
      sym_predefined_type,
    ACTIONS(506), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(508), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(510), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_COMMA,
    ACTIONS(512), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5671] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(516), 1,
      sym_RPAREN,
    STATE(229), 1,
      sym_non_empty_key_value_pairs,
    STATE(237), 1,
      sym_IDENT,
  [5690] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(518), 1,
      sym_RPAREN,
    STATE(231), 1,
      sym_non_empty_attributes,
    STATE(240), 1,
      sym_IDENT,
  [5709] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5720] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(522), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5731] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(524), 1,
      sym_RPAREN,
    STATE(221), 1,
      sym_non_empty_attributes,
    STATE(240), 1,
      sym_IDENT,
  [5750] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_COMMA,
    ACTIONS(526), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5763] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(528), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5774] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(58), 1,
      sym_exec_plan_list,
    STATE(248), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5791] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_atom,
    STATE(215), 1,
      sym_identifier,
  [5810] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(530), 1,
      sym_RBRACE,
    STATE(218), 1,
      sym_non_empty_attributes,
    STATE(240), 1,
      sym_IDENT,
  [5829] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(64), 1,
      sym_sum_branch,
    STATE(87), 1,
      sym_non_empty_sum_branch_list,
    STATE(258), 1,
      sym_IDENT,
  [5848] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(83), 1,
      sym_identifier,
  [5864] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(51), 1,
      sym_IDENT,
    STATE(192), 1,
      sym_comp_type,
  [5880] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(262), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5894] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(51), 1,
      sym_IDENT,
    STATE(85), 1,
      sym_comp_type,
  [5910] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
    STATE(171), 1,
      sym_identifier,
  [5926] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(217), 1,
      sym_relation_list,
    STATE(226), 1,
      sym_IDENT,
  [5942] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(232), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5956] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
    STATE(223), 1,
      sym_identifier,
  [5972] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(532), 1,
      aux_sym_IDENT_token1,
    ACTIONS(534), 1,
      aux_sym_IDENT_token2,
    STATE(77), 1,
      sym_IDENT,
    STATE(80), 1,
      sym_identifier,
  [5988] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(51), 1,
      sym_IDENT,
    STATE(85), 1,
      sym_comp_type,
  [6004] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(107), 1,
      sym_IDENT,
    STATE(114), 1,
      sym_identifier,
  [6020] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      sym_DOT,
    ACTIONS(536), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [6032] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
    STATE(177), 1,
      sym_identifier,
  [6048] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(263), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6062] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_identifier,
  [6078] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(107), 1,
      sym_IDENT,
    STATE(125), 1,
      sym_identifier,
  [6094] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(51), 1,
      sym_IDENT,
    STATE(185), 1,
      sym_comp_type,
  [6110] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      sym_DOT,
    ACTIONS(540), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [6122] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
    STATE(206), 1,
      sym_identifier,
  [6138] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(227), 1,
      sym_type_param_list,
    STATE(228), 1,
      sym_IDENT,
  [6154] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(532), 1,
      aux_sym_IDENT_token1,
    ACTIONS(534), 1,
      aux_sym_IDENT_token2,
    STATE(77), 1,
      sym_IDENT,
    STATE(93), 1,
      sym_identifier,
  [6170] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(141), 1,
      sym_IDENT,
    STATE(194), 1,
      sym_identifier,
  [6186] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(267), 1,
      sym_IDENT,
  [6199] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(542), 1,
      sym_SEMICOLON,
    ACTIONS(544), 2,
      sym_DOT,
      sym_RBRACE,
  [6210] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(266), 1,
      sym_IDENT,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(546), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6232] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(550), 1,
      sym_LBRACE,
    ACTIONS(548), 2,
      sym_COMMA,
      sym_COLON,
  [6243] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(214), 1,
      sym_IDENT,
  [6256] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(134), 1,
      sym_IDENT,
  [6269] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(234), 1,
      sym_IDENT,
  [6282] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(86), 1,
      sym_IDENT,
  [6295] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(129), 1,
      sym_IDENT,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6317] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(86), 1,
      sym_IDENT,
  [6330] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      sym_DOT,
    ACTIONS(554), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6341] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(265), 1,
      sym_IDENT,
  [6354] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(243), 1,
      sym_IDENT,
  [6367] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(126), 1,
      sym_IDENT,
  [6380] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_DOT,
    ACTIONS(556), 2,
      sym_COMMA,
      sym_IF,
  [6391] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(55), 1,
      sym_IDENT,
  [6404] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(532), 1,
      aux_sym_IDENT_token1,
    ACTIONS(534), 1,
      aux_sym_IDENT_token2,
    STATE(76), 1,
      sym_IDENT,
  [6417] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(242), 1,
      sym_IDENT,
  [6430] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(259), 1,
      sym_IDENT,
  [6443] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(484), 1,
      aux_sym_IDENT_token1,
    ACTIONS(486), 1,
      aux_sym_IDENT_token2,
    STATE(92), 1,
      sym_IDENT,
  [6456] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(261), 1,
      sym_IDENT,
  [6469] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(102), 1,
      sym_IDENT,
  [6482] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      sym_DOT,
    ACTIONS(560), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(542), 1,
      sym_SEMICOLON,
    ACTIONS(562), 1,
      sym_RPAREN,
  [6503] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(564), 2,
      sym_RPAREN,
      sym_COMMA,
  [6511] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(566), 1,
      sym_RPAREN,
    ACTIONS(568), 1,
      sym_COMMA,
  [6521] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(570), 2,
      sym_RPAREN,
      sym_COMMA,
  [6529] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 1,
      sym_RPAREN,
    ACTIONS(574), 1,
      sym_COMMA,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(576), 2,
      sym_COMMA,
      sym_IF,
  [6547] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(116), 1,
      sym_RPAREN,
    ACTIONS(568), 1,
      sym_COMMA,
  [6557] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 2,
      sym_COMMA,
      sym_GT,
  [6565] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      sym_DOT,
    ACTIONS(580), 1,
      sym_LPAREN,
  [6575] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(582), 1,
      sym_COMMA,
    ACTIONS(584), 1,
      sym_IF,
  [6585] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(586), 1,
      sym_LPAREN,
    ACTIONS(588), 1,
      sym_COMMA,
  [6595] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 1,
      sym_COMMA,
    ACTIONS(592), 1,
      sym_RBRACE,
  [6605] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(594), 1,
      sym_RBRACKET,
    ACTIONS(596), 1,
      sym_COMMA,
  [6615] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_COMMA,
    ACTIONS(598), 1,
      sym_RPAREN,
  [6625] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 1,
      sym_COMMA,
    ACTIONS(600), 1,
      sym_RPAREN,
  [6635] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_COMMA,
    ACTIONS(602), 1,
      sym_RPAREN,
  [6645] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 1,
      sym_DOT,
    ACTIONS(602), 1,
      sym_RPAREN,
  [6655] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(604), 2,
      sym_RPAREN,
      sym_COMMA,
  [6663] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(112), 1,
      sym_RBRACKET,
    ACTIONS(568), 1,
      sym_COMMA,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 2,
      sym_LPAREN,
      sym_COMMA,
  [6681] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(608), 1,
      sym_COMMA,
    ACTIONS(610), 1,
      sym_GT,
  [6691] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(612), 2,
      sym_COMMA,
      sym_GT,
  [6699] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(614), 1,
      sym_RPAREN,
    ACTIONS(616), 1,
      sym_COMMA,
  [6709] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(618), 2,
      sym_RPAREN,
      sym_COMMA,
  [6717] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(590), 1,
      sym_COMMA,
    ACTIONS(620), 1,
      sym_RPAREN,
  [6727] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(622), 2,
      sym_RPAREN,
      sym_COMMA,
  [6735] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(574), 1,
      sym_COMMA,
    ACTIONS(624), 1,
      sym_RPAREN,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(626), 2,
      sym_LPAREN,
      sym_COMMA,
  [6753] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
  [6760] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
  [6767] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(632), 1,
      sym_EQUALS,
  [6774] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(634), 1,
      sym_COLON,
  [6781] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(636), 1,
      sym_COLON,
  [6788] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(638), 1,
      sym_COLON,
  [6795] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 1,
      sym_RBRACE,
  [6802] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(177), 1,
      sym_LPAREN,
  [6809] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 1,
      sym_COLON,
  [6816] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 1,
      sym_LPAREN,
  [6823] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(644), 1,
      sym_DOT,
  [6830] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(646), 1,
      sym_LPAREN,
  [6837] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(648), 1,
      sym_LPAREN,
  [6844] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(650), 1,
      sym_COLON,
  [6851] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_LPAREN,
  [6858] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 1,
      sym_RBRACE,
  [6865] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
  [6872] = 2,
    ACTIONS(656), 1,
      sym_COMMENT,
    ACTIONS(658), 1,
      aux_sym_define_token1,
  [6879] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(660), 1,
      sym_COLON,
  [6886] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 1,
      sym_LPAREN,
  [6893] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 1,
      sym_STRING,
  [6900] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(666), 1,
      sym_LPAREN,
  [6907] = 2,
    ACTIONS(656), 1,
      sym_COMMENT,
    ACTIONS(668), 1,
      sym_filename,
  [6914] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 1,
      sym_LBRACE,
  [6921] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      sym_LPAREN,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
  [6935] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(674), 1,
      sym_EQUALS,
  [6942] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(676), 1,
      sym_COLON,
  [6949] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
  [6956] = 2,
    ACTIONS(656), 1,
      sym_COMMENT,
    ACTIONS(680), 1,
      sym_filename,
  [6963] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(682), 1,
      sym_EQUALS,
  [6970] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(684), 1,
      sym_EQUALS,
  [6977] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(686), 1,
      sym_COLON,
  [6984] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(688), 1,
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
  [SMALL_STATE(10)] = 802,
  [SMALL_STATE(11)] = 889,
  [SMALL_STATE(12)] = 969,
  [SMALL_STATE(13)] = 1049,
  [SMALL_STATE(14)] = 1129,
  [SMALL_STATE(15)] = 1209,
  [SMALL_STATE(16)] = 1286,
  [SMALL_STATE(17)] = 1360,
  [SMALL_STATE(18)] = 1434,
  [SMALL_STATE(19)] = 1508,
  [SMALL_STATE(20)] = 1582,
  [SMALL_STATE(21)] = 1656,
  [SMALL_STATE(22)] = 1730,
  [SMALL_STATE(23)] = 1804,
  [SMALL_STATE(24)] = 1878,
  [SMALL_STATE(25)] = 1952,
  [SMALL_STATE(26)] = 2026,
  [SMALL_STATE(27)] = 2100,
  [SMALL_STATE(28)] = 2174,
  [SMALL_STATE(29)] = 2216,
  [SMALL_STATE(30)] = 2259,
  [SMALL_STATE(31)] = 2296,
  [SMALL_STATE(32)] = 2339,
  [SMALL_STATE(33)] = 2375,
  [SMALL_STATE(34)] = 2445,
  [SMALL_STATE(35)] = 2515,
  [SMALL_STATE(36)] = 2551,
  [SMALL_STATE(37)] = 2591,
  [SMALL_STATE(38)] = 2627,
  [SMALL_STATE(39)] = 2665,
  [SMALL_STATE(40)] = 2735,
  [SMALL_STATE(41)] = 2775,
  [SMALL_STATE(42)] = 2810,
  [SMALL_STATE(43)] = 2845,
  [SMALL_STATE(44)] = 2880,
  [SMALL_STATE(45)] = 2915,
  [SMALL_STATE(46)] = 2950,
  [SMALL_STATE(47)] = 2985,
  [SMALL_STATE(48)] = 3020,
  [SMALL_STATE(49)] = 3061,
  [SMALL_STATE(50)] = 3096,
  [SMALL_STATE(51)] = 3129,
  [SMALL_STATE(52)] = 3165,
  [SMALL_STATE(53)] = 3198,
  [SMALL_STATE(54)] = 3228,
  [SMALL_STATE(55)] = 3258,
  [SMALL_STATE(56)] = 3287,
  [SMALL_STATE(57)] = 3316,
  [SMALL_STATE(58)] = 3345,
  [SMALL_STATE(59)] = 3376,
  [SMALL_STATE(60)] = 3405,
  [SMALL_STATE(61)] = 3434,
  [SMALL_STATE(62)] = 3463,
  [SMALL_STATE(63)] = 3500,
  [SMALL_STATE(64)] = 3529,
  [SMALL_STATE(65)] = 3559,
  [SMALL_STATE(66)] = 3587,
  [SMALL_STATE(67)] = 3617,
  [SMALL_STATE(68)] = 3651,
  [SMALL_STATE(69)] = 3681,
  [SMALL_STATE(70)] = 3711,
  [SMALL_STATE(71)] = 3739,
  [SMALL_STATE(72)] = 3767,
  [SMALL_STATE(73)] = 3795,
  [SMALL_STATE(74)] = 3823,
  [SMALL_STATE(75)] = 3850,
  [SMALL_STATE(76)] = 3877,
  [SMALL_STATE(77)] = 3904,
  [SMALL_STATE(78)] = 3931,
  [SMALL_STATE(79)] = 3958,
  [SMALL_STATE(80)] = 3985,
  [SMALL_STATE(81)] = 4016,
  [SMALL_STATE(82)] = 4043,
  [SMALL_STATE(83)] = 4070,
  [SMALL_STATE(84)] = 4099,
  [SMALL_STATE(85)] = 4126,
  [SMALL_STATE(86)] = 4153,
  [SMALL_STATE(87)] = 4180,
  [SMALL_STATE(88)] = 4207,
  [SMALL_STATE(89)] = 4238,
  [SMALL_STATE(90)] = 4265,
  [SMALL_STATE(91)] = 4294,
  [SMALL_STATE(92)] = 4325,
  [SMALL_STATE(93)] = 4356,
  [SMALL_STATE(94)] = 4387,
  [SMALL_STATE(95)] = 4414,
  [SMALL_STATE(96)] = 4445,
  [SMALL_STATE(97)] = 4472,
  [SMALL_STATE(98)] = 4499,
  [SMALL_STATE(99)] = 4526,
  [SMALL_STATE(100)] = 4553,
  [SMALL_STATE(101)] = 4581,
  [SMALL_STATE(102)] = 4609,
  [SMALL_STATE(103)] = 4634,
  [SMALL_STATE(104)] = 4659,
  [SMALL_STATE(105)] = 4688,
  [SMALL_STATE(106)] = 4713,
  [SMALL_STATE(107)] = 4738,
  [SMALL_STATE(108)] = 4763,
  [SMALL_STATE(109)] = 4792,
  [SMALL_STATE(110)] = 4817,
  [SMALL_STATE(111)] = 4842,
  [SMALL_STATE(112)] = 4867,
  [SMALL_STATE(113)] = 4892,
  [SMALL_STATE(114)] = 4918,
  [SMALL_STATE(115)] = 4944,
  [SMALL_STATE(116)] = 4970,
  [SMALL_STATE(117)] = 5000,
  [SMALL_STATE(118)] = 5027,
  [SMALL_STATE(119)] = 5054,
  [SMALL_STATE(120)] = 5081,
  [SMALL_STATE(121)] = 5108,
  [SMALL_STATE(122)] = 5135,
  [SMALL_STATE(123)] = 5162,
  [SMALL_STATE(124)] = 5189,
  [SMALL_STATE(125)] = 5214,
  [SMALL_STATE(126)] = 5239,
  [SMALL_STATE(127)] = 5266,
  [SMALL_STATE(128)] = 5290,
  [SMALL_STATE(129)] = 5311,
  [SMALL_STATE(130)] = 5332,
  [SMALL_STATE(131)] = 5360,
  [SMALL_STATE(132)] = 5388,
  [SMALL_STATE(133)] = 5409,
  [SMALL_STATE(134)] = 5430,
  [SMALL_STATE(135)] = 5442,
  [SMALL_STATE(136)] = 5464,
  [SMALL_STATE(137)] = 5484,
  [SMALL_STATE(138)] = 5506,
  [SMALL_STATE(139)] = 5528,
  [SMALL_STATE(140)] = 5548,
  [SMALL_STATE(141)] = 5570,
  [SMALL_STATE(142)] = 5582,
  [SMALL_STATE(143)] = 5593,
  [SMALL_STATE(144)] = 5612,
  [SMALL_STATE(145)] = 5623,
  [SMALL_STATE(146)] = 5636,
  [SMALL_STATE(147)] = 5647,
  [SMALL_STATE(148)] = 5658,
  [SMALL_STATE(149)] = 5671,
  [SMALL_STATE(150)] = 5690,
  [SMALL_STATE(151)] = 5709,
  [SMALL_STATE(152)] = 5720,
  [SMALL_STATE(153)] = 5731,
  [SMALL_STATE(154)] = 5750,
  [SMALL_STATE(155)] = 5763,
  [SMALL_STATE(156)] = 5774,
  [SMALL_STATE(157)] = 5791,
  [SMALL_STATE(158)] = 5810,
  [SMALL_STATE(159)] = 5829,
  [SMALL_STATE(160)] = 5848,
  [SMALL_STATE(161)] = 5864,
  [SMALL_STATE(162)] = 5880,
  [SMALL_STATE(163)] = 5894,
  [SMALL_STATE(164)] = 5910,
  [SMALL_STATE(165)] = 5926,
  [SMALL_STATE(166)] = 5942,
  [SMALL_STATE(167)] = 5956,
  [SMALL_STATE(168)] = 5972,
  [SMALL_STATE(169)] = 5988,
  [SMALL_STATE(170)] = 6004,
  [SMALL_STATE(171)] = 6020,
  [SMALL_STATE(172)] = 6032,
  [SMALL_STATE(173)] = 6048,
  [SMALL_STATE(174)] = 6062,
  [SMALL_STATE(175)] = 6078,
  [SMALL_STATE(176)] = 6094,
  [SMALL_STATE(177)] = 6110,
  [SMALL_STATE(178)] = 6122,
  [SMALL_STATE(179)] = 6138,
  [SMALL_STATE(180)] = 6154,
  [SMALL_STATE(181)] = 6170,
  [SMALL_STATE(182)] = 6186,
  [SMALL_STATE(183)] = 6199,
  [SMALL_STATE(184)] = 6210,
  [SMALL_STATE(185)] = 6223,
  [SMALL_STATE(186)] = 6232,
  [SMALL_STATE(187)] = 6243,
  [SMALL_STATE(188)] = 6256,
  [SMALL_STATE(189)] = 6269,
  [SMALL_STATE(190)] = 6282,
  [SMALL_STATE(191)] = 6295,
  [SMALL_STATE(192)] = 6308,
  [SMALL_STATE(193)] = 6317,
  [SMALL_STATE(194)] = 6330,
  [SMALL_STATE(195)] = 6341,
  [SMALL_STATE(196)] = 6354,
  [SMALL_STATE(197)] = 6367,
  [SMALL_STATE(198)] = 6380,
  [SMALL_STATE(199)] = 6391,
  [SMALL_STATE(200)] = 6404,
  [SMALL_STATE(201)] = 6417,
  [SMALL_STATE(202)] = 6430,
  [SMALL_STATE(203)] = 6443,
  [SMALL_STATE(204)] = 6456,
  [SMALL_STATE(205)] = 6469,
  [SMALL_STATE(206)] = 6482,
  [SMALL_STATE(207)] = 6493,
  [SMALL_STATE(208)] = 6503,
  [SMALL_STATE(209)] = 6511,
  [SMALL_STATE(210)] = 6521,
  [SMALL_STATE(211)] = 6529,
  [SMALL_STATE(212)] = 6539,
  [SMALL_STATE(213)] = 6547,
  [SMALL_STATE(214)] = 6557,
  [SMALL_STATE(215)] = 6565,
  [SMALL_STATE(216)] = 6575,
  [SMALL_STATE(217)] = 6585,
  [SMALL_STATE(218)] = 6595,
  [SMALL_STATE(219)] = 6605,
  [SMALL_STATE(220)] = 6615,
  [SMALL_STATE(221)] = 6625,
  [SMALL_STATE(222)] = 6635,
  [SMALL_STATE(223)] = 6645,
  [SMALL_STATE(224)] = 6655,
  [SMALL_STATE(225)] = 6663,
  [SMALL_STATE(226)] = 6673,
  [SMALL_STATE(227)] = 6681,
  [SMALL_STATE(228)] = 6691,
  [SMALL_STATE(229)] = 6699,
  [SMALL_STATE(230)] = 6709,
  [SMALL_STATE(231)] = 6717,
  [SMALL_STATE(232)] = 6727,
  [SMALL_STATE(233)] = 6735,
  [SMALL_STATE(234)] = 6745,
  [SMALL_STATE(235)] = 6753,
  [SMALL_STATE(236)] = 6760,
  [SMALL_STATE(237)] = 6767,
  [SMALL_STATE(238)] = 6774,
  [SMALL_STATE(239)] = 6781,
  [SMALL_STATE(240)] = 6788,
  [SMALL_STATE(241)] = 6795,
  [SMALL_STATE(242)] = 6802,
  [SMALL_STATE(243)] = 6809,
  [SMALL_STATE(244)] = 6816,
  [SMALL_STATE(245)] = 6823,
  [SMALL_STATE(246)] = 6830,
  [SMALL_STATE(247)] = 6837,
  [SMALL_STATE(248)] = 6844,
  [SMALL_STATE(249)] = 6851,
  [SMALL_STATE(250)] = 6858,
  [SMALL_STATE(251)] = 6865,
  [SMALL_STATE(252)] = 6872,
  [SMALL_STATE(253)] = 6879,
  [SMALL_STATE(254)] = 6886,
  [SMALL_STATE(255)] = 6893,
  [SMALL_STATE(256)] = 6900,
  [SMALL_STATE(257)] = 6907,
  [SMALL_STATE(258)] = 6914,
  [SMALL_STATE(259)] = 6921,
  [SMALL_STATE(260)] = 6928,
  [SMALL_STATE(261)] = 6935,
  [SMALL_STATE(262)] = 6942,
  [SMALL_STATE(263)] = 6949,
  [SMALL_STATE(264)] = 6956,
  [SMALL_STATE(265)] = 6963,
  [SMALL_STATE(266)] = 6970,
  [SMALL_STATE(267)] = 6977,
  [SMALL_STATE(268)] = 6984,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(165),
  [9] = {.count = 1, .reusable = true}, SHIFT(202),
  [11] = {.count = 1, .reusable = true}, SHIFT(140),
  [13] = {.count = 1, .reusable = true}, SHIFT(203),
  [15] = {.count = 1, .reusable = true}, SHIFT(176),
  [17] = {.count = 1, .reusable = true}, SHIFT(195),
  [19] = {.count = 1, .reusable = true}, SHIFT(190),
  [21] = {.count = 1, .reusable = true}, SHIFT(255),
  [23] = {.count = 1, .reusable = false}, SHIFT(30),
  [25] = {.count = 1, .reusable = true}, SHIFT(30),
  [27] = {.count = 1, .reusable = true}, SHIFT(235),
  [29] = {.count = 1, .reusable = true}, SHIFT(173),
  [31] = {.count = 1, .reusable = true}, SHIFT(252),
  [33] = {.count = 1, .reusable = false}, SHIFT(27),
  [35] = {.count = 1, .reusable = false}, SHIFT(246),
  [37] = {.count = 1, .reusable = false}, SHIFT(23),
  [39] = {.count = 1, .reusable = false}, SHIFT(256),
  [41] = {.count = 1, .reusable = false}, SHIFT(25),
  [43] = {.count = 1, .reusable = false}, SHIFT(254),
  [45] = {.count = 1, .reusable = false}, SHIFT(41),
  [47] = {.count = 1, .reusable = false}, SHIFT(253),
  [49] = {.count = 1, .reusable = false}, SHIFT(155),
  [51] = {.count = 1, .reusable = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(5),
  [57] = {.count = 1, .reusable = true}, SHIFT(7),
  [59] = {.count = 1, .reusable = true}, SHIFT(201),
  [61] = {.count = 1, .reusable = false}, SHIFT(37),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(41),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(26),
  [112] = {.count = 1, .reusable = true}, SHIFT(42),
  [114] = {.count = 1, .reusable = true}, SHIFT(35),
  [116] = {.count = 1, .reusable = true}, SHIFT(43),
  [118] = {.count = 1, .reusable = true}, SHIFT(46),
  [120] = {.count = 1, .reusable = true}, SHIFT(16),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [128] = {.count = 1, .reusable = false}, SHIFT(40),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [144] = {.count = 1, .reusable = true}, SHIFT(137),
  [146] = {.count = 1, .reusable = true}, SHIFT(197),
  [148] = {.count = 1, .reusable = true}, SHIFT(184),
  [150] = {.count = 1, .reusable = true}, SHIFT(193),
  [152] = {.count = 1, .reusable = true}, SHIFT(191),
  [154] = {.count = 1, .reusable = true}, SHIFT(75),
  [156] = {.count = 1, .reusable = true}, SHIFT(97),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(36),
  [167] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(13),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(165),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(137),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(197),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(176),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(184),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(193),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(191),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(30),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(30),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [210] = {.count = 1, .reusable = false}, SHIFT(36),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [230] = {.count = 1, .reusable = true}, SHIFT(18),
  [232] = {.count = 1, .reusable = false}, SHIFT(18),
  [234] = {.count = 1, .reusable = true}, SHIFT(17),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [238] = {.count = 1, .reusable = true}, SHIFT(179),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 7),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 7),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 5),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 5),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [266] = {.count = 1, .reusable = true}, SHIFT(162),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 6),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 6),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 4),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 4),
  [278] = {.count = 1, .reusable = true}, SHIFT(24),
  [280] = {.count = 1, .reusable = false}, SHIFT(24),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [286] = {.count = 1, .reusable = true}, SHIFT(159),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 4),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 4),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [296] = {.count = 1, .reusable = false}, SHIFT(199),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [304] = {.count = 1, .reusable = true}, SHIFT(158),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 3),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [336] = {.count = 1, .reusable = false}, SHIFT(200),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [340] = {.count = 1, .reusable = false}, SHIFT(103),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [382] = {.count = 1, .reusable = true}, SHIFT(156),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [386] = {.count = 1, .reusable = true}, SHIFT(145),
  [388] = {.count = 1, .reusable = true}, SHIFT(131),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [394] = {.count = 1, .reusable = false}, SHIFT(109),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [398] = {.count = 1, .reusable = true}, SHIFT(149),
  [400] = {.count = 1, .reusable = true}, SHIFT(174),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_type, 1),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_predefined_type, 1),
  [420] = {.count = 1, .reusable = true}, SHIFT(160),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [426] = {.count = 1, .reusable = true}, SHIFT(112),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 8),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 8),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [452] = {.count = 1, .reusable = false}, SHIFT(205),
  [454] = {.count = 1, .reusable = true}, SHIFT(15),
  [456] = {.count = 1, .reusable = true}, SHIFT(20),
  [458] = {.count = 1, .reusable = true}, SHIFT(146),
  [460] = {.count = 1, .reusable = true}, SHIFT(170),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [466] = {.count = 1, .reusable = true}, SHIFT(167),
  [468] = {.count = 1, .reusable = true}, SHIFT(138),
  [470] = {.count = 1, .reusable = true}, SHIFT(130),
  [472] = {.count = 1, .reusable = true}, SHIFT(175),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [478] = {.count = 1, .reusable = true}, SHIFT(143),
  [480] = {.count = 1, .reusable = false}, SHIFT(60),
  [482] = {.count = 1, .reusable = true}, SHIFT(60),
  [484] = {.count = 1, .reusable = false}, SHIFT(50),
  [486] = {.count = 1, .reusable = true}, SHIFT(50),
  [488] = {.count = 1, .reusable = false}, SHIFT(224),
  [490] = {.count = 1, .reusable = true}, SHIFT(224),
  [492] = {.count = 1, .reusable = true}, SHIFT(3),
  [494] = {.count = 1, .reusable = true}, SHIFT(59),
  [496] = {.count = 1, .reusable = true}, SHIFT(2),
  [498] = {.count = 1, .reusable = true}, SHIFT(61),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [502] = {.count = 1, .reusable = true}, SHIFT(74),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [506] = {.count = 1, .reusable = true}, SHIFT(99),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [514] = {.count = 1, .reusable = true}, SHIFT(8),
  [516] = {.count = 1, .reusable = true}, SHIFT(98),
  [518] = {.count = 1, .reusable = true}, SHIFT(238),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [524] = {.count = 1, .reusable = true}, SHIFT(29),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [530] = {.count = 1, .reusable = true}, SHIFT(71),
  [532] = {.count = 1, .reusable = false}, SHIFT(78),
  [534] = {.count = 1, .reusable = true}, SHIFT(78),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [538] = {.count = 1, .reusable = true}, SHIFT(188),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [542] = {.count = 1, .reusable = true}, SHIFT(6),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [548] = {.count = 1, .reusable = true}, SHIFT(161),
  [550] = {.count = 1, .reusable = true}, SHIFT(34),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [558] = {.count = 1, .reusable = true}, SHIFT(81),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [562] = {.count = 1, .reusable = true}, SHIFT(151),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [566] = {.count = 1, .reusable = true}, SHIFT(32),
  [568] = {.count = 1, .reusable = true}, SHIFT(19),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [572] = {.count = 1, .reusable = true}, SHIFT(57),
  [574] = {.count = 1, .reusable = true}, SHIFT(166),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [580] = {.count = 1, .reusable = true}, SHIFT(12),
  [582] = {.count = 1, .reusable = true}, SHIFT(157),
  [584] = {.count = 1, .reusable = true}, SHIFT(4),
  [586] = {.count = 1, .reusable = true}, SHIFT(153),
  [588] = {.count = 1, .reusable = true}, SHIFT(189),
  [590] = {.count = 1, .reusable = true}, SHIFT(182),
  [592] = {.count = 1, .reusable = true}, SHIFT(65),
  [594] = {.count = 1, .reusable = true}, SHIFT(79),
  [596] = {.count = 1, .reusable = true}, SHIFT(196),
  [598] = {.count = 1, .reusable = true}, SHIFT(45),
  [600] = {.count = 1, .reusable = true}, SHIFT(31),
  [602] = {.count = 1, .reusable = true}, SHIFT(44),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [608] = {.count = 1, .reusable = true}, SHIFT(187),
  [610] = {.count = 1, .reusable = true}, SHIFT(54),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [614] = {.count = 1, .reusable = true}, SHIFT(82),
  [616] = {.count = 1, .reusable = true}, SHIFT(204),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [620] = {.count = 1, .reusable = true}, SHIFT(239),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [624] = {.count = 1, .reusable = true}, SHIFT(56),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [628] = {.count = 1, .reusable = true}, SHIFT(264),
  [630] = {.count = 1, .reusable = true}, SHIFT(110),
  [632] = {.count = 1, .reusable = true}, SHIFT(133),
  [634] = {.count = 1, .reusable = true}, SHIFT(168),
  [636] = {.count = 1, .reusable = true}, SHIFT(180),
  [638] = {.count = 1, .reusable = true}, SHIFT(172),
  [640] = {.count = 1, .reusable = true}, SHIFT(178),
  [642] = {.count = 1, .reusable = true}, SHIFT(139),
  [644] = {.count = 1, .reusable = true}, SHIFT(70),
  [646] = {.count = 1, .reusable = true}, SHIFT(22),
  [648] = {.count = 1, .reusable = true}, SHIFT(136),
  [650] = {.count = 1, .reusable = true}, SHIFT(244),
  [652] = {.count = 1, .reusable = true}, SHIFT(11),
  [654] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [656] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [658] = {.count = 1, .reusable = false}, SHIFT(111),
  [660] = {.count = 1, .reusable = true}, SHIFT(135),
  [662] = {.count = 1, .reusable = true}, SHIFT(21),
  [664] = {.count = 1, .reusable = true}, SHIFT(101),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_functor_built_in, 1),
  [668] = {.count = 1, .reusable = false}, SHIFT(236),
  [670] = {.count = 1, .reusable = true}, SHIFT(150),
  [672] = {.count = 1, .reusable = true}, SHIFT(106),
  [674] = {.count = 1, .reusable = true}, SHIFT(132),
  [676] = {.count = 1, .reusable = true}, SHIFT(247),
  [678] = {.count = 1, .reusable = true}, SHIFT(257),
  [680] = {.count = 1, .reusable = false}, SHIFT(260),
  [682] = {.count = 1, .reusable = true}, SHIFT(163),
  [684] = {.count = 1, .reusable = true}, SHIFT(169),
  [686] = {.count = 1, .reusable = true}, SHIFT(164),
  [688] = {.count = 1, .reusable = true}, SHIFT(181),
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
