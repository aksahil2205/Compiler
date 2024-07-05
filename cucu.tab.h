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

#ifndef YY_YY_CUCU_TAB_H_INCLUDED
# define YY_YY_CUCU_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    CHAR = 259,                    /* CHAR  */
    WHILE = 260,                   /* WHILE  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    RETURN = 263,                  /* RETURN  */
    COMMA = 264,                   /* COMMA  */
    EQUAL = 265,                   /* EQUAL  */
    ADDITION = 266,                /* ADDITION  */
    SUBTRACTION = 267,             /* SUBTRACTION  */
    DIVIDE = 268,                  /* DIVIDE  */
    MULTIPLY = 269,                /* MULTIPLY  */
    AND = 270,                     /* AND  */
    OR = 271,                      /* OR  */
    SEMI = 272,                    /* SEMI  */
    OPEN_CURLY = 273,              /* OPEN_CURLY  */
    CLOSE_CURLY = 274,             /* CLOSE_CURLY  */
    LEFT_BRAC = 275,               /* LEFT_BRAC  */
    RIGHT_BRAC = 276,              /* RIGHT_BRAC  */
    LEFT_SQBRAC = 277,             /* LEFT_SQBRAC  */
    RIGHT_SQBRAC = 278,            /* RIGHT_SQBRAC  */
    GREATER_THAN = 279,            /* GREATER_THAN  */
    LESS_THAN = 280,               /* LESS_THAN  */
    CHECKEQUAL = 281,              /* CHECKEQUAL  */
    LESS_THAN_EQUAL = 282,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 283,      /* GREATER_THAN_EQUAL  */
    CHECKNOT_EQUAL = 284,          /* CHECKNOT_EQUAL  */
    NUM = 285,                     /* NUM  */
    ID = 286,                      /* ID  */
    STRING = 287                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "cucu.y"

    int num;
    char *str;

#line 101 "cucu.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CUCU_TAB_H_INCLUDED  */
