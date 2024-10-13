#include <stdio.h>

int is_two_same(int size, int a[])
{
	for (int i=0; i<size; i++)
		for (int j=i+1; j<size; j++)
			if (a[i]==a[j])
				return 1;
	return 0;
}

int main(void)
{
	int size;
	scanf("%d", &size);
	int mas[size];
	for (int i=0; i<size; i++)
		scanf("%d", &mas[i]);
	if (is_two_same(size, mas)==1)
		printf("YES");
	else
		printf("NO");
	return 0;
}



