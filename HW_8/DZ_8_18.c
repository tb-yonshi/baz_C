#include <stdio.h>

void krat (int a)
{
	for (int i=2; i<=9; i++)
	{
		int kol=0;
		for (int j=2; j<=a; j++)
		{
			if ((j%i)==0)
				kol++;
		}
		printf ("%d %d\n", i, kol);
	}
}

int main(void)
{
	int a;
	scanf("%d", &a);
	krat(a);
	return 0;
}
