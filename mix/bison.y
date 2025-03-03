%{
#include "errors.h"
#include "lexer.h"
#include "dcc.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
#include <list>
using namespace std;
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;
void yyerror(const char *s);
%}

%union {
  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[32]; 
  Decl             *decl;
  List<Decl*>      *declList;
  VarDecl          *varDecl;
  ClassDecl        *classDecl;
  InterfaceDecl    *interfaceDecl;
  FnDecl           *fnDecl;
  Type             *type;
  NamedType        *namedType;
  ArrayType        *arrayType;
  List<NamedType*> *implementsTypeList;
  List<VarDecl*>   *varDeclList;
  StmtBlock        *stmtBlock;
  List<Stmt*>      *stmtList;
  Stmt             *stmt;
  IfStmt           *ifStmt;
  Expr             *expr;
  List<Expr*>      *exprList;
  FieldAccess      *fieldAccess;
  CaseStmt         *caseStmt;
  List<CaseStmt*>  *caseStmtList;
  DefaultStmt      *defaultStmt;
}



%token T_Void T_Bool T_Int T_Double T_String T_Class 
%token T_LessEqual T_GreaterEqual T_Equal T_NotEqual T_Dims T_SingleEqual
%token T_LeftShift T_RightShift
%token T_And T_Or T_Null T_Extends T_This T_Interface T_Implements
%token T_While T_For T_If T_Else T_Return T_Break
%token T_New T_NewArray T_Print T_ReadInteger T_ReadLine
%token T_Switch T_Case T_Default T_Incr T_Decr

%token CLASS T_Call  VOID TRUE FALSE DECIMAL T_Semicolon 
%token  END ENDL
%token  TCASSIGNMENT TCEQ TCNE TCLT TCLE TCGT TCGE 
%token  T_Pl T_Pr TCLB TCRB T_Srb T_Slb T_Comma TCDOT 
%token  T_Add T_Sub T_Mul T_Div T_Mod

%token <identifier> T_Identifier 
%token <stringConstant> T_StringConstant
%token <integerConstant> T_IntConstant
%token <doubleConstant> T_DoubleConstant
%token <boolConstant> T_BoolConstant


%left T_SingleEqual
%left T_Or
%left T_And
%nonassoc '&' '^' '|'
%nonassoc T_Equal T_NotEqual
%nonassoc '<' '>' T_LessEqual T_GreaterEqual
%left T_LeftShift T_RightShift
%left T_Add T_Sub
%left T_Mul T_Div T_Mod
%left T_Incr T_Decr
%right NEG '!' '~'
%nonassoc '.' T_Slb
%nonassoc NOELSE
%nonassoc T_Else
%nonassoc EMPTYCASE
%nonassoc EMPTYDEFAULT
%nonassoc NONEMPTYCASE
%nonassoc NONEMPTYDEFAULT

%type <declList>           DeclList FieldList PrototypeList
%type <decl>               Decl
%type <type>               Type
%type <varDecl>            VarDecl Variable
%type <classDecl>          ClassDecl
%type <interfaceDecl>      InterfaceDecl
%type <fnDecl>             FnDecl Prototype FnDef
%type <namedType>          ClassExtends NamedType
%type <implementsTypeList> ImplementsTypeList ClassImplements
%type <varDeclList>        FormalsList VarDeclList Formals
%type <stmtBlock>          StmtBlock
%type <stmtList>           StmtList
%type <stmt>               Stmt
%type <ifStmt>             IfStmt
%type <expr>               Expr  LValue Constant OptExpr Call
%type <exprList>           ExprList Actuals
%type <caseStmt>           CaseStmt
%type <caseStmtList>       CaseStmtList
%type <defaultStmt>        DefaultStmt
%%

Program:
  DeclList {  
    Program *program = new Program($1);
  //  program->Print(0);
    fprintf(yyout,"Program Encountered\n");
  }
;

DeclList:
  DeclList Decl            { ($$ = $1)->Append($2);  fprintf(yyout, "DeclList\n"); }
| Decl                     { ($$ = new List<Decl*>)->Append($1);  }
;

Decl:
ClassDecl                { $$ = $1;  fprintf(yyout,"Class Decl\n"); }
| VarDecl                { $$ = $1;  fprintf(yyout,"Var Decl\n"); }
| InterfaceDecl            { $$ = $1;  fprintf(yyout,"intf decl\n");}
| FnDecl                   {  $$ = $1; fprintf(yyout,"Fn Decl\n");}
;

VarDecl:
  Variable T_Semicolon   { $$ = $1; fprintf(yyout,"VarDecl\n"); }
 | Variable T_Slb T_IntConstant T_Srb T_Semicolon   { $$ = $1; fprintf(yyout,"VarDecl with size\n"); }
;

Variable:
  Type T_Identifier { 
    Identifier *i = new Identifier(@2, $2) ;
    $$ = new VarDecl(i, $1);
   fprintf(yyout,"Variable\n "); }
;

Type:
  T_Void                   { $$ = Type::voidType; fprintf(yyout,"void");  }
| T_Bool                   { $$ = Type::boolType; fprintf(yyout,"bool");  }
| T_Int                    { $$ = Type::intType; fprintf(yyout,"int\n");  }
| T_Double                 { $$ = Type::doubleType; fprintf(yyout,"double");  }
| T_String                 { $$ = Type::stringType;fprintf(yyout,"string");  }
;

NamedType:
  T_Identifier { 
   Identifier *i = new Identifier(@1, $1);
    $$ = new NamedType(i);
  fprintf(yyout,"NamedType");  }
;

ClassDecl:
  T_Class T_Identifier ClassExtends ClassImplements TCLB FieldList TCRB {
    Identifier *i = new Identifier(@2, $2);
    $$ = new ClassDecl(i, $3, $4, $6);fprintf(yyout,"classDecl");
  }
| T_Class T_Identifier ClassExtends ClassImplements TCLB TCRB {
    Identifier *i = new Identifier(@2, $2);
    $$ = new ClassDecl(i, $3, $4, new List<Decl*>);fprintf(yyout,"classDecl");
  }
;

ClassExtends:	 
	  T_Extends T_Identifier   {  
    Identifier *i = new Identifier(@2, $2);
    $$ = new NamedType(i);
    fprintf(yyout,"T_Extends\n");   }
	  | /* empty */              {fprintf(yyout,"NoExtends\n"); $$ = NULL;  }
;

ClassImplements
: T_Implements ImplementsTypeList {   $$ = $2; fprintf(yyout,"T_Implements");   }
| /* empty */              { fprintf(yyout,"NoImpl\n"); $$ = new List<NamedType*>; }
;

ImplementsTypeList:
  ImplementsTypeList ',' T_Identifier {
    Identifier *i = new Identifier(@3, $3);
    NamedType *t = new NamedType(i);
    ($$ = $1)->Append(t);fprintf(yyout,"ImplementsTypeList");
  }
| T_Identifier {
    Identifier *i = new Identifier(@1, $1);
    NamedType *t = new NamedType(i);
    ($$ = new List<NamedType*>)->Append(t); fprintf(yyout,"T_Identifier");
  }
;

InterfaceDecl:
  T_Interface T_Identifier '{' PrototypeList '}' {    Identifier *i = new Identifier(@2, $2);
    $$ = new InterfaceDecl(i, $4);fprintf(yyout,"T_Interface");   }
| T_Interface T_Identifier '{' '}' {    Identifier *i = new Identifier(@2, $2);
    $$ = new InterfaceDecl(i, new List<Decl*>); fprintf(yyout,"T_Interface");    }
;

FnDecl:
  FnDef StmtBlock {     FnDecl *f = $1;
    f->SetFunctionBody($2); printf("T_FnDef");    }
;

FieldList:
  FieldList VarDecl        { ($$ = $1)->Append($2); }
| FieldList FnDecl         { ($$ = $1)->Append($2); }
| FieldList Stmt           {  }
| VarDecl                  { ($$ = new List<Decl*>)->Append($1);  }
| FnDecl                   { ($$ = new List<Decl*>)->Append($1); }
| Stmt                   {   }
;

Formals:
  FormalsList              { $$ = $1;fprintf(yyout,"FormalsList");   }
| /* empty */              { $$ = new List<VarDecl*>; }
;

FormalsList:
  Variable                 { ($$ = new List<VarDecl*>)->Append($1); fprintf(yyout,"FormalsList Variable\n");  }
| FormalsList ',' Variable {  ($$ = $1)->Append($3);  fprintf(yyout,"FormalsList Variable , variable\n");    }
;

Prototype:
  FnDef ';'                {$$ = $1;  fprintf(yyout,"FnDef ;\n");}
;

FnDef:
Type T_Identifier '(' Formals ')' {  Identifier *i = new Identifier(@2, $2);
    $$ = new FnDecl(i, $1, $4); fprintf(yyout,"function\n");  }

;

PrototypeList:
  PrototypeList Prototype {  ($$ = $1)->Append($2); fprintf(yyout,"PrototypeList Prototype");   }
| Prototype                { ($$ = new List<Decl*>)->Append($1); fprintf(yyout,"Prototype");  }
;

StmtBlock:
  TCLB VarDeclList StmtList TCRB { $$ = new StmtBlock($2, $3);fprintf(yyout,"VarDeclList StmtList");   }
| TCLB VarDeclList TCRB          {$$ = new StmtBlock($2, new List<Stmt*>); fprintf(yyout,"VarDeclList");  }
| TCLB StmtList TCRB             {$$ = new StmtBlock(new List<VarDecl*>, $2);fprintf(yyout,"StmtList");  }
| TCLB TCRB 			 {  $$ = new StmtBlock(new List<VarDecl*>,
    new List<Stmt*>);fprintf(yyout,"{}");   }
;

StmtList:
  StmtList Stmt            { ($$ = $1)->Append($2);fprintf(yyout,"StmtList Stmt");  }
| Stmt                     { ($$ = new List<Stmt*>)->Append($1);fprintf(yyout,"Stmt"); }
;

VarDeclList:
  VarDeclList VarDecl      { ($$ = $1)->Append($2);   fprintf(yyout,"VarDeclList VarDecl"); }
| VarDecl                  { ($$ = new List<VarDecl*>)->Append($1); fprintf(yyout,"VarDecl"); }
;

Stmt:
  OptExpr T_Semicolon       { $$ = $1;    }
| T_While '(' Expr ')' Stmt {  $$ = new WhileStmt($3, $5); fprintf(yyout,"T_While ;\n");   }
| T_Return ';'             {  $$ = new ReturnStmt(@1, new EmptyExpr); fprintf(yyout,"T_While ;\n"); }
| T_Return Expr ';'        { $$ = new ReturnStmt(@2, $2);fprintf(yyout,"T_Return ;\n");  }
| T_Break ';'              { $$ = new BreakStmt(@1);fprintf(yyout,"T_Break ;\n");  }
| T_Print '(' ExprList ')' ';' {  $$ = new PrintStmt($3); fprintf(yyout,"T_Print ;\n");  }
| T_For '(' OptExpr ';' Expr ';' OptExpr ')' Stmt {    $$ = new ForStmt($3, $5, $7, $9); fprintf(yyout,"T_For ;\n");   }
| IfStmt                   {$$ = $1;fprintf(yyout,"T_IfStmt ;\n");  }
| T_Switch '(' Expr ')' '{' CaseStmtList DefaultStmt '}' {  $$ = new SwitchStmt($3, $6, $7);fprintf(yyout,"T_Switch ;\n");   }
| StmtBlock                { $$ = $1;fprintf(yyout,"T_StmtBlock ;\n");  }
;

OptExpr:
  Expr                     { $$ = $1;  fprintf(yyout,"OptExpr\n");  }
| /* empty */              {  $$ = new EmptyExpr(); fprintf(yyout,"OptExpr\n");  }
;


CaseStmtList:
  CaseStmtList CaseStmt    { ($$ = $1)->Append($2); fprintf(yyout,"CaseStmtList\n");  }
| CaseStmt                 { ($$ = new List<CaseStmt*>)->Append($1);fprintf(yyout,"CaseStmtList\n");  }
;

CaseStmt:
  T_Case 	 ':' StmtList %prec NONEMPTYCASE {  fprintf(yyout,"T_Case T_IntConstant\n");  }
| T_Case T_IntConstant ':' %prec EMPTYCASE { fprintf(yyout,"T_IntConstant\n");  }
;

DefaultStmt:
  T_Default ':' StmtList %prec NONEMPTYDEFAULT {  $$ = new DefaultStmt($3);fprintf(yyout,"T_Default\n");  }
| T_Default ':' %prec EMPTYDEFAULT {$$ = new DefaultStmt(new List<Stmt*>); fprintf(yyout,"T_Default\n");  }
;

IfStmt:
  T_If '(' Expr ')' Stmt %prec NOELSE {    $$ = new IfStmt($3, $5, NULL);fprintf(yyout," T_If\n");  }
| T_If '(' Expr ')' Stmt T_Else Stmt {   $$ = new IfStmt($3, $5, $7); fprintf(yyout,"T_If\n");  }
;

ExprList:
  ExprList ',' Expr        { ($$ = $1)->Append($3); fprintf(yyout,"ExprList\n"); }
| Expr                     { ($$ = new List<Expr*>)->Append($1); fprintf(yyout,"ExprList\n"); }
;

Expr:
  LValue                   { $$ = $1;fprintf(yyout,"LValue\n"); }
| Call                     { $$ = $1;fprintf(yyout,"Call\n"); }
| Constant                 { $$ = $1;fprintf(yyout,"Constant\n"); }
| Expr T_Or Expr	   { 
    Operator *op = new Operator(@2, "||");
    $$ = new LogicalExpr($1, op, $3);
 fprintf(yyout,"||\n");  }
| Expr T_And Expr 	   { 
 Operator *op = new Operator(@2, "&&");
    $$ = new LogicalExpr($1, op, $3);
fprintf(yyout,"&&\n");  }
| Expr '<' Expr		   { 
   Operator *op = new Operator(@2, "<");
    $$ = new RelationalExpr($1, op, $3);
fprintf(yyout,"<\n");  }
| Expr '>' Expr		   { 
   Operator *op = new Operator(@2, ">");
    $$ = new RelationalExpr($1, op, $3);
fprintf(yyout,">\n");  }
| Expr T_GreaterEqual Expr {
 Operator *op = new Operator(@2, ">=");
    $$ = new RelationalExpr($1, op, $3);
 fprintf(yyout,">=\n");  }
| Expr T_LessEqual Expr    {
Operator *op = new Operator(@2, "<=");
    $$ = new RelationalExpr($1, op, $3);
 fprintf(yyout,"<=\n");  }
| Expr T_Equal Expr        {
 Operator *op = new Operator(@2, "==");
    $$ = new EqualityExpr($1, op, $3);
 fprintf(yyout,"=\n");  }
| Expr T_NotEqual Expr     { 
 Operator *op = new Operator(@2, "!=");
    $$ = new EqualityExpr($1, op, $3);
fprintf(yyout,"!=\n");  }
| Expr T_Add Expr          { 
   Operator *op = new Operator(@2, "+");
     $$ = new ArithmeticExpr($1, op, $3);
fprintf(yyout,"+\n");  }
| Expr T_Sub Expr 	   {
  Operator *op = new Operator(@2, "-");
    $$ = new ArithmeticExpr($1, op, $3);
 fprintf(yyout,"-\n");  }
| Expr T_Mul Expr 	   {
   Operator *op = new Operator(@2, "*");
    $$ = new ArithmeticExpr($1, op, $3);
 fprintf(yyout,"*\n");  
  }
| Expr T_Div Expr	   {
   Operator *op = new Operator(@2, "/");
    $$ = new ArithmeticExpr($1, op, $3);
 fprintf(yyout,"/\n");  }
| Expr T_Mod Expr	   { 
Operator *op = new Operator(@2, "%");
    $$ = new ArithmeticExpr($1, op, $3);
fprintf(yyout,"Mod\n");  }
| Expr '^' Expr 	   {
   Operator *op = new Operator(@2, "^");
    $$ = new BitwiseExpr($1, op, $3);
 fprintf(yyout,"^\n");  }
| Expr '|' Expr		   {
 Operator *op = new Operator(@2, "|");
    $$ = new BitwiseExpr($1, op, $3);
 fprintf(yyout,"|\n");  }
| Expr '&' Expr		   { 
  Operator *op = new Operator(@2, "&");
    $$ = new BitwiseExpr($1, op, $3);
fprintf(yyout,"&\n");  }
| Expr T_LeftShift Expr    { 
  Operator *op = new Operator(@2, "<<");
    $$ = new BitwiseExpr($1, op, $3);
fprintf(yyout,"LS\n");  }
| Expr T_RightShift Expr   { 
  Operator *op = new Operator(@2, ">>");
    $$ = new BitwiseExpr($1, op, $3);
fprintf(yyout,"RSr\n");  }
| '-' Expr %prec NEG       { 
   Operator *op = new Operator(@1, "-");
    $$ = new ArithmeticExpr(op, $2);
fprintf(yyout,"-\n");  }
| '!' Expr 		   { 
  Operator *op = new Operator(@1, "!");
    $$ = new LogicalExpr(op, $2);
fprintf(yyout,"!\n");  }
| '~' Expr		   { 
   Operator *op = new Operator(@1, "~");
    $$ = new BitwiseExpr(op, $2);
fprintf(yyout,"~\n");  }
| Expr T_Incr		   { 
Operator *op = new Operator(@2, "++");
    $$ = new PostfixExpr($1, op);
    fprintf(yyout,"++\n");  }
| Expr T_Decr{ 
    Operator *op = new Operator(@2, "--");
    $$ = new PostfixExpr($1, op);
    fprintf(yyout,"--\n");  }

| '(' Expr ')'             {  $$ = $2;  fprintf(yyout,"Op\n");  }
| '"' Expr '"'             {  $$ = $2;  fprintf(yyout,"FExpr\n");  }
| T_This                   {   $$ = new This(@1);fprintf(yyout,"thisExpr\n");  }
| T_ReadInteger '(' ')'    {  $$ = new ReadIntegerExpr(Join(@1, @3));fprintf(yyout,"readintExpr\n");  }
| T_ReadLine '(' ')'       { $$ = new ReadLineExpr(Join(@1, @3));fprintf(yyout,"readlineExpr\n");  }
| T_New NamedType          { $$ = new NewExpr(Join(@1, @2), $2);fprintf(yyout,"newarrayExpr\n");  }
| T_NewArray '(' Expr ',' Type ')' { $$ = new NewArrayExpr(Join(@1, @6), $3, $5);fprintf(yyout,"newarryExpr\n");  }
| LValue T_SingleEqual Expr { fprintf(yyout,"=Expr\n");  }

;

Call:
  T_Identifier T_Pl Actuals T_Pr  { fprintf(yyout,"Call");  }
| T_Call T_Pl Expr callout_args T_Pr  { fprintf(yyout,"CallOut");  }
| Expr '.' T_Identifier '(' Actuals ')' {fprintf(yyout,"Call");  }
;

callout_args:
 | callout_args T_Comma callout_args_sub { fprintf(yyout,"CallOut args");  }
;

callout_args_sub:
 | Expr		{ fprintf(yyout,"Callout argssub");  }
;

Actuals:
  ExprList             {fprintf(yyout,"ExprList\n");  }
| /* empty */          {}
;

LValue:
  T_Identifier          {fprintf(yyout,"IExpr");  }
| Expr '.' T_Identifier {fprintf(yyout,"ExprT_Comma");  }
| Expr T_Slb Expr T_Srb     {fprintf(yyout,"SExpr");  }

;

Constant:
  T_IntConstant            {fprintf(yyout,"T_IntConstant   ");  }
| T_DoubleConstant         {fprintf(yyout,"T_DoubleConstant ");  }
| T_BoolConstant           {fprintf(yyout,"T_BoolConstant");  }
| T_StringConstant         {fprintf(yyout,"T_StringConstant");  }
| T_Null                  {fprintf(yyout,"T_Null ");  }
;
%%

int main(int argc,char* argv[]) {
	
	// open a file handle to a particular file:
	FILE *myfile = fopen(argv[1], "r");
	yyout = fopen("bison_output.txt","w+");
	// make sure it's valid:
	if (!myfile) {
		cout << "I can't open file!" << endl;
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	fclose(yyout);
}

void yyerror(const char *s) {
	cout << "parse error on line " << "!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

