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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    T_While = 275,
    T_For = 276,
    T_If = 277,
    T_Else = 278,
    T_Return = 279,
    T_Break = 280,
    T_New = 281,
    T_NewArray = 282,
    T_Print = 283,
    T_Switch = 284,
    T_Case = 285,
    T_Default = 286,
    T_Incr = 287,
    T_Decr = 288,
    CLASS = 289,
    T_Call = 290,
    VOID = 291,
    TRUE = 292,
    FALSE = 293,
    DECIMAL = 294,
    T_Semicolon = 295,
    END = 296,
    ENDL = 297,
    TCASSIGNMENT = 298,
    TCEQ = 299,
    TCNE = 300,
    TCLT = 301,
    TCLE = 302,
    TCGT = 303,
    TCGE = 304,
    T_Pl = 305,
    T_Pr = 306,
    TCLB = 307,
    TCRB = 308,
    T_Srb = 309,
    T_Slb = 310,
    T_Comma = 311,
    TCDOT = 312,
    T_Add = 313,
    T_Sub = 314,
    T_Mul = 315,
    T_Div = 316,
    T_Mod = 317,
    T_StringConstant = 318,
    T_Identifier = 319,
    T_IntConstant = 320,
    T_DoubleConstant = 321,
    T_BoolConstant = 322,
    NEG = 323,
    NOELSE = 324,
    EMPTYCASE = 325,
    EMPTYDEFAULT = 326,
    NONEMPTYCASE = 327,
    NONEMPTYDEFAULT = 328
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:1909  */

  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[32];
  list<Decl*>      *declList;
  Decl             *decl;
  ClassDecl        *classDecl;  
  VarDecl          *varDecl ;
  Type             *type;
  FnDecl           *fnDecl;
  NamedType        *namedType;
  pgm	 	   *prog;
  StmtBlock        *stmtBlock;
  list<Stmt*>      *stmtList;
  list<VarDecl*>   *varDeclList;
  Expr             *expr;
  Stmt             *stmt;
  list<Expr*>      *exprList;

#line 150 "parser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
