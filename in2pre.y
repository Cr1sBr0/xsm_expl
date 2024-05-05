%{

#include<stdio.h>
#include<stdlib.h>
char * con(char* a,char *b,char *c);
                      //AUXILLARY DECLARATIONS
%}


%union
{
	char *cris;
	int integer;

};


%token DIGIT  
%type <cris> expr

                              //YACC DECLARATIONS
%left '+' '-'
%left '*'                              
%%  //SIGNIFIES END OF DECLARATIONS SECTION

start: expr '\n'  {  printf("%s",$1);
			return 0;}
     ;
     
expr:  expr '+' expr {$$=con("+",$1,$3);}    
     | expr '-' expr {$$=con("-",$1,$3);}    
     | expr '*' expr {$$=con("*",$1,$3);}    
     | '(' expr ')'  {$$=$<cris>2;}
     | DIGIT         {$$=$<cris>1;}
     ; 
     
     
%%     //SIGNIFIES END OF RULES SECTION

char * con(char* a,char *b,char *c){
    char *res = (char *)malloc(100);
   int p=0,k=0;
   while(a[k]!='\0'){
     res[p]=a[k];
     p++;
     k++;
   }
   k=0;
   while(b[k]!='\0'){
     res[p]=b[k];
     p++;
     k++;
   }
   k=0;
   while(c[k]!='\0'){
     res[p]=c[k];
     p++;
     k++;
   }
   res[p]='\0';
   //printf("%s",res);
   return res;

}
yyerror(char const *s)
{
    printf("yyerror %s",s);
}

yylex(){
   char c;
   c = getchar();
   
   if(c>='0'&&c<='9'){
   char *arr=(char *)malloc(2);
   arr[0]=c;
   arr[1]='\0';
   yylval.cris=arr;
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
