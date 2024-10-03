#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void sdvig(int mas[], int inv[], int n)
{
	int k=0;
	for (int i=(n/(n/3)); i>0; i--)
		for (int j=1; j<=(n/3); j++)
		{
			inv[k]=mas[(n-(i-1)*(n/3))-j];
			k++;
		}
	for (int i=0;i<n;i++)
		printf ("%d ",inv[i]);
	return;
}

int main(void)
{
	enum {n=12};
	int mas[n],inv[n];
	vvod(mas,n);
	sdvig(mas,inv,n);
	return 0;
}
