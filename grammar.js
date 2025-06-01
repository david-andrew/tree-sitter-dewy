/**
 * @file experimental dewy lang tree sitter parser
 * @author David Samson <david.andrew.engineer@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const Associativity = Object.freeze({
  LEFT: "left", // left-to-right
  RIGHT: "right", // right-to-left
  NONE: "none", // non-associative (e.g., `a = b = c` or `a, b, c`) things like this should get explicitly defined rules)
  PREFIX: "prefix",
  POSTFIX: "postfix",
});

const SpecOps = {
  JUX_CALL: Symbol("jux_call"),
  JUX_INDEX: Symbol("jux_index"),
  JUX_MUL: Symbol("jux_mul"),
  JUX_RANGE: Symbol("jux_range"),
};

/**
(Associativity.unary, ['@']),
(Associativity.left, ['.', Juxtapose_t(None)]),  # jux-call, jux-index
(Associativity.none, [TypeParamJuxtapose_t(None)]),
(Associativity.none, [EllipsisJuxtapose_t(None)]),  # jux-ellipsis
(Associativity.none, [BackticksJuxtapose_t(None)]),  # jux-backticks
(Associativity.unary, ['not', '~']),
(Associativity.right,  ['^']),
(Associativity.left, [Juxtapose_t(None)]),  # jux-multiply
(Associativity.left, ['*', '/', '//', 'tdiv', 'rdiv', 'cdiv', 'fdiv', 'mod', 'rem']),
(Associativity.left, ['+', '-']),
(Associativity.left, [*map(ShiftOperator_t, ['<<', '>>', '<<<', '>>>', '<<!', '!>>'])]),
(Associativity.none,  [Comma_t(',')]),
(Associativity.left, [RangeJuxtapose_t(None)]),  # jux-range
(Associativity.none, ['in']),
(Associativity.left, ['=?', '>?', '<?', '>=?', '<=?']),
(Associativity.unary, ['?']),
(Associativity.left, ['and', 'nand', '&']),
(Associativity.left, ['xor', 'xnor']),
(Associativity.left, ['or', 'nor', '|']),
(Associativity.none,  ['as', 'transmute']),
(Associativity.fail, ['of']),
(Associativity.none, [':']),
(Associativity.right, [':>']),
(Associativity.right,  ['=>']),  # () => () => () => 42
(Associativity.right, ['|>']),
(Associativity.left, ['<|']),
(Associativity.fail,  ['->', '<->']),
(Associativity.fail,  ['=', '::']),
(Associativity.none,  ['else']),
(Associativity.unary, [';']),  # postfix semicolon
*/
const special = true;
const op_table = [
  { assoc: Associativity.PREFIX, ops: ["@"], special },
  { assoc: Associativity.LEFT, ops: [".", SpecOps.JUX_CALL, SpecOps.JUX_INDEX], special },
  { assoc: Associativity.PREFIX, ops: ["`"] },
  { assoc: Associativity.POSTFIX, ops: ["`"] },
  { assoc: Associativity.PREFIX, ops: [/not/i, "~"] }, // tbd why precedence here is so high. might make more sense lower. or even have `not` be low precedence and `~` be high precedence
  { assoc: Associativity.RIGHT, ops: ["^"] },
  { assoc: Associativity.LEFT, ops: [SpecOps.JUX_MUL], special },
  { assoc: Associativity.LEFT, ops: ["*", "/", "//", /tdiv/i, /rdiv/i, /cdiv/i, /fdiv/i, /mod/i, /rem/i] },
  { assoc: Associativity.LEFT, ops: ["+", "-"] },
  { assoc: Associativity.LEFT, ops: ["<<", ">>", "<<<", ">>>", "<<!", "!>>"] },
  { assoc: Associativity.NONE, ops: [","], special },
  { assoc: Associativity.LEFT, ops: [SpecOps.JUX_RANGE], special },
  { assoc: Associativity.NONE, ops: [/in/i], special },
  { assoc: Associativity.LEFT, ops: ["=?", ">?", "<?", ">=?", "<=?"] },
  { assoc: Associativity.LEFT, ops: [/and/i, /nand/i, "&"] },
  { assoc: Associativity.LEFT, ops: [/xor/i, /xnor/i] },
  { assoc: Associativity.LEFT, ops: [/or/i, /nor/i, "|"] },
  { assoc: Associativity.LEFT, ops: [/as/i, /transmute/i] },
  { assoc: Associativity.NONE, ops: [/of/i], special }, // identifier of typeexpr
  { assoc: Associativity.NONE, ops: [":"], special },
  { assoc: Associativity.LEFT, ops: [":>"], special }, // x:int:>bool:>float:>int (((x:int):>bool):>float):>int
  { assoc: Associativity.RIGHT, ops: ["=>"], special }, //# () => () => () => 42
  { assoc: Associativity.RIGHT, ops: ["|>"] },
  { assoc: Associativity.LEFT, ops: ["<|"] },
  { assoc: Associativity.RIGHT, ops: ["->", "<->"] }, //generally incoherent, and probably will be handled in semantic analysis
  { assoc: Associativity.NONE, ops: ["=", "::"], special },
  { assoc: Associativity.NONE, ops: [/if/i, /loop/i, /else/i], special },
  { assoc: Associativity.POSTFIX, ops: [";"] }, //# postfix semicolon
].reverse();

const prec_fn_map = {
  [Associativity.LEFT]: prec.left,
  [Associativity.RIGHT]: prec.right,
  // [Associativity.FAIL]: prec.left, //we'll filter these out at semantic check time
};

// look up the associativity and precedence of a specific symbol
const assocprec = (symbol /*:string|RegExp*/) /*: number*/ => {
  for (const [prec, { assoc, ops }] of op_table.entries()) {
    for (const op of ops) {
      if (
        op === symbol ||
        (symbol instanceof RegExp && op instanceof RegExp && symbol.source === op.source && symbol.flags === op.flags)
      ) {
        return { assoc, prec };
      }
    }
  }
  throw new Error(`Failed to find symbol \`${symbol}\` in op table when looking up precedence`);
};

// convenience function to get just associativity or precedence for symbol
const precedenceof = (symbol) => assocprec(symbol).prec;
const assocof = (symbol) => assocprec(symbol).assoc;

// console.log(get_precedence(/in/i));

// const mapped_ops = op_table
//   .map((row, i) => ({ prec: i, ...row }))
//   .filter(({ assoc }) => ["left", "right", "fail"].includes(assoc))
//   .map(({ assoc, ops, prec }) => ops.map((op) => ({ assoc, prec, op })))
//   .flat();
// console.log(mapped_ops);

// const binop

module.exports = grammar({
  name: "dewy",

  extras: ($) => [], // manually handle whitespcae because of juxtapose operators

  rules: {
    // entrypoint
    source_file: ($) => seq(optional($._w), optional(seq($._expr_seq, optional($._w)))),

    // whitespace and comments
    _block_comment: ($) => prec(0, seq("%{", repeat(choice($._block_comment, /./, "\n")), "}%")), // let tree sitter handle nesting
    _line_comment: ($) => prec(-1, /%.*\n?/), // lower precedence than block comment
    _whitespace: ($) => /\s+/,
    _w: ($) => repeat1(choice($._whitespace, $._block_comment, $._line_comment)), //mandatory whitespace
    _o: ($) => optional($._w), //optional whitespace

    _expr: ($) => choice($.id, $.number, $.binop, $.commaexpr, $.group, $.scope, $.array), //, $.range),
    _expr_seq: ($) => prec.left(0, seq($._expr, repeat(seq($._w, $._expr)))),
    id: ($) => /[A-Za-zΑ-Ωα-ω_?!$&°][0-9A-Za-zΑ-Ωα-ω_?!$&°]*/u,
    number: ($) => /[0-9]+/,
    binop: ($) =>
      choice(
        ...op_table
          .map((row, i) => ({ i, ...row }))
          .filter(({ assoc, special }) => assoc in prec_fn_map && special !== true)
          .map(({ assoc, ops, i }) => ops.map((op) => prec_fn_map[assoc](i, seq($._expr, op, $._expr))))
          .flat(),
      ),
    commaexpr: ($) => prec(precedenceof(","), seq($._expr, repeat1(seq(optional($._w), ",", optional($._w), $._expr)))),

    // void expressions
    voidgroup: ($) => seq("(", optional($._w), ")"),
    voidscope: ($) => seq("{", optional($._w), "}"),
    voidarray: ($) => seq("[", optional($._w), "]"),
    voidparam: ($) => seq("<", optional($._w), ">"),
    void: ($) => /void/i,

    // basic delimited expressions
    group: ($) => seq("(", optional($._w), $._expr_seq, optional($._w), ")"),
    scope: ($) => seq("{", optional($._w), $._expr_seq, optional($._w), "}"),
    array: ($) => seq("[", optional($._w), $._expr_seq, optional($._w), "]"),
    param: ($) => seq("<", optional($._w), $._expr_seq, optional($._w), ">"),

    // range: ($) => prec(1, seq(choice("[", "("), $.barerange, choice("]", ")"))),
    // barerange: ($) => prec(precedenceof(SpecOps.RANGE_JUX), seq($._expr, $.dotdot, $._expr)),
    dotdot: ($) => "..",
    dotdotdot: ($) => "...",

    dictitem: ($) => seq($._expr, optional($._w), "->", optional($._w), $._expr),
    bidictitem: ($) => seq($._expr, optional($._w), "<->", optional($._w), $._expr),
    obj: ($) => prec(1, seq("[", optional($._w), seq($.assign, repeat(seq($._w, $.assign))), optional($._w), "]")),
    dict: ($) => prec(1, seq("[", optional($._w), seq($.dictitem, repeat(seq($._w, $.dictitem))), optional($._w), "]")),
    bidict: ($) => prec(1, seq("[", optional($._w), seq($.bidictitem, repeat(seq($._w, $.bidictitem))), optional($._w), "]")),
    assign: ($) => seq($._assigntarget, optional($._w), choice("::", "="), optional($._w), $._expr),
    _assigntarget: ($) => choice($.id), //, $.unpacktarget, $.typedid, $.typedunpacktarget),
    // _unpacktarget: ($) =>
    //   choice(
    //     seq("(", choice($.assign, $._assigntarget), repeat(seq($._w, choice($.assign, $._assigntarget))), optional($._w), ")"),
    //     seq("[", choice($.assign, $._assigntarget), repeat(seq($._w, choice($.assign, $._assigntarget))), optional($._w), "]"),
    //     seq("{", choice($.assign, $._assigntarget), repeat(seq($._w, choice($.assign, $._assigntarget))), optional($._w), "}"),
    //     // seq(","),
    //   ),
    // typedid: ($) => seq($.id, ":", optional($._w), $._typeexpr),

    // ellipsis: ($) => "...",

    // juxtapose expressions
    juxcallexpr: ($) => prec(precedenceof(SpecOps.JUX_CALL), seq($._expr, $._expr)),
    // juxindexexpr: $ => prec(precedenceof(SpecOps.JUX_INDEX), seq($._expr, $.arrayexpr))

    // unpacktarget: ($) => {},
    // typed_id: ($) => seq($.id, ":", $._type_expr),
    // _typeexpr: $ => s

    // prec.left(2, seq($._expr, "*", $._expr)),
    // prec.left(1, seq($._expr, "+", $._expr)),
  },
});
