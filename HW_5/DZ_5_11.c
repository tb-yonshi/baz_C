#include <stdio.h>

int main(void)
{
	int a,ch;
	int itog=0;
	scanf ("%d", &a);
	while (a!=0)
	{
		ch=a%10;
		a=a/10;
		itog=(itog+ch)*10;
	}
	itog=itog/10;
	printf("%d ", itog);
	return 0;
}
