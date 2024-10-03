#include <stdio.h>

void inp (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
	return;
}

void sdvig(int mas[], int n)
{
	int a=mas[n-1];
	for (int i=(n-1); i>0; i--)
		mas[i]=mas[i-1];
	mas[0]=a;
	return;
}

void outp(int mas[], int n)
{
	for (int i=0; i<n; i++)
		printf("%d ", mas[i]);
	return;
}

int main(void)
{
	enum {n=10};
	int mas[n];
	inp(mas,n);
	sdvig(mas,n);
	outp(mas,n);
	return 0;
}
