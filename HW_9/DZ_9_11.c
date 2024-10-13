#include <stdio.h>

void two_min(int size, int a[])
{
	int ch1=a[0], max=a[0];
	int pos1=0;
	for (int i=0; i<size; i++)
		if (a[i]<ch1)
		{
			ch1=a[i];
			pos1=i;
		}
	for (int i=0; i<size; i++)
		if (max<a[i])
			max=a[i];
	a[pos1]=max;
	int ch2=a[0], pos2=0;
	for (int i=0; i<size; i++)
		if ((ch2>a[i])&&(ch1<=ch2))
		{
			ch2=a[i];
			pos2=i;
		}
	if (pos1>pos2)
	{
		int k=pos2;
		pos2=pos1;
		pos1=k;
	}
	printf("%d %d", pos1, pos2);
}

int main(void)
{
	int size=30;
	int mas[size];
	for (int i=0; i<size; i++)
		scanf("%d", &mas[i]);
	two_min(size,mas);
	return 0;
}

