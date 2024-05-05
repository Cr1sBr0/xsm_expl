%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "e1.c"
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	int gtype;
	int params=0;
	int args;
	int flabell=0;
	int rettype;
%}

%union{
	char character;
	struct tNode *no;
	int integer;        //1 INT 3 STR
	char *string;
	struct Paramstruct *par;
	struct argList * al;
}
%type <no> program Slist Stmt InputStmt OutputStmt AsgStmt E IfStmt WhileStmt ContStmt BrkStmt FdefBlock Fdef RetStmt
%type <al> ArgList
//chumma
%type <par> ParamList Param ParamList2 Param2
%type VarList
%type <integer> NUM Type Type2
%type <string> ID
%token NUM BEGINN END READ WRITE ID IF ELSE THEN ENDIF WHILE ENDWHILE DO DECL ENDDECL INT STR CONTINUE BREAK STRING MAIN RETURN AND
%left '-' '+' 
%left '*' '/'
%%

Final: Program                    {	printf("hi final");
					return;
						}
Program :GdeclBlock FdefBlock MainBlock{;}
        | GdeclBlock MainBlock{;}
        | MainBlock{;}
        ;

GdeclBlock : DECL GdeclList ENDDECL {initialize(fp,l);
					}
		| DECL ENDDECL{;}
		|
		;
GdeclList : GdeclList GDecl {;}
	  | GDecl{;}
	  ;
GDecl : Type GidList ';' {;}
	;

GidList : GidList ',' Gid {;}
	| Gid{;}
	;

Gid :      ID	{ 		if(Lookitup($1)==NULL)
  				GInstall($1,gtype, 1,NULL);
  				else{  					printf("%s",$1);
  					yyerror("redecleration");
  					exit(1);
  				};}
        | ID'['NUM']'{         if(Lookitup($1)==NULL)
  				GInstall($1,gtype, $3,NULL);
  				else{  					printf("%s",$1);
  					yyerror("redecleration");
  					exit(1);
  				};
  				}
        | ID'('ParamList')'    {if(Lookitup($1)==NULL)
  				GInstall($1,gtype, 0,$3);
  				else{  					printf("%s",$1);
  					yyerror("redecleration");
  					exit(1);
  				};
  				}
	;
ParamList : ParamList ',' Param{$$=addParam($1,$3);}
	  | Param		{printf("not empty\n");$$=$1;}
	  | 			{printf("empty\n");$$=NULL;}
	  ;
Param: Type2 ID{$$=createParam($2,$1,1);}
	;	




FdefBlock : FdefBlock Fdef {	
				//printree($2);
	  		showTable();
	  		flabell++;
	  		genCode($2,args,fp,l,flabell);
	  		//then destroy the Lsymboltable for that fuunction
			params=0;
	  		ClearLsymbol();}
	  | Fdef{	
			//generate code using Lsymbol table
			showTable();
	  		//printree($1);
	  		flabell++;
	  		genCode($1,args,fp,l,flabell);
	  		//then destroy the Lsymboltable for that fuunction
	  		params=0;
	  		ClearLsymbol();
	  			;}
	  ;		
Fdef :Type ID '(' ParamList2')' '{' LdeclBlock BEGINN Slist END'}'{	if(rettype!=$1){
									yyerror("rettype error");
  									exit(1);		
										}
									typecheck($1, Lookitup($2)->type, 'e');
									checkParams($2,$4);
									args=doBinding(params);
									$$=$9;}
     ;
ParamList2 : ParamList2 ',' Param2 {$$=addParam($1,$3);}
	  | Param2		{$$=$1;}
	  | 			{$$=NULL;}
	  ;
Param2: Type2 ID{		if(Lookitup2($2)==NULL)
  				LInstall($2,$1);
  				else{
  					printf("%s",$2);
  					yyerror("redecleration");
  					exit(1);
  				};
  				params++;
  				$$=createParam($2,$1,1);}
	;	
 Type2 :   INT {$$=1;}
 	| STR {$$=3;}
 	;
 	





LdeclBlock : DECL LDecList ENDDECL {printf("hi3");}
	   | DECL ENDDECL{;}
	   |
	   ;
LDecList : LDecList LDecl {;}
	 | LDecl{;}
	 ;
LDecl : Type IdList ';' {;}
	;

IdList : IdList ',' ID {	if(Lookitup2($3)==NULL)
  				LInstall($3,gtype);
  				else{	  					printf("%s",$3);
  					yyerror("redecleration");
  					exit(1);
  				};}
       | ID{			if(Lookitup2($1)==NULL)
  				LInstall($1,gtype);
  				else{  					printf("%s",$1);
  					yyerror("redecleration");
  					exit(1);
  				};;}
       ;


 E : 	   ID '(' Empty ')' {printf("hii");$$=getFunNode($1,NULL);}
 	| ID'('ArgList')'{printf("enter\n");checkArgs($1,$3);$$=getFunNode($1,$3);printf("exit\n");}
 	;
Empty   :		{;}	
	; 
ArgList : ArgList ',' E {$$=getArgList1($1,$3);}
	| E {$$=getArgList2($1);}
	;
MainBlock: MAIN '{' Declarations BEGINN Slist END '}' {   
			if(rettype!=1){
									yyerror("rettype error");
  									exit(1);		
										}
			args=doBinding(params);
			//printree($5);
	  		//showTable();
	  		//then destroy the Lsymboltable for that fuunction
	  		genCode($5,args,fp,l,0);
	  		ClearLsymbol();
				//codegen($3,fp,l);
				printf("hi4");
				//exitt();
				return;
						}
	| BEGINN END	{	return;		}
	;
Declarations: DECL DeclList ENDDECL	{;}
	    | DECL ENDDECL	{;}
	    |
	    ;	
	  
 DeclList : DeclList Decl 	{;}
          | Decl		{;}
          ;
          
 Decl : Type VarList ';'{;}
 	;
 	
 Type :   INT {$$=1;gtype=1;}
 	| STR {$$=3;gtype=3;}
 	;
 	
  VarList : VarList ',' VarList {;}
  	  | ID    {		if(Lookitup2($1)==NULL)
  				LInstall($1,gtype);
  				else{  					printf("%s",$1);
  					yyerror("redecleration");
  					exit(1);
  				}
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
	;
RetStmt: RETURN E';'	{rettype=$2->type;$$=getRetNode($2);}
WhileStmt:  WHILE '('E')' DO Slist ENDWHILE';'	{ typecheck($3->type, 2, 'i');
						  $$=CreateTree(7,$3,NULL,$6);}
	  ;	
InputStmt: READ'('ID')'';'	    {$$=getrNode(getIdNode($3,NULL));}
			| READ'('ID'['E']'')'';'{	arraycheck($3,$5);
							$$=getrNode(getIdNode($3,$5));}
	 ;
OutputStmt: WRITE'('E')'';'     {//typecheck($3->type, 2, 'y'); 
							$$=getwNode($3);}
	  ;
IfStmt:     IF '('E')' THEN Slist ELSE Slist ENDIF ';'{typecheck($3->type, 2, 'i'); 
							$$=CreateTree(6,$3,$6,$8);}
	   |IF '('E')' THEN Slist ENDIF';'{    typecheck($3->type, 2, 'i');
	   						printf("yac %d %d\n",$3->type,$6->nodetype);
	   					$$=CreateTree(6,$3,$6,NULL);}
	    ;	  
  

AsgStmt   : ID '=' E ';'       {	//printf("type is%d\n",$3->type);
					typecheck(getIdNode($<string>1,NULL)->type, $3->type, 'e');
					$$=getOpNode(4,HI,getIdNode($<string>1,NULL),$3);}	
	|	ID'['E']' '=' E ';'	{arraycheck($1,$3);
					$$=getOpNode(4,HI,getIdNode($<string>1,$3),$6);
		  							}					
	  ;
BrkStmt: BREAK ';'                  {$$ =CreateTree(8,NULL,NULL,NULL);}

ContStmt: CONTINUE ';'                  {$$ =CreateTree(9,NULL,NULL,NULL);}	
	  ;
E	: E '+' E	    {printf("hoho\n");typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,PLUS,$1,$3);}            //1ath 2bool 3string
	| E '-' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,MINUS,$1,$3);}
	| E '*' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,MUL,$1,$3);}
	| E '/' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,DIV,$1,$3);}
	| E '%' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,MOD,$1,$3);}			
	| '(' E ')' 	    {$$=$2;	}
	| NUM		    {$<no>$=getNumNode($<integer>1);}
	| ID		    {$<no>$=getIdNode($<string>1,NULL);}
	| STRING	    {$<no>$=getStringNode($<string>1); }
	| ID'['E']'		{arraycheck($1,$3);$$=getIdNode($<string>1,$3);}
	|  E '>' E           {typecheck($1->type, $3->type, 'r');
				$$=getOpNode(2,GT,$1,$3);}
	| E '<' E    	    {typecheck($1->type, $3->type, 'r');
				$$=getOpNode(2,LT,$1,$3);}
	| E '=''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(2,EQ,$1,$4);}
	| E '<''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(2,LTE,$1,$4);}
	| E '>''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(2,GTE,$1,$4);}
	| E '!''=' E 	    {typecheck($1->type, $4->type, 'r');
				$$=getOpNode(2,NE,$1,$4);}
	| E AND E 	    {typecheck($1->type, $3->type, 'b'); //AND HAS b
				$$=getOpNode(2,12,$1,$3);}			
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
    
  yyparse();
  return 1;
}     
