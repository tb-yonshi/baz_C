#include <stdio.h>

void input(int mas[], int n)
{
	for (int i=0; i<n; i++)
		scanf("%d", &mas[i]);
	return;
}

void obrab(int mas[], int n)
{
	int kolch=0;
	for (int i=0;i<n;i++)
		if (mas[i]%2==0)
			kolch++;	
	if (kolch>(n/2))
		for (int i=0; i<n; i++)
		{
			if (mas[i]%2==1)
			{
				int prnch=1;
				while (mas[i]>0)
				{
					int k = mas[i]%10;
					if ((k%2)==1)
						prnch=prnch*k;
					mas[i]=mas[i]/10;
				}
				mas[i]=prnch;
			}
		}
	else
		for (int i=0; i<n; i++)
		{
			if (mas[i]%2==0)
			{
				int prch=1;
				while (mas[i]>0)
				{
					if (((mas[i]%10)%2)==0)
						prch=prch*(mas[i]%10);
					mas[i]=mas[i]/10;
				}
				mas[i]=prch;
			}
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
	enum {n=10};
	int mas[n];
	input(mas,n);
	obrab(mas,n);
	outp(mas,n);
	return 0;
}

