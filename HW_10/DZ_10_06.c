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
		str[i++]=c;
	fclose(inp);
	int kol=0;
	for (int j=0; j<(i/2); j++)
		if (str[j]!=str[i-1-j])
			kol++;
	if (kol>0)
		fprintf(outp, "NO");
	else
		fprintf(outp, "YES");
	fclose(outp);
	return 0;
}
