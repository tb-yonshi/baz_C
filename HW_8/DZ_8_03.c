#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

void maxi (int mas[], int n)
{
	int max=mas[0];
	int nom=1;
	for (int i=0; i<n; i++)
		if(max<mas[i])
		{
			nom=i+1;
			max=mas[i];
		}
	printf ("%d %d ", nom, max);
}

void mini(int mas[],int n)
{
	int min=mas[0];
	int nom=1;
	for (int i=0; i<n; i++)
		if(min>mas[i])
		{
			nom=i+1;
			min=mas[i];
		}
	printf ("%d %d", nom, min);
}

int main(void)
{
	enum {n=10};
	int mas[n];
	vvod(mas,n);
	maxi(mas,n);
	mini(mas,n);
	return 0;
}
