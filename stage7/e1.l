
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	char * variable;
	
%}
	
number [0-9]+
op     [+|/|*|%|>|<|!|;|,|.|=|-]
string \"(\\.|[^\\\"])*\"
%%
 
{number} {	printf(" num %s",yytext);   
		yylval.integer = atoi(yytext);
		return NUM;}
{op}     {	printf("op-%s- ",yytext);  
		return *yytext;} 
"("      {//printf("(");  
		return *yytext;}
")"	 {//printf(")");  
		return *yytext;}
"{"      {printf("{");  
		return *yytext;}
"}"	 {printf("}");  
		return *yytext;}		
\[      {//printf("yo");  
		return *yytext;}
\]	 {//printf("ye");  
		return *yytext;}			
"decl"   {//printf("read decl");  
		return DECL;}
"enddecl"   {printf("read enddecl\n");  
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
"class"  {//printf("write");  
		return CLASS;}	
"endclass"  {//printf("write");  
		return ENDCLASS;}						
"then"  {//printf("write");  
		return THEN;}	
"extends"  {//printf("write");  
		return EXTEND;}	
"self"  {//printf("write");  
		return SELF;}	
"new"  {//printf("write");  
		return NEW;}	
"delete"  {//printf("write");  
		return DELETE;}					
			
"do"  {//printf("write");  
		return DO;}	
							
"else"  {//printf("write");  
		return ELSE;}	
"int main()" {
		return MAIN;}	
"return"     {printf("return bro lex\n");
		return RETURN;}	
"alloc"     {
		return ALLOC;}	
"free"     {
		return FREE;}	
"null"     {
		return NULLL;}						
"AND"        {return AND;}							
[a-z_A-Z][a-z_A-Z0-9]*    {	
			variable=(char*)malloc(sizeof(yytext));
		   	strcpy(variable,yytext);
		   	printf("id %s ",yytext);
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
