#ifndef YYLTYPE

typedef struct yyltype {
  int timestamp;
  int first_line;
  int first_column;
  int last_line;
  int last_column;
  char *text;
} yyltype;

#define YYLTYPE yyltype

class Node {
 public:
  Node(yyltype loc);
  Node();
  virtual ~Node() {}
  yyltype* location() { return location_; }
  Node* parent() { return parent_; }
  void set_parent(Node* parent) { parent_ = parent; }
  virtual const char* GetPrintNameForNode() = 0;
  void Print(int indentLevel, const char* label = NULL);
  virtual void PrintChildren(int indentLevel) {}
  virtual bool Check(SymTable* env) { return true; }

 protected:
  yyltype* location_;
  Node* parent_;
};
