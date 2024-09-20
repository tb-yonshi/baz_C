#include <stdio.h>

int main(void)
{
	int a,ch=0,nch=0;
	scanf("%d",&a);	
	while (a>0)
	{
		if ((a%10)%2==0)
			ch++;
		else
			nch++;
		a=a/10;
	}
	printf("%d %d",ch,nch);
	return 0;
}

