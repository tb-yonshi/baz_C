#include <stdio.h>

static int kol=0;

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void opr(int mas[], int nul[], int n)
{
	for (int i=0; i<n; i++)
		if ((mas[i]%100)<10)
		{
			nul[kol]=mas[i];
			kol++;
		}
	return;
}

void outp (int nul[], int kol)
{
	for (int i=0;i<kol;i++)
		printf ("%d ",nul[i]);
}


int main(void)
{
	enum {n=10};
	int mas[n],nul[n];
	vvod(mas,n);
	opr(mas,nul,n);
	outp(nul,kol);
	return 0;
}
