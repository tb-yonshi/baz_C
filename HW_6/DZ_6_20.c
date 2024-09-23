#include <stdio.h>

int skob(char a)
{
	int zak=0, ot=0;
	while(a!='.')
	{
		if (a=='(')
			ot=ot+1;
		if (a==')')
			zak=zak+1;
		if ((ot==0)&&(zak==1))
			break;
		scanf("%c",&a);
	}
	return (ot==zak);
}

int main(void)
{
	char a;
	scanf("%c",&a);
	skob(a)? printf("YES"):printf("NO"); 
	return 0;
}

