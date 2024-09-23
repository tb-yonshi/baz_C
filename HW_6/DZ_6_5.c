#include <stdio.h>

int summ(int a)
{
	int rez=0;
	for (int i=1;i<=a;i++)
		rez=rez+i;
	return(rez);
}

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", summ(a));
	return 0;
}
