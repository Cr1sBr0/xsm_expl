%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "e1.h"
	#include "e1.c"
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
%type <no> program Slist Stmt InputStmt OutputStmt AsgStmt E IfStmt WhileStmt ContStmt BrkStmt
%type <integer> NUM
%type <character> ID
%token NUM BEGINN END READ WRITE ID IF ELSE THEN ENDIF WHILE ENDWHILE DO BREAK CONTINUE
%left '-' '+' 
%left '*' '/'
%%


program: BEGINN Slist END {   // printf("yo\n");
				
				initialize(fp,l);
				printree($2);

				//evaltree($2,l);
				codegen($2,fp,l);
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
	|BrkStmt           {$$ = $1;}
    	|ContStmt          {$$ = $1;}
	;

WhileStmt:  WHILE '('E')' DO Slist ENDWHILE';'	{ typecheck($3->type, 2, 'e');
						  $$=CreateTree(7,$3,NULL,$6);}
	  ;	
InputStmt: READ'('ID')'';'	    {$$=getrNode(getIdNode($3));}
	 ;
OutputStmt: WRITE'('E')'';'     {$$=getwNode($3);}
	  ;
IfStmt:     IF '('E')' THEN Slist ELSE Slist ENDIF ';'{typecheck($3->type, 2, 'e'); 
							$$=CreateTree(6,$3,$6,$8);}
	   |IF '('E')' THEN Slist ENDIF';'{    typecheck($3->type, 2, 'e');
	   					$$=CreateTree(6,$3,$6,NULL);}
	    ;	  

AsgStmt   : ID'='E';'       {$$=getOpNode(3,HI,getIdNode($1),$3);}

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
	| '(' E ')' 	    {$$=$2;	}
	| NUM		    {$<no>$=getNumNode($<integer>1);}
	| ID		    {$<no>$=getIdNode($<character>1);}
	|  E '>' E           {typecheck($1->type, $3->type, 'b');
				$$=getOpNode(2,GT,$1,$3);}
	| E '<' E    	    {typecheck($1->type, $3->type, 'b');
				$$=getOpNode(2,LT,$1,$3);}
	| E '=''=' E 	    {typecheck($1->type, $4->type, 'b');
				$$=getOpNode(2,EQ,$1,$4);}
	| E '<''=' E 	    {typecheck($1->type, $4->type, 'b');
				$$=getOpNode(2,LTE,$1,$4);}
	| E '>''=' E 	    {typecheck($1->type, $4->type, 'b');
				$$=getOpNode(2,GTE,$1,$4);}
	| E '!''=' E 	    {typecheck($1->type, $4->type, 'b');
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
