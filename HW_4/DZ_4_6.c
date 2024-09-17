#include <stdio.h>

int main(void)
{
	int a,b;
    printf("Input number:");
	scanf ("%d %d", &a, &b);
	if (a==b)
	{
        printf("Equal");	
	}
    else
    {
		if (a>b)
		{
			printf("Above");
		}
		else
		{
			printf("Less");
		}
	}	
	return 0;
}

