#include <stdio.h>
#include <stdlib.h>

void chisla (int mas[], int m, int a)
{
	for (int i=m-1; i>=0; i--)
	{
		mas[i]=a%10;
		a=a/10;
	}
}

void outp (int mas[], int m)
{
	for (int i=0;i<m;i++)
		printf ("%d ",mas[i]);
}


int main(void)
{
	int a,c, m=0;
	scanf("%d", &a);
	c=a;
	while (c>0)
	{
		m++;
		c=c/10;
	}
	int *mas;
	mas=(int*)malloc(m*sizeof(int));
	chisla(mas, m, a);
	outp(mas,m);
	return 0;
}

