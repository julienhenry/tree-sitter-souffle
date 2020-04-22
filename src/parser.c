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
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 151
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
  sym_ITOU = 23,
  sym_ITOF = 24,
  sym_UTOI = 25,
  sym_UTOF = 26,
  sym_FTOI = 27,
  sym_FTOU = 28,
  sym_TMATCH = 29,
  sym_MEAN = 30,
  sym_CAT = 31,
  sym_ORD = 32,
  sym_STRLEN = 33,
  sym_SUBSTR = 34,
  sym_TCONTAINS = 35,
  sym_OUTPUT_QUALIFIER = 36,
  sym_INPUT_QUALIFIER = 37,
  sym_OVERRIDABLE_QUALIFIER = 38,
  sym_PRINTSIZE_QUALIFIER = 39,
  sym_EQREL_QUALIFIER = 40,
  sym_INLINE_QUALIFIER = 41,
  sym_BRIE_QUALIFIER = 42,
  sym_BTREE_QUALIFIER = 43,
  sym_MIN = 44,
  sym_MAX = 45,
  sym_AS = 46,
  sym_NIL = 47,
  sym_UNDERSCORE = 48,
  sym_COUNT = 49,
  sym_SUM = 50,
  sym_TRUE = 51,
  sym_FALSE = 52,
  sym_TOSTRING = 53,
  sym_TONUMBER = 54,
  sym_PLAN = 55,
  sym_PIPE = 56,
  sym_LBRACKET = 57,
  sym_RBRACKET = 58,
  sym_DOLLAR = 59,
  sym_PLUS = 60,
  sym_MINUS = 61,
  sym_LPAREN = 62,
  sym_RPAREN = 63,
  sym_COMMA = 64,
  sym_COLON = 65,
  sym_SEMICOLON = 66,
  sym_DOT = 67,
  sym_SUBTYPE = 68,
  sym_LE = 69,
  sym_GE = 70,
  sym_NE = 71,
  sym_EQUALS = 72,
  sym_EXCLAMATION = 73,
  sym_STAR = 74,
  sym_AT = 75,
  sym_SLASH = 76,
  sym_CARET = 77,
  sym_PERCENT = 78,
  sym_LBRACE = 79,
  sym_RBRACE = 80,
  sym_LT = 81,
  sym_GT = 82,
  sym_IF = 83,
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
  sym_non_empty_record_type_list = 111,
  sym_union_type_list = 112,
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
  sym_component = 132,
  sym_component_head = 133,
  sym_comp_type = 134,
  sym_type_params = 135,
  sym_type_param_list = 136,
  sym_component_body = 137,
  sym_comp_init = 138,
  sym_functor_decl = 139,
  sym_non_empty_functor_arg_type_list = 140,
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
  [sym_ITOU] = "ITOU",
  [sym_ITOF] = "ITOF",
  [sym_UTOI] = "UTOI",
  [sym_UTOF] = "UTOF",
  [sym_FTOI] = "FTOI",
  [sym_FTOU] = "FTOU",
  [sym_TMATCH] = "TMATCH",
  [sym_MEAN] = "MEAN",
  [sym_CAT] = "CAT",
  [sym_ORD] = "ORD",
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
  [sym_non_empty_record_type_list] = "non_empty_record_type_list",
  [sym_union_type_list] = "union_type_list",
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
  [sym_component] = "component",
  [sym_component_head] = "component_head",
  [sym_comp_type] = "comp_type",
  [sym_type_params] = "type_params",
  [sym_type_param_list] = "type_param_list",
  [sym_component_body] = "component_body",
  [sym_comp_init] = "comp_init",
  [sym_functor_decl] = "functor_decl",
  [sym_non_empty_functor_arg_type_list] = "non_empty_functor_arg_type_list",
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
  [sym_ITOU] = sym_ITOU,
  [sym_ITOF] = sym_ITOF,
  [sym_UTOI] = sym_UTOI,
  [sym_UTOF] = sym_UTOF,
  [sym_FTOI] = sym_FTOI,
  [sym_FTOU] = sym_FTOU,
  [sym_TMATCH] = sym_TMATCH,
  [sym_MEAN] = sym_MEAN,
  [sym_CAT] = sym_CAT,
  [sym_ORD] = sym_ORD,
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
  [sym_non_empty_record_type_list] = sym_non_empty_record_type_list,
  [sym_union_type_list] = sym_union_type_list,
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
  [sym_component] = sym_component,
  [sym_component_head] = sym_component_head,
  [sym_comp_type] = sym_comp_type,
  [sym_type_params] = sym_type_params,
  [sym_type_param_list] = sym_type_param_list,
  [sym_component_body] = sym_component_body,
  [sym_comp_init] = sym_comp_init,
  [sym_functor_decl] = sym_functor_decl,
  [sym_non_empty_functor_arg_type_list] = sym_non_empty_functor_arg_type_list,
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
  [sym_ITOU] = {
    .visible = true,
    .named = true,
  },
  [sym_ITOF] = {
    .visible = true,
    .named = true,
  },
  [sym_UTOI] = {
    .visible = true,
    .named = true,
  },
  [sym_UTOF] = {
    .visible = true,
    .named = true,
  },
  [sym_FTOI] = {
    .visible = true,
    .named = true,
  },
  [sym_FTOU] = {
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
  [sym_non_empty_record_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_list] = {
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
  [sym_non_empty_functor_arg_type_list] = {
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
      if (lookahead == '!') ADVANCE(227);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '%') ADVANCE(232);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(212);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(237);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(239);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '^') ADVANCE(231);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(226);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(212);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '%') ADVANCE(232);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(212);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(239);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '^') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(232);
      if (lookahead == ')') ADVANCE(212);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(239);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '^') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(212);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(371);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(373);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(240);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 139:
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(371);
      if (lookahead == '\r') ADVANCE(377);
      END_STATE();
    case 145:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(212);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(359);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '<') ADVANCE(235);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 146:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 147:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
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
      ACCEPT_TOKEN(sym_BW_OR);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_BW_XOR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_BW_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_BW_SHIFT_L);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_BW_SHIFT_R);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_BW_SHIFT_R_UNSIGNED);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_L_AND);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_L_OR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_L_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ITOU);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ITOF);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_UTOI);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_UTOF);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_FTOI);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_FTOU);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_TMATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_MEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_CAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_STRLEN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_SUBSTR);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_TCONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_OUTPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_INPUT_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_OVERRIDABLE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_PRINTSIZE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_EQREL_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_INLINE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_BRIE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_BTREE_QUALIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_MIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_MAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_COUNT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_SUM);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_TOSTRING);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_TONUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_PLAN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_PIPE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_LBRACKET);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_RBRACKET);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_DOLLAR);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_PLUS);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_MINUS);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_LPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_RPAREN);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_COLON);
      if (lookahead == '-') ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_SEMICOLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_DOT);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_SUBTYPE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_LE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_GE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_NE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_EQUALS);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_EXCLAMATION);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_STAR);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_AT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(371);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_CARET);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_PERCENT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_RBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_LT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_LT);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_GT);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'q') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == 'u') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == '_') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'b') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'c') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'd') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'g') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'h') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'm') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'p') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == 'x') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'u') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'x') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (lookahead == 'z') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == '.') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_NUMBER_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_NUMBER_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_NUMBER_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_COMMENT);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(387);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(387);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(394);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '\\') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(393);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(144);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(370);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\r') ADVANCE(367);
      if (lookahead == '\\') ADVANCE(369);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(370);
      if (lookahead == '\r') ADVANCE(378);
      if (lookahead == '"') ADVANCE(371);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 145},
  [13] = {.lex_state = 145},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 148},
  [34] = {.lex_state = 148},
  [35] = {.lex_state = 148},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 145},
  [39] = {.lex_state = 148},
  [40] = {.lex_state = 145},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 145},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 145},
  [54] = {.lex_state = 146},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 145},
  [57] = {.lex_state = 145},
  [58] = {.lex_state = 145},
  [59] = {.lex_state = 145},
  [60] = {.lex_state = 145},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 145},
  [63] = {.lex_state = 146},
  [64] = {.lex_state = 145},
  [65] = {.lex_state = 146},
  [66] = {.lex_state = 145},
  [67] = {.lex_state = 146},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 145},
  [70] = {.lex_state = 145},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 146},
  [73] = {.lex_state = 145},
  [74] = {.lex_state = 146},
  [75] = {.lex_state = 145},
  [76] = {.lex_state = 145},
  [77] = {.lex_state = 145},
  [78] = {.lex_state = 145},
  [79] = {.lex_state = 145},
  [80] = {.lex_state = 146},
  [81] = {.lex_state = 145},
  [82] = {.lex_state = 145},
  [83] = {.lex_state = 145},
  [84] = {.lex_state = 145},
  [85] = {.lex_state = 145},
  [86] = {.lex_state = 145},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 145},
  [89] = {.lex_state = 145},
  [90] = {.lex_state = 145},
  [91] = {.lex_state = 145},
  [92] = {.lex_state = 147},
  [93] = {.lex_state = 145},
  [94] = {.lex_state = 145},
  [95] = {.lex_state = 145},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 145},
  [99] = {.lex_state = 145},
  [100] = {.lex_state = 145},
  [101] = {.lex_state = 145},
  [102] = {.lex_state = 145},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 145},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 147},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 145},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 145},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 145},
  [125] = {.lex_state = 145},
  [126] = {.lex_state = 145},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 145},
  [131] = {.lex_state = 145},
  [132] = {.lex_state = 145},
  [133] = {.lex_state = 145},
  [134] = {.lex_state = 145},
  [135] = {.lex_state = 145},
  [136] = {.lex_state = 145},
  [137] = {.lex_state = 145},
  [138] = {.lex_state = 145},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 145},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 145},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 145},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 145},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 145},
  [159] = {.lex_state = 145},
  [160] = {.lex_state = 145},
  [161] = {.lex_state = 145},
  [162] = {.lex_state = 145},
  [163] = {.lex_state = 145},
  [164] = {.lex_state = 145},
  [165] = {.lex_state = 145},
  [166] = {.lex_state = 145},
  [167] = {.lex_state = 145},
  [168] = {.lex_state = 145},
  [169] = {.lex_state = 145},
  [170] = {.lex_state = 145},
  [171] = {.lex_state = 145},
  [172] = {.lex_state = 145},
  [173] = {.lex_state = 145},
  [174] = {.lex_state = 145},
  [175] = {.lex_state = 145},
  [176] = {.lex_state = 145},
  [177] = {.lex_state = 145},
  [178] = {.lex_state = 145},
  [179] = {.lex_state = 145},
  [180] = {.lex_state = 145},
  [181] = {.lex_state = 145},
  [182] = {.lex_state = 145},
  [183] = {.lex_state = 145},
  [184] = {.lex_state = 145},
  [185] = {.lex_state = 145},
  [186] = {.lex_state = 145},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 145},
  [189] = {.lex_state = 145},
  [190] = {.lex_state = 145},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 145},
  [193] = {.lex_state = 145},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 145},
  [196] = {.lex_state = 145},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 145},
  [199] = {.lex_state = 145},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 145},
  [231] = {.lex_state = 145},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 145},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 145},
  [241] = {.lex_state = 145},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 145},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 392},
  [250] = {.lex_state = 145},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 145},
  [257] = {.lex_state = 145},
  [258] = {.lex_state = 145},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 392},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
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
    [sym_BW_NOT] = ACTIONS(1),
    [sym_L_NOT] = ACTIONS(1),
    [sym_ITOU] = ACTIONS(1),
    [sym_ITOF] = ACTIONS(1),
    [sym_UTOI] = ACTIONS(1),
    [sym_UTOF] = ACTIONS(1),
    [sym_FTOI] = ACTIONS(1),
    [sym_FTOU] = ACTIONS(1),
    [sym_TMATCH] = ACTIONS(1),
    [sym_MEAN] = ACTIONS(1),
    [sym_CAT] = ACTIONS(1),
    [sym_ORD] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(244),
    [sym_IDENT] = STATE(140),
    [sym_unit] = STATE(13),
    [sym_include] = STATE(99),
    [sym_line] = STATE(99),
    [sym_define] = STATE(99),
    [sym_identifier] = STATE(205),
    [sym_type] = STATE(99),
    [sym_relation_decl] = STATE(99),
    [sym_fact] = STATE(99),
    [sym_rule] = STATE(83),
    [sym_rule_def] = STATE(73),
    [sym_head] = STATE(217),
    [sym_atom] = STATE(201),
    [sym_component] = STATE(99),
    [sym_component_head] = STATE(199),
    [sym_comp_init] = STATE(99),
    [sym_functor_decl] = STATE(99),
    [sym_pragma] = STATE(99),
    [sym_io_head] = STATE(99),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_arg,
    STATE(144), 1,
      sym_conjunction,
    STATE(155), 1,
      sym_term,
    STATE(200), 1,
      sym_disjunction,
    STATE(205), 1,
      sym_identifier,
    STATE(238), 1,
      sym_body,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [108] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_arg,
    STATE(144), 1,
      sym_conjunction,
    STATE(155), 1,
      sym_term,
    STATE(200), 1,
      sym_disjunction,
    STATE(205), 1,
      sym_identifier,
    STATE(246), 1,
      sym_body,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [216] = 29,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_arg,
    STATE(144), 1,
      sym_conjunction,
    STATE(155), 1,
      sym_term,
    STATE(200), 1,
      sym_disjunction,
    STATE(205), 1,
      sym_identifier,
    STATE(263), 1,
      sym_body,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [324] = 28,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(61), 1,
      sym_arg,
    STATE(144), 1,
      sym_conjunction,
    STATE(155), 1,
      sym_term,
    STATE(204), 1,
      sym_disjunction,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [429] = 27,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_arg,
    STATE(142), 1,
      sym_conjunction,
    STATE(155), 1,
      sym_term,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [531] = 26,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_arg,
    STATE(148), 1,
      sym_term,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [630] = 26,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(59), 1,
      sym_LPAREN,
    ACTIONS(61), 1,
      sym_EXCLAMATION,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(51), 1,
      sym_NUMBER,
    STATE(55), 1,
      sym_IDENT,
    STATE(68), 1,
      sym_arg,
    STATE(146), 1,
      sym_term,
    STATE(205), 1,
      sym_identifier,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(37), 2,
      sym_TMATCH,
      sym_TCONTAINS,
    ACTIONS(39), 2,
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
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(154), 2,
      sym_atom,
      sym_constraint,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [729] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    ACTIONS(71), 1,
      sym_RPAREN,
    STATE(96), 1,
      sym_arg,
    STATE(207), 1,
      sym_non_empty_arg_list,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [811] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    ACTIONS(73), 1,
      sym_RBRACKET,
    STATE(96), 1,
      sym_arg,
    STATE(215), 1,
      sym_non_empty_arg_list,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [893] = 21,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    ACTIONS(75), 1,
      sym_RPAREN,
    STATE(96), 1,
      sym_arg,
    STATE(213), 1,
      sym_non_empty_arg_list,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [975] = 24,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_DECL,
    ACTIONS(82), 1,
      sym_FUNCTOR,
    ACTIONS(88), 1,
      sym_TYPE,
    ACTIONS(91), 1,
      sym_COMPONENT,
    ACTIONS(94), 1,
      sym_INSTANTIATE,
    ACTIONS(100), 1,
      sym_PRAGMA,
    ACTIONS(103), 1,
      aux_sym_IDENT_token1,
    ACTIONS(106), 1,
      aux_sym_IDENT_token2,
    ACTIONS(109), 1,
      anon_sym_POUNDinclude,
    ACTIONS(112), 1,
      anon_sym_POUNDline,
    ACTIONS(115), 1,
      anon_sym_POUNDdefine,
    STATE(73), 1,
      sym_rule_def,
    STATE(83), 1,
      sym_rule,
    STATE(140), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(201), 1,
      sym_atom,
    STATE(205), 1,
      sym_identifier,
    STATE(217), 1,
      sym_head,
    ACTIONS(97), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(12), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(99), 11,
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
  [1062] = 24,
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
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_rule_def,
    STATE(83), 1,
      sym_rule,
    STATE(140), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(201), 1,
      sym_atom,
    STATE(205), 1,
      sym_identifier,
    STATE(217), 1,
      sym_head,
    ACTIONS(19), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(12), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(99), 11,
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
  [1149] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(96), 1,
      sym_arg,
    STATE(219), 1,
      sym_non_empty_arg_list,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1228] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(87), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1304] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(110), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1380] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(117), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1456] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(106), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1532] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(121), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1608] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(115), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1684] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(123), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1760] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(97), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1836] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(46), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1912] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(112), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [1988] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(120), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2064] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(47), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2140] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(120), 1,
      sym_LPAREN,
    STATE(110), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2216] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(122), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2292] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(113), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2368] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(44), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2444] = 19,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(41), 1,
      sym_CAT,
    ACTIONS(43), 1,
      sym_SUBSTR,
    ACTIONS(47), 1,
      sym_AS,
    ACTIONS(51), 1,
      sym_COUNT,
    ACTIONS(55), 1,
      sym_LBRACKET,
    ACTIONS(63), 1,
      sym_AT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(69), 1,
      sym_LPAREN,
    STATE(109), 1,
      sym_arg,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(33), 2,
      sym_BW_NOT,
      sym_L_NOT,
    ACTIONS(39), 2,
      sym_MEAN,
      sym_SUM,
    ACTIONS(45), 2,
      sym_MIN,
      sym_MAX,
    ACTIONS(49), 2,
      sym_NIL,
      sym_UNDERSCORE,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
    STATE(51), 2,
      sym_IDENT,
      sym_NUMBER,
    ACTIONS(57), 3,
      sym_DOLLAR,
      sym_FLOAT,
      sym_STRING,
    ACTIONS(35), 10,
      sym_ITOU,
      sym_ITOF,
      sym_UTOI,
      sym_UTOF,
      sym_FTOI,
      sym_FTOU,
      sym_ORD,
      sym_STRLEN,
      sym_TOSTRING,
      sym_TONUMBER,
  [2520] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(122), 25,
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
  [2557] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(39), 1,
      aux_sym_relation_tags_repeat1,
    STATE(85), 1,
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
  [2600] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(39), 1,
      aux_sym_relation_tags_repeat1,
    STATE(86), 1,
      sym_relation_tags,
    ACTIONS(134), 2,
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
    ACTIONS(132), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
  [2643] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(35), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(141), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(138), 8,
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
  [2683] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(145), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(143), 23,
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
  [2719] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(149), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(147), 24,
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
  [2755] = 20,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(151), 1,
      sym_DECL,
    ACTIONS(157), 1,
      sym_TYPE,
    ACTIONS(160), 1,
      sym_COMPONENT,
    ACTIONS(163), 1,
      sym_INSTANTIATE,
    ACTIONS(169), 1,
      sym_OVERRIDE,
    ACTIONS(172), 1,
      sym_RBRACE,
    ACTIONS(174), 1,
      aux_sym_IDENT_token1,
    ACTIONS(177), 1,
      aux_sym_IDENT_token2,
    STATE(73), 1,
      sym_rule_def,
    STATE(116), 1,
      sym_rule,
    STATE(140), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(201), 1,
      sym_atom,
    STATE(205), 1,
      sym_identifier,
    STATE(217), 1,
      sym_head,
    ACTIONS(166), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(38), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(154), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(125), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2825] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(35), 1,
      aux_sym_relation_tags_repeat1,
    ACTIONS(184), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(182), 8,
      sym_OUTPUT_QUALIFIER,
      sym_INPUT_QUALIFIER,
      sym_OVERRIDABLE_QUALIFIER,
      sym_PRINTSIZE_QUALIFIER,
      sym_EQREL_QUALIFIER,
      sym_INLINE_QUALIFIER,
      sym_BRIE_QUALIFIER,
      sym_BTREE_QUALIFIER,
    ACTIONS(180), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
  [2865] = 20,
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
    ACTIONS(188), 1,
      sym_TYPE,
    ACTIONS(190), 1,
      sym_INSTANTIATE,
    ACTIONS(194), 1,
      sym_OVERRIDE,
    ACTIONS(196), 1,
      sym_RBRACE,
    STATE(73), 1,
      sym_rule_def,
    STATE(116), 1,
      sym_rule,
    STATE(140), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(201), 1,
      sym_atom,
    STATE(205), 1,
      sym_identifier,
    STATE(217), 1,
      sym_head,
    ACTIONS(192), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(42), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(186), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(125), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(200), 5,
      sym_BW_SHIFT_R,
      sym_COLON,
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
  [2971] = 20,
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
    ACTIONS(188), 1,
      sym_TYPE,
    ACTIONS(190), 1,
      sym_INSTANTIATE,
    ACTIONS(194), 1,
      sym_OVERRIDE,
    ACTIONS(202), 1,
      sym_RBRACE,
    STATE(73), 1,
      sym_rule_def,
    STATE(116), 1,
      sym_rule,
    STATE(140), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_component_head,
    STATE(201), 1,
      sym_atom,
    STATE(205), 1,
      sym_identifier,
    STATE(217), 1,
      sym_head,
    ACTIONS(192), 2,
      sym_NUMBER_TYPE,
      sym_SYMBOL_TYPE,
    STATE(38), 2,
      sym_component_body,
      aux_sym_component_repeat1,
    ACTIONS(186), 3,
      sym_INPUT_DECL,
      sym_OUTPUT_DECL,
      sym_PRINTSIZE_DECL,
    STATE(125), 6,
      sym_type,
      sym_relation_decl,
      sym_fact,
      sym_component,
      sym_comp_init,
      sym_io_head,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(206), 4,
      sym_BW_SHIFT_R,
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
  [3076] = 3,
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
  [3111] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(214), 4,
      sym_BW_SHIFT_R,
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
  [3146] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(214), 4,
      sym_BW_SHIFT_R,
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
  [3181] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(214), 2,
      sym_LT,
      sym_GT,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(212), 11,
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
    ACTIONS(216), 11,
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
  [3222] = 3,
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
  [3257] = 3,
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
  [3292] = 3,
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
  [3327] = 3,
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
  [3362] = 3,
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
  [3397] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(240), 1,
      sym_LT,
    ACTIONS(242), 1,
      aux_sym_IDENT_token1,
    STATE(56), 1,
      sym_type_params,
    ACTIONS(238), 21,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3433] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 3,
      sym_DOT,
      sym_LT,
      aux_sym_IDENT_token1,
    ACTIONS(122), 21,
      ts_builtin_sym_end,
      sym_DECL,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3465] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(244), 2,
      sym_LPAREN,
      sym_DOT,
    ACTIONS(232), 4,
      sym_BW_SHIFT_R,
      sym_SLASH,
      sym_LT,
      sym_GT,
    ACTIONS(230), 17,
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
  [3498] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(248), 1,
      aux_sym_IDENT_token1,
    ACTIONS(246), 21,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3528] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(252), 1,
      aux_sym_IDENT_token1,
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
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3558] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(256), 1,
      aux_sym_IDENT_token1,
    ACTIONS(254), 20,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3587] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(260), 1,
      sym_COMMA,
    ACTIONS(262), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3618] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(266), 1,
      aux_sym_IDENT_token1,
    ACTIONS(264), 20,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3647] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(268), 1,
      sym_RPAREN,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(272), 2,
      sym_LT,
      sym_GT,
    ACTIONS(270), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(216), 11,
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
  [3684] = 3,
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
  [3713] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(244), 19,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3742] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(282), 1,
      aux_sym_IDENT_token1,
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
      sym_RPAREN,
      sym_COMMA,
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3771] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(286), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(284), 19,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3800] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(290), 1,
      aux_sym_IDENT_token1,
    ACTIONS(288), 20,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3829] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 1,
      sym_DOT,
    ACTIONS(296), 1,
      aux_sym_IDENT_token1,
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
      sym_LPAREN,
      sym_COMMA,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [3859] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(272), 2,
      sym_LT,
      sym_GT,
    ACTIONS(270), 4,
      sym_LE,
      sym_GE,
      sym_NE,
      sym_EQUALS,
    ACTIONS(216), 11,
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
  [3893] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(300), 1,
      aux_sym_IDENT_token1,
    ACTIONS(298), 19,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3921] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(304), 1,
      aux_sym_IDENT_token1,
    ACTIONS(302), 19,
      ts_builtin_sym_end,
      sym_DECL,
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
  [3949] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(124), 3,
      sym_DOT,
      sym_LT,
      aux_sym_IDENT_token1,
    ACTIONS(122), 17,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 1,
      sym_DOT,
    ACTIONS(308), 1,
      aux_sym_IDENT_token1,
    ACTIONS(306), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4007] = 3,
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
      sym_PLAN,
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4035] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 1,
      sym_DOT,
    ACTIONS(316), 1,
      aux_sym_IDENT_token1,
    ACTIONS(314), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4064] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LPAREN,
    ACTIONS(322), 1,
      sym_COMMA,
    ACTIONS(324), 1,
      aux_sym_IDENT_token1,
    ACTIONS(318), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4095] = 3,
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
  [4122] = 3,
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
  [4149] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(336), 1,
      aux_sym_IDENT_token1,
    ACTIONS(334), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4176] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(340), 1,
      aux_sym_IDENT_token1,
    ACTIONS(338), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4203] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(294), 1,
      sym_DOT,
    ACTIONS(344), 1,
      aux_sym_IDENT_token1,
    ACTIONS(342), 17,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4232] = 3,
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
  [4259] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(352), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4286] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 1,
      sym_PLAN,
    ACTIONS(358), 1,
      aux_sym_IDENT_token1,
    STATE(69), 1,
      sym_exec_plan,
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
  [4317] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(362), 1,
      aux_sym_IDENT_token1,
    ACTIONS(360), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4344] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(134), 1,
      aux_sym_IDENT_token1,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4371] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(366), 1,
      aux_sym_IDENT_token1,
    ACTIONS(364), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4398] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(368), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
    ACTIONS(216), 11,
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
  [4429] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(372), 1,
      aux_sym_IDENT_token1,
    ACTIONS(370), 18,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4456] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(376), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4483] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(380), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4510] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(384), 1,
      aux_sym_IDENT_token1,
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
      sym_RBRACE,
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4537] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(336), 1,
      aux_sym_IDENT_token1,
    ACTIONS(386), 1,
      sym_SUBTYPE,
    ACTIONS(388), 1,
      sym_EQUALS,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4568] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(392), 1,
      aux_sym_IDENT_token1,
    ACTIONS(394), 1,
      sym_STRING,
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
  [4596] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 1,
      aux_sym_IDENT_token1,
    ACTIONS(396), 1,
      sym_PIPE,
    ACTIONS(346), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4624] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(400), 1,
      aux_sym_IDENT_token1,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4649] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(402), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(216), 11,
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
  [4678] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(404), 3,
      sym_RBRACKET,
      sym_RPAREN,
      sym_COMMA,
    ACTIONS(216), 11,
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
  [4707] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(408), 1,
      aux_sym_IDENT_token1,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4732] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(358), 1,
      aux_sym_IDENT_token1,
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
  [4757] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(412), 1,
      aux_sym_IDENT_token1,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4782] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(416), 1,
      aux_sym_IDENT_token1,
    ACTIONS(414), 16,
      ts_builtin_sym_end,
      sym_DECL,
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
  [4807] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(420), 1,
      aux_sym_IDENT_token1,
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
      aux_sym_IDENT_token2,
      anon_sym_POUNDinclude,
      anon_sym_POUNDline,
      anon_sym_POUNDdefine,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(278), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(244), 15,
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
  [4857] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(286), 2,
      sym_DOT,
      aux_sym_IDENT_token1,
    ACTIONS(284), 15,
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
  [4882] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(424), 1,
      aux_sym_IDENT_token1,
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
  [4907] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(268), 1,
      sym_RPAREN,
    ACTIONS(426), 1,
      sym_COMMA,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [4937] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(308), 1,
      aux_sym_IDENT_token1,
    ACTIONS(428), 1,
      sym_DOT,
    ACTIONS(306), 14,
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
  [4963] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(296), 1,
      aux_sym_IDENT_token1,
    ACTIONS(428), 1,
      sym_DOT,
    ACTIONS(292), 14,
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
  [4989] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(430), 1,
      sym_COMMA,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5016] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(432), 1,
      sym_COLON,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5043] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(336), 1,
      aux_sym_IDENT_token1,
    ACTIONS(386), 1,
      sym_SUBTYPE,
    ACTIONS(434), 1,
      sym_EQUALS,
    ACTIONS(334), 12,
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
  [5070] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(426), 1,
      sym_COMMA,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5097] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(71), 1,
      sym_RPAREN,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5124] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(320), 1,
      sym_LPAREN,
    ACTIONS(324), 1,
      aux_sym_IDENT_token1,
    ACTIONS(436), 1,
      sym_COMMA,
    ACTIONS(318), 12,
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
  [5151] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(438), 1,
      sym_COMMA,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5178] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(356), 1,
      sym_PLAN,
    ACTIONS(442), 1,
      aux_sym_IDENT_token1,
    STATE(69), 1,
      sym_exec_plan,
    ACTIONS(440), 12,
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
  [5205] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(268), 1,
      sym_RPAREN,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5232] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(316), 1,
      aux_sym_IDENT_token1,
    ACTIONS(428), 1,
      sym_DOT,
    ACTIONS(314), 13,
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
  [5257] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(344), 1,
      aux_sym_IDENT_token1,
    ACTIONS(428), 1,
      sym_DOT,
    ACTIONS(342), 13,
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
  [5282] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(444), 1,
      sym_RPAREN,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5309] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(446), 1,
      sym_RPAREN,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5336] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(448), 1,
      sym_COMMA,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5363] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(220), 1,
      sym_CARET,
    ACTIONS(450), 1,
      sym_COMMA,
    ACTIONS(218), 2,
      sym_BW_SHIFT_R,
      sym_SLASH,
    ACTIONS(216), 11,
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
  [5390] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(348), 1,
      aux_sym_IDENT_token1,
    ACTIONS(452), 1,
      sym_PIPE,
    ACTIONS(346), 12,
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
  [5414] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(442), 1,
      aux_sym_IDENT_token1,
    ACTIONS(440), 12,
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
  [5435] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(456), 1,
      aux_sym_IDENT_token1,
    ACTIONS(454), 12,
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
  [5456] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(460), 1,
      sym_STRING,
    STATE(203), 1,
      sym_IDENT,
    STATE(229), 1,
      sym_kvp_value,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(458), 2,
      sym_TRUE,
      sym_FALSE,
  [5477] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(462), 1,
      sym_RPAREN,
    STATE(214), 1,
      sym_non_empty_functor_arg_type_list,
    STATE(220), 1,
      sym_predefined_type,
    ACTIONS(464), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [5496] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(460), 1,
      sym_STRING,
    STATE(203), 1,
      sym_IDENT,
    STATE(228), 1,
      sym_kvp_value,
    ACTIONS(23), 2,
      aux_sym_IDENT_token1,
      aux_sym_IDENT_token2,
    ACTIONS(458), 2,
      sym_TRUE,
      sym_FALSE,
  [5517] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(466), 1,
      sym_LBRACKET,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(103), 1,
      sym_IDENT,
    STATE(119), 1,
      sym_identifier,
    STATE(124), 1,
      sym_union_type_list,
  [5539] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(472), 1,
      sym_RPAREN,
    STATE(209), 1,
      sym_NUMBER,
    STATE(224), 1,
      sym_exec_order_list,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5559] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    ACTIONS(474), 1,
      sym_RPAREN,
    STATE(209), 1,
      sym_NUMBER,
    STATE(210), 1,
      sym_exec_order_list,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5579] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(476), 1,
      sym_LBRACE,
    STATE(48), 1,
      sym_atom,
    STATE(140), 1,
      sym_IDENT,
    STATE(205), 1,
      sym_identifier,
  [5601] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(478), 1,
      sym_LBRACE,
    STATE(45), 1,
      sym_atom,
    STATE(140), 1,
      sym_IDENT,
    STATE(205), 1,
      sym_identifier,
  [5623] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(72), 1,
      sym_identifier,
    STATE(75), 1,
      sym_io_relation_list,
    STATE(89), 1,
      sym_io_directive_list,
  [5645] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(466), 1,
      sym_LBRACKET,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(80), 1,
      sym_identifier,
    STATE(94), 1,
      sym_union_type_list,
  [5667] = 7,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(89), 1,
      sym_io_directive_list,
    STATE(103), 1,
      sym_IDENT,
    STATE(107), 1,
      sym_identifier,
    STATE(114), 1,
      sym_io_relation_list,
  [5689] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(484), 1,
      sym_RPAREN,
    STATE(223), 1,
      sym_non_empty_key_value_pairs,
    STATE(237), 1,
      sym_IDENT,
  [5708] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(100), 1,
      sym_predefined_type,
    ACTIONS(464), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [5721] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(244), 5,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
  [5732] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(486), 1,
      sym_RPAREN,
    STATE(211), 1,
      sym_non_empty_attributes,
    STATE(256), 1,
      sym_IDENT,
  [5751] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(490), 1,
      sym_COMMA,
    ACTIONS(488), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5764] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(222), 1,
      sym_predefined_type,
    ACTIONS(464), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [5777] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(490), 1,
      sym_COMMA,
    ACTIONS(492), 4,
      sym_RPAREN,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5790] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(140), 1,
      sym_IDENT,
    STATE(205), 1,
      sym_identifier,
    STATE(208), 1,
      sym_atom,
  [5809] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(494), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5820] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(59), 1,
      sym_exec_plan_list,
    STATE(250), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5837] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(496), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5848] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(284), 5,
      sym_RBRACKET,
      sym_LPAREN,
      sym_RPAREN,
      sym_COMMA,
      sym_DOT,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(498), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5870] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(81), 1,
      sym_predefined_type,
    ACTIONS(464), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [5883] = 6,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    ACTIONS(500), 1,
      sym_RBRACKET,
    STATE(206), 1,
      sym_non_empty_record_type_list,
    STATE(257), 1,
      sym_IDENT,
  [5902] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(502), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5913] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(504), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5924] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(506), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5935] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    STATE(98), 1,
      sym_predefined_type,
    ACTIONS(464), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_float,
      anon_sym_unsigned,
  [5948] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(508), 5,
      sym_RPAREN,
      sym_COMMA,
      sym_SEMICOLON,
      sym_DOT,
      sym_RBRACE,
  [5959] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(227), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [5973] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(140), 1,
      sym_IDENT,
    STATE(221), 1,
      sym_identifier,
  [5989] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(53), 1,
      sym_IDENT,
    STATE(195), 1,
      sym_comp_type,
  [6005] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(140), 1,
      sym_IDENT,
    STATE(194), 1,
      sym_identifier,
  [6021] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(243), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6035] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(140), 1,
      sym_IDENT,
    STATE(197), 1,
      sym_identifier,
  [6051] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(202), 1,
      sym_IDENT,
    STATE(218), 1,
      sym_relation_list,
  [6067] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(140), 1,
      sym_IDENT,
    STATE(191), 1,
      sym_identifier,
  [6083] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(65), 1,
      aux_sym_NUMBER_token1,
    STATE(262), 1,
      sym_NUMBER,
    ACTIONS(67), 2,
      aux_sym_NUMBER_token2,
      aux_sym_NUMBER_token3,
  [6097] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(140), 1,
      sym_IDENT,
    STATE(187), 1,
      sym_identifier,
  [6113] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(103), 1,
      sym_IDENT,
    STATE(118), 1,
      sym_identifier,
  [6129] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(53), 1,
      sym_IDENT,
    STATE(179), 1,
      sym_comp_type,
  [6145] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(53), 1,
      sym_IDENT,
    STATE(76), 1,
      sym_comp_type,
  [6161] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(53), 1,
      sym_IDENT,
    STATE(76), 1,
      sym_comp_type,
  [6177] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(103), 1,
      sym_IDENT,
    STATE(108), 1,
      sym_identifier,
  [6193] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(67), 1,
      sym_identifier,
  [6209] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(63), 1,
      sym_IDENT,
    STATE(74), 1,
      sym_identifier,
  [6225] = 5,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(225), 1,
      sym_type_param_list,
    STATE(226), 1,
      sym_IDENT,
  [6241] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(104), 1,
      sym_IDENT,
  [6254] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(259), 1,
      sym_IDENT,
  [6267] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(216), 1,
      sym_IDENT,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(510), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6289] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(111), 1,
      sym_IDENT,
  [6302] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(248), 1,
      sym_IDENT,
  [6315] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(261), 1,
      sym_IDENT,
  [6328] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(65), 1,
      sym_IDENT,
  [6341] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(92), 1,
      sym_IDENT,
  [6354] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(252), 1,
      sym_IDENT,
  [6367] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(212), 1,
      sym_IDENT,
  [6380] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_DOT,
    ACTIONS(512), 2,
      sym_RPAREN,
      sym_COMMA,
  [6391] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(247), 1,
      sym_IDENT,
  [6404] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(78), 1,
      sym_IDENT,
  [6417] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(480), 1,
      aux_sym_IDENT_token1,
    ACTIONS(482), 1,
      aux_sym_IDENT_token2,
    STATE(78), 1,
      sym_IDENT,
  [6430] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_DOT,
    ACTIONS(516), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6441] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(240), 1,
      sym_IDENT,
  [6454] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(468), 1,
      aux_sym_IDENT_token1,
    ACTIONS(470), 1,
      aux_sym_IDENT_token2,
    STATE(126), 1,
      sym_IDENT,
  [6467] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_DOT,
    ACTIONS(518), 2,
      sym_RPAREN,
      sym_COMMA,
  [6478] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(520), 3,
      sym_COMMA,
      sym_COLON,
      sym_LBRACE,
  [6487] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(149), 1,
      sym_IDENT,
  [6500] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_DOT,
    ACTIONS(522), 2,
      sym_RBRACKET,
      sym_COMMA,
  [6511] = 4,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(23), 1,
      aux_sym_IDENT_token1,
    ACTIONS(25), 1,
      aux_sym_IDENT_token2,
    STATE(230), 1,
      sym_IDENT,
  [6524] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(526), 1,
      sym_LBRACE,
    ACTIONS(524), 2,
      sym_COMMA,
      sym_COLON,
  [6535] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(528), 1,
      sym_SEMICOLON,
    ACTIONS(530), 2,
      sym_DOT,
      sym_RBRACE,
  [6546] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(534), 1,
      sym_DOT,
    ACTIONS(532), 2,
      sym_COMMA,
      sym_IF,
  [6557] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(536), 2,
      sym_LPAREN,
      sym_COMMA,
  [6565] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(538), 2,
      sym_RPAREN,
      sym_COMMA,
  [6573] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(528), 1,
      sym_SEMICOLON,
    ACTIONS(540), 1,
      sym_RPAREN,
  [6583] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_DOT,
    ACTIONS(542), 1,
      sym_LPAREN,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(544), 1,
      sym_RBRACKET,
    ACTIONS(546), 1,
      sym_COMMA,
  [6603] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 1,
      sym_RPAREN,
    ACTIONS(550), 1,
      sym_COMMA,
  [6613] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(552), 2,
      sym_COMMA,
      sym_IF,
  [6621] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(554), 2,
      sym_RPAREN,
      sym_COMMA,
  [6629] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(556), 1,
      sym_RPAREN,
    ACTIONS(558), 1,
      sym_COMMA,
  [6639] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(560), 1,
      sym_RPAREN,
    ACTIONS(562), 1,
      sym_COMMA,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(564), 2,
      sym_LPAREN,
      sym_COMMA,
  [6657] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(550), 1,
      sym_COMMA,
    ACTIONS(566), 1,
      sym_RPAREN,
  [6667] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(568), 1,
      sym_RPAREN,
    ACTIONS(570), 1,
      sym_COMMA,
  [6677] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(268), 1,
      sym_RBRACKET,
    ACTIONS(550), 1,
      sym_COMMA,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(572), 2,
      sym_COMMA,
      sym_GT,
  [6695] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(574), 1,
      sym_COMMA,
    ACTIONS(576), 1,
      sym_IF,
  [6705] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(578), 1,
      sym_LPAREN,
    ACTIONS(580), 1,
      sym_COMMA,
  [6715] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(550), 1,
      sym_COMMA,
    ACTIONS(582), 1,
      sym_RPAREN,
  [6725] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(584), 2,
      sym_RPAREN,
      sym_COMMA,
  [6733] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(514), 1,
      sym_DOT,
    ACTIONS(582), 1,
      sym_RPAREN,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(586), 2,
      sym_RPAREN,
      sym_COMMA,
  [6751] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(588), 1,
      sym_RPAREN,
    ACTIONS(590), 1,
      sym_COMMA,
  [6761] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(558), 1,
      sym_COMMA,
    ACTIONS(592), 1,
      sym_RPAREN,
  [6771] = 3,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(594), 1,
      sym_COMMA,
    ACTIONS(596), 1,
      sym_GT,
  [6781] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(598), 2,
      sym_COMMA,
      sym_GT,
  [6789] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(600), 2,
      sym_RPAREN,
      sym_COMMA,
  [6797] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(602), 2,
      sym_RPAREN,
      sym_COMMA,
  [6805] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(604), 2,
      sym_RPAREN,
      sym_COMMA,
  [6813] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(606), 1,
      sym_COLON,
  [6820] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(608), 1,
      sym_COLON,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
  [6834] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(612), 1,
      sym_STRING,
  [6841] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(614), 1,
      sym_LPAREN,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
  [6855] = 2,
    ACTIONS(618), 1,
      sym_COMMENT,
    ACTIONS(620), 1,
      aux_sym_define_token1,
  [6862] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(622), 1,
      sym_EQUALS,
  [6869] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(624), 1,
      sym_DOT,
  [6876] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(626), 1,
      sym_LPAREN,
  [6883] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(628), 1,
      sym_COLON,
  [6890] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(630), 1,
      sym_COLON,
  [6897] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(632), 1,
      anon_sym_DQUOTE,
  [6904] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(634), 1,
      sym_COLON,
  [6911] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
  [6918] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(638), 1,
      sym_LPAREN,
  [6925] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(582), 1,
      sym_RBRACE,
  [6932] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(640), 1,
      sym_EQUALS,
  [6939] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(642), 1,
      sym_LPAREN,
  [6946] = 2,
    ACTIONS(618), 1,
      sym_COMMENT,
    ACTIONS(644), 1,
      sym_filename,
  [6953] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(646), 1,
      sym_COLON,
  [6960] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(648), 1,
      sym_LPAREN,
  [6967] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(650), 1,
      sym_LPAREN,
  [6974] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(652), 1,
      sym_LPAREN,
  [6981] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(654), 1,
      sym_LPAREN,
  [6988] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(656), 1,
      sym_LPAREN,
  [6995] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(658), 1,
      sym_COLON,
  [7002] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(660), 1,
      sym_COLON,
  [7009] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(662), 1,
      sym_COLON,
  [7016] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(664), 1,
      sym_EQUALS,
  [7023] = 2,
    ACTIONS(618), 1,
      sym_COMMENT,
    ACTIONS(666), 1,
      sym_filename,
  [7030] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(668), 1,
      sym_EQUALS,
  [7037] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
  [7044] = 2,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(548), 1,
      sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 108,
  [SMALL_STATE(4)] = 216,
  [SMALL_STATE(5)] = 324,
  [SMALL_STATE(6)] = 429,
  [SMALL_STATE(7)] = 531,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 729,
  [SMALL_STATE(10)] = 811,
  [SMALL_STATE(11)] = 893,
  [SMALL_STATE(12)] = 975,
  [SMALL_STATE(13)] = 1062,
  [SMALL_STATE(14)] = 1149,
  [SMALL_STATE(15)] = 1228,
  [SMALL_STATE(16)] = 1304,
  [SMALL_STATE(17)] = 1380,
  [SMALL_STATE(18)] = 1456,
  [SMALL_STATE(19)] = 1532,
  [SMALL_STATE(20)] = 1608,
  [SMALL_STATE(21)] = 1684,
  [SMALL_STATE(22)] = 1760,
  [SMALL_STATE(23)] = 1836,
  [SMALL_STATE(24)] = 1912,
  [SMALL_STATE(25)] = 1988,
  [SMALL_STATE(26)] = 2064,
  [SMALL_STATE(27)] = 2140,
  [SMALL_STATE(28)] = 2216,
  [SMALL_STATE(29)] = 2292,
  [SMALL_STATE(30)] = 2368,
  [SMALL_STATE(31)] = 2444,
  [SMALL_STATE(32)] = 2520,
  [SMALL_STATE(33)] = 2557,
  [SMALL_STATE(34)] = 2600,
  [SMALL_STATE(35)] = 2643,
  [SMALL_STATE(36)] = 2683,
  [SMALL_STATE(37)] = 2719,
  [SMALL_STATE(38)] = 2755,
  [SMALL_STATE(39)] = 2825,
  [SMALL_STATE(40)] = 2865,
  [SMALL_STATE(41)] = 2935,
  [SMALL_STATE(42)] = 2971,
  [SMALL_STATE(43)] = 3041,
  [SMALL_STATE(44)] = 3076,
  [SMALL_STATE(45)] = 3111,
  [SMALL_STATE(46)] = 3146,
  [SMALL_STATE(47)] = 3181,
  [SMALL_STATE(48)] = 3222,
  [SMALL_STATE(49)] = 3257,
  [SMALL_STATE(50)] = 3292,
  [SMALL_STATE(51)] = 3327,
  [SMALL_STATE(52)] = 3362,
  [SMALL_STATE(53)] = 3397,
  [SMALL_STATE(54)] = 3433,
  [SMALL_STATE(55)] = 3465,
  [SMALL_STATE(56)] = 3498,
  [SMALL_STATE(57)] = 3528,
  [SMALL_STATE(58)] = 3558,
  [SMALL_STATE(59)] = 3587,
  [SMALL_STATE(60)] = 3618,
  [SMALL_STATE(61)] = 3647,
  [SMALL_STATE(62)] = 3684,
  [SMALL_STATE(63)] = 3713,
  [SMALL_STATE(64)] = 3742,
  [SMALL_STATE(65)] = 3771,
  [SMALL_STATE(66)] = 3800,
  [SMALL_STATE(67)] = 3829,
  [SMALL_STATE(68)] = 3859,
  [SMALL_STATE(69)] = 3893,
  [SMALL_STATE(70)] = 3921,
  [SMALL_STATE(71)] = 3949,
  [SMALL_STATE(72)] = 3977,
  [SMALL_STATE(73)] = 4007,
  [SMALL_STATE(74)] = 4035,
  [SMALL_STATE(75)] = 4064,
  [SMALL_STATE(76)] = 4095,
  [SMALL_STATE(77)] = 4122,
  [SMALL_STATE(78)] = 4149,
  [SMALL_STATE(79)] = 4176,
  [SMALL_STATE(80)] = 4203,
  [SMALL_STATE(81)] = 4232,
  [SMALL_STATE(82)] = 4259,
  [SMALL_STATE(83)] = 4286,
  [SMALL_STATE(84)] = 4317,
  [SMALL_STATE(85)] = 4344,
  [SMALL_STATE(86)] = 4371,
  [SMALL_STATE(87)] = 4398,
  [SMALL_STATE(88)] = 4429,
  [SMALL_STATE(89)] = 4456,
  [SMALL_STATE(90)] = 4483,
  [SMALL_STATE(91)] = 4510,
  [SMALL_STATE(92)] = 4537,
  [SMALL_STATE(93)] = 4568,
  [SMALL_STATE(94)] = 4596,
  [SMALL_STATE(95)] = 4624,
  [SMALL_STATE(96)] = 4649,
  [SMALL_STATE(97)] = 4678,
  [SMALL_STATE(98)] = 4707,
  [SMALL_STATE(99)] = 4732,
  [SMALL_STATE(100)] = 4757,
  [SMALL_STATE(101)] = 4782,
  [SMALL_STATE(102)] = 4807,
  [SMALL_STATE(103)] = 4832,
  [SMALL_STATE(104)] = 4857,
  [SMALL_STATE(105)] = 4882,
  [SMALL_STATE(106)] = 4907,
  [SMALL_STATE(107)] = 4937,
  [SMALL_STATE(108)] = 4963,
  [SMALL_STATE(109)] = 4989,
  [SMALL_STATE(110)] = 5016,
  [SMALL_STATE(111)] = 5043,
  [SMALL_STATE(112)] = 5070,
  [SMALL_STATE(113)] = 5097,
  [SMALL_STATE(114)] = 5124,
  [SMALL_STATE(115)] = 5151,
  [SMALL_STATE(116)] = 5178,
  [SMALL_STATE(117)] = 5205,
  [SMALL_STATE(118)] = 5232,
  [SMALL_STATE(119)] = 5257,
  [SMALL_STATE(120)] = 5282,
  [SMALL_STATE(121)] = 5309,
  [SMALL_STATE(122)] = 5336,
  [SMALL_STATE(123)] = 5363,
  [SMALL_STATE(124)] = 5390,
  [SMALL_STATE(125)] = 5414,
  [SMALL_STATE(126)] = 5435,
  [SMALL_STATE(127)] = 5456,
  [SMALL_STATE(128)] = 5477,
  [SMALL_STATE(129)] = 5496,
  [SMALL_STATE(130)] = 5517,
  [SMALL_STATE(131)] = 5539,
  [SMALL_STATE(132)] = 5559,
  [SMALL_STATE(133)] = 5579,
  [SMALL_STATE(134)] = 5601,
  [SMALL_STATE(135)] = 5623,
  [SMALL_STATE(136)] = 5645,
  [SMALL_STATE(137)] = 5667,
  [SMALL_STATE(138)] = 5689,
  [SMALL_STATE(139)] = 5708,
  [SMALL_STATE(140)] = 5721,
  [SMALL_STATE(141)] = 5732,
  [SMALL_STATE(142)] = 5751,
  [SMALL_STATE(143)] = 5764,
  [SMALL_STATE(144)] = 5777,
  [SMALL_STATE(145)] = 5790,
  [SMALL_STATE(146)] = 5809,
  [SMALL_STATE(147)] = 5820,
  [SMALL_STATE(148)] = 5837,
  [SMALL_STATE(149)] = 5848,
  [SMALL_STATE(150)] = 5859,
  [SMALL_STATE(151)] = 5870,
  [SMALL_STATE(152)] = 5883,
  [SMALL_STATE(153)] = 5902,
  [SMALL_STATE(154)] = 5913,
  [SMALL_STATE(155)] = 5924,
  [SMALL_STATE(156)] = 5935,
  [SMALL_STATE(157)] = 5948,
  [SMALL_STATE(158)] = 5959,
  [SMALL_STATE(159)] = 5973,
  [SMALL_STATE(160)] = 5989,
  [SMALL_STATE(161)] = 6005,
  [SMALL_STATE(162)] = 6021,
  [SMALL_STATE(163)] = 6035,
  [SMALL_STATE(164)] = 6051,
  [SMALL_STATE(165)] = 6067,
  [SMALL_STATE(166)] = 6083,
  [SMALL_STATE(167)] = 6097,
  [SMALL_STATE(168)] = 6113,
  [SMALL_STATE(169)] = 6129,
  [SMALL_STATE(170)] = 6145,
  [SMALL_STATE(171)] = 6161,
  [SMALL_STATE(172)] = 6177,
  [SMALL_STATE(173)] = 6193,
  [SMALL_STATE(174)] = 6209,
  [SMALL_STATE(175)] = 6225,
  [SMALL_STATE(176)] = 6241,
  [SMALL_STATE(177)] = 6254,
  [SMALL_STATE(178)] = 6267,
  [SMALL_STATE(179)] = 6280,
  [SMALL_STATE(180)] = 6289,
  [SMALL_STATE(181)] = 6302,
  [SMALL_STATE(182)] = 6315,
  [SMALL_STATE(183)] = 6328,
  [SMALL_STATE(184)] = 6341,
  [SMALL_STATE(185)] = 6354,
  [SMALL_STATE(186)] = 6367,
  [SMALL_STATE(187)] = 6380,
  [SMALL_STATE(188)] = 6391,
  [SMALL_STATE(189)] = 6404,
  [SMALL_STATE(190)] = 6417,
  [SMALL_STATE(191)] = 6430,
  [SMALL_STATE(192)] = 6441,
  [SMALL_STATE(193)] = 6454,
  [SMALL_STATE(194)] = 6467,
  [SMALL_STATE(195)] = 6478,
  [SMALL_STATE(196)] = 6487,
  [SMALL_STATE(197)] = 6500,
  [SMALL_STATE(198)] = 6511,
  [SMALL_STATE(199)] = 6524,
  [SMALL_STATE(200)] = 6535,
  [SMALL_STATE(201)] = 6546,
  [SMALL_STATE(202)] = 6557,
  [SMALL_STATE(203)] = 6565,
  [SMALL_STATE(204)] = 6573,
  [SMALL_STATE(205)] = 6583,
  [SMALL_STATE(206)] = 6593,
  [SMALL_STATE(207)] = 6603,
  [SMALL_STATE(208)] = 6613,
  [SMALL_STATE(209)] = 6621,
  [SMALL_STATE(210)] = 6629,
  [SMALL_STATE(211)] = 6639,
  [SMALL_STATE(212)] = 6649,
  [SMALL_STATE(213)] = 6657,
  [SMALL_STATE(214)] = 6667,
  [SMALL_STATE(215)] = 6677,
  [SMALL_STATE(216)] = 6687,
  [SMALL_STATE(217)] = 6695,
  [SMALL_STATE(218)] = 6705,
  [SMALL_STATE(219)] = 6715,
  [SMALL_STATE(220)] = 6725,
  [SMALL_STATE(221)] = 6733,
  [SMALL_STATE(222)] = 6743,
  [SMALL_STATE(223)] = 6751,
  [SMALL_STATE(224)] = 6761,
  [SMALL_STATE(225)] = 6771,
  [SMALL_STATE(226)] = 6781,
  [SMALL_STATE(227)] = 6789,
  [SMALL_STATE(228)] = 6797,
  [SMALL_STATE(229)] = 6805,
  [SMALL_STATE(230)] = 6813,
  [SMALL_STATE(231)] = 6820,
  [SMALL_STATE(232)] = 6827,
  [SMALL_STATE(233)] = 6834,
  [SMALL_STATE(234)] = 6841,
  [SMALL_STATE(235)] = 6848,
  [SMALL_STATE(236)] = 6855,
  [SMALL_STATE(237)] = 6862,
  [SMALL_STATE(238)] = 6869,
  [SMALL_STATE(239)] = 6876,
  [SMALL_STATE(240)] = 6883,
  [SMALL_STATE(241)] = 6890,
  [SMALL_STATE(242)] = 6897,
  [SMALL_STATE(243)] = 6904,
  [SMALL_STATE(244)] = 6911,
  [SMALL_STATE(245)] = 6918,
  [SMALL_STATE(246)] = 6925,
  [SMALL_STATE(247)] = 6932,
  [SMALL_STATE(248)] = 6939,
  [SMALL_STATE(249)] = 6946,
  [SMALL_STATE(250)] = 6953,
  [SMALL_STATE(251)] = 6960,
  [SMALL_STATE(252)] = 6967,
  [SMALL_STATE(253)] = 6974,
  [SMALL_STATE(254)] = 6981,
  [SMALL_STATE(255)] = 6988,
  [SMALL_STATE(256)] = 6995,
  [SMALL_STATE(257)] = 7002,
  [SMALL_STATE(258)] = 7009,
  [SMALL_STATE(259)] = 7016,
  [SMALL_STATE(260)] = 7023,
  [SMALL_STATE(261)] = 7030,
  [SMALL_STATE(262)] = 7037,
  [SMALL_STATE(263)] = 7044,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(164),
  [9] = {.count = 1, .reusable = true}, SHIFT(181),
  [11] = {.count = 1, .reusable = true}, SHIFT(135),
  [13] = {.count = 1, .reusable = true}, SHIFT(184),
  [15] = {.count = 1, .reusable = true}, SHIFT(169),
  [17] = {.count = 1, .reusable = true}, SHIFT(177),
  [19] = {.count = 1, .reusable = true}, SHIFT(190),
  [21] = {.count = 1, .reusable = true}, SHIFT(233),
  [23] = {.count = 1, .reusable = false}, SHIFT(32),
  [25] = {.count = 1, .reusable = true}, SHIFT(32),
  [27] = {.count = 1, .reusable = true}, SHIFT(232),
  [29] = {.count = 1, .reusable = true}, SHIFT(166),
  [31] = {.count = 1, .reusable = true}, SHIFT(236),
  [33] = {.count = 1, .reusable = false}, SHIFT(30),
  [35] = {.count = 1, .reusable = false}, SHIFT(255),
  [37] = {.count = 1, .reusable = false}, SHIFT(254),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(234),
  [43] = {.count = 1, .reusable = false}, SHIFT(245),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = false}, SHIFT(239),
  [49] = {.count = 1, .reusable = false}, SHIFT(51),
  [51] = {.count = 1, .reusable = false}, SHIFT(241),
  [53] = {.count = 1, .reusable = false}, SHIFT(150),
  [55] = {.count = 1, .reusable = true}, SHIFT(10),
  [57] = {.count = 1, .reusable = true}, SHIFT(51),
  [59] = {.count = 1, .reusable = true}, SHIFT(5),
  [61] = {.count = 1, .reusable = true}, SHIFT(7),
  [63] = {.count = 1, .reusable = true}, SHIFT(185),
  [65] = {.count = 1, .reusable = false}, SHIFT(37),
  [67] = {.count = 1, .reusable = true}, SHIFT(37),
  [69] = {.count = 1, .reusable = true}, SHIFT(17),
  [71] = {.count = 1, .reusable = true}, SHIFT(48),
  [73] = {.count = 1, .reusable = true}, SHIFT(50),
  [75] = {.count = 1, .reusable = true}, SHIFT(36),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [120] = {.count = 1, .reusable = true}, SHIFT(18),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_IDENT, 1),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_IDENT, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 4),
  [128] = {.count = 1, .reusable = false}, SHIFT(39),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 4),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 5),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 5),
  [136] = {.count = 1, .reusable = true}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2), SHIFT_REPEAT(35),
  [141] = {.count = 1, .reusable = false}, REDUCE(aux_sym_relation_tags_repeat1, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 3),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 3),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_NUMBER, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_NUMBER, 1),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(164),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(137),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(180),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(169),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(182),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(189),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(193),
  [172] = {.count = 1, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(32),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(32),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_relation_tags, 1),
  [182] = {.count = 1, .reusable = false}, SHIFT(35),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_relation_tags, 1),
  [186] = {.count = 1, .reusable = true}, SHIFT(137),
  [188] = {.count = 1, .reusable = true}, SHIFT(180),
  [190] = {.count = 1, .reusable = true}, SHIFT(182),
  [192] = {.count = 1, .reusable = true}, SHIFT(189),
  [194] = {.count = 1, .reusable = true}, SHIFT(193),
  [196] = {.count = 1, .reusable = true}, SHIFT(79),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 4),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 4),
  [202] = {.count = 1, .reusable = true}, SHIFT(90),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 6),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 6),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 3),
  [216] = {.count = 1, .reusable = true}, SHIFT(23),
  [218] = {.count = 1, .reusable = false}, SHIFT(23),
  [220] = {.count = 1, .reusable = true}, SHIFT(26),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 4),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 8),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 8),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 5),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 1),
  [240] = {.count = 1, .reusable = true}, SHIFT(175),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_comp_type, 2),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_comp_type, 2),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_type_params, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_type_params, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 5),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 5),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan, 2),
  [260] = {.count = 1, .reusable = true}, SHIFT(162),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 7),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 7),
  [268] = {.count = 1, .reusable = true}, SHIFT(45),
  [270] = {.count = 1, .reusable = true}, SHIFT(15),
  [272] = {.count = 1, .reusable = false}, SHIFT(15),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 6),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 6),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_type, 1),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_predefined_type, 1),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_exec_plan_list, 4),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_exec_plan_list, 4),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 3),
  [294] = {.count = 1, .reusable = false}, SHIFT(183),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_rule_def, 4),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_rule_def, 4),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_io_relation_list, 1),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_io_relation_list, 1),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 1),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 1),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 3),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(138),
  [322] = {.count = 1, .reusable = true}, SHIFT(173),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 1),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_comp_init, 4),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_comp_init, 4),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_type, 5),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_type, 5),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_component, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_component, 3),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_union_type_list, 1),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_union_type_list, 1),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_type, 4),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_type, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 2),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_fact, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_unit, 1),
  [356] = {.count = 1, .reusable = true}, SHIFT(147),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_unit, 1),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_type, 6),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_type, 6),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_relation_decl, 6),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_relation_decl, 6),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_io_head, 2),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_io_head, 2),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_component, 4),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_component, 4),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_io_directive_list, 4),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_io_directive_list, 4),
  [386] = {.count = 1, .reusable = true}, SHIFT(151),
  [388] = {.count = 1, .reusable = true}, SHIFT(136),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 2),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 2),
  [394] = {.count = 1, .reusable = true}, SHIFT(102),
  [396] = {.count = 1, .reusable = true}, SHIFT(174),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_line, 5),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_line, 5),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 1),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_arg_list, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 6),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 6),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_functor_decl, 7),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_functor_decl, 7),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_define, 2),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_define, 2),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_pragma, 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_pragma, 3),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_include, 4),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_include, 4),
  [426] = {.count = 1, .reusable = true}, SHIFT(14),
  [428] = {.count = 1, .reusable = false}, SHIFT(176),
  [430] = {.count = 1, .reusable = true}, SHIFT(21),
  [432] = {.count = 1, .reusable = true}, SHIFT(133),
  [434] = {.count = 1, .reusable = true}, SHIFT(130),
  [436] = {.count = 1, .reusable = true}, SHIFT(172),
  [438] = {.count = 1, .reusable = true}, SHIFT(159),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 1),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 1),
  [444] = {.count = 1, .reusable = true}, SHIFT(49),
  [446] = {.count = 1, .reusable = true}, SHIFT(153),
  [448] = {.count = 1, .reusable = true}, SHIFT(19),
  [450] = {.count = 1, .reusable = true}, SHIFT(25),
  [452] = {.count = 1, .reusable = true}, SHIFT(168),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_component_body, 2),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_component_body, 2),
  [458] = {.count = 1, .reusable = false}, SHIFT(203),
  [460] = {.count = 1, .reusable = true}, SHIFT(203),
  [462] = {.count = 1, .reusable = true}, SHIFT(231),
  [464] = {.count = 1, .reusable = true}, SHIFT(64),
  [466] = {.count = 1, .reusable = true}, SHIFT(152),
  [468] = {.count = 1, .reusable = false}, SHIFT(71),
  [470] = {.count = 1, .reusable = true}, SHIFT(71),
  [472] = {.count = 1, .reusable = true}, SHIFT(62),
  [474] = {.count = 1, .reusable = true}, SHIFT(66),
  [476] = {.count = 1, .reusable = true}, SHIFT(3),
  [478] = {.count = 1, .reusable = true}, SHIFT(4),
  [480] = {.count = 1, .reusable = false}, SHIFT(54),
  [482] = {.count = 1, .reusable = true}, SHIFT(54),
  [484] = {.count = 1, .reusable = true}, SHIFT(88),
  [486] = {.count = 1, .reusable = true}, SHIFT(33),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 3),
  [490] = {.count = 1, .reusable = true}, SHIFT(8),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 1),
  [500] = {.count = 1, .reusable = true}, SHIFT(77),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_constraint, 6),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 1),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_term, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 2),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 3),
  [514] = {.count = 1, .reusable = true}, SHIFT(196),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 5),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_attributes, 5),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_component_head, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_record_type_list, 3),
  [524] = {.count = 1, .reusable = true}, SHIFT(160),
  [526] = {.count = 1, .reusable = true}, SHIFT(40),
  [528] = {.count = 1, .reusable = true}, SHIFT(6),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [534] = {.count = 1, .reusable = true}, SHIFT(82),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 1),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_kvp_value, 1),
  [540] = {.count = 1, .reusable = true}, SHIFT(157),
  [542] = {.count = 1, .reusable = true}, SHIFT(11),
  [544] = {.count = 1, .reusable = true}, SHIFT(84),
  [546] = {.count = 1, .reusable = true}, SHIFT(198),
  [548] = {.count = 1, .reusable = true}, SHIFT(52),
  [550] = {.count = 1, .reusable = true}, SHIFT(22),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_head, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 1),
  [556] = {.count = 1, .reusable = true}, SHIFT(58),
  [558] = {.count = 1, .reusable = true}, SHIFT(158),
  [560] = {.count = 1, .reusable = true}, SHIFT(34),
  [562] = {.count = 1, .reusable = true}, SHIFT(192),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_relation_list, 3),
  [566] = {.count = 1, .reusable = true}, SHIFT(41),
  [568] = {.count = 1, .reusable = true}, SHIFT(258),
  [570] = {.count = 1, .reusable = true}, SHIFT(143),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 3),
  [574] = {.count = 1, .reusable = true}, SHIFT(145),
  [576] = {.count = 1, .reusable = true}, SHIFT(2),
  [578] = {.count = 1, .reusable = true}, SHIFT(141),
  [580] = {.count = 1, .reusable = true}, SHIFT(186),
  [582] = {.count = 1, .reusable = true}, SHIFT(43),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_functor_arg_type_list, 1),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_functor_arg_type_list, 3),
  [588] = {.count = 1, .reusable = true}, SHIFT(91),
  [590] = {.count = 1, .reusable = true}, SHIFT(188),
  [592] = {.count = 1, .reusable = true}, SHIFT(60),
  [594] = {.count = 1, .reusable = true}, SHIFT(178),
  [596] = {.count = 1, .reusable = true}, SHIFT(57),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_type_param_list, 1),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_exec_order_list, 3),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 5),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_non_empty_key_value_pairs, 3),
  [606] = {.count = 1, .reusable = true}, SHIFT(165),
  [608] = {.count = 1, .reusable = true}, SHIFT(156),
  [610] = {.count = 1, .reusable = true}, SHIFT(260),
  [612] = {.count = 1, .reusable = true}, SHIFT(93),
  [614] = {.count = 1, .reusable = true}, SHIFT(24),
  [616] = {.count = 1, .reusable = true}, SHIFT(95),
  [618] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [620] = {.count = 1, .reusable = false}, SHIFT(101),
  [622] = {.count = 1, .reusable = true}, SHIFT(127),
  [624] = {.count = 1, .reusable = true}, SHIFT(70),
  [626] = {.count = 1, .reusable = true}, SHIFT(20),
  [628] = {.count = 1, .reusable = true}, SHIFT(161),
  [630] = {.count = 1, .reusable = true}, SHIFT(134),
  [632] = {.count = 1, .reusable = true}, SHIFT(105),
  [634] = {.count = 1, .reusable = true}, SHIFT(253),
  [636] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [638] = {.count = 1, .reusable = true}, SHIFT(31),
  [640] = {.count = 1, .reusable = true}, SHIFT(129),
  [642] = {.count = 1, .reusable = true}, SHIFT(128),
  [644] = {.count = 1, .reusable = false}, SHIFT(235),
  [646] = {.count = 1, .reusable = true}, SHIFT(251),
  [648] = {.count = 1, .reusable = true}, SHIFT(132),
  [650] = {.count = 1, .reusable = true}, SHIFT(9),
  [652] = {.count = 1, .reusable = true}, SHIFT(131),
  [654] = {.count = 1, .reusable = true}, SHIFT(28),
  [656] = {.count = 1, .reusable = true}, SHIFT(29),
  [658] = {.count = 1, .reusable = true}, SHIFT(167),
  [660] = {.count = 1, .reusable = true}, SHIFT(163),
  [662] = {.count = 1, .reusable = true}, SHIFT(139),
  [664] = {.count = 1, .reusable = true}, SHIFT(171),
  [666] = {.count = 1, .reusable = false}, SHIFT(242),
  [668] = {.count = 1, .reusable = true}, SHIFT(170),
  [670] = {.count = 1, .reusable = true}, SHIFT(249),
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
