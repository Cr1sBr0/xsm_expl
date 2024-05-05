%{

#include<stdio.h>
#include<stdlib.h>
int pos=0;            
                      //AUXILLARY DECLARATIONS
%}


%token DIGIT                                //YACC DECLARATIONS
%left '+' '-'
%left '*'                              
%%  //SIGNIFIES END OF DECLARATIONS SECTION

start: expr '\n'  {return 0;}
     ;
     
expr:  expr '+' expr {printf("+ ");}
     | expr '-' expr {printf("- ");} 
     | expr '*' expr {printf("* ");}    
     | '(' expr ')'
     | DIGIT         {printf("%d ",$1);}
     ; 
     
     
%%     //SIGNIFIES END OF RULES SECTION


yyerror(char const *s)
{
    printf("yyerror %s",s);
}

yylex(){
   char c;
   c = getchar();
   if(c>='0'&&c<='9'){
   yylval=c-'0';
   return DIGIT;
   }
   else if(c == ' '){
        yylex();         /*This is to ignore whitespaces in the input*/
    }
   return c;

}


main(){

 yyparse();
 return 1;

}
