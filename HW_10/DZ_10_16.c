#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0, k=0;
    char *str = (char*)malloc(n*sizeof(char));
    char *mas = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
		str[i++]=c;
	fclose(inp);
	for (int j=0; j<i; j++)
	{
		if ((str[j]=='L')&&(str[j+1]=='i')&&(str[j+2]=='n')&&(str[j+3]=='g'))
		{
			mas[k]='C';
			mas[k+1]='a';
			mas[k+2]='o';
			k=k+3;
			j=j+3;	
		}
		else
		{
			mas[k]=str[j];
			k++;
		}
	}	
	for(int j=0; j<k; j++)
		fprintf(outp, "%c", mas[j]);
	
	fclose(outp);
	return 0;
}
