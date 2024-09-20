#include <stdio.h>

int main(void)
{
	int a=1;
	int kol=0;	
	while (a!=0)
	{
		scanf("%d",&a);
		kol=kol+1;
	}
	printf("%d",kol-1);
	return 0;
}

