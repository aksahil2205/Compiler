/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

#include <stdio.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror(char const *);
extern FILE *yyin,*yyout,*lexout;

#line 80 "cucu.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cucu.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_EQUAL = 10,                     /* EQUAL  */
  YYSYMBOL_ADDITION = 11,                  /* ADDITION  */
  YYSYMBOL_SUBTRACTION = 12,               /* SUBTRACTION  */
  YYSYMBOL_DIVIDE = 13,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 14,                  /* MULTIPLY  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_SEMI = 17,                      /* SEMI  */
  YYSYMBOL_OPEN_CURLY = 18,                /* OPEN_CURLY  */
  YYSYMBOL_CLOSE_CURLY = 19,               /* CLOSE_CURLY  */
  YYSYMBOL_LEFT_BRAC = 20,                 /* LEFT_BRAC  */
  YYSYMBOL_RIGHT_BRAC = 21,                /* RIGHT_BRAC  */
  YYSYMBOL_LEFT_SQBRAC = 22,               /* LEFT_SQBRAC  */
  YYSYMBOL_RIGHT_SQBRAC = 23,              /* RIGHT_SQBRAC  */
  YYSYMBOL_GREATER_THAN = 24,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 25,                 /* LESS_THAN  */
  YYSYMBOL_CHECKEQUAL = 26,                /* CHECKEQUAL  */
  YYSYMBOL_LESS_THAN_EQUAL = 27,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 28,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_CHECKNOT_EQUAL = 29,            /* CHECKNOT_EQUAL  */
  YYSYMBOL_NUM = 30,                       /* NUM  */
  YYSYMBOL_ID = 31,                        /* ID  */
  YYSYMBOL_STRING = 32,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_Programs = 34,                  /* Programs  */
  YYSYMBOL_program = 35,                   /* program  */
  YYSYMBOL_variable_declaration = 36,      /* variable_declaration  */
  YYSYMBOL_function_declaration = 37,      /* function_declaration  */
  YYSYMBOL_function_defn = 38,             /* function_defn  */
  YYSYMBOL_function_arg = 39,              /* function_arg  */
  YYSYMBOL_int = 40,                       /* int  */
  YYSYMBOL_char = 41,                      /* char  */
  YYSYMBOL_function_body = 42,             /* function_body  */
  YYSYMBOL_stmt_list = 43,                 /* stmt_list  */
  YYSYMBOL_stmt = 44,                      /* stmt  */
  YYSYMBOL_EQUAL_stmt = 45,                /* EQUAL_stmt  */
  YYSYMBOL_return_stmt = 46,               /* return_stmt  */
  YYSYMBOL_function_call = 47,             /* function_call  */
  YYSYMBOL_expr_list = 48,                 /* expr_list  */
  YYSYMBOL_stmt1 = 49,                     /* stmt1  */
  YYSYMBOL_EQUAL_stmt1 = 50,               /* EQUAL_stmt1  */
  YYSYMBOL_condition = 51,                 /* condition  */
  YYSYMBOL_loop = 52,                      /* loop  */
  YYSYMBOL_bool = 53,                      /* bool  */
  YYSYMBOL_ident = 54,                     /* ident  */
  YYSYMBOL_number = 55,                    /* number  */
  YYSYMBOL_expr = 56                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    29,    30,    31,    32,    33,    34,    39,
      40,    41,    42,    46,    47,    48,    49,    53,    54,    55,
      56,    60,    61,    62,    63,    67,    70,    73,    74,    75,
      78,    79,    82,    83,    84,    85,    86,    87,    88,    91,
      94,    95,    98,    99,   102,   103,   106,   107,   110,   113,
     114,   117,   120,   121,   122,   123,   124,   125,   126,   129,
     130,   133,   139,   140,   141,   142,   143,   144,   145,   146,
     147
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "CHAR", "WHILE",
  "IF", "ELSE", "RETURN", "COMMA", "EQUAL", "ADDITION", "SUBTRACTION",
  "DIVIDE", "MULTIPLY", "AND", "OR", "SEMI", "OPEN_CURLY", "CLOSE_CURLY",
  "LEFT_BRAC", "RIGHT_BRAC", "LEFT_SQBRAC", "RIGHT_SQBRAC", "GREATER_THAN",
  "LESS_THAN", "CHECKEQUAL", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL",
  "CHECKNOT_EQUAL", "NUM", "ID", "STRING", "$accept", "Programs",
  "program", "variable_declaration", "function_declaration",
  "function_defn", "function_arg", "int", "char", "function_body",
  "stmt_list", "stmt", "EQUAL_stmt", "return_stmt", "function_call",
  "expr_list", "stmt1", "EQUAL_stmt1", "condition", "loop", "bool",
  "ident", "number", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-49)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,   -49,   -49,     9,    61,   -49,   -49,   -49,   -25,   -25,
     -49,   -49,   -49,   -49,   -11,    68,    72,    28,    28,   -49,
      16,    28,   -49,    30,    28,   -49,   -49,   -49,   116,   279,
     148,    18,   -25,   -25,   286,   154,    33,   245,    28,    28,
      28,    28,    28,    28,   -49,   -49,     1,    37,    32,   -49,
      10,   -49,   -25,   -25,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,    46,   272,   183,    67,    78,   -49,   -49,   -49,   189,
     -49,    97,    97,    81,    81,   122,   122,    28,    28,   -49,
     293,   -49,    74,   224,     0,    26,    60,    28,   -49,   -49,
     -49,    61,    61,   -49,   -49,   243,   122,   252,   -49,   -49,
     -49,    84,    77,    95,   -49,   302,   301,   307,   -49,   -49,
     218,    28,    28,    28,    28,    28,    28,   218,   -49,    88,
      28,    28,   -49,   -49,   302,   302,   302,   302,   302,   302,
     101,   -49,   -49,   122,   218,   -49
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    25,    26,     0,     2,     3,     7,     8,     0,     0,
       1,     4,     5,     6,    60,     0,     0,     0,     0,     9,
       0,     0,    11,     0,     0,    61,    70,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    10,     0,     0,     0,    14,
       0,    37,     0,     0,    18,    29,    32,    34,    33,    35,
      36,    70,     0,     0,    21,    23,    12,    16,    20,     0,
      62,    63,    64,    66,    65,    67,    68,     0,     0,    40,
       0,    28,     0,    31,     0,     0,     0,     0,    38,    13,
      17,     0,     0,    15,    19,     0,    58,     0,    41,    27,
      30,     0,     0,    45,    46,    47,    58,     0,    22,    24,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,    39,    51,    53,    52,    54,    56,    57,    55,
      49,    43,    44,    48,     0,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -49,   -49,   -49,    56,   110,   119,   -18,     3,     8,   -31,
      41,   -48,   -49,   -49,   -49,     5,   -49,   -49,   -49,   -49,
       6,    -8,   -49,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    51,     6,     7,    31,    52,    53,    54,
      82,    55,    56,    57,    58,   102,   103,   104,    59,    60,
     105,    26,    27,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,    16,    83,     8,    68,    36,    14,     8,     9,    10,
      18,    17,     9,     1,     2,    46,    47,    19,    48,     1,
       2,    77,    61,    32,    64,    65,    32,    61,    33,    81,
      24,    33,    90,     1,     2,    83,    21,    30,    94,    63,
      25,    14,    61,    22,    84,    85,    28,    29,    24,    79,
      34,    35,    24,    37,    69,    61,     5,    78,    25,    14,
      11,    61,    25,    14,     1,     2,    86,    71,    72,    73,
      74,    75,    76,   108,   109,    61,    91,    80,    18,   123,
      24,   101,    21,    95,    97,    19,   130,    92,    20,    22,
      25,    14,    23,    99,    32,    32,    42,    43,   119,    33,
      33,   118,    61,   135,   120,   131,    96,    96,   134,    61,
      40,    41,    42,    43,    12,   106,   107,   124,   125,   126,
     127,   128,   129,    13,   100,   132,    61,    38,    39,    40,
      41,    42,    43,    38,    39,    40,    41,    42,    43,    44,
      96,    96,    96,    96,    96,    96,     0,     0,     0,   106,
     133,     1,     2,    46,    47,     0,    48,     1,     2,    46,
      47,     0,    48,     0,     0,    49,    50,     0,    24,     0,
       0,    67,    50,     0,    24,     0,     0,     0,    25,    14,
       0,     0,     0,     0,    25,    14,     1,     2,    46,    47,
       0,    48,     1,     2,    46,    47,     0,    48,     0,     0,
      89,    50,     0,    24,     0,     0,    93,    50,     0,    24,
       0,     0,     0,    25,    14,     0,     0,     0,     0,    25,
      14,     1,     2,    46,    47,     0,    48,     1,     2,    46,
      47,     0,    48,     0,     0,     0,    50,     0,    24,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    25,    14,
       0,     0,     0,     0,    25,    14,    38,    39,    40,    41,
      42,    43,     0,     0,   110,     0,    70,   111,   112,   113,
     114,   115,   116,   117,     0,     0,   111,   112,   113,   114,
     115,   116,    87,    38,    39,    40,    41,    42,    43,    88,
      38,    39,    40,    41,    42,    43,    45,    38,    39,    40,
      41,    42,    43,    66,    38,    39,    40,    41,    42,    43,
      98,   121,    38,    39,    40,    41,    42,    43,    38,    39,
      40,    41,    42,    43,   122,     0,   111,   112,   113,   114,
     115,   116
};

static const yytype_int16 yycheck[] =
{
       8,     9,    50,     0,    35,    23,    31,     4,     0,     0,
      10,    22,     4,     3,     4,     5,     6,    17,     8,     3,
       4,    20,    30,    20,    32,    33,    23,    35,    20,    19,
      20,    23,    63,     3,     4,    83,    10,    21,    69,    21,
      30,    31,    50,    17,    52,    53,    17,    18,    20,    17,
      21,    21,    20,    24,    21,    63,     0,    20,    30,    31,
       4,    69,    30,    31,     3,     4,    20,    38,    39,    40,
      41,    42,    43,    91,    92,    83,     9,    48,    10,   110,
      20,    21,    10,    77,    78,    17,   117,     9,    20,    17,
      30,    31,    20,    19,    91,    92,    15,    16,    21,    91,
      92,    17,   110,   134,     9,    17,    77,    78,     7,   117,
      13,    14,    15,    16,     4,    86,    87,   111,   112,   113,
     114,   115,   116,     4,    83,   120,   134,    11,    12,    13,
      14,    15,    16,    11,    12,    13,    14,    15,    16,    23,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,   120,
     121,     3,     4,     5,     6,    -1,     8,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    17,    18,    -1,    20,    -1,
      -1,    17,    18,    -1,    20,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    30,    31,     3,     4,     5,     6,
      -1,     8,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    30,
      31,     3,     4,     5,     6,    -1,     8,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    30,    31,    11,    12,    13,    14,
      15,    16,    -1,    -1,    21,    -1,    21,    24,    25,    26,
      27,    28,    29,    21,    -1,    -1,    24,    25,    26,    27,
      28,    29,    10,    11,    12,    13,    14,    15,    16,    17,
      11,    12,    13,    14,    15,    16,    17,    11,    12,    13,
      14,    15,    16,    17,    11,    12,    13,    14,    15,    16,
      17,    10,    11,    12,    13,    14,    15,    16,    11,    12,
      13,    14,    15,    16,    17,    -1,    24,    25,    26,    27,
      28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    34,    35,    36,    37,    38,    40,    41,
       0,    36,    37,    38,    31,    54,    54,    22,    10,    17,
      20,    10,    17,    20,    20,    30,    54,    55,    56,    56,
      21,    39,    40,    41,    56,    21,    39,    56,    11,    12,
      13,    14,    15,    16,    23,    17,     5,     6,     8,    17,
      18,    36,    40,    41,    42,    44,    45,    46,    47,    51,
      52,    54,    56,    21,    54,    54,    17,    17,    42,    21,
      21,    56,    56,    56,    56,    56,    56,    20,    20,    17,
      56,    19,    43,    44,    54,    54,    20,    10,    17,    17,
      42,     9,     9,    17,    42,    53,    56,    53,    17,    19,
      43,    21,    48,    49,    50,    53,    56,    56,    39,    39,
      21,    24,    25,    26,    27,    28,    29,    21,    17,    21,
       9,    10,    17,    42,    53,    53,    53,    53,    53,    53,
      42,    17,    48,    56,     7,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    35,    35,    35,    35,    36,
      36,    36,    36,    37,    37,    37,    37,    38,    38,    38,
      38,    39,    39,    39,    39,    40,    41,    42,    42,    42,
      43,    43,    44,    44,    44,    44,    44,    44,    44,    45,
      46,    46,    47,    47,    48,    48,    49,    49,    50,    51,
      51,    52,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     3,
       5,     3,     5,     6,     5,     6,     5,     6,     5,     6,
       5,     2,     4,     2,     4,     1,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       2,     3,     4,     5,     3,     1,     1,     1,     3,     5,
       7,     5,     3,     3,     3,     3,     3,     3,     1,     4,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* program: variable_declaration  */
#line 29 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1251 "cucu.tab.c"
    break;

  case 4: /* program: program variable_declaration  */
#line 30 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1257 "cucu.tab.c"
    break;

  case 5: /* program: program function_declaration  */
#line 31 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1263 "cucu.tab.c"
    break;

  case 6: /* program: program function_defn  */
#line 32 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1269 "cucu.tab.c"
    break;

  case 7: /* program: function_declaration  */
#line 33 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1275 "cucu.tab.c"
    break;

  case 8: /* program: function_defn  */
#line 34 "cucu.y"
                                        {fprintf(yyout,"\n");}
#line 1281 "cucu.tab.c"
    break;

  case 10: /* variable_declaration: int ident EQUAL expr SEMI  */
#line 40 "cucu.y"
                                        {fprintf(yyout,"EQUALment : =\n");}
#line 1287 "cucu.tab.c"
    break;

  case 12: /* variable_declaration: char ident EQUAL expr SEMI  */
#line 42 "cucu.y"
                                        {fprintf(yyout,"EQUALment : =\n");}
#line 1293 "cucu.tab.c"
    break;

  case 13: /* function_declaration: int ident LEFT_BRAC function_arg RIGHT_BRAC SEMI  */
#line 46 "cucu.y"
                                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1299 "cucu.tab.c"
    break;

  case 14: /* function_declaration: int ident LEFT_BRAC RIGHT_BRAC SEMI  */
#line 47 "cucu.y"
                                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1305 "cucu.tab.c"
    break;

  case 15: /* function_declaration: char ident LEFT_BRAC function_arg RIGHT_BRAC SEMI  */
#line 48 "cucu.y"
                                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1311 "cucu.tab.c"
    break;

  case 16: /* function_declaration: char ident LEFT_BRAC RIGHT_BRAC SEMI  */
#line 49 "cucu.y"
                                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1317 "cucu.tab.c"
    break;

  case 17: /* function_defn: int ident LEFT_BRAC function_arg RIGHT_BRAC function_body  */
#line 53 "cucu.y"
                                                                                {fprintf(yyout,"Function Defined above\n\n");}
#line 1323 "cucu.tab.c"
    break;

  case 18: /* function_defn: int ident LEFT_BRAC RIGHT_BRAC function_body  */
#line 54 "cucu.y"
                                                                                {fprintf(yyout,"Function Defined above\n\n");}
#line 1329 "cucu.tab.c"
    break;

  case 19: /* function_defn: char ident LEFT_BRAC function_arg RIGHT_BRAC function_body  */
#line 55 "cucu.y"
                                                                                {fprintf(yyout,"Function Defined above\n\n");}
#line 1335 "cucu.tab.c"
    break;

  case 20: /* function_defn: char ident LEFT_BRAC RIGHT_BRAC function_body  */
#line 56 "cucu.y"
                                                                                {fprintf(yyout,"Function Defined above\n\n");}
#line 1341 "cucu.tab.c"
    break;

  case 21: /* function_arg: int ident  */
#line 60 "cucu.y"
                                            {fprintf(yyout,"Function Arguments Passed Above\n\n");}
#line 1347 "cucu.tab.c"
    break;

  case 23: /* function_arg: char ident  */
#line 62 "cucu.y"
                                            {fprintf(yyout,"Function Arguments Passed Above\n\n");}
#line 1353 "cucu.tab.c"
    break;

  case 25: /* int: INT  */
#line 67 "cucu.y"
                {fprintf(yyout,"Datatype : int\n");}
#line 1359 "cucu.tab.c"
    break;

  case 26: /* char: CHAR  */
#line 70 "cucu.y"
                {fprintf(yyout,"Datatype : char *\n");}
#line 1365 "cucu.tab.c"
    break;

  case 33: /* stmt: function_call  */
#line 83 "cucu.y"
                            {fprintf(yyout,"Function call ends \n\n");}
#line 1371 "cucu.tab.c"
    break;

  case 34: /* stmt: return_stmt  */
#line 84 "cucu.y"
                            {fprintf(yyout,"Return statement \n\n");}
#line 1377 "cucu.tab.c"
    break;

  case 35: /* stmt: condition  */
#line 85 "cucu.y"
                            {fprintf(yyout,"If Condition Ends \n\n");}
#line 1383 "cucu.tab.c"
    break;

  case 36: /* stmt: loop  */
#line 86 "cucu.y"
                            {fprintf(yyout,"While Loop Ends \n\n");}
#line 1389 "cucu.tab.c"
    break;

  case 52: /* bool: bool LESS_THAN bool  */
#line 120 "cucu.y"
                                        {fprintf(yyout,"Operator : < \n");}
#line 1395 "cucu.tab.c"
    break;

  case 53: /* bool: bool GREATER_THAN bool  */
#line 121 "cucu.y"
                                        {fprintf(yyout,"Operator : > \n");}
#line 1401 "cucu.tab.c"
    break;

  case 54: /* bool: bool CHECKEQUAL bool  */
#line 122 "cucu.y"
                                        {fprintf(yyout,"Operator : == \n");}
#line 1407 "cucu.tab.c"
    break;

  case 55: /* bool: bool CHECKNOT_EQUAL bool  */
#line 123 "cucu.y"
                                        {fprintf(yyout,"Operator : != \n");}
#line 1413 "cucu.tab.c"
    break;

  case 56: /* bool: bool LESS_THAN_EQUAL bool  */
#line 124 "cucu.y"
                                        {fprintf(yyout,"Operator : <= \n");}
#line 1419 "cucu.tab.c"
    break;

  case 57: /* bool: bool GREATER_THAN_EQUAL bool  */
#line 125 "cucu.y"
                                        {fprintf(yyout,"Operator : >= \n");}
#line 1425 "cucu.tab.c"
    break;

  case 59: /* ident: ID LEFT_SQBRAC expr RIGHT_SQBRAC  */
#line 129 "cucu.y"
                                                {fprintf(yyout,"Variable : %s \n", (yyvsp[-3].str));}
#line 1431 "cucu.tab.c"
    break;

  case 60: /* ident: ID  */
#line 130 "cucu.y"
                                                {fprintf(yyout,"Variable : %s \n", (yyvsp[0].str));}
#line 1437 "cucu.tab.c"
    break;

  case 61: /* number: NUM  */
#line 133 "cucu.y"
                {fprintf(yyout,"Value : %d \n", (yyvsp[0].num));}
#line 1443 "cucu.tab.c"
    break;

  case 63: /* expr: expr ADDITION expr  */
#line 140 "cucu.y"
                                      {fprintf(yyout,"Operator : + \n");}
#line 1449 "cucu.tab.c"
    break;

  case 64: /* expr: expr SUBTRACTION expr  */
#line 141 "cucu.y"
                                      {fprintf(yyout,"Operator : - \n");}
#line 1455 "cucu.tab.c"
    break;

  case 65: /* expr: expr MULTIPLY expr  */
#line 142 "cucu.y"
                                      {fprintf(yyout,"Operator : * \n");}
#line 1461 "cucu.tab.c"
    break;

  case 66: /* expr: expr DIVIDE expr  */
#line 143 "cucu.y"
                                      {fprintf(yyout,"Operator : / \n");}
#line 1467 "cucu.tab.c"
    break;

  case 67: /* expr: expr AND expr  */
#line 144 "cucu.y"
                                      {fprintf(yyout,"Operator : & \n");}
#line 1473 "cucu.tab.c"
    break;

  case 68: /* expr: expr OR expr  */
#line 145 "cucu.y"
                                      {fprintf(yyout,"Operator : | \n");}
#line 1479 "cucu.tab.c"
    break;


#line 1483 "cucu.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 150 "cucu.y"


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
