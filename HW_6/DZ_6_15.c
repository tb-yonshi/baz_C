#include <stdio.h>

int vozr (int a)
{
	int flag=0, ch=a%10;
	a=a/10;
	while (a>0)
	{
		if (ch<=(a%10))
			flag=flag+1;
		ch=a%10;
		a=a/10;
		
	}
	return (flag==0);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	vozr(a)? printf("YES"):printf("NO"); 
	return 0;
}

