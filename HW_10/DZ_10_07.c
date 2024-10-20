#include <stdio.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int mal=0, bol=0;
    while ((c = fgetc(inp)) != EOF)
	{
		if ((c>='a')&&(c<='z'))
			mal++;
		if ((c>='A')&&(c<='Z'))
			bol++;
	}
	fclose(inp);
	fprintf(outp, "%d %d", mal, bol);
	fclose(outp);
	return 0;
}

