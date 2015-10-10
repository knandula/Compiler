

class Decl : public Node {
 public:
  Decl(Identifier *name);
  virtual Type* GetType() { return NULL; }
  char *GetName() { return id_->name(); }
 protected:
  Identifier* id_;
};

