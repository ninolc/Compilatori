%{
#include <stdio.h>
%}

%token NUM PIU MENO PER DIVISO PAR_AP PAR_CH

%start Expr
%error-verbose

%%
Expr: Expr PIU Term
	| Expr MENO Term
	| Term

Term: Term PER Factor | Term DIVISO Factor | Factor

Factor: NUM | PAR_AP Expr PAR_CH
%%

int main()
{
	return (yyparse());
}

yyerror (char *s)
{
	printf("Errore Sintattico %s\n",s);
	}