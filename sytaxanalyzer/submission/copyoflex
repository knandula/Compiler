%{
#include <cstdio>
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()
int line_num = 1;

#include "bison.tab.h"  // to get the token types that we return

%}
%%
class 			{ return CLASS; }
Program			{ return PROGRAM; }
boolean			{ return BOOLEAN; }
double			{ return DOUBLE; }
string			{ return STRING; }
callout			{ return CALLOUT; }
int			{ return INT;}
"="                     {return TCASSIGNMENT;}
"=="                    {return TCEQ;}
"!="                    {return TCNE;}
"<"                     {return TCLT;}
"<="                    {return TCLE;}
">"                     {return TCGT;}
">="                    {return TCGE;}
\(                     {return TCLP;}
\)                     {return TCRP;}
\[                     {return TCSLB;}
\]                     {return TCSRB;}
\{                     {return TCLB;}
\}                     {return TCRB;}
\.                     {return TCDOT;}
\,                     {return TCOMMA;}
\;                     {return TCSEMICOLON;}
\+                     {return ADDITION;}
\-                     {return SUBTRACTION;}
\*                     {return MULTIPLICATION;}
\/                     {return DIVISION;}
[0-9]+\.[0-9]+ 		{ yylval.fval = atof(yytext); return DECIMAL; }
[0-9]+   	        { yylval.ival = atoi(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]*  {	yylval.sval = strdup(yytext);	return IDENTI;}
\n                      /* ignore end of line */;
[ \t]+                  /* ignore whitespace */;

%%
