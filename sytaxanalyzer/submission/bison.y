%{
#include <cstdio>
#include <iostream>
using namespace std;


extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;
extern int line_num;
 
void yyerror(const char *s);
%}



%union {
  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[32];
	
}

%token T_Void T_Bool T_Int T_Double T_String T_Class
%token T_LessEqual T_GreaterEqual T_Equal T_NotEqual T_Dims T_SingleEqual
%token T_LeftShift T_RightShift
%token T_And T_Or T_Null T_Extends T_This T_Interface T_Implements
%token T_While T_For T_If T_Else T_Return T_Break
%token T_New T_NewArray T_Print T_ReadInteger T_ReadLine
%token T_Switch T_Case T_Default T_Incr T_Decr

%token CLASS PROGRAM CALLOUT  VOID TRUE FALSE DECIMAL T_Semicolon 
%token  END ENDL
%token  TCASSIGNMENT TCEQ TCNE TCLT TCLE TCGT TCGE 
%token  T_Pl T_Pr TCLB TCRB T_Srb T_Slb TCOMMA TCDOT 
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

%start Program
%%

Program:
  DeclList { fprintf(yyout, "PROGRAM ENCOUNTERED" ); }
;

DeclList:
  DeclList Decl            { fprintf(yyout, "DeclList"); }
| Decl                     {  }
;

Decl:
ClassDecl                { fprintf(yyout,"Class Decl\n"); }
| VarDecl                { fprintf(yyout,"Var Decl\n"); }
| InterfaceDecl            { fprintf(yyout,"intf decl\n");}
| FnDecl                   { fprintf(yyout,"Fn Decl\n");}
;

VarDecl:
  Variable T_Semicolon   { fprintf(yyout,"VarDecl\n"); }
 | Variable T_Slb T_IntConstant T_Srb T_Semicolon   { fprintf(yyout,"VarDecl with size\n"); }
;

Variable:
  Type T_Identifier {    fprintf(yyout,"Variable\n "); }
;

Type:
  T_Void                   {  fprintf(yyout,"void");  }
| T_Bool                   {  fprintf(yyout,"bool");  }
| T_Int                    {  fprintf(yyout,"int\n");  }
| T_Double                 {  fprintf(yyout,"double");  }
| T_String                 { fprintf(yyout,"string");  }
;

NamedType:
  T_Identifier {    printf("NamedType");  }
;

ClassDecl:  T_Class T_Identifier ClassExtends ClassImplements TCLB FieldList TCRB { fprintf(yyout,"classDecl");    }
	 | T_Class T_Identifier ClassExtends ClassImplements TCLB TCRB { fprintf(yyout,"classDecl");}
;

ClassExtends:	 
	  T_Extends T_Identifier   { fprintf(yyout,"T_Extends\n");   }
	  | /* empty */              { fprintf(yyout,"Empty\n");  }
;

ClassImplements
: T_Implements ImplementsTypeList {   printf("T_Implements");   }
| /* empty */              { }
;

ImplementsTypeList:
  ImplementsTypeList ',' T_Identifier { printf("ImplementsTypeList");  }
| T_Identifier { printf("T_Identifier"); }
;

InterfaceDecl:
  T_Interface T_Identifier '{' PrototypeList '}' {  printf("T_Interface");   }
| T_Interface T_Identifier '{' '}' {  printf("T_Interface");    }
;

FnDecl:
  FnDef StmtBlock {  printf("T_FnDef");    }
;

FieldList:
  FieldList VarDecl        {  fprintf(yyout,"Var_FieldList\n");  }
| FieldList FnDecl         {  fprintf(yyout,"Fn_FieldList\n"); }
| FieldList Stmt           {  fprintf(yyout,"Statement_FieldList\n"); }
| VarDecl                  {  fprintf(yyout,"T_VarDecl\n");  }
| FnDecl                   {  fprintf(yyout,"T_FnDecl\n");  }
| Stmt                   {  fprintf(yyout,"T_StmntDecl\n");  }
;

Formals:
  FormalsList              { printf("FormalsList");   }
| /* empty */              { }
;

FormalsList:
  Variable                 {  printf("FormalsList Variable");  }
| FormalsList ',' Variable { printf("FormalsList Variable , variable");    }
;

Prototype:
  FnDef ';'                { printf("FnDef ;");}
;

FnDef:
  Type T_Identifier '(' Formals ')' {  printf("type T_Identifier ;");  }
;

PrototypeList:
  PrototypeList Prototype { printf("PrototypeList Prototype");   }
| Prototype                { printf("Prototype");  }
;

StmtBlock:
  TCLB VarDeclList StmtList TCRB {printf("VarDeclList StmtList ");   }
| TCLB VarDeclList TCRB      {printf("VarDeclList  ");  }
| TCLB StmtList TCRB         { printf(" StmtList ");  }
| TCLB TCRB 		{printf(" {} ");   }
;

StmtList:
  StmtList Stmt            { printf("  StmtList Stmt   ");  }
| Stmt                     { printf("   Stmt   "); }
;

VarDeclList:
  VarDeclList VarDecl      {  printf("    VarDeclList VarDecl     "); }
| VarDecl                  {  printf("     VarDecl     "); }
;

Stmt:
  OptExpr T_Semicolon       {   printf("OptExpr ;");   }
| T_While '(' Expr ')' Stmt { printf("T_While ;");   }
| T_Return ';'             {printf("T_While ;"); }
| T_Return Expr ';'        { printf("T_Return ;");  }
| T_Break ';'              {printf("T_Break ;");  }
| T_Print '(' ExprList ')' ';' { printf("T_Print ;");  }
| T_For '(' OptExpr ';' Expr ';' OptExpr ')' Stmt { printf("T_For ;");   }
| IfStmt                   {printf("T_IfStmt ;");  }
| T_Switch '(' Expr ')' '{' CaseStmtList DefaultStmt '}' {printf("T_Switch ;");   }
| StmtBlock                {printf("T_StmtBlock ;");  }
;

OptExpr:
  Expr                     {printf("OptExpr");  }
| /* empty */              { printf("OptExpr");  }
;


CaseStmtList:
  CaseStmtList CaseStmt    { printf("CaseStmtList");  }
| CaseStmt                 { printf("CaseStmtList");  }
;

CaseStmt:
  T_Case T_IntConstant ':' StmtList %prec NONEMPTYCASE { printf("T_Case T_IntConstant");  }
| T_Case T_IntConstant ':' %prec EMPTYCASE {  printf(" T_IntConstant");  }
;

DefaultStmt:
  T_Default ':' StmtList %prec NONEMPTYDEFAULT {printf("T_Default");  }
| T_Default ':' %prec EMPTYDEFAULT { printf("T_Default");  }
;

IfStmt:
  T_If '(' Expr ')' Stmt %prec NOELSE { printf(" T_If");  }
| T_If '(' Expr ')' Stmt T_Else Stmt { printf(" T_If");  }
;

ExprList:
  ExprList ',' Expr        { printf("ExprList"); }
| Expr                     { printf("ExprList"); }
;

Expr:
  LValue                   { fprintf(yyout,"LValue Expr\n"); }
| Call                     { fprintf(yyout,"CallExpr\n"); }
| Constant                 {printf("Expr"); }
| Expr T_Or Expr	   {    printf("Expr");  }
| Expr T_And Expr { printf("Expr");  }
| Expr '<' Expr {printf("Expr");  }
| Expr '>' Expr {printf("Expr");  }
| Expr T_GreaterEqual Expr {printf("Expr");  }
| Expr T_LessEqual Expr {printf("Expr");  }
| Expr T_Equal Expr {printf("Expr");  }
| Expr T_NotEqual Expr {printf("Expr");  }
| Expr T_Add Expr {printf("Add Expr");  }
| Expr T_Sub Expr {printf("Expr");  }
| Expr T_Mul Expr {printf("Expr");  }
| Expr T_Div Expr {printf("Expr");  }
| Expr T_Mod Expr {printf("Expr");  }
| Expr '^' Expr {printf("Expr");  }
| Expr '|' Expr {printf("Expr");  }
| Expr '&' Expr {printf("Expr");  }
| Expr T_LeftShift Expr {printf("Expr");  }
| Expr T_RightShift Expr {printf("Expr");  }
| '-' Expr %prec NEG {printf(" -");  }
| '!' Expr {printf("Expr");  }
| '~' Expr {printf("Expr");  }
| Expr T_Incr {printf("Expr");  }
| Expr T_Decr{printf("Expr");  }
| '(' Expr ')'             {printf("Expr");  }
| T_This                   {printf("Expr");  }
| T_ReadInteger '(' ')'    {printf("Expr");  }
| T_ReadLine '(' ')'       {printf("Expr");  }
| T_New NamedType          {printf("Expr");  }
| T_NewArray '(' Expr ',' Type ')' {printf("Expr");  }
| LValue T_SingleEqual Expr {fprintf(yyout,"Equal Expr\n");  }
;

Call:
  T_Identifier T_Pl Actuals T_Pr { fprintf(yyout,"Call");  }
| Expr '.' T_Identifier '(' Actuals ')' {fprintf(yyout,"Call");  }
;

Actuals:
  ExprList             {printf("ExprList");  }
| /* empty */          {printf("ExprList");  }
;

LValue:
  T_Identifier          {printf("IExpr");  }
| Expr '.' T_Identifier {printf("Expr");  }
| Expr T_Slb Expr T_Srb     {printf("SExpr");  }

;

Constant:
  T_IntConstant            {printf("T_IntConstant   ");  }
| T_DoubleConstant         {printf("T_DoubleConstant ");  }
| T_BoolConstant           {printf("T_BoolConstant");  }
| T_StringConstant         {printf("T_StringConstant");  }
| T_Null                  {printf("T_Null ");  }
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
	cout << "parse error on line " << line_num << "!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

