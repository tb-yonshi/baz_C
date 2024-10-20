#include <stdio.h>
#include <stdlib.h>

void sort(int mas[], int k)
{
	for (int i=0; i<k; i++)
		for (int j=0; j<k-1; j++)
			if (mas[j]>mas[j+1])
			{
				int zam=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=zam;
			}
}

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c;
    int n=1000, i=0, k=0;
	int *mas;
	mas=(int*)malloc(n*sizeof(int));
    char *str = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
		if (((c>='0')&&(c<='9'))||((c==' ')&&(str[i-1]!=' ')))
			str[i++]=c;
	str[i]=' ';
	fclose(inp);
	for (int j=1; j<i; j++)
	{
		int ch=0;
			while ((str[j]>='0')&&(str[j]<='9'))
			{
				ch=(ch+(str[j]-'0'))*10;
				j++;
			}
		ch=ch/10;
		mas[k++]=ch;
	}
	
	sort(mas, k);
	
	for (int j=0; j<k; j++)
		fprintf(outp, "%d ", mas[j]);
	fclose(outp);
	return 0;
}

