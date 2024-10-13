#include <stdio.h>
#include <stdlib.h>

void input(int mas[], int n)
{
	for (int i=1; i<n; i++)
		scanf("%d", &mas[i]);
	return;
}

void sort_array(int n, int mas[])
{
	for (int i=0; i<n-1;i++)
		for (int j=0; j<n-i-1;j++)
			if ((mas[j])>=(mas[j+1]))
			{
				int a=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=a;
			}	
	return;
}

void outp (int mas[], int n)
{
	for (int i=0;i<n;i++)
		printf ("%d ",mas[i]);
}


int main(void)
{
	int n;
	scanf("%d", &n);
	if (n<=1)
		printf("%d", n);
	else
		{
			int *mas;
			mas=(int*)malloc(n*sizeof(int));
			mas[0]=n;
			input(mas, n);
			sort_array(n, mas);
			outp(mas, n);
		}
	return 0;
}

