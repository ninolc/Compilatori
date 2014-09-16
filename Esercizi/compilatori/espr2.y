%{
#include <stdio.h>
%}

%token NUM PIU PER PAR_AP PAR_CH NEWL

%start Input

%%
Input: /* empty */
     | Input Line
	 ;
	
Line: NEWL
	| Expr {printf("%d\n",$1);}
	;
	
Expr: Expr PIU Term  {$$=$1+$3;} 
	| Term			 {$$=$1;}
	;
	
Term: Term PER Factor {$$=$1*$3;} 
	| Factor	{$$=$1;}
	;
Factor: NUM  {$$=$1;}
	   | PAR_AP Expr PAR_CH {$$=$2;}
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