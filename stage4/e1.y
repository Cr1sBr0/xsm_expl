%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "e1.h"
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];
	int gtype;

%}

%union{
	char character;
	struct tNode *no;
	int integer;        //1 INT 2 STR
	char *string;
	
}
%type <no> program Slist Stmt InputStmt OutputStmt AsgStmt E IfStmt WhileStmt ContStmt BrkStmt
//chumma
%type VarList
%type <integer> NUM Type
%type <string> ID
%token NUM BEGINN END READ WRITE ID IF ELSE THEN ENDIF WHILE ENDWHILE DO DECL ENDDECL INT STR CONTINUE BREAK STRING
%left '-' '+' 
%left '*' '/'
%%


program: BEGINN Declarations Slist END {   // printf("yo\n");
				
				initialize(fp,l);
				printf("start print\n");
				//printree($3);
				//printf("end print");
				//evaltree($2,l);
				codegen($3,fp,l);
				
				exitt();
				return;		}
	| BEGINN END	{	return;		}
	;
Declarations: DECL DeclList ENDDECL	{;}
	    | DECL ENDDECL	{;}
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
  	  | ID    {	;if(Lookitup($1)==NULL)
  				Install($1,gtype, 1);
  				else{
  					yyerror("redecleration");
  					exit(1);
  				}
  				}
	  | ID'['NUM']'	{if(Lookitup($1)==NULL)
  				Install($1,gtype, $3);
  				else{
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
	;

WhileStmt:  WHILE '('E')' DO Slist ENDWHILE';'	{ typecheck($3->type, 2, 'i');
						  $$=CreateTree(7,$3,NULL,$6);}
	  ;	
InputStmt: READ'('ID')'';'	    {$$=getrNode(getIdNode($3,NULL));}
			| READ'('ID'['E']'')'';'{	arraycheck($3,$5);
							$$=getrNode(getIdNode($3,$5));}
	 ;
OutputStmt: WRITE'('E')'';'     {typecheck($3->type, 2, 'y'); 
							$$=getwNode($3);}
	  ;
IfStmt:     IF '('E')' THEN Slist ELSE Slist ENDIF ';'{typecheck($3->type, 2, 'i'); 
							$$=CreateTree(6,$3,$6,$8);}
	   |IF '('E')' THEN Slist ENDIF';'{    typecheck($3->type, 2, 'i');
	   					$$=CreateTree(6,$3,$6,NULL);}
	    ;	  
  

AsgStmt   : ID '=' E ';'       {	//printf("type is%d\n",$3->type);
					typecheck(getIdNode($<string>1,NULL)->type, $3->type, 'e');
					$$=getOpNode(4,HI,getIdNode($<string>1,NULL),$3);}	
	|	ID'['E']' '=' E ';'	{arraycheck($1,$3);
					 typecheck(getIdNode($<string>1,NULL)->type, $6->type, 'e');
					$$=getOpNode(4,HI,getIdNode($<string>1,$3),$6);
		  							}					
	  ;
BrkStmt: BREAK ';'                  {$$ =CreateTree(8,NULL,NULL,NULL);}

ContStmt: CONTINUE ';'                  {$$ =CreateTree(9,NULL,NULL,NULL);}	
	  ;
E	: E '+' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,PLUS,$1,$3);}            //1ath 2bool 3nothing
	| E '-' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,MINUS,$1,$3);}
	| E '*' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,MUL,$1,$3);}
	| E '/' E	    { typecheck($1->type, $3->type, 'a');
				$$=getOpNode(1,DIV,$1,$3);}
	| E '%' E	    { typecheck($1->type, $3->type, 'a');printf("himod\n");
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
	;
     
%%
void exitt(){
	fprintf(fp,"MOV R0,\"Exit\"\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"CALL 0\n");
	
}
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

    // Check if the file is opened successfully
    if (fp == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;  // Exit the program with an error code
    }

    // Use fprintf to write to the file
    
  yyparse();
  return 1;
}     
