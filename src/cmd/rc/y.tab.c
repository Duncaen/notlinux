/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 12 "syn.y" /* yacc.c:339  */

#include "rc.h"
#include "fns.h"

#line 71 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FOR = 258,
    IN = 259,
    WHILE = 260,
    IF = 261,
    NOT = 262,
    TWIDDLE = 263,
    BANG = 264,
    SUBSHELL = 265,
    SWITCH = 266,
    FN = 267,
    WORD = 268,
    REDIR = 269,
    DUP = 270,
    PIPE = 271,
    SUB = 272,
    SIMPLE = 273,
    ARGLIST = 274,
    WORDS = 275,
    BRACE = 276,
    PAREN = 277,
    PCMD = 278,
    PIPEFD = 279,
    ANDAND = 280,
    OROR = 281,
    COUNT = 282
  };
#endif
/* Tokens.  */
#define FOR 258
#define IN 259
#define WHILE 260
#define IF 261
#define NOT 262
#define TWIDDLE 263
#define BANG 264
#define SUBSHELL 265
#define SWITCH 266
#define FN 267
#define WORD 268
#define REDIR 269
#define DUP 270
#define PIPE 271
#define SUB 272
#define SIMPLE 273
#define ARGLIST 274
#define WORDS 275
#define BRACE 276
#define PAREN 277
#define PCMD 278
#define PIPEFD 279
#define ANDAND 280
#define OROR 281
#define COUNT 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "syn.y" /* yacc.c:355  */

	struct tree *tree;

#line 169 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    31,     2,    29,     2,    34,     2,
      37,    25,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    28,     2,    39,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      26,    27,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    43,    45,    45,    46,    46,    56,    56,    58,
      58,    60,    60,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    91
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FOR", "IN", "WHILE", "IF", "NOT",
  "TWIDDLE", "BANG", "SUBSHELL", "SWITCH", "FN", "WORD", "REDIR", "DUP",
  "PIPE", "SUB", "SIMPLE", "ARGLIST", "WORDS", "BRACE", "PAREN", "PCMD",
  "PIPEFD", "')'", "ANDAND", "OROR", "'^'", "'$'", "COUNT", "'\"'",
  "'\\n'", "';'", "'&'", "'{'", "'}'", "'('", "'='", "'`'", "$accept",
  "rc", "line", "body", "cmdsa", "cmdsan", "brace", "paren", "assign",
  "epilog", "redir", "cmd", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6",
  "simple", "first", "word", "comword", "keyword", "words", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    41,   280,   281,    94,    36,
     282,    34,    10,    59,    38,   123,   125,    40,    61,    96
};
# endif

#define YYPACT_NINF -30

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-30)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     121,   -29,   -23,    -6,   295,   307,   307,   295,   -30,   -30,
     134,   -30,   295,   295,   295,   307,   -30,   -20,    12,   -15,
     307,    -4,   307,   307,    61,   171,   -19,   -30,   295,   307,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -20,     1,   -30,   -30,    24,    24,     1,
     134,   -30,     1,    29,   -30,   -30,    11,   -30,   307,    34,
     184,   -30,   -30,   -30,   -30,   295,   -30,    -4,    24,    24,
     307,   307,   307,   -30,   -30,   -30,     1,   295,   295,     9,
      23,   307,   307,   307,   295,   295,   -20,   -30,     1,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,    24,    24,   -30,     1,
     -30,   -30,   -30,    36,    36,    36,   -30,   -30,   221,   258,
     307,   -30,   -30,    36,   307,    36
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      19,     0,     0,     0,     0,    19,    19,     0,    70,    56,
       0,    18,     0,     0,     0,    19,    70,     0,     0,     0,
      19,    15,    19,    19,     4,    33,    44,    47,     0,    19,
      29,    23,    21,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,    70,    50,    49,    40,    41,    31,
      43,    59,    17,    52,    55,    54,     0,    10,    19,     6,
       0,    57,     1,     3,     5,     0,    20,    15,    39,    38,
      19,    19,    19,     8,     9,    46,    45,     0,     0,     0,
       0,    19,    19,    19,     0,    34,     0,    42,    71,    70,
      12,     7,    11,    58,    16,    37,    35,    36,    48,    14,
      70,    27,    13,    30,    24,    22,    51,    32,     0,     0,
      19,    53,    25,    28,    19,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,    33,   -25,    16,   -30,    15,    48,   -30,   -13,
     -18,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
      31,    14,   -30,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    18,    19,    56,    57,    58,    21,    30,    22,    66,
      23,    59,    83,    82,   114,   110,    81,    86,    25,    26,
      88,    27,    46,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      24,    31,    60,    67,    80,    47,    48,    75,    28,    77,
      65,    11,    62,   100,    29,    15,    20,    63,    45,    78,
      24,    45,    68,    69,    45,    51,    45,    45,    45,    84,
      85,    29,    61,    91,   101,    44,    20,    84,    49,    45,
      70,    52,    45,    53,    54,    55,    89,    90,   102,    67,
      70,    32,    70,    64,    94,     0,    76,     0,    51,    79,
      71,    72,    71,    72,    45,    87,    92,    73,    74,     0,
      95,    96,    97,     0,    45,   108,     0,    70,     0,    45,
       0,   103,   104,   105,     0,     0,   109,    71,    72,     0,
       0,    45,    45,     0,    73,    74,    52,     0,    45,    45,
       0,   107,     0,     0,     0,     0,     0,     0,    98,    99,
     113,     0,     0,     0,   115,   106,     0,     0,     0,     0,
       0,    -2,    45,    45,     1,     0,     2,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     9,    43,     0,
      12,    13,    14,     0,     0,     0,    15,     0,    16,     0,
      17,     0,     0,    12,    13,    14,     0,     0,     0,    15,
       0,    16,     0,    17,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     9,    10,    11,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     9,    43,     0,
      12,    13,    14,     0,     0,     0,     0,     0,    16,    93,
      17,     0,     0,    12,    13,    14,     0,     0,     0,     0,
       0,    16,     0,    17,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     9,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
      12,    13,    14,     0,     0,     0,     0,     0,    16,     0,
      17,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     9,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,    12,    13,    14,
       0,     0,     0,     0,     0,    16,     0,    17,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     9,    43,
       1,     0,     2,     3,     0,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,     0,     0,     0,
       0,     0,    16,     0,    17,     0,    12,    13,    14,     0,
       0,     0,    15,     0,    16,     0,    17
};

static const yytype_int8 yycheck[] =
{
       0,     7,    16,    21,    29,     5,     6,    25,    37,    28,
      14,    15,     0,     4,    37,    35,     0,    32,     4,    38,
      20,     7,    22,    23,    10,    10,    12,    13,    14,    28,
      44,    37,    17,    58,    25,     4,    20,    28,     7,    25,
      16,    10,    28,    12,    13,    14,    17,    36,    25,    67,
      16,     3,    16,    20,    67,    -1,    25,    -1,    43,    28,
      26,    27,    26,    27,    50,    50,    32,    33,    34,    -1,
      70,    71,    72,    -1,    60,    89,    -1,    16,    -1,    65,
      -1,    81,    82,    83,    -1,    -1,   100,    26,    27,    -1,
      -1,    77,    78,    -1,    33,    34,    65,    -1,    84,    85,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
     110,    -1,    -1,    -1,   114,    84,    -1,    -1,    -1,    -1,
      -1,     0,   108,   109,     3,    -1,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      29,    30,    31,    -1,    -1,    -1,    35,    -1,    37,    -1,
      39,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,    35,
      -1,    37,    -1,    39,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,    25,
      39,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       3,    -1,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    29,    30,    31,    -1,
      -1,    -1,    35,    -1,    37,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,     9,    10,    11,    12,    13,
      14,    15,    29,    30,    31,    35,    37,    39,    41,    42,
      44,    46,    48,    50,    51,    58,    59,    61,    37,    37,
      47,     7,    47,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    14,    60,    61,    62,    51,    51,    60,
      63,    46,    60,    60,    60,    60,    43,    44,    45,    51,
      63,    46,     0,    32,    42,    14,    49,    50,    51,    51,
      16,    26,    27,    33,    34,    50,    60,    28,    38,    60,
      43,    56,    53,    52,    28,    63,    57,    46,    60,    17,
      36,    43,    32,    25,    49,    51,    51,    51,    60,    60,
       4,    25,    25,    51,    51,    51,    60,    46,    63,    63,
      55,    25,    25,    51,    54,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    44,    44,
      45,    45,    46,    47,    48,    49,    49,    50,    50,    51,
      51,    52,    51,    53,    51,    54,    51,    55,    51,    56,
      51,    57,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    58,    58,    58,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     2,     2,     2,
       1,     2,     3,     3,     3,     0,     2,     2,     1,     0,
       2,     0,     4,     0,     4,     0,     8,     0,     6,     0,
       4,     0,     4,     1,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     2,     1,     2,     2,     1,     3,     1,
       1,     3,     2,     5,     2,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 24 "syn.y" /* yacc.c:1646  */
    { return 1;}
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 25 "syn.y" /* yacc.c:1646  */
    {return !compile((yyvsp[-1].tree));}
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 27 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(';', (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 29 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(';', (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 31 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1('&', (yyvsp[-1].tree));}
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 34 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1(BRACE, (yyvsp[-1].tree));}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 35 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1(PCMD, (yyvsp[-1].tree));}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 36 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2('=', (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 37 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=0;}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 38 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung2((yyvsp[-1].tree), (yyvsp[-1].tree)->child[0], (yyvsp[0].tree));}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 39 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung1((yyvsp[-1].tree), (yyvsp[-1].tree)->rtype==HERE?heredoc((yyvsp[0].tree)):(yyvsp[0].tree));}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 41 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=0;}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 42 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=epimung((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 43 "syn.y" /* yacc.c:1646  */
    {skipnl();}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 44 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung2((yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 45 "syn.y" /* yacc.c:1646  */
    {skipnl();}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 45 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung1((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 46 "syn.y" /* yacc.c:1646  */
    {skipnl();}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 55 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung3((yyvsp[-7].tree), (yyvsp[-5].tree), (yyvsp[-3].tree) ? (yyvsp[-3].tree) : tree1(PAREN, (yyvsp[-3].tree)), (yyvsp[0].tree));}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 56 "syn.y" /* yacc.c:1646  */
    {skipnl();}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 57 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung3((yyvsp[-5].tree), (yyvsp[-3].tree), (struct tree *)0, (yyvsp[0].tree));}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 58 "syn.y" /* yacc.c:1646  */
    {skipnl();}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 59 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung2((yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 60 "syn.y" /* yacc.c:1646  */
    {skipnl();}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 61 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(SWITCH, (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 62 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=simplemung((yyvsp[0].tree));}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 63 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung2((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 64 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(ANDAND, (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 65 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(OROR, (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 66 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung2((yyvsp[-1].tree), (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 67 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung2((yyvsp[-1].tree), (yyvsp[-1].tree)->child[0], (yyvsp[0].tree));}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 68 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung3((yyvsp[-1].tree), (yyvsp[-1].tree)->child[0], (yyvsp[-1].tree)->child[1], (yyvsp[0].tree));}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 69 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung1((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 70 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung1((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 71 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(FN, (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 72 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1(FN, (yyvsp[0].tree));}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 74 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(ARGLIST, (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 75 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(ARGLIST, (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 77 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2('^', (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 78 "syn.y" /* yacc.c:1646  */
    {lastword=1; (yyvsp[0].tree)->type=WORD;}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 80 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2('^', (yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 81 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1('$', (yyvsp[0].tree));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 82 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(SUB, (yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 83 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1('"', (yyvsp[0].tree));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 84 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1(COUNT, (yyvsp[0].tree));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 86 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1('`', (yyvsp[0].tree));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 87 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree1(PAREN, (yyvsp[-1].tree));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 88 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=mung1((yyvsp[-1].tree), (yyvsp[0].tree)); (yyval.tree)->type=PIPEFD;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 90 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=(struct tree*)0;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 91 "syn.y" /* yacc.c:1646  */
    {(yyval.tree)=tree2(WORDS, (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1687 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
