
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
		//yylval.integer = atoi(yytext);
		;}//hycris NUM;}
{op}     {	printf("op-%s- ",yytext);  
		;}//hycris *yytext;} 
"("      {printf("(");  
		;}//hycris *yytext;}
")"	 {printf(")");  
		;}//hycris *yytext;}
"{"      {printf("{");  
		;}//hycris *yytext;}
"}"	 {printf("}");  
		;}//hycris *yytext;}		
\[      {//printf("yo");  
		;}//hycris *yytext;}
\]	 {//printf("ye");  
		;}//hycris *yytext;}			
"decl"   {//printf("read decl");  
		;}//hycris DECL;}
"enddecl"   {printf("read enddecl\n");  
		;}//hycris ENDDECL;}		
"read"   {//printf("read");  
		;}//hycris READ;}
"write"  {//printf("write");  
		;}//hycris WRITE;}
"begin"   {//printf("read");  
		;}//hycris BEGINN;}
"break"   {//printf("read");  
		;}//hycris BREAK;}
"continue"   {//printf("read");  
		;}//hycris CONTINUE;}				
"end"  {//printf("write");  
		;}//hycris END;}		
"if"  {//printf("write");  
		;}//hycris IF;}
"endif"  {//printf("write");  
		;}//hycris ENDIF;}	
"while"  {//printf("write");  
		;}//hycris WHILE;}	
"endwhile"  {//printf("write");  
		;}//hycris ENDWHILE;}		
"type"  {//printf("write");  
		;}//hycris TYPE;}	
"endtype"  {//printf("write");  
		;}//hycris ENDTYPE;}	
"class"  {//printf("write");  
		;}//hycris CLASS;}	
"endclass"  {//printf("write");  
		;}//hycris ENDCLASS;}						
"then"  {//printf("write");  
		;}//hycris THEN;}	
"extends"  {//printf("write");  
		;}//hycris EXTEND;}	
"self"  {//printf("write");  
		;}//hycris SELF;}	
"new"  {//printf("write");  
		;}//hycris NEW;}	
"delete"  {//printf("write");  
		;}//hycris DELETE;}					
			
"do"  {//printf("write");  
		;}//hycris DO;}	
							
"else"  {//printf("write");  
		;}//hycris ELSE;}	
"int main()" {
		;}//hycris MAIN;}	
"return"     {printf("return bro lex\n");
		;}//hycris ;}//hycris;}	
"alloc"     {
		;}//hycris ALLOC;}	
"free"     {
		;}//hycris FREE;}	
"null"     {
		;}//hycris NULLL;}						
"AND"        {;}//hycris AND;}							
[a-zA-Z][a-zA-Z0-9]*    {	
			variable=(char*)malloc(sizeof(yytext));
		   	strcpy(variable,yytext);
		   	printf("id %s ",yytext);
		   //	yylval.string=(char*)malloc(sizeof(yytext));
		   //	strcpy(yylval.string,variable);
			;}//hycris ID;}
{string}               {
			//printf("len is %d\n",sizeof(yytext)/sizeof(char));
			variable=(char*)malloc(sizeof(yytext)-2*sizeof(char));
			int k=0;
		   	for(int i=1;i<yyleng-1;i++){
				variable[k]=yytext[i];
				k++;
			}
			//printf("var is %s\n",variable);
		   	//yylval.string=(char*)malloc(sizeof(variable));
		   	//strcpy(yylval.string,variable);
			;}//hycris STRING;
					
%%
 
yywrap()
{

return 0;
}
int main(){
	
	printf("hi\n");	
	yylex();	
}
