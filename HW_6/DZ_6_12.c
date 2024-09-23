#include <stdio.h>

const float pi=3.1415926535;

float sinx (float x)
{
	float xn=x, rez=0;
	int i=1;
	while ((xn>0.001)||(xn<(-0.001)))
	{
		rez=rez+xn;
		xn=-xn*x*x/((2*i)*(2*i+1));
		i=i+1;
	}
	return(rez);
}

int main(void)
{
	float x;
	scanf ("%f", &x);
	x=x*pi/180;
	printf("%.3f",sinx(x));
	return 0;
}

