#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=100;
    char *str1 = (char*)malloc(n*sizeof(char));
    char *str2 = (char*)malloc(n*sizeof(char));
    int i1=0, i2=0;
    while ((c = fgetc(inp)) != ' ')
		str1[i1++]=c;
    while ((c = fgetc(inp)) != EOF)
		str2[i2++]=c;
	fclose(inp);
	for (int k=0; k<i1; k++)
	{
		int kol=0;
		for (int g=0; g<i2; g++)
			if (str1[k]==str2[g])
				kol++;
		if (kol>0)
			fprintf(outp, "%c ", str1[k]);
	}	
	fclose(outp);
	return 0;
}

