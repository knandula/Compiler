%{
#include <stdio.h>
#include <string.h>
#define YYSTYPE char *

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}
 
int yywrap()
{
        return 1;
} 
  
main()
{
  yyparse();
} 

%}
%token CLASS PROGRAM OB CB NL ID QUOTE SEMICOLON NUMBER
%%
program : /* empty */
	| CLASS PROGRAM block
	;

block: 
        OB zonestatements CB 
        ;

zonestatements:
        |
        zonestatements zonestatement SEMICOLON
        ;

zonestatement:
        statements
        |
        CLASS  
        {
                printf("'%s' was encountered\n", $1);
        }
        ;

statements:
        | statements statement
        ;

statement: NUMBER | block | ID

%%

