#include <stdio.h>

int main(void)
{
	int flag=1;
	int a,ch1,ch2;
	scanf ("%d", &a);
	while ((a>10)&&(flag!=0))
	{
		ch1=a%10;
		a=a/10;
		ch2=a%10;
		if (ch1<=ch2)
			flag=0;
	}
	if (flag==0)
		printf("NO");
	else
		printf("YES");
	return 0;
}

