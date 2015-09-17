%{
#include <cstdio>
#include <iostream>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern int line_num;
 
void yyerror(const char *s);
%}


%union {
  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[MaxIdentLen+1];
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
%token T_LessEqual T_GreaterEqual T_Equal T_NotEqual T_Dims
%token T_LeftShift T_RightShift
%token T_And T_Or T_Null T_Extends T_This T_Interface T_Implements
%token T_While T_For T_If T_Else T_Return T_Break
%token T_New T_NewArray T_Print T_ReadInteger T_ReadLine
%token T_Switch T_Case T_Default T_Incr T_Decr

%token <identifier> T_Identifier
%token <stringConstant> T_StringConstant
%token <integerConstant> T_IntConstant
%token <doubleConstant> T_DoubleConstant
%token <boolConstant> T_BoolConstant


%left '='
%left T_Or
%left T_And
%nonassoc '&' '^' '|'
%nonassoc T_Equal T_NotEqual
%nonassoc '<' '>' T_LessEqual T_GreaterEqual
%left T_LeftShift T_RightShift
%left '+' '-'
%left '*' '/' '%'
%left T_Incr T_Decr
%right NEG '!' '~'
%nonassoc '.' '['
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
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.
 */
Program:
  DeclList {
    @1;
    /* pp2: The @1 is needed to convince
     * yacc to set up yylloc. You can remove
     * it once you have other uses of @n*/
    Program *program = new Program($1);
    // if no errors, advance to next phase
    if (ReportError::NumErrors() == 0) {
      if (kTestFlag == TEST_PARSER) {
          program->Print(0);
      } else {
          // pp3: if no errors, check program
          program->Check();
      }
    }
    if (kTestFlag > TEST_SEMANT && ReportError::NumErrors() == 0) {
        program->Emit();
    }
  }
;

DeclList:
  DeclList Decl            { ($$ = $1)->Append($2); }
| Decl                     { ($$ = new List<Decl*>)->Append($1); }
;

Decl:
  VarDecl                  { $$ = $1; }
| ClassDecl                { $$ = $1; }
| InterfaceDecl            { $$ = $1; }
| FnDecl                   { $$ = $1; }
;

VarDecl:
  Variable ';'             { $$ = $1; }
;

Variable:
  Type T_Identifier {
    Identifier *i = new Identifier(@2, $2) ;
    $$ = new VarDecl(i, $1);
  }
;

Type:
  T_Void                   { $$ = Type::voidType; }
| T_Bool                   { $$ = Type::boolType; }
| T_Int                    { $$ = Type::intType; }
| T_Double                 { $$ = Type::doubleType; }
| T_String                 { $$ = Type::stringType; }
| NamedType                { $$ = $1; }
| Type T_Dims              { $$ = new ArrayType(Join(@1, @2), $1); }
;

NamedType:
  T_Identifier {
    Identifier *i = new Identifier(@1, $1);
    $$ = new NamedType(i);
  }
;

ClassDecl:
  T_Class T_Identifier ClassExtends ClassImplements '{' FieldList '}' {
    Identifier *i = new Identifier(@2, $2);
    $$ = new ClassDecl(i, $3, $4, $6);
  }
| T_Class T_Identifier ClassExtends ClassImplements '{' '}' {
    Identifier *i = new Identifier(@2, $2);
    $$ = new ClassDecl(i, $3, $4, new List<Decl*>);
  }
;

ClassExtends:
  T_Extends T_Identifier {
    Identifier *i = new Identifier(@2, $2);
    $$ = new NamedType(i);
  }
| /* empty */              { $$ = NULL; }
;

ClassImplements
: T_Implements ImplementsTypeList {
    $$ = $2;
  }
| /* empty */              { $$ = new List<NamedType*>; }
;

ImplementsTypeList:
  ImplementsTypeList ',' T_Identifier {
    Identifier *i = new Identifier(@3, $3);
    NamedType *t = new NamedType(i);
    ($$ = $1)->Append(t);
  }
| T_Identifier {
    Identifier *i = new Identifier(@1, $1);
    NamedType *t = new NamedType(i);
    ($$ = new List<NamedType*>)->Append(t);
  }
;

InterfaceDecl:
  T_Interface T_Identifier '{' PrototypeList '}' {
    Identifier *i = new Identifier(@2, $2);
    $$ = new InterfaceDecl(i, $4);
  }
| T_Interface T_Identifier '{' '}' {
    Identifier *i = new Identifier(@2, $2);
    $$ = new InterfaceDecl(i, new List<Decl*>);
  }
;

FnDecl:
  FnDef StmtBlock {
    FnDecl *f = $1;
    f->SetFunctionBody($2);
  }
;

FieldList:
  FieldList VarDecl        { ($$ = $1)->Append($2); }
| FieldList FnDecl         { ($$ = $1)->Append($2); }
| VarDecl                  { ($$ = new List<Decl*>)->Append($1); }
| FnDecl                   { ($$ = new List<Decl*>)->Append($1); }
;

Formals:
  FormalsList              { $$ = $1; }
| /* empty */              { $$ = new List<VarDecl*>; }
;

FormalsList:
  Variable                 { ($$ = new List<VarDecl*>)->Append($1); }
| FormalsList ',' Variable {
    ($$ = $1)->Append($3);
  }
;

Prototype:
  FnDef ';'                { $$ = $1; }
;

FnDef:
  Type T_Identifier '(' Formals ')' {
    Identifier *i = new Identifier(@2, $2);
    $$ = new FnDecl(i, $1, $4);
  }
;

PrototypeList:
  PrototypeList Prototype {
    ($$ = $1)->Append($2);
  }
| Prototype                { ($$ = new List<Decl*>)->Append($1); }
;

StmtBlock:
  '{' VarDeclList StmtList '}' {
    $$ = new StmtBlock($2, $3);
  }
| '{' VarDeclList '}'      { $$ = new StmtBlock($2, new List<Stmt*>); }
| '{' StmtList '}'         { $$ = new StmtBlock(new List<VarDecl*>, $2); }
| '{' '}' {
    $$ = new StmtBlock(new List<VarDecl*>,
    new List<Stmt*>);
  }
;

StmtList:
  StmtList Stmt            { ($$ = $1)->Append($2); }
| Stmt                     { ($$ = new List<Stmt*>)->Append($1); }
;

VarDeclList:
  VarDeclList VarDecl      { ($$ = $1)->Append($2); }
| VarDecl                  { ($$ = new List<VarDecl*>)->Append($1); }
;

Stmt:
  OptExpr ';'              { $$ = $1; }
| T_While '(' Expr ')' Stmt {
    $$ = new WhileStmt($3, $5);
  }
| T_Return ';'             { $$ = new ReturnStmt(@1, new EmptyExpr); }
| T_Return Expr ';'        { $$ = new ReturnStmt(@2, $2); }
| T_Break ';'              { $$ = new BreakStmt(@1); }
| T_Print '(' ExprList ')' ';' {
    $$ = new PrintStmt($3);
  }
| T_For '(' OptExpr ';' Expr ';' OptExpr ')' Stmt {
    $$ = new ForStmt($3, $5, $7, $9);
  }
| IfStmt                   { $$ = $1; }
| T_Switch '(' Expr ')' '{' CaseStmtList DefaultStmt '}' {
    $$ = new SwitchStmt($3, $6, $7);
  }
| StmtBlock                { $$ = $1; }
;

OptExpr:
  Expr                     { $$ = $1; }
| /* empty */              { $$ = new EmptyExpr(); }
;


CaseStmtList:
  CaseStmtList CaseStmt    { ($$ = $1)->Append($2); }
| CaseStmt                 { ($$ = new List<CaseStmt*>)->Append($1); }
;

CaseStmt:
  T_Case T_IntConstant ':' StmtList %prec NONEMPTYCASE {
    IntConstant *ic = new IntConstant(@2, $2);
    $$ = new CaseStmt(ic, $4);
  }
| T_Case T_IntConstant ':' %prec EMPTYCASE {
    IntConstant *ic = new IntConstant(@2, $2);
    $$ = new CaseStmt(ic, new List<Stmt*>);
  }
;

DefaultStmt:
  T_Default ':' StmtList %prec NONEMPTYDEFAULT {
    $$ = new DefaultStmt($3);
  }
| T_Default ':' %prec EMPTYDEFAULT {
    $$ = new DefaultStmt(new List<Stmt*>);
  }
;

IfStmt:
  T_If '(' Expr ')' Stmt %prec NOELSE {
    $$ = new IfStmt($3, $5, NULL);
  }
| T_If '(' Expr ')' Stmt T_Else Stmt {
    $$ = new IfStmt($3, $5, $7);
  }
;

ExprList:
  ExprList ',' Expr        { ($$ = $1)->Append($3); }
| Expr                     { ($$ = new List<Expr*>)->Append($1); }
;

Expr:
  LValue                   { $$ = $1; }
| Call                     { $$ = $1; }
| Constant                 { $$ = $1; }
| Expr T_Or Expr {
    Operator *op = new Operator(@2, "||");
    $$ = new LogicalExpr($1, op, $3);
  }
| Expr T_And Expr {
    Operator *op = new Operator(@2, "&&");
    $$ = new LogicalExpr($1, op, $3);
  }
| Expr '<' Expr {
    Operator *op = new Operator(@2, "<");
    $$ = new RelationalExpr($1, op, $3);
  }
| Expr '>' Expr {
    Operator *op = new Operator(@2, ">");
    $$ = new RelationalExpr($1, op, $3);
  }
| Expr T_GreaterEqual Expr {
    Operator *op = new Operator(@2, ">=");
    $$ = new RelationalExpr($1, op, $3);
  }
| Expr T_LessEqual Expr {
    Operator *op = new Operator(@2, "<=");
    $$ = new RelationalExpr($1, op, $3);
  }
| Expr T_Equal Expr {
    Operator *op = new Operator(@2, "==");
    $$ = new EqualityExpr($1, op, $3);
  }
| Expr T_NotEqual Expr {
    Operator *op = new Operator(@2, "!=");
    $$ = new EqualityExpr($1, op, $3);
  }
| Expr '+' Expr {
     Operator *op = new Operator(@2, "+");
     $$ = new ArithmeticExpr($1, op, $3);
  }
| Expr '-' Expr {
    Operator *op = new Operator(@2, "-");
    $$ = new ArithmeticExpr($1, op, $3);
  }
| Expr '*' Expr {
    Operator *op = new Operator(@2, "*");
    $$ = new ArithmeticExpr($1, op, $3);
  }
| Expr '/' Expr {
    Operator *op = new Operator(@2, "/");
    $$ = new ArithmeticExpr($1, op, $3);
  }
| Expr '%' Expr {
    Operator *op = new Operator(@2, "%");
    $$ = new ArithmeticExpr($1, op, $3);
  }
| Expr '^' Expr {
    Operator *op = new Operator(@2, "^");
    $$ = new BitwiseExpr($1, op, $3);
  }
| Expr '|' Expr {
    Operator *op = new Operator(@2, "|");
    $$ = new BitwiseExpr($1, op, $3);
  }
| Expr '&' Expr {
    Operator *op = new Operator(@2, "&");
    $$ = new BitwiseExpr($1, op, $3);
  }
| Expr T_LeftShift Expr {
    Operator *op = new Operator(@2, "<<");
    $$ = new BitwiseExpr($1, op, $3);
  }
| Expr T_RightShift Expr {
    Operator *op = new Operator(@2, ">>");
    $$ = new BitwiseExpr($1, op, $3);
  }
| '-' Expr %prec NEG {
    Operator *op = new Operator(@1, "-");
    $$ = new ArithmeticExpr(op, $2);
  }
| '!' Expr {
    Operator *op = new Operator(@1, "!");
    $$ = new LogicalExpr(op, $2);
  }
| '~' Expr {
    Operator *op = new Operator(@1, "~");
    $$ = new BitwiseExpr(op, $2);
  }
| Expr T_Incr {
    Operator *op = new Operator(@2, "++");
    $$ = new PostfixExpr($1, op);
  }
| Expr T_Decr {
    Operator *op = new Operator(@2, "--");
    $$ = new PostfixExpr($1, op);
  }
| '(' Expr ')'             { $$ = $2; }
| T_This                   { $$ = new This(@1); }
| T_ReadInteger '(' ')'    { $$ = new ReadIntegerExpr(Join(@1, @3)); }
| T_ReadLine '(' ')'       { $$ = new ReadLineExpr(Join(@1, @3)); }
| T_New NamedType          { $$ = new NewExpr(Join(@1, @2), $2); }
| T_NewArray '(' Expr ',' Type ')' {
    $$ = new NewArrayExpr(Join(@1, @6), $3, $5);
  }
| LValue '=' Expr {
    Operator *op = new Operator(@2, "=");
    $$ = new AssignExpr($1, op, $3);
  }
;

Call:
  T_Identifier '(' Actuals ')' {
    $$ = new Call(Join(@1,@4), NULL, new Identifier(@1,$1), $3);
  }
| Expr '.' T_Identifier '(' Actuals ')' {
    $$ = new Call(Join(@1,@6), $1, new Identifier(@3,$3), $5);
  }
;

Actuals:
  ExprList              { $$ = $1; }
| /* empty */           { $$ = new List<Expr*>; }
;

LValue:
  T_Identifier          { $$ = new FieldAccess(NULL, new Identifier(@1, $1)); }
| Expr '.' T_Identifier { $$ = new FieldAccess($1, new Identifier(@3, $3)); }
| Expr '[' Expr ']'     { $$ = new ArrayAccess(Join(@1, @4), $1, $3); }

;

Constant:
  T_IntConstant            { $$ = new IntConstant(@1, $1); }
| T_DoubleConstant         { $$ = new DoubleConstant(@1, $1); }
| T_BoolConstant           { $$ = new BoolConstant(@1, $1); }
| T_StringConstant         { $$ = new StringConstant(@1, $1); }
| T_Null                   { $$ = new NullConstant(@1); }
;

%%

%%

int main(int argc,char* argv[]) {
	
	// open a file handle to a particular file:
	FILE *myfile = fopen(argv[1], "r");
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
}

void yyerror(const char *s) {
	cout << "parse error on line " << line_num << "!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

