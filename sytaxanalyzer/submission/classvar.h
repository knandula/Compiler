

class Decl : public Node {
 public:
  Decl(Identifier *name);
  friend std::ostream& operator<<(std::ostream& out, Decl *d) {
    return out << d->id_;
  }
  void PrintToStream(std::ostream& out) { out << id_; } 
  virtual Type* GetType() { return NULL; }
  char *GetName() { return id_->name(); }

 protected:
  Identifier* id_;
};


/*variable and class declaration */
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
