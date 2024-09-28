#include <stdio.h>

void stroka(void)
{
	char a;
	if ((a=getchar())!='.')
		stroka();
	if (a!='.')
		putchar(a);
}

int main(void)
{
	stroka();
	return 0;
}
