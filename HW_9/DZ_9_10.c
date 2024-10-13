#include <stdio.h>

void kol_bukv(char s[], char rez[], int size)
{
	char b=s[0];
	int kol=0;
	for (int i=0; i<size; i++)
		if (s[i]==b)
			kol++;
		else
		{
			printf("%c",b);
			printf("%d",kol);
			b=s[i];
			kol=1;
		}
	printf("%c",b);
	printf("%d",kol);
}

int main(void)
{
	char s[1000],c,rez[1000];
	int i=0;
	while ((c=getchar())!='.')
		s[i++]=c;
	kol_bukv(s,rez,i);
	return 0;
}


