/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

#include "tree.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
#include <list>



using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;


void yyerror(const char *s);

#line 88 "bison.tab.c" /* yacc.c:339  */

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
   by #include "bison.tab.h".  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    T_Void = 258,
    T_Bool = 259,
    T_Int = 260,
    T_Double = 261,
    T_String = 262,
    T_Class = 263,
    T_LessEqual = 264,
    T_GreaterEqual = 265,
    T_Equal = 266,
    T_NotEqual = 267,
    T_Dims = 268,
    T_SingleEqual = 269,
    T_LeftShift = 270,
    T_RightShift = 271,
    T_And = 272,
    T_Or = 273,
    T_Null = 274,
    T_Extends = 275,
    T_This = 276,
    T_Interface = 277,
    T_Implements = 278,
    T_While = 279,
    T_For = 280,
    T_If = 281,
    T_Else = 282,
    T_Return = 283,
    T_Break = 284,
    T_New = 285,
    T_NewArray = 286,
    T_Print = 287,
    T_ReadInteger = 288,
    T_ReadLine = 289,
    T_Switch = 290,
    T_Case = 291,
    T_Default = 292,
    T_Incr = 293,
    T_Decr = 294,
    CLASS = 295,
    T_Call = 296,
    VOID = 297,
    TRUE = 298,
    FALSE = 299,
    DECIMAL = 300,
    T_Semicolon = 301,
    END = 302,
    ENDL = 303,
    TCASSIGNMENT = 304,
    TCEQ = 305,
    TCNE = 306,
    TCLT = 307,
    TCLE = 308,
    TCGT = 309,
    TCGE = 310,
    T_Pl = 311,
    T_Pr = 312,
    TCLB = 313,
    TCRB = 314,
    T_Srb = 315,
    T_Slb = 316,
    T_Comma = 317,
    TCDOT = 318,
    T_Add = 319,
    T_Sub = 320,
    T_Mul = 321,
    T_Div = 322,
    T_Mod = 323,
    T_Identifier = 324,
    T_StringConstant = 325,
    T_IntConstant = 326,
    T_DoubleConstant = 327,
    T_BoolConstant = 328,
    NEG = 329,
    NOELSE = 330,
    EMPTYCASE = 331,
    EMPTYDEFAULT = 332,
    NONEMPTYCASE = 333,
    NONEMPTYDEFAULT = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 25 "bison.y" /* yacc.c:355  */

  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[32]; 
  Decl             *decl;
  List<Decl*>      *declList;
  VarDecl          *varDecl;
  ClassDecl        *classDecl;
  List<VarDecl*>   *varDeclList;
  Type             *type;
  NamedType        *namedType;

#line 223 "bison.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "bison.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1609

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    96,     2,     2,     2,    74,     2,
      92,    93,     2,     2,    88,    95,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    91,
      77,     2,    78,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    76,    90,    81,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    79,
      83,    84,    85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,   100,   101,   105,   106,   107,   108,   112,
     113,   117,   124,   125,   126,   127,   128,   132,   135,   140,
     148,   149,   153,   154,   158,   159,   163,   164,   168,   172,
     173,   174,   175,   176,   177,   181,   182,   186,   187,   191,
     195,   200,   201,   205,   206,   207,   208,   212,   213,   217,
     218,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   235,   236,   241,   242,   246,   247,   251,   252,   256,
     257,   261,   262,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   304,   305,   306,
     309,   310,   313,   314,   318,   319,   323,   324,   325,   330,
     331,   332,   333,   334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Double",
  "T_String", "T_Class", "T_LessEqual", "T_GreaterEqual", "T_Equal",
  "T_NotEqual", "T_Dims", "T_SingleEqual", "T_LeftShift", "T_RightShift",
  "T_And", "T_Or", "T_Null", "T_Extends", "T_This", "T_Interface",
  "T_Implements", "T_While", "T_For", "T_If", "T_Else", "T_Return",
  "T_Break", "T_New", "T_NewArray", "T_Print", "T_ReadInteger",
  "T_ReadLine", "T_Switch", "T_Case", "T_Default", "T_Incr", "T_Decr",
  "CLASS", "T_Call", "VOID", "TRUE", "FALSE", "DECIMAL", "T_Semicolon",
  "END", "ENDL", "TCASSIGNMENT", "TCEQ", "TCNE", "TCLT", "TCLE", "TCGT",
  "TCGE", "T_Pl", "T_Pr", "TCLB", "TCRB", "T_Srb", "T_Slb", "T_Comma",
  "TCDOT", "T_Add", "T_Sub", "T_Mul", "T_Div", "T_Mod", "T_Identifier",
  "T_StringConstant", "T_IntConstant", "T_DoubleConstant",
  "T_BoolConstant", "'&'", "'^'", "'|'", "'<'", "'>'", "NEG", "'!'", "'~'",
  "'.'", "NOELSE", "EMPTYCASE", "EMPTYDEFAULT", "NONEMPTYCASE",
  "NONEMPTYDEFAULT", "','", "'{'", "'}'", "';'", "'('", "')'", "':'",
  "'-'", "'\"'", "$accept", "Program", "DeclList", "Decl", "VarDecl",
  "Variable", "Type", "NamedType", "ClassDecl", "ClassExtends",
  "ClassImplements", "ImplementsTypeList", "InterfaceDecl", "FnDecl",
  "FieldList", "Formals", "FormalsList", "Prototype", "FnDef",
  "PrototypeList", "StmtBlock", "StmtList", "VarDeclList", "Stmt",
  "OptExpr", "CaseStmtList", "CaseStmt", "DefaultStmt", "IfStmt",
  "ExprList", "Expr", "Call", "callout_args", "callout_args_sub",
  "Actuals", "LValue", "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    38,    94,   124,    60,    62,   329,
      33,   126,    46,   330,   331,   332,   333,   334,    44,   123,
     125,    59,    40,    41,    58,    45,    34
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -69

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-69)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,  -124,  -124,  -124,  -124,  -124,   -53,   -37,    36,    99,
    -124,  -124,   -28,   -26,  -124,  -124,  -124,    -7,    25,   -31,
    -124,  -124,  -124,    -6,   -20,   174,  -124,    -5,    48,     8,
      23,   132,  -124,  -124,     4,     7,    16,  1256,    19,    43,
      22,    24,    27,    28,    32,    57,  -124,    61,  -124,  -124,
    -124,  -124,   971,   971,   971,   971,   971,  -124,    63,  -124,
     848,   253,  -124,    80,  -124,  1346,  -124,   117,  -124,  -124,
      64,    82,  -124,    72,  -124,    51,    21,    97,  -124,    52,
      58,   971,   971,   971,  -124,   731,  -124,  -124,  -124,   971,
     971,    54,    55,   971,   971,   971,   -44,   -44,   521,   -44,
     447,  -124,  -124,  -124,  -124,  -124,   926,  -124,   971,   971,
     971,   971,   971,   971,   971,   971,  -124,  -124,   971,   971,
     971,   971,   971,   971,   971,   971,   971,   971,   971,    81,
     971,  -124,    66,   332,   -20,  -124,  -124,  -124,  -124,  -124,
     132,   552,    60,   626,  -124,   827,   -46,  1346,  -124,  -124,
     657,  1346,    67,    92,  -124,  -124,  -124,  1527,  1527,  1494,
    1494,     2,     2,  1420,  1379,  1305,    62,    62,    -8,    -8,
      -8,  1453,  1453,  1453,  1527,  1527,    65,  1346,    90,  -124,
    -124,  -124,   411,  -124,  -124,  1238,   971,  1238,   132,   971,
      69,    74,   -13,  -124,  -124,   971,  -124,  -124,  -124,  -124,
    -124,  -124,   750,   134,    75,  1346,  -124,   129,  -124,   971,
      77,   971,  1238,  -124,   -42,    -2,  -124,  1346,  -124,  -124,
      79,  -124,    88,  1238,    89,  -124,    84,  1238,  -124,  1004,
    1082,  -124,  -124,  1160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,    15,    16,     0,     0,     0,     2,
       4,     6,     0,     0,     5,     7,     8,     0,    21,     0,
       1,     3,     9,     0,    11,    62,    28,     0,    23,     0,
       0,    36,   123,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,   116,   122,   119,
     120,   121,     0,     0,     0,     0,     0,    50,     0,    60,
      62,    62,    48,     0,    58,    61,    74,    73,    75,    20,
       0,     0,    27,     0,    42,     0,     0,     0,    37,     0,
      35,     0,    62,     0,    53,     0,    55,    17,   104,     0,
       0,     0,     0,     0,     0,   115,    95,    96,     0,    94,
       0,    11,    45,    47,    44,    49,    62,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    22,    62,     0,    39,    26,    41,    10,    40,
       0,     0,     0,     0,    54,     0,     0,    72,   102,   103,
       0,   110,   114,     0,    99,   100,    43,    81,    80,    82,
      83,    92,    93,    77,    76,     0,    84,    85,    86,    87,
      88,    91,    89,    90,    78,    79,   117,   106,     0,    19,
      32,    33,    62,    34,    38,    62,     0,    62,     0,     0,
       0,     0,     0,   107,   118,   115,    24,    18,    29,    30,
      31,    52,     0,    69,     0,    71,    56,     0,   108,   112,
       0,    62,    62,   105,     0,     0,    64,   113,   111,   109,
       0,    70,     0,    62,     0,    63,     0,    62,    66,    65,
      62,    59,    57,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,   166,   -24,   -25,   -22,  -124,  -124,  -124,
    -124,  -124,  -124,  -123,  -124,  -124,  -124,   108,   -21,  -124,
     168,   -59,  -124,   -60,   -77,  -124,   -29,  -124,  -124,    98,
     -33,  -124,  -124,  -124,    -4,  -124,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    13,    88,    14,    28,
      71,   132,    15,    16,   182,    79,    80,    74,    17,    76,
      59,    60,    61,    62,    63,   215,   216,   226,    64,   152,
      65,    66,   192,   218,   153,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,    57,   106,    58,    85,   142,    78,    73,    75,    58,
     181,     1,     2,     3,     4,     5,    18,   118,    22,    96,
      97,    98,    99,   100,     1,     2,     3,     4,     5,   222,
     116,   117,    19,    23,   214,   224,    20,   105,   129,    58,
     116,   117,   189,    24,   208,    27,   103,   190,   141,   209,
     143,    25,   223,   118,    73,    75,   145,   147,    29,   199,
     150,   151,   147,   118,    69,    30,   119,   120,   121,   122,
     123,    70,    31,   183,   129,   157,   158,   159,   160,   161,
     162,   163,   164,    77,   129,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    81,   177,    72,    82,
     116,   117,     1,     2,     3,     4,     5,     6,    83,   180,
      86,   136,    87,    94,    89,   184,    90,    95,    58,    91,
      92,     7,   200,   118,    93,   201,   107,   203,   121,   122,
     123,   130,   101,   131,   220,     1,     2,     3,     4,     5,
     133,   134,   135,   138,   129,   139,   140,   148,   149,   193,
     176,   186,   221,   202,   178,   189,   205,   195,   198,   196,
     206,   212,   147,   207,   229,   214,   204,   232,   213,   103,
     219,   233,   227,   103,   231,    21,   217,     1,     2,     3,
       4,     5,   228,   230,   137,    26,   225,     0,   146,     0,
       0,   210,     0,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,    52,    53,     1,     2,     3,     4,
       5,     0,     0,     0,     0,     0,    54,     0,     0,    55,
      56,     0,    32,     0,    33,     0,     0,    34,    35,    36,
       0,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,    52,    53,     1,     2,     3,     4,     5,
       0,     0,     0,     0,     0,    54,     0,     0,    55,    56,
       0,    32,     0,    33,     0,     0,    34,    35,    36,     0,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,    52,    53,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,    54,     0,     0,    55,    56,     0,
      32,     0,    33,     0,     0,    34,    35,    36,     0,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,    45,     0,     0,     0,   108,   109,   110,   111,
       0,     0,   112,   113,   114,   115,     0,     0,     0,    25,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,   116,   117,     0,     0,     0,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,    55,    56,   118,     0,
       0,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,     0,     0,     0,   129,
     108,   109,   110,   111,     0,     0,   112,   113,   114,   115,
       0,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     117,   108,   109,   110,   111,     0,     0,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
     116,   117,     0,     0,     0,   124,   125,   126,   127,   128,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   154,     0,   119,   120,   121,   122,
     123,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,     0,     0,     0,   129,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   115,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,   117,   108,   109,   110,   111,
       0,     0,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   116,   117,     0,     0,     0,
     124,   125,   126,   127,   128,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   187,
       0,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,     0,     0,     0,   129,
     108,   109,   110,   111,     0,     0,   112,   113,   114,   115,
     191,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,     0,     0,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,   117,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,   124,   125,   126,   127,   128,
       0,   118,     0,   129,   119,   120,   121,   122,   123,     0,
       0,     0,   144,     0,   124,   125,   126,   127,   128,     0,
       0,     0,   129,     0,     0,     0,   108,   109,   110,   111,
       0,   211,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   117,    32,     0,    33,
       0,     0,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,   118,    45,
       0,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,    25,   102,     0,   129,
       0,     0,     0,     0,     0,   188,     0,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,    55,    56,    32,     0,    33,     0,     0,
      34,    35,    36,     0,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,   156,     0,     0,     0,     0,
      32,     0,    33,     0,     0,    47,    48,    49,    50,    51,
       0,    39,    40,     0,    42,    43,    52,    53,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,    54,     0,
       0,    55,    56,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      47,    48,    49,    50,    51,    45,     0,     0,     0,     0,
     -62,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    54,     0,     0,    55,    56,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,    55,
      56,    32,     0,    33,     0,     0,    34,    35,    36,     0,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,     0,    54,     0,     0,    55,    56,    32,
       0,    33,     0,     0,    34,    35,    36,     0,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,     0,    54,     0,     0,    55,    56,    32,     0,    33,
       0,     0,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    32,     0,    33,     0,    45,
       0,     0,     0,     0,     0,     0,    39,    40,     0,    42,
      43,     0,     0,     0,     0,     0,    25,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    48,    49,
      50,    51,     0,     0,   108,   109,   110,   111,    52,    53,
     112,   113,   114,   115,     0,    47,    48,    49,    50,    51,
      54,     0,     0,    55,    56,     0,    52,    53,     0,     0,
       0,     0,     0,   116,   117,     0,     0,    84,    54,     0,
       0,    55,    56,     0,     0,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   115,   194,   118,     0,     0,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   116,   117,     0,   129,   108,   109,
     110,   111,     0,     0,   112,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,     0,     0,   116,   117,     0,
     124,   125,   126,   127,   128,     0,     0,     0,   129,   108,
     109,   110,   111,     0,     0,   112,   113,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   116,   117,
       0,   129,   108,   109,   110,   111,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,     0,
       0,   116,   117,     0,   124,   125,   126,   127,   128,     0,
       0,     0,   129,   108,   109,   -69,   -69,     0,     0,   112,
     113,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     127,   128,   116,   117,     0,   129,   -69,   -69,     0,     0,
       0,     0,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,     0,     0,   116,   117,     0,     0,     0,
       0,   127,   128,     0,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,   -69,     0,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
      60,    25,    61,    25,    37,    82,    31,    29,    29,    31,
     133,     3,     4,     5,     6,     7,    69,    61,    46,    52,
      53,    54,    55,    56,     3,     4,     5,     6,     7,    71,
      38,    39,    69,    61,    36,    37,     0,    61,    82,    61,
      38,    39,    88,    69,    57,    20,   106,    93,    81,    62,
      83,    58,    94,    61,    76,    76,    89,    90,    89,   182,
      93,    94,    95,    61,    69,    71,    64,    65,    66,    67,
      68,    23,    92,   133,    82,   108,   109,   110,   111,   112,
     113,   114,   115,    60,    82,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    92,   130,    90,    92,
      38,    39,     3,     4,     5,     6,     7,     8,    92,   133,
      91,    90,    69,    56,    92,   140,    92,    56,   140,    92,
      92,    22,   182,    61,    92,   185,    46,   187,    66,    67,
      68,    14,    69,    69,   211,     3,     4,     5,     6,     7,
      58,    69,    91,    46,    82,    93,    88,    93,    93,    57,
      69,    91,   212,   186,    88,    88,   189,    92,   182,    69,
      91,    27,   195,    89,   223,    36,   188,   227,    93,   229,
      93,   230,    93,   233,    90,     9,   209,     3,     4,     5,
       6,     7,    94,    94,    76,    17,   215,    -1,    90,    -1,
      -1,   195,    -1,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,
      96,    -1,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    96,    -1,
      19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,     9,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    38,    39,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    95,    96,    61,    -1,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,    82,
       9,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,     9,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,    68,
      38,    39,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    93,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    82,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,     9,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,    68,    38,    39,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    93,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,    82,
       9,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      -1,    61,    -1,    82,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    91,    -1,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,     9,    10,    11,    12,
      -1,    91,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    19,    -1,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    61,    41,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    58,    59,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    95,    96,    19,    -1,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    30,    31,    -1,    33,    34,    80,    81,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    95,    96,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      69,    70,    71,    72,    73,    41,    -1,    -1,    -1,    -1,
      46,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    92,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,
      96,    19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    92,    -1,    -1,    95,    96,    19,
      -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    92,    -1,    -1,    95,    96,    19,    -1,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    19,    -1,    21,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    58,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,     9,    10,    11,    12,    80,    81,
      15,    16,    17,    18,    -1,    69,    70,    71,    72,    73,
      92,    -1,    -1,    95,    96,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    38,    39,    -1,    82,     9,    10,
      11,    12,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    38,    39,    -1,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    82,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    38,    39,
      -1,    82,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    65,    66,    67,    68,    -1,
      -1,    38,    39,    -1,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    82,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    38,    39,    -1,    82,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    22,    98,    99,
     100,   101,   102,   103,   105,   109,   110,   115,    69,    69,
       0,   100,    46,    61,    69,    58,   117,    20,   106,    89,
      71,    92,    19,    21,    24,    25,    26,    28,    29,    30,
      31,    32,    33,    34,    35,    41,    59,    69,    70,    71,
      72,    73,    80,    81,    92,    95,    96,   101,   103,   117,
     118,   119,   120,   121,   125,   127,   128,   132,   133,    69,
      23,   107,    90,   103,   114,   115,   116,    60,   102,   112,
     113,    92,    92,    92,    91,   127,    91,    69,   104,    92,
      92,    92,    92,    92,    56,    56,   127,   127,   127,   127,
     127,    69,    59,   120,    59,   101,   118,    46,     9,    10,
      11,    12,    15,    16,    17,    18,    38,    39,    61,    64,
      65,    66,    67,    68,    74,    75,    76,    77,    78,    82,
      14,    69,   108,    58,    69,    91,    90,   114,    46,    93,
      88,   127,   121,   127,    91,   127,   126,   127,    93,    93,
     127,   127,   126,   131,    93,    96,    59,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,    69,   127,    88,    59,
     101,   110,   111,   120,   102,    93,    91,    93,    88,    88,
      93,    93,   129,    57,    60,    92,    69,    59,   101,   110,
     120,   120,   127,   120,   103,   127,    91,    89,    57,    62,
     131,    91,    27,    93,    36,   122,   123,   127,   130,    93,
     121,   120,    71,    94,    37,   123,   124,    93,    94,   118,
      94,    90,   120,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   102,   103,   103,   103,   103,   103,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     115,   116,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   132,   133,
     133,   133,   133,   133
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       5,     2,     1,     1,     1,     1,     1,     1,     7,     6,
       2,     0,     2,     0,     3,     1,     5,     4,     2,     2,
       2,     2,     1,     1,     1,     1,     0,     1,     3,     2,
       5,     2,     1,     4,     3,     3,     2,     2,     1,     2,
       1,     2,     5,     2,     3,     2,     5,     9,     1,     8,
       1,     1,     0,     2,     1,     3,     3,     3,     2,     5,
       7,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     3,
       3,     1,     3,     3,     2,     6,     3,     4,     5,     6,
       0,     3,     0,     1,     1,     0,     1,     3,     4,     1,
       1,     1,     1,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 93 "bison.y" /* yacc.c:1646  */
    {  
    Program *program = new Program((yyvsp[0].declList));
    program->Print(0);
  }
#line 1884 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "bison.y" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].decl));  fprintf(yyout, "DeclList\n"); }
#line 1890 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 101 "bison.y" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].decl));  }
#line 1896 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "bison.y" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].classDecl);  fprintf(yyout,"Class Decl\n"); }
#line 1902 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "bison.y" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].varDecl);  fprintf(yyout,"Var Decl\n"); }
#line 1908 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 107 "bison.y" /* yacc.c:1646  */
    {   fprintf(yyout,"intf decl\n");}
#line 1914 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "bison.y" /* yacc.c:1646  */
    {   fprintf(yyout,"Fn Decl\n");}
#line 1920 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "bison.y" /* yacc.c:1646  */
    { (yyval.varDecl) = (yyvsp[-1].varDecl); fprintf(yyout,"VarDecl\n"); }
#line 1926 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 113 "bison.y" /* yacc.c:1646  */
    { (yyval.varDecl) = (yyvsp[-4].varDecl); fprintf(yyout,"VarDecl with size\n"); }
#line 1932 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 117 "bison.y" /* yacc.c:1646  */
    { 
    Identifier *i = new Identifier((yylsp[0]), (yyvsp[0].identifier)) ;
    (yyval.varDecl) = new VarDecl(i, (yyvsp[-1].type));
   fprintf(yyout,"Variable\n "); }
#line 1941 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"void");  }
#line 1947 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 125 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"bool");  }
#line 1953 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"int\n");  }
#line 1959 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 127 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"double");  }
#line 1965 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"string");  }
#line 1971 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 132 "bison.y" /* yacc.c:1646  */
    {    fprintf(yyout,"NamedType");  }
#line 1977 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "bison.y" /* yacc.c:1646  */
    { 
	    Identifier *i = new Identifier((yylsp[-5]), (yyvsp[-5].identifier));
	    (yyval.classDecl) = new ClassDecl(i, (yyvsp[-1].declList)); 
     	    fprintf(yyout,"classDecl");  
	  }
#line 1987 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 140 "bison.y" /* yacc.c:1646  */
    { 
 	   Identifier *i = new Identifier((yylsp[-4]), (yyvsp[-4].identifier));
   	   (yyval.classDecl) = new ClassDecl(i,  new List<Decl*>);
fprintf(yyout,"classDecl");
}
#line 1997 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 148 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Extends\n");   }
#line 2003 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Empty\n");  }
#line 2009 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 153 "bison.y" /* yacc.c:1646  */
    {   fprintf(yyout,"T_Implements");   }
#line 2015 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "bison.y" /* yacc.c:1646  */
    { }
#line 2021 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 158 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ImplementsTypeList");  }
#line 2027 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 159 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Identifier"); }
#line 2033 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 163 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_Interface");   }
#line 2039 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 164 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_Interface");    }
#line 2045 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 168 "bison.y" /* yacc.c:1646  */
    {  printf("T_FnDef");    }
#line 2051 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 172 "bison.y" /* yacc.c:1646  */
    {  }
#line 2057 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 173 "bison.y" /* yacc.c:1646  */
    {  }
#line 2063 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 174 "bison.y" /* yacc.c:1646  */
    {  }
#line 2069 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 175 "bison.y" /* yacc.c:1646  */
    {   }
#line 2075 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 176 "bison.y" /* yacc.c:1646  */
    {  }
#line 2081 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 177 "bison.y" /* yacc.c:1646  */
    {   }
#line 2087 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 181 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"FormalsList");   }
#line 2093 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "bison.y" /* yacc.c:1646  */
    { }
#line 2099 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 186 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"FormalsList Variable\n");  }
#line 2105 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 187 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"FormalsList Variable , variable\n");    }
#line 2111 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 191 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"FnDef ;\n");}
#line 2117 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 195 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"function\n");  }
#line 2123 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 200 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"PrototypeList Prototype");   }
#line 2129 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 201 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Prototype");  }
#line 2135 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 205 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"VarDeclList StmtList");   }
#line 2141 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 206 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"VarDeclList");  }
#line 2147 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 207 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"StmtList");  }
#line 2153 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 208 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"{}");   }
#line 2159 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 212 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"StmtList Stmt");  }
#line 2165 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 213 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Stmt"); }
#line 2171 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 217 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"VarDeclList VarDecl"); }
#line 2177 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 218 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"VarDecl"); }
#line 2183 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 222 "bison.y" /* yacc.c:1646  */
    {     }
#line 2189 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 223 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_While ;\n");   }
#line 2195 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 224 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_While ;\n"); }
#line 2201 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 225 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Return ;\n");  }
#line 2207 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 226 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Break ;\n");  }
#line 2213 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 227 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Print ;\n");  }
#line 2219 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 228 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_For ;\n");   }
#line 2225 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 229 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_IfStmt ;\n");  }
#line 2231 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 230 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Switch ;\n");   }
#line 2237 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 231 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_StmtBlock ;\n");  }
#line 2243 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 235 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"OptExpr\n");  }
#line 2249 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 236 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"OptExpr\n");  }
#line 2255 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 241 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CaseStmtList\n");  }
#line 2261 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 242 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CaseStmtList\n");  }
#line 2267 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 246 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Case T_IntConstant\n");  }
#line 2273 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 247 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_IntConstant\n");  }
#line 2279 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 251 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Default\n");  }
#line 2285 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 252 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Default\n");  }
#line 2291 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 256 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout," T_If\n");  }
#line 2297 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 257 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_If\n");  }
#line 2303 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 261 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ExprList\n"); }
#line 2309 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 262 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ExprList\n"); }
#line 2315 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 266 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"LValue\n"); }
#line 2321 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 267 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Call\n"); }
#line 2327 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 268 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Constant\n"); }
#line 2333 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 269 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"||\n");  }
#line 2339 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 270 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"&&\n");  }
#line 2345 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 271 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"<\n");  }
#line 2351 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 272 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,">\n");  }
#line 2357 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 273 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,">=\n");  }
#line 2363 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 274 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"<=\n");  }
#line 2369 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 275 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"=\n");  }
#line 2375 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 276 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"!=\n");  }
#line 2381 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 277 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"+\n");  }
#line 2387 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 278 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"-\n");  }
#line 2393 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 279 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"*\n");  }
#line 2399 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 280 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"/\n");  }
#line 2405 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 281 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Mod\n");  }
#line 2411 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 282 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"^\n");  }
#line 2417 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 283 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"|\n");  }
#line 2423 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 284 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"&\n");  }
#line 2429 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 285 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"LS\n");  }
#line 2435 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 286 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"RSr\n");  }
#line 2441 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 287 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"-\n");  }
#line 2447 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 288 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"!\n");  }
#line 2453 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 289 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"~\n");  }
#line 2459 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 290 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"++\n");  }
#line 2465 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 291 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"--\n");  }
#line 2471 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 292 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Op\n");  }
#line 2477 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 293 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"FExpr\n");  }
#line 2483 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 294 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"thisExpr\n");  }
#line 2489 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 295 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"readintExpr\n");  }
#line 2495 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 296 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"readlineExpr\n");  }
#line 2501 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 297 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"newarrayExpr\n");  }
#line 2507 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 298 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"newarryExpr\n");  }
#line 2513 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 299 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"=Expr\n");  }
#line 2519 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 304 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Call");  }
#line 2525 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 305 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CallOut");  }
#line 2531 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 306 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"Call");  }
#line 2537 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 310 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CallOut args");  }
#line 2543 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 314 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Callout argssub");  }
#line 2549 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 318 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"ExprList\n");  }
#line 2555 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 323 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"IExpr");  }
#line 2561 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 324 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"Expr");  }
#line 2567 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 325 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"SExpr");  }
#line 2573 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 330 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_IntConstant   ");  }
#line 2579 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 331 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_DoubleConstant ");  }
#line 2585 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 332 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_BoolConstant");  }
#line 2591 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 333 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_StringConstant");  }
#line 2597 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 334 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Null ");  }
#line 2603 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 2607 "bison.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 336 "bison.y" /* yacc.c:1906  */


int main(int argc,char* argv[]) {
	
	// open a file handle to a particular file:
	FILE *myfile = fopen(argv[1], "r");
	yyout = fopen("bison_output.txt","w+");
	// make sure it's valid:
	if (!myfile) {
		cout << "I can't open file!" << endl;
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	fclose(yyout);
}

void yyerror(const char *s) {
	cout << "parse error on line " << "!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

