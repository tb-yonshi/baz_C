#include <stdio.h>

int main(void)
{
	int ch=0;
	int a,b;
	scanf ("%d", &a);
	while((ch==0)&&(a!=0))
	{
		b=a%10;
		a=a/10;
		ch = ((b%2)==0) ? ch : (ch+1);
	}
	if (ch==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}

