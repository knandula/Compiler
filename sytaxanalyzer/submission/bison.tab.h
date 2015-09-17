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
    CLASS = 258,
    PROGRAM = 259,
    CALLOUT = 260,
    VOID = 261,
    TRUE = 262,
    FALSE = 263,
    DECIMAL = 264,
    END = 265,
    ENDL = 266,
    TCASSIGNMENT = 267,
    TCEQ = 268,
    TCNE = 269,
    TCLT = 270,
    TCLE = 271,
    TCGT = 272,
    TCGE = 273,
    TCLP = 274,
    TCRP = 275,
    TCLB = 276,
    TCRB = 277,
    TCSRB = 278,
    TCSLB = 279,
    TCOMMA = 280,
    TCDOT = 281,
    ADDITION = 282,
    SUBTRACTION = 283,
    MULTIPLICATION = 284,
    DIVISION = 285,
    INT = 286,
    NUMBER = 287,
    DOUBLE = 288,
    STRING = 289,
    IDENTI = 290,
    BOOLEAN = 291,
    TCSEMICOLON = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 18 "bison.y" /* yacc.c:1909  */

	int ival;
	float fval;
	char *sval;
	bool bval;

#line 99 "bison.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
