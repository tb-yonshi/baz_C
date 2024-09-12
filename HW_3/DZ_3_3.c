#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	float d;
	printf("Input number:");
	scanf ("%d %d %d", &a, &b, &c);
	d=(float)(a+b+c)/3;
	printf ("%.2f", d);
	return 0;
}

