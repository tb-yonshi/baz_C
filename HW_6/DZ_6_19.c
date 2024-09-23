#include <stdio.h>

int chislo(char a)
{
	if ((a>='0')&&(a<='9'))
		return (a-'0');
	return 0;
}

int main(void)
{
	char a=' ';
	int kol=0;
	while (a!='.')
	{
		scanf("%c",&a);
		if (chislo(a)!=0)
			kol=kol+chislo(a);			
	}
	printf("%d",kol);
	return 0;
}
