#include "codegen.h"
#include "node.h"
#include "parser.tab.h"

using namespace llvm;

void CodeGenContext::gencode(pgm &root)
{
std::cout << "Generating code... \n";
vector<const Type*> argTypes;
FunctionType *ftype = FunctionType::get(Type::getVoidTy(getGlobalContext()),false);
mainFunction = Function::Create(ftype, GlobalValue::InternalLinkage, "main", module);
BasicBlock *bblock = BasicBlock::Create(getGlobalContext(), "entry", mainFunction, 0);
pushBlock(bblock);
root.codeGen(*this); 
ReturnInst::Create(getGlobalContext(), bblock);
popBlock();
std::cout << "Code is generated.n";
PassManager pm;
pm.add(createPrintModulePass(&outs()));
pm.run(*module);
}

llvm::Value* pgm::codeGen(CodeGenContext &context)
{
 Value *last = NULL;
 list<Decl*>::iterator itr;  
 for(itr = decls->begin(); itr != decls->end(); itr++)
 {
    last = (**itr).codeGen(context);
 }
    return last;
}

