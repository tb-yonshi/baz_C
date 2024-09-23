#include <stdio.h>

int step(int a,int b)
{
	int otv=1;
	for (int i=1; i<=b; i++)
		otv=otv*a;
	return (otv);
}

int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", step(a,b));
	return 0;
}

