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
		while ((str[j]==' ')&&(str[j+1]==' '))
			j=j+1;
		mas[k]=str[j];
		k++;
	}
	int fl=0;
	if (mas[0]==' ')
		fl=1;
	for (int j=0+fl; j<k; j++)
		fprintf(outp, "%c", mas[j]);
	fclose(outp);
	return 0;
}

