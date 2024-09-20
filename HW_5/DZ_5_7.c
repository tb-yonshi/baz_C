#include <stdio.h>

int main(void)
{
	int a,c,b,ch;
	int kol=0;	
	scanf("%d",&a);
	while (a>0)
	{
		ch=a%10;
		a=a/10;
		c=a;
		while (c>0)
		{
			b=c%10;
			if (b==ch)
				kol++;
			c=c/10;
		}
	}
	if (kol==0)
		printf("NO");
	else
		printf("YES");
	return 0;
}

