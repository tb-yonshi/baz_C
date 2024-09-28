#include <stdio.h>

int sum=0;

int dvoich(int a)
{
	if(a>0)
		dvoich(a/2);
	sum=((a%2)==1) ? sum+1 : sum;
	return (sum);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	dvoich(a);
	printf ("%d", sum);
	return 0;
}
