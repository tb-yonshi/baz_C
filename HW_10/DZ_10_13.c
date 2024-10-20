#include <stdio.h>
#include <stdlib.h>

void change(char str[], int k)
{
	str[k]='.';
	str[k+1]='h';
	str[k+2]='t';
	str[k+3]='m';
	str[k+4]='l';
}

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0;
    char *str = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
		str[i++]=c;
	int k=i-1;
	int m=i-1;
	while (str[m]!='/')
		m--;	
	while(str[k]!='.')
		k--;
	if (m<k)
	{
		change(str,k);
		i=k+5;
	}
	else
	{
		change(str,i);
		i=i+5;
	}
	for (int j=0; j<i; j++)
		fprintf(outp,"%c", str[j]);
	fclose(inp);
	fclose(outp);
	return 0;
}
