#include <stdio.h>

int find_max_array(int size, int a[])
{
	int max=a[0];
	for (int i=0; i<size; i++)
		if (max<a[i])
			max=a[i];
	return max;
}

int main(void)
{
	int size;
	scanf("%d", &size);
	int mas[size];
	for (int i; i<size; i++)
		scanf("%d", &mas[i]);
	printf("%d", find_max_array(size, mas));	
	return 0;
}



