#include <stdio.h>

int cell (char mas[])
{
	int kol=0;
	char b[4]="ACEG";
	for (int i=0; i<4; i++)
		if (b[i]==mas[0])
			kol=1;
	if (kol==1)
	{
		if (mas[1]%2==1)
			return 0;
		else
			return 1;
	}
	else
	{
		if (mas[1]%2==1)
			return 1;
		else
			return 0;
	}
	
}

int main(void)
{
	char s[2],c;
	int i=0;
	while ((c=getchar())!='\n')
		s[i++]=c;
	s[i]='\0';
	if (cell(s)==1)
		printf("WHITE");
	else
		printf("BLACK");
	return 0;
}



