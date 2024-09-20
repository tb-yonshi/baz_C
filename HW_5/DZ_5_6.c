#include <stdio.h>

int main(void)
{
	int ch=0;
	int a;
	scanf ("%d", &a);
	while ((a>10)&&(ch==0))
	{
		if (((a%100)%11)==0)
			ch=ch+1;
		a=a/10;
	}
	if (ch==1)
		printf("YES");
	else
		printf("NO");
	return 0;
}
