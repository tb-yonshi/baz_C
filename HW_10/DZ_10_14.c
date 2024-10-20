#include <stdio.h>
#include <stdlib.h>

void change(char str[])
{
	str[0]='H';
	str[1]='e';
	str[2]='l';
	str[3]='l';
	str[4]='o';
	str[5]=',';
	str[6]=' ';
}

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=100, i=7, k=0;
    char *str = (char*)malloc(n*sizeof(char));
    change(str);
    while (fgetc(inp)!= ' ')
		k++;
    while ((c = fgetc(inp)) != EOF)
		str[i++]=c;
	
	for (int j=0; j<i; j++)
		fprintf(outp, "%c", str[j]);
	fclose(inp);
	fclose(outp);
	return 0;
}
