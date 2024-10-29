#include "functions.h"

int main(int argc, char *argv[])
{
	int mes=0;
	char name_f[30];
	char* s=argv[1];
	if ((s[0]=='-')&&(s[1]!='y'))
	{
		for (int i=0; i<argc; i++)
		{
			char * str = argv[i];
			if (str[0]=='-')
			{
				if (str[1]=='h')
				{
        			printf("Temp statistic application. Please enter key:\n");
        			printf("-h for help\n");
        			printf("-f file name for load this file\n");
       				printf("-m for xx statistic for xx month\n");
				}
				if ((str[1]=='f')&&(argc<4))
				{
					sscanf(argv[i+1], "%s", name_f);
					for (int r=1; r<=12; r++)
            			month_f(r, name_f);
					year_f(name_f);
				}
				if (str[1]=='m')
				{
					sscanf(argv[i-1], "%s", name_f);
					sscanf(argv[i+1], "%d", &mes);
					month_f(mes,name_f);
				}
				
			}    	
		}		
	}
	if (s[1]=='y')
	{
		int rez = 0;
		opterr = 0;
		FILE *inp = fopen("temperature_small.csv", "a+");
		fprintf(inp, "\n");
		while ((rez = getopt(argc,argv,"y:m:d:h:n:g:")) != -1)
		{
			switch (rez)
			{
				case 'y': fprintf(inp, "%s,",optarg); break;
				case 'm': fprintf(inp, "%s,",optarg); break;
				case 'd': fprintf(inp, " %s ",optarg); break;
				case 'h': fprintf(inp, "%s,",optarg); break;
				case 'n': fprintf(inp, "%s,",optarg); break;
				case 'g': fprintf(inp, "%s",optarg); break;
			};
		};
		fclose(inp);
		printf("Data entered correct\n");
	}
	return 0;
}