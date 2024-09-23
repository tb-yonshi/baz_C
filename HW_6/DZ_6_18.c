#include <stdio.h>

int chislo(char a)
{
	int rez=0;
	if ((a>='0')&&(a<='9'))
		rez=1;
	return (rez);
}

int main(void)
{
	char a=' ';
	int kol=0;
	while (a!='.')
	{
		scanf("%c",&a);
		if (chislo(a)==1)
			kol=kol+1;			
	}
	printf("%d",kol);
	return 0;
}
