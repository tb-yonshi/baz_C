#include <stdio.h>
#include <stdlib.h>

void input(float *mas, int n, int m)
{
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			scanf("%f", (mas+i*n+j));
}

int sred(float *mas, int n, int m)
{
	float sredn=0;
	int kol=0;
	for (int i=0; i<n; i++)
		sredn=sredn+*(mas+i*m+i);
	sredn=sredn/n;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (*(mas+i*m+j)>sredn)
				kol++;
	return (kol);
}

int main(void)
{
	int m=5,n=5;
	float* mas;
	mas=(float*)malloc(n*m*sizeof(float));
	input(mas,n,m);	
	printf("%d",sred(mas,n,m));
	return 0;
}

