%{
#include <stdio.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror(char const *);
extern FILE *yyin,*yyout,*lexout;
%}

%token INT CHAR WHILE IF ELSE RETURN COMMA EQUAL ADDITION SUBTRACTION DIVIDE MULTIPLY AND OR SEMI OPEN_CURLY CLOSE_CURLY LEFT_BRAC RIGHT_BRAC LEFT_SQBRAC RIGHT_SQBRAC GREATER_THAN LESS_THAN CHECKEQUAL LESS_THAN_EQUAL GREATER_THAN_EQUAL CHECKNOT_EQUAL

%union{
    int num;
    char *str;
}

%token <num> NUM
%token <str> ID
%token <str> STRING
%left ADDITION SUBTRACTION
%left MULTIPLY DIVIDE
%left LEFT_BRAC RIGHT_BRAC

%%

Programs : program
;

program : variable_declaration          {fprintf(yyout,"\n");}
    | program variable_declaration      {fprintf(yyout,"\n");}
    | program function_declaration      {fprintf(yyout,"\n");}
    | program function_defn             {fprintf(yyout,"\n");}
    | function_declaration              {fprintf(yyout,"\n");}
    | function_defn                     {fprintf(yyout,"\n");}
;



variable_declaration : int ident SEMI  
    | int ident EQUAL expr SEMI         {fprintf(yyout,"EQUALment : =\n");}
    | char ident SEMI              
    | char ident EQUAL expr SEMI        {fprintf(yyout,"EQUALment : =\n");}
;


function_declaration : int ident LEFT_BRAC function_arg RIGHT_BRAC SEMI             {fprintf(yyout,"Function declared above\n\n");}
    | int ident LEFT_BRAC RIGHT_BRAC SEMI                                           {fprintf(yyout,"Function declared above\n\n");}
    | char ident LEFT_BRAC function_arg RIGHT_BRAC SEMI                             {fprintf(yyout,"Function declared above\n\n");}
    | char ident LEFT_BRAC RIGHT_BRAC SEMI                                          {fprintf(yyout,"Function declared above\n\n");}
;


function_defn : int ident LEFT_BRAC function_arg RIGHT_BRAC function_body       {fprintf(yyout,"Function Defined above\n\n");}
    | int ident LEFT_BRAC RIGHT_BRAC function_body                              {fprintf(yyout,"Function Defined above\n\n");}
    | char ident LEFT_BRAC function_arg RIGHT_BRAC function_body                {fprintf(yyout,"Function Defined above\n\n");}
    | char ident LEFT_BRAC RIGHT_BRAC function_body                             {fprintf(yyout,"Function Defined above\n\n");}
;


function_arg : int ident                    {fprintf(yyout,"Function Arguments Passed Above\n\n");}
    | int ident COMMA function_arg
    | char ident                            {fprintf(yyout,"Function Arguments Passed Above\n\n");}
    | char ident COMMA function_arg
;


int : INT       {fprintf(yyout,"Datatype : int\n");}
;

char : CHAR     {fprintf(yyout,"Datatype : char *\n");}
;

function_body : OPEN_CURLY stmt_list CLOSE_CURLY
    | OPEN_CURLY CLOSE_CURLY
    | stmt
;

stmt_list : stmt stmt_list
    | stmt
;

stmt : EQUAL_stmt
    | function_call         {fprintf(yyout,"Function call ends \n\n");}
    | return_stmt           {fprintf(yyout,"Return statement \n\n");}
    | condition             {fprintf(yyout,"If Condition Ends \n\n");}
    | loop                  {fprintf(yyout,"While Loop Ends \n\n");}
    | variable_declaration
    | expr SEMI
;

EQUAL_stmt : expr EQUAL expr SEMI
;

return_stmt : RETURN SEMI
    | RETURN expr SEMI
;

function_call : ident LEFT_BRAC RIGHT_BRAC SEMI
    | ident LEFT_BRAC expr_list RIGHT_BRAC SEMI
;

expr_list : stmt1 COMMA expr_list
    | stmt1
;

stmt1 : EQUAL_stmt1
    |   bool
;

EQUAL_stmt1 : expr EQUAL expr
;

condition : IF LEFT_BRAC bool RIGHT_BRAC function_body
    | IF LEFT_BRAC bool RIGHT_BRAC function_body ELSE function_body
;

loop : WHILE LEFT_BRAC bool RIGHT_BRAC function_body
;

bool : bool LESS_THAN bool              {fprintf(yyout,"Operator : < \n");}
    | bool GREATER_THAN bool            {fprintf(yyout,"Operator : > \n");}
    | bool CHECKEQUAL bool              {fprintf(yyout,"Operator : == \n");}
    | bool CHECKNOT_EQUAL bool          {fprintf(yyout,"Operator : != \n");}
    | bool LESS_THAN_EQUAL bool         {fprintf(yyout,"Operator : <= \n");}
    | bool GREATER_THAN_EQUAL bool      {fprintf(yyout,"Operator : >= \n");}
    | expr
;

ident : ID LEFT_SQBRAC expr RIGHT_SQBRAC        {fprintf(yyout,"Variable : %s \n", $1);}
    | ID                                        {fprintf(yyout,"Variable : %s \n", $1);}
;

number : NUM    {fprintf(yyout,"Value : %d \n", $1);}
;

string : STRING {fprintf(yyout,"Value : %s \n", $1);}
;

expr : LEFT_BRAC expr RIGHT_BRAC
    | expr ADDITION expr              {fprintf(yyout,"Operator : + \n");}
    | expr SUBTRACTION expr           {fprintf(yyout,"Operator : - \n");}
    | expr MULTIPLY expr              {fprintf(yyout,"Operator : * \n");}
    | expr DIVIDE expr                {fprintf(yyout,"Operator : / \n");}
    | expr AND expr                   {fprintf(yyout,"Operator : & \n");}
    | expr OR expr                    {fprintf(yyout,"Operator : | \n");}
    | number                    
    | ident
;

%%

int main()
{
    yyin=fopen("Sample1.cu","r");
    yyout=fopen("parser.txt","w");
    lexout=fopen("lexer.txt","w");
    yyparse();
    return 0;
}

void yyerror(char const *s){
    printf("Syntax Error\n");
}