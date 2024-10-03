#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void invers(int mas[], int inv[], int n)
{
	for (int i=0; i<(n/2); i++)
		inv[n-n/2-i-1]=mas[i];
	for (int i=(n/2); i<n; i++)
		inv[n-i+(n/2-1)]=mas[i];
	for (int i=0;i<n;i++)
		printf ("%d ",inv[i]);
	return;
}

int main(void)
{
	enum {n=10};
	int mas[n],inv[n];
	vvod(mas,n);
	invers(mas,inv,n);
	return 0;
}
