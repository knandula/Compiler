class Program : public Node {
 public:
  Program(List<Decl*> *declList);
  const char *GetPrintNameForNode() { return "Program"; }
  void PrintChildren(int indent_level);
  void Check();
  void Emit();

 protected:
  List<Decl*> *decls_;
  SymTable *env_;
  CodeGenerator *codegen_;
  FrameAllocator *falloc_;
};

