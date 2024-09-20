#include <stdio.h>

int main(void)
{
	int a,b,ch1=0,ch2=1;
	scanf("%d",&a);
	b=ch2;
	for (int i=1; i<=a; i++)
	{
		b=ch1+ch2;
		printf("%d ",ch2);
		ch1=ch2;
		ch2=b;
	}
	return 0;
}

