#include <stdio.h>

int rekpor(int a)
{
	if(a>0)
	{
		printf("%d ", a%10);
		rekpor(a/10);
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	if (a==0)
		printf("%d",0);
	else
		rekpor(a);
	return 0;
}

