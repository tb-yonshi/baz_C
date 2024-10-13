#include <stdio.h>
#include <stdlib.h>

void input (int mas[], int n, int m)
{
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			scanf("%d", (mas+i*n+j));
}

int obrab (int mas[], int n, int m)
{
	int sum=0;
	for (int i=0; i<n; i++)
		sum=sum+*(mas+i*n+i);
	return sum;
}

int main(void)
{
	int n=5, m=5;
	int* mas;
	mas=(int*)malloc(n*m*sizeof(int));
	input (mas,n,m);
	printf("%d", obrab (mas,n,m));
	return 0;
}

