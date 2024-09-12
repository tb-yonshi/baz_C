#include <stdio.h>

int main(void)
{
	int a,n;
	int s=0;
	scanf ("%d", &n);
	for (int i=0; i<3; i++)
	{
		a=n%10;
		s=s+a;
		n=n/10;
	}	
	printf ("%d", s);
	return 0;
}
