#include <stdio.h>

int rekporyad(int a)
{
	if (a==0)
		printf("%d",0);
	if(a>0)
	{
		rekporyad(a/10);
		printf("%d ", a%10);
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	rekporyad(a);
	return 0;
}
