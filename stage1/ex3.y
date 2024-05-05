%{

	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "ex3.h"
	#include "ex3.c"
	int yylex(void);
	FILE *fp;
	int l[20];

%}

%union{
	struct tNode *no;
	int integer;
	
}
%type <no> start expr 
%type <integer> NUM
%token NUM RELOP
%left '-' '+' 
%left '*' '/'

%%


start: expr '\n' {    //printf("hi");
		      printtree($1);
		      initialize(l);
		      createcode($1,fp,l);
			return;}
	;
expr : '+' expr expr {//printf("yo1\n");
     			$$=getNode('+',$2,$3);
     			}
     |  '-' expr expr {//printf("yo2\n");
     			$$=getNode('-',$2,$3);
     			}
     |  '/' expr expr {//printf("yo3\n");
     			$$=getNode('/',$2,$3);
     			}
     |  '*' expr expr{//printf("yo4\n");
     			$$=getNode('*',$2,$3);
     			}		
     | NUM           {  //printf("yo5\n");
     			$<no>$=getLeafNode($<integer>1);						
   			}
     ;
     
%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}
int main()
{
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
