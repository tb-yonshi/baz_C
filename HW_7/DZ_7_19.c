#include <stdio.h>
int kol=0;

int kolstr(void)
{
	char a;
	scanf("%c",&a);
	if (a=='.')
		return kol;
	if (a=='a')
		kol=kol+1;
	return(kolstr());
}

int main(void)
{
	printf("%d",kolstr());
	return 0;
}

