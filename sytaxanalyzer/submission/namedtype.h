
class NamedType : public Type {
 public:
  NamedType(Identifier *i);

  const char *GetPrintNameForNode() { return "NamedType"; }
  void PrintChildren(int indentLevel);
  void PrintToStream(std::ostream& out) { out << id; }
  char *GetName() { return id->name(); }
  Identifier *GetIdent() { return id; }

  bool IsBuiltin() { return false; }
  bool IsEquivalentTo(Type *other);
  bool IsConvertableTo(Type *other);

 protected:
  Identifier *id;
};
