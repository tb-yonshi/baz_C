#include <stdio.h>

int main(void)
{
	char a=' ';
	while(a!='.')
	{
		scanf("%c",&a);
		if (a>='A' && a<='Z')
			a=a+0x20;
		if (a!='.')
			printf("%c",a);
	}	
	return 0;
}

