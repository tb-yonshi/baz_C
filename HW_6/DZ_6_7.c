#include <stdio.h>

int perevod (int ch, int step)
{
	int rez=0, rezpe=10;
	int ost;
	while (ch>=step)
	{
		ost=ch%step;
		rezpe=((rezpe+ost)*10);
		ch=ch/step;
	}
	rezpe=rezpe+ch;
	while (rezpe>0)
	{
		rez=(rez+(rezpe%10))*10;
		rezpe=rezpe/10;
	}
	rez=rez/100;
	
	return (rez);
}

int main(void)
{
	int n, step;
	scanf("%d %d", &n, &step);
	printf("%d",perevod(n,step));
	return 0;
}

