#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0, m=0;
    char *str = (char*)malloc(n*sizeof(char));
    char *mas = (char*)malloc(n*sizeof(char));
    int *ch = (int*)malloc(n*sizeof(int));
    while ((c = fgetc(inp)) != EOF)
		if (c==' ')
			ch[m++]=i;
		else
			str[i++]=c;
	fclose(inp);
	int k=0;
	for (int j=0; j<(i/2); j++)
	{
		mas[k]=str[j*2+1];
		mas[k+1]=str[j*2];
		k=k+2;
	}
	if ((i%2)==1)
	{
		mas[k]=str[i-1];
		k++;
	}
	for (int j=0; j<m; j++)
	{
		for (int h=k; h>ch[j]; h--)
			mas[h]=mas[h-1];
		mas[ch[j]]=' ';
		k++;
	}	
	for (int j=0; j<(k); j++)
		fprintf(outp,"%c", mas[j]);
	fclose(outp);
	return 0;
}

