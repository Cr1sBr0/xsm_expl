
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	char * variable;
	
%}
	
number [0-9]+
op     [+|/|*|=|%|>|<|!|;|,|.|-]
string \"(\\.|[^\\\"])*\"
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
"{"      {//printf("(");  
		return *yytext;}
"}"	 {//printf(")");  
		return *yytext;}		
\[      {//printf("yo");  
		return *yytext;}
\]	 {//printf("ye");  
		return *yytext;}		
" "      {//printf("num");                   //doubt
		return yylex();}
"int"   {//printf("read");  
		return INT;}
"str"   {//printf("read");  
		return STR;}		
"decl"   {//printf("read decl");  
		return DECL;}
"enddecl"   {//printf("read enddecl");  
		return ENDDECL;}		
"read"   {//printf("read");  
		return READ;}
"write"  {//printf("write");  
		return WRITE;}
"begin"   {//printf("read");  
		return BEGINN;}
"break"   {//printf("read");  
		return BREAK;}
"continue"   {//printf("read");  
		return CONTINUE;}				
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
"type"  {//printf("write");  
		return TYPE;}	
"endtype"  {//printf("write");  
		return ENDTYPE;}					
"then"  {//printf("write");  
		return THEN;}	
"do"  {//printf("write");  
		return DO;}						
"else"  {//printf("write");  
		return ELSE;}	
"int main()" {
		return MAIN;}	
"return"     {
		return RETURN;}	
"alloc"     {
		return ALLOC;}	
"free"     {
		return FREE;}	
						
"AND"        {return AND;}							
[a-zA-Z][a-zA-Z0-9]*    {	
			variable=(char*)malloc(sizeof(yytext));
		   	strcpy(variable,yytext);
		   	//printf("id");
		   	yylval.string=(char*)malloc(sizeof(yytext));
		   	strcpy(yylval.string,variable);
			return ID;}
{string}               {
			//printf("len is %d\n",sizeof(yytext)/sizeof(char));
			variable=(char*)malloc(sizeof(yytext)-2*sizeof(char));
			int k=0;
		   	for(int i=1;i<yyleng-1;i++){
				variable[k]=yytext[i];
				k++;
			}
			//printf("var is %s\n",variable);
		   	yylval.string=(char*)malloc(sizeof(variable));
		   	strcpy(yylval.string,variable);
			return STRING;
			}			
%%
 
yywrap()
{
	
	return 0;
}
