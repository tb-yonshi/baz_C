#include <stdio.h>
int rez=1;

int step(int a, int b)
{
	if (b==0)
		return rez;
	if (b>0)
		rez=rez*a;
	return(step(a,b-1));
}

int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d",step(a,b));
	return 0;
}
