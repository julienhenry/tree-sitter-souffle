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
#define STATE_COUNT 338
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 102
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
  anon_sym_OUTPUT = 88,
  anon_sym_INPUT = 89,
  sym_COMMENT = 90,
  anon_sym_POUNDinclude = 91,
  anon_sym_DQUOTE = 92,
  anon_sym_POUNDline = 93,
  anon_sym_POUNDdefine = 94,
  aux_sym_define_token1 = 95,
  sym_filename = 96,
  anon_sym_stateful = 97,
  anon_sym_number = 98,
  anon_sym_symbol = 99,
  anon_sym_float = 100,
  anon_sym_unsigned = 101,
  sym_source_file = 102,
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
  sym_predefined_type = 143,
  sym_pragma = 144,
  sym_io_head = 145,
  sym_io_directive_list = 146,
  sym_io_relation_list = 147,
  sym_non_empty_key_value_pairs = 148,
  sym_kvp_value = 149,
  aux_sym_source_file_repeat1 = 150,
  aux_sym_relation_tags_repeat1 = 151,
  aux_sym_component_repeat1 = 152,
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
  [anon_sym_OUTPUT] = "OUTPUT",
  [anon_sym_INPUT] = "INPUT",
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
  [anon_sym_OUTPUT] = anon_sym_OUTPUT,
  [anon_sym_INPUT] = anon_sym_INPUT,
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
  [anon_sym_OUTPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(236);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(404);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(410);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(226);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(229);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 138:
      if (lookahead == 'z') ADVANCE(49);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(410);
      if (lookahead == '\r') ADVANCE(412);
      END_STATE();
    case 144:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(399);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 145:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 146:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 147:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_DECL);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_FUNCTOR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_INPUT_DECL);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_OUTPUT_DECL);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_PRINTSIZE_DECL);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_TYPE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_COMPONENT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_INSTANTIATE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_NUMBER_TYPE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_SYMBOL_TYPE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_OVERRIDE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_PRAGMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_BW_AND);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_BW_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_BW_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_BW_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_L_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_L_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_RANGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_TOFLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_TOUNSIGNED);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(229);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_AT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(410);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(226);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(228);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'N') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'U') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'q') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == 'v') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == 'u') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == 'v') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'P') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'T') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'U') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'U') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'c') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'm') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'p') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'x') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'x') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'z') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_OUTPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_INPUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(430);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\r') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(429);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(143);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(424);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(408);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(430);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == '\r') ADVANCE(412);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead == '/') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(424);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '/') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(408);
      if (lookahead == '\r') ADVANCE(414);
      if (lookahead == '"') ADVANCE(410);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 144},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 144},
  [11] = {.lex_state = 144},
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
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 147},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 147},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 147},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 144},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 145},
  [55] = {.lex_state = 144},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 144},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 144},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 144},
  [64] = {.lex_state = 144},
  [65] = {.lex_state = 144},
  [66] = {.lex_state = 144},
  [67] = {.lex_state = 145},
  [68] = {.lex_state = 144},
  [69] = {.lex_state = 148},
  [70] = {.lex_state = 148},
  [71] = {.lex_state = 144},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 148},
  [74] = {.lex_state = 145},
  [75] = {.lex_state = 145},
  [76] = {.lex_state = 148},
  [77] = {.lex_state = 145},
  [78] = {.lex_state = 145},
  [79] = {.lex_state = 148},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 146},
  [82] = {.lex_state = 145},
  [83] = {.lex_state = 144},
  [84] = {.lex_state = 144},
  [85] = {.lex_state = 144},
  [86] = {.lex_state = 144},
  [87] = {.lex_state = 145},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 144},
  [90] = {.lex_state = 145},
  [91] = {.lex_state = 145},
  [92] = {.lex_state = 144},
  [93] = {.lex_state = 144},
  [94] = {.lex_state = 144},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 144},
  [97] = {.lex_state = 144},
  [98] = {.lex_state = 144},
  [99] = {.lex_state = 144},
  [100] = {.lex_state = 144},
  [101] = {.lex_state = 144},
  [102] = {.lex_state = 144},
  [103] = {.lex_state = 144},
  [104] = {.lex_state = 144},
  [105] = {.lex_state = 144},
  [106] = {.lex_state = 144},
  [107] = {.lex_state = 144},
  [108] = {.lex_state = 144},
  [109] = {.lex_state = 144},
  [110] = {.lex_state = 144},
  [111] = {.lex_state = 144},
  [112] = {.lex_state = 144},
  [113] = {.lex_state = 144},
  [114] = {.lex_state = 144},
  [115] = {.lex_state = 144},
  [116] = {.lex_state = 144},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 144},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 144},
  [179] = {.lex_state = 144},
  [180] = {.lex_state = 144},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 144},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 144},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 144},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 144},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 144},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 144},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 144},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 144},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 144},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 144},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 144},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 428},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 144},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 423},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 428},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 144},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 144},
  [319] = {.lex_state = 144},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 144},
  [326] = {.lex_state = 144},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 144},
  [329] = {.lex_state = 144},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 144},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 144},
  [336] = {.lex_state = 144},
  [337] = {.lex_state = 0},
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
    [anon_sym_OUTPUT] = ACTIONS(1),
    [anon_sym_INPUT] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_stateful] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(303),
    [sym_IDENT] = STATE(175),
    [sym_unit] = STATE(11),
    [sym_include] = STATE(111),
    [sym_line] = STATE(111),
    [sym_define] = STATE(111),
    [sym_identifier] = STATE(293),
    [sym_type] = STATE(111),
    [sym_relation_decl] = STATE(111),
    [sym_fact] = STATE(111),
    [sym_rule] = STATE(82),
    [sym_rule_def] = STATE(91),
    [sym_head] = STATE(292),
    [sym_atom] = STATE(238),
    [sym_component] = STATE(111),
    [sym_component_head] = STATE(239),
    [sym_comp_init] = STATE(111),
    [sym_functor_decl] = STATE(111),
    [sym_pragma] = STATE(111),
    [sym_io_head] = STATE(111),
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
    [aux_sym_IDENT_token1] = ACTIONS(23),
    [aux_sym_IDENT_token2] = ACTIONS(23),
    [anon_sym_OUTPUT] = ACTIONS(25),
    [anon_sym_INPUT] = ACTIONS(25),
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(201), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(254), 1,
      sym_disjunction,
    STATE(293), 1,
      sym_identifier,
    STATE(314), 1,
      sym_functor_built_in,
    STATE(317), 1,
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
    STATE(200), 2,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(201), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(254), 1,
      sym_disjunction,
    STATE(293), 1,
      sym_identifier,
    STATE(309), 1,
      sym_body,
    STATE(314), 1,
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
    STATE(200), 2,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(201), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(254), 1,
      sym_disjunction,
    STATE(293), 1,
      sym_identifier,
    STATE(314), 1,
      sym_functor_built_in,
    STATE(332), 1,
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
    STATE(200), 2,
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
  [318] = 29,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(201), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(254), 1,
      sym_disjunction,
    STATE(293), 1,
      sym_identifier,
    STATE(312), 1,
      sym_body,
    STATE(314), 1,
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
    STATE(200), 2,
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
  [424] = 28,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(72), 1,
      sym_arg,
    STATE(201), 1,
      sym_term,
    STATE(202), 1,
      sym_conjunction,
    STATE(276), 1,
      sym_disjunction,
    STATE(293), 1,
      sym_identifier,
    STATE(314), 1,
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
    STATE(200), 2,
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
  [527] = 27,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(186), 1,
      sym_conjunction,
    STATE(201), 1,
      sym_term,
    STATE(293), 1,
      sym_identifier,
    STATE(314), 1,
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
    STATE(200), 2,
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
  [627] = 26,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(187), 1,
      sym_term,
    STATE(293), 1,
      sym_identifier,
    STATE(314), 1,
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
    STATE(200), 2,
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
  [724] = 26,
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
    STATE(59), 1,
      sym_IDENT,
    STATE(88), 1,
      sym_arg,
    STATE(196), 1,
      sym_term,
    STATE(293), 1,
      sym_identifier,
    STATE(314), 1,
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
    STATE(200), 2,
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
  [821] = 24,
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
    ACTIONS(99), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDline,
    ACTIONS(105), 1,
      anon_sym_POUNDdefine,
    STATE(82), 1,
      sym_rule,
    STATE(91), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(238), 1,
      sym_atom,
    STATE(239), 1,
      sym_component_head,
    STATE(292), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(87), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(93), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(96), 2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(75), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(111), 11,
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
  [910] = 24,
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
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_rule,
    STATE(91), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(238), 1,
      sym_atom,
    STATE(239), 1,
      sym_component_head,
    STATE(292), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(25), 2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    STATE(10), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(111), 11,
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
  [999] = 21,
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
    STATE(117), 1,
      sym_arg,
    STATE(272), 1,
      sym_non_empty_arg_list,
    STATE(314), 1,
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
  [1079] = 21,
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
    STATE(117), 1,
      sym_arg,
    STATE(277), 1,
      sym_non_empty_arg_list,
    STATE(314), 1,
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
  [1159] = 21,
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
      sym_RBRACKET,
    STATE(117), 1,
      sym_arg,
    STATE(294), 1,
      sym_non_empty_arg_list,
    STATE(314), 1,
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
  [1239] = 21,
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
      sym_RPAREN,
    STATE(117), 1,
      sym_arg,
    STATE(288), 1,
      sym_non_empty_arg_list,
    STATE(314), 1,
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
  [1319] = 20,
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
    STATE(291), 1,
      sym_non_empty_arg_list,
    STATE(314), 1,
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
  [1396] = 19,
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
    STATE(314), 1,
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
  [1470] = 19,
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
    STATE(132), 1,
      sym_arg,
    STATE(314), 1,
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
  [1544] = 19,
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
    STATE(314), 1,
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
  [1618] = 19,
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
    STATE(314), 1,
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
  [1692] = 19,
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
    STATE(136), 1,
      sym_arg,
    STATE(314), 1,
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
  [1766] = 19,
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
    STATE(314), 1,
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
  [1840] = 19,
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
    STATE(53), 1,
      sym_arg,
    STATE(314), 1,
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
  [1914] = 19,
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
    STATE(314), 1,
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
  [1988] = 19,
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
    STATE(95), 1,
      sym_arg,
    STATE(314), 1,
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
  [2062] = 19,
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
    STATE(133), 1,
      sym_arg,
    STATE(314), 1,
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
  [2136] = 19,
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
    STATE(44), 1,
      sym_arg,
    STATE(314), 1,
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
  [2210] = 19,
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
    STATE(136), 1,
      sym_arg,
    STATE(314), 1,
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
  [2284] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(41), 1,
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
  [2326] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(42), 1,
      aux_sym_relation_tags_repeat1,
    STATE(100), 1,
      sym_relation_tags,
    ACTIONS(130), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(128), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(126), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [2369] = 3,
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
  [2406] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(42), 1,
      aux_sym_relation_tags_repeat1,
    STATE(94), 1,
      sym_relation_tags,
    ACTIONS(138), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(128), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(136), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [2449] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(140), 1,
      sym_DECL,
    ACTIONS(144), 1,
      sym_TYPE,
    ACTIONS(146), 1,
      sym_INSTANTIATE,
    ACTIONS(150), 1,
      sym_OVERRIDE,
    ACTIONS(152), 1,
      sym_RBRACE,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_rule,
    STATE(144), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_atom,
    STATE(244), 1,
      sym_component_head,
    STATE(259), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(148), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(36), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(142), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(155), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(158), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(156), 23,
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
  [2555] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(140), 1,
      sym_DECL,
    ACTIONS(144), 1,
      sym_TYPE,
    ACTIONS(146), 1,
      sym_INSTANTIATE,
    ACTIONS(150), 1,
      sym_OVERRIDE,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(160), 1,
      sym_RBRACE,
    STATE(137), 1,
      sym_rule,
    STATE(144), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_atom,
    STATE(244), 1,
      sym_component_head,
    STATE(259), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(148), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(36), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(142), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(155), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2625] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(162), 1,
      sym_DECL,
    ACTIONS(168), 1,
      sym_TYPE,
    ACTIONS(171), 1,
      sym_COMPONENT,
    ACTIONS(174), 1,
      sym_INSTANTIATE,
    ACTIONS(180), 1,
      sym_OVERRIDE,
    ACTIONS(183), 1,
      sym_RBRACE,
    ACTIONS(185), 1,
      aux_sym_IDENT_token1,
    ACTIONS(188), 1,
      aux_sym_IDENT_token2,
    STATE(137), 1,
      sym_rule,
    STATE(144), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_atom,
    STATE(244), 1,
      sym_component_head,
    STATE(259), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(177), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(36), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(165), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(155), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2695] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(140), 1,
      sym_DECL,
    ACTIONS(144), 1,
      sym_TYPE,
    ACTIONS(146), 1,
      sym_INSTANTIATE,
    ACTIONS(150), 1,
      sym_OVERRIDE,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(191), 1,
      sym_RBRACE,
    STATE(137), 1,
      sym_rule,
    STATE(144), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_atom,
    STATE(244), 1,
      sym_component_head,
    STATE(259), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(148), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(33), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(142), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(155), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2765] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(38), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(198), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(195), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(193), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [2805] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(15), 1,
      sym_COMPONENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(140), 1,
      sym_DECL,
    ACTIONS(144), 1,
      sym_TYPE,
    ACTIONS(146), 1,
      sym_INSTANTIATE,
    ACTIONS(150), 1,
      sym_OVERRIDE,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(200), 1,
      sym_RBRACE,
    STATE(137), 1,
      sym_rule,
    STATE(144), 1,
      sym_rule_def,
    STATE(175), 1,
      sym_IDENT,
    STATE(234), 1,
      sym_atom,
    STATE(244), 1,
      sym_component_head,
    STATE(259), 1,
      sym_head,
    STATE(293), 1,
      sym_identifier,
    ACTIONS(148), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(35), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(142), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(155), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2875] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(204), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(202), 24,
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
  [2911] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(210), 1,
      sym_LPAREN,
    ACTIONS(208), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(206), 23,
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
  [2949] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(38), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(216), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(214), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(212), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [2989] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
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
  [3025] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(208), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(206), 23,
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
  [3060] = 3,
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
  [3095] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(208), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(206), 23,
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
  [3130] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 6,
      sym_DOT,
      sym_LT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(132), 21,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3165] = 3,
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
  [3200] = 3,
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
  [3235] = 3,
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
  [3270] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(232), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(230), 23,
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
  [3305] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(236), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(234), 23,
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
  [3340] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(228), 2,
      sym_LT,
      sym_GT,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(226), 11,
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
    ACTIONS(238), 11,
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
  [3381] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(246), 1,
      sym_LT,
    STATE(66), 1,
      sym_type_params,
    ACTIONS(248), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(244), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3417] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 5,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(250), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3448] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(62), 1,
      aux_sym_relation_tags_repeat1,
    STATE(152), 1,
      sym_relation_tags,
    ACTIONS(138), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(136), 11,
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
  [3485] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(62), 1,
      aux_sym_relation_tags_repeat1,
    STATE(162), 1,
      sym_relation_tags,
    ACTIONS(130), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(254), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(126), 11,
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
  [3522] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(258), 5,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(256), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3553] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 2,
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
  [3586] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 1,
      sym_LBRACE,
    ACTIONS(258), 5,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(256), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3618] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(61), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(198), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(262), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(193), 11,
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
  [3652] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(61), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(216), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(265), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(212), 11,
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
  [3686] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(269), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(267), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(273), 1,
      sym_DOT,
    ACTIONS(275), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(271), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3748] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(273), 1,
      sym_DOT,
    ACTIONS(279), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(277), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3780] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(283), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(281), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3810] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(287), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(285), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3839] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(273), 1,
      sym_DOT,
    ACTIONS(291), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(289), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3870] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 6,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
      anon_sym_stateful,
    ACTIONS(250), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3899] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(258), 6,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
      anon_sym_stateful,
    ACTIONS(256), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3928] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(273), 1,
      sym_DOT,
    ACTIONS(295), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(293), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3959] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(118), 1,
      sym_RPAREN,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(299), 2,
      sym_LT,
      sym_GT,
    ACTIONS(297), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(238), 11,
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
  [3996] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 6,
      sym_DOT,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
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
  [4025] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(303), 1,
      sym_COMMA,
    ACTIONS(305), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(301), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(309), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(307), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4085] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(313), 1,
      sym_DOT,
    ACTIONS(317), 1,
      anon_sym_stateful,
    ACTIONS(315), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(311), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4118] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(321), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(319), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4147] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(325), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(323), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      sym_COMMA,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4176] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(313), 1,
      sym_DOT,
    ACTIONS(331), 1,
      anon_sym_stateful,
    ACTIONS(329), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(327), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4209] = 3,
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
  [4238] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(335), 1,
      sym_SUBTYPE,
    ACTIONS(337), 1,
      sym_EQUALS,
    ACTIONS(339), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(333), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4271] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(343), 1,
      sym_PLAN,
    STATE(87), 1,
      sym_exec_plan,
    ACTIONS(345), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(341), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4304] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(349), 1,
      sym_LPAREN,
    ACTIONS(351), 1,
      sym_COMMA,
    ACTIONS(353), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(347), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4337] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(357), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(355), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4365] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(361), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(359), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4393] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(367), 1,
      sym_STRING,
    ACTIONS(365), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(363), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4423] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(371), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(369), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4451] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(299), 2,
      sym_LT,
      sym_GT,
    ACTIONS(297), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(238), 11,
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
  [4485] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(375), 1,
      sym_PIPE,
    ACTIONS(377), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(373), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4515] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(381), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(379), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4543] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(385), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(383), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
      sym_PLAN,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4571] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(389), 1,
      sym_PIPE,
    ACTIONS(391), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(387), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4601] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(395), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(393), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4628] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(399), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(397), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4655] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(401), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(238), 11,
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
  [4686] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(405), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(403), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4713] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(409), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(407), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4740] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(413), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(411), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4767] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(417), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(415), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4794] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(138), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(136), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4821] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(421), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(419), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4848] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(425), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(423), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4875] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(429), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(427), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4902] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(433), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(431), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4929] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(329), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(327), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4956] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(339), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(333), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4983] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(437), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(435), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5010] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(441), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(439), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5037] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(445), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(443), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5064] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(449), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(447), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5091] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(345), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(341), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5118] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(453), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(451), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5145] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(457), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(455), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5172] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(461), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(459), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5199] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(391), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(387), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5226] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(465), 4,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
      anon_sym_OUTPUT,
      anon_sym_INPUT,
    ACTIONS(463), 15,
      ts_builtin_sym_end,
      sym_DECL,
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
  [5253] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(467), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(238), 11,
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
  [5282] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(469), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(238), 11,
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
  [5311] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(258), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(256), 15,
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
  [5336] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(250), 15,
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
  [5361] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(118), 1,
      sym_RPAREN,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(471), 1,
      sym_COMMA,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(238), 11,
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
  [5391] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(279), 1,
      aux_sym_IDENT_token1,
    ACTIONS(473), 1,
      sym_DOT,
    ACTIONS(277), 14,
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
  [5417] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(275), 1,
      aux_sym_IDENT_token1,
    ACTIONS(473), 1,
      sym_DOT,
    ACTIONS(271), 14,
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
  [5443] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(475), 1,
      sym_LBRACE,
    ACTIONS(258), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(256), 13,
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
  [5469] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(325), 1,
      aux_sym_IDENT_token1,
    ACTIONS(323), 14,
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
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5492] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(305), 1,
      aux_sym_IDENT_token1,
    ACTIONS(477), 1,
      sym_COMMA,
    ACTIONS(301), 13,
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
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5517] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(479), 1,
      sym_RPAREN,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(238), 11,
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
  [5544] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(481), 1,
      sym_COMMA,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(238), 11,
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
  [5571] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(295), 1,
      aux_sym_IDENT_token1,
    ACTIONS(473), 1,
      sym_DOT,
    ACTIONS(293), 13,
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
  [5596] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(321), 1,
      aux_sym_IDENT_token1,
    ACTIONS(319), 14,
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
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5619] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      aux_sym_IDENT_token1,
    ACTIONS(483), 1,
      sym_LT,
    STATE(149), 1,
      sym_type_params,
    ACTIONS(244), 12,
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
  [5646] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(485), 1,
      sym_COMMA,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(238), 11,
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
  [5673] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(118), 1,
      sym_RPAREN,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(238), 11,
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
  [5700] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(339), 1,
      aux_sym_IDENT_token1,
    ACTIONS(487), 1,
      sym_SUBTYPE,
    ACTIONS(489), 1,
      sym_EQUALS,
    ACTIONS(333), 12,
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
  [5727] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(287), 1,
      aux_sym_IDENT_token1,
    ACTIONS(285), 14,
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
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5750] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(242), 1,
      sym_CARET,
    ACTIONS(491), 1,
      sym_COLON,
    ACTIONS(240), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(238), 11,
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
  [5777] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(495), 1,
      sym_PLAN,
    ACTIONS(497), 1,
      aux_sym_IDENT_token1,
    STATE(145), 1,
      sym_exec_plan,
    ACTIONS(493), 12,
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
  [5804] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(309), 1,
      aux_sym_IDENT_token1,
    ACTIONS(307), 14,
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
      sym_PLAN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5827] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(291), 1,
      aux_sym_IDENT_token1,
    ACTIONS(473), 1,
      sym_DOT,
    ACTIONS(289), 13,
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
  [5852] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(353), 1,
      aux_sym_IDENT_token1,
    ACTIONS(499), 1,
      sym_LPAREN,
    ACTIONS(501), 1,
      sym_COMMA,
    ACTIONS(347), 12,
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
  [5879] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(357), 1,
      aux_sym_IDENT_token1,
    ACTIONS(355), 13,
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
  [5901] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(361), 1,
      aux_sym_IDENT_token1,
    ACTIONS(359), 13,
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
  [5923] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(381), 1,
      aux_sym_IDENT_token1,
    ACTIONS(379), 13,
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
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5945] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(385), 1,
      aux_sym_IDENT_token1,
    ACTIONS(383), 13,
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
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5967] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(371), 1,
      aux_sym_IDENT_token1,
    ACTIONS(369), 13,
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
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [5989] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(377), 1,
      aux_sym_IDENT_token1,
    ACTIONS(503), 1,
      sym_PIPE,
    ACTIONS(373), 12,
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
  [6013] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(391), 1,
      aux_sym_IDENT_token1,
    ACTIONS(505), 1,
      sym_PIPE,
    ACTIONS(387), 12,
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
  [6037] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(509), 1,
      aux_sym_IDENT_token1,
    ACTIONS(507), 12,
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
  [6058] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(283), 1,
      aux_sym_IDENT_token1,
    ACTIONS(281), 12,
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
  [6079] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(429), 1,
      aux_sym_IDENT_token1,
    ACTIONS(427), 12,
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
  [6100] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(391), 1,
      aux_sym_IDENT_token1,
    ACTIONS(387), 12,
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
  [6121] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(399), 1,
      aux_sym_IDENT_token1,
    ACTIONS(397), 12,
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
  [6142] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(465), 1,
      aux_sym_IDENT_token1,
    ACTIONS(463), 12,
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
  [6163] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(433), 1,
      aux_sym_IDENT_token1,
    ACTIONS(431), 12,
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
  [6184] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(497), 1,
      aux_sym_IDENT_token1,
    ACTIONS(493), 12,
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
  [6205] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(461), 1,
      aux_sym_IDENT_token1,
    ACTIONS(459), 12,
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
  [6226] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(437), 1,
      aux_sym_IDENT_token1,
    ACTIONS(435), 12,
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
  [6247] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(269), 1,
      aux_sym_IDENT_token1,
    ACTIONS(267), 12,
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
  [6268] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(449), 1,
      aux_sym_IDENT_token1,
    ACTIONS(447), 12,
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
  [6289] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(339), 1,
      aux_sym_IDENT_token1,
    ACTIONS(333), 12,
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
  [6310] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(409), 1,
      aux_sym_IDENT_token1,
    ACTIONS(407), 12,
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
  [6331] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(138), 1,
      aux_sym_IDENT_token1,
    ACTIONS(136), 12,
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
  [6352] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(441), 1,
      aux_sym_IDENT_token1,
    ACTIONS(439), 12,
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
  [6373] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(425), 1,
      aux_sym_IDENT_token1,
    ACTIONS(423), 12,
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
  [6394] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(405), 1,
      aux_sym_IDENT_token1,
    ACTIONS(403), 12,
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
  [6415] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(395), 1,
      aux_sym_IDENT_token1,
    ACTIONS(393), 12,
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
  [6436] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(511), 1,
      sym_LBRACKET,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(60), 1,
      sym_IDENT,
    STATE(71), 1,
      sym_identifier,
    STATE(89), 1,
      sym_sum_branch,
    STATE(92), 1,
      sym_union_type_list,
    STATE(115), 1,
      sym_non_empty_sum_branch_list,
  [6464] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(517), 1,
      sym_LBRACKET,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(124), 1,
      sym_IDENT,
    STATE(129), 1,
      sym_identifier,
    STATE(146), 1,
      sym_sum_branch,
    STATE(147), 1,
      sym_union_type_list,
    STATE(151), 1,
      sym_non_empty_sum_branch_list,
  [6492] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(525), 1,
      sym_STRING,
    STATE(282), 1,
      sym_IDENT,
    STATE(287), 1,
      sym_kvp_value,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(523), 2,
      sym_TRUE,
      sym_FALSE,
  [6513] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(525), 1,
      sym_STRING,
    STATE(263), 1,
      sym_kvp_value,
    STATE(282), 1,
      sym_IDENT,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(523), 2,
      sym_TRUE,
      sym_FALSE,
  [6534] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(527), 1,
      sym_LBRACE,
    STATE(48), 1,
      sym_atom,
    STATE(175), 1,
      sym_IDENT,
    STATE(293), 1,
      sym_identifier,
  [6556] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(250), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6568] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(58), 1,
      sym_IDENT,
    STATE(64), 1,
      sym_identifier,
    STATE(83), 1,
      sym_io_relation_list,
    STATE(102), 1,
      sym_io_directive_list,
  [6590] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(529), 1,
      sym_RPAREN,
    STATE(273), 1,
      sym_exec_order_list,
    STATE(281), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 6,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
      sym_RBRACE,
  [6622] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(531), 1,
      sym_LBRACE,
    STATE(52), 1,
      sym_atom,
    STATE(175), 1,
      sym_IDENT,
    STATE(293), 1,
      sym_identifier,
  [6644] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(119), 1,
      sym_IDENT,
    STATE(123), 1,
      sym_identifier,
    STATE(140), 1,
      sym_io_relation_list,
    STATE(164), 1,
      sym_io_directive_list,
  [6666] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(533), 1,
      sym_RPAREN,
    STATE(269), 1,
      sym_exec_order_list,
    STATE(281), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6686] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(535), 1,
      sym_RPAREN,
    STATE(280), 1,
      sym_exec_order_list,
    STATE(281), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6706] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(537), 1,
      sym_RPAREN,
    STATE(281), 1,
      sym_NUMBER,
    STATE(286), 1,
      sym_exec_order_list,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6726] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(539), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6737] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(541), 1,
      sym_RBRACE,
    STATE(266), 1,
      sym_non_empty_attributes,
    STATE(318), 1,
      sym_IDENT,
  [6756] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(279), 1,
      sym_atom,
    STATE(293), 1,
      sym_identifier,
  [6775] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(74), 1,
      sym_exec_plan_list,
    STATE(297), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(543), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6803] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(547), 1,
      sym_COMMA,
    ACTIONS(545), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6816] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(549), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6827] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(89), 1,
      sym_sum_branch,
    STATE(96), 1,
      sym_non_empty_sum_branch_list,
    STATE(315), 1,
      sym_IDENT,
  [6846] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(146), 1,
      sym_sum_branch,
    STATE(165), 1,
      sym_non_empty_sum_branch_list,
    STATE(321), 1,
      sym_IDENT,
  [6865] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(551), 1,
      sym_RPAREN,
    STATE(278), 1,
      sym_non_empty_key_value_pairs,
    STATE(320), 1,
      sym_IDENT,
  [6884] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(553), 1,
      sym_RBRACKET,
    STATE(283), 1,
      sym_non_empty_record_type_list,
    STATE(326), 1,
      sym_IDENT,
  [6903] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(555), 1,
      sym_RBRACKET,
    STATE(268), 1,
      sym_non_empty_record_type_list,
    STATE(326), 1,
      sym_IDENT,
  [6922] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(115), 1,
      sym_predefined_type,
    ACTIONS(557), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [6935] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(559), 1,
      sym_RPAREN,
    STATE(275), 1,
      sym_non_empty_attributes,
    STATE(318), 1,
      sym_IDENT,
  [6954] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(561), 1,
      sym_RPAREN,
    STATE(295), 1,
      sym_non_empty_attributes,
    STATE(318), 1,
      sym_IDENT,
  [6973] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(563), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [6984] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(565), 1,
      sym_RPAREN,
    STATE(271), 1,
      sym_non_empty_key_value_pairs,
    STATE(320), 1,
      sym_IDENT,
  [7003] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(126), 1,
      sym_exec_plan_list,
    STATE(335), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7020] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(151), 1,
      sym_predefined_type,
    ACTIONS(567), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [7033] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(569), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7044] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(571), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7055] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(547), 1,
      sym_COMMA,
    ACTIONS(573), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7068] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(575), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [7079] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(577), 1,
      sym_RPAREN,
    STATE(262), 1,
      sym_non_empty_attributes,
    STATE(318), 1,
      sym_IDENT,
  [7098] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    ACTIONS(579), 1,
      sym_RBRACE,
    STATE(267), 1,
      sym_non_empty_attributes,
    STATE(318), 1,
      sym_IDENT,
  [7117] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(58), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_identifier,
  [7133] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(328), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7147] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(131), 1,
      sym_IDENT,
    STATE(150), 1,
      sym_comp_type,
  [7163] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(306), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7177] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(290), 1,
      sym_identifier,
  [7193] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(336), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7207] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(119), 1,
      sym_IDENT,
    STATE(122), 1,
      sym_identifier,
  [7223] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(274), 1,
      sym_identifier,
  [7239] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(54), 1,
      sym_IDENT,
    STATE(255), 1,
      sym_comp_type,
  [7255] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(58), 1,
      sym_IDENT,
    STATE(65), 1,
      sym_identifier,
  [7271] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(264), 1,
      sym_IDENT,
    STATE(265), 1,
      sym_type_param_list,
  [7287] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(54), 1,
      sym_IDENT,
    STATE(103), 1,
      sym_comp_type,
  [7303] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(224), 1,
      sym_identifier,
  [7319] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(258), 1,
      sym_identifier,
  [7335] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(119), 1,
      sym_IDENT,
    STATE(139), 1,
      sym_identifier,
  [7351] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(54), 1,
      sym_IDENT,
    STATE(233), 1,
      sym_comp_type,
  [7367] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(284), 1,
      sym_relation_list,
    STATE(285), 1,
      sym_IDENT,
  [7383] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(285), 1,
      sym_IDENT,
    STATE(289), 1,
      sym_relation_list,
  [7399] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(581), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7411] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(264), 1,
      sym_IDENT,
    STATE(270), 1,
      sym_type_param_list,
  [7427] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(231), 1,
      sym_identifier,
  [7443] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(585), 1,
      aux_sym_IDENT_token1,
    ACTIONS(587), 1,
      aux_sym_IDENT_token2,
    STATE(70), 1,
      sym_IDENT,
    STATE(76), 1,
      sym_identifier,
  [7459] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(585), 1,
      aux_sym_IDENT_token1,
    ACTIONS(587), 1,
      aux_sym_IDENT_token2,
    STATE(70), 1,
      sym_IDENT,
    STATE(79), 1,
      sym_identifier,
  [7475] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(175), 1,
      sym_IDENT,
    STATE(245), 1,
      sym_identifier,
  [7491] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(61), 1,
      aux_sym_NUMBER_token1,
    STATE(260), 1,
      sym_NUMBER,
    ACTIONS(63), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [7505] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(589), 3,
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
  [7517] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(81), 1,
      sym_IDENT,
  [7530] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(591), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7539] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(595), 1,
      sym_DOT,
    ACTIONS(593), 2,
      sym_COMMA,
      sym_IF,
  [7550] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(160), 1,
      sym_IDENT,
  [7563] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(301), 1,
      sym_IDENT,
  [7576] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(134), 1,
      sym_IDENT,
  [7589] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(597), 1,
      sym_DOT,
    ACTIONS(593), 2,
      sym_COMMA,
      sym_IF,
  [7600] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(601), 1,
      sym_LBRACE,
    ACTIONS(599), 2,
      sym_COMMA,
      sym_COLON,
  [7611] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(296), 1,
      sym_IDENT,
  [7624] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(585), 1,
      aux_sym_IDENT_token1,
    ACTIONS(587), 1,
      aux_sym_IDENT_token2,
    STATE(69), 1,
      sym_IDENT,
  [7637] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(120), 1,
      sym_IDENT,
  [7650] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(172), 1,
      sym_IDENT,
  [7663] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(603), 1,
      sym_LBRACE,
    ACTIONS(599), 2,
      sym_COMMA,
      sym_COLON,
  [7674] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(605), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7685] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(334), 1,
      sym_IDENT,
  [7698] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(261), 1,
      sym_IDENT,
  [7711] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(329), 1,
      sym_IDENT,
  [7724] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(333), 1,
      sym_IDENT,
  [7737] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(327), 1,
      sym_IDENT,
  [7750] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(323), 1,
      sym_IDENT,
  [7763] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(106), 1,
      sym_IDENT,
  [7776] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(513), 1,
      aux_sym_IDENT_token1,
    ACTIONS(515), 1,
      aux_sym_IDENT_token2,
    STATE(55), 1,
      sym_IDENT,
  [7789] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(607), 1,
      sym_SEMICOLON,
    ACTIONS(609), 2,
      sym_DOT,
      sym_RBRACE,
  [7800] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(611), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [7809] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(519), 1,
      aux_sym_IDENT_token1,
    ACTIONS(521), 1,
      aux_sym_IDENT_token2,
    STATE(148), 1,
      sym_IDENT,
  [7822] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(154), 1,
      aux_sym_IDENT_token2,
    STATE(298), 1,
      sym_IDENT,
  [7835] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(613), 2,
      sym_RBRACKET,
      sym_COMMA,
  [7846] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(615), 1,
      sym_COMMA,
    ACTIONS(617), 1,
      sym_IF,
  [7856] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(619), 2,
      sym_RPAREN,
      sym_COMMA,
  [7864] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(621), 2,
      sym_LPAREN,
      sym_COMMA,
  [7872] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(623), 1,
      sym_RPAREN,
    ACTIONS(625), 1,
      sym_COMMA,
  [7882] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(627), 2,
      sym_RPAREN,
      sym_COMMA,
  [7890] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(629), 2,
      sym_COMMA,
      sym_GT,
  [7898] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(631), 1,
      sym_COMMA,
    ACTIONS(633), 1,
      sym_GT,
  [7908] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(625), 1,
      sym_COMMA,
    ACTIONS(635), 1,
      sym_RBRACE,
  [7918] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(625), 1,
      sym_COMMA,
    ACTIONS(637), 1,
      sym_RBRACE,
  [7928] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(639), 1,
      sym_RBRACKET,
    ACTIONS(641), 1,
      sym_COMMA,
  [7938] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(643), 1,
      sym_RPAREN,
    ACTIONS(645), 1,
      sym_COMMA,
  [7948] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(631), 1,
      sym_COMMA,
    ACTIONS(647), 1,
      sym_GT,
  [7958] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(649), 1,
      sym_RPAREN,
    ACTIONS(651), 1,
      sym_COMMA,
  [7968] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(653), 1,
      sym_RPAREN,
    ACTIONS(655), 1,
      sym_COMMA,
  [7978] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(645), 1,
      sym_COMMA,
    ACTIONS(657), 1,
      sym_RPAREN,
  [7988] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(659), 1,
      sym_RPAREN,
  [7998] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(625), 1,
      sym_COMMA,
    ACTIONS(661), 1,
      sym_RPAREN,
  [8008] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(607), 1,
      sym_SEMICOLON,
    ACTIONS(663), 1,
      sym_RPAREN,
  [8018] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(655), 1,
      sym_COMMA,
    ACTIONS(665), 1,
      sym_RPAREN,
  [8028] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(651), 1,
      sym_COMMA,
    ACTIONS(667), 1,
      sym_RPAREN,
  [8038] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(669), 2,
      sym_COMMA,
      sym_IF,
  [8046] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(645), 1,
      sym_COMMA,
    ACTIONS(671), 1,
      sym_RPAREN,
  [8056] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(673), 2,
      sym_RPAREN,
      sym_COMMA,
  [8064] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(675), 2,
      sym_RPAREN,
      sym_COMMA,
  [8072] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(641), 1,
      sym_COMMA,
    ACTIONS(677), 1,
      sym_RBRACKET,
  [8082] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(679), 1,
      sym_LPAREN,
    ACTIONS(681), 1,
      sym_COMMA,
  [8092] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(683), 2,
      sym_LPAREN,
      sym_COMMA,
  [8100] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(645), 1,
      sym_COMMA,
    ACTIONS(685), 1,
      sym_RPAREN,
  [8110] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(687), 2,
      sym_RPAREN,
      sym_COMMA,
  [8118] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(114), 1,
      sym_RPAREN,
    ACTIONS(655), 1,
      sym_COMMA,
  [8128] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(681), 1,
      sym_COMMA,
    ACTIONS(689), 1,
      sym_LPAREN,
  [8138] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(691), 1,
      sym_RPAREN,
  [8148] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(655), 1,
      sym_COMMA,
    ACTIONS(691), 1,
      sym_RPAREN,
  [8158] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(615), 1,
      sym_COMMA,
    ACTIONS(693), 1,
      sym_IF,
  [8168] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(583), 1,
      sym_DOT,
    ACTIONS(695), 1,
      sym_LPAREN,
  [8178] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(118), 1,
      sym_RBRACKET,
    ACTIONS(655), 1,
      sym_COMMA,
  [8188] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(625), 1,
      sym_COMMA,
    ACTIONS(697), 1,
      sym_RPAREN,
  [8198] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(699), 2,
      sym_COMMA,
      sym_GT,
  [8206] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(701), 1,
      sym_COLON,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(703), 1,
      sym_EQUALS,
  [8220] = 2,
    ACTIONS(705), 1,
      sym_COMMENT,
    ACTIONS(707), 1,
      sym_filename,
  [8227] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
  [8234] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(711), 1,
      sym_LPAREN,
  [8241] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(713), 1,
      sym_COLON,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
  [8255] = 2,
    ACTIONS(705), 1,
      sym_COMMENT,
    ACTIONS(717), 1,
      aux_sym_define_token1,
  [8262] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(719), 1,
      sym_LPAREN,
  [8269] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
  [8283] = 2,
    ACTIONS(705), 1,
      sym_COMMENT,
    ACTIONS(725), 1,
      sym_filename,
  [8290] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(727), 1,
      sym_DOT,
  [8297] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(729), 1,
      sym_LPAREN,
  [8304] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(731), 1,
      sym_LPAREN,
  [8311] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(665), 1,
      sym_RBRACE,
  [8318] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(733), 1,
      sym_STRING,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(735), 1,
      sym_LPAREN,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 1,
      sym_LBRACE,
  [8339] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(737), 1,
      sym_LPAREN,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(739), 1,
      sym_DOT,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(741), 1,
      sym_COLON,
  [8360] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(743), 1,
      sym_COLON,
  [8367] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(745), 1,
      sym_EQUALS,
  [8374] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(475), 1,
      sym_LBRACE,
  [8381] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(210), 1,
      sym_LPAREN,
  [8395] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(749), 1,
      sym_LPAREN,
  [8402] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(751), 1,
      sym_COLON,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(753), 1,
      sym_COLON,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(755), 1,
      sym_EQUALS,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(757), 1,
      sym_COLON,
  [8430] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(759), 1,
      sym_COLON,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(761), 1,
      sym_LPAREN,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(763), 1,
      sym_LPAREN,
  [8451] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(691), 1,
      sym_RBRACE,
  [8458] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(765), 1,
      sym_COLON,
  [8465] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(767), 1,
      sym_EQUALS,
  [8472] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(769), 1,
      sym_COLON,
  [8479] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(771), 1,
      sym_COLON,
  [8486] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(773), 1,
      sym_LPAREN,
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
  [SMALL_STATE(11)] = 910,
  [SMALL_STATE(12)] = 999,
  [SMALL_STATE(13)] = 1079,
  [SMALL_STATE(14)] = 1159,
  [SMALL_STATE(15)] = 1239,
  [SMALL_STATE(16)] = 1319,
  [SMALL_STATE(17)] = 1396,
  [SMALL_STATE(18)] = 1470,
  [SMALL_STATE(19)] = 1544,
  [SMALL_STATE(20)] = 1618,
  [SMALL_STATE(21)] = 1692,
  [SMALL_STATE(22)] = 1766,
  [SMALL_STATE(23)] = 1840,
  [SMALL_STATE(24)] = 1914,
  [SMALL_STATE(25)] = 1988,
  [SMALL_STATE(26)] = 2062,
  [SMALL_STATE(27)] = 2136,
  [SMALL_STATE(28)] = 2210,
  [SMALL_STATE(29)] = 2284,
  [SMALL_STATE(30)] = 2326,
  [SMALL_STATE(31)] = 2369,
  [SMALL_STATE(32)] = 2406,
  [SMALL_STATE(33)] = 2449,
  [SMALL_STATE(34)] = 2519,
  [SMALL_STATE(35)] = 2555,
  [SMALL_STATE(36)] = 2625,
  [SMALL_STATE(37)] = 2695,
  [SMALL_STATE(38)] = 2765,
  [SMALL_STATE(39)] = 2805,
  [SMALL_STATE(40)] = 2875,
  [SMALL_STATE(41)] = 2911,
  [SMALL_STATE(42)] = 2949,
  [SMALL_STATE(43)] = 2989,
  [SMALL_STATE(44)] = 3025,
  [SMALL_STATE(45)] = 3060,
  [SMALL_STATE(46)] = 3095,
  [SMALL_STATE(47)] = 3130,
  [SMALL_STATE(48)] = 3165,
  [SMALL_STATE(49)] = 3200,
  [SMALL_STATE(50)] = 3235,
  [SMALL_STATE(51)] = 3270,
  [SMALL_STATE(52)] = 3305,
  [SMALL_STATE(53)] = 3340,
  [SMALL_STATE(54)] = 3381,
  [SMALL_STATE(55)] = 3417,
  [SMALL_STATE(56)] = 3448,
  [SMALL_STATE(57)] = 3485,
  [SMALL_STATE(58)] = 3522,
  [SMALL_STATE(59)] = 3553,
  [SMALL_STATE(60)] = 3586,
  [SMALL_STATE(61)] = 3618,
  [SMALL_STATE(62)] = 3652,
  [SMALL_STATE(63)] = 3686,
  [SMALL_STATE(64)] = 3716,
  [SMALL_STATE(65)] = 3748,
  [SMALL_STATE(66)] = 3780,
  [SMALL_STATE(67)] = 3810,
  [SMALL_STATE(68)] = 3839,
  [SMALL_STATE(69)] = 3870,
  [SMALL_STATE(70)] = 3899,
  [SMALL_STATE(71)] = 3928,
  [SMALL_STATE(72)] = 3959,
  [SMALL_STATE(73)] = 3996,
  [SMALL_STATE(74)] = 4025,
  [SMALL_STATE(75)] = 4056,
  [SMALL_STATE(76)] = 4085,
  [SMALL_STATE(77)] = 4118,
  [SMALL_STATE(78)] = 4147,
  [SMALL_STATE(79)] = 4176,
  [SMALL_STATE(80)] = 4209,
  [SMALL_STATE(81)] = 4238,
  [SMALL_STATE(82)] = 4271,
  [SMALL_STATE(83)] = 4304,
  [SMALL_STATE(84)] = 4337,
  [SMALL_STATE(85)] = 4365,
  [SMALL_STATE(86)] = 4393,
  [SMALL_STATE(87)] = 4423,
  [SMALL_STATE(88)] = 4451,
  [SMALL_STATE(89)] = 4485,
  [SMALL_STATE(90)] = 4515,
  [SMALL_STATE(91)] = 4543,
  [SMALL_STATE(92)] = 4571,
  [SMALL_STATE(93)] = 4601,
  [SMALL_STATE(94)] = 4628,
  [SMALL_STATE(95)] = 4655,
  [SMALL_STATE(96)] = 4686,
  [SMALL_STATE(97)] = 4713,
  [SMALL_STATE(98)] = 4740,
  [SMALL_STATE(99)] = 4767,
  [SMALL_STATE(100)] = 4794,
  [SMALL_STATE(101)] = 4821,
  [SMALL_STATE(102)] = 4848,
  [SMALL_STATE(103)] = 4875,
  [SMALL_STATE(104)] = 4902,
  [SMALL_STATE(105)] = 4929,
  [SMALL_STATE(106)] = 4956,
  [SMALL_STATE(107)] = 4983,
  [SMALL_STATE(108)] = 5010,
  [SMALL_STATE(109)] = 5037,
  [SMALL_STATE(110)] = 5064,
  [SMALL_STATE(111)] = 5091,
  [SMALL_STATE(112)] = 5118,
  [SMALL_STATE(113)] = 5145,
  [SMALL_STATE(114)] = 5172,
  [SMALL_STATE(115)] = 5199,
  [SMALL_STATE(116)] = 5226,
  [SMALL_STATE(117)] = 5253,
  [SMALL_STATE(118)] = 5282,
  [SMALL_STATE(119)] = 5311,
  [SMALL_STATE(120)] = 5336,
  [SMALL_STATE(121)] = 5361,
  [SMALL_STATE(122)] = 5391,
  [SMALL_STATE(123)] = 5417,
  [SMALL_STATE(124)] = 5443,
  [SMALL_STATE(125)] = 5469,
  [SMALL_STATE(126)] = 5492,
  [SMALL_STATE(127)] = 5517,
  [SMALL_STATE(128)] = 5544,
  [SMALL_STATE(129)] = 5571,
  [SMALL_STATE(130)] = 5596,
  [SMALL_STATE(131)] = 5619,
  [SMALL_STATE(132)] = 5646,
  [SMALL_STATE(133)] = 5673,
  [SMALL_STATE(134)] = 5700,
  [SMALL_STATE(135)] = 5727,
  [SMALL_STATE(136)] = 5750,
  [SMALL_STATE(137)] = 5777,
  [SMALL_STATE(138)] = 5804,
  [SMALL_STATE(139)] = 5827,
  [SMALL_STATE(140)] = 5852,
  [SMALL_STATE(141)] = 5879,
  [SMALL_STATE(142)] = 5901,
  [SMALL_STATE(143)] = 5923,
  [SMALL_STATE(144)] = 5945,
  [SMALL_STATE(145)] = 5967,
  [SMALL_STATE(146)] = 5989,
  [SMALL_STATE(147)] = 6013,
  [SMALL_STATE(148)] = 6037,
  [SMALL_STATE(149)] = 6058,
  [SMALL_STATE(150)] = 6079,
  [SMALL_STATE(151)] = 6100,
  [SMALL_STATE(152)] = 6121,
  [SMALL_STATE(153)] = 6142,
  [SMALL_STATE(154)] = 6163,
  [SMALL_STATE(155)] = 6184,
  [SMALL_STATE(156)] = 6205,
  [SMALL_STATE(157)] = 6226,
  [SMALL_STATE(158)] = 6247,
  [SMALL_STATE(159)] = 6268,
  [SMALL_STATE(160)] = 6289,
  [SMALL_STATE(161)] = 6310,
  [SMALL_STATE(162)] = 6331,
  [SMALL_STATE(163)] = 6352,
  [SMALL_STATE(164)] = 6373,
  [SMALL_STATE(165)] = 6394,
  [SMALL_STATE(166)] = 6415,
  [SMALL_STATE(167)] = 6436,
  [SMALL_STATE(168)] = 6464,
  [SMALL_STATE(169)] = 6492,
  [SMALL_STATE(170)] = 6513,
  [SMALL_STATE(171)] = 6534,
  [SMALL_STATE(172)] = 6556,
  [SMALL_STATE(173)] = 6568,
  [SMALL_STATE(174)] = 6590,
  [SMALL_STATE(175)] = 6610,
  [SMALL_STATE(176)] = 6622,
  [SMALL_STATE(177)] = 6644,
  [SMALL_STATE(178)] = 6666,
  [SMALL_STATE(179)] = 6686,
  [SMALL_STATE(180)] = 6706,
  [SMALL_STATE(181)] = 6726,
  [SMALL_STATE(182)] = 6737,
  [SMALL_STATE(183)] = 6756,
  [SMALL_STATE(184)] = 6775,
  [SMALL_STATE(185)] = 6792,
  [SMALL_STATE(186)] = 6803,
  [SMALL_STATE(187)] = 6816,
  [SMALL_STATE(188)] = 6827,
  [SMALL_STATE(189)] = 6846,
  [SMALL_STATE(190)] = 6865,
  [SMALL_STATE(191)] = 6884,
  [SMALL_STATE(192)] = 6903,
  [SMALL_STATE(193)] = 6922,
  [SMALL_STATE(194)] = 6935,
  [SMALL_STATE(195)] = 6954,
  [SMALL_STATE(196)] = 6973,
  [SMALL_STATE(197)] = 6984,
  [SMALL_STATE(198)] = 7003,
  [SMALL_STATE(199)] = 7020,
  [SMALL_STATE(200)] = 7033,
  [SMALL_STATE(201)] = 7044,
  [SMALL_STATE(202)] = 7055,
  [SMALL_STATE(203)] = 7068,
  [SMALL_STATE(204)] = 7079,
  [SMALL_STATE(205)] = 7098,
  [SMALL_STATE(206)] = 7117,
  [SMALL_STATE(207)] = 7133,
  [SMALL_STATE(208)] = 7147,
  [SMALL_STATE(209)] = 7163,
  [SMALL_STATE(210)] = 7177,
  [SMALL_STATE(211)] = 7193,
  [SMALL_STATE(212)] = 7207,
  [SMALL_STATE(213)] = 7223,
  [SMALL_STATE(214)] = 7239,
  [SMALL_STATE(215)] = 7255,
  [SMALL_STATE(216)] = 7271,
  [SMALL_STATE(217)] = 7287,
  [SMALL_STATE(218)] = 7303,
  [SMALL_STATE(219)] = 7319,
  [SMALL_STATE(220)] = 7335,
  [SMALL_STATE(221)] = 7351,
  [SMALL_STATE(222)] = 7367,
  [SMALL_STATE(223)] = 7383,
  [SMALL_STATE(224)] = 7399,
  [SMALL_STATE(225)] = 7411,
  [SMALL_STATE(226)] = 7427,
  [SMALL_STATE(227)] = 7443,
  [SMALL_STATE(228)] = 7459,
  [SMALL_STATE(229)] = 7475,
  [SMALL_STATE(230)] = 7491,
  [SMALL_STATE(231)] = 7505,
  [SMALL_STATE(232)] = 7517,
  [SMALL_STATE(233)] = 7530,
  [SMALL_STATE(234)] = 7539,
  [SMALL_STATE(235)] = 7550,
  [SMALL_STATE(236)] = 7563,
  [SMALL_STATE(237)] = 7576,
  [SMALL_STATE(238)] = 7589,
  [SMALL_STATE(239)] = 7600,
  [SMALL_STATE(240)] = 7611,
  [SMALL_STATE(241)] = 7624,
  [SMALL_STATE(242)] = 7637,
  [SMALL_STATE(243)] = 7650,
  [SMALL_STATE(244)] = 7663,
  [SMALL_STATE(245)] = 7674,
  [SMALL_STATE(246)] = 7685,
  [SMALL_STATE(247)] = 7698,
  [SMALL_STATE(248)] = 7711,
  [SMALL_STATE(249)] = 7724,
  [SMALL_STATE(250)] = 7737,
  [SMALL_STATE(251)] = 7750,
  [SMALL_STATE(252)] = 7763,
  [SMALL_STATE(253)] = 7776,
  [SMALL_STATE(254)] = 7789,
  [SMALL_STATE(255)] = 7800,
  [SMALL_STATE(256)] = 7809,
  [SMALL_STATE(257)] = 7822,
  [SMALL_STATE(258)] = 7835,
  [SMALL_STATE(259)] = 7846,
  [SMALL_STATE(260)] = 7856,
  [SMALL_STATE(261)] = 7864,
  [SMALL_STATE(262)] = 7872,
  [SMALL_STATE(263)] = 7882,
  [SMALL_STATE(264)] = 7890,
  [SMALL_STATE(265)] = 7898,
  [SMALL_STATE(266)] = 7908,
  [SMALL_STATE(267)] = 7918,
  [SMALL_STATE(268)] = 7928,
  [SMALL_STATE(269)] = 7938,
  [SMALL_STATE(270)] = 7948,
  [SMALL_STATE(271)] = 7958,
  [SMALL_STATE(272)] = 7968,
  [SMALL_STATE(273)] = 7978,
  [SMALL_STATE(274)] = 7988,
  [SMALL_STATE(275)] = 7998,
  [SMALL_STATE(276)] = 8008,
  [SMALL_STATE(277)] = 8018,
  [SMALL_STATE(278)] = 8028,
  [SMALL_STATE(279)] = 8038,
  [SMALL_STATE(280)] = 8046,
  [SMALL_STATE(281)] = 8056,
  [SMALL_STATE(282)] = 8064,
  [SMALL_STATE(283)] = 8072,
  [SMALL_STATE(284)] = 8082,
  [SMALL_STATE(285)] = 8092,
  [SMALL_STATE(286)] = 8100,
  [SMALL_STATE(287)] = 8110,
  [SMALL_STATE(288)] = 8118,
  [SMALL_STATE(289)] = 8128,
  [SMALL_STATE(290)] = 8138,
  [SMALL_STATE(291)] = 8148,
  [SMALL_STATE(292)] = 8158,
  [SMALL_STATE(293)] = 8168,
  [SMALL_STATE(294)] = 8178,
  [SMALL_STATE(295)] = 8188,
  [SMALL_STATE(296)] = 8198,
  [SMALL_STATE(297)] = 8206,
  [SMALL_STATE(298)] = 8213,
  [SMALL_STATE(299)] = 8220,
  [SMALL_STATE(300)] = 8227,
  [SMALL_STATE(301)] = 8234,
  [SMALL_STATE(302)] = 8241,
  [SMALL_STATE(303)] = 8248,
  [SMALL_STATE(304)] = 8255,
  [SMALL_STATE(305)] = 8262,
  [SMALL_STATE(306)] = 8269,
  [SMALL_STATE(307)] = 8276,
  [SMALL_STATE(308)] = 8283,
  [SMALL_STATE(309)] = 8290,
  [SMALL_STATE(310)] = 8297,
  [SMALL_STATE(311)] = 8304,
  [SMALL_STATE(312)] = 8311,
  [SMALL_STATE(313)] = 8318,
  [SMALL_STATE(314)] = 8325,
  [SMALL_STATE(315)] = 8332,
  [SMALL_STATE(316)] = 8339,
  [SMALL_STATE(317)] = 8346,
  [SMALL_STATE(318)] = 8353,
  [SMALL_STATE(319)] = 8360,
  [SMALL_STATE(320)] = 8367,
  [SMALL_STATE(321)] = 8374,
  [SMALL_STATE(322)] = 8381,
  [SMALL_STATE(323)] = 8388,
  [SMALL_STATE(324)] = 8395,
  [SMALL_STATE(325)] = 8402,
  [SMALL_STATE(326)] = 8409,
  [SMALL_STATE(327)] = 8416,
  [SMALL_STATE(328)] = 8423,
  [SMALL_STATE(329)] = 8430,
  [SMALL_STATE(330)] = 8437,
  [SMALL_STATE(331)] = 8444,
  [SMALL_STATE(332)] = 8451,
  [SMALL_STATE(333)] = 8458,
  [SMALL_STATE(334)] = 8465,
  [SMALL_STATE(335)] = 8472,
  [SMALL_STATE(336)] = 8479,
  [SMALL_STATE(337)] = 8486,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(222),
  [9] = {.count = 1, .reusable = true}, SHIFT(236),
  [11] = {.count = 1, .reusable = true}, SHIFT(173),
  [13] = {.count = 1, .reusable = true}, SHIFT(232),
  [15] = {.count = 1, .reusable = true}, SHIFT(221),
  [17] = {.count = 1, .reusable = true}, SHIFT(257),
  [19] = {.count = 1, .reusable = true}, SHIFT(252),
  [21] = {.count = 1, .reusable = true}, SHIFT(313),
  [23] = {.count = 1, .reusable = false}, SHIFT(31),
  [25] = {.count = 1, .reusable = false}, SHIFT(310),
  [27] = {.count = 1, .reusable = true}, SHIFT(307),
  [29] = {.count = 1, .reusable = true}, SHIFT(209),
  [31] = {.count = 1, .reusable = true}, SHIFT(304),
  [33] = {.count = 1, .reusable = false}, SHIFT(27),
  [35] = {.count = 1, .reusable = false}, SHIFT(316),
  [37] = {.count = 1, .reusable = false}, SHIFT(28),
  [39] = {.count = 1, .reusable = false}, SHIFT(311),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(305),
  [45] = {.count = 1, .reusable = false}, SHIFT(49),
  [47] = {.count = 1, .reusable = false}, SHIFT(302),
  [49] = {.count = 1, .reusable = false}, SHIFT(203),
  [51] = {.count = 1, .reusable = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(6),
  [57] = {.count = 1, .reusable = true}, SHIFT(9),
  [59] = {.count = 1, .reusable = true}, SHIFT(251),
  [61] = {.count = 1, .reusable = false}, SHIFT(40),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(49),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(26),
  [112] = {.count = 1, .reusable = true}, SHIFT(34),
  [114] = {.count = 1, .reusable = true}, SHIFT(52),
  [116] = {.count = 1, .reusable = true}, SHIFT(46),
  [118] = {.count = 1, .reusable = true}, SHIFT(48),
  [120] = {.count = 1, .reusable = true}, SHIFT(19),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [128] = {.count = 1, .reusable = false}, SHIFT(42),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [140] = {.count = 1, .reusable = true}, SHIFT(223),
  [142] = {.count = 1, .reusable = true}, SHIFT(177),
  [144] = {.count = 1, .reusable = true}, SHIFT(237),
  [146] = {.count = 1, .reusable = true}, SHIFT(250),
  [148] = {.count = 1, .reusable = true}, SHIFT(235),
  [150] = {.count = 1, .reusable = true}, SHIFT(256),
  [152] = {.count = 1, .reusable = true}, SHIFT(97),
  [154] = {.count = 1, .reusable = true}, SHIFT(31),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [160] = {.count = 1, .reusable = true}, SHIFT(161),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(223),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(177),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(237),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(221),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(250),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(235),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(256),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(31),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(31),
  [191] = {.count = 1, .reusable = true}, SHIFT(107),
  [193] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(38),
  [198] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [200] = {.count = 1, .reusable = true}, SHIFT(157),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [210] = {.count = 1, .reusable = true}, SHIFT(13),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [214] = {.count = 1, .reusable = false}, SHIFT(38),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [238] = {.count = 1, .reusable = true}, SHIFT(17),
  [240] = {.count = 1, .reusable = false}, SHIFT(17),
  [242] = {.count = 1, .reusable = true}, SHIFT(23),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(216),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [254] = {.count = 1, .reusable = false}, SHIFT(62),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [260] = {.count = 1, .reusable = true}, SHIFT(205),
  [262] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(61),
  [265] = {.count = 1, .reusable = false}, SHIFT(61),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [273] = {.count = 1, .reusable = false}, SHIFT(253),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 6),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 6),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [297] = {.count = 1, .reusable = true}, SHIFT(25),
  [299] = {.count = 1, .reusable = false}, SHIFT(25),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(207),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 5),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 5),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [313] = {.count = 1, .reusable = false}, SHIFT(241),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [317] = {.count = 1, .reusable = false}, SHIFT(105),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 7),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 7),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 4),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 4),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [331] = {.count = 1, .reusable = false}, SHIFT(109),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(193),
  [337] = {.count = 1, .reusable = true}, SHIFT(167),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [343] = {.count = 1, .reusable = true}, SHIFT(184),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [349] = {.count = 1, .reusable = true}, SHIFT(190),
  [351] = {.count = 1, .reusable = true}, SHIFT(215),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 4),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 4),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_sum_branch, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_sum_branch, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(98),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [375] = {.count = 1, .reusable = true}, SHIFT(188),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 1),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [389] = {.count = 1, .reusable = true}, SHIFT(206),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_non_empty_sum_branch_list, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 4),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 4),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 8),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 8),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_type, 1),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_predefined_type, 1),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [471] = {.count = 1, .reusable = true}, SHIFT(16),
  [473] = {.count = 1, .reusable = false}, SHIFT(242),
  [475] = {.count = 1, .reusable = true}, SHIFT(182),
  [477] = {.count = 1, .reusable = true}, SHIFT(211),
  [479] = {.count = 1, .reusable = true}, SHIFT(181),
  [481] = {.count = 1, .reusable = true}, SHIFT(22),
  [483] = {.count = 1, .reusable = true}, SHIFT(225),
  [485] = {.count = 1, .reusable = true}, SHIFT(210),
  [487] = {.count = 1, .reusable = true}, SHIFT(199),
  [489] = {.count = 1, .reusable = true}, SHIFT(168),
  [491] = {.count = 1, .reusable = true}, SHIFT(176),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [495] = {.count = 1, .reusable = true}, SHIFT(198),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [499] = {.count = 1, .reusable = true}, SHIFT(197),
  [501] = {.count = 1, .reusable = true}, SHIFT(212),
  [503] = {.count = 1, .reusable = true}, SHIFT(189),
  [505] = {.count = 1, .reusable = true}, SHIFT(220),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [511] = {.count = 1, .reusable = true}, SHIFT(191),
  [513] = {.count = 1, .reusable = false}, SHIFT(47),
  [515] = {.count = 1, .reusable = true}, SHIFT(47),
  [517] = {.count = 1, .reusable = true}, SHIFT(192),
  [519] = {.count = 1, .reusable = false}, SHIFT(80),
  [521] = {.count = 1, .reusable = true}, SHIFT(80),
  [523] = {.count = 1, .reusable = false}, SHIFT(282),
  [525] = {.count = 1, .reusable = true}, SHIFT(282),
  [527] = {.count = 1, .reusable = true}, SHIFT(5),
  [529] = {.count = 1, .reusable = true}, SHIFT(125),
  [531] = {.count = 1, .reusable = true}, SHIFT(4),
  [533] = {.count = 1, .reusable = true}, SHIFT(78),
  [535] = {.count = 1, .reusable = true}, SHIFT(67),
  [537] = {.count = 1, .reusable = true}, SHIFT(135),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [541] = {.count = 1, .reusable = true}, SHIFT(142),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [547] = {.count = 1, .reusable = true}, SHIFT(8),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [551] = {.count = 1, .reusable = true}, SHIFT(114),
  [553] = {.count = 1, .reusable = true}, SHIFT(93),
  [555] = {.count = 1, .reusable = true}, SHIFT(166),
  [557] = {.count = 1, .reusable = true}, SHIFT(116),
  [559] = {.count = 1, .reusable = true}, SHIFT(57),
  [561] = {.count = 1, .reusable = true}, SHIFT(319),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [565] = {.count = 1, .reusable = true}, SHIFT(156),
  [567] = {.count = 1, .reusable = true}, SHIFT(153),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [577] = {.count = 1, .reusable = true}, SHIFT(30),
  [579] = {.count = 1, .reusable = true}, SHIFT(85),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [583] = {.count = 1, .reusable = true}, SHIFT(243),
  [585] = {.count = 1, .reusable = false}, SHIFT(73),
  [587] = {.count = 1, .reusable = true}, SHIFT(73),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [595] = {.count = 1, .reusable = true}, SHIFT(159),
  [597] = {.count = 1, .reusable = true}, SHIFT(110),
  [599] = {.count = 1, .reusable = true}, SHIFT(214),
  [601] = {.count = 1, .reusable = true}, SHIFT(37),
  [603] = {.count = 1, .reusable = true}, SHIFT(39),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [607] = {.count = 1, .reusable = true}, SHIFT(7),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [615] = {.count = 1, .reusable = true}, SHIFT(183),
  [617] = {.count = 1, .reusable = true}, SHIFT(3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [623] = {.count = 1, .reusable = true}, SHIFT(32),
  [625] = {.count = 1, .reusable = true}, SHIFT(248),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [631] = {.count = 1, .reusable = true}, SHIFT(240),
  [633] = {.count = 1, .reusable = true}, SHIFT(63),
  [635] = {.count = 1, .reusable = true}, SHIFT(141),
  [637] = {.count = 1, .reusable = true}, SHIFT(84),
  [639] = {.count = 1, .reusable = true}, SHIFT(154),
  [641] = {.count = 1, .reusable = true}, SHIFT(249),
  [643] = {.count = 1, .reusable = true}, SHIFT(75),
  [645] = {.count = 1, .reusable = true}, SHIFT(230),
  [647] = {.count = 1, .reusable = true}, SHIFT(158),
  [649] = {.count = 1, .reusable = true}, SHIFT(163),
  [651] = {.count = 1, .reusable = true}, SHIFT(246),
  [653] = {.count = 1, .reusable = true}, SHIFT(43),
  [655] = {.count = 1, .reusable = true}, SHIFT(20),
  [657] = {.count = 1, .reusable = true}, SHIFT(138),
  [659] = {.count = 1, .reusable = true}, SHIFT(101),
  [661] = {.count = 1, .reusable = true}, SHIFT(56),
  [663] = {.count = 1, .reusable = true}, SHIFT(185),
  [665] = {.count = 1, .reusable = true}, SHIFT(51),
  [667] = {.count = 1, .reusable = true}, SHIFT(108),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [671] = {.count = 1, .reusable = true}, SHIFT(77),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [677] = {.count = 1, .reusable = true}, SHIFT(104),
  [679] = {.count = 1, .reusable = true}, SHIFT(204),
  [681] = {.count = 1, .reusable = true}, SHIFT(247),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [685] = {.count = 1, .reusable = true}, SHIFT(130),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [689] = {.count = 1, .reusable = true}, SHIFT(194),
  [691] = {.count = 1, .reusable = true}, SHIFT(45),
  [693] = {.count = 1, .reusable = true}, SHIFT(2),
  [695] = {.count = 1, .reusable = true}, SHIFT(12),
  [697] = {.count = 1, .reusable = true}, SHIFT(325),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [701] = {.count = 1, .reusable = true}, SHIFT(324),
  [703] = {.count = 1, .reusable = true}, SHIFT(217),
  [705] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [707] = {.count = 1, .reusable = false}, SHIFT(322),
  [709] = {.count = 1, .reusable = true}, SHIFT(99),
  [711] = {.count = 1, .reusable = true}, SHIFT(195),
  [713] = {.count = 1, .reusable = true}, SHIFT(171),
  [715] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [717] = {.count = 1, .reusable = false}, SHIFT(113),
  [719] = {.count = 1, .reusable = true}, SHIFT(18),
  [721] = {.count = 1, .reusable = true}, SHIFT(299),
  [723] = {.count = 1, .reusable = true}, SHIFT(308),
  [725] = {.count = 1, .reusable = false}, SHIFT(300),
  [727] = {.count = 1, .reusable = true}, SHIFT(143),
  [729] = {.count = 1, .reusable = true}, SHIFT(213),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_functor_built_in, 1),
  [733] = {.count = 1, .reusable = true}, SHIFT(86),
  [735] = {.count = 1, .reusable = true}, SHIFT(15),
  [737] = {.count = 1, .reusable = true}, SHIFT(24),
  [739] = {.count = 1, .reusable = true}, SHIFT(90),
  [741] = {.count = 1, .reusable = true}, SHIFT(226),
  [743] = {.count = 1, .reusable = true}, SHIFT(227),
  [745] = {.count = 1, .reusable = true}, SHIFT(170),
  [747] = {.count = 1, .reusable = true}, SHIFT(112),
  [749] = {.count = 1, .reusable = true}, SHIFT(178),
  [751] = {.count = 1, .reusable = true}, SHIFT(228),
  [753] = {.count = 1, .reusable = true}, SHIFT(219),
  [755] = {.count = 1, .reusable = true}, SHIFT(208),
  [757] = {.count = 1, .reusable = true}, SHIFT(337),
  [759] = {.count = 1, .reusable = true}, SHIFT(218),
  [761] = {.count = 1, .reusable = true}, SHIFT(174),
  [763] = {.count = 1, .reusable = true}, SHIFT(180),
  [765] = {.count = 1, .reusable = true}, SHIFT(229),
  [767] = {.count = 1, .reusable = true}, SHIFT(169),
  [769] = {.count = 1, .reusable = true}, SHIFT(330),
  [771] = {.count = 1, .reusable = true}, SHIFT(331),
  [773] = {.count = 1, .reusable = true}, SHIFT(179),
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
