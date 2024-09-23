#include <stdio.h>

int sred_arif(int a, int b)
{
	return((a+b)/2);
}

int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", sred_arif(a,b));
	return 0;
}

