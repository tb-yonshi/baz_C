#include <stdio.h>

int lost (int mas[], int size)
{
	int min=mas[0], max=mas[0];
	for (int i=0; i<size; i++)
	{
		if (min>mas[i])
			min=mas[i];
		if (max<mas[i])
			max=mas[i];
	}
	for (int i=min; i<=max; i++)
	{
		int kol=0;
		for (int j=0; j<size; j++)
			if (mas[j]==i)
				kol=1;
		if (kol==0)
			return i;
	}
}

int main(void)
{
	int kol=0;
	int mas[1000];
	scanf("%d", &mas[kol]);
	while ((mas[kol])!=0)
	{
		kol++;
		scanf("%d", &mas[kol]);
	}
	printf("%d", lost(mas,kol));
	return 0;
}



