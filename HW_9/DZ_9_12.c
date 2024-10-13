#include <stdio.h>

void change_max_min(int size, int a[])
{
	int pmin=0, pmax=0;
	int min=a[0], max=a[0];
	for (int i=0; i<size; i++)
		if (a[i]>max)
		{
			max=a[i];
			pmax=i;
		}
	for (int i=0; i<size; i++)
		if (a[i]<min)
		{
			pmin=i;
			min=a[i];
		}
	a[pmin]=max;
	a[pmax]=min;
}

int main(void)
{
	int size;
	scanf ("%d", &size);
	int mas[size];
	for (int i=0; i<size; i++)
		scanf("%d", &mas[i]);
	change_max_min(size,mas);
	return 0;
}

