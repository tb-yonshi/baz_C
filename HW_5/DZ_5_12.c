#include <stdio.h>

int main(void)
{
	int a,min,max;
	scanf("%d",&a);
	min=a%10;
	max=a%10;
	while (a>0)
	{
		min = (min>(a%10)) ? (a%10) : min;
		max = (max<(a%10)) ? (a%10) : max;
		a=a/10;
	}	
	printf("%d %d",min,max);
	return 0;
}

