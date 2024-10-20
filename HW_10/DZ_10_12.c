#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0;
    char *str = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
    {
		str[i++]=c;
		if (c==' ')
		{
			for (int j=0; j<i; j++)
				fprintf(outp, "%c", str[j]);
			fprintf(outp, "\n");
			i=0;
			str = (char*)malloc(n*sizeof(char));
		}
	}
	for (int j=0; j<i; j++)
		fprintf(outp, "%c", str[j]);
	fclose(inp);
	fclose(outp);
	return 0;
}

