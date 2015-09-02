%{
#include<stdio.h>
#include "y.tab.h"
%}

%%
class					 	return CLASS;
Program 					return PROGRAM;
[0-9]+   		 yylval=atoi(yytext);	return NUMBER;
\"						return QUOTE;
;						return SEMICOLON;
\{						return OB;
\} 						return CB;
\n				 		/*ignore EOL*/;
[ \t]+				  	 	/* ignore whitespace */
%%
