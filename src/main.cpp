//
// Created by NPU-Franklin on 2022/4/27.
//

#include <cassert>
#include <iostream>
#include <memory>

using namespace std;

extern FILE *yyin;

extern int yyparse(unique_ptr<string> &ast);

int main(int argc, const char *argv[]) {
  assert(argc == 2);
  auto input = argv[1];

  yyin = fopen(input, "r");
  assert(yyin);

  unique_ptr<string> ast;
  auto ret = yyparse(ast);
  assert(!ret);
  cout << *ast << endl;

  return 0;
}
