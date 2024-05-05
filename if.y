%{

#include<stdio.h>
int ans=0;
%}


%token IF


%%

start: IF baki '\n' {   printf(" %d\n",ans);
			return 0;
		     }
	;
baki : '(' IF baki ')' {ans++;}
	| '(' ')'
	;	
	
%%	

yyerror(char const *s)
{
    printf("yyerror %s",s);
}

yylex(){
  char c;
  c=getchar();
  if(c=='i'){
    if(getchar()=='f')
    return IF;
  }
  if(c==' ')
  yylex();
  return c;

}

main(){
yyparse();
return 1;

}
