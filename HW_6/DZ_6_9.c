#include <stdio.h>

int fakt(int n)
{
	int rez=1;
	for (int i=1; i<=n; i++)
		rez=rez*i;
	return (rez);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d",fakt(n));
	return 0;
}

