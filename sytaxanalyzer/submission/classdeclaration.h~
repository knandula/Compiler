
class ClassDecl : public Decl {
 public:
  ClassDecl(Identifier* name, List<Decl*>* members);
  const char* GetPrintNameForNode() {
    return "ClassDecl";
  }
  Identifier* GetIdent() { return id_; } 
  List<VarDecl*>* GetFields() { return fields_; } 
  void PrintChildren(int indent_leve);
  int NumFields() { return num_fields_; }
  char* GetClassLabel() { return class_label_; }

 protected:
  List<Decl*>* members_; 
  ClassDecl* parent_;
  List<VarDecl*>* fields_;
  int num_fields_;
  char *class_label_; 
};

