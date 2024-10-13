#include <stdio.h>

void sort_even_odd(int n, int a[])
{
	int mas[n];
	int kol=0;
	for (int i=0; i<n; i++)
		if ((a[i]%2)==0)
		{
			mas[kol]=a[i];
			kol++;
		}
	for (int i=0; i<n; i++)
		if (((a[i]%2)==1)||((a[i]%2)==(-1)))
		{
			mas[kol]=a[i];
			kol++;
		}
	for (int i=0; i<n; i++)
		a[i]=mas[i];
}

int main(void)
{
	int size;
	scanf("%d", &size);
	int mas[size];
	for (int i=0; i<size; i++)
		scanf("%d", &mas[i]);
	sort_even_odd(size, mas);
	for (int i=0; i<size; i++)
		printf("%d ", mas[i]);
	return 0;
}



