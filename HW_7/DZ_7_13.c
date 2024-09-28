#include <stdio.h>

void prostch(int n, int k)
{
	if (n==1)
		return;
	while (n>1)
	{
		if ((n%k)==0)
		{
			printf("%d ", k);
			prostch(n/k,k);
			return;
		}
			k=k+1;
	}
	return;
}

int main(void)
{
	int a;
	scanf("%d",&a);
	prostch(a,2);
	return 0;
}
