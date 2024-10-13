#include <stdio.h>
#include <stdlib.h>

int count_bigger_abs(int n, int a[])
{
	int max = a[0];
	int kol=0;
	for (int i=0; i<n; i++)
		if (max<a[i])
			max=a[i];
	for (int i=0; i<n; i++)
		if (abs(a[i])>max)
			kol++;
	return kol;
}

int main(void)
{
	int n;
	int* mas;
	scanf("%d", &n);
	mas=(int*)malloc(n*sizeof(int));
	for (int i=0; i<n; i++)
		scanf("%d", &mas[i]);
	printf("%d", count_bigger_abs(n,mas));
	return 0;
}

