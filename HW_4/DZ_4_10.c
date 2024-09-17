#include <stdio.h>

int main(void)
{
	int a;
    printf("Input number:");
	scanf ("%d", &a);
	if (((a>0)&&(a<=2))||(a==12))
	{
        printf("winter");	
	}
    else
    {
		if ((a>2)&&(a<=5))
		{
			printf("spring");
		}
		else
		{
			if ((a>5)&&(a<=8))
			{
				printf("summer");
			}
			else
			{
				printf("autumn");
			}
		}
	}	
	return 0;
}

