#include <stdio.h>
#include <string.h>

#include "node.h"
using namespace std;


Type *Type::intType    = new Type("int");
Type *Type::doubleType = new Type("double");
Type *Type::voidType   = new Type("void");
Type *Type::boolType   = new Type("bool");
Type *Type::nullType   = new Type("null");
Type *Type::stringType = new Type("string");
Type *Type::errorType  = new Type("error");


Node::Node() {
}

void Node::print(){
cout << "node" << endl;
}

Type::Type(const char *n) {
  typeName = strdup(n);
}

Decl::Decl(Identifier *n) : Node(),id(n) {}

void Decl::print() {
cout << id << endl;
}

void Decl::evaluate() {
cout << id << endl;
}

Identifier::Identifier(const char *n) : Node(),name_(n) {
}

void Identifier::print() {
cout << name_ << endl;
}

pgm::pgm(list<Decl*> *d) : decls(d){}

void pgm::print() {
cout << "program" << endl;
}

void pgm::evaluate(){
 list<Decl*>::iterator itr;  
 for(itr = decls->begin(); itr != decls->end(); itr++)
 {
   (*itr)->print();
   (*itr)->evaluate();
 }
}

void Type::print() {
cout << typeName << endl;
}

ClassDecl::ClassDecl(Identifier *n,list<Decl*> *m) : Decl(n),nam(n),mem(m) {}

VarDecl::VarDecl(Identifier *n, Type *t) : Decl(n),vnam(n),vtype(t) {}

void ClassDecl::print() {
cout << "class->";
nam->print();
}

void ClassDecl::evaluate() {
 list<Decl*>::iterator itr;  
 for(itr = mem->begin(); itr != mem->end(); itr++)
 {
   (*itr)->print(); 
 }
}


void VarDecl::print() {
cout << "variable->" ;
(vnam)->print();
cout << "datatype->" ;
(vtype)->print();
}

StmtBlock::StmtBlock(list<VarDecl*> *d, list<Stmt*> *s) {}
FnDecl::FnDecl(Identifier *n, Type *r, list<VarDecl*> *d) : Decl(n) {}
void FnDecl::SetFunctionBody(Stmt *b) {}
void FnDecl::print(){
cout << "function" << endl;
}

Operator::Operator(const char* tok) : Node() {
  strncpy(token_string_, tok, sizeof(token_string_));
}


CompoundExpr::CompoundExpr(Expr* l, Operator* o, Expr* r):Expr() {}
CompoundExpr::CompoundExpr(Operator* o, Expr* r): Expr() {}
CompoundExpr::CompoundExpr(Expr* l, Operator* o): Expr() {}

Call::Call(Expr *b, Identifier *f, list<Expr*> *a) : Expr() {}

IntConstant::IntConstant(int val) : Expr() {
  value_ = val;
  ret_type_ = Type::intType;
}

DoubleConstant::DoubleConstant(double val) : Expr() {
  value_ = val;
  ret_type_ = Type::doubleType;
}

BoolConstant::BoolConstant(bool val) : Expr() {
  value_ = val;
  ret_type_ = Type::boolType;
}

StringConstant::StringConstant(const char *val) : Expr() {
  value_ = strdup(val);
  ret_type_ = Type::stringType;
}




map<string,float> idTable;
