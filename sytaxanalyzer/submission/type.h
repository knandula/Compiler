
class Type : public Node {
 public:
  static Type *intType, *doubleType, *boolType, *voidType,
              *nullType, *stringType, *errorType;

  Type(yyltype loc) : Node(loc) {}
  Type(const char *str);

  const char *GetPrintNameForNode() { return "Type"; }
  friend std::ostream& operator<<(std::ostream& out, Type *t) {
    t->PrintToStream(out); return out;  }
  void PrintChildren(int indentLevel){}; 
  virtual void PrintToStream(std::ostream& out) { out << typeName; }
  virtual char *GetName() { return typeName; }
  virtual int GetQualifier() { return 0; }
  virtual Identifier *GetIdent() { return NULL; }

 protected:
  char *typeName;
};

