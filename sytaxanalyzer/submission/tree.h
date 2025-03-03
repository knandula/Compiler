#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>
#include <list>
#include <deque>

using namespace std;

#include "node.h"
#include "collection.h"
#include "identifier.h"
#include "type.h"
#include "namedtype.h"
#include "declaration.h"
#include "vardeclaration.h"
#include "classdeclaration.h"

#define YYLTYPE yyltype
extern struct yyltype yylloc;


class Error : public Node {
 public:
  Error() : Node() {}
  const char* GetPrintNameForNode() { return "Error"; } 
};

class Program : public Node {
 public:
  Program(List<Decl*> *declList){};
  const char *GetPrintNameForNode() { return "Program"; }
  void PrintChildren(int indent_level){};
 protected:
  List<Decl*> *decls_;
};

