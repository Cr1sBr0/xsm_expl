
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "help.c"
	#include "help.h"
	FILE* fp2;
	int pass;
	int line=2056;
	//void showlist();
%}
	

string \"(\\.|[^\\\"])*\"

%%
{string} {
			if(pass){
			fprintf(fp2,"%s",yytext);
			}
		}
		
R[0-9]+        {
			if(pass)
			fprintf(fp2,"R%d",atoi(yytext+1));
		}
A[0-9]+        {
			if(pass){
			//showList();
			printf("our thing %d\n",atoi(yytext+1));
			fprintf(fp2,"%d ",getLine(atoi(yytext+1)));
			}
		}		
C[0-9]+":""\n" {	     
			if(!pass){
			printf("label  %d %d\n",atoi(yytext+1),line);  
			addList(line,atoi(yytext+1));
			}
			//line=line-2;
		
	   }
	   
F[0-9]+        {
			if(pass){
			//showList();
			printf("our thing %d\n",atoi(yytext+1));
			fprintf(fp2,"%d ",getLine2(atoi(yytext+1)));
			}
		}		
F[0-9]+":""\n" {	     
			if(!pass){
			printf("label  %d %d\n",atoi(yytext+1),line);  
			addList2(line,atoi(yytext+1));
			}
			//line=line-2;
		
	   }
	   	   
[A-Z]+   {		if(pass){
			fprintf(fp2,"%s ",yytext);
			}
		  }	   	
[0-9]+	{
		if(pass){

			fprintf(fp2,"%d",atoi(yytext));
			
		}
	}	
"\n"    {	if(pass)
		fprintf(fp2,"\n");
		line=line+2;}	
[,]  {
			if(pass)
			fprintf(fp2,"%c",*yytext);
		}	
"-"  {
			if(pass)
			fprintf(fp2,"%c",*yytext);
		}		
\[  {
			if(pass)
			fprintf(fp2,"%c",*yytext);
		}
\]  {
			if(pass)
			fprintf(fp2,"%c",*yytext);
		}
								  
[\"]  {
			if(pass)
			fprintf(fp2,"%c",*yytext);
		}
		
%%

int yywrap(){
	
	if(pass==0){
	FILE* fp=fopen("a.xsm","r");
	yyin=fp;
        pass=1;
	fp2=fopen("b.xsm","w");
	fprintf(fp2, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	showList();
	return 0;
	}
	return 1;
	
}

int main(){
	
	pass=0;
	FILE* fp=fopen("a.xsm","r");
	

	yyin=fp;

	yylex();
	
}
