%{
#include "node.h"
#include <cstdio>
using namespace std;

pgm *root;

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
  list<Decl*>      *declList;
  Decl             *decl;
  ClassDecl        *classDecl;  
  VarDecl          *varDecl ;
  Type             *type;
  FnDecl           *fnDecl;
  NamedType        *namedType;
  pgm	 	   *prog;
  StmtBlock        *stmtBlock;
  list<Stmt*>      *stmtList;
  list<VarDecl*>   *varDeclList;
  Expr             *expr;
  Stmt             *stmt;
  list<Expr*>      *exprList;
}

%token T_Void T_Bool T_Int T_Double T_String T_Class
%token T_LessEqual T_GreaterEqual T_Equal T_NotEqual T_Dims T_SingleEqual
%token T_LeftShift T_RightShift
%token T_And T_Or T_Null 
%token T_While T_For T_If T_Else T_Return T_Break
%token T_New T_NewArray T_Print 
%token T_Switch T_Case T_Default T_Incr T_Decr

%token CLASS T_Call  VOID TRUE FALSE DECIMAL T_Semicolon
%token  END ENDL
%token  TCASSIGNMENT TCEQ TCNE TCLT TCLE TCGT TCGE
%token  T_Pl T_Pr TCLB TCRB T_Srb T_Slb T_Comma TCDOT
%token  T_Add T_Sub T_Mul T_Div T_Mod

%token <stringConstant> T_StringConstant T_Identifier
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

%type <declList>           DeclList FieldList 
%type <classDecl>          ClassDecl
%type <varDecl>            VarDecl Variable
%type <decl>               Decl
%type <prog>		   Program
%type <type>               Type
%type <namedType>          NamedType
%type <fnDecl>             FnDecl  FnDef
%type <stmtBlock>          StmtBlock
%type <stmtList>           StmtList
%type <stmt>               Stmt
%type <varDeclList>        FormalsList VarDeclList Formals
%type <expr>               Expr  LValue Constant OptExpr Call
%type <exprList>           ExprList Actuals

%%
Program:
  DeclList {  $$ = new pgm($1);	root = $$;	       root->evaluate();    
 }
;

DeclList:
  DeclList Decl            { ($$ = $1)->push_back($2);}
| Decl                     { ($$ = new list<Decl*>)->push_back($1); }

;

Decl:
ClassDecl                {  fprintf(yyout,"Class Decl\n"); $$ = $1;}
| VarDecl                {   fprintf(yyout,"Var Decl\n"); $$ = $1; }
| FnDecl                   {   fprintf(yyout,"Fn Decl\n"); $$ = $1;}
;

VarDecl:
  Variable T_Semicolon   { fprintf(yyout,"VarDecl\n");  $$ = $1; }
 | Variable T_Slb T_IntConstant T_Srb T_Semicolon   {  fprintf(yyout,"VarDecl with size\n"); $$ = $1;}
;

Variable:
  Type T_Identifier {fprintf(yyout,"Variable\n ,, %s",$2);
	 Identifier *i = new Identifier($2) ;
         $$ = new VarDecl(i, $1);
 }
;

Type:
  T_Void                   {  fprintf(yyout,"void"); $$ = Type::voidType;   }
| T_Bool                   {  fprintf(yyout,"bool"); $$ = Type::boolType; }
| T_Int                    {  fprintf(yyout,"int\n"); $$ = Type::intType; }
| T_Double                 {  fprintf(yyout,"double"); $$ = Type::doubleType; }
| T_String                 { fprintf(yyout,"string"); $$ = Type::stringType;  }
;

NamedType:
  T_Identifier {    fprintf(yyout,"NamedType");  }
;

ClassDecl:  T_Class T_Identifier TCLB FieldList TCRB {fprintf(yyout,"classDecl");
	 Identifier *i = new Identifier($2);
         $$ = new ClassDecl(i, $4);
	  }
	 | T_Class T_Identifier  TCLB TCRB {  fprintf(yyout,"classDecl");
	   Identifier *i = new Identifier($2);
           $$ = new ClassDecl(i, new list<Decl*>);
}
;

FnDecl:
  FnDef StmtBlock {  printf("T_FnDef");
    FnDecl *f = $1;
    f->SetFunctionBody($2);
    }
;



FieldList:
  FieldList VarDecl        { ($$ = $1)->push_back($2); }
| FieldList FnDecl         { ($$ = $1)->push_back($2); }
| FieldList Stmt           { }
| VarDecl                  {  ($$ = new list<Decl*>)->push_back($1); }
| FnDecl                   { ($$ = new list<Decl*>)->push_back($1); }
| Stmt                   {  }
;

Formals:
  FormalsList              { fprintf(yyout,"FormalsList");$$ = $1;   }
| /* empty */              { $$ = new list<VarDecl*>; }
;

FormalsList:
  Variable                 {  fprintf(yyout,"FormalsList Variable\n");
			   ($$ = new list<VarDecl*>)->push_back($1); }
| FormalsList ',' Variable {  fprintf(yyout,"FormalsList Variable , variable\n");  ($$ = $1)->push_back($3);   }
;


FnDef:
Type T_Identifier '(' Formals ')' {  fprintf(yyout,"function\n");  
 	Identifier *i = new Identifier($2);
        $$ = new FnDecl(i, $1, $4);
}
;

StmtBlock:
  TCLB VarDeclList StmtList TCRB {fprintf(yyout,"VarDeclList StmtList");
	$$ = new StmtBlock($2, $3);}
| TCLB VarDeclList TCRB          {fprintf(yyout,"VarDeclList"); 
	$$ = new StmtBlock($2, new list<Stmt*>);  }
| TCLB StmtList TCRB             {fprintf(yyout,"StmtList");
	$$ = new StmtBlock(new list<VarDecl*>, $2); }
| TCLB TCRB 			 {fprintf(yyout,"{}"); 
 $$ = new StmtBlock(new list<VarDecl*>,new list<Stmt*>);  }
;

StmtList:
  StmtList Stmt            { fprintf(yyout,"StmtList Stmt");($$ = $1)->push_back($2); }
| Stmt                     { fprintf(yyout,"Stmt");($$ = new list<Stmt*>)->push_back($1); }
;

VarDeclList:
  VarDeclList VarDecl      {  fprintf(yyout,"VarDeclList VarDecl"); ($$ = $1)->push_back($2);}
| VarDecl                  {  fprintf(yyout,"VarDecl");($$ = new list<VarDecl*>)->push_back($1);  }
;

Stmt:
  OptExpr T_Semicolon       {  $$ = $1;    }
| T_While '(' Expr ')' Stmt { fprintf(yyout,"T_While ;\n");   }
| T_Return ';'             {fprintf(yyout,"T_While ;\n"); }
| T_Return Expr ';'        { fprintf(yyout,"T_Return ;\n");  }
| T_Break ';'              {fprintf(yyout,"T_Break ;\n");  }
| T_Print '(' ExprList ')' ';' { fprintf(yyout,"T_Print ;\n");  }
| T_For '(' OptExpr ';' Expr ';' OptExpr ')' Stmt { fprintf(yyout,"T_For ;\n");   }
| IfStmt                   {fprintf(yyout,"T_IfStmt ;\n");  }
| StmtBlock                {$$ = $1;fprintf(yyout,"T_StmtBlock ;\n");  }
;

OptExpr:
  Expr                     {$$ = $1; fprintf(yyout,"OptExpr\n");  }
| /* empty */              { $$ = new EmptyExpr();fprintf(yyout,"OptExpr\n");  }
;

IfStmt:
  T_If '(' Expr ')' Stmt %prec NOELSE { fprintf(yyout," T_If\n");  }
| T_If '(' Expr ')' Stmt T_Else Stmt { fprintf(yyout,"T_If\n");  }
;

ExprList:
  ExprList ',' Expr        { fprintf(yyout,"ExprList\n");($$ = $1)->push_back($3); }
| Expr                     { fprintf(yyout,"ExprList\n");($$ = new list<Expr*>)->push_back($1); }
;

Expr:
  LValue                   { fprintf(yyout,"LValue\n");$$ = $1;  }
| Call                     { fprintf(yyout,"Call\n");$$ = $1;  }
| Constant                 { fprintf(yyout,"Constant\n");$$ = $1;  }
| Expr T_Or Expr	   { fprintf(yyout,"||\n"); 
    Operator *op = new Operator("||");
    $$ = new LogicalExpr($1, op, $3);
 }
| Expr T_And Expr 	   { fprintf(yyout,"&&\n");
    Operator *op = new Operator("&&");
    $$ = new LogicalExpr($1, op, $3);
  }
| Expr '<' Expr		   { fprintf(yyout,"<\n");
  Operator *op = new Operator("<");
    $$ = new RelationalExpr($1, op, $3);
  }
| Expr '>' Expr		   { fprintf(yyout,">\n");  
  Operator *op = new Operator(">");
    $$ = new RelationalExpr($1, op, $3);
}
| Expr T_GreaterEqual Expr { fprintf(yyout,">=\n"); 
    Operator *op = new Operator(">=");
    $$ = new RelationalExpr($1, op, $3);
 }
| Expr T_LessEqual Expr    { fprintf(yyout,"<=\n");
   Operator *op = new Operator("<=");
    $$ = new RelationalExpr($1, op, $3);
  }
| Expr T_Equal Expr        { fprintf(yyout,"=\n");  }
| Expr T_NotEqual Expr     { fprintf(yyout,"!=\n");  }
| Expr T_Add Expr          { fprintf(yyout,"+\n"); 
     Operator *op = new Operator("+");
     $$ = new ArithmeticExpr($1, op, $3);
 }
| Expr T_Sub Expr 	   { fprintf(yyout,"-\n"); 
     Operator *op = new Operator("-");
     $$ = new ArithmeticExpr($1, op, $3);
 }
| Expr T_Mul Expr 	   { fprintf(yyout,"*\n"); 
     Operator *op = new Operator("*");
     $$ = new ArithmeticExpr($1, op, $3);
 }
| Expr T_Div Expr	   { fprintf(yyout,"/\n");  
     Operator *op = new Operator("/");
     $$ = new ArithmeticExpr($1, op, $3);
}
| Expr T_Mod Expr	   { fprintf(yyout,"Mod\n");  
     Operator *op = new Operator("%");
     $$ = new ArithmeticExpr($1, op, $3);
}
| Expr '^' Expr 	   { fprintf(yyout,"^\n");  }
| Expr '|' Expr		   { fprintf(yyout,"|\n");  }
| Expr '&' Expr		   { fprintf(yyout,"&\n");  }
| Expr T_LeftShift Expr    { fprintf(yyout,"LS\n");  }
| Expr T_RightShift Expr   { fprintf(yyout,"RSr\n");  }
| '-' Expr %prec NEG       { fprintf(yyout,"-\n");  }
| '!' Expr 		   { fprintf(yyout,"!\n"); 
    Operator *op = new Operator("!");
    $$ = new LogicalExpr(op, $2);
 }
| '~' Expr		   { fprintf(yyout,"~\n");  }
| Expr T_Incr		   { fprintf(yyout,"++\n");  }
| Expr T_Decr		   { fprintf(yyout,"--\n");  }
| '(' Expr ')'             { fprintf(yyout,"Op\n");  }
| '"' Expr '"'             { fprintf(yyout,"FExpr\n");  }
| T_New NamedType          { fprintf(yyout,"newarrayExpr\n");  }
| LValue T_SingleEqual Expr { fprintf(yyout,"=Expr\n"); 
    Operator *op = new Operator("=");
    $$ = new AssignExpr($1, op, $3);
 }

;

Call:
  T_Identifier T_Pl Actuals T_Pr  { fprintf(yyout,"Call"); 
    $$ = new Call(NULL, new Identifier($1), $3);
 }
| T_Call T_Pl Expr callout_args T_Pr  { fprintf(yyout,"CallOut");  }
| Expr '.' T_Identifier '(' Actuals ')' {fprintf(yyout,"Call"); 
   $$ = new Call( $1, new Identifier($3), $5);
 }
;

callout_args:
 | callout_args T_Comma callout_args_sub { fprintf(yyout,"CallOut args");  }
;

callout_args_sub:
 | Expr		{ fprintf(yyout,"Callout argssub");  }
;

Actuals:
  ExprList             {fprintf(yyout,"ExprList\n");  }
| /* empty */ {}
;

LValue:
  T_Identifier          {fprintf(yyout,"IExpr");  }
| Expr '.' T_Identifier {fprintf(yyout,"Expr");  }
| Expr T_Slb Expr T_Srb     {fprintf(yyout,"SExpr");  }

;

Constant:
  T_IntConstant            {fprintf(yyout,"T_IntConstant   "); $$ = new IntConstant($1); }
| T_DoubleConstant         {fprintf(yyout,"T_DoubleConstant "); $$ = new DoubleConstant($1); }
| T_BoolConstant           {fprintf(yyout,"T_BoolConstant"); $$ = new BoolConstant($1); }
| T_StringConstant         {fprintf(yyout,"T_StringConstant");$$ = new StringConstant($1);  }
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
}
