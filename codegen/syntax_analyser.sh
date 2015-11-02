#!/bin/bash
bison -d parser.y --verbose
flex lexer.l
g++ parser.tab.c lex.yy.c node.cpp -lfl -o analyze
./analyze $1

