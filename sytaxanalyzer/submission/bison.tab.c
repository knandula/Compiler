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

#include <cstdio>
#include <iostream>
using namespace std;


extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;
extern int line_num;
 
void yyerror(const char *s);

#line 81 "bison.tab.c" /* yacc.c:339  */

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
    PROGRAM = 296,
    T_Call = 297,
    VOID = 298,
    TRUE = 299,
    FALSE = 300,
    DECIMAL = 301,
    T_Semicolon = 302,
    END = 303,
    ENDL = 304,
    TCASSIGNMENT = 305,
    TCEQ = 306,
    TCNE = 307,
    TCLT = 308,
    TCLE = 309,
    TCGT = 310,
    TCGE = 311,
    T_Pl = 312,
    T_Pr = 313,
    TCLB = 314,
    TCRB = 315,
    T_Srb = 316,
    T_Slb = 317,
    T_Comma = 318,
    TCDOT = 319,
    T_Add = 320,
    T_Sub = 321,
    T_Mul = 322,
    T_Div = 323,
    T_Mod = 324,
    T_Identifier = 325,
    T_StringConstant = 326,
    T_IntConstant = 327,
    T_DoubleConstant = 328,
    T_BoolConstant = 329,
    NEG = 330,
    NOELSE = 331,
    EMPTYCASE = 332,
    EMPTYDEFAULT = 333,
    NONEMPTYCASE = 334,
    NONEMPTYDEFAULT = 335
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 18 "bison.y" /* yacc.c:355  */

  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[32];
	

#line 211 "bison.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "bison.tab.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    97,     2,     2,     2,    75,     2,
      93,    94,     2,     2,    89,    96,    83,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,    92,
      78,     2,    79,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    77,    91,    82,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      80,    84,    85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    75,    76,    80,    81,    82,    83,    87,
      88,    92,    96,    97,    98,    99,   100,   104,   107,   108,
     112,   113,   117,   118,   122,   123,   127,   128,   132,   136,
     137,   138,   139,   140,   141,   145,   146,   150,   151,   155,
     159,   164,   165,   169,   170,   171,   172,   176,   177,   181,
     182,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   199,   200,   205,   206,   210,   211,   215,   216,   220,
     221,   225,   226,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   268,   269,   270,
     273,   274,   277,   278,   282,   283,   287,   288,   289,   294,
     295,   296,   297,   298
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
  "CLASS", "PROGRAM", "T_Call", "VOID", "TRUE", "FALSE", "DECIMAL",
  "T_Semicolon", "END", "ENDL", "TCASSIGNMENT", "TCEQ", "TCNE", "TCLT",
  "TCLE", "TCGT", "TCGE", "T_Pl", "T_Pr", "TCLB", "TCRB", "T_Srb", "T_Slb",
  "T_Comma", "TCDOT", "T_Add", "T_Sub", "T_Mul", "T_Div", "T_Mod",
  "T_Identifier", "T_StringConstant", "T_IntConstant", "T_DoubleConstant",
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
     325,   326,   327,   328,   329,    38,    94,   124,    60,    62,
     330,    33,   126,    46,   331,   332,   333,   334,   335,    44,
     123,   125,    59,    40,    41,    58,    45,    34
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -69

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-69)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,  -119,  -119,  -119,  -119,  -119,   -54,   -38,    42,    62,
    -119,  -119,   -29,   -26,  -119,  -119,  -119,   -14,    27,   -41,
    -119,  -119,  -119,   -13,   -42,   174,  -119,   -12,    40,     7,
      10,   101,  -119,  -119,   -10,     3,     6,  1221,     8,     2,
      17,    18,    20,    23,    24,    44,  -119,    57,  -119,  -119,
    -119,  -119,   933,   933,   933,   933,   933,  -119,    49,  -119,
     808,   254,  -119,    76,  -119,  1313,  -119,   110,  -119,  -119,
      58,    77,  -119,    65,  -119,    45,    21,    91,  -119,    46,
      50,   933,   933,   933,  -119,   676,  -119,  -119,  -119,   933,
     933,    47,    48,   933,   933,   933,   -31,   -31,   526,   -31,
     451,  -119,  -119,  -119,  -119,  -119,   887,  -119,   933,   933,
     933,   933,   933,   933,   933,   933,  -119,  -119,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,    73,
     933,  -119,    56,   334,   -42,  -119,  -119,  -119,  -119,  -119,
     101,   559,    54,   601,  -119,   787,   -53,  1313,  -119,  -119,
     634,  1313,    59,    96,  -119,  -119,  -119,   484,   484,  1463,
    1463,    64,    64,  1388,  1346,  1271,    82,    82,    -9,    -9,
      -9,  1421,  1421,  1421,   484,   484,    66,  1313,    85,  -119,
    -119,  -119,   414,  -119,  -119,  1203,   933,  1203,   101,   933,
      68,    67,   -20,  -119,  -119,   933,  -119,  -119,  -119,  -119,
    -119,  -119,   709,   134,    69,  1313,  -119,   132,  -119,   933,
      78,   933,  1203,  -119,   -55,    -2,  -119,  1313,  -119,  -119,
      80,  -119,    75,  1203,    87,  -119,    84,  1203,  -119,   966,
    1045,  -119,  -119,  1124
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
    -119,  -119,  -119,   175,   -24,   -25,   -22,  -119,  -119,  -119,
    -119,  -119,  -119,  -118,  -119,  -119,  -119,   107,   -21,  -119,
     168,   -59,  -119,   -60,   -77,  -119,   -28,  -119,  -119,    98,
     -33,  -119,  -119,  -119,    -6,  -119,  -119
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
       1,     2,     3,     4,     5,   181,    18,   222,    22,    96,
      97,    98,    99,   100,     1,     2,     3,     4,     5,   116,
     117,   118,    19,    23,   214,   224,   189,   105,   208,    58,
     223,   190,    20,   209,    24,    25,   103,    27,   141,    29,
     143,    31,   129,   118,    73,    75,   145,   147,    69,    30,
     150,   151,   147,    70,   199,     1,     2,     3,     4,     5,
       6,    77,    87,   183,   129,   157,   158,   159,   160,   161,
     162,   163,   164,    81,     7,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    82,   177,    72,    83,
      86,    94,   116,   117,     1,     2,     3,     4,     5,   180,
      89,    90,   136,    91,    95,   184,    92,    93,    58,   101,
     116,   117,   200,   107,   130,   201,   118,   203,   131,   119,
     120,   121,   122,   123,   220,   134,   133,   135,   138,   140,
     139,   148,   149,   176,   118,   178,   186,   129,   189,   121,
     122,   123,   221,   202,   193,   196,   205,   207,   198,   195,
     206,   212,   147,   213,   229,   129,   204,   232,   214,   103,
     228,   233,   219,   103,   227,   231,   217,     1,     2,     3,
       4,     5,   230,   137,    21,    26,     0,   225,   146,   210,
       0,     0,     0,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,    52,    53,     1,     2,     3,
       4,     5,     0,     0,     0,     0,     0,    54,     0,     0,
      55,    56,     0,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,    52,    53,     1,     2,     3,
       4,     5,     0,     0,     0,     0,     0,    54,     0,     0,
      55,    56,     0,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,    52,    53,     1,     2,     3,
       4,     5,     0,     0,     0,     0,     0,    54,     0,     0,
      55,    56,     0,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
     108,   109,   110,   111,     0,     0,   112,   113,   114,   115,
       0,     0,     0,    25,   197,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,   116,
     117,     0,     0,   -69,   -69,    52,    53,     0,     0,   112,
     113,     0,     0,     0,     0,     0,     0,    54,     0,     0,
      55,    56,     0,   118,     0,     0,   119,   120,   121,   122,
     123,     0,   116,   117,     0,     0,   124,   125,   126,   127,
     128,     0,     0,     0,   129,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   115,     0,   118,     0,   155,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,     0,
       0,     0,   -69,   -69,   116,   117,     0,   129,   108,   109,
     110,   111,     0,     0,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,     0,   116,   117,     0,
       0,   124,   125,   126,   127,   128,     0,     0,     0,   129,
     108,   109,   110,   111,     0,     0,   112,   113,   114,   115,
     154,   118,     0,     0,   119,   120,   121,   122,   123,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   116,
     117,     0,   129,   108,   109,   110,   111,     0,     0,   112,
     113,   114,   115,   185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,     0,   116,   117,     0,     0,   124,   125,   126,   127,
     128,     0,     0,     0,   129,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   115,   187,   118,     0,     0,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   116,   117,     0,   129,   108,   109,
     110,   111,     0,     0,   112,   113,   114,   115,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,     0,   116,   117,     0,
       0,   124,   125,   126,   127,   128,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,     0,
       0,     0,   129,     0,     0,     0,   108,   109,   110,   111,
       0,   211,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   117,    32,     0,    33,
       0,     0,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,   118,
      45,     0,   119,   120,   121,   122,   123,     0,     0,     0,
       0,     0,   124,   125,   126,   127,   128,    25,   102,     0,
     129,     0,     0,     0,     0,     0,   188,     0,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,    55,    56,    32,     0,    33,     0,
       0,    34,    35,    36,     0,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,   156,     0,     0,
       0,     0,    32,     0,    33,     0,     0,    47,    48,    49,
      50,    51,     0,    39,    40,     0,    42,    43,    52,    53,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
      54,     0,     0,    55,    56,    32,     0,    33,     0,     0,
      34,    35,    36,     0,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    47,    48,    49,    50,    51,    45,     0,
       0,     0,     0,   -62,    52,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    54,     0,     0,    55,
      56,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,    55,    56,    32,     0,    33,     0,     0,    34,
      35,    36,     0,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,     0,    54,     0,
       0,    55,    56,    32,     0,    33,     0,     0,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,   -67,     0,    54,     0,     0,
      55,    56,    32,     0,    33,     0,     0,    34,    35,    36,
       0,    37,    38,    39,    40,    41,    42,    43,    44,     0,
      32,     0,    33,     0,     0,    45,     0,     0,     0,     0,
       0,    39,    40,     0,    42,    43,     0,     0,     0,     0,
       0,     0,    25,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,     0,     0,
     108,   109,   110,   111,    52,    53,   112,   113,   114,   115,
       0,    47,    48,    49,    50,    51,    54,     0,     0,    55,
      56,     0,    52,    53,     0,     0,     0,     0,     0,   116,
     117,     0,     0,    84,    54,     0,     0,    55,    56,     0,
       0,     0,   108,   109,   110,   111,     0,     0,   112,   113,
     114,   115,   194,   118,     0,     0,   119,   120,   121,   122,
     123,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   116,   117,     0,   129,   108,   109,   110,   111,     0,
       0,   112,   113,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,     0,   116,   117,     0,     0,   124,   125,
     126,   127,   128,     0,     0,     0,   129,   108,   109,   110,
     111,     0,     0,   112,   113,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   116,   117,     0,   129,
     108,   109,   110,   111,     0,     0,   112,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,     0,   116,
     117,     0,     0,   124,   125,   126,   127,   128,     0,     0,
       0,   129,   108,   109,   -69,   -69,     0,     0,   112,   113,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,     0,     0,     0,     0,     0,   -69,   -69,   -69,   127,
     128,   116,   117,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,     0,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
      60,    25,    61,    25,    37,    82,    31,    29,    29,    31,
       3,     4,     5,     6,     7,   133,    70,    72,    47,    52,
      53,    54,    55,    56,     3,     4,     5,     6,     7,    38,
      39,    62,    70,    62,    36,    37,    89,    61,    58,    61,
      95,    94,     0,    63,    70,    59,   106,    20,    81,    90,
      83,    93,    83,    62,    76,    76,    89,    90,    70,    72,
      93,    94,    95,    23,   182,     3,     4,     5,     6,     7,
       8,    61,    70,   133,    83,   108,   109,   110,   111,   112,
     113,   114,   115,    93,    22,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    93,   130,    91,    93,
      92,    57,    38,    39,     3,     4,     5,     6,     7,   133,
      93,    93,    91,    93,    57,   140,    93,    93,   140,    70,
      38,    39,   182,    47,    14,   185,    62,   187,    70,    65,
      66,    67,    68,    69,   211,    70,    59,    92,    47,    89,
      94,    94,    94,    70,    62,    89,    92,    83,    89,    67,
      68,    69,   212,   186,    58,    70,   189,    90,   182,    93,
      92,    27,   195,    94,   223,    83,   188,   227,    36,   229,
      95,   230,    94,   233,    94,    91,   209,     3,     4,     5,
       6,     7,    95,    76,     9,    17,    -1,   215,    90,   195,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
       9,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    38,
      39,    -1,    -1,     9,    10,    81,    82,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    38,    39,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    83,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    62,    -1,    97,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    38,    39,    -1,    83,     9,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    38,    39,    -1,
      -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,    83,
       9,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      94,    62,    -1,    -1,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    38,
      39,    -1,    83,     9,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    38,    39,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    83,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    94,    62,    -1,    -1,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    38,    39,    -1,    83,     9,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    38,    39,    -1,
      -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    83,    -1,    -1,    -1,     9,    10,    11,    12,
      -1,    92,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    19,    -1,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    62,
      42,    -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    59,    60,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    30,    31,    -1,    33,    34,    81,    82,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    19,    -1,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    70,    71,    72,    73,    74,    42,    -1,
      -1,    -1,    -1,    47,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    19,    -1,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,
      -1,    96,    97,    19,    -1,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,
      96,    97,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      19,    -1,    21,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
       9,    10,    11,    12,    81,    82,    15,    16,    17,    18,
      -1,    70,    71,    72,    73,    74,    93,    -1,    -1,    96,
      97,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,     9,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    38,    39,    -1,    83,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    38,    39,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    83,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    38,    39,    -1,    83,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    -1,    38,
      39,    -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    83,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    38,    39,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    22,    99,   100,
     101,   102,   103,   104,   106,   110,   111,   116,    70,    70,
       0,   101,    47,    62,    70,    59,   118,    20,   107,    90,
      72,    93,    19,    21,    24,    25,    26,    28,    29,    30,
      31,    32,    33,    34,    35,    42,    60,    70,    71,    72,
      73,    74,    81,    82,    93,    96,    97,   102,   104,   118,
     119,   120,   121,   122,   126,   128,   129,   133,   134,    70,
      23,   108,    91,   104,   115,   116,   117,    61,   103,   113,
     114,    93,    93,    93,    92,   128,    92,    70,   105,    93,
      93,    93,    93,    93,    57,    57,   128,   128,   128,   128,
     128,    70,    60,   121,    60,   102,   119,    47,     9,    10,
      11,    12,    15,    16,    17,    18,    38,    39,    62,    65,
      66,    67,    68,    69,    75,    76,    77,    78,    79,    83,
      14,    70,   109,    59,    70,    92,    91,   115,    47,    94,
      89,   128,   122,   128,    92,   128,   127,   128,    94,    94,
     128,   128,   127,   132,    94,    97,    60,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,    70,   128,    89,    60,
     102,   111,   112,   121,   103,    94,    92,    94,    89,    89,
      94,    94,   130,    58,    61,    93,    70,    60,   102,   111,
     121,   121,   128,   121,   104,   128,    92,    90,    58,    63,
     132,    92,    27,    94,    36,   123,   124,   128,   131,    94,
     122,   121,    72,    95,    37,   124,   125,    94,    95,   119,
      95,    91,   121,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   103,   104,   104,   104,   104,   104,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     116,   117,   117,   118,   118,   118,   118,   119,   119,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     134,   134,   134,   134
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
#line 71 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout, "PROGRAM ENCOUNTERED\n" ); }
#line 1748 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout, "DeclList\n"); }
#line 1754 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "bison.y" /* yacc.c:1646  */
    {  }
#line 1760 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Class Decl\n"); }
#line 1766 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Var Decl\n"); }
#line 1772 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"intf decl\n");}
#line 1778 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Fn Decl\n");}
#line 1784 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"VarDecl\n"); }
#line 1790 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"VarDecl with size\n"); }
#line 1796 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "bison.y" /* yacc.c:1646  */
    {    fprintf(yyout,"Variable\n "); }
#line 1802 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"void");  }
#line 1808 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"bool");  }
#line 1814 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 98 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"int\n");  }
#line 1820 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 99 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"double");  }
#line 1826 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"string");  }
#line 1832 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "bison.y" /* yacc.c:1646  */
    {    fprintf(yyout,"NamedType");  }
#line 1838 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"classDecl");    }
#line 1844 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"classDecl");}
#line 1850 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 112 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Extends\n");   }
#line 1856 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 113 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Empty\n");  }
#line 1862 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "bison.y" /* yacc.c:1646  */
    {   fprintf(yyout,"T_Implements");   }
#line 1868 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "bison.y" /* yacc.c:1646  */
    { }
#line 1874 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ImplementsTypeList");  }
#line 1880 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Identifier"); }
#line 1886 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_Interface");   }
#line 1892 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 128 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_Interface");    }
#line 1898 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "bison.y" /* yacc.c:1646  */
    {  printf("T_FnDef");    }
#line 1904 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 136 "bison.y" /* yacc.c:1646  */
    {  }
#line 1910 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 137 "bison.y" /* yacc.c:1646  */
    {  }
#line 1916 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 138 "bison.y" /* yacc.c:1646  */
    {  }
#line 1922 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 139 "bison.y" /* yacc.c:1646  */
    {   }
#line 1928 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "bison.y" /* yacc.c:1646  */
    {  }
#line 1934 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 141 "bison.y" /* yacc.c:1646  */
    {   }
#line 1940 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 145 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"FormalsList");   }
#line 1946 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 146 "bison.y" /* yacc.c:1646  */
    { }
#line 1952 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 150 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"FormalsList Variable\n");  }
#line 1958 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 151 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"FormalsList Variable , variable\n");    }
#line 1964 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 155 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"FnDef ;\n");}
#line 1970 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 159 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"function\n");  }
#line 1976 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 164 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"PrototypeList Prototype");   }
#line 1982 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 165 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Prototype");  }
#line 1988 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 169 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"VarDeclList StmtList");   }
#line 1994 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 170 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"VarDeclList");  }
#line 2000 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"StmtList");  }
#line 2006 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 172 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"{}");   }
#line 2012 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 176 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"StmtList Stmt");  }
#line 2018 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 177 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Stmt"); }
#line 2024 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 181 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"VarDeclList VarDecl"); }
#line 2030 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 182 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"VarDecl"); }
#line 2036 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 186 "bison.y" /* yacc.c:1646  */
    {     }
#line 2042 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_While ;\n");   }
#line 2048 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 188 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_While ;\n"); }
#line 2054 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Return ;\n");  }
#line 2060 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 190 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Break ;\n");  }
#line 2066 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Print ;\n");  }
#line 2072 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 192 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_For ;\n");   }
#line 2078 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_IfStmt ;\n");  }
#line 2084 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Switch ;\n");   }
#line 2090 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_StmtBlock ;\n");  }
#line 2096 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"OptExpr\n");  }
#line 2102 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"OptExpr\n");  }
#line 2108 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 205 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CaseStmtList\n");  }
#line 2114 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 206 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CaseStmtList\n");  }
#line 2120 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 210 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Case T_IntConstant\n");  }
#line 2126 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 211 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_IntConstant\n");  }
#line 2132 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 215 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Default\n");  }
#line 2138 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 216 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Default\n");  }
#line 2144 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 220 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout," T_If\n");  }
#line 2150 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_If\n");  }
#line 2156 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 225 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ExprList\n"); }
#line 2162 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 226 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ExprList\n"); }
#line 2168 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 230 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"LValue\n"); }
#line 2174 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 231 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Call\n"); }
#line 2180 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 232 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Constant\n"); }
#line 2186 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 233 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"||\n");  }
#line 2192 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 234 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"&&\n");  }
#line 2198 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 235 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"<\n");  }
#line 2204 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 236 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,">\n");  }
#line 2210 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,">=\n");  }
#line 2216 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 238 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"<=\n");  }
#line 2222 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 239 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"=\n");  }
#line 2228 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 240 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"!=\n");  }
#line 2234 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 241 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"+\n");  }
#line 2240 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 242 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"-\n");  }
#line 2246 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 243 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"*\n");  }
#line 2252 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 244 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"/\n");  }
#line 2258 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 245 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Mod\n");  }
#line 2264 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 246 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"^\n");  }
#line 2270 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 247 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"|\n");  }
#line 2276 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 248 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"&\n");  }
#line 2282 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 249 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"LS\n");  }
#line 2288 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 250 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"RSr\n");  }
#line 2294 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 251 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"-\n");  }
#line 2300 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 252 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"!\n");  }
#line 2306 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 253 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"~\n");  }
#line 2312 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 254 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"++\n");  }
#line 2318 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 255 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"--\n");  }
#line 2324 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 256 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Op\n");  }
#line 2330 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 257 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"FExpr\n");  }
#line 2336 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 258 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"thisExpr\n");  }
#line 2342 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 259 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"readintExpr\n");  }
#line 2348 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 260 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"readlineExpr\n");  }
#line 2354 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 261 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"newarrayExpr\n");  }
#line 2360 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 262 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"newarryExpr\n");  }
#line 2366 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 263 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"=Expr\n");  }
#line 2372 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 268 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Call");  }
#line 2378 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 269 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CallOut");  }
#line 2384 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 270 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"Call");  }
#line 2390 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 274 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CallOut args");  }
#line 2396 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 278 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Callout argssub");  }
#line 2402 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 282 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"ExprList\n");  }
#line 2408 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 287 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"IExpr");  }
#line 2414 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 288 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"Expr");  }
#line 2420 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 289 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"SExpr");  }
#line 2426 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 294 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_IntConstant   ");  }
#line 2432 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 295 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_DoubleConstant ");  }
#line 2438 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 296 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_BoolConstant");  }
#line 2444 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 297 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_StringConstant");  }
#line 2450 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 298 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Null ");  }
#line 2456 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 2460 "bison.tab.c" /* yacc.c:1646  */
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
#line 300 "bison.y" /* yacc.c:1906  */


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
	cout << "parse error on line " << line_num << "!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

