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

llvm::Value* IntConstant::codeGen(CodeGenContext &context)
{
 return ConstantFP::get(Type::getInt64Ty(getGlobalContext()),value_);
}

llvm::Value* DoubleConstant::codeGen(CodeGenContext &context)
{
 return ConstantFP::get(Type::getDoubleTy(getGlobalContext()),value_);
}

llvm::Value* BoolConstant::codeGen(CodeGenContext &context)
{
 return ConstantFP::get(Type::getInt1Ty(getGlobalContext()),value_);
}

llvm::Value* StringConstant::codeGen(CodeGenContext &context)
{
 return ConstantFP::get(Type::getLabelTy(getGlobalContext()),value_);
}


llvm::Value* Decl::codeGen(CodeGenContext &context)
{

}

llvm::Value* ClassDecl::codeGen(CodeGenContext &context)
{
  list<Decl*>::iterator itr;  
	 for(itr = mem->begin(); itr != mem->end(); itr++)
	 {
	   (*itr)->codeGen(context); 
	 }
}

static Type *typeOf(const char* type)
{
   cout << type << endl;
   if(strcmp(type,"int") == 0){
     return Type::getInt64Ty(getGlobalContext());	}
   else if (strcmp(type,"double") == 0){
     return Type::getDoubleTy(getGlobalContext());	}
 return Type::getVoidTy(getGlobalContext());
}

llvm::Value* VarDecl::codeGen(CodeGenContext &context)
{
AllocaInst *alloc = new AllocaInst(typeOf(vtype->typeName),vnam->name_,context.currentBlock());
context.locals()[vnam->name_] = alloc;
return alloc;
}



llvm::Value* Identifier::codeGen(CodeGenContext &context)
{
   if(context.locals().find(name_) == context.locals().end()){ return NULL; }
  return new LoadInst(context.locals()[name_],"",false,context.currentBlock());
}

