#include <stdio.h>

int sum=0;

int rekpor(int a)
{
	if(a>0)
		rekpor(a/10);
	sum=sum+a%10;
	return (sum);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d", rekpor(a));
	return 0;
}
