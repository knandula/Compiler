#!/bin/bash
bison -d parser.y --verbose
flex lexer.l
g++ parser.tab.c lex.yy.c node.cpp codegen.cpp `llvm-config --libs core jit native` `llvm-config --ldflags --cxxflags` -lfl -o analyze
./analyze $1

