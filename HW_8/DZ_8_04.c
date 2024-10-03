#include <stdio.h>

void vvod (int mas[], int a)
{
	int i;
	for (i=0; i<a; i++)
		scanf("%d", &mas[i]);
}

int maxi (int mas[], int n)
{
	int max1=mas[0], pos=0, p=0;
	for (int i=0; i<n; i++)
		if(max1<=mas[i])
		{
			max1=mas[i];
			p=i;
			pos=i;
		}
	if (pos==0)
		pos=pos+2;
	mas[p]=mas[pos-1];	
	int max2=mas[0];	
	for (int i=0; i<n; i++)
		if((max2<=mas[i]))
			max2=mas[i];
	return max2+max1;
}

int main(void)
{
	enum {n=10};
	int mas[n];
	vvod(mas,n);
	printf("%d",maxi(mas,n));
	return 0;
}
