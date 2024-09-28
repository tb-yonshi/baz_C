#include <stdio.h>

int step (int a, int s)
{
	if (a==s)
		return 0;
	if (a>s)
		return (step(a,s*2));
	if (a<s)
		return (-1);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	if (step(a,1)==0)
		printf("YES");
	else
		printf ("NO");
	return 0;
}
