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
		if ((str[j]=='C')&&(str[j+1]=='a')&&(str[j+2]=='o'))
		{
			mas[k]='L';
			mas[k+1]='i';
			mas[k+2]='n';
			mas[k+3]='g';
			k=k+4;
			j=j+2;	
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
