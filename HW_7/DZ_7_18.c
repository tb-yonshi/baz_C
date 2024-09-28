#include <stdio.h>

int tsifr(int a)
{
	if (a>0)
	{		
		tsifr(a/10);
		printf("%d ",a%10);
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	tsifr(a);
	return 0;
}

