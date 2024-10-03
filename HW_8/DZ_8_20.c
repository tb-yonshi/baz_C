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

void sort(int mas[], int m)
{
	for (int i=0; i<m-1;i++)
		for (int j=0; j<m-i-1;j++)
			if ((mas[j])<=(mas[j+1]))
			{
				int a=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=a;
			}	
	return;
}

void outp (int mas[], int m)
{
	for (int i=0;i<m;i++)
		printf ("%d",mas[i]);
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
	sort(mas,m);
	outp(mas,m);
	return 0;
}

