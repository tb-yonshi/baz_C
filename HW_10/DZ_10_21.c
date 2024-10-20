#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0, k=0;
    char *str = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
		str[i++]=c;
	fclose(inp);
	for (int j=0; j<i; j++)
		if (str[j]=='*')
			k++;
	int prov=k;
	int h=0;
	while (prov>0)
	{
		prov=prov-h;
		h++;
	}
	if ((prov==0)&&(k>1))
		for (int j=1; j<=(h-1); j++)
		{
			fprintf(outp, "%*s ", h-j, "*");
			for (int h=0; h<j-1; h++)
				fprintf(outp, "* ");
			fprintf(outp, "\n");
		}
	else
		fprintf(outp, "NO");
	fclose(outp);
	return 0;
}

