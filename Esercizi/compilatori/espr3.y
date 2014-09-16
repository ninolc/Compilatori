%{
#include <stdio.h>
%}

%token NUM PIU PER NEWL

%start Input

%%
Input: /* empty */
     | Input Line
	 ;
	
Line: NEWL
	| Expr {printf("%d\n",$1);}
	;
	
Expr: NUM {$$=$1;}
	| Expr Expr PIU  {$$=$1+$2;}
	| Expr Expr PER  {$$=$1*$2;}
	;
%%

int main()
{
	return (yyparse());
}

yyerror (char *s)
{
	printf("Errore Sintattico %s\n",s);
	}