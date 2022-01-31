
module.exports = grammar({
    name: 'souffle',
  
	  extras: $ => [
	  	/\s/,
	  	$.COMMENT,
    ],

    rules: {
      source_file: $ => repeat($.unit),

      DECL : $ => ".decl",
      FUNCTOR: $ => ".functor",
      INPUT_DECL: $ => ".input",
      OUTPUT_DECL: $ => ".output",
      PRINTSIZE_DECL: $ => ".printsize",
      TYPE: $ => ".type",
      COMPONENT: $ => ".comp",
      INSTANTIATE: $ => ".init",
      NUMBER_TYPE: $ => ".number_type",
      SYMBOL_TYPE: $ => ".symbol_type",
      OVERRIDE: $ => ".override",
      PRAGMA: $ => ".pragma",
      BW_AND: $ => "band",
      BW_OR: $ => "bor",
      BW_XOR: $ => "bxor",
      BW_NOT: $ => "bnot",
      BW_SHIFT_L: $ => "bshl",
      BW_SHIFT_R: $ => "bshr",
      BW_SHIFT_R_UNSIGNED: $ => "bshru",
      L_AND: $ => "land",
      L_OR: $ => "lor",
      L_NOT: $ => "lnot",
      ITOU: $ => "itou",
      ITOF: $ => "itof",
      UTOI: $ => "utoi",
      UTOF: $ => "utof",
      FTOI: $ => "ftoi",
      FTOU: $ => "ftou",
      TMATCH: $ => "match",
      MEAN: $ => "mean",
      CAT: $ => "cat",
      ORD: $ => "ord",
	  RANGE: $ => "range",
      STRLEN: $ => "strlen",
      SUBSTR: $ => "substr",
      TCONTAINS: $ => "contains",
      OUTPUT_QUALIFIER: $ => "output",
      INPUT_QUALIFIER: $ => "input",
      OVERRIDABLE_QUALIFIER: $ => "overridable",
      PRINTSIZE_QUALIFIER: $ => "printsize",
      EQREL_QUALIFIER: $ => "eqrel",
      INLINE_QUALIFIER: $ => "inline",
      BRIE_QUALIFIER: $ => "brie",
      BTREE_QUALIFIER: $ => "btree",
      BTREE_DELETE_QUALIFIER: $ => "btree_delete",
      MIN: $ => "min",
      MAX: $ => "max",
      AS: $ => "as",
      NIL: $ => "nil",
      UNDERSCORE: $ => "_",
      COUNT: $ => "count",
      SUM: $ => "sum",
      TRUE: $ => "true",
      FALSE: $ => "false",
      TOSTRING: $ => "to_string",
      TONUMBER: $ => "to_number",
	  TOFLOAT: $ => "to_float",
	  TOUNSIGNED: $ => "to_unsigned",
      PLAN: $ => ".plan",
      PIPE: $ => "|",
      LBRACKET: $ => "[",
      RBRACKET: $ => "]",
      DOLLAR: $ => "$",
      PLUS: $ => "+",
      MINUS: $ => "-",
      LPAREN: $ => "(",
      RPAREN: $ => ")",
      COMMA: $ => ",",
      COLON: $ => ":",
      SEMICOLON: $ => ";",
      DOT: $ => ".",
      SUBTYPE: $ => "<:",
      LE: $ => "<=",
      GE: $ => ">=",
      NE: $ => "!=",
      EQUALS: $ => "=",
      EXCLAMATION: $ => "!",
      STAR: $ => "*",
      AT: $ => "@",
      SLASH: $ => "/",
      CARET: $ => "^",
      PERCENT: $ => "%",
      LBRACE: $ => "{",
      RBRACE: $ => "}",
      LT: $ => "<",
      GT: $ => ">",
      IF: $ => ":-",

	  INPUT: $ => 'INPUT',
	  OUTPUT: $ => 'OUTPUT',
	  CPP_VAR: $ => /CPP_[A-Z]*/,

	  io_macro: $ => seq(
		choice($.INPUT, $.OUTPUT, $.CPP_VAR),
		$.LPAREN,
		$.identifier,
		$.RPAREN,
	  ),

      IDENT: $ => choice(
        /\+underscore_\d+/,
        /@generator_\d+/,
        /[?a-zA-Z]/, 
        /[_?a-zA-Z][_?a-zA-Z\d]+/,
      ),

      NUMBER: $ => choice(
        /\d+/, 
        /0b\d+/,
        /0x\d+/,
      ),

      FLOAT: $ => /\d+\.\d+/,

      STRING: $ => /"[^"]*"/,

      unit: $ => choice(
		$.io_macro,
        $.type,
        $.functor_decl,
        $.relation_decl,
        $.io_head,
        $.fact,
        $.rule,
        $.component,
        $.comp_init,
        $.pragma,
        $.include,
        $.line,
        $.define,
      ),

      // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      COMMENT: $ => token(choice(
        seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        )
      )),

      LOC: $ => token(
        seq('.loc ', /(\\(.|\r?\n)|[^\\\n])*/),
      ),

      include: $ => seq(
        "#include",
        '"',
        $.filename,
        '"'
      ),

      line: $ => seq(
        "#line",
        $.NUMBER,
        '"',
        $.filename,
        '"'
      ),

      define: $ => seq(
        "#define",
        /[^\r\n]*/
      ),

      filename: $ => /[^"]*/,

      identifier: $ => choice(
        $.IDENT,
        seq($.identifier, $.DOT, $.IDENT)
      ),

      type: $ => choice(
        seq($.TYPE, $.IDENT, $.SUBTYPE, $.IDENT),
        seq($.NUMBER_TYPE, $.IDENT),
        seq($.SYMBOL_TYPE, $.IDENT),
        seq($.TYPE, $.IDENT),
        seq($.TYPE, $.IDENT, $.EQUALS, $.union_type_list),
        seq($.TYPE, $.IDENT, $.EQUALS, $.LBRACKET, $.RBRACKET),
        seq($.TYPE, $.IDENT, $.EQUALS, $.LBRACKET, $.non_empty_record_type_list, $.RBRACKET),
        seq($.TYPE, $.IDENT, $.EQUALS, $.non_empty_sum_branch_list),
      ),

      non_empty_sum_branch_list : $ => choice(
        $.sum_branch,
        //seq($.non_empty_sum_branch_list, $.PIPE, $.sum_branch),
        seq($.sum_branch, $.PIPE, $.non_empty_sum_branch_list),
      ),

      non_empty_record_type_list : $ => choice(
        seq($.IDENT, $.COLON, $.identifier),
        seq($.non_empty_record_type_list, $.COMMA, $.IDENT, $.COLON, $.identifier),
      ),

      union_type_list : $ => choice(
        $.identifier,
        seq($.union_type_list, $.PIPE, $.identifier)
      ),

	  sum_branch : $ =>
		seq($.IDENT, $.LBRACE, optional($.non_empty_attributes), $.RBRACE),

      relation_decl: $ => choice(
        seq($.DECL, $.relation_list, $.LPAREN, $.RPAREN, optional($.relation_tags)),
        seq($.DECL, $.relation_list, $.LPAREN, $.non_empty_attributes, $.RPAREN, optional($.relation_tags)),
      ),

      relation_list: $ => choice(
        $.IDENT,
        seq($.relation_list, $.COMMA, $.IDENT)
      ),

      non_empty_attributes : $ => choice(
        seq($.IDENT, $.COLON, $.identifier),
        seq($.non_empty_attributes, $.COMMA, $.IDENT, $.COLON, $.identifier)
      ),

      relation_tags: $ => repeat1(choice(
        $.OUTPUT_QUALIFIER,
        $.INPUT_QUALIFIER,
        $.PRINTSIZE_QUALIFIER,
        $.OVERRIDABLE_QUALIFIER,
        $.INLINE_QUALIFIER,
        $.BRIE_QUALIFIER,
        $.BTREE_QUALIFIER,
        $.BTREE_DELETE_QUALIFIER,
        $.EQREL_QUALIFIER,
      )),

      fact: $ => seq($.atom, $.DOT),

      rule: $ => seq($.rule_def, optional($.exec_plan), optional($.LOC)),

      rule_def: $ => choice(
        seq($.head, $.IF, $.body, $.DOT),
        seq($.atom, $.LE, $.atom, $.IF, $.body, $.DOT)
      ),

      head: $ => choice(
        $.atom,
        seq($.head, $.COMMA, $.atom)
      ),

      body: $ => $.disjunction,

      disjunction: $ => choice(
        $.conjunction,
        seq($.disjunction, $.SEMICOLON, $.conjunction)
      ),

      conjunction: $ => choice(
        $.term,
        seq($.conjunction, $.COMMA, $.term)
      ),

      exec_plan: $ => seq($.PLAN, $.exec_plan_list),

      exec_plan_list: $ => choice(
        $.plan_item,
        seq($.plan_item, $.COMMA, $.exec_plan_list)
      ),

      plan_item: $ => choice(
        seq($.NUMBER, $.COLON, $.LPAREN, optional($.exec_order_list), $.RPAREN),
        seq("sips", $.COLON, $.STRING),
        seq($.LPAREN, $.identifier_list, $.RPAREN, $.COLON, $.LPAREN, optional($.exec_order_list), $.RPAREN),
      ),

      identifier_list : $ => choice(
        $.identifier,
        seq($.AT, $.identifier),
        seq($.identifier, $.COMMA, $.identifier_list),
        seq($.AT, $.identifier, $.COMMA, $.identifier_list)
      ),

      exec_order_list: $ => choice(
        $.NUMBER,
        seq($.exec_order_list, $.COMMA, $.NUMBER),
      ),

      term: $ => choice(
        $.atom,
        $.constraint,
        seq($.EXCLAMATION, $.term),
        seq($.LPAREN, $.disjunction, $.RPAREN),
      ),

      atom: $ => seq($.identifier, $.LPAREN, optional($.non_empty_arg_list), $.RPAREN),

      constraint: $ => choice(
        seq($.arg, $.LT, $.arg),
        seq($.arg, $.GT, $.arg),
        seq($.arg, $.LE, $.arg),
        seq($.arg, $.GE, $.arg),
        seq($.arg, $.EQUALS, $.arg),
        seq($.arg, $.NE, $.arg),
        seq($.TMATCH, $.LPAREN, $.arg, $.COMMA, $.arg, $.RPAREN),
        seq($.TCONTAINS, $.LPAREN, $.arg, $.COMMA, $.arg, $.RPAREN),
        $.TRUE,
        $.FALSE
      ),

      non_empty_arg_list: $ => choice(
        $.arg,
        seq($.non_empty_arg_list, $.COMMA, $.arg)
      ),

      arg: $ => choice(
        $.STRING,
        $.FLOAT,
        $.NUMBER,
        $.UNDERSCORE,
        $.DOLLAR,
        $.IDENT,
        seq($.LPAREN, $.arg, $.RPAREN),
        seq($.AS, $.LPAREN, $.arg, $.COMMA, $.identifier, $.RPAREN),
        $.NIL,
        seq($.LBRACKET, optional($.non_empty_arg_list), $.RBRACKET),
        seq($.DOLLAR, $.identifier, $.LPAREN, optional($.non_empty_arg_list), $.RPAREN),
        //seq($.DOLLAR, $.identifier),
        seq($.AT, $.IDENT, $.LPAREN, optional($.non_empty_arg_list), $.RPAREN),
        seq($.functor_built_in, $.LPAREN, optional($.non_empty_arg_list), $.RPAREN),
        //seq($.MINUS, $.arg, prec(1,$.NEG)),
        prec.left(choice(
        seq($.MINUS, $.arg),
        seq($.arg, $.PLUS, $.arg),
        seq($.arg, $.MINUS, $.arg),
        seq($.arg, $.STAR, $.arg),
        seq($.arg, $.SLASH, $.arg),
        seq($.arg, $.PERCENT, $.arg),
        seq($.arg, $.BW_SHIFT_L, $.arg),
        seq($.arg, $.BW_SHIFT_R, $.arg),
        seq($.arg, $.BW_SHIFT_R_UNSIGNED, $.arg),
        seq($.arg, $.BW_OR, $.arg),
        seq($.arg, $.BW_XOR, $.arg),
        seq($.arg, $.BW_AND, $.arg),
        seq($.arg, $.L_OR, $.arg),
        seq($.arg, $.L_AND, $.arg),
        )),
        prec(2,seq($.BW_NOT, $.arg)),
        prec(2,seq($.L_NOT, $.arg)),
        prec.right(seq($.arg, $.CARET, $.arg)),
        seq($.MAX, $.LPAREN, $.arg, $.COMMA, $.non_empty_arg_list, $.RPAREN),
        seq($.MIN, $.LPAREN, $.arg, $.COMMA, $.non_empty_arg_list, $.RPAREN),
        seq($.MEAN, $.arg, $.COLON, $.atom),
        seq($.MEAN, $.arg, $.COLON, $.LBRACE, $.body, $.RBRACE),
        seq($.COUNT, $.COLON, $.atom),
        seq($.COUNT, $.COLON, $.LBRACE, $.body, $.RBRACE),
        seq($.SUM, $.arg, $.COLON, $.atom),
        seq($.SUM, $.arg, $.COLON, $.LBRACE, $.body, $.RBRACE),
        seq($.MIN, $.arg, $.COLON, $.atom),
        seq($.MIN, $.arg, $.COLON, $.LBRACE, $.body, $.RBRACE),
        seq($.MAX, $.arg, $.COLON, $.atom),
        seq($.MAX, $.arg, $.COLON, $.LBRACE, $.body, $.RBRACE),
      ),

	  functor_built_in: $ => choice(
		$.CAT,
		$.ORD,
		$.RANGE,
		$.STRLEN,
		$.SUBSTR,
		$.TOFLOAT,
		$.TONUMBER,
		$.TOSTRING,
		$.TOUNSIGNED,
	  ),

      component: $ => seq($.component_head, $.LBRACE, optional(repeat1($.component_body)), $.RBRACE),

      component_head: $ => choice(
        seq($.COMPONENT, $.comp_type),
        seq($.component_head, $.COLON, $.comp_type),
        seq($.component_head, $.COMMA, $.comp_type),
      ),

      comp_type: $ => seq($.IDENT, optional($.type_params)),

      type_params: $ => seq($.LT, $.type_param_list, $.GT),

      type_param_list: $ => choice(
        $.IDENT,
        seq($.type_param_list, $.COMMA, $.IDENT)
      ),

      component_body: $ => choice(
		$.io_macro,
        $.type,
        $.relation_decl,
        $.io_head,
        $.fact,
        $.rule,
        seq($.OVERRIDE, $.IDENT),
        $.comp_init,
        $.component,
      ),

      comp_init: $ => seq($.INSTANTIATE, $.IDENT, $.EQUALS, $.comp_type),

      functor_decl: $ => seq($.FUNCTOR, $.IDENT, $.LPAREN, optional($.non_empty_attributes), $.RPAREN, $.COLON, $.identifier, optional("stateful")),

      non_empty_functor_arg_type_list: $ => choice(
        $.predefined_type,
        seq($.non_empty_functor_arg_type_list, $.COMMA, $.predefined_type)
      ),

      predefined_type: $ => choice("number", "symbol", "float", "unsigned"),

      pragma: $ => seq($.PRAGMA, $.STRING, optional($.STRING)),

      io_head: $ => seq(
        choice($.INPUT_DECL, $.OUTPUT_DECL, $.PRINTSIZE_DECL),
        $.io_directive_list
      ),

      io_directive_list: $ => choice(
        $.io_relation_list,
        seq($.io_relation_list, $.LPAREN, optional($.non_empty_key_value_pairs), $.RPAREN),
      ),

      io_relation_list: $ => choice(
        $.identifier,
        seq($.io_relation_list, $.COMMA, $.identifier)
      ),

      non_empty_key_value_pairs: $ => choice(
        seq($.IDENT, $.EQUALS, $.kvp_value),
        seq($.non_empty_key_value_pairs, $.COMMA, $.IDENT, $.EQUALS, $.kvp_value)
      ),

      kvp_value: $ => choice(
        $.STRING,
        $.IDENT,
        $.TRUE,
        $.FALSE
      )
    }
  });