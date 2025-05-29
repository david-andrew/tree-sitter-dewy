// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDewy",
    products: [
        .library(name: "TreeSitterDewy", targets: ["TreeSitterDewy"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDewy",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDewyTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDewy",
            ],
            path: "bindings/swift/TreeSitterDewyTests"
        )
    ],
    cLanguageStandard: .c11
)
