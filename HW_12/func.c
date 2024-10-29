#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void month_f(int mes, char name[]) // среднемесячная температура (для заданного месяца)
{
    float mas[]={0,-100,100,0};
	int counter_all=0;
	int mo=1;
	int i=1;
	FILE *inp = fopen(name, "r");
	while ((feof(inp) == false))
	{
		int SIZE = 100000;
		while((mo==i)&&(mo>=1)&&(mo<=12))
		{
			char row[SIZE];
			fgets(row, SIZE, inp);
			strtok(row,",");
			char *m = strtok(NULL, ",");
			strtok(NULL, ",");
			strtok(NULL, ",");
			strtok(NULL, ",");
			char *t = strtok(NULL, "\n");
			int mm=atoi(m);
			i=mm;
			if(i==0)
				break;
			int tt;
			if ((t!=NULL)&&!(strlen(t)>=4))
				tt=atoi(t);
			else
				if (counter_all>0)
					printf("Uncorrect data in %d\n", counter_all+1);		
			if ((mm==mes)&&(t!=NULL)&&!(strlen(t)>=4))
			{
				counter_all++;
				if (tt>mas[1])
					mas[1]=tt;
				if (tt<mas[2])
					mas[2]=tt; 
				mas[0]=mas[0]+tt;
				mas[3]=counter_all;
			}
		}
		mo++;
	}
	fclose(inp);
    char *m[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
	if (mas[0] != mas[0])
		printf("%s: No correct data\n", m[mes-1]);
	else
		printf("%s:  mean:%.2f  max:%.0f  min:%.0f\n", m[mes-1], mas[0]/mas[3],mas[1],mas[2]);
}

void year_f(char name[]) // чтение из файла .csv и подсчет кол-во данных
{
    float mas[]={0,-100,100,0};
	int counter_all=0;
	int mo=1;
	int i=1;
	FILE *inp = fopen(name, "r");
	while ((feof(inp) == false))
	{
		int SIZE=100000;
		while((mo==i)&&(mo>=1)&&(mo<=12))
		{
			char row[SIZE];
			fgets(row, SIZE, inp);
			strtok(row,",");
			char *m = strtok(NULL, ",");
			strtok(NULL, ",");
			strtok(NULL, ",");
			strtok(NULL, ",");
			char *t = strtok(NULL, "\n");
			int mm=atoi(m);
			i=mm;
			if(i==0)
				break;
			int tt;
			if ((t!=NULL)&&!(strlen(t)>=4))    
				tt=atoi(t);
			if ((t!=NULL)&&!(strlen(t)>=4))
			{
				counter_all++;
				if (tt>mas[1])
					mas[1]=tt;
				if (tt<mas[2])
					mas[2]=tt; 
				mas[0]=mas[0]+tt;
				mas[3]=counter_all;
			}
		}  
		mo++;
	}
	fclose(inp);
	printf("YEAR:  mean:%.2f  max:%.0f  min:%.0f\n", mas[0]/mas[3],mas[1],mas[2]);
}