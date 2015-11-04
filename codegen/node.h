#include <iostream>
#include <map>
#include <list>
#include <string>
#include <stdlib.h>
#include <llvm/IR/Value.h>


using namespace std;

class CodeGenContext;

class Node {
 public:
  Node();  
  void print();
  virtual llvm::Value* codeGen(CodeGenContext& context) { return NULL;}
  virtual ~Node() {}
};

class Identifier : public Node {
 public:
  Identifier(const char* name);  
  void print();
 virtual llvm::Value* codeGen(CodeGenContext &context);
  const char* name_;
};

class DataType : public Node {
 public:
  static DataType *intType, *doubleType, *boolType, *voidType,
              *nullType, *stringType, *errorType;
 DataType(const char *str);
 void print();
 char *typeName;
};

class NamedType : public DataType {
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
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  Identifier* id;
};

class ClassDecl : public Decl {
 public:
  ClassDecl(Identifier* name,list<Decl*>* members);   
  void print();
  void evaluate();
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  list<Decl*>* mem;
  Identifier* nam;
};

class VarDecl : public Decl {
 public:
  VarDecl(Identifier* name, DataType* type);
  void print();
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
   Identifier* vnam;
   DataType* vtype;
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
  FnDecl(Identifier *name, DataType *return_type, list<VarDecl*> *formals);
  void SetFunctionBody(Stmt *b); 
  void print();
 protected:
  list<VarDecl*>* formals_;
  DataType* return_type_;
  Stmt* body_;
};

class Expr : public Stmt {
 public:
  Expr() : Stmt() {}
 protected:
  DataType* ret_type_;
};


class EmptyExpr : public Expr {
 public:
  EmptyExpr() { ret_type_ = DataType::voidType; }
};

class Opt : public Node {
 public:
  Opt(const char* tok);
 protected:
  char token_string_[4];
};

class CompoundExpr : public Expr {
 public:
  CompoundExpr(Expr* lhs, Opt* op, Expr* rhs); 
  CompoundExpr(Opt* op, Expr* rhs);            
  CompoundExpr(Expr* lhs, Opt* op);
 protected:
  Opt* op_;
  // left will be NULL if unary
  Expr* left_;
  Expr* right_;
};

class LogicalExpr : public CompoundExpr {
 public:
  LogicalExpr(Expr* lhs, Opt* op, Expr* rhs):CompoundExpr(lhs, op, rhs) {}
  LogicalExpr(Opt* op, Expr* rhs) : CompoundExpr(op,rhs) {}
};

class AssignExpr : public CompoundExpr {
 public:
  AssignExpr(Expr* lhs, Opt* op, Expr* rhs): CompoundExpr(lhs, op, rhs) {} 
};

class ArithmeticExpr : public CompoundExpr {
 public:
  ArithmeticExpr(Expr* lhs, Opt* op, Expr* rhs): CompoundExpr(lhs, op, rhs) {}
  ArithmeticExpr(Opt* op, Expr* rhs) : CompoundExpr(op, rhs) {}
};


class RelationalExpr : public CompoundExpr {
 public:
  RelationalExpr(Expr* lhs, Opt* op, Expr* rhs):CompoundExpr(lhs, op, rhs) {}
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
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  int value_;
};

class DoubleConstant : public Expr {
 public:
  DoubleConstant(double val);
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  double value_;
};

class BoolConstant : public Expr {
 public:
  BoolConstant(bool val);
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  bool value_;
};

class StringConstant : public Expr {
 public:
  StringConstant(const char *val);
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  char* value_;
};

class NullConstant: public Expr {
 public:
  NullConstant() : Expr() { ret_type_ = DataType::nullType; }
};


class pgm : public Node {
 public:
  pgm(list<Decl*> *declList);  
  void print();
  void evaluate();
 virtual llvm::Value* codeGen(CodeGenContext &context);
 protected:
  list<Decl*> *decls;
};

extern map<string, float> idTable;
extern pgm *root;
