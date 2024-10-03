#include <stdio.h>

static int m=0;

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void chisla(int mas[], int nepov[], int n)
{
	for (int i=0; i<n; i++)
	{
		int kol=0;
		for (int j=0; j<n; j++)
			if (mas[i]==mas[j])
				kol++;		
		int fl=0;
		for (int j=0; j<m; j++)
			if (mas[i]==nepov[j])
				fl++;
		if ((kol==1)&&(fl==0))
		{
			nepov[m]=mas[i];
			m++;
		}
	}
	return;
}

void outp (int nepov[], int m)
{
	for (int i=0;i<m;i++)
		printf ("%d ",nepov[i]);
}


int main(void)
{
	enum {n=10};
	int mas[n],nepov[n];
	vvod(mas,n);
	chisla(mas,nepov,n);
	outp(nepov,m);
	return 0;
}
