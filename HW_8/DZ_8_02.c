#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

int mini (int mas[], int n)
{
	int min=mas[0];
	for (int i=0; i<n; i++)
		if(min>mas[i])
			min=mas[i];
	return min;
}

int main(void)
{
	enum {n=5};
	int mas[n];
	vvod(mas,n);
	printf("%d",mini(mas,n));
	return 0;
}
