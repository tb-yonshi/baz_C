#include <stdio.h>

static int kol=0;

void inp (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
	return;
}

void sort(int mas[], int ots[], int n)
{
	for (int i=0; i<n;i++)
		if (mas[i]>0)
		{
			ots[kol]=mas[i];
			kol++;
		}
	for (int i=0; i<n;i++)
		if (mas[i]<0)
		{
			ots[kol]=mas[i];
			kol++;
		}
	return;
}

void outp(int ots[], int kol)
{
	for (int i=0; i<kol; i++)
		printf("%d ", ots[i]);
	return;
}

int main(void)
{
	enum {n=10};
	int mas[n], ots[n];
	inp(mas,n);
	sort(mas,ots,n);
	outp(ots,kol);
	return 0;
}
