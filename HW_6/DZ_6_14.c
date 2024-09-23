#include <stdio.h>

int summ(int a)
{
	int rez=0;
	while (a>0)
	{
		rez=rez+a%10;
		a=a/10;
	}
	return(rez%2==0);
}

int main(int argc, char **argv)
{
	int a;
	scanf ("%d",&a);
	summ(a)? printf("YES"):printf("NO"); 
	return 0;
}

