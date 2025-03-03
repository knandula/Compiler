%{
#include <cstdio>
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()
extern int line_num;

#include "parser.tab.h"  // to get the token types that we return

%}
%%
"<="	 	         {  return T_LessEqual;}
">="			 {  return T_GreaterEqual;}
"=="			 {  return T_Equal;}
"="			 {  return T_SingleEqual;}
"!=" 			 {  return T_NotEqual;}
"&&"			 {  return T_And;}
"||"			 {  return T_Or;}
"[]"			 {  return T_Dims;}
"++"			 {  return T_Incr;}
"--" 			 {  return T_Decr;}
">>" 			 {  return T_RightShift;}
"<<" 			 {  return T_LeftShift;}
"void"			 {  return T_Void;}
"int"			 {  return T_Int;}
"double"		 {  return T_Double;}
"boolean"		 {  return T_Bool;}
"string" 		 {  return T_String;}
"callout"		 {  return T_Call;}
"class"			 {  return T_Class;}
"null" 			 {  return T_Null;}
"while" 	  	 {  return T_While;}
"for" 			 {  return T_For;}
"if"			 {  return T_If;}
"else"			 {  return T_Else;}
"return" 		 {  return T_Return;}
"break"			 {  return T_Break;}
"switch" 		 {  return T_Switch;}
"case"			 {  return T_Case;}
"default"		 {  return T_Default;}
"extends"		 {  return T_Extends;}
"this"			 {return T_This;}
"implements"		 {return T_Implements;}
"interface" 		 {return T_Interface;}
"new"			 {return T_New;}
"NewArray" 		 {return T_NewArray;}
"Print"			 {return T_Print;}
"ReadInteger" 		 {return T_ReadInteger;}
"ReadLine"		 {return T_ReadLine;}
\(                       {return T_Pl;}
\)                       {return T_Pr;}
\[                       {return T_Slb;}
\]                       {return T_Srb;}
\{                       {return TCLB;}
\}                       {return TCRB;}
\.                       {return TCDOT;}
\,                       {return T_Comma;}
\;                       {return T_Semicolon;}
\+                       {return T_Add;}
\%                       { return T_Mod; }
\-                       {return T_Sub;}
\*                       {return T_Mul;}
\/                       {return T_Div;}
[0-9]+\.[0-9]+ 		 { yylval.doubleConstant = atof(yytext); return T_DoubleConstant; }
[0-9]+   	         { yylval.integerConstant = atoi(yytext); return T_IntConstant; }
[a-zA-Z_][a-zA-Z0-9_]*   { yylval.stringConstant = strdup(yytext);	return T_Identifier;}
\n                      /* ignore end of line */;
[ \t]+                  /* ignore whitespace */;

%%
