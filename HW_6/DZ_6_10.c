#include <stdio.h>

int prt(int a)
{
	int del=2;
	while (a!=1)
	{
		if ((a%del)==0)
		{
			a=a/del;
			printf("%d ",del);
		}
		else
			del=del+1;
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	prt(a);
	return 0;
}
