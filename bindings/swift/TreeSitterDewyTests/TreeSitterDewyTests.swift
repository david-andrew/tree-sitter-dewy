import XCTest
import SwiftTreeSitter
import TreeSitterDewy

final class TreeSitterDewyTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dewy())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dewy grammar")
    }
}
