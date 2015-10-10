/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 25 "bison.y" /* yacc.c:1909  */

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

#line 149 "bison.tab.h" /* yacc.c:1909  */
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
