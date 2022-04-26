%require "3.2"

%code requires {
    #include <memory>
    #include <string>
}

%{
#include <iostream>
#include <memory>
#include <string>

int yylex();
int yylex_destroy();
int yyget_lineno();

void yyerror(std::unique_ptr<std::string> &ast, const char *s);

using namespace std;

%}

%parse-param { std::unique_ptr<std::string> &ast }

%union {
    std::string *str_val;
    int int_val;
}

%token INT VOID CONST BREAK CONTINUE IF ELSE RETURN WHILE
%token ADD SUB MUL DIV MOD
%token ASSIGN
%token EQ NE LT GT LE GE NOT AND OR
%token LBRACK RBRACK LPAREN RPAREN LBRACE RBRACE COMMA SEMI DOT REFER
%token <str_val> IDENT
%token <int_val> INT_CONST

%type <str_val> FuncDef FuncType Block Stmt Number

%%

CompUnit
    : FuncDef {
        ast = unique_ptr<string>($1);
    }
    ;

FuncDef
    : FuncType IDENT LPAREN RPAREN Block {
        auto type = unique_ptr<string>($1);
        auto ident = unique_ptr<string>($2);
        auto block = unique_ptr<string>($5);
        $$ = new string(*type + " " + *ident + "()" + *block);
    }
    ;

FuncType
    : INT {
        $$ = new string("int");
    }
    ;

Block
    : LBRACE Stmt RBRACE {
        auto stmt = unique_ptr<string>($2);
        $$ = new string("{ " + *stmt + " }");
    }
    ;

Stmt
    : RETURN Number SEMI {
        auto number = unique_ptr<string>($2);
        $$ = new string("return " + *number + ";");
    }
    ;

Number
    : INT_CONST {
        $$ = new string(to_string($1));
    }
    ;

%%

// Error handling func
void yyerror(unique_ptr<string> &ast, const char *s) {
    cerr << "error: " << s << " at line: " << yyget_lineno() << endl;
    yylex_destroy();
    exit(1);
}