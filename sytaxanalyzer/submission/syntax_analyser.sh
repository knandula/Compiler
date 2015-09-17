#!/bin/bash
bison -d bison.y --verbose
flex fx.l
g++ bison.tab.c lex.yy.c -lfl -o analyze
./analyze $1

