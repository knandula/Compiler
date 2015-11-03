#include <stdio.h>
#include <string.h>
#include "node.h"
using namespace std;


DataType *DataType::intType    = new DataType("int");
DataType *DataType::doubleType = new DataType("double");
DataType *DataType::voidType   = new DataType("void");
DataType *DataType::boolType   = new DataType("bool");
DataType *DataType::nullType   = new DataType("null");
DataType *DataType::stringType = new DataType("string");
DataType *DataType::errorType  = new DataType("error");


Node::Node() {
}

void Node::print(){
cout << "node" << endl;
}

DataType::DataType(const char *n) {
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

void DataType::print() {
cout << typeName << endl;
}

ClassDecl::ClassDecl(Identifier *n,list<Decl*> *m) : Decl(n),nam(n),mem(m) {}

VarDecl::VarDecl(Identifier *n, DataType *t) : Decl(n),vnam(n),vtype(t) {}

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
FnDecl::FnDecl(Identifier *n, DataType *r, list<VarDecl*> *d) : Decl(n) {}
void FnDecl::SetFunctionBody(Stmt *b) {}
void FnDecl::print(){
cout << "function" << endl;
}

Opt::Opt(const char* tok) : Node() {
  strncpy(token_string_, tok, sizeof(token_string_));
}


CompoundExpr::CompoundExpr(Expr* l, Opt* o, Expr* r):Expr() {}
CompoundExpr::CompoundExpr(Opt* o, Expr* r): Expr() {}
CompoundExpr::CompoundExpr(Expr* l, Opt* o): Expr() {}

Call::Call(Expr *b, Identifier *f, list<Expr*> *a) : Expr() {}

IntConstant::IntConstant(int val) : Expr() {
  value_ = val;
  ret_type_ = DataType::intType;
}




DoubleConstant::DoubleConstant(double val) : Expr() {
  value_ = val;
  ret_type_ = DataType::doubleType;
}



BoolConstant::BoolConstant(bool val) : Expr() {
  value_ = val;
  ret_type_ = DataType::boolType;
}

StringConstant::StringConstant(const char *val) : Expr() {
  value_ = strdup(val);
  ret_type_ = DataType::stringType;
}






map<string,float> idTable;
