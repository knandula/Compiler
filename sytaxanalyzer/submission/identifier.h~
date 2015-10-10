
class Identifier : public Node {
 public:
  Identifier(yyltype loc, const char* name){};
  const char* GetPrintNameForNode() { return "Identifier"; }
  void PrintChildren(int indentLevel){};
  friend std::ostream& operator<<(std::ostream& out, Identifier* id) {
    return out << id->name_;
  }
  char* name() { return name_; }
 protected:
  char* name_;
};

