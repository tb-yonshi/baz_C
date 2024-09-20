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
	if (sum==10)
		printf("YES");
	else
		printf("NO");
	return 0;
}
