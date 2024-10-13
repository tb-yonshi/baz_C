#include <stdio.h>

int compression(int a[], int b[], int N)
{
	int ch=a[0];
	int kol=0, j=0;
	if (a[0]==1)
	{
		b[0]=0;
		j=1;
	}
	for (int i=0; i<N; i++)
	{
		if (ch==a[i])
			kol++;
		else
		{
			b[j]=kol;
			ch=a[i];
			kol=1;
			j++;
		}
	}
	b[j]=kol;
	return j+1;
}

int main(void)
{
	int N;
	scanf("%d", &N);
	int a[N],b[N];
	for (int i=0; i<N; i++)
		scanf("%d", &a[i]);
	int m=compression(a,b,N);
	for (int i=0; i<m; i++)
		printf("%d ", b[i]);
	return 0;
}

