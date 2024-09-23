#include <stdio.h>

int sumpr(int a)
{
	int sum=0, pr=1;
	while (a>0)
	{
		sum=sum+a%10;
		pr=pr*(a%10);
		a=a/10;
	}
	return (sum==pr);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	sumpr(a)? printf("YES"):printf("NO");
	return 0;
}

