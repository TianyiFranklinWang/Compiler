/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CYGDRIVE_D_PROJECTS_COMPILER_SRC_PARSER_HPP_INCLUDED
# define YY_YY_CYGDRIVE_D_PROJECTS_COMPILER_SRC_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 3 "/cygdrive/d/Projects/Compiler/src/parser.y"

#include <memory>
#include <string>
#include "ast.h"

#line 55 "/cygdrive/d/Projects/Compiler/src/parser.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
enum yytokentype {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VOID = 258,                    /* VOID  */
    CONST = 259,                   /* CONST  */
    BREAK = 260,                   /* BREAK  */
    CONTINUE = 261,                /* CONTINUE  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    RETURN = 264,                  /* RETURN  */
    WHILE = 265,                   /* WHILE  */
    ADD = 266,                     /* ADD  */
    SUB = 267,                     /* SUB  */
    MUL = 268,                     /* MUL  */
    DIV = 269,                     /* DIV  */
    MOD = 270,                     /* MOD  */
    ASSIGN = 271,                  /* ASSIGN  */
    EQ = 272,                      /* EQ  */
    NE = 273,                      /* NE  */
    LT = 274,                      /* LT  */
    GT = 275,                      /* GT  */
    LE = 276,                      /* LE  */
    GE = 277,                      /* GE  */
    NOT = 278,                     /* NOT  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    LBRACK = 281,                  /* LBRACK  */
    RBRACK = 282,                  /* RBRACK  */
    LPAREN = 283,                  /* LPAREN  */
    RPAREN = 284,                  /* RPAREN  */
    LBRACE = 285,                  /* LBRACE  */
    RBRACE = 286,                  /* RBRACE  */
    COMMA = 287,                   /* COMMA  */
    SEMI = 288,                    /* SEMI  */
    DOT = 289,                     /* DOT  */
    REFER = 290,                   /* REFER  */
    IDENT = 291,                   /* IDENT  */
    INT = 292,                     /* INT  */
    INT_CONST = 293                /* INT_CONST  */
};
typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if !defined YYSTYPE && !defined YYSTYPE_IS_DECLARED
union YYSTYPE {
#line 27 "/cygdrive/d/Projects/Compiler/src/parser.y"

    std::string *str_val;
    int int_val;
    ast::BaseAST *ast_val;

#line 116 "/cygdrive/d/Projects/Compiler/src/parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse(std::unique_ptr<ast::BaseAST> &ast);


#endif /* !YY_YY_CYGDRIVE_D_PROJECTS_COMPILER_SRC_PARSER_HPP_INCLUDED  */
