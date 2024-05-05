%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "t2.h"
	#include "t2.c"
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
%type <no> program expr Slist Stmt InputStmt OutputStmt AsgStmt E 
%type <integer> NUM
%type <character> ID
%token NUM BEGINN END READ WRITE ID
%left '-' '+' 
%left '*' '/'

%%


program: BEGINN Slist END {    // printf("yo\n");
				//printree($2);
				initialize(fp,l);
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
	;
InputStmt: READ'('ID')'';'	    {$$=getrNode(getIdNode($3));}
	 ;
OutputStmt: WRITE'('E')'';'     {$$=getwNode($3);}
	  ;
AsgStmt   : ID'='E';'       {$$=getOpNode('=',getIdNode($1),$3);}	
	  ;
E	: expr 		    {$$=$1;}
expr	: expr '+' expr	    {$$=getOpNode('+',$1,$3);}
	| expr '-' expr	    {$$=getOpNode('-',$1,$3);}
	| expr '*' expr	    {$$=getOpNode('*',$1,$3);}
	| expr '/' expr	    {$$=getOpNode('/',$1,$3);}
	| '(' expr ')' 	    {$$=$2;	}
	| NUM		    {$<no>$=getNumNode($<integer>1);}
	| ID		    {$<no>$=getIdNode($<character>1);}
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
