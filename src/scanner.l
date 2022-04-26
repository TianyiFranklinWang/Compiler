%option noyywrap nodefault yylineno

%{

#include <iostream>
#include <string>

void ret_print(std::string token_type, char *yytext, int yylineno);
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

int 		{ ret_print("KEYWORD_INT", yytext, yylineno); }
void 		{ ret_print("KEYWORD_VOID", yytext, yylineno); }
const 		{ ret_print("KEYWORD_CONST", yytext, yylineno); }
break		{ ret_print("KEYWORD_BREAK", yytext, yylineno); }
continue	{ ret_print("KEYWORD_CONTINUE", yytext, yylineno); }
if			{ ret_print("KEYWORD_IF", yytext, yylineno); }
else 		{ ret_print("KEYWORD_ELSE", yytext, yylineno); }
return		{ ret_print("KEYWORD_RETURN", yytext, yylineno); }
while		{ ret_print("KEYWORD_WHILE", yytext, yylineno); }

"+"			{ ret_print("ADDOP", yytext, yylineno); }
"-"			{ ret_print("SUBOP", yytext, yylineno); }
"*"			{ ret_print("MULOP", yytext, yylineno); }
"/"			{ ret_print("DIVOP", yytext, yylineno); }
"%"			{ ret_print("MODOP", yytext, yylineno); }
"="			{ ret_print("ASSIGNOP", yytext, yylineno); }
"=="		{ ret_print("EQOP", yytext, yylineno); }
"!="		{ ret_print("NEOP", yytext, yylineno); }
"<"			{ ret_print("LTOP", yytext, yylineno); }
">"			{ ret_print("GTOP", yytext, yylineno); }
"<="		{ ret_print("LEOP", yytext, yylineno); }
">="		{ ret_print("GEOP", yytext, yylineno); }
"!"			{ ret_print("NOTOP", yytext, yylineno); }
"&&"		{ ret_print("ANDOP", yytext, yylineno); }
"||"		{ ret_print("OROP", yytext, yylineno); }
"["			{ ret_print("LBRACK", yytext, yylineno); }
"]"			{ ret_print("RBRACK", yytext, yylineno); }
"("			{ ret_print("LPAREN", yytext, yylineno); }
")"			{ ret_print("RPAREN", yytext, yylineno); }
"{"			{ ret_print("LBRACE", yytext, yylineno); }
"}"			{ ret_print("RBRACE", yytext, yylineno); }
","			{ ret_print("COMMA", yytext, yylineno); }
";"			{ ret_print("SEMI", yytext, yylineno); }
"."         { ret_print("DOT", yytext, yylineno); }
"&"         { ret_print("REFER", yytext, yylineno); }

{Decimal}*{POSTFIX}?			{ ret_print("DECIMAL", yytext, yylineno); }
{Octal}*{POSTFIX}?				{ ret_print("OCTAL", yytext, yylineno); }
{Hexadecimal}+{POSTFIX}?	    { ret_print("HEX", yytext, yylineno); }

{Identifier} { ret_print("IDENTIFIER", yytext, yylineno); }

{WhiteSpace} { /*Ignore*/ }

.   { yyerror("Unknown character(s)", yytext, yylineno); }

%%

void ret_print(std::string token_type, char *yytext, int yylineno) {
    std::cout << "yytext: " << yytext << "\ttoken: "<< token_type << "\tlineno: "<< yylineno << std::endl;
}

void yyerror(const char *message, char *yytext, int yylineno) {
    std::cerr << "Error: \"" << message << "\" in line "<< yylineno << ". Token = " << yytext << std::endl;
    exit(1);
}

int main(int argc, char *argv[]){
    yyin = NULL;
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        std::cerr << "File not found.";
        exit(-1);
    }
    yylex();
    fclose(yyin);
    return 0;
}
