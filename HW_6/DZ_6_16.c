#include <stdio.h>

int prost(int a)
{
	int ch=0;
	for (int i=1; i<a;i++)
		if ((a%i)==0)
			ch=ch+1;		
	return((ch-1)==0);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	prost(a)? printf("YES"):printf("NO"); 
	return 0;
}

