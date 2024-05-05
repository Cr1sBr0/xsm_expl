%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "eval.h"
	#include "eval.c"
	int yylex(void);
	FILE *fp;
	extern FILE *yyin;
	int l[20];

%}

%union{
	char character;
	struct tNode *no;
	int integer;
	
}
%type <no> program Slist Stmt InputStmt OutputStmt AsgStmt E IfStmt WhileStmt E1
%type <integer> NUM
%type <character> ID
%token NUM BEGINN END READ WRITE ID IF ELSE THEN ENDIF WHILE ENDWHILE DO
%left '-' '+' 
%left '*' '/'
%%


program: BEGINN Slist END {   // printf("yo\n");
				
				initialize(fp,l);
				//printree($2);

				evaltree($2,l);
				//codegen($2,fp,l);
				exitt();
				return;		}
	| BEGINN END	{	return;		}
	;
	
Slist: 	 Slist Stmt       {$$=getCNode($1,$2);}
	| Stmt		  {$$=$1;}
	;
Stmt:    InputStmt       {$$=$1;		}
	|OutputStmt	 {$$=$1;		}
	|AsgStmt	 {$$=$1;		}
	|IfStmt            {$$=$1;}
	|WhileStmt 		{$$=$1;}
	;

WhileStmt:  WHILE '('E1')' DO Slist ENDWHILE';'		{$$=CreateTree(7,$3,NULL,$6);}
	  ;	
InputStmt: READ'('ID')'';'	    {$$=getrNode(getIdNode($3));}
	 ;
OutputStmt: WRITE'('E')'';'     {$$=getwNode($3);}
	  ;
IfStmt:     IF '('E1')' THEN Slist ELSE Slist ENDIF ';'{ $$=CreateTree(6,$3,$6,$8);}
	   |IF '('E1')' THEN Slist ENDIF';'{ $$=CreateTree(6,$3,$6,NULL);}
	    ;	  

AsgStmt   : ID'='E';'       {$$=getOpNode(HI,getIdNode($1),$3);}	
	  ;
E	: E '+' E	    {$$=getOpNode(PLUS,$1,$3);}
	| E '-' E	    {$$=getOpNode(MINUS,$1,$3);}
	| E '*' E	    {$$=getOpNode(MUL,$1,$3);}
	| E '/' E	    {$$=getOpNode(DIV,$1,$3);}
	| '(' E ')' 	    {$$=$2;	}
	| NUM		    {$<no>$=getNumNode($<integer>1);}
	| ID		    {$<no>$=getIdNode($<character>1);}
	;
E1:	  E '>' E           {$$=getOpNode(GT,$1,$3);}
	| E '<' E    	    {$$=getOpNode(LT,$1,$3);}
	| E '=''=' E 	    {$$=getOpNode(EQ,$1,$4);}
	| E '<''=' E 	    {$$=getOpNode(LTE,$1,$4);}
	| E '>''=' E 	    {$$=getOpNode(GTE,$1,$4);}
	| E '!''=' E 	    {$$=getOpNode(NE,$1,$4);}
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
    fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
  yyparse();
  return 1;
}     
