/* File: lexer.h
 * ---------------
 * You should not need to modify this file. It declare a few constants,
 * types, variables,and functions that are used and/or exported by
 * the lex-generated scanner.
 */

#ifndef DECAF_LEXER_H__
#define DECAF_LEXER_H__

#include <stdio.h>

// Maximum length for identifiers
#define MaxIdentLen 31

// Text of lexeme just scanned
extern char* yytext;

// Defined in lexer.ll user subroutines
void InitLexer();
const char *GetLineNumbered(int n);

#endif /* DECAF_LEXER_H__ */
