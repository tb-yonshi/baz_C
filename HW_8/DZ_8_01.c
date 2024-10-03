#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

float sred (int mas[], int n)
{
	float sum=0;
	for (int i=0; i<n; i++)
		sum=sum+mas[i];
	return sum/n;
}

int main(void)
{
	enum {n=5};
	int mas[n];
	vvod(mas,n);
	printf("%.3f",sred(mas,n));
	return 0;
}
