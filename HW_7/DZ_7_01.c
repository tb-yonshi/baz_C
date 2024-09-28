#include <stdio.h>

void rekurs(int a)
{
	if(a>1)
		rekurs(a-1);
	printf ("%d ", a);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	rekurs(a);
	return 0;
}

