#include <stdio.h>

int rekurs(int a, int b, int c)
{
	if(c>=0)
	{
		if (a>=b)
		{
			printf ("%d ", a);
			rekurs(a-1,b,c);
		}
	}	
	else
	{
		if (b>=a)
		{
			rekurs(a,b-1,c);
			printf ("%d ", b);
			
		}
	}
}

int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a-b;
	rekurs(a,b,c);
	return 0;
}
