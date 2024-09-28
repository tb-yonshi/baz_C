#include <stdio.h>

int k=1;

int kolich(int n, int k)
{
	if (n>=1)
	{
		for (int i=1; i<=k; i++)
		{
			printf("%d ", k);	
			n=n-1;
			if (n<=0)
				break;
		}
		kolich(n,k+1);
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	kolich(a,k);
	return 0;
}

