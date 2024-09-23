#include <stdio.h>

unsigned long long rise(int a)
{
	unsigned long long kol=2;
	for (int i=1; i<a-1; i++)
		kol=kol*2;
	if (a==1)
		kol=1;
	return (kol);
}

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%llu", rise(a));
	return 0;
}
