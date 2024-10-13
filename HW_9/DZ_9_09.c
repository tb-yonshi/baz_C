#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
	int max=0;
	int pos=0;
	while(max==0)
	{
		if (a[pos]<0)
			max=a[pos];
		pos++;
	}
	pos=-1;
	for (int i=0; i<size; i++)
		if ((a[i]<0)&&(a[i]>=max))
		{
			max=a[i];
			pos=i;
		}
	if (pos>=0)
	{
		a[pos]=a[size-1];
		a[size-1]=max;
	}
}

int main(void)
{
	int size;
	scanf("%d", &size);
	int mas[size];
	for (int i=0; i<size; i++)
		scanf("%d", &mas[i]);
	swap_negmax_last(size, mas);
	for (int i=0; i<size; i++)
		printf("%d ", mas[i]);
	return 0;
}

