#include <stdio.h>
#include <stdlib.h>

int palinom (char str[], int i)
{
	int n=1000, k=0;
	int *mas = (int*)malloc(n*sizeof(int));
	for (int j=0; j<i; j++)
	{
		int kol=0;
		int b=str[j];
		if (b!=' ')
		{
			for (int h=j; h<i; h++)
				if (b==str[h])
				{
					kol++;
					str[h]=' ';
				}
			mas[k++]=kol;
		}
	}
	int kol=0;
	for (int j=0; j<k; j++)
		if ((mas[j]%2)==0)
			kol++;
	if (kol>1)
		return 1;
	else
		return 0;
}

int main(void)
{
	FILE *inp = fopen("input.txt", "r");
    FILE *outp = fopen("output.txt", "w");
    char c; 
    int n=1000, i=0;
    char *str = (char*)malloc(n*sizeof(char));
    while ((c = fgetc(inp)) != EOF)
    {
		if (c!=' ')
			str[i++]=c;
	}
	fclose(inp);
	if (palinom (str,i)==1)
		fprintf(outp, "YES");
	else
		fprintf(outp, "NO");
	fclose(outp);
	return 0;
}

