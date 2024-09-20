#include <stdio.h>

int main(void)
{
	int sum=0;
	int a;
	scanf ("%d", &a);
	while (a>0)
	{
		sum=sum+a%10;
		a=a/10;
	}
	printf("%d", sum);
	return 0;
}
