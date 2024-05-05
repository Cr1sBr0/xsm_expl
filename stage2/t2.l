
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	
	
%}
	
number [0-9]+
op     [+|/|*|-|=|;] 
%%
 
{number} {	//printf("num");   
		yylval.integer = atoi(yytext);
		return NUM;}
{op}     {	//printf("op");  
		return *yytext;} 
"("      {//printf("(");  
		return *yytext;}
")"	 {//printf(")");  
		return *yytext;}
" "      {//printf("num");                   //doubt
		return yylex();}
"begin"  {//printf("begin");  
		return BEGINN;}
"end"    {//printf("end");  
		return END;}
"read"   {//printf("read");  
		return READ;}
"write"  {//printf("write");  
		return WRITE;}
[a-z]    {//printf("id");    
		yylval.character=*yytext;
		return ID;}
%%
 
yywrap()
{
	
	return 0;
}
