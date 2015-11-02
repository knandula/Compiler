#include <iostream>
#include <map>
#include <list>
#include <string>
#include <stdlib.h>
#include <llvm/value.h>


using namespace std;

class Node {
 public:
  Node();  
  void print();
  virtual ~Node() {}
};

class Identifier : public Node {
 public:
  Identifier(const char* name);  
  void print();
 protected:
  const char* name_;
};

class Type : public Node {
 public:
  static Type *intType, *doubleType, *boolType, *voidType,
              *nullType, *stringType, *errorType;
 Type(const char *str);
 void print();
 protected:
  char *typeName;
};

class NamedType : public Type {
 public:
  NamedType(Identifier *i);
 protected:
  Identifier *id;
};

class Decl : public Node {
 public:
  Decl(Identifier *name);  
  virtual void print();
  virtual void evaluate();
 protected:
  Identifier* id;
};

class ClassDecl : public Decl {
 public:
  ClassDecl(Identifier* name,list<Decl*>* members);   
  void print();
  void evaluate();
 protected:
  list<Decl*>* mem;
  Identifier* nam;
};

class VarDecl : public Decl {
 public:
  VarDecl(Identifier* name, Type* type);
  void print();
 protected:
   Identifier* vnam;
   Type* vtype;
};


class Stmt : public Node {
 public:
  Stmt() : Node() {}
};


class StmtBlock : public Stmt {
 public:
  StmtBlock(list<VarDecl*> *variableDeclarations, list<Stmt*> *statements);
 protected:
  list<VarDecl*> *decls_;
  list<Stmt*> *stmts_;
};


class FnDecl : public Decl {
 public:
  FnDecl(Identifier *name, Type *return_type, list<VarDecl*> *formals);
  void SetFunctionBody(Stmt *b); 
  void print();
 protected:
  list<VarDecl*>* formals_;
  Type* return_type_;
  Stmt* body_;
};

class Expr : public Stmt {
 public:
  Expr() : Stmt() {}
 protected:
  Type* ret_type_;
};


class EmptyExpr : public Expr {
 public:
  EmptyExpr() { ret_type_ = Type::voidType; }
};

class Operator : public Node {
 public:
  Operator(const char* tok);
 protected:
  char token_string_[4];
};

class CompoundExpr : public Expr {
 public:
  CompoundExpr(Expr* lhs, Operator* op, Expr* rhs); 
  CompoundExpr(Operator* op, Expr* rhs);            
  CompoundExpr(Expr* lhs, Operator* op);
 protected:
  Operator* op_;
  // left will be NULL if unary
  Expr* left_;
  Expr* right_;
};

class LogicalExpr : public CompoundExpr {
 public:
  LogicalExpr(Expr* lhs, Operator* op, Expr* rhs):CompoundExpr(lhs, op, rhs) {}
  LogicalExpr(Operator* op, Expr* rhs) : CompoundExpr(op,rhs) {}
};

class AssignExpr : public CompoundExpr {
 public:
  AssignExpr(Expr* lhs, Operator* op, Expr* rhs): CompoundExpr(lhs, op, rhs) {} 
};

class ArithmeticExpr : public CompoundExpr {
 public:
  ArithmeticExpr(Expr* lhs, Operator* op, Expr* rhs): CompoundExpr(lhs, op, rhs) {}
  ArithmeticExpr(Operator* op, Expr* rhs) : CompoundExpr(op, rhs) {}
};


class RelationalExpr : public CompoundExpr {
 public:
  RelationalExpr(Expr* lhs, Operator* op, Expr* rhs):CompoundExpr(lhs, op, rhs) {}
};


class Call : public Expr {
 public:
  Call(Expr* base, Identifier* field, list<Expr*>* args);
 protected:
  Expr* base_; 
  Identifier* field_;
  list<Expr*>* actuals_;
};


class IntConstant : public Expr {
 public:
  IntConstant(int val);
 protected:
  int value_;
};

class DoubleConstant : public Expr {
 public:
  DoubleConstant(double val);
 protected:
  double value_;
};

class BoolConstant : public Expr {
 public:
  BoolConstant(bool val);
 protected:
  bool value_;
};

class StringConstant : public Expr {
 public:
  StringConstant(const char *val);
 protected:
  char* value_;
};

class NullConstant: public Expr {
 public:
  NullConstant() : Expr() { ret_type_ = Type::nullType; }
};


class pgm : public Node {
 public:
  pgm(list<Decl*> *declList);  
  void print();
  void evaluate();
 protected:
  list<Decl*> *decls;
};

extern map<string, float> idTable;
extern pgm *root;
