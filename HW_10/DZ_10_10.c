#include <stdio.h>
#include <stdlib.h>

int i=0, l=0;

void obrab(char str[], char mas[])
{
	l=i;
	for (int j=0; j<l; j++)
		mas[j]=str[j];
	i=0;
}

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000;
    char *str = (char*)malloc(n*sizeof(char));
    char *mas = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
    {
		str[i++]=c;
		if (c==' ')
		{
			if (l<i)
				obrab(str, mas);
			str = (char*)malloc(n*sizeof(char));
		}
	}
	if (l<i)
		obrab(str,mas);
	fclose(inp);
	for (int j=0; j<l; j++)
		fprintf(outp,"%c", mas[j]);
	fclose(outp);
	return 0;
}

