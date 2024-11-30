//
// Created by antos07 on 11/9/23.
//

#include <cstdlib>
#include <format>
#include <fstream>
#include <iostream>
#include "Parser.hpp"
#include "Scanner.hpp"
#include "cli.hpp"
#include "ast/TreeNode.hpp"
#include "ast/TreeVisualizer.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2 && argc != 3) {
    std::cerr << std::format("Usage: {} <path to the source file> [-d]", argv[0]);
    return EXIT_FAILURE;
  }

  std::ifstream sourceFile{argv[1]};
  if (!sourceFile.is_open()) {
    // Failed to open the source file.
    std::perror(argv[0]);
    return EXIT_FAILURE;
  }

  parsing::Scanner scanner{sourceFile, std::cerr};
  std::unique_ptr<ast::TreeNode> ast;
  parsing::Parser parser{&scanner, ast};

  if (cli::is_debug_enabled(argc, argv)) {
    parser.set_debug_stream(std::cout);
    parser.set_debug_level(1);
  }
  if (parser.parse()) {
    return EXIT_FAILURE;
  }
  ast::TreeVisualizer visualizer{};
  visualizer.to_png(ast.get(), "ast.png");

  return EXIT_SUCCESS;
}
