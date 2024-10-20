#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c;
    int n=1000, i=0;
    char *str1 = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
		str1[i++]=c;
	fclose(inp);
	for (int j=0; j<i; j++)
		if ((str1[j]=='a')||(str1[j]=='A')||(str1[j]=='b')||(str1[j]=='B'))
		{
			if (str1[j]=='a')
				str1[j]='b';
			else
				if (str1[j]=='A')
					str1[j]='B';
				else
					str1[j] = (str1[j]=='b') ? 'a' : 'A';
		}
	for (int j=0; j<i; j++)
		fprintf(outp,"%c", str1[j]);
	fclose(outp);
	return 0;
}

