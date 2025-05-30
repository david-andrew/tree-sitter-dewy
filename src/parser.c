#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_id = 1,
  sym_number = 2,
  anon_sym_LT_PIPE = 3,
  anon_sym_PIPE_GT = 4,
  anon_sym_EQ_GT = 5,
  anon_sym_COLON_GT = 6,
  aux_sym_binop_token1 = 7,
  aux_sym_binop_token2 = 8,
  aux_sym_binop_token3 = 9,
  aux_sym_binop_token4 = 10,
  anon_sym_PIPE = 11,
  aux_sym_binop_token5 = 12,
  aux_sym_binop_token6 = 13,
  aux_sym_binop_token7 = 14,
  aux_sym_binop_token8 = 15,
  anon_sym_AMP = 16,
  anon_sym_EQ_QMARK = 17,
  anon_sym_GT_QMARK = 18,
  anon_sym_LT_QMARK = 19,
  anon_sym_GT_EQ_QMARK = 20,
  anon_sym_LT_EQ_QMARK = 21,
  anon_sym_LT_LT = 22,
  anon_sym_GT_GT = 23,
  anon_sym_LT_LT_LT = 24,
  anon_sym_GT_GT_GT = 25,
  anon_sym_LT_LT_BANG = 26,
  anon_sym_BANG_GT_GT = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_SLASH_SLASH = 32,
  aux_sym_binop_token9 = 33,
  aux_sym_binop_token10 = 34,
  aux_sym_binop_token11 = 35,
  aux_sym_binop_token12 = 36,
  aux_sym_binop_token13 = 37,
  aux_sym_binop_token14 = 38,
  anon_sym_CARET = 39,
  anon_sym_DOT = 40,
  sym_source_file = 41,
  sym__expr = 42,
  sym_binop = 43,
  aux_sym_source_file_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [sym_number] = "number",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COLON_GT] = ":>",
  [aux_sym_binop_token1] = "binop_token1",
  [aux_sym_binop_token2] = "binop_token2",
  [aux_sym_binop_token3] = "binop_token3",
  [aux_sym_binop_token4] = "binop_token4",
  [anon_sym_PIPE] = "|",
  [aux_sym_binop_token5] = "binop_token5",
  [aux_sym_binop_token6] = "binop_token6",
  [aux_sym_binop_token7] = "binop_token7",
  [aux_sym_binop_token8] = "binop_token8",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_QMARK] = "=\?",
  [anon_sym_GT_QMARK] = ">\?",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_GT_EQ_QMARK] = ">=\?",
  [anon_sym_LT_EQ_QMARK] = "<=\?",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_LT_BANG] = "<<!",
  [anon_sym_BANG_GT_GT] = "!>>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_binop_token9] = "binop_token9",
  [aux_sym_binop_token10] = "binop_token10",
  [aux_sym_binop_token11] = "binop_token11",
  [aux_sym_binop_token12] = "binop_token12",
  [aux_sym_binop_token13] = "binop_token13",
  [aux_sym_binop_token14] = "binop_token14",
  [anon_sym_CARET] = "^",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym__expr] = "_expr",
  [sym_binop] = "binop",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [sym_number] = sym_number,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [aux_sym_binop_token1] = aux_sym_binop_token1,
  [aux_sym_binop_token2] = aux_sym_binop_token2,
  [aux_sym_binop_token3] = aux_sym_binop_token3,
  [aux_sym_binop_token4] = aux_sym_binop_token4,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_binop_token5] = aux_sym_binop_token5,
  [aux_sym_binop_token6] = aux_sym_binop_token6,
  [aux_sym_binop_token7] = aux_sym_binop_token7,
  [aux_sym_binop_token8] = aux_sym_binop_token8,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_QMARK] = anon_sym_EQ_QMARK,
  [anon_sym_GT_QMARK] = anon_sym_GT_QMARK,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_GT_EQ_QMARK] = anon_sym_GT_EQ_QMARK,
  [anon_sym_LT_EQ_QMARK] = anon_sym_LT_EQ_QMARK,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_LT_LT_BANG] = anon_sym_LT_LT_BANG,
  [anon_sym_BANG_GT_GT] = anon_sym_BANG_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_binop_token9] = aux_sym_binop_token9,
  [aux_sym_binop_token10] = aux_sym_binop_token10,
  [aux_sym_binop_token11] = aux_sym_binop_token11,
  [aux_sym_binop_token12] = aux_sym_binop_token12,
  [aux_sym_binop_token13] = aux_sym_binop_token13,
  [aux_sym_binop_token14] = aux_sym_binop_token14,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym__expr] = sym__expr,
  [sym_binop] = sym_binop,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binop_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binop_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binop_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binop_token14] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_binop] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static TSCharacterRange sym_id_character_set_2[] = {
  {'!', '!'}, {'$', '$'}, {'&', '&'}, {'0', '9'}, {'?', '?'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'},
  {0xb0, 0xb0}, {0x391, 0x3a9}, {0x3b1, 0x3c9},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '!', 10,
        '&', 39,
        '*', 53,
        '+', 51,
        '-', 52,
        '.', 57,
        '/', 54,
        ':', 3,
        '<', 1,
        '=', 4,
        '>', 2,
        '^', 56,
        '|', 38,
        'A', 22,
        'a', 22,
        'C', 16,
        'c', 16,
        'F', 16,
        'f', 16,
        'M', 26,
        'm', 26,
        'N', 11,
        'n', 11,
        'O', 27,
        'o', 27,
        'R', 14,
        'r', 14,
        'T', 15,
        't', 15,
        'X', 24,
        'x', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead == '|') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '?') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '?') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '?') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '?') ADVANCE(43);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '>') ADVANCE(5);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(32);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_id);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (set_contains(sym_id_character_set_2, 11, lookahead)) ADVANCE(32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_QMARK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_QMARK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT_EQ_QMARK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_EQ_QMARK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '<') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_LT_BANG);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_GT_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [aux_sym_binop_token1] = ACTIONS(1),
    [aux_sym_binop_token2] = ACTIONS(1),
    [aux_sym_binop_token3] = ACTIONS(1),
    [aux_sym_binop_token4] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_binop_token5] = ACTIONS(1),
    [aux_sym_binop_token6] = ACTIONS(1),
    [aux_sym_binop_token7] = ACTIONS(1),
    [aux_sym_binop_token8] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_QMARK] = ACTIONS(1),
    [anon_sym_GT_QMARK] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(1),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_BANG] = ACTIONS(1),
    [anon_sym_BANG_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_binop_token9] = ACTIONS(1),
    [aux_sym_binop_token10] = ACTIONS(1),
    [aux_sym_binop_token11] = ACTIONS(1),
    [aux_sym_binop_token12] = ACTIONS(1),
    [aux_sym_binop_token13] = ACTIONS(1),
    [aux_sym_binop_token14] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__expr] = STATE(3),
    [sym_binop] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [sym_number] = ACTIONS(5),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(7),
    [anon_sym_GT_QMARK] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_id] = ACTIONS(27),
    [sym_number] = ACTIONS(25),
    [anon_sym_LT_PIPE] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [aux_sym_binop_token1] = ACTIONS(37),
    [aux_sym_binop_token2] = ACTIONS(37),
    [aux_sym_binop_token3] = ACTIONS(39),
    [aux_sym_binop_token4] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(7),
    [anon_sym_GT_QMARK] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(9),
    [anon_sym_LT_LT_LT] = ACTIONS(7),
    [anon_sym_GT_GT_GT] = ACTIONS(7),
    [anon_sym_LT_LT_BANG] = ACTIONS(7),
    [anon_sym_BANG_GT_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(39),
    [aux_sym_binop_token4] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [aux_sym_binop_token1] = ACTIONS(37),
    [aux_sym_binop_token2] = ACTIONS(37),
    [aux_sym_binop_token3] = ACTIONS(39),
    [aux_sym_binop_token4] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [aux_sym_binop_token1] = ACTIONS(37),
    [aux_sym_binop_token2] = ACTIONS(37),
    [aux_sym_binop_token3] = ACTIONS(39),
    [aux_sym_binop_token4] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [aux_sym_binop_token1] = ACTIONS(37),
    [aux_sym_binop_token2] = ACTIONS(37),
    [aux_sym_binop_token3] = ACTIONS(39),
    [aux_sym_binop_token4] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(35),
    [aux_sym_binop_token1] = ACTIONS(37),
    [aux_sym_binop_token2] = ACTIONS(37),
    [aux_sym_binop_token3] = ACTIONS(39),
    [aux_sym_binop_token4] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(7),
    [anon_sym_GT_QMARK] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(9),
    [anon_sym_LT_LT_LT] = ACTIONS(7),
    [anon_sym_GT_GT_GT] = ACTIONS(7),
    [anon_sym_LT_LT_BANG] = ACTIONS(7),
    [anon_sym_BANG_GT_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(41),
    [aux_sym_binop_token6] = ACTIONS(41),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(43),
    [aux_sym_binop_token8] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(45),
    [anon_sym_GT_QMARK] = ACTIONS(45),
    [anon_sym_LT_QMARK] = ACTIONS(45),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_BANG] = ACTIONS(13),
    [anon_sym_BANG_GT_GT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [aux_sym_binop_token9] = ACTIONS(19),
    [aux_sym_binop_token10] = ACTIONS(19),
    [aux_sym_binop_token11] = ACTIONS(19),
    [aux_sym_binop_token12] = ACTIONS(19),
    [aux_sym_binop_token13] = ACTIONS(19),
    [aux_sym_binop_token14] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(7),
    [anon_sym_GT_QMARK] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(9),
    [anon_sym_LT_LT_LT] = ACTIONS(7),
    [anon_sym_GT_GT_GT] = ACTIONS(7),
    [anon_sym_LT_LT_BANG] = ACTIONS(7),
    [anon_sym_BANG_GT_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [aux_sym_binop_token9] = ACTIONS(9),
    [aux_sym_binop_token10] = ACTIONS(9),
    [aux_sym_binop_token11] = ACTIONS(9),
    [aux_sym_binop_token12] = ACTIONS(9),
    [aux_sym_binop_token13] = ACTIONS(9),
    [aux_sym_binop_token14] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(7),
    [anon_sym_GT_QMARK] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(9),
    [anon_sym_LT_LT_LT] = ACTIONS(7),
    [anon_sym_GT_GT_GT] = ACTIONS(7),
    [anon_sym_LT_LT_BANG] = ACTIONS(7),
    [anon_sym_BANG_GT_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [aux_sym_binop_token9] = ACTIONS(9),
    [aux_sym_binop_token10] = ACTIONS(9),
    [aux_sym_binop_token11] = ACTIONS(9),
    [aux_sym_binop_token12] = ACTIONS(9),
    [aux_sym_binop_token13] = ACTIONS(9),
    [aux_sym_binop_token14] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_id] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
    [anon_sym_LT_PIPE] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(7),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_COLON_GT] = ACTIONS(7),
    [aux_sym_binop_token1] = ACTIONS(9),
    [aux_sym_binop_token2] = ACTIONS(9),
    [aux_sym_binop_token3] = ACTIONS(9),
    [aux_sym_binop_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(9),
    [aux_sym_binop_token5] = ACTIONS(9),
    [aux_sym_binop_token6] = ACTIONS(9),
    [aux_sym_binop_token7] = ACTIONS(9),
    [aux_sym_binop_token8] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_EQ_QMARK] = ACTIONS(7),
    [anon_sym_GT_QMARK] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_GT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_EQ_QMARK] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(9),
    [anon_sym_LT_LT_LT] = ACTIONS(7),
    [anon_sym_GT_GT_GT] = ACTIONS(7),
    [anon_sym_LT_LT_BANG] = ACTIONS(7),
    [anon_sym_BANG_GT_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [aux_sym_binop_token9] = ACTIONS(9),
    [aux_sym_binop_token10] = ACTIONS(9),
    [aux_sym_binop_token11] = ACTIONS(9),
    [aux_sym_binop_token12] = ACTIONS(9),
    [aux_sym_binop_token13] = ACTIONS(9),
    [aux_sym_binop_token14] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      sym_id,
      sym_number,
    STATE(3), 2,
      sym__expr,
      sym_binop,
  [15] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(51), 2,
      sym_id,
      sym_number,
    STATE(3), 2,
      sym__expr,
      sym_binop,
  [30] = 2,
    ACTIONS(54), 2,
      sym_id,
      sym_number,
    STATE(6), 2,
      sym__expr,
      sym_binop,
  [39] = 2,
    ACTIONS(56), 2,
      sym_id,
      sym_number,
    STATE(7), 2,
      sym__expr,
      sym_binop,
  [48] = 2,
    ACTIONS(58), 2,
      sym_id,
      sym_number,
    STATE(8), 2,
      sym__expr,
      sym_binop,
  [57] = 2,
    ACTIONS(60), 2,
      sym_id,
      sym_number,
    STATE(9), 2,
      sym__expr,
      sym_binop,
  [66] = 2,
    ACTIONS(62), 2,
      sym_id,
      sym_number,
    STATE(5), 2,
      sym__expr,
      sym_binop,
  [75] = 2,
    ACTIONS(64), 2,
      sym_id,
      sym_number,
    STATE(11), 2,
      sym__expr,
      sym_binop,
  [84] = 2,
    ACTIONS(66), 2,
      sym_id,
      sym_number,
    STATE(12), 2,
      sym__expr,
      sym_binop,
  [93] = 2,
    ACTIONS(68), 2,
      sym_id,
      sym_number,
    STATE(13), 2,
      sym__expr,
      sym_binop,
  [102] = 2,
    ACTIONS(70), 2,
      sym_id,
      sym_number,
    STATE(2), 2,
      sym__expr,
      sym_binop,
  [111] = 2,
    ACTIONS(72), 2,
      sym_id,
      sym_number,
    STATE(10), 2,
      sym__expr,
      sym_binop,
  [120] = 2,
    ACTIONS(74), 2,
      sym_id,
      sym_number,
    STATE(4), 2,
      sym__expr,
      sym_binop,
  [129] = 2,
    ACTIONS(76), 2,
      sym_id,
      sym_number,
    STATE(14), 2,
      sym__expr,
      sym_binop,
  [138] = 2,
    ACTIONS(78), 2,
      sym_id,
      sym_number,
    STATE(15), 2,
      sym__expr,
      sym_binop,
  [147] = 2,
    ACTIONS(80), 2,
      sym_id,
      sym_number,
    STATE(16), 2,
      sym__expr,
      sym_binop,
  [156] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 15,
  [SMALL_STATE(19)] = 30,
  [SMALL_STATE(20)] = 39,
  [SMALL_STATE(21)] = 48,
  [SMALL_STATE(22)] = 57,
  [SMALL_STATE(23)] = 66,
  [SMALL_STATE(24)] = 75,
  [SMALL_STATE(25)] = 84,
  [SMALL_STATE(26)] = 93,
  [SMALL_STATE(27)] = 102,
  [SMALL_STATE(28)] = 111,
  [SMALL_STATE(29)] = 120,
  [SMALL_STATE(30)] = 129,
  [SMALL_STATE(31)] = 138,
  [SMALL_STATE(32)] = 147,
  [SMALL_STATE(33)] = 156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 3, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dewy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
