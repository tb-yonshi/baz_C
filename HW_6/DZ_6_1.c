#include <stdio.h>

int modul(int a)
{
	return (a = a<0 ? (a*(-1)) : a);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d", modul(a));
	return 0;
}
