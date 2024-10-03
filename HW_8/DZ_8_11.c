#include <stdio.h>

void inp (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
	return;
}

void sort(int mas[], int n)
{
	for (int i=0; i<n-1;i++)
	
		for (int j=0; j<n-i-1;j++)
		
			if ((mas[j]%10)>=(mas[j+1]%10))
			{
				int a=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=a;
			}
		
	
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
	sort(mas,n);
	outp(mas,n);
	return 0;
}
