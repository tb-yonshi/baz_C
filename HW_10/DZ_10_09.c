#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0, l=0;
    char *str = (char*)malloc(n*sizeof(char));
    char *mas = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
		if (c!=' ')
			str[i++]=c;
	fclose(inp);
	for (int j=0; j<i; j++)
	{
		int kol=0;
		for (int k=0; k<j; k++)
			if (str[j]==str[k])
				kol++;
		if (kol==0)
			mas[l++]=str[j];
	}
	
	for (int j=0; j<l; j++)
		fprintf(outp, "%c", mas[j]);
	fclose(outp);
	return 0;
}

