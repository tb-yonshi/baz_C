#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

float sred(int mas[], int n)
{
	float sum=0, kol=0;
	for (int i=0; i<n; i++)
	{
		sum=sum+mas[i];
		kol=kol+1;
	}
	return sum/kol;
}

int main(void)
{
	enum {n=12};
	int mas[n];
	vvod(mas,n);
	printf("%.2f",sred(mas,n));
	return 0;
}
