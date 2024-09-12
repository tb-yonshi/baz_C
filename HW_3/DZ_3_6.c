#include <stdio.h>

int main(void)
{
	int a,n;
	int p=1;
	scanf ("%d", &n);
	for (int i=0; i<3; i++)
	{
		a=n%10;
		p=p*a;
		n=n/10;
	}	
	printf ("%d", p);
	return 0;
}
