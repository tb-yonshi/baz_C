#include <stdio.h>

int rekursum(int a)
{
	int sum=0;
	if(a>=1)
		sum=a+rekursum(a-1);
	return(sum);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d",rekursum(a));
	return 0;
}

