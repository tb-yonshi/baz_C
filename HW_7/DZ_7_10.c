#include <stdio.h>

int prost (int a, int ch)
{
	if (a<2)
		printf("NO");
	if (ch>1)
	{
		if ((a%ch)==0)
			printf("NO");
		else
			prost(a,ch-1);
	}
	if (ch==1)
		printf("YES");
}

int main(void)
{
	int a,ch;
	scanf("%d",&a);
	ch=a-1;
	prost(a,ch);
	return 0;
}
