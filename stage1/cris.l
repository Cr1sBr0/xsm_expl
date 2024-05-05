
%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
%}
	
number [0-9]+
op     [+|/|*|-] 

%%
 
{number} {   yylval.integer = atoi(yytext);
		return NUM;}
{op}     {     // printf("%c",*yytext);
		return *yytext;} 
"("      {return *yytext;}
")"	 {return *yytext;}
" "      {return yylex();}
"\n"     {return *yytext;}
%%
 
yywrap()
{
	return 0;
}
