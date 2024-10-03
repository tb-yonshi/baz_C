#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

int sumpol(int mas[], int n)
{
	int sum=0;
	for (int i=0; i<n; i++)
		if(mas[i]>0)
			sum=sum+mas[i];
	return sum;
}

int main(void)
{
	enum {n=10};
	int mas[n];
	vvod(mas,n);
	printf("%d",sumpol(mas,n));
	return 0;
}
