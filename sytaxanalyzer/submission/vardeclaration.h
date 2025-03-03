
class VarDecl : public Decl {
 public:
  VarDecl(Identifier* name,Type* type);
  const char* GetPrintNameForNode() {
    return "VarDecl";
  }
  void PrintChildren(int indent_level);  
  Type* GetType() { return type_; }
 protected:
  Type* type_;
};

