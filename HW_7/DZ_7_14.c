#include <stdio.h>

void nech_ch(int a)
{
	scanf("%d",&a);
	if (a==0)
		return;
	if ((a%2)!=0)
		printf("%d ", a);
	nech_ch(a);
}

int main(void)
{
	int a=0;
	nech_ch(a);
	return 0;
}

