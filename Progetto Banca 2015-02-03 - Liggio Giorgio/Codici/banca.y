%{
	#define MAX 50
	#include <stdio.h>
	#include <string.h>
	int c=0, k=0, tmp_sum=0, tmp_sub=0;
	int sum_list[MAX] = {0}, sub_list[MAX] = {0};
	char *input_date = NULL, *cf_list[MAX] = {NULL}, *ctm_names[MAX] = {NULL}, *ctm_cfs[MAX] = {NULL};
	
	int find_name_index(char *cf_id)
	{
		int i,flag=0;
		for (i=0;i<k;i++)
		{
			if (strcmp(ctm_cfs[i],cf_id)==0)
				return i;
		}
		return -1;
	}
	
%}
%union
{
	char *string;
	int	value;
}

%start Input
%token DATE SEP1 SEP2 SEP_CM DAY
%token <value> NUMVAL
%token <string> DATESTR CF CTM_NAME
%error-verbose

%%
Input:		Date SEP1 Sect1 SEP2 Sect2					{
															int i, j, temp;
															char *string;
															for(i=0;i<c;i++)
																for(j=0;j<c;j++)
																{
																	if (strcmp(cf_list[i],cf_list[j])==-1)
																	{
																		temp = sum_list[i];
																		sum_list[i] = sum_list[j];
																		sum_list[j] = temp;
																		
																		temp = sub_list[i];
																		sub_list[i] = sub_list[j];
																		sub_list[j] = temp;
																		
																		string = cf_list[i];
																		cf_list[i] = cf_list[j];
																		cf_list[j] = string;
																	}
																}
														}
	;
	Date:		DATE DATESTR							{input_date=$2;}
		;
	Sect1:		/*no transactions*/
		|		CtmList							
		;
		CtmList:	CtmMovs
			|		CtmList CtmMovs
			;
			CtmMovs:	CF MovList SEP_CM				{
															int flag = 0;
															if (tmp_sum>=8000)
															{
																cf_list[c] = $1;
																sum_list[c] = tmp_sum;
																flag = 1;
															}
															if (tmp_sub<=-8000)
															{
																cf_list[c] = $1;
																sub_list[c] = -tmp_sub;
																flag = 1;
															}
															tmp_sum = 0; tmp_sub = 0;
															if (flag) c++;
														}
				;
				MovList:	Mov
					|		MovList Mov
					;
					Mov:		DAY '+' NUMVAL ';'		{tmp_sum+=$3;}
						|		DAY '-' NUMVAL ';'		{tmp_sub-=$3;}
						;
	Sect2:		Customer
		|		Sect2 Customer
		;
		Customer:	CTM_NAME ',' CF ';'					{
															ctm_names[k] = $1;
															ctm_cfs[k] = $3;
															k++;
														}
			;
%%
int main()
{
	int i,j,nd=0;
	if (yyparse()==0)
	{
		printf("\n\t%s\n",input_date);
		if (c>0)
		{
			int id;
			printf("\tSi segnala:\n\n");
			for (i=0;i<c;i++)
			{
				id = find_name_index(cf_list[i]);
				if (id!=-1)
				{
					printf("\t> %s, %s: ",ctm_names[id],cf_list[i]);
					if (sum_list[i]>0)
						printf("+ %d",sum_list[i]);
					if ((sum_list[i]>0)&&(sub_list[i]>0))
						printf(", ");
					if (sub_list[i]>0)
						printf("- %d",sub_list[i]);
					printf("\n");
				}
				else
				{
					nd++;
				}
			}
			if (nd>0)
				printf("\n\tClienti sospetti non identificati: %d\n",nd);
		}
		else
			printf("\tNessun movimento sospetto.\n");
	}
	return 0;
}

yyerror(char* s)
{
	printf("Errore sintattico\n");
}
