#include <stdio.h>

int dvoich(int a)
{
	if (a==0)
		printf("%d",0);
	if(a>0)
	{
		dvoich(a/2);
		printf("%d", a%2);
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	dvoich(a);

	return 0;
}

