%option noyywrap nodefault yylineno

%{

#include <iostream>
#include <string>
#include "parser.hpp"

void yyerror(const char *message, char *yytext, int yylineno);

%}

%x COMMENT
%x ML_COMMENT

WhiteSpace [ \t\n\r]+

Identifier [a-zA-Z_][a-zA-Z0-9_]*

/*Integer Literal*/
Decimal [1-9][0-9]*
Octal 0[0-7]*
Hexadecimal 0[xX][0-9a-fA-F]+
POSTFIX ([Uu](L|l|LL|ll)?|(L|l|LL|ll)[Uu]?)

%%

"//" {BEGIN(COMMENT);}
<COMMENT>.*
<COMMENT>\n {BEGIN(INITIAL);}
<COMMENT><<EOF>> {BEGIN(INITIAL);}
"/*"		{BEGIN(ML_COMMENT);}
<ML_COMMENT>"*/"  {BEGIN(INITIAL);}
<ML_COMMENT>([^*]|\n)+|.
<ML_COMMENT><<EOF>>   { yyerror("Unterminated comment\n", yytext, yylineno); }

int 		{ return INT; }
void 		{ return VOID; }
const 		{ return CONST; }
break		{ return BREAK; }
continue	{ return CONTINUE; }
if			{ return IF; }
else 		{ return ELSE; }
return		{ return RETURN; }
while		{ return WHILE; }

"+"			{ return ADD; }
"-"			{ return SUB; }
"*"			{ return MUL; }
"/"			{ return DIV; }
"%"			{ return MOD; }
"="			{ return ASSIGN; }
"=="		{ return EQ; }
"!="		{ return NE; }
"<"			{ return LT; }
">"			{ return GT; }
"<="		{ return LE; }
">="		{ return GE; }
"!"			{ return NOT; }
"&&"		{ return AND; }
"||"		{ return OR; }
"["			{ return LBRACK; }
"]"			{ return RBRACK; }
"("			{ return LPAREN; }
")"			{ return RPAREN; }
"{"			{ return LBRACE; }
"}"			{ return RBRACE; }
","			{ return COMMA; }
";"			{ return SEMI; }
"."         { return DOT; }
"&"         { return REFER; }

{Decimal}*{POSTFIX}?			{ yylval.int_val = strtol(yytext, nullptr, 0); return INT_CONST; }
{Octal}*{POSTFIX}?				{ yylval.int_val = strtol(yytext, nullptr, 0); return INT_CONST; }
{Hexadecimal}+{POSTFIX}?	    { yylval.int_val = strtol(yytext, nullptr, 0); return INT_CONST; }

{Identifier} { yylval.str_val = new std::string(yytext); return IDENT; }

{WhiteSpace} { /*Ignore*/ }

.   { yyerror("Unknown character(s)", yytext, yylineno); }

%%

void yyerror(const char *message, char *yytext, int yylineno) {
    std::cerr << "Error: \"" << message << "\" in line "<< yylineno << ". Token = " << yytext << std::endl;
    exit(1);
}
