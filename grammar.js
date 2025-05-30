/**
 * @file experimental dewy lang tree sitter parser
 * @author David Samson <david.andrew.engineer@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const digits = /[0-9]/;
const alpha = /[A-Za-z]/;
const greek = /[Α-Ωα-ω]/; // ΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩαβγδεζηθικλμνξοπρςστυφχψω
const misc = /[_?!$&°]/;

const Associativity = Object.freeze({
  LEFT: "left", // left-to-right
  RIGHT: "right", // right-to-left
  // NONE: "none", // non-associative (e.g., a < b < c is often an error or has specific meaning)
  FAIL: "fail", // fail if multiple encountered (similar to NONE for Tree-sitter binary ops)
  PREFIX: "prefix",
  POSTFIX: "postfix",
});

const SpecialOperators = Object.freeze({
  JUX_CALL: Symbol("jux_call"),
  JUX_MUL: Symbol("jux_mul"),
});

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
const op_table = [
  { assoc: Associativity.PREFIX, ops: ["@"] },
  { assoc: Associativity.LEFT, ops: ["."] },
  { assoc: Associativity.PREFIX, ops: ["`"] },
  { assoc: Associativity.POSTFIX, ops: ["`"] },
  { assoc: Associativity.PREFIX, ops: [/not/i, "~"] },
  { assoc: Associativity.RIGHT, ops: ["^"] },
  {
    assoc: Associativity.LEFT,
    ops: ["*", "/", "//", /tdiv/i, /rdiv/i, /cdiv/i, /fdiv/i, /mod/i, /rem/i],
  },
  { assoc: Associativity.LEFT, ops: ["+", "-"] },
  { assoc: Associativity.LEFT, ops: ["<<", ">>", "<<<", ">>>", "<<!", "!>>"] },
  // { assoc: Associativity.NONE,  [Comma_t(',')]), //TODO: tbd how to handle
  { assoc: Associativity.FAIL, ops: [/in/i] },
  { assoc: Associativity.LEFT, ops: ["=?", ">?", "<?", ">=?", "<=?"] },
  { assoc: Associativity.LEFT, ops: [/and/i, /nand/i, "&"] },
  { assoc: Associativity.LEFT, ops: [/xor/i, /xnor/i] },
  { assoc: Associativity.LEFT, ops: [/or/i, /nor/i, "|"] },
  { assoc: Associativity.LEFT, ops: [/as/i, /transmute/i] },
  { assoc: Associativity.FAIL, ops: [/of/i] },
  { assoc: Associativity.FAIL, ops: [":"] },
  { assoc: Associativity.RIGHT, ops: [":>"] },
  { assoc: Associativity.RIGHT, ops: ["=>"] }, //# () => () => () => 42
  { assoc: Associativity.RIGHT, ops: ["|>"] },
  { assoc: Associativity.LEFT, ops: ["<|"] },
  { assoc: Associativity.FAIL, ops: ["->", "<->"] },
  { assoc: Associativity.FAIL, ops: ["=", "::"] },
  { assoc: Associativity.FAIL, ops: [/else/i] },
  { assoc: Associativity.POSTFIX, ops: [";"] }, //# postfix semicolon
].reverse();

const prec_fn_map = {
  [Associativity.LEFT]: prec.left,
  [Associativity.RIGHT]: prec.right,
  // [Associativity.FAIL]: prec, //we'll filter these out at semantic check time
};

// const mapped_ops = op_table
//   .map((row, i) => ({ prec: i, ...row }))
//   .filter(({ assoc }) => ["left", "right", "fail"].includes(assoc))
//   .map(({ assoc, ops, prec }) => ops.map((op) => ({ assoc, prec, op })))
//   .flat();
// console.log(mapped_ops);

// const binop

module.exports = grammar({
  name: "dewy",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._expr),
    _expr: ($) => choice($.id, $.number, $.binop),
    id: ($) => /[A-Za-zΑ-Ωα-ω_?!$&°][0-9A-Za-zΑ-Ωα-ω_?!$&°]*/u,
    // typed_id: ($) => seq($.id, ":", $._type_expr),
    // _type_expr: $ => s
    number: ($) => /[0-9]+/,
    binop: ($) =>
      choice(
        ...op_table
          .map((row, i) => ({ prec: i, ...row }))
          .filter(({ assoc }) => assoc in prec_fn_map)
          .map(({ assoc, ops, prec }) =>
            ops.map((op) =>
              prec_fn_map[assoc](prec, seq($._expr, op, $._expr)),
            ),
          )
          .flat(),
      ),
    //assoc_map[assoc](i, seq($._expr))),

    // prec.left(2, seq($._expr, "*", $._expr)),
    // prec.left(1, seq($._expr, "+", $._expr)),
  },
});
