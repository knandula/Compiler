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
    TCOMMA = 318,
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

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
       2,     2,     2,    81,     2,     2,     2,     2,    75,     2,
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
     159,   160,   165,   166,   170,   171,   172,   173,   177,   178,
     182,   183,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   200,   201,   206,   207,   211,   212,   216,   217,
     221,   222,   226,   227,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   267,   268,   272,
     273,   277,   278,   279,   284,   285,   286,   287,   288
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
  "TCOMMA", "TCDOT", "T_Add", "T_Sub", "T_Mul", "T_Div", "T_Mod",
  "T_Identifier", "T_StringConstant", "T_IntConstant", "T_DoubleConstant",
  "T_BoolConstant", "'&'", "'^'", "'|'", "'<'", "'>'", "NEG", "'!'", "'~'",
  "'.'", "NOELSE", "EMPTYCASE", "EMPTYDEFAULT", "NONEMPTYCASE",
  "NONEMPTYDEFAULT", "','", "'{'", "'}'", "';'", "'('", "')'", "':'",
  "'-'", "$accept", "Program", "DeclList", "Decl", "VarDecl", "Variable",
  "Type", "NamedType", "ClassDecl", "ClassExtends", "ClassImplements",
  "ImplementsTypeList", "InterfaceDecl", "FnDecl", "FieldList", "Formals",
  "FormalsList", "Prototype", "FnDef", "PrototypeList", "StmtBlock",
  "StmtList", "VarDeclList", "Stmt", "OptExpr", "CaseStmtList", "CaseStmt",
  "DefaultStmt", "IfStmt", "ExprList", "Expr", "Call", "Actuals", "LValue",
  "Constant", YY_NULLPTR
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
     123,   125,    59,    40,    41,    58,    45
};
# endif

#define YYPACT_NINF -122

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-70)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     143,  -122,  -122,  -122,  -122,  -122,   -64,   -58,   -79,    18,
     143,  -122,  -122,    15,   -55,  -122,  -122,  -122,   -17,    43,
     -41,    80,  -122,  -122,  -122,    -6,   -26,   283,  -122,    -2,
      47,    16,  -122,     3,   -19,   -15,    17,    80,  -122,  -122,
      -5,    -4,    -3,   894,   -16,    10,     4,     7,     8,     9,
      12,  -122,    34,  -122,  -122,  -122,  -122,   977,   977,   977,
     977,  -122,  -122,   726,   356,  -122,    59,  -122,  1087,  -122,
      94,  -122,  -122,    40,    52,  -122,    42,  -122,    21,    29,
    -122,  -122,    80,    67,    23,   977,   977,   977,  -122,   576,
    -122,  -122,  -122,   977,   977,    32,    36,   977,   977,   -18,
     -18,   393,   -18,  -122,  -122,  -122,  -122,   743,  -122,   977,
     977,   977,   977,   977,   977,   977,   977,  -122,  -122,   977,
     977,   977,   977,   977,   977,   977,   977,   977,   977,   977,
      46,   977,  -122,    44,    22,   -26,  -122,  -122,  -122,  -122,
    -122,  -122,   468,    39,   501,  -122,   660,   -85,  1087,  -122,
    -122,   543,    48,    74,  -122,  -122,   262,   262,  1237,  1237,
     330,   330,  1162,  1120,  1045,    60,    60,   -22,   -22,   -22,
    1195,  1195,  1195,   262,   262,    49,  1087,    65,  -122,  -122,
    -122,   210,  -122,   994,   977,   994,    80,   977,    61,    54,
    -122,  -122,   977,  -122,  -122,  -122,  -122,  -122,  -122,   618,
     109,    58,  1087,  -122,   118,    63,   977,   994,  -122,   -65,
       1,  -122,  -122,    69,  -122,    64,   994,    66,  -122,    76,
     994,  -122,   816,   848,  -122,  -122,   921
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,    15,    16,     0,     0,     0,     0,
       2,     4,     6,     0,     0,     5,     7,     8,     0,    21,
       0,    36,     1,     3,     9,     0,    11,    63,    28,     0,
      23,     0,    37,     0,     0,    35,     0,    36,   118,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,   111,   117,   114,   115,   116,     0,     0,     0,
       0,    51,    61,    63,    63,    49,     0,    59,    62,    75,
      74,    76,    20,     0,     0,    27,     0,    43,     0,     0,
      11,    40,     0,     0,     0,     0,    63,     0,    54,     0,
      56,    17,   104,     0,     0,     0,     0,     0,   110,    96,
      97,     0,    95,    46,    48,    45,    50,    63,    52,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    22,    63,     0,    39,    26,    42,    38,
      10,    41,     0,     0,     0,    55,     0,     0,    73,   102,
     103,     0,   109,     0,   100,    44,    82,    81,    83,    84,
      93,    94,    78,    77,     0,    85,    86,    87,    88,    89,
      92,    90,    91,    79,    80,   112,   106,     0,    19,    32,
      33,    63,    34,    63,     0,    63,     0,     0,     0,     0,
     107,   113,   110,    24,    18,    29,    30,    31,    53,     0,
      70,     0,    72,    57,     0,     0,    63,    63,   105,     0,
       0,    65,   108,     0,    71,     0,    63,     0,    64,     0,
      63,    67,    66,    63,    60,    58,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,   159,   -25,   -13,     0,  -122,  -122,  -122,
    -122,  -122,  -122,  -121,  -122,   133,  -122,    92,   -20,  -122,
     154,   -61,  -122,   -62,   -81,  -122,   -37,  -122,  -122,    82,
      81,  -122,   -12,  -122,  -122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    33,    92,    15,    30,
      74,   133,    16,    17,   181,    34,    35,    77,    18,    79,
      62,    63,    64,    65,    66,   210,   211,   219,    67,   152,
      68,    69,   153,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   104,    61,   107,   187,   143,    19,   215,    32,   188,
      14,    78,    20,   180,    21,    26,   117,   118,    22,     1,
       2,     3,     4,     5,    32,     1,     2,     3,     4,     5,
     216,    76,     1,     2,     3,     4,     5,   209,   217,   106,
     119,    38,    27,    39,   119,   104,    40,    41,    42,    31,
      43,    44,    45,    46,    47,    48,    49,    50,     8,    78,
     196,   130,    24,    29,     8,   130,    36,    37,    72,   139,
      73,     8,   182,    80,    82,    81,    90,    25,    83,    76,
      91,    27,   178,     1,     2,     3,     4,     5,    85,    86,
      87,    98,    52,    53,    54,    55,    56,    93,   117,   118,
      94,    95,    96,    57,    58,    97,   108,    75,   131,   179,
     132,   134,   135,   136,   140,    59,   175,   141,    60,   197,
     137,   198,   119,   200,    89,   213,   149,   122,   123,   124,
     150,   184,   190,   177,    14,   193,   207,   187,    99,   100,
     101,   102,   192,   130,   204,   214,     1,     2,     3,     4,
       5,     6,   208,   203,   209,   222,   195,   212,   225,   221,
     104,   223,   226,   220,   104,     7,   142,   224,   144,    23,
      84,   138,    28,   218,   146,   148,   147,     0,   151,   148,
     205,    14,     0,     0,     0,     8,   201,     0,     0,     0,
     156,   157,   158,   159,   160,   161,   162,   163,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     0,   176,     1,     2,     3,     4,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,     0,     0,    40,    41,    42,     0,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   202,    27,
     194,   -70,   -70,   148,     0,     0,     0,   113,   114,     0,
      52,    53,    54,    55,    56,     0,     1,     2,     3,     4,
       5,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     117,   118,    38,    59,    39,     0,    60,    40,    41,    42,
       0,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,     0,   119,     0,     0,   120,   121,   122,
     123,   124,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,    27,    51,     0,   130,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     1,
       2,     3,     4,     5,    57,    58,     0,     0,   117,   118,
       0,     0,     0,     0,     0,    38,    59,    39,     0,    60,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,   119,     0,     0,   120,   121,   122,   123,   124,
       0,     0,   109,   110,   111,   112,     0,     0,   113,   114,
     115,   116,     0,   130,     0,    27,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,   117,   118,     0,     0,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,    60,     0,     0,   119,     0,     0,   120,   121,
     122,   123,   124,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,     0,     0,     0,   130,   109,   110,   111,
     112,     0,     0,   113,   114,   115,   116,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,   118,     0,     0,
     109,   110,   111,   112,     0,     0,   113,   114,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,   120,   121,   122,   123,   124,     0,   117,
     118,     0,     0,   125,   126,   127,   128,   129,     0,     0,
       0,   130,   109,   110,   111,   112,     0,     0,   113,   114,
     115,   116,   183,   119,     0,     0,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   117,   118,     0,   130,   109,   110,   111,   112,     0,
       0,   113,   114,   115,   116,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,   120,   121,
     122,   123,   124,     0,   117,   118,     0,     0,   125,   126,
     127,   128,   129,     0,     0,     0,   130,   109,   110,   111,
     112,     0,     0,   113,   114,   115,   116,   189,   119,     0,
       0,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   117,   118,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   109,
     110,   111,   112,     0,     0,   113,   114,   115,   116,     0,
     119,     0,     0,   120,   121,   122,   123,   124,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   117,   118,
       0,   130,     0,     0,     0,     0,     0,     0,     0,     0,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,   120,   121,   122,   123,   124,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
       0,     0,     0,   130,     0,    38,     0,    39,     0,   186,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    38,     0,    39,     0,     0,    40,    41,    42,
       0,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,    27,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,    27,   155,     0,     0,     0,    57,    58,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,    59,
       0,     0,    60,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    59,    39,     0,    60,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -63,     0,     0,     0,    38,     0,    39,
       0,     0,    40,    41,    42,    27,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,    52,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    59,
       0,     0,    60,    38,     0,    39,     0,     0,    52,    53,
      54,    55,    56,     0,    45,    46,     0,    48,    49,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
      38,    59,    39,     0,    60,    40,    41,    42,     0,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,    57,    58,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    88,    59,     0,     0,
      60,    52,    53,    54,    55,    56,    38,     0,    39,     0,
       0,     0,    57,    58,     0,     0,     0,    45,    46,     0,
      48,    49,   -68,    38,    59,    39,     0,    60,    40,    41,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,    27,   109,   110,   111,   112,    57,    58,
     113,   114,   115,   116,    52,    53,    54,    55,    56,     0,
      59,     0,     0,    60,     0,    57,    58,     0,     0,     0,
       0,     0,     0,   117,   118,     0,     0,    59,     0,     0,
      60,     0,     0,     0,     0,     0,   109,   110,   111,   112,
       0,     0,   113,   114,   115,   116,   191,   119,     0,     0,
     120,   121,   122,   123,   124,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   117,   118,     0,   130,   109,
     110,   111,   112,     0,     0,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,   120,   121,   122,   123,   124,     0,   117,   118,
       0,     0,   125,   126,   127,   128,   129,     0,     0,     0,
     130,   109,   110,   111,   112,     0,     0,   113,   114,     0,
       0,     0,   119,     0,     0,   120,   121,   122,   123,   124,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     117,   118,     0,   130,   109,   110,   111,   112,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,   120,   121,   122,
     123,   124,     0,   117,   118,     0,     0,   125,   126,   127,
     128,   129,     0,     0,     0,   130,   109,   110,   -70,   -70,
       0,     0,   113,   114,     0,     0,     0,   119,     0,     0,
     120,   121,   122,   123,   124,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   128,   129,   117,   118,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,     0,     0,     0,
     130
};

static const yytype_int16 yycheck[] =
{
       0,    63,    27,    64,    89,    86,    70,    72,    21,    94,
      10,    31,    70,   134,    93,    70,    38,    39,     0,     3,
       4,     5,     6,     7,    37,     3,     4,     5,     6,     7,
      95,    31,     3,     4,     5,     6,     7,    36,    37,    64,
      62,    19,    59,    21,    62,   107,    24,    25,    26,    90,
      28,    29,    30,    31,    32,    33,    34,    35,    42,    79,
     181,    83,    47,    20,    42,    83,    72,    93,    70,    82,
      23,    42,   134,    70,    89,    94,    92,    62,    61,    79,
      70,    59,    60,     3,     4,     5,     6,     7,    93,    93,
      93,    57,    70,    71,    72,    73,    74,    93,    38,    39,
      93,    93,    93,    81,    82,    93,    47,    91,    14,   134,
      70,    59,    70,    92,    47,    93,    70,    94,    96,   181,
      91,   183,    62,   185,    43,   206,    94,    67,    68,    69,
      94,    92,    58,    89,   134,    70,    27,    89,    57,    58,
      59,    60,    93,    83,    90,   207,     3,     4,     5,     6,
       7,     8,    94,    92,    36,   216,   181,    94,   220,    95,
     222,    95,   223,    94,   226,    22,    85,    91,    87,    10,
      37,    79,    18,   210,    93,    94,    94,    -1,    97,    98,
     192,   181,    -1,    -1,    -1,    42,   186,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,   131,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,   187,    59,
      60,     9,    10,   192,    -1,    -1,    -1,    15,    16,    -1,
      70,    71,    72,    73,    74,    -1,     3,     4,     5,     6,
       7,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    19,    93,    21,    -1,    96,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    59,    60,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,     3,
       4,     5,     6,     7,    81,    82,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    19,    93,    21,    -1,    96,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    62,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    -1,     9,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    83,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    38,    39,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    83,     9,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
       9,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    -1,    38,
      39,    -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    83,     9,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    94,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    38,    39,    -1,    83,     9,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    38,    39,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    83,     9,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    94,    62,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    38,    39,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,     9,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    38,    39,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    83,    -1,    19,    -1,    21,    -1,    89,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    59,    60,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    93,
      -1,    -1,    96,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    93,    21,    -1,    96,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    19,    -1,    21,
      -1,    -1,    24,    25,    26,    59,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    93,
      -1,    -1,    96,    19,    -1,    21,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    30,    31,    -1,    33,    34,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      19,    93,    21,    -1,    96,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      96,    70,    71,    72,    73,    74,    19,    -1,    21,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    91,    19,    93,    21,    -1,    96,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    59,     9,    10,    11,    12,    81,    82,
      15,    16,    17,    18,    70,    71,    72,    73,    74,    -1,
      93,    -1,    -1,    96,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    38,    39,    -1,    83,     9,
      10,    11,    12,    -1,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    69,    -1,    38,    39,
      -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      83,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      38,    39,    -1,    83,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,    -1,    38,    39,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    83,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    38,    39,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    22,    42,    98,
      99,   100,   101,   102,   103,   105,   109,   110,   115,    70,
      70,    93,     0,   100,    47,    62,    70,    59,   117,    20,
     106,    90,   102,   103,   112,   113,    72,    93,    19,    21,
      24,    25,    26,    28,    29,    30,    31,    32,    33,    34,
      35,    60,    70,    71,    72,    73,    74,    81,    82,    93,
      96,   101,   117,   118,   119,   120,   121,   125,   127,   128,
     130,   131,    70,    23,   107,    91,   103,   114,   115,   116,
      70,    94,    89,    61,   112,    93,    93,    93,    92,   127,
      92,    70,   104,    93,    93,    93,    93,    93,    57,   127,
     127,   127,   127,    60,   120,    60,   101,   118,    47,     9,
      10,    11,    12,    15,    16,    17,    18,    38,    39,    62,
      65,    66,    67,    68,    69,    75,    76,    77,    78,    79,
      83,    14,    70,   108,    59,    70,    92,    91,   114,   102,
      47,    94,   127,   121,   127,    92,   127,   126,   127,    94,
      94,   127,   126,   129,    94,    60,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,    70,   127,    89,    60,   101,
     110,   111,   120,    94,    92,    94,    89,    89,    94,    94,
      58,    61,    93,    70,    60,   101,   110,   120,   120,   127,
     120,   103,   127,    92,    90,   129,    92,    27,    94,    36,
     122,   123,    94,   121,   120,    72,    95,    37,   123,   124,
      94,    95,   118,    95,    91,   120,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   102,   103,   103,   103,   103,   103,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   131,   131,   131,   131,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       5,     2,     1,     1,     1,     1,     1,     1,     7,     6,
       2,     0,     2,     0,     3,     1,     5,     4,     2,     2,
       2,     2,     1,     1,     1,     1,     0,     1,     3,     2,
       4,     5,     2,     1,     4,     3,     3,     2,     2,     1,
       2,     1,     2,     5,     2,     3,     2,     5,     9,     1,
       8,     1,     1,     0,     2,     1,     3,     3,     3,     2,
       5,     7,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       3,     1,     3,     3,     2,     6,     3,     4,     6,     1,
       0,     1,     3,     4,     1,     1,     1,     1,     1
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
#line 1697 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout, "DeclList\n"); }
#line 1703 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "bison.y" /* yacc.c:1646  */
    {  }
#line 1709 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Class Decl\n"); }
#line 1715 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Var Decl\n"); }
#line 1721 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"intf decl\n");}
#line 1727 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Fn Decl\n");}
#line 1733 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"VarDecl\n"); }
#line 1739 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"VarDecl with size\n"); }
#line 1745 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "bison.y" /* yacc.c:1646  */
    {    fprintf(yyout,"Variable\n "); }
#line 1751 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"void");  }
#line 1757 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"bool");  }
#line 1763 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 98 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"int\n");  }
#line 1769 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 99 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"double");  }
#line 1775 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"string");  }
#line 1781 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "bison.y" /* yacc.c:1646  */
    {    printf("NamedType");  }
#line 1787 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"classDecl");    }
#line 1793 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"classDecl");}
#line 1799 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 112 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Extends\n");   }
#line 1805 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 113 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Empty\n");  }
#line 1811 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "bison.y" /* yacc.c:1646  */
    {   printf("T_Implements");   }
#line 1817 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "bison.y" /* yacc.c:1646  */
    { }
#line 1823 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "bison.y" /* yacc.c:1646  */
    { printf("ImplementsTypeList");  }
#line 1829 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "bison.y" /* yacc.c:1646  */
    { printf("T_Identifier"); }
#line 1835 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "bison.y" /* yacc.c:1646  */
    {  printf("T_Interface");   }
#line 1841 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 128 "bison.y" /* yacc.c:1646  */
    {  printf("T_Interface");    }
#line 1847 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "bison.y" /* yacc.c:1646  */
    {  printf("T_FnDef");    }
#line 1853 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 136 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"Var_FieldList\n");  }
#line 1859 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 137 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"Fn_FieldList\n"); }
#line 1865 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 138 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"Statement_FieldList\n"); }
#line 1871 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 139 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_VarDecl\n");  }
#line 1877 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_FnDecl\n");  }
#line 1883 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 141 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_StmntDecl\n");  }
#line 1889 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 145 "bison.y" /* yacc.c:1646  */
    { printf("FormalsList");   }
#line 1895 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 146 "bison.y" /* yacc.c:1646  */
    { }
#line 1901 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 150 "bison.y" /* yacc.c:1646  */
    {  printf("FormalsList Variable");  }
#line 1907 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 151 "bison.y" /* yacc.c:1646  */
    { printf("FormalsList Variable , variable");    }
#line 1913 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 155 "bison.y" /* yacc.c:1646  */
    { printf("FnDef ;");}
#line 1919 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 159 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"calloutfunction\n");  }
#line 1925 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 160 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"function\n");  }
#line 1931 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 165 "bison.y" /* yacc.c:1646  */
    { printf("PrototypeList Prototype");   }
#line 1937 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 166 "bison.y" /* yacc.c:1646  */
    { printf("Prototype");  }
#line 1943 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 170 "bison.y" /* yacc.c:1646  */
    {printf("VarDeclList StmtList ");   }
#line 1949 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "bison.y" /* yacc.c:1646  */
    {printf("VarDeclList  ");  }
#line 1955 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 172 "bison.y" /* yacc.c:1646  */
    { printf(" StmtList ");  }
#line 1961 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 173 "bison.y" /* yacc.c:1646  */
    {printf(" {} ");   }
#line 1967 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 177 "bison.y" /* yacc.c:1646  */
    { printf("  StmtList Stmt   ");  }
#line 1973 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 178 "bison.y" /* yacc.c:1646  */
    { printf("   Stmt   "); }
#line 1979 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 182 "bison.y" /* yacc.c:1646  */
    {  printf("    VarDeclList VarDecl     "); }
#line 1985 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 183 "bison.y" /* yacc.c:1646  */
    {  printf("     VarDecl     "); }
#line 1991 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "bison.y" /* yacc.c:1646  */
    {   fprintf(yyout,"OptExpr ;");   }
#line 1997 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 188 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_While ;");   }
#line 2003 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_While ;"); }
#line 2009 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 190 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Return ;");  }
#line 2015 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Break ;");  }
#line 2021 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 192 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Print ;");  }
#line 2027 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_For ;");   }
#line 2033 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_IfStmt ;");  }
#line 2039 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Switch ;");   }
#line 2045 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_StmtBlock ;");  }
#line 2051 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"OptExpr");  }
#line 2057 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"OptExpr");  }
#line 2063 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 206 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CaseStmtList");  }
#line 2069 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 207 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CaseStmtList");  }
#line 2075 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 211 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Case T_IntConstant");  }
#line 2081 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "bison.y" /* yacc.c:1646  */
    {  fprintf(yyout,"T_IntConstant");  }
#line 2087 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 216 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Default");  }
#line 2093 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 217 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"T_Default");  }
#line 2099 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "bison.y" /* yacc.c:1646  */
    { printf(" T_If");  }
#line 2105 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "bison.y" /* yacc.c:1646  */
    { printf(" T_If");  }
#line 2111 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 226 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ExprList\n"); }
#line 2117 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 227 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ExprList\n"); }
#line 2123 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 231 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"LValue Expr\n"); }
#line 2129 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 232 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"CallExpr\n"); }
#line 2135 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 233 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ConstantExpr\n"); }
#line 2141 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 234 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"||Expr\n");  }
#line 2147 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 235 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"&&Expr\n");  }
#line 2153 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 236 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"<Expr\n");  }
#line 2159 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,">Expr\n");  }
#line 2165 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 238 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,">=Expr\n");  }
#line 2171 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 239 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"<=Expr\n");  }
#line 2177 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 240 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"=Expr\n");  }
#line 2183 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 241 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"!=Expr\n");  }
#line 2189 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 242 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"+Expr\n");  }
#line 2195 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 243 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"-Expr\n");  }
#line 2201 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 244 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"*Expr\n");  }
#line 2207 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 245 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"/Expr\n");  }
#line 2213 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 246 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"ModExpr\n");  }
#line 2219 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 247 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"^Expr\n");  }
#line 2225 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 248 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"|Expr\n");  }
#line 2231 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 249 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"&Expr\n");  }
#line 2237 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 250 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"LShiftExpr\n");  }
#line 2243 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 251 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"RShiftExpr\n");  }
#line 2249 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 252 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"-\n");  }
#line 2255 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 253 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"!\n");  }
#line 2261 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 254 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"~\n");  }
#line 2267 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 255 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"incrExpr\n");  }
#line 2273 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 256 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"decrExpr\n");  }
#line 2279 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 257 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"COParenExpr\n");  }
#line 2285 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 258 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"thisExpr\n");  }
#line 2291 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 259 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"readintExpr\n");  }
#line 2297 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 260 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"readlineExpr\n");  }
#line 2303 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 261 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"newarrayExpr\n");  }
#line 2309 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 262 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"newarryExpr\n");  }
#line 2315 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 263 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Equal Expr\n");  }
#line 2321 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 267 "bison.y" /* yacc.c:1646  */
    { fprintf(yyout,"Call");  }
#line 2327 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 268 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"Call");  }
#line 2333 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 272 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"ExprList\n");  }
#line 2339 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 273 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"ExprList\n");  }
#line 2345 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 277 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"IExpr");  }
#line 2351 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 278 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"Expr");  }
#line 2357 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 279 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"SExpr");  }
#line 2363 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 284 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_IntConstant   ");  }
#line 2369 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 285 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_DoubleConstant ");  }
#line 2375 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 286 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_BoolConstant");  }
#line 2381 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 287 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_StringConstant");  }
#line 2387 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 288 "bison.y" /* yacc.c:1646  */
    {fprintf(yyout,"T_Null ");  }
#line 2393 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 2397 "bison.tab.c" /* yacc.c:1646  */
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
#line 290 "bison.y" /* yacc.c:1906  */


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

