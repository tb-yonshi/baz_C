#include <stdio.h>

int main(void)
{
	int a=1;
	int kol=-1;	
	while(a!=0)
	{
		scanf("%d",&a);
		if ((a%2)==0)
			kol=kol+1;
	}
	printf("%d",kol);
	return 0;
}

