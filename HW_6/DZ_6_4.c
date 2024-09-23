#include <stdio.h>

int fynk(int a)
{
	int rez;
	if ((a>=-2)&&(a<2))
		rez=a*a;
	if (a>=2)
		rez = a*a+4*a+5;
	if (a<-2)
		rez=4;	
	return (rez);
}
	
int main(void)
{
	int max=0;
	int a=1;
	while(a!=0)
	{
		scanf("%d",&a);
		if (max<fynk(a))
			max=fynk(a);
	}
	printf("%d",max);
	return 0;
}

