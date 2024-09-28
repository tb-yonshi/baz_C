#include <stdio.h>

int rekurs(int a)
{
	if(a>=1)
	{
		printf ("%d ", a);
		rekurs(a-1);
	}		
}

int main(void)
{
	int a;
	scanf("%d",&a);
	rekurs(a);
	return 0;
}
