%require "3.2"

%code requires {
    #include <memory>
    #include <string>
    #include "ast.h"
}

%{
#include <iostream>
#include <memory>
#include <string>
#include "ast.h"

int yylex();
int yylex_destroy();
int yyget_lineno();

void yyerror(std::unique_ptr<ast::BaseAST> &ast, const char *s);

using namespace std;

%}

%parse-param { std::unique_ptr<ast::BaseAST> &ast }

%union {
    std::string *str_val;
    int int_val;
    ast::BaseAST *ast_val;
}

%token VOID CONST BREAK CONTINUE IF ELSE RETURN WHILE
%token ADD SUB MUL DIV MOD
%token ASSIGN
%token EQ NE LT GT LE GE NOT AND OR
%token LBRACK RBRACK LPAREN RPAREN LBRACE RBRACE COMMA SEMI DOT REFER
%token <str_val> IDENT INT
%token <int_val> INT_CONST

%type <ast_val> FuncDef FuncType Block Stmt Number

%%

CompUnit
    : FuncDef {
        auto comp_unit = make_unique<ast::CompUnitAST>();
        comp_unit -> func_def = unique_ptr<ast::BaseAST>($1);
        ast = move(comp_unit);
    }
    ;

FuncDef
    : FuncType IDENT LPAREN RPAREN Block {
        auto ast = new ast::FuncDefAST();
        ast -> func_type = unique_ptr<ast::BaseAST>($1);
        ast -> ident = *unique_ptr<std::string>($2);
        ast -> block = unique_ptr<ast::BaseAST>($5);
        $$ = ast;
    }
    ;

FuncType
    : INT {
        auto ast = new ast::FuncTypeAST();
        ast -> type = *unique_ptr<std::string>($1);
        $$ = ast;
    }
    ;

Block
    : LBRACE Stmt RBRACE {
        auto ast = new ast::BlockAST();
        ast -> stmt = unique_ptr<ast::BaseAST>($2);
        $$ = ast;
    }
    ;

Stmt
    : RETURN Number SEMI {
        auto ast = new ast::StmtAST();
        ast -> number = unique_ptr<ast::BaseAST>($2);
        $$ = ast;
    }
    ;

Number
    : INT_CONST {
        auto ast = new ast::NumberAST();
        ast -> value = int($1);
        $$ = ast;
    }
    ;

%%

// Error handling func
void yyerror(unique_ptr<ast::BaseAST> &ast, const char *s) {
    cerr << "error: " << s << " at line: " << yyget_lineno() << endl;
    yylex_destroy();
    exit(1);
}
