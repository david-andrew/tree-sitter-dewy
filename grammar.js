/**
 * @file experimental dewy lang tree sitter parser
 * @author David Samson <david.andrew.engineer@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dewy",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
