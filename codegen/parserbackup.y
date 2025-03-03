%{
#include "node.h"
RootBlock *programBlock;

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

%start Program

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


%%

Program:
  DeclList { programBlock = $1;  }
;

DeclList:
  DeclList Decl            { fprintf(yyout, "DeclList\n"); }
| Decl                     {   }
;

Decl:
ClassDecl                {  fprintf(yyout,"Class Decl\n"); }
| VarDecl                {   fprintf(yyout,"Var Decl\n"); }
| InterfaceDecl            {   fprintf(yyout,"intf decl\n");}
| FnDecl                   {   fprintf(yyout,"Fn Decl\n");}
;

VarDecl:
  Variable T_Semicolon   { fprintf(yyout,"VarDecl\n"); }
 | Variable T_Slb T_IntConstant T_Srb T_Semicolon   {  fprintf(yyout,"VarDecl with size\n"); }
;

Variable:
  Type T_Identifier {fprintf(yyout,"Variable\n "); }
;

Type:
  T_Void                   {  fprintf(yyout,"void");  }
| T_Bool                   {  fprintf(yyout,"bool");  }
| T_Int                    {  fprintf(yyout,"int\n");  }
| T_Double                 {  fprintf(yyout,"double");  }
| T_String                 { fprintf(yyout,"string");  }
;

NamedType:
  T_Identifier {    fprintf(yyout,"NamedType");  }
;

ClassDecl:  T_Class T_Identifier ClassExtends ClassImplements TCLB FieldList TCRB {fprintf(yyout,"classDecl");	  }
	 | T_Class T_Identifier ClassExtends ClassImplements TCLB TCRB {  fprintf(yyout,"classDecl");}
;

ClassExtends:
	  T_Extends T_Identifier   { fprintf(yyout,"T_Extends\n");   }
	  | /* empty */              { fprintf(yyout,"Empty\n");  }
;

ClassImplements
: T_Implements ImplementsTypeList {   fprintf(yyout,"T_Implements");   }
| /* empty */              { }
;

ImplementsTypeList:
  ImplementsTypeList ',' T_Identifier { fprintf(yyout,"ImplementsTypeList");  }
| T_Identifier { fprintf(yyout,"T_Identifier"); }
;

InterfaceDecl:
  T_Interface T_Identifier '{' PrototypeList '}' {  fprintf(yyout,"T_Interface");   }
| T_Interface T_Identifier '{' '}' {  fprintf(yyout,"T_Interface");    }
;

FnDecl:
  FnDef StmtBlock {  printf("T_FnDef");    }
;

FieldList:
  FieldList VarDecl        {  }
| FieldList FnDecl         {  }
| FieldList Stmt           {  }
| VarDecl                  {   }
| FnDecl                   {  }
| Stmt                   {   }
;

Formals:
  FormalsList              { fprintf(yyout,"FormalsList");   }
| /* empty */              { }
;

FormalsList:
  Variable                 {  fprintf(yyout,"FormalsList Variable\n");  }
| FormalsList ',' Variable {  fprintf(yyout,"FormalsList Variable , variable\n");    }
;

Prototype:
  FnDef ';'                { fprintf(yyout,"FnDef ;\n");}
;

FnDef:
Type T_Identifier '(' Formals ')' {  fprintf(yyout,"function\n");  }

;

PrototypeList:
  PrototypeList Prototype { fprintf(yyout,"PrototypeList Prototype");   }
| Prototype                { fprintf(yyout,"Prototype");  }
;

StmtBlock:
  TCLB VarDeclList StmtList TCRB {fprintf(yyout,"VarDeclList StmtList");   }
| TCLB VarDeclList TCRB          {fprintf(yyout,"VarDeclList");  }
| TCLB StmtList TCRB             {fprintf(yyout,"StmtList");  }
| TCLB TCRB 			 {fprintf(yyout,"{}");   }
;

StmtList:
  StmtList Stmt            { fprintf(yyout,"StmtList Stmt");  }
| Stmt                     { fprintf(yyout,"Stmt"); }
;

VarDeclList:
  VarDeclList VarDecl      {  fprintf(yyout,"VarDeclList VarDecl"); }
| VarDecl                  {  fprintf(yyout,"VarDecl"); }
;

Stmt:
  OptExpr T_Semicolon       {     }
| T_While '(' Expr ')' Stmt { fprintf(yyout,"T_While ;\n");   }
| T_Return ';'             {fprintf(yyout,"T_While ;\n"); }
| T_Return Expr ';'        { fprintf(yyout,"T_Return ;\n");  }
| T_Break ';'              {fprintf(yyout,"T_Break ;\n");  }
| T_Print '(' ExprList ')' ';' { fprintf(yyout,"T_Print ;\n");  }
| T_For '(' OptExpr ';' Expr ';' OptExpr ')' Stmt { fprintf(yyout,"T_For ;\n");   }
| IfStmt                   {fprintf(yyout,"T_IfStmt ;\n");  }
| T_Switch '(' Expr ')' '{' CaseStmtList DefaultStmt '}' {fprintf(yyout,"T_Switch ;\n");   }
| StmtBlock                {fprintf(yyout,"T_StmtBlock ;\n");  }
;

OptExpr:
  Expr                     { fprintf(yyout,"OptExpr\n");  }
| /* empty */              { fprintf(yyout,"OptExpr\n");  }
;


CaseStmtList:
  CaseStmtList CaseStmt    { fprintf(yyout,"CaseStmtList\n");  }
| CaseStmt                 { fprintf(yyout,"CaseStmtList\n");  }
;

CaseStmt:
  T_Case 	 ':' StmtList %prec NONEMPTYCASE { fprintf(yyout,"T_Case T_IntConstant\n");  }
| T_Case T_IntConstant ':' %prec EMPTYCASE {  fprintf(yyout,"T_IntConstant\n");  }
;

DefaultStmt:
  T_Default ':' StmtList %prec NONEMPTYDEFAULT {fprintf(yyout,"T_Default\n");  }
| T_Default ':' %prec EMPTYDEFAULT { fprintf(yyout,"T_Default\n");  }
;

IfStmt:
  T_If '(' Expr ')' Stmt %prec NOELSE { fprintf(yyout," T_If\n");  }
| T_If '(' Expr ')' Stmt T_Else Stmt { fprintf(yyout,"T_If\n");  }
;

ExprList:
  ExprList ',' Expr        { fprintf(yyout,"ExprList\n"); }
| Expr                     { fprintf(yyout,"ExprList\n"); }
;

Expr:
  LValue                   { fprintf(yyout,"LValue\n"); }
| Call                     { fprintf(yyout,"Call\n"); }
| Constant                 { fprintf(yyout,"Constant\n"); }
| Expr T_Or Expr	   { fprintf(yyout,"||\n");  }
| Expr T_And Expr 	   { fprintf(yyout,"&&\n");  }
| Expr '<' Expr		   { fprintf(yyout,"<\n");  }
| Expr '>' Expr		   { fprintf(yyout,">\n");  }
| Expr T_GreaterEqual Expr { fprintf(yyout,">=\n");  }
| Expr T_LessEqual Expr    { fprintf(yyout,"<=\n");  }
| Expr T_Equal Expr        { fprintf(yyout,"=\n");  }
| Expr T_NotEqual Expr     { fprintf(yyout,"!=\n");  }
| Expr T_Add Expr          { fprintf(yyout,"+\n");  }
| Expr T_Sub Expr 	   { fprintf(yyout,"-\n");  }
| Expr T_Mul Expr 	   { fprintf(yyout,"*\n");  }
| Expr T_Div Expr	   { fprintf(yyout,"/\n");  }
| Expr T_Mod Expr	   { fprintf(yyout,"Mod\n");  }
| Expr '^' Expr 	   { fprintf(yyout,"^\n");  }
| Expr '|' Expr		   { fprintf(yyout,"|\n");  }
| Expr '&' Expr		   { fprintf(yyout,"&\n");  }
| Expr T_LeftShift Expr    { fprintf(yyout,"LS\n");  }
| Expr T_RightShift Expr   { fprintf(yyout,"RSr\n");  }
| '-' Expr %prec NEG       { fprintf(yyout,"-\n");  }
| '!' Expr 		   { fprintf(yyout,"!\n");  }
| '~' Expr		   { fprintf(yyout,"~\n");  }
| Expr T_Incr		   { fprintf(yyout,"++\n");  }
| Expr T_Decr		   { fprintf(yyout,"--\n");  }
| '(' Expr ')'             { fprintf(yyout,"Op\n");  }
| '"' Expr '"'             { fprintf(yyout,"FExpr\n");  }
| T_This                   { fprintf(yyout,"thisExpr\n");  }
| T_ReadInteger '(' ')'    { fprintf(yyout,"readintExpr\n");  }
| T_ReadLine '(' ')'       { fprintf(yyout,"readlineExpr\n");  }
| T_New NamedType          { fprintf(yyout,"newarrayExpr\n");  }
| T_NewArray '(' Expr ',' Type ')' { fprintf(yyout,"newarryExpr\n");  }
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
| /* empty */
;

LValue:
  T_Identifier          {fprintf(yyout,"IExpr");  }
| Expr '.' T_Identifier {fprintf(yyout,"Expr");  }
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
