
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	
	
%}
	
number [0-9]+
op     [+|/|*|=|>|<|!|;|-]
 
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
"read"   {//printf("read");  
		return READ;}
"write"  {//printf("write");  
		return WRITE;}
"begin"   {//printf("read");  
		return BEGINN;}
"end"  {//printf("write");  
		return END;}		
"if"  {//printf("write");  
		return IF;}
"endif"  {//printf("write");  
		return ENDIF;}	
"while"  {//printf("write");  
		return WHILE;}	
"endwhile"  {//printf("write");  
		return ENDWHILE;}					
"then"  {//printf("write");  
		return THEN;}	
"do"  {//printf("write");  
		return DO;}						
"else"  {//printf("write");  
		return ELSE;}				
[a-z]    {//printf("id");    
		yylval.character=*yytext;
		return ID;}
%%
 
yywrap()
{
	
	return 0;
}
