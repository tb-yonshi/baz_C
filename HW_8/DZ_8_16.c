#include <stdio.h>

void inp (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
	return;
}

int maxx(int mas[], int n)
{
	int kol,kolm=0, mesto=0;
	for (int j=0; j<n; j++)
	{
		kol=0;
		for (int i=j; i<n;i++)
		{
			if (mas[i]==mas[j])
				kol++;
		}
		if (kol>kolm)
		{
			kolm=kol;
			mesto = j;
		}
	}
	return mas[mesto];
}

int main(void)
{
	enum {n=10};
	int mas[n];
	inp(mas,n);
	printf("%d",maxx(mas,n));
	return 0;
}
