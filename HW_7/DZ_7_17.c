#include <stdio.h>

int akkerman (int m, int n)
{
	if (m==0)
		return n+1;
	if ((m>0)&&(n==0))
		return (akkerman(m-1,1));
	if ((m>0)&&(n>0))
		return (akkerman(m-1,akkerman(m,n-1)));
}

int main(void)
{
	int m,n;
	scanf("%d %d", &n,&m);
	printf("%d", akkerman(n,m));
	return 0;
}
