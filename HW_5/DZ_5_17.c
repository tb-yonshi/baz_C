#include <stdio.h>

int main(void)
{
	int a,ch,c;
	int sum=0;
	int pr=1;
	scanf ("%d", &a);
	for (int i=10; i<=a; i++)
	{
		c=i;
		while (c>9)
		{
			ch=c%10;
			c=c/10;
			sum=sum+ch;
			pr=pr*ch;
		}
		sum=sum+c;
		pr=pr*c;
		if (sum==pr)
			printf("%d ", i);
		sum=0;
		pr=1;		
	}
	return 0;
}

