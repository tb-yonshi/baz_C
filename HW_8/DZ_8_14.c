#include <stdio.h>

static int m=0;

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void sdvig(int mas[], int povtor[], int n)
{
	for (int i=0; i<n; i++)
	{
		int kol=0;
		for (int j=0; j<n; j++)
			if (mas[i]==mas[j])
				kol++;		
		int fl=0;
		for (int j=0; j<m; j++)
			if (mas[i]==povtor[j])
				fl++;
		if ((kol>1)&&(fl==0))
		{
			povtor[m]=mas[i];
			m++;
		}
	}
	return;
}

void outp (int povtor[], int m)
{
	for (int i=0;i<m;i++)
		printf ("%d ",povtor[i]);
}


int main(void)
{
	enum {n=10};
	int mas[n],povtor[n];
	vvod(mas,n);
	sdvig(mas,povtor,n);
	outp(povtor,m);
	return 0;
}
