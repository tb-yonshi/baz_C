#include "functions.h"

int main(void)
{
	int k=100;
	char in[k];
	printf("report: ");
	gets(in);
	if (in[1]=='h')
	{
		printf("Temp statistic application. Please enter key:\n");
		printf("-h for help\n");
		printf("-f file name for load this file\n");
		printf("-m for xx statistic for xx month\n");
	}
	else
	{
		char *name=in;
		name=name+3;
		if (name[strlen(name)-1]=='v')
		{
			for (int r=1; r<=12; r++)
			month_f(r,name);
			printf("----------------------------------------\n");
			year_f(name);
		}

		if ((name[strlen(in)-1]<='9')&&(in[strlen(in)-1]>='0'))
		{
			int a=0;
			while(name[a]!=' ')
				a++;
			char *name_f = name;
			name_f[a]='\0';
			name = name+a+1+3;
			int mes=atoi(name);
			month_f(mes,name_f);
		}
	}
	return 0;
}
