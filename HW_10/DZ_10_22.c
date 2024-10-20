#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    char gl[8] = {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y'};
    char b1[4] = {'b', 'f', 'p', 'v'};
    char b2[8] = {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'};
    char b3[2] = {'d', 't'};
    char b4[1] = {'l'};
    char b5[2] = {'m', 'n'};
    char b6[2] = {'r'};
    int n=20, i=0;
    char *str = (char*)malloc(n*sizeof(char));
    str[i++]=fgetc(inp);
    while ((c = fgetc(inp)) != EOF)
    {
		int fl=0;
		for (int j=0; j<8; j++)
			if (c==gl[j])
				fl++;
		if (fl!=1)
			str[i++]=c;
	}
	fclose(inp);
	for (int j=0; j<i; j++)
	{
		for (int h=0; h<4; h++)
			if (str[j]==b1[h])
				str[j]='1';
		for (int h=0; h<8; h++)
			if (str[j]==b2[h])
				str[j]='2';
		for (int h=0; h<2; h++)
			if (str[j]==b3[h])
				str[j]='3';
		for (int h=0; h<1; h++)
			if (str[j]==b4[h])
				str[j]='4';
		for (int h=0; h<2; h++)
			if (str[j]==b5[h])
				str[j]='5';
		for (int h=0; h<1; h++)
			if (str[j]==b6[h])
				str[j]='6';
	}
	int kol=0;
	char *mas = (char*)malloc(n*sizeof(char));
	for (int j=0; j<i-1; j++)
	{
		while (str[j]==str[j+1])
			j++;
		mas[kol++]=str[j];
	}
	if (kol<4)
		for(int j=kol; j<4; j++)
			mas[j]='0';
	for (int j=0; j<4; j++)
		fprintf(outp, "%c", mas[j]);
	
	fclose(outp);
	return 0;
}

