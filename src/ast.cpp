//
// Created by NPU-Franklin on 2022/5/23.
//

#include "ast.h"
#include <iostream>

using namespace ast;

void CompUnitAST::Dump() const {
  std::cout << "CompUnitAST { ";
  func_def->Dump();
  std::cout << " }";
}

void FuncDefAST::Dump() const {
  std::cout << "FuncDefAST { ";
  func_type->Dump();
  std::cout << ", " << ident << ", ";
  block->Dump();
  std::cout << " }";
}

void FuncTypeAST::Dump() const {
  std::cout << "FuncTypeAST { " << type << " }";
}

void BlockAST::Dump() const {
  std::cout << "BlockAST { ";
  stmt->Dump();
  std::cout << " }";
}

void StmtAST::Dump() const {
  std::cout << "StmtAST { ";
  number->Dump();
  std::cout << " }";
}

void NumberAST::Dump() const { std::cout << "NumberAST { " << value << " }"; }