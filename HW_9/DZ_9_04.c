#include <stdio.h>

void print_digit(char s[])
{
	int size=0;
	char c=s[0];
	while(c!='\0')
	{
		size++;
		c=s[size];
	}
	for (int k=0; k<size; k++)
		if ((s[k]>='0')&&(s[k]<='9'))
		{
			char ch=s[k];
			int kol=1;
			s[k]='a';
			for (int j=k; j<size; j++)
				if (s[j]==ch)
				{
					kol++;
					s[j]='a';
				}
			printf("%c %d\n", ch, kol);
		}
}

int main(void)
{
	char s[100],c;
	int i=0;
	while ((c=getchar())!='\n')
		s[i++]=c;
	s[i]='\0';
	print_digit(s);
	return 0;
}
