#include <stdio.h>

int main(void)
{
	int ch=0;
	int a;
	scanf ("%d", &a);
	for (int i=1; i<a;i++)
	{
		if ((a%i)==0)
			ch=ch+1;		
	}
	if ((ch-1)==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}

