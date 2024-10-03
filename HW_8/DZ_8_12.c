#include <stdio.h>

void inp (int mas[], int a)
{
	for (int i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void sort(int mas[], int n)
{
	for (int i=0; i<(n/2); i++)
		for (int j=0; j<n/2-i-1;j++)
			if (mas[j]>=mas[j+1])
			{
				int a=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=a;
			}
	for (int i=(n/2); i<n; i++)
	{
		int k=0;
		for (int j=n/2; j<n-k-1;j++)
			if (mas[j]<=mas[j+1])
			{
				int a=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=a;
			}
		k++;
	}
	
	return;
}

void outp (int mas[], int n)
{
	for (int i=0;i<n;i++)
		printf ("%d ",mas[i]);
	return;
}

int main(void)
{
	enum {n=10};
	int mas[n];
	inp(mas,n);
	sort(mas,n);
	outp (mas,n);
	return 0;
}
