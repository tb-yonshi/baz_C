#include <stdio.h>

int main(void)
{
	int a;
	int sum=0;
	scanf ("%d", &a);
	a = a>0 ? a :(a*(-1));
	while (a>9)
	{
		a=a/10;
		sum=sum+1;
	}
	sum=sum+1;	
	if (sum==3)
		printf("YES");
	else
		printf("NO");
	return 0;
}

