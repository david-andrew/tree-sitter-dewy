package tree_sitter_dewy_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dewy "github.com/tree-sitter/tree-sitter-dewy/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dewy.Language())
	if language == nil {
		t.Errorf("Error loading Dewy grammar")
	}
}
