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
	{
		int max=*(mas+i*n+0);
		for (int j=0; j<m; j++)
			if (*(mas+i*n+j)>max)
				max=*(mas+i*n+j);
		sum=sum+max;
	}
	return sum;
}

int main(void)
{
	int n=10, m=10;
	int* mas;
	mas=(int*)malloc(n*m*sizeof(int));
	input (mas,n,m);
	printf("%d", obrab (mas,n,m));
	return 0;
}

