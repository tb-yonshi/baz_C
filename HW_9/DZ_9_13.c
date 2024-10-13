#include <stdio.h>

int count_between(int from, int to, int size, int a[])
{
	int kol = 0;
	int x;
	if (from>to)
	{
		x=from;
		from=to;
		to=x;
	}
	for (int i=0; i<size; i++)
		if ((a[i]>=from)&&(a[i]<=to))
			kol++;
	return kol;
}

int main(void)
{
	int from, to;
	scanf("%d %d", &from, &to);
	int size;
	scanf ("%d", &size);
	int mas[size];
	for (int i=0; i<size; i++)
		scanf("%d", &mas[i]);
	printf("%d", count_between(from,to,size,mas));
	return 0;
}

