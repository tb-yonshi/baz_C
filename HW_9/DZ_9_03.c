#include <stdio.h>

void print_digit(char s[], int size)
{
	for (int i=0; i<size-1; i++)
	{
		for (int j=0; j<size-i-1;j++)
			if (s[j]>s[j+1])
			{
				char a=s[j+1];
				s[j+1]=s[j];
				s[j]=a;
			}
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
	print_digit(s,i);
	return 0;
}
