%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"

	#include "type.c"
	#include "symbol.c"	
	#include "class.c"

	#include "e1.c"
	
	
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	struct Typetable *gtype,*Tptr;
	struct ClassTable* ctype=NULL;
	int params=0;
	int args;
	int flabell=1;
	struct Typetable* rettype;
	struct FieldList *ftype;
	struct ClassTable *Cptr;
	
%}

%union{
	char character;
	struct tNode *no;
	int integer;        //1 INT 3 STR
	char *string;
	struct Paramstruct *par;
	struct argList * al;
	struct Typetable* tipe;
	struct ClassTable *ctabel;
}
%type <no> program Slist Stmt InputStmt OutputStmt AsgStmt E IfStmt WhileStmt ContStmt BrkStmt FdefBlock Fdef RetStmt Field FieldFunction
%type <al> ArgList
//chumma
%type <tipe> FieldDecl TypeName TypeName2
%type <par> ParamList Param ParamList2 Param2
%type <integer> NUM 
%type <string> ID
%type <ctabel>Cname
%token NUM BEGINN END READ WRITE ID IF ELSE THEN ENDIF WHILE ENDWHILE DO DECL ENDDECL INT STR CONTINUE BREAK STRING MAIN RETURN AND ALLOC FREE TYPE ENDTYPE NULLL NEW
%token CLASS ENDCLASS EXTEND SELF NEW DELETE
%left '-' '+' 
%left '*' '/'
%%

Final: Program                    {	printf("hi final23");
					return;
						}
Program :TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock{;}
        | TypeDefBlock ClassDefBlock GdeclBlock MainBlock{;}
        ;




TypeDefBlock : TYPE TypeDefList ENDTYPE{//printf("printing types\n");printTypes();
		
              	heapSet(fp);					}
	     |{	heapSet(fp);}
	     ;
TypeDefList  : TypeDefList TypeDef
	     | TypeDef
	     ;
TypeDef	     : Tname '{' FieldDeclList '}' { printf("completed a typeINstall\n");     }
		;
Tname	     : ID	{Tptr=TInstall($1);}
		;		
FieldDeclList: FieldDeclList FieldDecl
	     | FieldDecl
	     ;
FieldDecl    : TypeName ID ';'  {if($1==NULL){
					yyerror("unknown type for ");
					printf("%s\n",$2);
					exit(0);
				}
				Type_Minstall(Tptr,$1,$2);}
		;
		     
	   
ClassDefBlock: CLASS ClassDefList ENDCLASS{printf("class decl finished\n");class=1;Cptr=NULL;}
		|
		;
ClassDefList : ClassDefList ClassDef
		| ClassDef
		;
		
ClassDef        : Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'{funcPosition=0;
			printf("helo1\n");fflush(stdout);							printClassDetails(Cptr);
						printf("helo2\n");fflush(stdout);						
										}
		;				     

Cname		: ID  {Cptr=CInstall($1,NULL);$$=Cptr;}
		| ID EXTEND ID {Cptr=CInstall($1,$3);}
		;
Fieldlists 	: Fieldlists Fld	{;}
		|
		;
Fld 		: ID ID ';'{Class_Finstall(Cptr,$1,$2);}           //herr
		;
						
MethodDecl  	: MethodDecl MDecl{;}
		| MDecl {;}
		;
MDecl 		: ID ID '('ParamList ')' ';'{Class_Minstall(Cptr,$2,TLookup($1),$4);}
		;
MethodDefns      : MethodDefns Fdef{;}
		| Fdef{;}
		;			

FieldFunction : SELF '.' ID '(' ArgList')'{if(Class_Mlookup(Cptr,$3)){
						checkArgs($3,$5,Cptr);
						$$=getFunNode($3,$5);
						
						$$->right=getSelfNode(NULL);

						$$->val=Class_Mlookup(Cptr,$3)->funcPosition;           // //hereFuncPOSITION
						$$->type=Class_Mlookup(Cptr,$3)->type;
						}
					   else{
					   yyerror("unknown member function\n");
					   exit(0);
					   }
					}
		| ID'.'ID '(' ArgList')'     { printf("exit\n");fflush(stdout);	
		if(getIdNode($1,NULL)->cType){

		if(Class_Mlookup(getIdNode($1,NULL)->cType,$3)){
			checkArgs($3,$5,getIdNode($1,NULL)->cType);
			$$=getFunNode($3,$5);

			$$->right=getIdNode($1,NULL);

			$$->val=Class_Mlookup(getIdNode($1,NULL)->cType,$3)->funcPosition;                          //hereFuncPOSITION

			$$->type=Class_Mlookup(getIdNode($1,NULL)->cType,$3)->type;

		}
		else{
			yyerror("unknown member function\n");
					   exit(0);
			}
			
		}
		else{
			yyerror("unknown class\n");
					   exit(0);
		}
		}//not here
		
		|Field '.' ID'(' ArgList')'   {if($1->cType && Class_Mlookup($1->cType,$3)){	
					checkArgs($3,$5,$1->cType);		
					$$=getFunNode($3,$5);

					$$->right=$1;

					$$->val=Class_Mlookup($1->cType,$3)->funcPosition;                         // hereFuncPOSITION

					$$->type=Class_Mlookup($1->cType,$3)->type;
										
						}
					        else{
					        	yyerror("unknown member function\n");
					        	exit(0);
					        }	
						}
		;
		
							     
GdeclBlock : DECL GdeclList ENDDECL {;}
		| 		{;}
		;
GdeclList : GdeclList GDecl {;}
	  | GDecl{;}
	  ;
GDecl : TypeName GidList ';' {if(gtype==NULL && ctype==NULL){
				yyerror("undeclared type");
				exit(0);};
				}
	;
 TypeName :ID	{$$=TLookup($1);gtype=TLookup($1);ctype=CLookup($1);}
 	;
 	
GidList : GidList ',' Gid {;}
	| Gid{;}
	;

Gid :      ID	{ 		if(Lookitup($1)==NULL)                                             //herr
  				GInstall($1,gtype,ctype, 1,NULL);
  				else{  					printf("%s",$1);
  					yyerror("redecleration ");
  					exit(1);
  				};}
        | ID'['NUM']'{         if(Lookitup($1)==NULL)
  				GInstall($1,gtype,ctype, $3,NULL);
  				else{printf("%s",$1);
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
        | ID'('ParamList')'    {if(Lookitup($1)==NULL )
  				GInstall($1,gtype,ctype, 0,$3);
  				else{  					printf("%s",$1);
  					yyerror("redecleration ");
  					exit(1);
  				};
  				}
	;
ParamList : ParamList ',' Param{$$=addParam($1,$3);}
	  | Param		{printf("not empty\n");$$=$1;}
	  | 			{printf("empty\n");$$=NULL;}
	  ;
Param: TypeName2 ID{$$=createParam($2,$1,1);}
	;	




FdefBlock : FdefBlock Fdef {;}
	  | Fdef 	{;}
	  ;		
Fdef :TypeName ID '(' ParamList2')' '{' LdeclBlock BEGINN Slist END'}'{
	if(class==0 && Class_Mlookup(Cptr,$2)==NULL){
		yyerror("undeclared function ");
		printf("%s\n",$2);
		exit(1);
	}

	if(rettype!=$1){	
		
		yyerror("rettype error");
			exit(1);		
	}
									printf("yofn\n");	
									//typecheck($1, Lookitup($2)->type, 'e');
									checkParams($2,$4,Cptr);
									args=doBinding(params);
									
			printf("FdefBlock started\n");
			//generate code using Lsymbol table
			showTable();
	  		//printree($1);
	  		int rfl;
	  		flabell++;
	  		if(Class_Mlookup(Cptr,$2)){
	  			rfl=Class_Mlookup(Cptr,$2)->fLabel;
	  			if(rettype!=Class_Mlookup(Cptr,$2)->type){	
		
					yyerror("rettype error");
					exit(1);		
					}
	  		}
	  		else{
	  			rfl=flabell;
	  		}
	  		genCode($9,args,fp,l,rfl,0);
	  		//then destroy the Lsymboltable for that fuunction
	  		params=0;
	  		args=0;
	  		ClearLsymbol();
	  		printf("FdefBlock completed\n");fflush(stdout);
//printf("leaving fdef\n");
}
     ;
ParamList2 : ParamList2 ',' Param2 {$$=addParam($1,$3);}
	  | Param2		{$$=$1;}
	  | 			{$$=NULL;}
	  ;
Param2: TypeName2 ID{		if(Lookitup2($2)==NULL)
  				LInstall($2,$1);
  				else{
  					printf("%s",$2);
  					yyerror("redecleration");
  					exit(1);
  				};
  				params++;
  				$$=createParam($2,$1,1);}
		;	
TypeName2 : 	ID	{if(TLookup($1))
			 $$=TLookup($1);
			 else{
			 	yyerror("unknown param type");
			 	exit(1);
			 }
			 }
 	  ;





LdeclBlock : DECL LDecList ENDDECL {;}
	   | DECL ENDDECL{;}
	   |
	   ;
LDecList : LDecList LDecl {;}
	 | LDecl{;}
	 ;
LDecl : TypeName IdList ';' {;}
	;

IdList : IdList ',' ID {	if(Lookitup2($3)==NULL){
				if(gtype==NULL){
					yyerror("unknown type");
  					exit(1);
				}
  				LInstall($3,gtype);
  				}
  				else{	  printf("%s",$3);
  					yyerror("redecleration");
  					exit(1);
  				};}
       | ID{			if(Lookitup2($1)==NULL){
       				if(gtype==NULL){
					yyerror("unknown type");
  					exit(1);
				}
  				LInstall($1,gtype);
  				}
  				else{  		printf("%s",$1);
  					yyerror("redecleration");
  					exit(1);
  				};;}
       ;


 E :    ID'('ArgList')'{if(Lookitup($1)==NULL){
			printf("yyerror %s undeclared function\n",$1);
			exit(1);
			}
 			checkArgs($1,$3,NULL);
 			$$=getFunNode($1,$3);
 			$$->val=Lookitup($1)->flabel;
			$$->type=Lookitup($1)->type;
			}			
 	;
 
ArgList : ArgList ',' E {$$=getArgList1($1,$3);}
	| E {$$=getArgList2($1);}
	|   {$$=getArgList2(NULL);}
	;
MainBlock: MAIN '{' LdeclBlock BEGINN Slist END '}' {   
			if(rettype!=TLookup("int")){
							//printf("-%s-",rettype->name);
									yyerror("rettype error");
  									exit(1);		
									}
			
			
			fprintf(fp,"F0:\n");setVirtual(fp);
			fprintf(fp,"MOV SP,%d\n",bindd);
			initialize(fp,l);
			
									
			printf("params are %d\n",params);
			args=doBinding(params);
			//printree($5);
	  		//showTable();
	  		//then destroy the Lsymboltable for that fuunction

	  		genCode($5,args,fp,l,1,1);
	  		ClearLsymbol();
				//codegen($3,fp,l);
				//exitt();
				return;
						}
	;

 	

 
  	  	          	    
Slist: 	 Slist Stmt       {$$=getCNode($1,$2);}
	| Stmt		  {$$=$1;}
	;
Stmt:    InputStmt       {$$=$1;		}
	|OutputStmt	 {$$=$1;		}
	|AsgStmt	 {$$=$1;		}
	|IfStmt            {$$=$1;}
	|WhileStmt 		{$$=$1;}
	|BrkStmt           {$$ = $1;}
    |ContStmt          {$$ = $1;}
    |RetStmt		{$$ = $1;}
    | FREE '('ID')' ';'  {getFreeNode(getIdNode($3,NULL));}                     
    | FREE '('Field')'';'{getFreeNode($3);}
	;
RetStmt: RETURN E';'	{rettype=$2->type;$$=getRetNode($2);}
WhileStmt:  WHILE '('E')' DO Slist ENDWHILE';'	{ typecheck($3->type, TLookup("bool"), 'i');
						  $$=CreateTree(7,$3,NULL,$6);}
	  ;	
InputStmt     : READ'('ID')'';'	    {typecheck(getIdNode($3,NULL)->type,NULL,'y');$$=getrNode(getIdNode($3,NULL));}
	      | READ'('ID'['E']'')'';'{	arraycheck($3,$5);
			$$=getrNode(getIdNode($3,$5));}
	      |READ '(' Field ')' ';' {typecheck($3->type,NULL,'y');
	      		$$=getrNode($3);}				
	 ;
OutputStmt: WRITE'('E')'';'     {typecheck($3->type, NULL, 'y'); 
					$$=getwNode($3);}
	  ;
IfStmt:     IF '('E')' THEN Slist ELSE Slist ENDIF ';'{typecheck($3->type, TLookup("bool"), 'i'); 
							$$=CreateTree(6,$3,$6,$8);}
	   |IF '('E')' THEN Slist ENDIF';'{    typecheck($3->type, TLookup("bool"), 'i');
	   					$$=CreateTree(6,$3,$6,NULL);}
	    ;	  
  

AsgStmt   : ID '=' E ';'       {                                                                                             //herr copy
				if(getIdNode($1,NULL)->cType && $3->cType){
					if(checkPtr(getIdNode($1,NULL)->cType,$3->cType)==0){
		yyerror("conflicting types for assignment stmt");
		exit(0);
	}
				}
				else{
					typecheck(getIdNode($<string>1,NULL)->type, $3->type, 'e');}                      //herr copy
	$$=getOpNode(TLookup("void"),HI,getIdNode($<string>1,NULL),$3);}
	
		
	|	ID'['E']' '=' E ';'	{arraycheck($1,$3);
	typecheck(getIdNode($<string>1,$3)->type, $3->type, 'e');
	getOpNode(TLookup("void"),HI,getIdNode($1,$3),$6);}	

	
	|  Field'='E ';'	  {if($1->cType && $3->cType){                                                    //herr copy
					if(checkPtr($1->cType,$3->cType)==0){
		yyerror("conflicting types for assignment stmt");
		exit(0);
	}
				}
					else{
					typecheck($1->type,$3->type,'e');
				  } 
				  $$=getOpNode(TLookup("void"),HI,$1,$3);              
						}
	
	| ID '=' ALLOC '('')'';'	{$$=getOpNode(TLookup("void"),HI,getIdNode($1,NULL),getAllocNode(NULL)); }					  
	
	| Field '=' ALLOC '('')'';'	{$$=getOpNode(TLookup("void"),HI,$1,getAllocNode(NULL));}		

	
	| ID '=' NULLL ';'	{$$=getOpNode(TLookup("void"),HI,getIdNode($1,NULL),getNulNode()); }
	
	
	| Field '=' NULLL ';'	{$$=getOpNode(TLookup("void"),HI,$1,getNulNode());}	
	
	
	| ID '=' NEW '(' ID ')' ';'	 {										//herr heap and vp
	if(checkPtr(getIdNode($1,NULL)->cType,CLookup($5))==0){
		yyerror("conflicting types for ");
		printf("%s\n",$5
		);
		exit(0);
	}
	$$=getOpNode(TLookup("void"),HI,getIdNode($1,NULL),getAllocNode(CLookup($5)));
	} //NEW
	
			    
	| Field '=' NEW '(' ID ')' ';'	{										//herr heap and vp
	if(checkPtr($1->cType,CLookup($5))==0){
		yyerror("conflicting types for ");
		printf("%s\n",$5);
		exit(0);
	}
	$$=getOpNode(TLookup("void"),HI,$1,getAllocNode(CLookup($5)));}	
	
	
	|DELETE '(' Field ')' ';'	{;}	//NEW																																									
	  ;
	  
	  
BrkStmt: BREAK ';'                  {$$ =CreateTree(8,NULL,NULL,NULL);}

ContStmt: CONTINUE ';'                  {$$ =CreateTree(9,NULL,NULL,NULL);}	

Field    : ID '.' ID       {
				if(getIdNode($1,NULL)->type && FLookup(getIdNode($1,NULL)->type,$3)){
				ftype=FLookup(getIdNode($1,NULL)->type,$3);
				$$=getFieldNode($1,ftype);
				$$->type=ftype->type;
				}
			    else{
			    		yyerror("invalid member");
			    		exit(0);
			    }
			    		}
			                              //NEW
	 | Field '.' ID    {
	 		    if($1->type){
	 		
	 		      if(ftype=FLookup($1->type,$3)){
	 		
	 		      		$$=addMember($1,ftype);
	 		      	
	 		      }
	 		      else{
	 		      		yyerror("invalid member");
			    		exit(0);
	 		      }
	 				}
	 		    else if($1->cType){
	 	
	 		    	if(ftype=Class_Flookup($1->cType,$3)){
	 		    
	 		      		$$=addMember($1,ftype);
	 		      		
	 		      }
	 		      else{
	 		      		yyerror("invalid member");
			    		exit(0);
	 		      }
	 		    }		
	 				
	 		} 
	 | SELF '.' ID	    {	if(ftype=Class_Flookup(Cptr,$3)){

	 			$$=getSelfNode(ftype);

	 			}
	 			else{yyerror("invalid member");
			    		exit(0);
	 			}
	 			}        //NEW		    
	  ;
	  
	  
	 
E	: E '+' E	    {typecheck($1->type, $3->type, 'a');
				$$=getOpNode(TLookup("int"),PLUS,$1,$3);}            //1ath 2bool 3string
	| E '-' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(TLookup("int"),MINUS,$1,$3);}
	| E '*' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(TLookup("int"),MUL,$1,$3);}
	| E '/' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(TLookup("int"),DIV,$1,$3);}
	| E '%' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(TLookup("int"),MOD,$1,$3);}			
	| '(' E ')' 	    {$$=$2;	}
	| NUM		    {$<no>$=getNumNode($<integer>1);}
	| ID		    {$<no>$=getIdNode($<string>1,NULL);}
	| STRING	    {$<no>$=getStringNode($<string>1); }
	| Field                {$$=$1;}              
	| FieldFunction       {$$=$1;}                                //NEW
	| ID'['E']'		{arraycheck($1,$3);$$=getIdNode($<string>1,$3);}
	|  E '>' E           {typecheck($1->type, $3->type, 'r');
				$$=getOpNode(TLookup("bool"),GT,$1,$3);}
	| E '<' E    	    {typecheck($1->type, $3->type, 'r');
				$$=getOpNode(TLookup("bool"),LT,$1,$3);}
	| E '=''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(TLookup("bool"),EQ,$1,$4);}
	| E '<''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(TLookup("bool"),LTE,$1,$4);}
	| E '>''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(TLookup("bool"),GTE,$1,$4);}
	| E '!''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(TLookup("bool"),NE,$1,$4);}
	| E AND E 	    {typecheck($1->type, $3->type, 'b'); //AND HAS b
				$$=getOpNode(TLookup("bool"),12,$1,$3);}	
	| E '!''=' NULLL	  {$$=getOpNode(TLookup("bool"),NE,$1,getNulNode());}
	| E '=''=' NULLL	  {$$=getOpNode(TLookup("bool"),EQ,$1,getNulNode());}					
	;
     
%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}
int main()
{
	FILE *fp2 = fopen("input.txt", "r");
	if(fp2){
		yyin = fp2;
		}
	
    fp = fopen("a.xsm", "w");
    printf("HELLO OPENED\n");	
    // Check if the file is opened successfully
    if (fp == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;  // Exit the program with an error code
    }

    // Use fprintf to write to the file
  TypeTableCreate();  
  
  yyparse();
  return 1;
}     
