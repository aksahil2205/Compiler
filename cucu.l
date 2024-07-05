%{

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "cucu.tab.h"
FILE *lexout;

%}

%%

"char *"                {fprintf (lexout,"TYPE : char*\n"); return CHAR;}
"int"                   {fprintf (lexout,"TYPE : int\n"); return INT;}
"while"                 {fprintf (lexout,"WHILE : while\n"); return WHILE;}
"if"                    {fprintf (lexout,"IF : if\n"); return IF;}
"else"                  {fprintf (lexout,"ELSE : else\n"); return ELSE;}
"return"                {fprintf (lexout, "RETURN : return\n"); return RETURN;}
[a-zA-Z_][a-zA-Z0-9_]*  {fprintf (lexout,"ID : %s\n", yytext); yylval.str=strdup(yytext); return ID;}
(\"[a-zA-Z0-9]*\")      {fprintf (lexout, "TYPE : string"); yylval.str=strdup(yytext); return STRING;}
[0-9]+                  {fprintf (lexout,"NUM : %d\n", yylval.num=atoi(yytext)); return NUM;}
","                     {fprintf (lexout,"COMMA : ,\n"); return COMMA;}
"="                     {fprintf (lexout,"EQUAL : =\n"); return EQUAL;}
"+"                     {fprintf (lexout,"ADDITION : +\n"); return ADDITION;}
"-"                     {fprintf (lexout,"SUBTRACTION : +\n"); return SUBTRACTION;}
"&"                     {fprintf (lexout,"LOGICAL AND : &\n"); return AND;}
"|"                     {fprintf(lexout,"LOGICAL OR : |\n"); return OR;}
"/"                     {fprintf (lexout,"DIVIDE : /\n"); return DIVIDE;}
"*"                     {fprintf (lexout,"MULTIPLY : *\n"); return MULTIPLY;}
";"                     {fprintf (lexout,"SEMI : ;\n"); return SEMI;}
[\{]                    {fprintf (lexout,"OPEN_CURLY : {\n"); return OPEN_CURLY;}
[\}]                    {fprintf (lexout,"CLOSE_CURLY : }\n"); return CLOSE_CURLY;}
[\(]                    {fprintf (lexout,"LEFT_BRAC : (\n"); return LEFT_BRAC;}
[\)]                    {fprintf (lexout,"RIGHT_BRAC : )\n"); return RIGHT_BRAC;}
[\[]                    {fprintf (lexout,"LEFT_SQBRAC : [\n"); return LEFT_SQBRAC;}
[\]]                    {fprintf (lexout,"RIGHT_SQBRAC : ]\n"); return RIGHT_SQBRAC;}
">"                     {fprintf (lexout,"GREATER_THAN : >\n"); return GREATER_THAN;}
">="                    {fprintf (lexout,"GREATER_THAN_EQUAL : >=\n"); return GREATER_THAN_EQUAL;}
"<"                     {fprintf (lexout,"LESS_THAN : <\n"); return LESS_THAN;}
"<="                    {fprintf (lexout,"LESS_THAN_EQUAL : <=\n"); return LESS_THAN_EQUAL;}
"=="                    {fprintf (lexout,"CHECKEQUAL : ==\n"); return CHECKEQUAL;}
"!="                    {fprintf (lexout,"CHECKNOT_EQUAL : !=\n"); return CHECKNOT_EQUAL;}
\/\*([^(\*\/)]|\n)*\*\/         ;
[ \t\n]+                ;       
%%

int yywrap(){
    return 1;
}